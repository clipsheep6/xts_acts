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

#ifndef UTILS_H
#define UTILS_H
#include "net_policy_cellular_policy.h"
#include "net_policy_quota_policy.h"

namespace OHOS {
namespace NetManagerStandard {
bool EqualsNetPolicy(NetPolicyQuotaPolicy& left, NetPolicyQuotaPolicy& right)
{
    return left.netType_ == right.netType_ &&
        left.subscriberId_ == right.subscriberId_ &&
        left.periodStartTime_ == right.periodStartTime_ &&
        left.periodDuration_ == right.periodDuration_ &&
        left.warningBytes_ == right.warningBytes_ &&
        left.limitBytes_ == right.limitBytes_ &&
        left.lastLimitSnooze_ == right.lastLimitSnooze_ &&
        left.metered_ == right.metered_ &&
        left.source_ == right.source_;
}

void PrintlnPolicyInfo(NetPolicyQuotaPolicy& policy)
{
    using namespace std;
    cout << "netType_: " << policy.netType_
        << "subscriberId_:" << policy.subscriberId_
        << "periodStartTime_:" << policy.periodStartTime_
        << "periodDuration_:" << policy.periodDuration_
        << "warningBytes_:" << policy.warningBytes_
        << "limitBytes_:" << policy.limitBytes_
        << "lastLimitSnooze_:" << policy.lastLimitSnooze_
        << "metered_:" << policy.metered_
        << "source_:" << policy.source_
        << endl;
}

bool EqualsCellularPolicy(NetPolicyCellularPolicy& left, NetPolicyCellularPolicy& right)
{
    return left.subscriberId_ == right.subscriberId_ &&
        left.periodStartTime_ == right.periodStartTime_ &&
        left.periodDuration_ == right.periodDuration_ &&
        left.title_ == right.title_ &&
        left.summary_ == right.summary_ &&
        left.limitBytes_ == right.limitBytes_ &&
        left.limitAction_ == right.limitAction_ &&
        left.usedBytes_ == right.usedBytes_ &&
        left.usedTimeDuration_ == right.usedTimeDuration_ &&
        left.possessor_ == right.possessor_;
}
}
}
#endif // UTILS_H