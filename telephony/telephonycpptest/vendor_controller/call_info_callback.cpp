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

#include "call_info_callback.h"
#include "i_call_ability_callback.h"
#include "call_manager_errors.h"
#include <iostream>

using namespace OHOS::Telephony;
using namespace OHOS;
using namespace std;

int32_t CallInfoCallback::OnCallDetailsChange(const CallAttributeInfo &info)
{
    cout << "============CallAttributeInfo============" << endl;
    cout << "accountNumber:" << info.accountNumber << endl;
    cout << "accountId:" << info.accountId << endl;
    cout << "videoState:" << info.videoState << endl;
    cout << "startTime:" << info.startTime << endl;
    cout << "isEcc:" << info.isEcc << endl;
    cout << "callType:" << info.callType << endl;
    cout << "callId:" << info.callId << endl;
    cout << "callState:" << info.callState << endl;
    cout << "accountNumber" << info.accountNumber << endl;
    cout << "=========================================" << endl;
    return 0;
}

int32_t CallInfoCallback::OnCallEventChange(const CallEventInfo &info)
{
    cout << "============CallEventInfo============" << endl;
    cout << "====================================" << endl;
    return 0;
}

int32_t CallInfoCallback::OnSupplementResult(const CallResultReportId reportId, AppExecFwk::PacMap &resultInfo)
{
    cout << "============PacMap============" << endl;
    cout << "reportId:" << reportId << endl;
    cout << "====================================" << endl;
    return 0;
}

sptr<IRemoteObject> CallInfoCallback::AsObject()
{
    cout << "====================================" << endl;
    return nullptr;
}