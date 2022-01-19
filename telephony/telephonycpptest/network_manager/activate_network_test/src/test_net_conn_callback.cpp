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

#include "net_mgr_log_wrapper.h"
#include "test_net_conn_callback.h"

namespace OHOS {
namespace NetManagerStandard {
TestNetConnCallback::TestNetConnCallback() {}

TestNetConnCallback::~TestNetConnCallback() {}

// sptr<TestNetConnCallback> info_=nullptr;
NetConnCallbackInfo TestNetConnCallback::info_;
int32_t TestNetConnCallback::NetConnStateChanged(const sptr<NetConnCallbackInfo> &info)
{
    if (info == nullptr) {
        std::cout << "TestNetConnCallback::NetConnStateChanged(), info is nullptr" << std::endl;
    }

    std::cout << "TestNetConnCallback::NetConnStateChanged(), netState_:" << info->netState_ <<
        ", netType_:" << info->netType_ << std::endl;

    info_= *info;

    return 0;
}

int32_t TestNetConnCallback::NetAvailable(int32_t netId)
{
	return 0;
}

int32_t TestNetConnCallback::NetCapabilitiesChange(int32_t netId, const uint64_t& netCap)
{
	return 0;
}

int32_t TestNetConnCallback::NetConnectionPropertiesChange(int32_t netId, const sptr<NetLinkInfo>& info)
{
	return 0;
}

int32_t TestNetConnCallback::NetLost(int32_t netId)
{
	return 0;
}
} // namespace NetManagerStandard
} // namespace OHOS
