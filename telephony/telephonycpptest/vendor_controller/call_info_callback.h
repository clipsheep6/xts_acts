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

#ifndef CALL_INFO_CALLBACK_H
#define CALL_INFO_CALLBACK_H

#include "i_call_ability_callback.h"
#include "call_manager_inner_type.h"
#include "ipc_types.h"

class CallInfoCallback : public OHOS::Telephony::ICallAbilityCallback {
public:
    CallInfoCallback(){};
    virtual ~CallInfoCallback() = default;

    int32_t OnCallDetailsChange(const OHOS::Telephony::CallAttributeInfo &info) override;
    int32_t OnCallEventChange(const OHOS::Telephony::CallEventInfo &info) override;
    int32_t OnSupplementResult(const OHOS::Telephony::CallResultReportId reportId,
                               OHOS::AppExecFwk::PacMap &resultInfo) override;
    OHOS::sptr<OHOS::IRemoteObject> AsObject() override;
};

#endif // CALL_INFO_CALLBACK_H