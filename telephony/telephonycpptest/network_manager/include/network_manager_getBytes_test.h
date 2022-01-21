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

#ifndef NETWORK_MANAGER_GETBYTES_TEST_H
#define NETWORK_MANAGER_GETBYTES_TEST_H

#include <gtest/gtest.h>
#include <vector>
#include <iostream>
#include <thread>
#include "net_stats_client.h"
#include "i_net_stats_service.h"
#include "static_configuration.h"
#include "data_flow_statistics.h"
#include "dns_resolver_client.h"
#include "dns_resolver_constants.h"

namespace OHOS {
namespace NetManagerStandard {
enum INET{
    UNKNOWN = 0X00,
    IPV4 = 0X01,
    IPV6 = 0X02
};

class NetworkManagerGetBytesTest : public testing::Test{
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void NetworkManagerGetBytesTest::SetUpTestCase() {}
void NetworkManagerGetBytesTest::TearDownTestCase() {}
void NetworkManagerGetBytesTest::SetUp(){ }
void NetworkManagerGetBytesTest::TearDown() {}
}
}
#endif // NETWORK_MANAGER_TEST_H