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
#include "cellular_data_function_proxy.h"
#include "cellular_data_types.h"
#include "condition_lock.h"
#include "log.h"

class CellularDataFunctionTest : public testing::Test {
public:
    static const int SLOT_ID = 0;
    static const int ERR_SLOT_ID = 3;
    static bool ORIGINAL_STATE;
    const int H_CODE_INVALID_PARAM = -1;
    static const int LOCK_WAIT_SLIP = 50;
    static const int LOCK_WAIT_TIMEOUT = 10000;
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

bool CellularDataFunctionTest::ORIGINAL_STATE = false;

void CellularDataFunctionTest::SetUpTestCase()
{
    OHOS::Telephony::g_telephonyService = OHOS::Telephony::GetProxy();
    if (OHOS::Telephony::g_telephonyService == nullptr) {
        return;
    }
    ORIGINAL_STATE = OHOS::Telephony::g_telephonyService->IsCellularDataEnabled();
}

void CellularDataFunctionTest::SetUp()
{
    bool enable = false;
    ASSERT_NE(OHOS::Telephony::g_telephonyService, nullptr);
    int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularData(enable);
    ASSERT_EQ(result, OHOS::Telephony::SET_SUCCESS);
    LOCK_NUM_WHILE_NE(OHOS::Telephony::g_telephonyService->GetCellularDataState(),
        (int)OHOS::Telephony::HDataConnectionState::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
}

void CellularDataFunctionTest::TearDown() {}

void CellularDataFunctionTest::TearDownTestCase()
{
    ASSERT_NE(OHOS::Telephony::g_telephonyService, nullptr);
    int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularData(ORIGINAL_STATE);
    ASSERT_EQ(result, OHOS::Telephony::SET_SUCCESS);
    if (ORIGINAL_STATE == false) {
        LOCK_NUM_WHILE_NE(OHOS::Telephony::g_telephonyService->GetCellularDataState(),
            (int)OHOS::Telephony::HDataConnectionState::DATA_STATE_DISCONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    } else {
        LOCK_NUM_WHILE_NE(OHOS::Telephony::g_telephonyService->GetCellularDataState(),
            (int)OHOS::Telephony::HDataConnectionState::DATA_STATE_CONNECTED, LOCK_WAIT_SLIP, LOCK_WAIT_TIMEOUT);
    }
}

#endif // CELLULAR_DATA_SERVICE_PROXY_H