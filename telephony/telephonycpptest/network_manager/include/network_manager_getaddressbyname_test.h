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

#ifndef NETWORK_MANAGER_GETADDRESSBYNAME_TEST_H
#define NETWORK_MANAGER_GETADDRESSBYNAME_TEST_H

#include <gtest/gtest.h>
#include <iostream>
#include "i_net_conn_service.h"

namespace OHOS {
namespace NetManagerStandard {
sptr<INetConnService> GetProxy();
const int NETID_100 = 100;
const int FD_ID_1 = 1;
const int FD_ID_2 = 2;
const int FD_ID_100 = 100;
const int FD_ID_0 = 0;
class GetAddressByName : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void GetAddressByName::SetUpTestCase()
{
    std::cout<<"SetUpTestCase"<<std::endl;
}

void GetAddressByName::TearDownTestCase()
{
    std::cout<<"TearDownTestCase"<<std::endl;
}

void GetAddressByName::SetUp()
{
    std::cout<<"SetUp"<<std::endl;
}

void GetAddressByName::TearDown()
{
    std::cout<<"TearDown"<<std::endl;
}
}
}
#endif // NETWORK_MANAGER_GETALLNETS_TEST_H
