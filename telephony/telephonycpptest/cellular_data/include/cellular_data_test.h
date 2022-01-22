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

#ifndef CELLULAR_DATA_SERVICE_PROXY_H
#define CELLULAR_DATA_SERVICE_PROXY_H
#include <gtest/gtest.h>
#include "cellular_data_proxy.h"
#include "cellular_data_types.h"
#include "condition_lock.h"

enum SlotId {
    SLOTID = 0,
    SLOTID_1 = 1,
    SLOTID_2 = 2,
    SLOTID_ERR = -1
};

class CellularDataSlotIdTest : public testing::Test {
public:
    static bool ORIGINAL_STATE;
    const int SET_ERR = 84082688;
    static const int LOCK_WAIT_SLIP = 50;
    static const int LOCK_WAIT_TIMEOUT = 20000;
    const int TEST_RUN_TIME_1000 = 1000;
    const int TEST_USEC_500 = 500;

public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

bool CellularDataSlotIdTest::ORIGINAL_STATE = false;

void CellularDataSlotIdTest::SetUpTestCase()
{
    OHOS::Telephony::g_telephonyService = OHOS::Telephony::GetProxy();
    if (OHOS::Telephony::g_telephonyService == nullptr) {
        return;
    }
    ORIGINAL_STATE = OHOS::Telephony::g_telephonyService->IsCellularDataEnabled();
}

void CellularDataSlotIdTest::SetUp()
{
    bool enable = false;
    ASSERT_NE(OHOS::Telephony::g_telephonyService, nullptr);
    int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularData(enable);
    ASSERT_EQ(result, (int)OHOS::Telephony::DataRespondCode::SET_SUCCESS);
    ASSERT_EQ(OHOS::Telephony::g_telephonyService->SetDefaultCellularDataSlotId(SLOTID),
        (int)OHOS::Telephony::DataRespondCode::SET_SUCCESS);
    ASSERT_EQ(OHOS::Telephony::g_telephonyService->GetDefaultCellularDataSlotId(), SLOTID);
    LOCK_NUM_WHILE_NE(OHOS::Telephony::g_telephonyService->GetCellularDataState(),
        (int)OHOS::Telephony::DataConnectionStatus::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

void CellularDataSlotIdTest::TearDown() {}

void CellularDataSlotIdTest::TearDownTestCase()
{
    ASSERT_NE(OHOS::Telephony::g_telephonyService, nullptr);
    int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularData(ORIGINAL_STATE);
    ASSERT_EQ(result, (int)OHOS::Telephony::DataRespondCode::SET_SUCCESS);
    if (ORIGINAL_STATE == false) {
        LOCK_NUM_WHILE_NE(OHOS::Telephony::g_telephonyService->GetCellularDataState(),
            (int)OHOS::Telephony::DataConnectionStatus::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    } else {
        LOCK_NUM_WHILE_NE(OHOS::Telephony::g_telephonyService->GetCellularDataState(),
            (int)OHOS::Telephony::DataConnectionStatus::DATA_STATE_CONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
}

class CellularDataTest : public testing::Test {
public:
    static bool ORIGINAL_STATE;
    const int H_CODE_INVALID_PARAM = 84082688;
    static const int LOCK_WAIT_SLIP = 50;
    static const int LOCK_WAIT_TIMEOUT = 20000;
    const int TEST_RUN_TIME_1000 = 1000;
    const int TEST_USEC_500 = 500;

public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

bool CellularDataTest::ORIGINAL_STATE = false;

void CellularDataTest::SetUpTestCase()
{
    OHOS::Telephony::g_telephonyService = OHOS::Telephony::GetProxy();
    if (OHOS::Telephony::g_telephonyService == nullptr) {
        return;
    }
    ORIGINAL_STATE = OHOS::Telephony::g_telephonyService->IsCellularDataEnabled();
}

void CellularDataTest::SetUp()
{
    bool enable = false;
    ASSERT_NE(OHOS::Telephony::g_telephonyService, nullptr);
    int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularData(enable);
    ASSERT_EQ(result, (int)OHOS::Telephony::DataRespondCode::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(OHOS::Telephony::g_telephonyService->GetCellularDataState(),
        (int)OHOS::Telephony::DataConnectionStatus::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

void CellularDataTest::TearDown() {}

void CellularDataTest::TearDownTestCase()
{
    ASSERT_NE(OHOS::Telephony::g_telephonyService, nullptr);
    int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularData(ORIGINAL_STATE);
    ASSERT_EQ(result, (int)OHOS::Telephony::DataRespondCode::SET_SUCCESS);
    if (ORIGINAL_STATE == false) {
        LOCK_NUM_WHILE_NE(OHOS::Telephony::g_telephonyService->GetCellularDataState(),
            (int)OHOS::Telephony::DataConnectionStatus::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    } else {
        LOCK_NUM_WHILE_NE(OHOS::Telephony::g_telephonyService->GetCellularDataState(),
            (int)OHOS::Telephony::DataConnectionStatus::DATA_STATE_CONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
}

class CellularDataRoamingTest : public testing::Test {
public:
    static const int SLOT_ID = 0;
    static const int ERR_SLOT_ID_1 = 1;
    static const int ERR_SLOT_ID_MINUS_1 = -1;
    static const int ERR_SLOT_ID_2 = 2;
    static const int TEST_RUN_TIME_1000 = 1000;
    const int H_CODE_INVALID_PARAM = 84082688;
    const int TEST_USEC_500 = 500;
    static bool ROAMING_STATE;

public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

bool CellularDataRoamingTest::ROAMING_STATE = false;

void CellularDataRoamingTest::SetUpTestCase()
{
    OHOS::Telephony::g_telephonyService = OHOS::Telephony::GetProxy();
    if (OHOS::Telephony::g_telephonyService == nullptr) {
        return;
    }
    ROAMING_STATE = OHOS::Telephony::g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID);
}

void CellularDataRoamingTest::SetUp() {}

void CellularDataRoamingTest::TearDownTestCase()
{
    ASSERT_NE(OHOS::Telephony::g_telephonyService, nullptr);
    int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularDataRoaming(SLOT_ID, ROAMING_STATE);
    ASSERT_EQ(result, (int)OHOS::Telephony::DataRespondCode::SET_SUCCESS);
    if (ROAMING_STATE == false) {
        ASSERT_EQ(OHOS::Telephony::g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID),
            (int)OHOS::Telephony::RoamingSwitchCode::CELLULAR_DATA_ROAMING_DISABLED);
    } else {
        ASSERT_EQ(OHOS::Telephony::g_telephonyService->IsCellularDataRoamingEnabled(SLOT_ID),
            (int)OHOS::Telephony::RoamingSwitchCode::CELLULAR_DATA_ROAMING_ENABLED);
    }
}

void CellularDataRoamingTest::TearDown() {}

#endif // CELLULAR_DATA_SERVICE_PROXY_H