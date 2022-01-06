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

#ifndef WIFI_TEST_H
#define WIFI_TEST_H

#include <gtest/gtest.h>
#include <memory>
#include <iostream>
#include "ap_service.h"
#include "wifi_errcode.h"
#include "net_tether_constants.h"
#include "net_policy_client.h"
#include "net_tether_client.h"
#include "net_conn_client.h"
#include "net_tether_service_proxy.h"
#include "iservice_registry.h"
#include "system_ability_definition.h"
#include "i_net_tether_service.h"
#include "i_net_tether_callback.h"

class TestNetTetherCallback;
sptr<INetTetherService> netTetherService = nullptr;
sptr<INetTetherCallback> callback = (std::make_unique<TestNetTetherCallback>()).release();

class WIFITest : public testing::Test {
public:
    const int TEST_RUN_TIME = 10;
    const int USEC_500 = 500;
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void WIFITest::SetUpTestCase() {}

void WIFITest::TearDownTestCase() {}

void WIFITest::SetUp() {}

void WIFITest::TearDown() {}


class TestNetTetherCallback : public NetTetherCallbackStub {
public:
    TestNetTetherCallback();
    virtual ~TestNetTetherCallback() override;
    int32_t TetherSuccess(int32_t tetherType, const std::string& ifName) override;
    int32_t TetherFailed(int32_t tetherType, const std::string& ifName, int32_t failCode) override;
};

TestNetTetherCallback::TestNetTetherCallback() {}

TestNetTetherCallback::~TestNetTetherCallback() {}

int32_t TestNetTetherCallback::TetherSuccess(int32_t tetherType, const std::string& ifName)
{
    ASSERT_EQ(tetherType, TETHERING_WIFI);
    ASSERT_STREQ("wlan0", ifName);
    return 0;
}

int32_t TestNetTetherCallback::TetherFailed(int32_t tetherType, const std::string& ifName, int32_t failCode)
{
    std::cout << "TestNetTetherCallback::TetherFailed, tetherType: " << tetherType;
    std::cout << ", ifName: " << ifName << ", failCode: " << failCode << std::endl;
    return 0;
}

#endif // WIFI_TEST_H