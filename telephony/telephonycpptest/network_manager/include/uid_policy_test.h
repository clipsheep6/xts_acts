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

#ifndef UID_POLICY_TEST_H
#define UID_POLICY_TEST_H

#include <gtest/gtest.h>
#include "net_policy_client.h"


namespace OHOS {
namespace NetManagerStandard {
class UidPolicyTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void UidPolicyTest::SetUpTestCase() {}

void UidPolicyTest::TearDownTestCase() {}

void UidPolicyTest::SetUp() {}

void UidPolicyTest::TearDown()
{
    NetUidPolicy arr[] = {NetUidPolicy::NET_POLICY_NONE,
        NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND,
        NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED,
        NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND,
        NetUidPolicy::NET_POLICY_ALLOW_ALL,
        NetUidPolicy::NET_POLICY_REJECT_ALL};
    for (const NetUidPolicy &item : arr) {
        std::vector<uint32_t> uids = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUids(item);
        std::vector<uint32_t>::iterator ptr_uid = uids.begin();
        while (ptr_uid != uids.end()) {
            DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(*ptr_uid, (NetUidPolicy)0); // reset status
            ptr_uid++;
        }
    }
}
}
}
#endif // UID_POLICY_TEST_H