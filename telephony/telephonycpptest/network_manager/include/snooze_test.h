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

#ifndef SNOOZE_TEST_H
#define SNOOZE_TEST_H

#include <gtest/gtest.h>
#include "net_conn_client.h"
#include "net_policy_constants.h"
#include "net_policy_define.h"
#include "net_policy_client.h"
namespace OHOS {
namespace NetManagerStandard {
class SnoozeTest : public testing::Test {
public:
    static void SetUpTestCase();
    static void TearDownTestCase();
    void SetUp();
    void TearDown();
};

void SnoozeTest::SetUpTestCase() {}

void SnoozeTest::TearDownTestCase() {}

void SnoozeTest::SetUp()
{
    DelayedSingleton<NetPolicyClient>::GetInstance()->SetFactoryPolicy("");
}

void SnoozeTest::TearDown() {}
}
}

#endif // SNOOZE_TEST_H