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

#include "network_manager_test.h"
#include "uid_policy_test.h"
#include <gtest/gtest.h>
#include <thread>
#include <vector>
#include <algorithm>

static const int UID_NUM_1 = 1;
static const int UID_NUM_2 = 2;
static const int UID_NUM_3 = 3;
static const int UID_NUM_4 = 4;
static const int UID_NUM_5 = 5;
static const int UID_NUM_6 = 6;
static const int UID_NUM_7 = 7;
static const int UID_NUM_8 = 8;
static const int UID_NUM_9 = 9;

static const int EXCEPT_POLICY_NUM_9 = 9;
static const int EXCEPT_POLICY_NUM_3 = 3;
static const int EXCEPT_POLICY_NUM_5 = 5;
static const int EXCEPT_POLICY_NUM_12 = 12;
static const int EXCEPT_POLICY_NUM_31 = 31;
static const int EXCEPT_POLICY_NUM_33 = 33;
static const int EXCEPT_POLICY_NUM_63 = 63;
static const int EXCEPT_POLICY_NUM_65 = 65;

namespace OHOS {
namespace NetManagerStandard {
using namespace testing::ext;

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_0100, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);

    NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(UID_NUM_1);

    EXPECT_TRUE(policyResult == NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
}

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_0200, Function | MediumTest | Level3)
{
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_2, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);

    EXPECT_EQ(result, NetPolicyResultCode::ERR_NONE);

    NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(UID_NUM_2);

    EXPECT_EQ(policyResult, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);
}

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_0300, Function | MediumTest | Level3)
{
    NetPolicyResultCode result = DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_3, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);

    EXPECT_EQ(result, NetPolicyResultCode::ERR_NONE);

    NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(UID_NUM_3);

    EXPECT_EQ(policyResult, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
}

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_0400, Function | MediumTest | Level3)
{
    NetPolicyResultCode result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_4, (NetUidPolicy)EXCEPT_POLICY_NUM_9);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_INVALID_POLICY);
}

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_0500
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_0500, Function | MediumTest | Level3)
{
    NetPolicyResultCode result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_4, (NetUidPolicy)EXCEPT_POLICY_NUM_3);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_INVALID_POLICY);
}

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_0600
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_0600, Function | MediumTest | Level3)
{
    NetPolicyResultCode result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_4, (NetUidPolicy)EXCEPT_POLICY_NUM_5);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_INVALID_POLICY);
}

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_0700
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_0700, Function | MediumTest | Level3)
{
    NetPolicyResultCode result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_4, (NetUidPolicy)EXCEPT_POLICY_NUM_31);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_INVALID_POLICY);
}

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_0800
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_0800, Function | MediumTest | Level3)
{
    NetPolicyResultCode result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_4, (NetUidPolicy)EXCEPT_POLICY_NUM_33);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_INVALID_POLICY);
}

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_0900
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_0900, Function | MediumTest | Level3)
{
    NetPolicyResultCode result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_4, (NetUidPolicy)EXCEPT_POLICY_NUM_63);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_INVALID_POLICY);
}

