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
#include "auto_test_data_process.h"
#include "libmmi_util.h"

#ifdef OHOS_AUTO_TEST_FRAME
OHOS::MMI::AutoTestDataProcess::AutoTestDataProcess()
{
}

OHOS::MMI::AutoTestDataProcess::~AutoTestDataProcess()
{
}

/*
*接收监控平台——libinput数据包
*/
void OHOS::MMI::AutoTestDataProcess::LibinputPktDataProcess(const AutoTestLibinputPkt& libinputPkt)
{
    LOGFMTI(" 1.LibinputPkt: eventType= %s, keyCode= %d, keyState= %d, rawX= %lf, rawY= %lf, "
            "absoluteX= %lf, absoluteY= %lf \n",
            libinputPkt.eventType, libinputPkt.keyCode, libinputPkt.keyState, libinputPkt.rawX, libinputPkt.rawY,
            libinputPkt.absoluteX, libinputPkt.absoluteY);
    libinputValue.eventType = libinputPkt.eventType;
    libinputValue.keyCode = libinputPkt.keyCode;
    libinputValue.keyState = libinputPkt.keyState;
    libinputValue.rawX = int(libinputPkt.rawX);
    libinputValue.rawY = int(libinputPkt.rawY);
    libinputValue.absoluteX = int(libinputPkt.absoluteX);
    libinputValue.absoluteY = int(libinputPkt.absoluteY);
}

/*
* 接收监控平台——事件映射数据包
*/
void OHOS::MMI::AutoTestDataProcess::MappingPktDataProcess(int32_t sourceType)
{
    LOGFMTI(" 2.MappingPkt: sourceType= %d \n", sourceType);
    mapping.eventType = sourceType;
}

/*
* 接收监控平台——标准化数据包
*/
void OHOS::MMI::AutoTestDataProcess::StandardPktDataProcess(const AutoTestStandardPkt& standardPkt)
{
    LOGFMTI(" 3.StandardPkt: reRventType= %d, curRventType= %d, keyCode= %d, keyState= %d, rawX= %lf, rawY= %lf, "
            "absoluteX= %lf, absoluteY= %lf \n", 
            standardPkt.reRventType, standardPkt.curRventType, standardPkt.keyCode, standardPkt.keyState,
            standardPkt.rawX, standardPkt.rawY, standardPkt.absoluteX, standardPkt.absoluteY);
    standardValue.curRventType = standardPkt.curRventType;
    standardValue.key = standardPkt.keyCode;
    standardValue.rawX = int(standardPkt.rawX);
    standardValue.rawY = int(standardPkt.rawY);
    standardValue.reRventType = standardPkt.reRventType;
    standardValue.State = standardPkt.keyState;
    standardValue.absoluteX = int(standardPkt.absoluteX);
    standardValue.absoluteY = int(standardPkt.absoluteY);
}

/*
* 接收监控平台——应用管理数据包
*/
void OHOS::MMI::AutoTestDataProcess::ManagePktDataProcess(const AutoTestManagePkt& managePkt,
    std::vector<int32_t>& windowList, std::vector<AutoTestClientListPkt>& clientList)
{
    LOGFMTI(" 4.ManagePkt: sizeOfWindowList= %d, focusId= %d, windowId= %d, sizeOfAppManager= %d \n", 
            managePkt.sizeOfWindowList, managePkt.focusId, managePkt.windowId, managePkt.sizeOfAppManager);
    if (manageValue.appManage.size() == 0) {
        manageValue.WMS = managePkt.focusId;
        manageValue.CALL_AMS = managePkt.windowId;
        for (auto iter = windowList.cbegin(); iter != windowList.cend(); iter++) {
            LOGFMTI(" 4.ManagePkt-2: windowId= %d \n", *iter);
            manageValue.window_List.push_back(*iter);
        }
        ClientList list = {};
        for (auto iter = clientList.cbegin(); iter != clientList.cend(); iter++) {
            LOGFMTI(" 4.ManagePkt-3: clientList.fd= %d, clientList.windowId= %d, clientList.abilityId= %d \n",
                    iter->socketFd, iter->windowId, iter->abilityId);
                list.abilityId = iter->abilityId;
                list.fd = iter->socketFd;
                list.surfaceId = iter->windowId;
                manageValue.appManage.push_back(list);
        }
    }
}

