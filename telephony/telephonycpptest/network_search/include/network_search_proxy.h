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

#ifndef NETWORK_SEARCH_PROXY_H
#define NETWORK_SEARCH_PROXY_H

#include "core_service_proxy.h"
#include "iservice_registry.h"
#include "log.h"
#include "system_ability_definition.h"

namespace OHOS {
namespace Telephony {
class NetworkSearchProxy {
public:
    NetworkSearchProxy() = default;
    ~NetworkSearchProxy()
    {
        telephonyService_ = nullptr;
    }
    sptr<ICoreService> GetHandler();
    int Init();

private:
    sptr<ICoreService> telephonyService_ = nullptr;
};

int NetworkSearchProxy::Init()
{
    sptr<ISystemAbilityManager> systemAbilityMgr = SystemAbilityManagerClient::GetInstance().GetSystemAbilityManager();
    if (systemAbilityMgr == nullptr) {
        LOGE("TelephonyTestService Get ISystemAbilityManager failed ...\n");
        return -1;
    }
    sptr<IRemoteObject> remote = systemAbilityMgr->CheckSystemAbility(TELEPHONY_CORE_SERVICE_SYS_ABILITY_ID);
    if (remote) {
        sptr<ICoreService> telephonyService = iface_cast<ICoreService>(remote);
        telephonyService_ = telephonyService;
        systemAbilityMgr = nullptr;
        remote = nullptr;
        return 0;
    }
    LOGE("TelephonyTestService Get TELEPHONY_CORE_SERVICE_SYS_ABILITY_ID fail ... \n");
    return -1;
}

sptr<ICoreService> NetworkSearchProxy::GetHandler()
{
    return telephonyService_;
}
} // namespace Telephony
} // namespace OHOS

#endif