/*
 * @tc.number  Telephony_NetworkManager_SetUidPolicy_1000
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_SetUidPolicy_1000, Function | MediumTest | Level3)
{
    NetPolicyResultCode result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_4, (NetUidPolicy)EXCEPT_POLICY_NUM_65);
    EXPECT_EQ(result, NetPolicyResultCode::ERR_INVALID_POLICY);
}

//=================================test GetUidPolicy start=====================================================

/*
 * @tc.number  Telephony_NetworkManager_GetUidPolicy_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUidPolicy_0100, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_5, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(UID_NUM_5);

    EXPECT_EQ(policyResult, NetUidPolicy::NET_POLICY_ALLOW_ALL);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUidPolicy_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUidPolicy_0200, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_6, NetUidPolicy::NET_POLICY_REJECT_ALL);
    NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(UID_NUM_6);

    EXPECT_EQ(policyResult, NetUidPolicy::NET_POLICY_REJECT_ALL);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUidPolicy_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUidPolicy_0300, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_1,
        NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);

    NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(UID_NUM_1);

    EXPECT_EQ(policyResult, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUidPolicy_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUidPolicy_0400, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_2, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_2, (NetUidPolicy)EXCEPT_POLICY_NUM_12);

    NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(UID_NUM_2);

    EXPECT_EQ(policyResult, NetUidPolicy::NET_POLICY_ALLOW_ALL);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUidPolicy_0500
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUidPolicy_0500, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_3, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_3, NetUidPolicy::NET_POLICY_NONE);

    NetUidPolicy policyResult = DelayedSingleton<NetPolicyClient>::GetInstance()->GetUidPolicy(UID_NUM_3);

    EXPECT_EQ(policyResult, NetUidPolicy::NET_POLICY_NONE);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUids_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUids_0100, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_1, NetUidPolicy::NET_POLICY_NONE);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_2, NetUidPolicy::NET_POLICY_NONE);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_3, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);

    std::vector<uint32_t> vect =
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetUids(NetUidPolicy::NET_POLICY_NONE);
    EXPECT_TRUE(vect.empty());
}

/*
 * @tc.number  Telephony_NetworkManager_GetUids_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUids_0200, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_2, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_3, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);

    std::vector<uint32_t> uids =
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetUids(NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);

    int ret = std::count(uids.begin(), uids.end(), UID_NUM_1);
    ASSERT_GT(ret, NETMANAGER_SUCCESS);
    ret = std::count(uids.begin(), uids.end(), UID_NUM_2);
    ASSERT_GT(ret, NETMANAGER_SUCCESS);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUids_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUids_0300, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_2, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_3, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);

    std::vector<uint32_t> policyResult =
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetUids(NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);

    ASSERT_EQ(policyResult.size(), UID_NUM_1);
    EXPECT_EQ(policyResult[0], UID_NUM_3);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUids_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUids_0400, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_4, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_5, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_6, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);
    std::vector<uint32_t> uids =
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetUids(NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
    int ret = std::count(uids.begin(), uids.end(), UID_NUM_4);
    ASSERT_GT(ret, NETMANAGER_SUCCESS);
    ret = std::count(uids.begin(), uids.end(), UID_NUM_5);
    ASSERT_GT(ret, NETMANAGER_SUCCESS);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUids_0500
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUids_0500, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_7, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_8, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_9, NetUidPolicy::NET_POLICY_REJECT_ALL);
    std::vector<uint32_t> result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetUids(NetUidPolicy::NET_POLICY_ALLOW_ALL);
    ASSERT_EQ(result.size(), UID_NUM_2);
    EXPECT_EQ(result[0], UID_NUM_7);
    EXPECT_EQ(result[1], UID_NUM_8);
}

/*
 * @tc.number  Telephony_NetworkManager_GetUids_0600
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUids_0600, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_7, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_8, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_9, NetUidPolicy::NET_POLICY_REJECT_ALL);
    std::vector<uint32_t> result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetUids(NetUidPolicy::NET_POLICY_REJECT_ALL);
    ASSERT_EQ(result.size(), UID_NUM_1);
    EXPECT_EQ(result[0], UID_NUM_9);
}


/*
 * @tc.number  Telephony_NetworkManager_GetUids_0700
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_GetUids_0700, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_2, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_3, NetUidPolicy::NET_POLICY_REJECT_ALL);
    std::vector<uint32_t> result =
        DelayedSingleton<NetPolicyClient>::GetInstance()->GetUids((NetUidPolicy)EXCEPT_POLICY_NUM_9);
    EXPECT_TRUE(result.empty());
}

//======================================test GetUidPolicy end=====================================================
//======================================test IsUidNetAccess start ======================================================

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_0100
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_0100, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_1, true);
    ASSERT_TRUE(ret);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_0200
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_0200, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_2, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);
    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_2, true);
    ASSERT_TRUE(ret);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_0300
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_0300, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_3, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_3, true);
    EXPECT_FALSE(ret);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_0400
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_0400, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_4, NetUidPolicy::NET_POLICY_ALLOW_ALL);
    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_4, true);
    ASSERT_TRUE(ret);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_0500
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_0500, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_5, NetUidPolicy::NET_POLICY_REJECT_ALL);
    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_5, true);
    EXPECT_FALSE(ret);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_0600
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_0600, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_3, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_3, NetUidPolicy::NET_POLICY_NONE);
    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_3, true);
    ASSERT_TRUE(ret);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_0700
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_0700, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_1, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_1, NetUidPolicy::NET_POLICY_NONE);
    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_1, true);
    ASSERT_TRUE(ret);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_0800
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_0800, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(UID_NUM_5, NetUidPolicy::NET_POLICY_REJECT_ALL);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_5, NetUidPolicy::NET_POLICY_ALLOW_METERED_BACKGROUND);
    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_5, true);
    ASSERT_TRUE(ret);
}

/*
 * @tc.number  Telephony_NetworkManager_IsUidNetAccess_0900
 * @tc.name
 * @tc.desc    Function test
 */
HWTEST_F(UidPolicyTest, Telephony_NetworkManager_IsUidNetAccess_0900, Function | MediumTest | Level3)
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_2, NetUidPolicy::NET_POLICY_TEMPORARY_ALLOW_METERED);
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetUidPolicy(
        UID_NUM_2, NetUidPolicy::NET_POLICY_REJECT_METERED_BACKGROUND);
    bool ret = DelayedSingleton<NetPolicyClient>::GetInstance()->IsUidNetAccess(UID_NUM_2, true);
    EXPECT_FALSE(ret);
}
//=================================test IsUidNetAccess end==========================================

}
}