/*
* 接收监控平台——server分发数据包
*/
void OHOS::MMI::AutoTestDataProcess::DispatcherPktDataProcess(const AutoTestDispatcherPkt& dispatcherPkt,
                                                              std::vector<float> standardValue)
{
    LOGFMTI(" 5.DispatcherPkt: eventType= %s, sourceType= %d, keyOfHos= %d, keyState= %d, rawX= %lf, rawY= %lf,"
            " mixedKey= %d, socketFd= %d, windowId= %d, abilityId= %d, absoluteX= %lf, absoluteY= %lf, deviceType= %d,"
            " inputDeviceId= %d\n",
            dispatcherPkt.eventType, dispatcherPkt.sourceType, static_cast<int32_t>(dispatcherPkt.keyOfHos),
            dispatcherPkt.keyState, dispatcherPkt.rawX, dispatcherPkt.rawY, dispatcherPkt.mixedKey,
            dispatcherPkt.socketFd, dispatcherPkt.windowId, dispatcherPkt.abilityId, dispatcherPkt.absoluteX,
            dispatcherPkt.absoluteY, dispatcherPkt.deviceType, dispatcherPkt.inputDeviceId);
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
    dispatcher.mixedKey = dispatcherPkt.mixedKey;
    dispatcher.deviceType = std::to_string(dispatcherPkt.deviceType);
    dispatcher.deviceId = std::to_string(dispatcherPkt.inputDeviceId);
	dispatcher.axisValueList = standardValue;
    if (dispatcher.mixedKey != 0) {
        mixedKeyServer.push_back(std::to_string(dispatcherPkt.mixedKey));
    }
    dispatcherList.push_back(dispatcher);
}

/*
* 接收监控平台——客户端接收数据包
*/
void OHOS::MMI::AutoTestDataProcess::ClientPktDataProcess(const AutoTestClientPkt& clientPkt)
{
    LOGFMTI(" 6.ClientPkt: eventType= %s, keyOfHos= %d, keyState= %d, rawX= %lf, rawY= %lf, callBakeName= %s,"
            " socketFd= %d, windowId= %d, abilityId= %d, absoluteX= %lf, absoluteY= %lf, deviceType= %d, "
            " inputDeviceId= %d\n",
            clientPkt.eventType, static_cast<int32_t>(clientPkt.keyOfHos), clientPkt.keyState, clientPkt.rawX,
            clientPkt.rawY, clientPkt.callBakeName, clientPkt.socketFd, clientPkt.windowId, clientPkt.abilityId,
            clientPkt.absoluteX, clientPkt.absoluteY, clientPkt.deviceType, clientPkt.inputDeviceId);
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
        mixedKeyClient.push_back(clientPkt.callBakeName);
    }
    clientPktList.push_back(client);
}

/*
* 监控平台——系统服务键分发属性数据包，系统服务键分为三类：分发系统或分布式系统，分发应用，分发相机
* 系统服务或分布式系统, 相机（内置在系统内）:不需要往客户端分发事件
* 应用：分发事件到客户端
*/
void OHOS::MMI::AutoTestDataProcess::KeyTypePktDataProcess(const AutoTestKeyTypePkt& keyTypePkt)
{
    LOGFMTI(" 4-1.KeyTypePkt: disSystem= %d, disClient= %d, disCamrea= %d \n",
        keyTypePkt.disSystem, keyTypePkt.disClient, keyTypePkt.disCamrea);
    manageValue.dis_Client = int(keyTypePkt.disClient);
    manageValue.dis_System = int(keyTypePkt.disSystem);
    manageValue.dis_Camrea = int(keyTypePkt.disCamrea);
}

