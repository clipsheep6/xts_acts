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

#ifndef GET_SPECIFIC_NET_TEST_H
#define GET_SPECIFIC_NET_TEST_H

#include <gtest/gtest.h>
#include <iostream>
#include "ethernet_constants.h"
#include "network_manager_test.h"
#include "system_ability_definition.h"
#include "i_net_conn_service.h"
#include "net_conn_constants.h"
#include "singleton.h"
#include "net_conn_client.h"

class GetSpecificNetTest : public testing::Test {
public:
    uint32_t supplierIdTest[10];
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void GetSpecificNetTest::SetUpTestCase() {
}

void GetSpecificNetTest::TearDownTestCase() {
}

void GetSpecificNetTest::SetUp() {
    int32_t loopNumber = 10;
    for (int32_t index = 0 ;index < loopNumber; index++) {
        supplierIdTest[index] = 0;
    }
}

void GetSpecificNetTest::TearDown() {
    int32_t loopNumber = 10;
    for (int32_t index = 0 ;index < loopNumber; index++) {
        if (supplierIdTest[index] != 0) {
            OHOS::DelayedSingleton<OHOS::NetManagerStandard::NetConnClient>::GetInstance()->
                UnregisterNetSupplier(supplierIdTest[index]);
        }
    }
}

#endif // GET_SPECIFIC_NET_TEST_H