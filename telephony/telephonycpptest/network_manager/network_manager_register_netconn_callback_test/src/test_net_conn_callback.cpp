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

#include <iostream>
#include "test_net_conn_callback.h"

namespace OHOS {
namespace NetManagerStandard {
TestNetConnCallback::TestNetConnCallback() {}

TestNetConnCallback::~TestNetConnCallback() {}

int32_t TestNetConnCallback::NetAvailable(sptr<NetHandle> &netHandle)
{
    std::cout << "NetAvailable(), netId is " << netHandle->GetNetId() << std::endl;
    return 0;
}

int32_t TestNetConnCallback::NetCapabilitiesChange(
    sptr<NetHandle> &netHandle, const sptr<NetAllCapabilities> &netAllCap)
{
    std::cout << "NetCapabilitiesChange(), netId is " << netHandle->GetNetId() << std::endl;
    if (netAllCap != nullptr) {
        std::cout << netAllCap->ToString("|") << std::endl;
    }
    return 0;
}

int32_t TestNetConnCallback::NetConnectionPropertiesChange(sptr<NetHandle> &netHandle, const sptr<NetLinkInfo>& info)
{
    std::cout << "NetConnectionPropertiesChange(), netId is " << netHandle->GetNetId() << std::endl;
    std::cout << "NetConnectionPropertiesChange(), address is " << info->ToStringAddr("") << std::endl;
    return 0;
}

int32_t TestNetConnCallback::NetLost(sptr<NetHandle> &netHandle)
{
    std::cout << "NetLost(), netId is " << netHandle->GetNetId() << std::endl;
    return 0;
}

int32_t TestNetConnCallback::NetUnavailable()
{
    std::cout << "NetUnavailable()" << std::endl;
    return 0;
}

int32_t TestNetConnCallback::NetBlockStatusChange(sptr<NetHandle> &netHandle, bool blocked)
{
    std::cout << "TestNetConnCallback::NetBlockStatusChange" << std::endl;
    std::cout << "netId = " << netHandle->GetNetId() << std::endl;
    std::string block = blocked ? "true" : "false";
    std::cout << "blocked = " << block << std::endl;
    return 0;
}
} // namespace NetManagerStandard
} // namespace OHOS