/*
* 客户端与服务端通道信息：surfaceId,fd,abilityId
* 启动客户端后先将当前所有客户端数据通道信息按启动顺序封装起来，和窗口管理的信息，事件分发的通道信息等进行比对，确保分发到正确的客户端
*/
void OHOS::MMI::AutoTestDataProcess::ClientListPktDataProcess(std::vector<AutoTestClientListPkt>& clientListPkt)
{
    ClientList clientList = {};
    for (auto iter = clientListPkt.cbegin(); iter != clientListPkt.cend(); iter++) {
        LOGFMTI(" 7.ClientListPkt: clientList.fd= %d, clientList.windowId= %d, clientList.abilityId= %d \n",
                iter->socketFd, iter->windowId, iter->abilityId);
        clientList.abilityId = iter->abilityId;
        clientList.fd = iter->socketFd;
        clientList.surfaceId = iter->windowId;
        clientListValue.push_back(clientList);
    }
}

/*
* 获取当前所有客户端窗口，通道信息，用来作为用例期望值
*/
std::vector<struct ClientList> OHOS::MMI::AutoTestDataProcess::GetClientList()
{
    std::vector<ClientList> listValue;
    if (clientListValue.size() > 1) {
        listValue.push_back(clientListValue[1]);
    } else if (clientListValue.size() == 1) {
        listValue.push_back(clientListValue[0]);
    } else {
    }
    return listValue;
}

/*
* 获取libinput驱动上报的事件信息
*/
std::string OHOS::MMI::AutoTestDataProcess::GetLibinputValue()
{
    if ((libinputValue.rawX == 0) && (libinputValue.rawY == 0)) {
        return GetInputValue(libinputValue.eventType, std::to_string(libinputValue.keyCode),
                             std::to_string(libinputValue.keyState), std::to_string(libinputValue.absoluteY),
                             std::to_string(libinputValue.absoluteX));
    } else {
        return GetInputValue(libinputValue.eventType, std::to_string(libinputValue.keyCode),
                             std::to_string(libinputValue.keyState), std::to_string(libinputValue.rawX),
                             std::to_string(libinputValue.rawY));
    } 
}

/*
* 获取原始事件类型
*/
std::string OHOS::MMI::AutoTestDataProcess::GetmappingResult()
{
    return std::to_string(mapping.eventType);
}

/*
* 获取事件标准化数据，标准化后类型分为：手指在指针处触摸屏幕（500），手指从屏幕上抬起（501），手指接触屏幕后移动（502）
*/
std::string OHOS::MMI::AutoTestDataProcess::GetStandardResult()
{
    std::string result = "0|0|0|0|0|0";
    if (standardValue.curRventType == -1) {
        return "/";
    }
    // 只有触屏设备注入参数使用的绝对坐标，其余均为相对坐标注入，因此默认取相对坐标值校验，相对坐标偏移量为0时使用绝对坐标
    if ((standardValue.rawX != 0) || (standardValue.rawY != 0)) {
        result = std::to_string(standardValue.reRventType) + "|" + std::to_string(standardValue.curRventType) + "|" +
                                std::to_string(standardValue.key) + "|" + std::to_string(standardValue.State) + "|" +
                                std::to_string(standardValue.rawX) + "|" + std::to_string(standardValue.rawY);
    } else {
        result = std::to_string(standardValue.reRventType) + "|" + std::to_string(standardValue.curRventType) + "|" +
                                std::to_string(standardValue.key) + "|" + std::to_string(standardValue.State) + "|" +
                                std::to_string(standardValue.absoluteX) + "|" + std::to_string(standardValue.absoluteY);
    }
    if (result == "0|0|0|0|0|0") {
        return "/";
    }

    return result;
}

