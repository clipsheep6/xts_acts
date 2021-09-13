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

#ifndef CELLULAR_DATA_ENABLE_TEST_H
#define CELLULAR_DATA_ENABLE_TEST_H
#include "cellular_data_function_proxy.h"
#include <gtest/gtest.h>

class CellularDataFunctionTest : public testing::Test {
public:
    static const int SLOT_ID = 0;
    static const int ERR_SLOT_ID = 3;
    static bool ORIGINAL_STATE;
    static const int H_CODE_INVALID_PARAM = -1;
    static const int H_CODE_FAILED = 0;
    static const int H_CODE_SUCCESS = 1;
    static const int DATA_STATE_DISCONNECTED = 11;
    static const int DATA_STATE_CONNECTING = 12;
    static const int DATA_STATE_CONNECTED = 13;
    static const int H_CODE_INVALID_PARAM = 13;
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
    ORIGINAL_STATE = OHOS::Telephony::g_telephonyService->IsCellularDataEnabled(SLOT_ID);
}

void CellularDataFunctionTest::SetUp()
{
    bool enable = false;
    ASSERT_NE(OHOS::Telephony::g_telephonyService, nullptr);
    int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularData(SLOT_ID, enable);
    ASSERT_EQ(result, 1);
}

void CellularDataFunctionTest::TearDown() {}

void CellularDataFunctionTest::TearDownTestCase()
{
    ASSERT_NE(OHOS::Telephony::g_telephonyService, nullptr);
    if (ORIGINAL_STATE == false) {
        bool enable = false;
        int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularData(SLOT_ID, enable);
        ASSERT_EQ(result, 1);
    } else {
        bool enable = true;
        int32_t result = OHOS::Telephony::g_telephonyService->EnableCellularData(SLOT_ID, enable);
        ASSERT_EQ(result, 1);
    }
}

#endif