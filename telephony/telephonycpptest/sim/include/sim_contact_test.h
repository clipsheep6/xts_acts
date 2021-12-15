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

#ifndef TELEPHONY_SIM_CONTACT_TEST
#define TELEPHONY_SIM_CONTACT_TEST
#include <gtest/gtest.h>
#include <thread>
#include <map>
#include <set>
#include "sim_proxy.h"
#include "sim_test.h"
#include "sim_pin2_test.h"

class SimContact {
public:
    void DeleteADNContact(int32_t slotId, const std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> &delDiallingInfo);
    void DeleteFDNContact(int32_t slotId, const std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> &delDiallingInfo);
    void QueryDeletionResult(int32_t slotId, int32_t type, int32_t contactIndex);
    int32_t QueryContactListFreeIndex(
        std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> &vecDialNumInfo);
};

static std::shared_ptr<SimContact> g_simContact;

void SimContact::DeleteADNContact(
    int32_t slotId, const std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> &delDiallingInfo)
{
    int32_t typeADN = 1;
    bool isExist = false;
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> daillingAdnInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(slotId, typeADN);
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = daillingAdnInfo.begin();
         iter != daillingAdnInfo.end(); iter++) {
        if ((*iter)->index_ == delDiallingInfo->index_) {
            isExist = true;
            break;
        }
    }
    if (isExist) {
        bool ret = g_proxy.GetHandler()->DelIccDiallingNumbers(slotId, typeADN, delDiallingInfo);
        if (ret == false) {
            LOG("DelIccDiallingNumbers typeADN fail...");
        }
    }
}

void SimContact::DeleteFDNContact(
    int32_t slotId, const std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> &delDiallingInfo)
{
    int32_t typeFDN = 2;
    bool isExist = false;
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> daillingFdnInfo =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(slotId, typeFDN);
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = daillingFdnInfo.begin();
         iter != daillingFdnInfo.end(); iter++) {
        if ((*iter)->index_ == delDiallingInfo->index_) {
            isExist = true;
            break;
        }
    }
    if (isExist) {
        bool result = g_proxy.GetHandler()->DelIccDiallingNumbers(slotId, typeFDN, delDiallingInfo);
        if (result == false) {
            LOG("DelIccDiallingNumbers typeFDN fail...");
        }
    }
}

void SimContact::QueryDeletionResult(int32_t slotId, int32_t type, int32_t contactIndex)
{
    bool findRecordNum = false;
    std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> vecQueryDialNum =
        g_proxy.GetHandler()->QueryIccDiallingNumbers(slotId, type);
    for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator vecIter = vecQueryDialNum.begin();
         vecIter != vecQueryDialNum.end(); vecIter++) {
        if ((*vecIter)->index_ == contactIndex) {
            findRecordNum = true;
            break;
        }
    }
    ASSERT_FALSE(findRecordNum);
}

int32_t SimContact::QueryContactListFreeIndex(std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>> &vecDialNumInfo)
{
    std::set<int32_t> saveRecordNum;
    int32_t initIndex = 1;
    int32_t freeIndex = 0;
    if (!vecDialNumInfo.empty()) {
        for (std::vector<std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo>>::iterator iter = vecDialNumInfo.begin();
             iter != vecDialNumInfo.end(); iter++) {
            saveRecordNum.insert((*iter)->index_);
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
    return freeIndex;
}

class SimADNContactTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

class SimFDNContactTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

void SimADNContactTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimPin2Test SetUpTestCase telephonyService_ error....");
        return;
    }
}

void SimADNContactTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimADNContactTest::TearDown()
{
    OHOS::Telephony::LockStatusResponse response;
    int32_t simId = 0;
    int32_t abnormalSituation = -2;
    int32_t passwordMistake = -1;
    g_proxy.GetHandler()->UnlockPin2(simId, OHOS::Str8ToStr16(CORRECT_PIN2), response);
    if (response.result == abnormalSituation) {
        g_aboutPin2->RestoreNormalPuk2Status(OHOS::Str8ToStr16(CORRECT_PIN2), OHOS::Str8ToStr16(CORRECT_PUK2));
    }
    else if (response.result == passwordMistake) {
        g_aboutPin2->RestoreNormalPin2Status(OHOS::Str8ToStr16(CORRECT_PIN2));
    }

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->index_ = 1;
    delDiallingInfo->name_ = OHOS::Str8ToStr16("test");
    delDiallingInfo->number_ = OHOS::Str8ToStr16("12345678");
    delDiallingInfo->pin2_ = OHOS::Str8ToStr16(CORRECT_PIN2);
    g_simContact->DeleteADNContact(simId, delDiallingInfo);
    delDiallingInfo->index_ = 2;
    g_simContact->DeleteADNContact(simId, delDiallingInfo);
}

void SimFDNContactTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimPin2Test SetUpTestCase telephonyService_ error....");
        return;
    }
}

void SimFDNContactTest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

void SimFDNContactTest::TearDown()
{
    OHOS::Telephony::LockStatusResponse response;
    int32_t simId = 0;
    int32_t abnormalSituation = -2;
    int32_t passwordMistake = -1;
    g_proxy.GetHandler()->UnlockPin2(simId, OHOS::Str8ToStr16(CORRECT_PIN2), response);
    if (response.result == abnormalSituation) {
        g_aboutPin2->RestoreNormalPuk2Status(OHOS::Str8ToStr16(CORRECT_PIN2), OHOS::Str8ToStr16(CORRECT_PUK2));
    }
    else if (response.result == passwordMistake) {
        g_aboutPin2->RestoreNormalPin2Status(OHOS::Str8ToStr16(CORRECT_PIN2));
    }

    std::shared_ptr<OHOS::Telephony::DiallingNumbersInfo> delDiallingInfo =
        std::make_shared<OHOS::Telephony::DiallingNumbersInfo>();
    delDiallingInfo->index_ = 1;
    delDiallingInfo->name_ = OHOS::Str8ToStr16("test");
    delDiallingInfo->number_ = OHOS::Str8ToStr16("12345678");
    delDiallingInfo->pin2_ = OHOS::Str8ToStr16(CORRECT_PIN2);
    g_simContact->DeleteFDNContact(simId, delDiallingInfo);
    delDiallingInfo->index_ = 2;
    g_simContact->DeleteFDNContact(simId, delDiallingInfo);
}

#endif