/*
* 组装server端事件分发数据
*/
std::string OHOS::MMI::AutoTestDataProcess::GetActualServerResult()
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
    for (auto iter = manageValue.window_List.cbegin(); iter != manageValue.window_List.cend(); iter++) {
        if (*iter == -1) {
            window_List_str = ",";
        } else {
            window_List_str += std::to_string(*iter) + ",";
        }
    }
    window_List_str = window_List_str.substr(0, window_List_str.size() - 1);

    //应用管理返回的客户端信息
    for (auto iter = manageValue.appManage.cbegin(); iter != manageValue.appManage.cend(); iter++) {
        //客户端无窗口时，获取到的窗口id surfaceId=-1，此处取0是因为用例测试脚本里所有期望为空的窗口信息使用的0
        if (iter->surfaceId == -1) {
            appManageListStr += "[0," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        } else {
            appManageListStr += "[" + std::to_string(iter->surfaceId) + "," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        }
    }
    appManageListStr = appManageListStr.substr(0, appManageListStr.size() - 1);

    //从分发数据包内提取测试数据
    ModifyVariable(eventType, l3Key, state, rawX, rawY);
    //根据事件类型组装测试数据
    inputStr = GetInputValue(eventType, l3Key, state, rawX, rawY);
    inputStr += "|[" + window_List_str + "]|" + std::to_string((manageValue.WMS == -1) ? 0 : manageValue.WMS) + "|" +
       "0" + "|" + appManageListStr;
    if (inputStr == "NULL|NULL|NULL |[]|0|0|") {
        return "NULL|NULL|NULL |";
    } else {
        return inputStr;
    }
}

/*
* 组装server端事件分发数据
*/
std::string OHOS::MMI::AutoTestDataProcess::GetActualServerResult1()
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
    for (auto iter = manageValue.window_List.cbegin(); iter != manageValue.window_List.cend(); iter++) {
        if (*iter == -1) {
            window_List_str = ",";
        } else {
            window_List_str += std::to_string(*iter) + ",";
        }
    }
    window_List_str = window_List_str.substr(0, window_List_str.size() - 1);

    //应用管理返回的客户端信息
    for (auto iter = manageValue.appManage.cbegin(); iter != manageValue.appManage.cend(); iter++) {
        //客户端无窗口时，获取到的窗口id surfaceId=-1，此处取0是因为用例测试脚本里所有期望为空的窗口信息使用的0
        if (iter->surfaceId == -1) {
            appManageListStr += "[0," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        } else {
            appManageListStr += "[" + std::to_string(iter->surfaceId) + "," + std::to_string(iter->fd) + "," +
                std::to_string(iter->abilityId) + "]" + "|";
        }
    }
    appManageListStr = appManageListStr.substr(0, appManageListStr.size() - 1);

    //从分发数据包内提取测试数据
    ModifyVariable1(eventType, l3Key, state, rawX, rawY, source_Type, slot);
    //根据事件类型组装测试数据
    inputStr = GetInputValue1(eventType, l3Key, state, rawX, rawY, source_Type, slot) + "|" + deviceType + "|" + deviceId;
    inputStr += "|[" + window_List_str + "]|" + std::to_string((manageValue.WMS == -1) ? 0 : manageValue.WMS) + "|" +
       "0" + "|" + appManageListStr;
    if (inputStr == "NULL|NULL|NULL|NULL|NULL|[]|0|0|") {
        return "NULL|NULL|NULL|NULL|NULL |";
    } else {
        return inputStr;
    }
}

