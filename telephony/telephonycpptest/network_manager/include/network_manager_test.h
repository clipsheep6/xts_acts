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

#ifndef NETWORK_MANAGER_TEST_H
#define NETWORK_MANAGER_TEST_H

#include <gtest/gtest.h>
// #include "netmanager_errors.h"

const int TEST_COUNTS_1000 = 1000;
const int SLEEP_MILLISECONDS_3 = 3;
const int32_t TIME_USEC = 500;
const uint8_t _AF_INET  = 2;
const uint8_t _AF_INET6 = 3;
const int ADDR_PREFIX_LENGTH_24 = 24;
const int ADDR_PREFIX_LENGTH_25 = 25;
enum INET{
    UNKNOWN = 0X00,
    IPV4 = 0X01,
    IPV6 = 0X02
};

const int UID_NUM_1=1;
const int UID_NUM_2=2;
const int UID_NUM_3=3;
const int UID_NUM_4=4;
const int UID_NUM_5=5;
const int UID_NUM_6=6;
const int UID_NUM_7=7;
const int UID_NUM_8=8;
const int UID_NUM_9=9;
const int UID_NUM_12=12;
const int UID_NUM_31=31;
const int UID_NUM_33=33;
const int UID_NUM_63=63;
const int UID_NUM_65=65;

const int EXCEPT_POLICY_NUM_9 = 9;
const int EXCEPT_POLICY_NUM_3 = 3;
const int EXCEPT_POLICY_NUM_5 = 5;
const int EXCEPT_POLICY_NUM_12 = 12;
const int EXCEPT_POLICY_NUM_31 = 31;
const int EXCEPT_POLICY_NUM_33 = 33;
const int EXCEPT_POLICY_NUM_63 = 63;
const int EXCEPT_POLICY_NUM_65 = 65;

class NetworkManagerTest : public testing::Test {

public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void NetworkManagerTest::SetUpTestCase()
{
    //HILOG_DEBUG(TAG, "msg: %{public}s", "NAPI_MOCK_VENDOR # init success ");
}

void NetworkManagerTest::TearDownTestCase()
{
    //HILOG_DEBUG(TAG, "  %s   line: %d", __func__, __LINE__);
}

void NetworkManagerTest::SetUp()
{
    //HILOG_DEBUG(TAG, "  %s   line: %d", __func__, __LINE__);
}

void NetworkManagerTest::TearDown()
{
    //HILOG_DEBUG(TAG, "  %s   line: %d", __func__, __LINE__);
}


#endif // NETWORK_MANAGER_TEST_H