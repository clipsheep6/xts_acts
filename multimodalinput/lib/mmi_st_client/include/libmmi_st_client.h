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
#ifndef OHOS_LIBMMI_CLIENT_H
#define OHOS_LIBMMI_CLIENT_H

#include "if_client_msg_handler.h"
#include "if_mmi_client.h"
#include "uds_client.h"

namespace OHOS::MMI {
class STClient : public UDSClient, public IfMMIClient, public std::enable_shared_from_this<IfMMIClient> {
public:
    STClient();
    virtual ~STClient() override;

    int32_t Socket() override;
    virtual bool GetCurrentConnectedStatus() const override;
    bool Start(IClientMsgHandlerPtr msgHdl, bool detachMode) override;
    void RegisterConnectedFunction(ConnectCallback fun) override;
    void RegisterDisconnectedFunction(ConnectCallback fun) override;
    MMIClientPtr GetPtr()
    {
        return shared_from_this();
    }
    bool SendMessage(const NetPacket& pkt) const override;

protected:
    virtual void OnConnected() override;
    virtual void OnDisconnected() override;
protected:
    ConnectCallback funConnected_;
    ConnectCallback funDisconnected_;
};
}
#endif