void OHOS::MMI::AutoTestDataProcess::ModifyVariable(std::string &eventType, std::string &l3Key, std::string &state,
                                                    std::string &rawX, std::string &rawY)
{
    deviceType = "NULL";
    deviceId = "NULL";
    for (auto iter = dispatcherList.cbegin(); iter != dispatcherList.cend(); iter++) {
        //提取server分发的事件数据，不包含注册函数
        if ((eventType == "") && (iter->event_Type != "MixedKey")) {
            eventType = iter->event_Type;
        }
        if ((l3Key == "") || (l3Key == "0")) {
            l3Key = std::to_string(iter->L3key);
        }
        if ((state == "") || (state == "0")) {
            state = std::to_string(iter->state);
        }
        if ((iter->rawX == 0) && (iter->rawY == 0)) {
            if ((rawX == "") || (rawX == "0")) {
                rawX = std::to_string(iter->absoluteY);
            }
            if ((rawY == "") || (rawY == "0")) {
                rawY = std::to_string(iter->absoluteX);
            }
        } else {
            if ((rawX == "") || (rawX == "0")) {
                rawX = std::to_string(iter->rawX);
            }
            if ((rawY == "") || (rawY == "0")) {
                rawY = std::to_string(iter->rawY);
            }
        }
        deviceType = iter->deviceType;
        deviceId = iter->deviceId;
		axisValueList = iter->axisValueList;
    }
}

void OHOS::MMI::AutoTestDataProcess::ModifyVariable1(std::string &eventType, std::string &l3Key, std::string &state,
                                                    std::string &rawX, std::string &rawY,
                                                    std::string &source_Type, std::string &slot)
{
    deviceType = "NULL";
    deviceId = "NULL";
    for (auto iter = dispatcherList.cbegin(); iter != dispatcherList.cend(); iter++) {
        //提取server分发的事件数据，不包含注册函数
        if ((eventType == "") && (iter->event_Type != "MixedKey")) {
            eventType = iter->event_Type;
        }
        if ((l3Key == "") || (l3Key == "0")) {
            l3Key = std::to_string(iter->L3key);
        }
        if ((state == "") || (state == "0")) {
            state = std::to_string(iter->state);
        } 
        if ((iter->rawX == 0) && (iter->rawY == 0)) {
            if ((rawX == "") || (rawX == "0")) {
                rawX = std::to_string(iter->absoluteY);
            }
            if ((rawY == "") || (rawY == "0")) {
                rawY = std::to_string(iter->absoluteX);
            }
        } else {
            if ((rawX == "") || (rawX == "0")) {
                rawX = std::to_string(iter->rawX);
            }
            if ((rawY == "") || (rawY == "0")) {
                rawY = std::to_string(iter->rawY);
            }
        }
        if ((source_Type == "") || (source_Type == "0")) {
            source_Type = std::to_string(iter->source_Type);
        }
        if ((slot == "") || (slot == "0")) {
            slot = std::to_string(iter->slot);
        }
        deviceType = iter->deviceType;
        deviceId = iter->deviceId;
		axisValueList = iter->axisValueList;
    }
}

/*
* 组装系统服务键分发属性
*/
std::string OHOS::MMI::AutoTestDataProcess::GetDispatcherStr()
{
    std::string dispatcherStr;
    if ((manageValue.dis_System == 1) || (manageValue.dis_Client == 1) || (manageValue.dis_Camrea == 1)) {
        dispatcherStr = std::to_string(manageValue.dis_System) + "|" + std::to_string(manageValue.dis_Client)
            + "|" + std::to_string(manageValue.dis_Camrea);
    }
    return dispatcherStr;
}

/*
* 获取轴事件坐标列表，需要在[-1,1]范围内
*/
std::vector<float> OHOS::MMI::AutoTestDataProcess::GetAxisStrList()
{
    return axisValueList;
}

