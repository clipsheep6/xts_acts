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

#ifndef TRAFFIC_POLICY_TEST_H
#define TRAFFIC_POLICY_TEST_H

#include <gtest/gtest.h>
#include "net_conn_client.h"
#include "net_policy_client.h"
namespace OHOS {
namespace NetManagerStandard {
class TrafficPolicyTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void TrafficPolicyTest::SetUpTestCase() {}

void TrafficPolicyTest::TearDownTestCase() {}

void TrafficPolicyTest::SetUp()
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy("");
}

void TrafficPolicyTest::TearDown() {}

}
}
#endif // TRAFFIC_POLICY_TEST_H