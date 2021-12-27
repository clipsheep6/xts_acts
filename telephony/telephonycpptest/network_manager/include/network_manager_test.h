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
#include "dns_resolver_constants.h"
#include "ethernet_constants.h"
#include "net_policy_constants.h"

enum INET {
    UNKNOWN = 0X00,
    IPV4 = 0X01,
    IPV6 = 0X02
};

class NetworkManagerTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void NetworkManagerTest::SetUpTestCase() {}

void NetworkManagerTest::TearDownTestCase() {}

void NetworkManagerTest::SetUp() {}

void NetworkManagerTest::TearDown() {}


#endif // NETWORK_MANAGER_TEST_H