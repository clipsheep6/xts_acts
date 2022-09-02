/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <gtest/gtest.h>
#include <string>
#include <iostream>
#include <unistd.h>
extern "C" {
#include "device_auth_func.h"
#include "device_auth_log.h"
}


using namespace testing::ext;
using namespace std;
namespace {

class AccountAsym : public testing::Test {
public:
    static void SetUpTestCase(void);

    static void TearDownTestCase(void);

    void SetUp();

    void TearDown();
};

/* test suit - GroupManage_P2P */
void AccountAsym::SetUpTestCase() {
}

void AccountAsym::TearDownTestCase() {
}

void AccountAsym::SetUp() {

}

void AccountAsym::TearDown() {
}

HWTEST_F(AccountAsym, SEC_DevAuth_Account_Func_0101, TestSize.Level0)
{
    LOGI("testtesttest");
}

}