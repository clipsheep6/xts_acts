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
#include "st_msg_handler.h"
#include <cassert>
#include "proto.h"
#include "libmmi_util.h"
#include "st_data_process.h"

namespace OHOS::MMI {
namespace {
    static constexpr OHOS::HiviewDFX::HiLogLabel LABEL = { LOG_CORE, MMI_LOG_DOMAIN, "STMsgHandler" };
}

bool STMsgHandler::Init()
{
    MsgCallback funs[] = {
        {MmiMessageId::ST_MESSAGE_LIBPKT, std::bind(&STMsgHandler::OnTestLibinputPkt, this, std::placeholders::_1,
            std::placeholders::_2)},
        {MmiMessageId::ST_MESSAGE_MAPPKT, std::bind(&STMsgHandler::OnTestMappingPkt, this, std::placeholders::_1,
            std::placeholders::_2)},
        {MmiMessageId::ST_MESSAGE_STDPKT, std::bind(&STMsgHandler::OnTestStandardPkt, this, std::placeholders::_1,
            std::placeholders::_2)},
        {MmiMessageId::ST_MESSAGE_MAGPKT, std::bind(&STMsgHandler::OnTestManagePkt, this, std::placeholders::_1,
            std::placeholders::_2)},
        {MmiMessageId::ST_MESSAGE_DPCPKT, std::bind(&STMsgHandler::OnTestDispatcherPkt, this, std::placeholders::_1,
            std::placeholders::_2)},
        {MmiMessageId::ST_MESSAGE_CLTPKT, std::bind(&STMsgHandler::OnTestClientPkt, this, std::placeholders::_1,
            std::placeholders::_2)},
        {MmiMessageId::ST_MESSAGE_CLISTPKT, std::bind(&STMsgHandler::OnTestClientListPkt, this, std::placeholders::_1,
            std::placeholders::_2)},
        {MmiMessageId::ST_MESSAGE_KEYTYPEPKT, std::bind(&STMsgHandler::OnTestKeyTypePkt, this,
            std::placeholders::_1, std::placeholders::_2)},
    };
    for (auto& it : funs) {
        CHKC(RegistrationEvent(it), EVENT_REG_FAIL);
    }
    //return STMsgHandler::Init();
    return true;
}

int32_t STMsgHandler::OnTestLibinputPkt(const UDSClient& client, NetPacket& pkt)
{
    AutoTestLibinputPkt libinputPkt;
    pkt >> libinputPkt;

    GetDataProcess().LibinputPktDataProcess(libinputPkt);
    return RET_OK;
}

int32_t STMsgHandler::OnTestMappingPkt(const UDSClient& client, NetPacket& pkt)
{
    int32_t sourceType;
    pkt >> sourceType;

    GetDataProcess().MappingPktDataProcess(sourceType);
    return RET_OK;
}

int32_t STMsgHandler::OnTestStandardPkt(const UDSClient& client, NetPacket& pkt)
{
    AutoTestStandardPkt standardPkt;
    pkt >> standardPkt;

    GetDataProcess().StandardPktDataProcess(standardPkt);
    return RET_OK;
}

int32_t STMsgHandler::OnTestManagePkt(const UDSClient& client, NetPacket& pkt)
{
    AutoTestManagePkt managePkt;
    AutoTestCoordinate coordinate;
    std::vector<int32_t> windowList;
    std::vector<AutoTestClientListPkt> clientList;
    pkt >> managePkt;
    for (int32_t i = 0; i < managePkt.sizeOfWindowList; i++) {
        int32_t windowId;
        pkt >> windowId;
        windowList.push_back(windowId);
    }
    for (int32_t i = 0; i < managePkt.sizeOfAppManager; i++) {
        AutoTestClientListPkt clientListPkt;
        pkt >> clientListPkt;
        clientList.push_back(clientListPkt);
    }
    pkt >> coordinate;
    GetDataProcess().ManagePktDataProcess(managePkt, windowList, clientList, coordinate);
    return RET_OK;
}

int32_t STMsgHandler::OnTestDispatcherPkt(const UDSClient& client, NetPacket& pkt)
{
    AutoTestDispatcherPkt dispatcherPkt;
    std::vector<float> autoTestJoystic;
    uint16_t joysticAxisNum;
    float standardValue;
    pkt >> joysticAxisNum >> dispatcherPkt;
    for (auto i = 0; i < joysticAxisNum; i++) {
        pkt >> standardValue;
        autoTestJoystic.push_back(standardValue);
    }
    GetDataProcess().DispatcherPktDataProcess(dispatcherPkt, autoTestJoystic);
    return RET_OK;
}

// 该函数接收到的消息是，客户端接收到的数据�?// 其中，clientPkt结构体包含eventType、keyOfHos、rawX、rawY、callBakeName、socketFd、windowId、abilityId;
int32_t STMsgHandler::OnTestClientPkt(const UDSClient& client, NetPacket& pkt)
{
    AutoTestClientPkt clientPkt;
    pkt >> clientPkt;

    GetDataProcess().ClientPktDataProcess(clientPkt);
    return RET_OK;
}

// 该函数接收到的消息是，server端注册的应用信息列表
// 其中，AutoTestClientListPkt结构体包含socketfd、windowId、abilityId;
int32_t STMsgHandler::OnTestClientListPkt(const UDSClient& client, NetPacket& pkt)
{
    uint32_t sizeOfList;
    std::vector<AutoTestClientListPkt> clientList;
    pkt >> sizeOfList;
    for (uint32_t i = 0; i < sizeOfList; i++) {
        AutoTestClientListPkt clientListPkt;
        pkt >> clientListPkt;
        clientList.push_back(clientListPkt);
    }

    GetDataProcess().ClientListPktDataProcess(clientList);
    return RET_OK;
}

int32_t STMsgHandler::OnTestKeyTypePkt(const UDSClient& client, NetPacket& pkt)
{
    AutoTestKeyTypePkt keyTypePkt;
    pkt >> keyTypePkt;

    GetDataProcess().KeyTypePktDataProcess(keyTypePkt);
    return RET_OK;
}

void STMsgHandler::OnMsgHandler(const UDSClient& client, NetPacket& pkt)
{
    auto id = pkt.GetMsgId();
    auto fun = GetFun(id);
    assert(fun != nullptr);
    if (!fun) {
        MMI_LOGE("CClientMsgHandler::OnMsgHandler Unknown msg id[%{public}d].", id);
        return;
    }
    auto ret = (*fun)(client, pkt);
    if (ret < 0) {
        MMI_LOGE("CClientMsgHandler::OnMsgHandler Msg handling failed. id[%{public}d] ret[%{public}d]", id, ret);
        return;
    }
}

} // namespace OHOS::MMI
