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

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;

const int32_t SimTest::LOOP_TEN_TIMES = 10;
const int32_t SimTest::TIME_USEC = 500;
const int32_t SimTest::SLOTID_0 = 0;
const int SimTest::TYPE_ADN = 1;
const std::string SimTest::CONTACT_NAME = "test";
const std::string SimTest::CONTACT_NUMBER = "12345678";
const std::string SimTest::NEW_CONTACT_NAME = "tset_Update";
const std::string SimTest::NEW_CONTACT_NUMBER = "87654321";
const int SimTest::CONTACT_INDEX_1 = 1;
const std::string SimTest::ERROR_FDN_PIN2 = "123@#ABCD";

/**************************************************Phase four*****************************************************/
/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0500
 * @tc.name     Test the QueryIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0500, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_TEN_TIMES; ++timeNumber) {
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_TEN_TIMES;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0600
 * @tc.name     Test the AddIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0600, Function | MediumTest | Level1)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);

    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < LOOP_TEN_TIMES; ++timeNumber) {
        delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
        g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
        delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
        g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);

        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
        totalTime = totalTime + timeHelper.GetUseTimeUs();
    }
    int32_t useTimeUs = totalTime / LOOP_TEN_TIMES;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}

/**
 * @tc.number   Telephony_Sim_DelIccDiallingNumbers_0600
 * @tc.name     Test the DelIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_DelIccDiallingNumbers_0600, Function | MediumTest | Level1)
{
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecDialNumInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (!vecDialNumInfo.empty()) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); ++iter) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); ++setIter) {
            if (*setIter != initIndex) {
                freeIndex = initIndex;
                break;
            }
            initIndex++;
            freeIndex = initIndex;
        }
    } else {
        freeIndex = initIndex;
    }
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = freeIndex;
    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);

    TimeCountHelper timeHelper;
    bool ret = false;
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < LOOP_TEN_TIMES; ++timeNumber) {
        ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
        if (ret) {
            TimeCountHelper timeHelper;
            timeHelper.StartCountUs();
            g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
            totalTime = totalTime + timeHelper.GetUseTimeUs();
        } else {
            LOG("AddIccDiallingNumbers fail...");
            FAIL();
        }
    }
    int32_t useTimeUs = totalTime / LOOP_TEN_TIMES;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_0900
 * @tc.name     Test the UpdateIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_0900, Function | MediumTest | Level1)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->recordNumber_ = CONTACT_INDEX_1;
    delDiallingInfo->alphaTag_ = Str8ToStr16(CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(CONTACT_NUMBER);
    delDiallingInfo->pin2_ = Str8ToStr16(CORRECT_PIN2);
    g_proxy.DeleteFDNContact(SLOTID_0, delDiallingInfo);
    delDiallingInfo->pin2_ = Str8ToStr16(ERROR_FDN_PIN2);
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);

    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    ASSERT_TRUE(ret);

    delDiallingInfo->alphaTag_ = Str8ToStr16(NEW_CONTACT_NAME);
    delDiallingInfo->number_ = Str8ToStr16(NEW_CONTACT_NUMBER);

    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_TEN_TIMES; ++timeNumber) {
        g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, delDiallingInfo);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_TEN_TIMES;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);

    // Delete the added contact and restore the default status.
    g_proxy.DeleteADNContact(SLOTID_0, delDiallingInfo);
}
