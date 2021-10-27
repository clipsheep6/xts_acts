/*
* Copyright (c) 2021 Huawei Device Co., Ltd.
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#include "st_data_process.h"
#include "libmmi_util.h"
#include "util_ex.h"
#include "log.h"
#include <map>

namespace OHOS::MMI {
namespace {
    static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = { LOG_CORE, MMI_LOG_DOMAIN, "STDataProcess" };
}

STDataProcess::STDataProcess()
{
}

STDataProcess::~STDataProcess()
{
}

/// 接收监控平台——libinput数据包
void STDataProcess::LibinputPktDataProcess(const AutoTestLibinputPkt& libinputPkt)
{
    MMI_LOGI(" 1.LibinputPkt: eventType= %{public}s, keyCode= %{public}d, keyState= %{public}d, rawX= %{public}lf, "
	"rawY= %{public}lf, absoluteX= %{public}lf, absoluteY= %{public}lf \n",
        libinputPkt.eventType, libinputPkt.keyCode, libinputPkt.keyState, libinputPkt.rawX, libinputPkt.rawY,
        libinputPkt.absoluteX, libinputPkt.absoluteY);
    libinputValue_.eventType = libinputPkt.eventType;
    libinputValue_.keyCode = libinputPkt.keyCode;
    libinputValue_.keyState = libinputPkt.keyState;
    libinputValue_.rawX = int(libinputPkt.rawX);
    libinputValue_.rawY = int(libinputPkt.rawY);
    libinputValue_.absoluteX = int(libinputPkt.absoluteX);
    libinputValue_.absoluteY = int(libinputPkt.absoluteY);
	libinputList.push_back(libinputValue_);
}

/// 接收监控平台——事件映射数据包
void STDataProcess::MappingPktDataProcess(int32_t sourceType)
{
    MMI_LOGI(" 2.MappingPkt: sourceType= %{public}d \n", sourceType);
    mapping_.eventType = sourceType;
}

/// 接收监控平台——标准化数据包
void STDataProcess::StandardPktDataProcess(const AutoTestStandardPkt& standardPkt)
{
    MMI_LOGI(" 3.StandardPkt: reRventType= %{public}d, curRventType= %{public}d, keyCode= %{public}d, "
	"keyState= %{public}d, rawX= %{public}lf, rawY= %{public}lf, absoluteX= %{public}lf, absoluteY= %{public}lf \n",
        standardPkt.reRventType, standardPkt.curRventType, standardPkt.keyCode, standardPkt.keyState,
        standardPkt.rawX, standardPkt.rawY, standardPkt.absoluteX, standardPkt.absoluteY);
    standardValue_.curRventType = standardPkt.curRventType;
    standardValue_.key = standardPkt.keyCode;
    standardValue_.rawX = int(standardPkt.rawX);
    standardValue_.rawY = int(standardPkt.rawY);
    standardValue_.reRventType = standardPkt.reRventType;
    standardValue_.State = standardPkt.keyState;
    standardValue_.absoluteX = int(standardPkt.absoluteX);
    standardValue_.absoluteY = int(standardPkt.absoluteY);
}

/// 接收监控平台——应用管理数据包
void STDataProcess::ManagePktDataProcess(const AutoTestManagePkt& managePkt, std::vector<int32_t>& windowList,
    std::vector<AutoTestClientListPkt>& clientList, AutoTestCoordinate coordinate)
{
    MMI_LOGI(" 4.ManagePkt: sizeOfWindowList= %{public}d, focusId= %{public}d, windowId= %{public}d, "
	"sizeOfAppManager= %{public}d \n",
        managePkt.sizeOfWindowList, managePkt.focusId, managePkt.windowId, managePkt.sizeOfAppManager);
    if (manageValue_.appManage.size() == 0) {
        manageValue_.WMS = managePkt.focusId;
        manageValue_.CALL_AMS = managePkt.windowId;
        for (auto iter = windowList.cbegin(); iter != windowList.cend(); iter++) {
            MMI_LOGI(" 4.ManagePkt-2: windowId= %{public}d \n", *iter);
            manageValue_.window_List.push_back(*iter);
        }
        ClientList list = {};
        for (auto iter = clientList.cbegin(); iter != clientList.cend(); iter++) {
            MMI_LOGI(" 4.ManagePkt-3: clientList.fd= %{public}d, clientList.windowId= %{public}d, "
			"clientList.abilityId= %{public}d \n",
                iter->socketFd, iter->windowId, iter->abilityId);
            list.abilityId = iter->abilityId;
            list.fd = iter->socketFd;
            list.surfaceId = iter->windowId;
            manageValue_.appManage.push_back(list);
        }
		MMI_LOGI("4.ManagePkt:  windowRawX = %{public}lf, windowRawY= %{public}lf, windowId= %{public}d, focusWindowRawX = %{public}lf, focusWindowRawY= %{public}lf" ,
		coordinate.windowRawX, coordinate.windowRawY, coordinate.windowId, coordinate.focusWindowRawX, coordinate.focusWindowRawY);
	    //memset_s(&autoTestCoordinate, sizeof(autoTestCoordinate), 0, sizeof(autoTestCoordinate));
		autoTestCoordinate = coordinate;
    }
}

struct AutoTestCoordinate STDataProcess::GetCoordinate(){
	return autoTestCoordinate;
}

/// 接收监控平台——server分发数据包
void STDataProcess::DispatcherPktDataProcess(const AutoTestDispatcherPkt& dispatcherPkt,
    std::vector<float> standardValue)
{
    MMI_LOGI(" 5.DispatcherPkt: eventType= %{public}s, sourceType= %{public}d, keyOfHos= %{public}d, "
	"keyState= %{public}d, rawX= %{public}lf, rawY= %{public}lf, mixedKey= %{public}d, socketFd= %{public}d, "
	"windowId= %{public}d, abilityId= %{public}d, absoluteX= %{public}lf, absoluteY= %{public}lf, "
        " deviceType = %{public}d, inputDeviceType = %{public}d slot= %{public}d \n",
        dispatcherPkt.eventType, dispatcherPkt.sourceType, static_cast<int32_t>(dispatcherPkt.keyOfHos),
        dispatcherPkt.keyState, dispatcherPkt.rawX, dispatcherPkt.rawY, dispatcherPkt.mixedKey,
        dispatcherPkt.socketFd, dispatcherPkt.windowId, dispatcherPkt.abilityId, dispatcherPkt.absoluteX,
        dispatcherPkt.absoluteY, dispatcherPkt.deviceType, dispatcherPkt.inputDeviceId, dispatcherPkt.slot);
    struct Dispatcher dispatcher;
    std::string type = dispatcherPkt.eventType;
    dispatcher.abilityId = dispatcherPkt.abilityId;
    dispatcher.event_Type = dispatcherPkt.eventType;
    dispatcher.fd = dispatcherPkt.socketFd;
    dispatcher.L3key = static_cast<int32_t>(dispatcherPkt.keyOfHos);
    dispatcher.rawX = int(dispatcherPkt.rawX);
    dispatcher.rawY = int(dispatcherPkt.rawY);
    dispatcher.source_Type = dispatcherPkt.sourceType;
    dispatcher.slot = dispatcherPkt.slot;
    dispatcher.state = dispatcherPkt.keyState;
    dispatcher.surfaceId = dispatcherPkt.windowId;
    dispatcher.absoluteX = int(dispatcherPkt.absoluteX);
    dispatcher.absoluteY = int(dispatcherPkt.absoluteY);
    dispatcher.mixedKey = EnumUnderlyingValue(dispatcherPkt.mixedKey);
    dispatcher.deviceType = std::to_string(dispatcherPkt.deviceType);
    dispatcher.deviceId = std::to_string(dispatcherPkt.inputDeviceId);
    dispatcher.axisValueList = standardValue;
    if (dispatcher.mixedKey != 0) {
        mixedKeyServer_.push_back(std::to_string(EnumUnderlyingValue(dispatcherPkt.mixedKey)));
    }
    dispatcherList_.push_back(dispatcher);
}

/// 接收监控平台——客户端接收数据包
void STDataProcess::ClientPktDataProcess(const AutoTestClientPkt& clientPkt)
{
    MMI_LOGI(" 6.ClientPkt: eventType= %{public}s, keyOfHos= %{public}d, keyState= %{public}d, rawX= %{public}lf, "
	"rawY= %{public}lf, callBaceName= %{public}s, socketFd= %{public}d, windowId= %{public}d, abilityId= %{public}d, "
	"absoluteX= %{public}lf, absoluteY= %{public}lf, deviceType = %{public}d, inputDeviceType = %{public}d, "
	"sourceType = %{public}d, slot= %{public}d \n",
        clientPkt.eventType, static_cast<int32_t>(clientPkt.keyOfHos), clientPkt.keyState, clientPkt.rawX,
        clientPkt.rawY, clientPkt.callBakeName, clientPkt.socketFd, clientPkt.windowId, clientPkt.abilityId,
        clientPkt.absoluteX, clientPkt.absoluteY, clientPkt.deviceType, clientPkt.inputDeviceId,
        clientPkt.sourceType, clientPkt.slot);
    struct Client_Pkt client;
    std::string type = clientPkt.eventType;
    client.abilityId = clientPkt.abilityId;
    client.event_Type = clientPkt.eventType;
    client.fd = clientPkt.socketFd;
    client.key = static_cast<int32_t>(clientPkt.keyOfHos);
    client.rawX = int(clientPkt.rawX);
    client.rawY = int(clientPkt.rawY);
    client.state = clientPkt.keyState;
    client.surfaceId = clientPkt.windowId;
    client.absoluteX = int(clientPkt.absoluteX);
    client.absoluteY = int(clientPkt.absoluteY);
    client.onFun = clientPkt.callBakeName;
    client.deviceType = std::to_string(clientPkt.deviceType);
    client.deviceId = std::to_string(clientPkt.inputDeviceId);
    client.source_Type = clientPkt.sourceType;
    client.slot = clientPkt.slot;
    if (client.onFun != "") {
        mixedKeyClient_.push_back(clientPkt.callBakeName);
    }
	//clientPktList_.clear();
	for (auto iter = clientPktList_.cbegin(); iter != clientPktList_.cend(); iter++) {
		MMI_LOGI("\n\n\n\n\n6.ClientPkt: ====================GetActualClientResult====================%{public}d \n\n\n", iter->state);
	}
    clientPktList_.push_back(client);
}

/// 监控平台——系统服务键分发属性数据包，系统服务键分为三类：分发系统或分布式系统，分发应用，分发相机
/// 系统服务或分布式系统, 相机（内置在系统内）:不需要往客户端分发事件
/// 应用：分发事件到客户端
void STDataProcess::KeyTypePktDataProcess(const AutoTestKeyTypePkt& keyTypePkt)
{
    MMI_LOGI(" 4-1.KeyTypePkt: disSystem= %{public}d, disClient= %{public}d, disCamrea= %{public}d \n",
        keyTypePkt.disSystem, keyTypePkt.disClient, keyTypePkt.disCamrea);
    manageValue_.dis_Client = int(keyTypePkt.disClient);
    manageValue_.dis_System = int(keyTypePkt.disSystem);
    manageValue_.dis_Camrea = int(keyTypePkt.disCamrea);
}

/// 客户端与服务端通道信息：surfaceId,fd,abilityId
/// 启动客户端后先将当前所有客户端数据通道信息按启动顺序封装起来，和窗口管理的信息，事件分发的通道信息等进行比对，
/// 确保分发到正确的客户端
void STDataProcess::ClientListPktDataProcess(std::vector<AutoTestClientListPkt>& clientListPkt)
{
	struct ClientList clientList;
	std::vector<int> windowIdList;
	int count_client = 0;
    for (auto iter = clientListPkt.cbegin(); iter != clientListPkt.cend(); iter++,count_client++) {
        MMI_LOGI(" 7.ClientListPkt: clientList.fd= %{public}d, clientList.windowId= %{public}d, "
		"clientList.abilityId= %{public}d , count_client=%{public}d \n",
            iter->socketFd, iter->windowId, iter->abilityId, count_client);
        clientList.abilityId = iter->abilityId;
        clientList.fd = iter->socketFd;
        clientList.surfaceId = iter->windowId;
		MMI_LOGI("\n\n\n7.ClientListPkt: ===================ClientListPktDataProcess=================%{public}d, %{public}d, %{public}d", 
			      iter->abilityId, iter->socketFd, iter->windowId);
		//if (count_client > 0) {
			clientMap_.insert(std::pair<int, struct ClientList>(iter->windowId, clientList));
			windowIdList.push_back(iter->windowId);
		//}
    }
	
	sort(windowIdList.begin(), windowIdList.end());
	for (auto iter = windowIdList.cbegin(); iter != windowIdList.cend(); iter++) {
		windowList += std::to_string(*iter) + ",";
	}
	windowList = windowList.substr(0,windowList.size()-1);
}

std::string STDataProcess::GetWindowsList(){
	return windowList;
}

/// 获取当前所有客户端窗口，通道信息，用来作为用例期望值
struct ClientList STDataProcess::GetClientMsg(int surfaceId)
{
	MMI_LOGI("\n\n\n====================GetClientMsg====================%{public}d", surfaceId);
	struct ClientList clientMsg;
	std::map <int, struct ClientList> map_client;
	if (surfaceId == -1){
		auto map_client = clientMap_.begin();
		clientMsg = (*map_client).second;
		return clientMsg;
	}
	else{
		//获取已知surfaceId对应的客户端信息
		std::map<int,struct ClientList>::iterator iter;
		for (auto iter=clientMap_.begin();iter!=clientMap_.end();++iter) {
			MMI_LOGI("\n\n\n=============================================%{public}d", 
					  iter->first);
			if (iter->first == surfaceId) {
				return iter->second;
			}
		}
	}
    return clientMsg;
}

/// 获取libinput驱动上报的事件信息
std::string STDataProcess::GetLibinputValue()
{
	std::string actualLibinput = "";
	std::string joinStr = "";
	for (auto iter = libinputList.cbegin(); iter != libinputList.cend(); iter++) {
		if ((iter->rawX == 0) && (iter->rawY == 0)) {
			 actualLibinput += joinStr + GetInputValue(iter->eventType, std::to_string(iter->keyCode),
				std::to_string(iter->keyState), std::to_string(iter->absoluteX),
				std::to_string(iter->absoluteY));
		}
		else {
			actualLibinput += joinStr + GetInputValue(iter->eventType, std::to_string(iter->keyCode),
				std::to_string(iter->keyState), std::to_string(iter->rawX),
				std::to_string(iter->rawY));
		}
		joinStr = " & ";
	}
	return actualLibinput;
}

/// 获取libinput驱动上报的事件信息
std::string STDataProcess::GetLibinputValue_touchScreen()
{
	std::string actualLibinput = "";
	for (auto iter = libinputList.cbegin(); iter != libinputList.cend(); iter++) {
		if ((iter->rawX == 0) && (iter->rawY == 0)) {
			 actualLibinput = GetInputValue(iter->eventType, std::to_string(iter->keyCode),
				std::to_string(iter->keyState), std::to_string(iter->absoluteX),
				std::to_string(iter->absoluteY));
		}
		else {
			actualLibinput = GetInputValue(iter->eventType, std::to_string(iter->keyCode),
				std::to_string(iter->keyState), std::to_string(iter->rawX),
				std::to_string(iter->rawY));
		}
	}
	return actualLibinput;
}

/// 获取原始事件类型
std::string STDataProcess::GetmappingResult()
{
    return std::to_string(mapping_.eventType);
}

/// 获取事件标准化数据，标准化后类型分为：手指在指针处触摸屏幕（500），手指从屏幕上抬起（501），手指接触屏幕后移动（502）
std::string STDataProcess::GetStandardResult()
{
    std::string result = "0|0|0|0|0|0";
    if (standardValue_.curRventType == -1) {
        return "/";
    }
    // 只有触屏设备注入参数使用的绝对坐标，其余均为相对坐标注入，
	// 因此默认取相对坐标值校验，相对坐标偏移量为0时使用绝对坐标
    if ((standardValue_.rawX != 0) || (standardValue_.rawY != 0)) {
        result = std::to_string(standardValue_.reRventType) + "|" + std::to_string(standardValue_.curRventType) + "|" +
            std::to_string(standardValue_.key) + "|" + std::to_string(standardValue_.State) + "|" +
            std::to_string(standardValue_.rawX) + "|" + std::to_string(standardValue_.rawY);
    }
    else {
        result = std::to_string(standardValue_.reRventType) + "|" + std::to_string(standardValue_.curRventType) + "|" +
            std::to_string(standardValue_.key) + "|" + std::to_string(standardValue_.State) + "|" +
            std::to_string(standardValue_.absoluteX) + "|" + std::to_string(standardValue_.absoluteY);
    }
    if (result == "0|0|0|0|0|0") {
        return "/";
    }

    return result;
}

int STDataProcess::GetFocusId(){
	return manageValue_.WMS;
}


/// 组装server端事件分发数据
std::string STDataProcess::GetActualServerResult_touchScreen()
{
    std::string window_List_str;
    std::string appManageListStr;
    std::string eventType = "";
    std::string l3Key = "";
    std::string state = "";
    std::string rawX = "";
    std::string rawY = "";
    std::string inputStr = "";

    //窗口管理返回的窗口列表
    sort(manageValue_.window_List.begin(), manageValue_.window_List.end());
    for (auto iter = manageValue_.window_List.cbegin(); iter != manageValue_.window_List.cend(); iter++) {
        if (*iter == -1) {
            window_List_str = ",";
        }
        else {
            window_List_str += std::to_string(*iter) + ",";
        }
    }
    window_List_str = window_List_str.substr(0, window_List_str.size() - 1);

    //应用管理返回的客户端信息
    for (auto iter = manageValue_.appManage.cbegin(); iter != manageValue_.appManage.cend(); iter++) {
        //客户端无窗口时，获取到的窗口id surfaceId=-1，此处取0是因为用例测试脚本里所有期望为空的窗口信息使用的0
        if (iter->surfaceId == -1) {
            appManageListStr += "[0," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        }
        else {
            appManageListStr += "[" + std::to_string(iter->surfaceId) + "," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        }
    }
    appManageListStr = appManageListStr.substr(0, appManageListStr.size() - 1);

    //从分发数据包内提取测试数据
    ModifyVariable(eventType, l3Key, state, rawX, rawY);
    //根据事件类型组装测试数据
    inputStr = GetInputValue(eventType, l3Key, state, rawX, rawY);
    inputStr += "|[" + window_List_str+ "]|" + appManageListStr;

    if (inputStr == "NULL|NULL|NULL |0|0|") {
        return "NULL|NULL|NULL |";
    }
    else {
        return inputStr;
    }
}

/// 组装server端事件分发数据
std::string STDataProcess::GetActualServerResult()
{
    std::string window_List_str;
    std::string appManageListStr;
    std::string inputStr = "";

    //窗口管理返回的窗口列表
	sort(manageValue_.window_List.begin(), manageValue_.window_List.end());
    for (auto iter = manageValue_.window_List.cbegin(); iter != manageValue_.window_List.cend(); iter++) {
        if (*iter == -1) {
            window_List_str = ",";
        }
        else {
            window_List_str += std::to_string(*iter) + ",";
        }
    }
    window_List_str = window_List_str.substr(0, window_List_str.size() - 1);

    //应用管理返回的客户端信息
    for (auto iter = manageValue_.appManage.cbegin(); iter != manageValue_.appManage.cend(); iter++) {
        //客户端无窗口时，获取到的窗口id surfaceId=-1，此处取0是因为用例测试脚本里所有期望为空的窗口信息使用的0
        if (iter->surfaceId == -1) {
            appManageListStr += "[0," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        }
        else {
            appManageListStr += "[" + std::to_string(iter->surfaceId) + "," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        }
    }
    appManageListStr = appManageListStr.substr(0, appManageListStr.size() - 1);
    
    //根据事件类型组装测试数据
    inputStr = GetActualInput();

    inputStr += "|[" + window_List_str+ "]|" + appManageListStr;

    if (inputStr == "NULL|NULL|NULL |0|0|") {
        return "NULL|NULL|NULL |";
    }
    else {
        return inputStr;
    }
}

/// 组装server端事件分发数据
std::string STDataProcess::GetActualServerResult1()
{
    std::string window_List_str;
    std::string appManageListStr;
    std::string eventType = "";
    std::string l3Key = "";
    std::string state = "";
    std::string rawX = "";
    std::string rawY = "";
    std::string inputStr = "";
    std::string source_Type = "";
    std::string slot = "";

    //窗口管理返回的窗口列表
    for (auto iter = manageValue_.window_List.cbegin(); iter != manageValue_.window_List.cend(); iter++) {
        if (*iter == -1) {
            window_List_str = ",";
        }
        else {
            window_List_str += std::to_string(*iter) + ",";
        }
    }
    window_List_str = window_List_str.substr(0, window_List_str.size() - 1);

    //应用管理返回的客户端信息
    for (auto iter = manageValue_.appManage.cbegin(); iter != manageValue_.appManage.cend(); iter++) {
        //客户端无窗口时，获取到的窗口id surfaceId=-1，此处取0是因为用例测试脚本里所有期望为空的窗口信息使用的0
        if (iter->surfaceId == -1) {
            appManageListStr += "[0," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        }
        else {
            appManageListStr += "[" + std::to_string(iter->surfaceId) + "," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        }
    }
    appManageListStr = appManageListStr.substr(0, appManageListStr.size() - 1);

    //从分发数据包内提取测试数据
    ModifyVariable1(eventType, l3Key, state, rawX, rawY, source_Type, slot);
    //根据事件类型组装测试数据
    inputStr = GetInputValue1(eventType, l3Key, state, rawX, rawY, source_Type, slot) + "|" + deviceType_ + "|" +
			   deviceId_;
    // inputStr += "|[" + window_List_str + "]|" + std::to_string((manageValue.WMS == -1) ? 0 : manageValue.WMS) + "|" +
    //       "0" + "|" + appManageListStr;
    inputStr += "|" + std::to_string((manageValue_.WMS == -1) ? 0 : manageValue_.WMS) + "|0|" + appManageListStr;
    if (inputStr == "NULL|NULL|NULL|NULL|NULL|0|0|") {
        return "NULL|NULL|NULL|NULL|NULL |";
    }
    else {
        return inputStr;
    }
}

void STDataProcess::ModifyVariable(std::string& eventType, std::string& l3Key, std::string& state,
    std::string& rawX, std::string& rawY)
{
    deviceType_ = "NULL";
    deviceId_ = "NULL";
    for (auto iter = dispatcherList_.cbegin(); iter != dispatcherList_.cend(); iter++) {
        //提取server分发的事件数据，不包含注册函数
		if (iter->event_Type != "MixedKey") {
            eventType = iter->event_Type;
			if (eventType == "eventTouch"){
				eventType = std::to_string(iter->source_Type)+"|"+std::to_string(iter->slot);
			}
        }
            l3Key = std::to_string(iter->L3key);
            state = std::to_string(iter->state);
        if ((iter->rawX == 0) && (iter->rawY == 0)) {
                rawX = std::to_string(iter->absoluteX);
                rawY = std::to_string(iter->absoluteY);
        }
        else {
                rawX = std::to_string(iter->rawX);
                rawY = std::to_string(iter->rawY);
        }
        deviceType_ = iter->deviceType;
        deviceId_ = iter->deviceId;
        axisValueList_ = iter->axisValueList;
    }
}

void STDataProcess::ModifyVariable1(std::string& eventType, std::string& l3Key, std::string& state,
    std::string& rawX, std::string& rawY,
    std::string& source_Type, std::string& slot)
{
    deviceType_ = "NULL";
    deviceId_ = "NULL";
    for (auto iter = dispatcherList_.cbegin(); iter != dispatcherList_.cend(); iter++) {
        //提取server分发的事件数据，不包含注册函数
        if (iter->event_Type == "MixedKey") {
            continue;
        }
        eventType = iter->event_Type;
        l3Key = std::to_string(iter->L3key);
        state = std::to_string(iter->state);
        if ((iter->rawX == 0) && (iter->rawY == 0)) {
            rawX = std::to_string(iter->absoluteX);
            rawY = std::to_string(iter->absoluteY);
        }
        else {
            rawX = std::to_string(iter->rawX);
            rawY = std::to_string(iter->rawY);
        }
        source_Type = std::to_string(iter->source_Type);
        slot = std::to_string(iter->slot);
        deviceType_ = iter->deviceType;
        deviceId_ = iter->deviceId;
        axisValueList_ = iter->axisValueList;
    }
}

/// 组装系统服务键分发属性
std::string STDataProcess::GetDispatcherStr()
{
    std::string dispatcherStr;
    if ((manageValue_.dis_System == 1) || (manageValue_.dis_Client == 1) || (manageValue_.dis_Camrea == 1)) {
        dispatcherStr = std::to_string(manageValue_.dis_System) + "|" + std::to_string(manageValue_.dis_Client)
            + "|" + std::to_string(manageValue_.dis_Camrea);
    }
    return dispatcherStr;
}

/// 获取轴事件坐标列表，需要在[-1,1]范围内
std::vector<float> STDataProcess::GetAxisStrList()
{
    return axisValueList_;
}

/// 组装所有客户端数据
std::string STDataProcess::GetActualClientResult()
{
    std::string atualClientResult = "";
    std::string clientResult = "";
    std::string atualClientreplaceResult = "";
    std::string joinStr = "";
    int32_t windowId = 0;
    std::string getInputValue;
    for (auto iter = clientPktList_.cbegin(); iter != clientPktList_.cend(); iter++) {
        if (windowId != 0 && windowId != iter->surfaceId) {
            atualClientResult += clientResult; //将上一个客户端数据追加到实际客户端结果中
            getInputValue = ""; //清空上一个客户端事件
            //非第一个客户端，使用换行符连接
            joinStr = "\n";
        }
        windowId = iter->surfaceId;
        if (getInputValue == "" || getInputValue == "NULL|NULL|NULL ")
        {
			if ((iter->rawX == 0) && (iter->rawY == 0)) {
				if (iter->event_Type == "eventTouch"){
					getInputValue = std::to_string(iter->source_Type)+"|"+std::to_string(iter->slot)+"|"+
									std::to_string(iter->absoluteX)+"|"+std::to_string(iter->absoluteY);
				}
				else{
					getInputValue = GetInputValue(iter->event_Type, std::to_string(iter->key), 
												  std::to_string(iter->state), std::to_string(iter->absoluteX),
												  std::to_string(iter->absoluteY));				
				}
			}
			else {
				if (iter->event_Type == "eventTouch"){
					getInputValue = std::to_string(iter->source_Type)+"|"+std::to_string(iter->slot)+"|"+
									std::to_string(iter->rawX)+"|"+std::to_string(iter->rawY);
				}
				else{
					getInputValue = GetInputValue(iter->event_Type, std::to_string(iter->key),
												  std::to_string(iter->state), std::to_string(iter->rawX),
												  std::to_string(iter->rawY));
				}
			}
        }
        else { //原始事件已经接收到时,直接跳过直至客户端和该次不是同一个
            break;
        }
        clientResult = joinStr + getInputValue + "|[" +
            ((iter->surfaceId == -1) ? "0" : std::to_string(iter->surfaceId)) + "," +
            std::to_string(iter->fd) + "," + std::to_string(iter->abilityId) + "]";
    }
    atualClientResult += clientResult;
    return atualClientResult == "" ? "NULL|NULL|NULL |" : atualClientResult;
}

/// 组装所有客户端数据
std::string STDataProcess::GetActualClientResult_longClick()
{
    std::string atualClientResult = "";
    std::string clientResult = "";
    std::string atualClientreplaceResult = "";
    std::string joinStr = "";
    int32_t surfaceId = 0;
	std::string client_msg = "";
    std::string getInputValue;
    for (auto iter = clientPktList_.cbegin(); iter != clientPktList_.cend(); iter++) {
		
		if (surfaceId != 0) {
			atualClientResult += clientResult;
            getInputValue = "";
			joinStr = " & "; //多条客户端数据连接符
		}
				
		if (surfaceId != 0 && surfaceId != iter->surfaceId) {
			atualClientResult += clientResult + client_msg;
        }
		
		surfaceId = iter->surfaceId;
			
        if ((iter->rawX == 0) && (iter->rawY == 0)) {
			if (iter->event_Type == "eventTouch"){
				getInputValue = std::to_string(iter->source_Type)+"|"+std::to_string(iter->slot)+"|"+
				                std::to_string(iter->absoluteX)+"|"+std::to_string(iter->absoluteY);
			}
			else{
				getInputValue = GetInputValue(iter->event_Type, std::to_string(iter->key), 
											  std::to_string(iter->state), std::to_string(iter->absoluteX),
											  std::to_string(iter->absoluteY));				
			}
        }
        else {
			if (iter->event_Type == "eventTouch"){
				getInputValue = std::to_string(iter->source_Type)+"|"+std::to_string(iter->slot)+"|"+
				                std::to_string(iter->rawX)+"|"+std::to_string(iter->rawY);
			}
			else{
				getInputValue = GetInputValue(iter->event_Type, std::to_string(iter->key),
				                              std::to_string(iter->state), std::to_string(iter->rawX),
											  std::to_string(iter->rawY));
			}
        }
		
		client_msg = "|[" + ((iter->surfaceId == -1) ? "0" : std::to_string(iter->surfaceId)) + "," +
                          std::to_string(iter->fd) + "," + std::to_string(iter->abilityId) + "]";

		clientResult = joinStr + getInputValue;
        //clientResult = joinStr + getInputValue + "|[" +
        //    ((iter->surfaceId == -1) ? "0" : std::to_string(iter->surfaceId)) + "," +
        //    std::to_string(iter->fd) + "," + std::to_string(iter->abilityId) + "]";
    }
						   
    atualClientResult += clientResult + client_msg;
    return atualClientResult == "" ? "NULL|NULL|NULL |" : atualClientResult;
}

/// 组装所有客户端数据
std::string STDataProcess::GetActualClientResult1()
{
    std::string atualClientResult = "";
    std::string atualClientreplaceResult = "";
    std::string joinStr = "";
    int32_t fd = 0;
    std::string getInputValue = "";
    for (auto iter = clientPktList_.cbegin(); iter != clientPktList_.cend(); iter++) {
        if (fd != 0 && fd != iter->fd) {
            //将上一个客户端数据追加到实际客户端结果中
            atualClientResult += getInputValue;
            getInputValue = ""; //清空上一个客户端事件
            //非第一个客户端，使用换行符连接
            joinStr = "\n";
        }
        fd = iter->fd;
        if ((iter->rawX == 0) && (iter->rawY == 0)) {
            getInputValue = GetInputValue1(iter->event_Type, std::to_string(iter->key), std::to_string(iter->state),
                std::to_string(iter->absoluteX), std::to_string(iter->absoluteY),
                std::to_string(iter->source_Type), std::to_string(iter->slot)) + "|" +
                iter->deviceType + "|" + iter->deviceId;
        }
        else {
            getInputValue = GetInputValue1(iter->event_Type, std::to_string(iter->key), std::to_string(iter->state),
                std::to_string(iter->rawX), std::to_string(iter->rawY),
                std::to_string(iter->source_Type), std::to_string(iter->slot)) + "|" +
                iter->deviceType + "|" + iter->deviceId;
        }
        getInputValue = joinStr + getInputValue + "|[" +
            ((iter->surfaceId == -1) ? "0" : std::to_string(iter->surfaceId)) + "," +
            std::to_string(fd) + "," + std::to_string(iter->abilityId) + "]";
    }
    atualClientResult += getInputValue;
    return atualClientResult == "" ? "NULL|NULL|NULL|NULL|NULL |" : atualClientResult;
}

std::string STDataProcess::GetActualInput() {
    //deviceType_ = "NULL";
    //deviceId_ = "NULL";
	std::string eventType = "";
    std::string l3Key = "";
    std::string state = "";
    std::string rawX = "";
    std::string rawY = "";
	std::string actualInput = "";
	std::string joinStr = "";
    for (auto iter = dispatcherList_.cbegin(); iter != dispatcherList_.cend(); iter++) {
        //提取server分发的事件数据，不包含注册函数
		if (iter->event_Type != "MixedKey") {
            eventType = iter->event_Type;
			if (eventType == "eventTouch"){
				eventType = std::to_string(iter->source_Type)+"|"+std::to_string(iter->slot);
			}
        }
            l3Key = std::to_string(iter->L3key);
            state = std::to_string(iter->state);
        if ((iter->rawX == 0) && (iter->rawY == 0)) {
                rawX = std::to_string(iter->absoluteX);
                rawY = std::to_string(iter->absoluteY);
        }
        else {
                rawX = std::to_string(iter->rawX);
                rawY = std::to_string(iter->rawY);
        }
        //deviceType_ = iter->deviceType;
        //deviceId_ = iter->deviceId;
        axisValueList_ = iter->axisValueList;
		actualInput += joinStr+GetInputValue(eventType, l3Key, state, rawX, rawY);
		joinStr = " & ";
    }
	return actualInput;
}

std::string STDataProcess::GetInputValue(const std::string& event_type, const std::string& l3Key,
    const std::string& state, const std::string& rawX, const std::string& rawY)
{
    std::string inputStr = "";
    if (event_type == "eventJoyStickAxis") { //轴事件只需要校验事件类型，坐标是否在范围内单独校验
        inputStr = event_type;
    }
    else if ((event_type.empty()) || (event_type == "MixedKey")) { //事件类型为空或为mixedkey说明没有分发原始事件
        inputStr = "NULL|NULL|NULL ";
    }
    else {
        //所有事件均分为按键类（key,button）和坐标类(移动，滚动，轴事件)两大类
        if (l3Key == "0") {
            inputStr = event_type + "|" + rawX + "|" + rawY;
        }
        else {
			inputStr = event_type + "|" + l3Key + "|" + state;
        }
    }

    return inputStr;
}

std::string STDataProcess::GetInputValue1(const std::string& event_type, const std::string& l3Key,
    const std::string& state, const std::string& rawX,
    const std::string& rawY, const std::string& source_Type,
    const std::string& slot)
{
    std::string inputStr = "";
    if (event_type == "eventJoyStickAxis") { //轴事件只需要校验事件类型，坐标是否在范围内单独校验
        inputStr = event_type;
    }
    else if (event_type == "eventTouch") {
        inputStr = source_Type + "|" + slot + "|" + rawX + "|" + rawY;
    }
    else if ((event_type.empty()) || (event_type == "MixedKey")) { //事件类型为空或为mixedkey说明没有分发原始事件
        inputStr = "NULL|NULL|NULL";
    }
    else {
        //所有事件均分为按键类（key,button）和坐标类(移动，滚动，轴事件)两大类
        if (l3Key == "0") {
            inputStr = event_type + "|" + rawX + "|" + rawY;
        }
        else {
            inputStr = event_type + "|" + l3Key + "|" + state;
        }
    }
    return inputStr;
}

/// 获取server分发的注册函数键值
std::string STDataProcess::MixedKeyServer()
{
    std::string mixedKey;
    for (unsigned int i = 0; i < mixedKeyServer_.size(); i++) {
		if (mixedKey.find(mixedKeyServer_[i]) == mixedKey.npos){
			mixedKey += mixedKeyServer_[i] + ",";
		}
    }
	if (!mixedKey.empty()) {
		mixedKey.pop_back();
    }
    return mixedKey;
}

/// 获取client端接收到的注册函数
std::string STDataProcess::MixedKeyClient()
{
    std::string mixedKey;
    for (unsigned int i = 0; i < mixedKeyClient_.size(); i++) {
        mixedKey += mixedKeyClient_[i] + ",";
    }
	if (!mixedKey.empty()) {
		mixedKey.pop_back();
	}
    return mixedKey;
}

/// 清空所有
void STDataProcess::ClearAll()
{
    clientMap_.clear();
    memset_s(&libinputValue_, sizeof(libinputValue_), 0, sizeof(libinputValue_));
    memset_s(&mapping_, sizeof(mapping_), 0, sizeof(mapping_));
    memset_s(&standardValue_, sizeof(standardValue_), 0, sizeof(standardValue_));
    memset_s(&manageValue_, sizeof(manageValue_), 0, sizeof(manageValue_));
	memset_s(&autoTestCoordinate, sizeof(autoTestCoordinate), 0, sizeof(autoTestCoordinate));
    dispatcherList_.clear();
    clientPktList_.clear();
    mixedKeyServer_.clear();
    mixedKeyClient_.clear();
	libinputList.clear();
    return;
}

} // namespace OHOS::MM
