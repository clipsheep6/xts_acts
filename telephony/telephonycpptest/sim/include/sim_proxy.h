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

#ifndef TELEPHONY_SIM_PROXY
#define TELEPHONY_SIM_PROXY
#include <string_ex.h>
#include "core_service_proxy.h"
#include "iservice_registry.h"
#include "system_ability_definition.h"
#include "log.h"

namespace OHOS {
namespace Telephony {
class SimProxy {
public:
    OHOS::sptr<ICoreService> GetHandler() const;
    int Init();

private:
    OHOS::sptr<ICoreService> telephonyService_ = nullptr;
};

OHOS::sptr<ICoreService> SimProxy::GetHandler() const
{
    return telephonyService_;
}

int SimProxy::Init()
{
    sptr<ISystemAbilityManager> systemAbilityMgr = SystemAbilityManagerClient::GetInstance().GetSystemAbilityManager();
    if (systemAbilityMgr == nullptr) {
        LOG("sim test Get ISystemAbilityManager failed ... ");
        return -1;
    }

    sptr<IRemoteObject> remote = systemAbilityMgr->CheckSystemAbility(TELEPHONY_CORE_SERVICE_SYS_ABILITY_ID);
    if (remote) {
        sptr<ICoreService> telephonyService = iface_cast<ICoreService>(remote);
        telephonyService_ = telephonyService;
        return 0;
    }

    LOG("sim test Get TELEPHONY_CORE_SERVICE_SYS_ABILITY_ID fail ... ");
    return -1;
}
} // namespace Telephony
} // namespace OHOS

#endif
