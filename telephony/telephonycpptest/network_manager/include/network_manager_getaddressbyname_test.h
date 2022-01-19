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

#ifndef NETWORK_MANAGER_GETALLNETS_TEST_H
#define NETWORK_MANAGER_GETALLNETS_TEST_H

#include <gtest/gtest.h>
#include <iostream>
#include "iservice_registry.h"
#include "system_ability_definition.h"

#include "i_net_conn_service.h"
#include "net_conn_constants.h"
#include "net_link_info.h"
#include "log.h"
#include "time_count_helper.h"

namespace OHOS {
namespace NetManagerStandard {

sptr<INetConnService> netConnService = nullptr;
sptr<INetConnService> GetProxy();
const int TEST_COUNT_1000 =  1000;
const int NETID_100 = 100;
static const int32_t TIME_USEC = 500;
class NetHandlerTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
    
};

void NetHandlerTest::SetUpTestCase() {
    
    std::cout<<"SetUpTestCase"<<std::endl;
}

void NetHandlerTest::TearDownTestCase() {
    std::cout<<"TearDownTestCase"<<std::endl;
}


void NetHandlerTest::SetUp() {

     std::cout<<"SetUp"<<std::endl;
}

void NetHandlerTest::TearDown() {
    std::cout<<"TearDown"<<std::endl;
}
}
}
#endif // NETWORK_MANAGER_GETALLNETS_TEST_H