/*
* 组装所有客户端数据
*/
std::string OHOS::MMI::AutoTestDataProcess::GetActualClientResult()
{
    std::string atualClientResult = "";
    std::string clientResult = "";
    std::string atualClientreplaceResult = "";
    std::string joinStr = "";
    int32_t fd = 0;
    std::string getInputValue;
    for (auto iter = clientPktList.cbegin(); iter != clientPktList.cend(); iter++) {
        if (fd != 0 && fd != iter->fd) {
            atualClientResult += clientResult; //将上一个客户端数据追加到实际客户端结果中
            getInputValue = ""; //清空上一个客户端事件
            //非第一个客户端，使用换行符连接
            joinStr = "\n";
        }
        fd = iter->fd;
        if (getInputValue=="" || getInputValue == "NULL|NULL|NULL ")
        {
            if ((iter->rawX == 0) && (iter->rawY == 0)) {
                getInputValue = GetInputValue(iter->event_Type, std::to_string(iter->key), std::to_string(iter->state),
                                              std::to_string(iter->absoluteY), std::to_string(iter->absoluteX));
            } else {
                getInputValue = GetInputValue(iter->event_Type, std::to_string(iter->key),  std::to_string(iter->state),
                                              std::to_string(iter->rawX), std::to_string(iter->rawY));
            }
        }else{ //原始事件已经接收到时,直接跳过直至客户端和该次不是同一个
            break;
        }
        clientResult = joinStr + getInputValue + "|[" +
                       ((iter->surfaceId == -1) ? "0" : std::to_string(iter->surfaceId)) + "," +
                       std::to_string(fd) + "," + std::to_string(iter->abilityId) + "]";

    }
    atualClientResult += clientResult;
//    atualClientreplaceResult = std::regex_replace(atualClientResult, std::regex("\\|"), "");
//    atualClientreplaceResult = std::regex_replace(atualClientreplaceResult, std::regex("\\["), "");
//    atualClientreplaceResult = std::regex_replace(atualClientreplaceResult, std::regex("\\]"), "");
//    atualClientreplaceResult = std::regex_replace(atualClientreplaceResult, std::regex(","), "");
//    atualClientreplaceResult = std::regex_replace(atualClientreplaceResult, std::regex("\\n"), "");
    return atualClientResult == "" ? "NULL|NULL|NULL |":atualClientResult;
}

/*
* 组装所有客户端数据
*/
std::string OHOS::MMI::AutoTestDataProcess::GetActualClientResult1()
{
    std::string atualClientResult = "";
    std::string clientResult = "";
    std::string atualClientreplaceResult = "";
    std::string joinStr = "";
    int32_t fd = 0;
    std::string getInputValue;
    for (auto iter = clientPktList.cbegin(); iter != clientPktList.cend(); iter++) {
        if (fd != 0 && fd != iter->fd) {
            atualClientResult += clientResult; //将上一个客户端数据追加到实际客户端结果中
            getInputValue = ""; //清空上一个客户端事件
            //非第一个客户端，使用换行符连接
            joinStr = "\n";
        }
        fd = iter->fd;
        if (getInputValue=="" || getInputValue == "NULL|NULL|NULL ")
        {
            if ((iter->rawX == 0) && (iter->rawY == 0)) {
                getInputValue = GetInputValue1(iter->event_Type, std::to_string(iter->key), std::to_string(iter->state),
                                              std::to_string(iter->absoluteX), std::to_string(iter->absoluteY),
                                              std::to_string(iter->source_Type), std::to_string(iter->slot)) + "|" +
                                iter->deviceType + "|" + iter->deviceId;
            } else {
                getInputValue = GetInputValue1(iter->event_Type, std::to_string(iter->key), std::to_string(iter->state),
                                              std::to_string(iter->rawX), std::to_string(iter->rawY),
                                              std::to_string(iter->source_Type), std::to_string(iter->slot)) + "|" +
                                iter->deviceType + "|" + iter->deviceId;
            }
        }else{ //原始事件已经接收到时,直接跳过直至客户端和该次不是同一个
            break;
        }
        clientResult = joinStr + getInputValue + "|[" +
                       ((iter->surfaceId == -1) ? "0" : std::to_string(iter->surfaceId)) + "," +
                       std::to_string(fd) + "," + std::to_string(iter->abilityId) + "]";

    }
    atualClientResult += clientResult;
//    atualClientreplaceResult = std::regex_replace(atualClientResult, std::regex("\\|"), "");
//    atualClientreplaceResult = std::regex_replace(atualClientreplaceResult, std::regex("\\["), "");
//    atualClientreplaceResult = std::regex_replace(atualClientreplaceResult, std::regex("\\]"), "");
//    atualClientreplaceResult = std::regex_replace(atualClientreplaceResult, std::regex(","), "");
//    atualClientreplaceResult = std::regex_replace(atualClientreplaceResult, std::regex("\\n"), "");
    return atualClientResult == "" ? "NULL|NULL|NULL|NULL|NULL |":atualClientResult;
}

