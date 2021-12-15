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

#ifndef TELEPHONY_SIM_MOCK_TEST
#define TELEPHONY_SIM_MOCK_TEST
#include <gtest/gtest.h>
#include <thread>
#include "stdio.h"
#include "securec.h"
#include "sim_proxy.h"
#include "sim_test.h"
#include "mock_vendor.h"
#include "mock_vendor_common.h"

static std::shared_ptr<MockVendor> g_mock = std::make_shared<MockVendor>();

class SimPuk2Set {
public:
    void MockPin2CodeSet(std::string pin2Code);
    void MockPuk2CodeSet(std::string puk2Code);
};

void SimPuk2Set::MockPin2CodeSet(std::string pin2Code)
{
    g_mock->MockVendorSet(DISPATCHID::SIM_SET_PIN2, pin2Code.c_str(), strlen(pin2Code.c_str()));
}

void SimPuk2Set::MockPuk2CodeSet(std::string puk2Code)
{
    g_mock->MockVendorSet(DISPATCHID::SIM_SET_PUK2, puk2Code.c_str(), strlen(puk2Code.c_str()));
}

static std::shared_ptr<SimPuk2Set> g_simPuk2Mock = std::make_shared<SimPuk2Set>();

class SimPuk2MockTest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
    void TearDown();
};

void SimPuk2MockTest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimStateMockTest SetUpTestCase telephonyService_ error....");
        return;
    }
    if (g_mock->Init() != 0) {
        LOG("Init faild");
        return;
    }
}

void SimPuk2MockTest::SetUp()
{
    int32_t dataLength = 0;
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
    g_mock->MockVendorSet(DISPATCHID::SIM_INIT, NULL, dataLength);
}

void SimPuk2MockTest::TearDown()
{
    int32_t dataLength = 0;
    g_mock->MockVendorSet(DISPATCHID::SIM_INIT, NULL, dataLength);
}

#endif
