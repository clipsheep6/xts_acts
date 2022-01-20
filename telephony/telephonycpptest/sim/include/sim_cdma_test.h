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

#ifndef TELEPHONY_SIM_CDMA_TEST
#define TELEPHONY_SIM_CDMA_TEST
#include <gtest/gtest.h>
#include <thread>
#include "sim_proxy.h"
#include "sim_test.h"

class SimCDMATest : public testing::Test {
public:
    static void SetUpTestCase();
    void SetUp();
};

void SimCDMATest::SetUpTestCase()
{
    int ret = g_proxy.Init();
    if (ret != 0) {
        LOG("SimCDMATest SetUpTestCase telephonyService_ error....");
        return;
    }
}

void SimCDMATest::SetUp()
{
    ASSERT_NE(g_proxy.GetHandler(), nullptr);
}

#endif