std::string OHOS::MMI::AutoTestDataProcess::GetInputValue(const std::string &event_type, const std::string &l3Key,
                                                          const std::string &state, const std::string &rawX,
                                                          const std::string &rawY)
{
    std::string inputStr = "";
    if (event_type == "eventJoyStickAxis") { //轴事件只需要校验事件类型，坐标是否在范围内单独校验
        inputStr = event_type;
    } else if ((event_type.empty()) || (event_type == "MixedKey")) { //事件类型为空或为mixedkey说明没有分发原始事件
        inputStr = "NULL|NULL|NULL ";
    } else {
        //所有事件均分为按键类（key,button）和坐标类(移动，滚动，轴事件)两大类
        if (l3Key == "0") {
            inputStr = event_type + "|" + rawX + "|" + rawY;
        } else {
            inputStr = event_type + "|" + l3Key + "|" + state;
        }
    }

    return inputStr;
}

std::string OHOS::MMI::AutoTestDataProcess::GetInputValue1(const std::string &event_type, const std::string &l3Key,
                                                          const std::string &state, const std::string &rawX,
                                                          const std::string &rawY, const std::string &source_Type,
                                                          const std::string &slot)
{
    std::cout<< "============================================================================" <<std::endl;
    std::cout<< event_type <<std::endl;
    std::cout<< source_Type <<std::endl;
    std::cout<< slot <<std::endl;
    std::string inputStr = "";
    if (event_type == "eventJoyStickAxis") { //轴事件只需要校验事件类型，坐标是否在范围内单独校验
        inputStr = event_type;
    } else if (event_type == "eventTouch") {
        inputStr = source_Type + "|" + slot + "|" + rawX + "|" + rawY;
    } else if ((event_type.empty()) || (event_type == "MixedKey")) { //事件类型为空或为mixedkey说明没有分发原始事件
        inputStr = "NULL|NULL|NULL";
    } else {
        //所有事件均分为按键类（key,button）和坐标类(移动，滚动，轴事件)两大类
        if (l3Key == "0") {
            inputStr = event_type + "|" + rawX + "|" + rawY;
        } else {
            inputStr = event_type + "|" + l3Key + "|" + state;
        }
    }
    return inputStr;
}

/*
* 获取server分发的注册函数键值
*/
std::string OHOS::MMI::AutoTestDataProcess::MixedKeyServer()
{
    std::string mixedKey;
    for (unsigned int i = 0; i < mixedKeyServer.size(); i++) {
        mixedKey += mixedKeyServer[i] + ",";
    }
    mixedKey.pop_back();
    return mixedKey;
}

/*
* 获取client端接收到的注册函数
*/
std::string OHOS::MMI::AutoTestDataProcess::MixedKeyClient()
{
    std::string mixedKey;
    for (unsigned int i = 0; i < mixedKeyClient.size(); i++) {
        mixedKey += mixedKeyClient[i] + ",";
    }
    mixedKey.pop_back();
    return mixedKey;
}

/*
* 清空所有
*/
void OHOS::MMI::AutoTestDataProcess::ClearAll()
{
    clientListValue.clear();
    memset_s(&libinputValue, sizeof(libinputValue), 0, sizeof(libinputValue));
    memset_s(&mapping, sizeof(mapping), 0, sizeof(mapping));
    memset_s(&standardValue, sizeof(standardValue), 0, sizeof(standardValue));
    memset_s(&manageValue, sizeof(manageValue), 0, sizeof(manageValue));
    dispatcherList.clear();
    clientPktList.clear();
    mixedKeyServer.clear();
    mixedKeyClient.clear();
    return;
}
#endif