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

#include <cstring>
#include "log.h"
#include "time_count_helper.h"
#include "sim_test.h"
#include "sim_contact_test.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const int32_t SimTest::LOOP_NUMBER = 10;
const int32_t SimTest::TIME_USEC = 1000;
const int SimTest::TYPE_ADN = 1;
const std::string SimTest::CONTACT_NAME = "test";
const std::string SimTest::CONTACT_NUMBER = "12345678";
const std::string SimTest::NEW_CONTACT_NAME = "tset_Update";
const std::string SimTest::NEW_CONTACT_NUMBER = "87654321";
const int SimTest::CONTACT_INDEX_1 = 1;
const std::string SimTest::ERROR_FDN_PIN2 = "123@#ABCD";

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0500
 * @tc.name     Test the QueryIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimOtherContactTest, Telephony_Sim_QueryIccDiallingNumbers_0500, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0600
 * @tc.name     Test the AddIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimADNContactTest, Telephony_Sim_AddIccDiallingNumbers_0600, Function | MediumTest | Level1)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> contactInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    contactInfo->index_ = SimTest::CONTACT_INDEX_1;
    contactInfo->name_ = Str8ToStr16(SimTest::CONTACT_NAME);
    contactInfo->number_ = Str8ToStr16(SimTest::CONTACT_NUMBER);

    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        contactInfo->pin2_ = Str8ToStr16(SimTest::ERROR_FDN_PIN2);
        g_simContact->DeleteADNContact(SimTest::VAILD_SLOT_ID, contactInfo);

        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        g_proxy.GetHandler()->AddIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
        totalTime = totalTime + timeHelper.GetUseTimeUs();
    }
    int32_t useTimeUs = totalTime / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0600
 * @tc.name     Test the DelIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimOtherContactTest, Telephony_Sim_DelIccDiallingNumbers_0600, Function | MediumTest | Level1)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> diallingNumbersList =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN);
    int32_t freeIndex = g_simContact->QueryContactListFreeIndex(diallingNumbersList);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> contactInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    contactInfo->index_ = freeIndex;
    contactInfo->name_ = Str8ToStr16(SimTest::NEW_CONTACT_NAME);
    contactInfo->number_ = Str8ToStr16(SimTest::NEW_CONTACT_NUMBER);
    contactInfo->pin2_ = Str8ToStr16(SimTest::ERROR_FDN_PIN2);

    TimeCountHelper timeHelper;
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
        ASSERT_TRUE(ret);
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        g_proxy.GetHandler()->DelIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
        totalTime = totalTime + timeHelper.GetUseTimeUs();
    }
    int32_t useTimeUs = totalTime / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0900
 * @tc.name     Test the UpdateIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 1000us.
 * @tc.desc     Performance test
 */
HWTEST_F(SimADNContactTest, Telephony_Sim_UpdateIccDiallingNumbers_0900, Function | MediumTest | Level1)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> contactInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    contactInfo->index_ = SimTest::CONTACT_INDEX_1;
    contactInfo->name_ = Str8ToStr16(SimTest::CONTACT_NAME);
    contactInfo->number_ = Str8ToStr16(SimTest::CONTACT_NUMBER);
    contactInfo->pin2_ = Str8ToStr16(SimTest::ERROR_FDN_PIN2);
    g_simContact->DeleteADNContact(SimTest::VAILD_SLOT_ID, contactInfo);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
    ASSERT_TRUE(ret);

    contactInfo->name_ = Str8ToStr16(SimTest::NEW_CONTACT_NAME);
    contactInfo->number_ = Str8ToStr16(SimTest::NEW_CONTACT_NUMBER);

    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < SimTest::LOOP_NUMBER; ++timeNumber) {
        g_proxy.GetHandler()->UpdateIccDiallingNumbers(SimTest::VAILD_SLOT_ID, SimTest::TYPE_ADN, contactInfo);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / SimTest::LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}
