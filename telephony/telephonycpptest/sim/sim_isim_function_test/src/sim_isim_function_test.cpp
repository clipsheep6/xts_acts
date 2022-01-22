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

#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include "sim_test.h"
#include "sim_isim_test.h"

using namespace testing::ext;
using namespace OHOS;
const int32_t SimTest::VAILD_SLOT_ID = EFFECTIVE_SLOT_ID;
const unsigned int SimTest::IMSI_LENGTH = 15;

/**
 * @tc.number   Telephony_Sim_GetIMSI_0900
 * @tc.name     Test GetIMSI interface slotId under ISIM card type and check the return value.
 * @tc.desc     Function test
 */
HWTEST_F(SimISIMTest, Telephony_Sim_GetIMSI_0900, Function | MediumTest | Level3)
{
    if (!isISIM) {
        LOG("The current sim card type is not IMSI.");
        return;
    }
    std::u16string result = g_proxy.GetHandler()->GetIMSI(SimTest::VAILD_SLOT_ID);
    const char *temp = nullptr;
    temp = Str16ToStr8(result).c_str();
    std::string imsi = Str16ToStr8(result);
    ASSERT_STRNE(temp, "");
    // IMSI is a fixed string of 15 characters.
    ASSERT_EQ(imsi.length(), SimTest::IMSI_LENGTH);
}