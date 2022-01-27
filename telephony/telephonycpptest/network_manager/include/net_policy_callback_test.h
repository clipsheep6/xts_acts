/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

#ifndef NET_POLICY_CALLBACK_TEST_H
#define NET_POLICY_CALLBACK_TEST_H

#include "net_policy_callback_stub.h"
#include "net_policy_cellular_policy.h"
#include "net_policy_constants.h"

namespace OHOS {
namespace NetManagerStandard {
class NetPolicyCallbackTest : public NetPolicyCallbackStub {
public:
    NetPolicyCallbackTest();
    virtual ~NetPolicyCallbackTest() override;
    int32_t NetUidPolicyChanged(uint32_t uid, NetUidPolicy policy) override;
    int32_t NetCellularPolicyChanged(const std::vector<NetPolicyCellularPolicy> &cellularPolicys) override;
public:
    static uint32_t m_uid;
    static NetUidPolicy netPolicy;
};

uint32_t NetPolicyCallbackTest::m_uid = 100;
NetUidPolicy NetPolicyCallbackTest::netPolicy = NetUidPolicy ::NET_POLICY_NONE;

NetPolicyCallbackTest::NetPolicyCallbackTest() {}

NetPolicyCallbackTest::~NetPolicyCallbackTest() {}

int32_t NetPolicyCallbackTest::NetUidPolicyChanged(uint32_t uid, NetUidPolicy policy)
{
    if (uid == 0) {
        std::cout << "NetPolicyCallbackTest::NetUidPolicyChanged uid = 0." << std::endl;
    }
    std::cout << "NetPolicyCallbackTest::NetUidPolicyChanged, uid:" << uid <<
        ", policy:" << static_cast<uint32_t>(policy) << std::endl;
    m_uid = uid;
    netPolicy = policy;
    return 0;
}

int32_t NetPolicyCallbackTest::NetCellularPolicyChanged(const std::vector<NetPolicyCellularPolicy> &cellularPolicys)
{
    if (cellularPolicys.empty()) {
        std::cout << "NetPolicyCallbackTest::NetCellularPolicyChanged, cellularPolicys empty." << std::endl;
        return -1;
    }
    return 0;
}

sptr<INetPolicyCallback> callback = (std::make_unique<NetPolicyCallbackTest>()).release();
}
}
#endif // NET_POLICY_CALLBACK_TEST_H