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

#ifndef UID_POLICY_TEST_H
#define UID_POLICY_TEST_H
#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <memory>
#include <thread>
#include "system_ability_definition.h"
#include "i_net_conn_service.h"
#include "iservice_registry.h"

namespace OHOS {
namespace NetManagerStandard {

class NetworkManagerRegisterNetconnCallbackTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};
void NetworkManagerRegisterNetconnCallbackTest::SetUpTestCase(){}

void NetworkManagerRegisterNetconnCallbackTest::TearDownTestCase() {}

void NetworkManagerRegisterNetconnCallbackTest::SetUp() {}

void NetworkManagerRegisterNetconnCallbackTest::TearDown() {}

}
}
#endif // UID_POLICY_TEST_H