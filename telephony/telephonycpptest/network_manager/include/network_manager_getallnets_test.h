/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

#include "i_net_conn_service.h"
#include "iservice_registry.h"
#include "log.h"
#include "net_conn_constants.h"
#include "net_link_info.h"
#include "system_ability_definition.h"
#include "time_count_helper.h"

namespace OHOS {
namespace NetManagerStandard {
class NetworkManagerGetAllNetsTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void NetworkManagerGetAllNetsTest::SetUpTestCase()
{
    std::cout << "SetUpTestCase" << std::endl;
}

void NetworkManagerGetAllNetsTest::TearDownTestCase()
{
    std::cout << "TearDownTestCase" << std::endl;
}

void NetworkManagerGetAllNetsTest::SetUp()
{
    std::cout << "SetUp" << std::endl;
}

void NetworkManagerGetAllNetsTest::TearDown()
{
    std::cout << "TearDown" << std::endl;
}
} // namespace NetManagerStandard
} // namespace OHOS
#endif // NETWORK_MANAGER_GETALLNETS_TEST_H