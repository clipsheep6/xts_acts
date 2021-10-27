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

const int32_t SimTest::LOOP_NUMBER = 1000;
const int32_t SimTest::LOOP_TEN_TIMES = 10;
const int32_t SimTest::TIME_USEC = 500;
const int32_t SimTest::SLOTID_0 = 0;
const int32_t SimTest::SLOTID_4 = 4;
const int32_t SimTest::OPEN = 1;
const int32_t SimTest::CLOSE = 0;
const int SimTest::TYPE_FDN = 2;
const int SimTest::TYPE_ADN = 1;
const std::string SimTest::CARD_NAME = "test";
const std::string SimTest::CARD_NUMBER = "12345678";
const std::string SimTest::NEW_CARD_NAME = "tset_Update";
const std::string SimTest::NEW_CARD_NUMBER = "12345678_Update";
const int SimTest::CONTACT_INDEX_1 = 1;

/**
 * @tc.number   Telephony_Sim_IsSimActive_0400
 * @tc.name     Test the IsSimActive interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_IsSimActive_0400, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->IsSimActive(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetActiveSimAccountInfoList_0300
 * @tc.name     Test the GetActiveSimAccountInfoList interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetActiveSimAccountInfoList_0300, Function | MediumTest | Level1)
{
    std::vector<OHOS::Telephony::IccAccountInfo> vecAccountInfo;
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        g_proxy.GetHandler()->GetActiveSimAccountInfoList(vecAccountInfo);
        totalTime = totalTime + timeHelper.GetUseTimeUs();
        usleep(100000);
    }
    int32_t useTimeUs = totalTime / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetShowName_0400
 * @tc.name     Test the SetShowName interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowName_0400, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->SetShowName(SLOTID_0, cardName);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetShowName_0400
 * @tc.name     Test the GetShowName interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowName_0400, Function | MediumTest | Level1)
{
    std::u16string cardName = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetShowName(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetShowNumber_0400
 * @tc.name     Test the SetShowNumber interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetShowNumber_0400, Function | MediumTest | Level1)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->SetShowNumber(SLOTID_0, cardNumber);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetShowNumber_0300
 * @tc.name     Test the GetShowNumber interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetShowNumber_0300, Function | MediumTest | Level1)
{
    std::u16string cardNumber = Str8ToStr16("1234");
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetShowNumber(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetOperatorConfigs_0300
 * @tc.name     Test the GetOperatorConfigs interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetOperatorConfigs_0300, Function | MediumTest | Level1)
{
    OHOS::Telephony::OperatorConfig poc;
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetOperatorConfigs(SLOTID_0, poc);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetSimTelephoneNumber_0300
 * @tc.name     Test the GetSimTelephoneNumber interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetSimTelephoneNumber_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetSimTelephoneNumber(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailIdentifier_0300
 * @tc.name     Test the GetVoiceMailIdentifier interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailIdentifier_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetVoiceMailIdentifier(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_GetVoiceMailNumber_0300
 * @tc.name     Test the GetVoiceMailNumber interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_GetVoiceMailNumber_0300, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->GetVoiceMailNumber(SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_QueryIccDiallingNumbers_0500
 * @tc.name     Test the QueryIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_QueryIccDiallingNumbers_0500, Function | MediumTest | Level1)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_TEN_TIMES; timeNumber++) {
        g_proxy.GetHandler()->QueryIccDiallingNumbers(SLOTID_0, TYPE_ADN);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_TEN_TIMES;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_AddIccDiallingNumbers_0800
 * @tc.name     Test the AddIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_AddIccDiallingNumbers_0800, Function | MediumTest | Level1)
{
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < LOOP_TEN_TIMES; timeNumber++) {
        g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
        g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
        TimeCountHelper timeHelper;
        timeHelper.StartCountUs();
        g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
        totalTime = totalTime + timeHelper.GetUseTimeUs();
    }
    int32_t useTimeUs = totalTime / LOOP_TEN_TIMES;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
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
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->recordNumber_);
        }
        for (std::set<int32_t>::iterator setIter = saveRecordNum.begin(); setIter != saveRecordNum.end(); setIter++) {
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
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = freeIndex;
    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);

    TimeCountHelper timeHelper;
    bool ret = false;
    int32_t totalTime = 0;
    for (int32_t timeNumber = 0; timeNumber < LOOP_TEN_TIMES; timeNumber++) {
        ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
        if (ret) {
            TimeCountHelper timeHelper;
            timeHelper.StartCountUs();
            g_proxy.GetHandler()->DelIccDiallingNumbers(SLOTID_0, TYPE_ADN, freeIndex);
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
 * @tc.number   Telephony_Sim_UpdateIccDiallingNumbers_1000
 * @tc.name     Test the UpdateIccDiallingNumbers interface query function 10 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UpdateIccDiallingNumbers_1000, Function | MediumTest | Level1)
{
    g_proxy.DeleteADNContact(SLOTID_0, CONTACT_INDEX_1);
    g_proxy.DeleteFDNContact(SLOTID_0, CONTACT_INDEX_1);
    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> info =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    info->recordNumber_ = CONTACT_INDEX_1;
    info->alphaTag_ = Str8ToStr16(CARD_NAME);
    info->number_ = Str8ToStr16(CARD_NUMBER);
    bool ret = g_proxy.GetHandler()->AddIccDiallingNumbers(SLOTID_0, TYPE_ADN, info);
    ASSERT_TRUE(ret);

    info->alphaTag_ = Str8ToStr16(NEW_CARD_NAME);
    info->number_ = Str8ToStr16(NEW_CARD_NUMBER);

    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_TEN_TIMES; timeNumber++) {
        g_proxy.GetHandler()->UpdateIccDiallingNumbers(SLOTID_0, TYPE_ADN, info, CONTACT_INDEX_1);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_TEN_TIMES;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPin2_0800
 * @tc.name     Test the UnlockPin2 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPin2_0800, Performance | MediumTest | Level3)
{
    OHOS::Telephony::LockStatusResponse response;
    TimeCountHelper timeHelper;
    std::string pin2 = "123";

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->UnlockPin2(Str8ToStr16(pin2), response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_UnlockPuk2_0800
 * @tc.name     Test the UnlockPuk2 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_UnlockPuk2_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    OHOS::Telephony::LockStatusResponse response;
    std::u16string pin2 = Str8ToStr16("1234");
    std::u16string puk2 = Str8ToStr16("12345678");

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->UnlockPuk2(pin2, puk2, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_AlterPin2_0800
 * @tc.name     Test the UnlockPuk2 interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_AlterPin2_0800, Performance | MediumTest | Level3)
{
    TimeCountHelper timeHelper;
    OHOS::Telephony::LockStatusResponse response;
    std::u16string oldPin2 = Str8ToStr16("123");
    std::u16string newPin2 = Str8ToStr16("1234");

    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->AlterPin2(newPin2, oldPin2, response, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    ASSERT_LE(useTimeUs, SimTest::TIME_USEC);
}

/**
 * @tc.number   Telephony_Sim_SetSimActive_0500
 * @tc.name     Test the SetSimActive interface query function 1000 times
 *              and expect an average delay of less than 500μs.
 * @tc.desc     Performance test
 */
HWTEST_F(SimTest, Telephony_Sim_SetSimActive_0500, Function | MediumTest | Level1)
{
    TimeCountHelper timeHelper;
    timeHelper.StartCountUs();
    for (int32_t timeNumber = 0; timeNumber < LOOP_NUMBER; timeNumber++) {
        g_proxy.GetHandler()->SetSimActive(CLOSE, SLOTID_0);
    }
    int32_t useTimeUs = timeHelper.GetUseTimeUs() / LOOP_NUMBER;
    LOG("The time of each time is : %d us", useTimeUs);
    EXPECT_LE(useTimeUs, SimTest::TIME_USEC);

    // Restore initial state.
    bool setResult = g_proxy.GetHandler()->SetSimActive(OPEN, SLOTID_0);
    ASSERT_TRUE(setResult);
}