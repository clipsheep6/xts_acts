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

#define NETWORSEARCH_FUNCTION_TEST
#include "network_search_test.h"
#include "network_search_state.h"

using namespace testing::ext;
using namespace OHOS;
using namespace OHOS::Telephony;
using namespace OHOS::Telephony::NetworkSearch;
using namespace NetworkSearch;

/*
 * @tc.number  Telephony_NetworkSearch_GetNrOptionMode_0500
 * @tc.name    Test the  GetNrOptionMode interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_GetNrOptionMode_0500, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        NrMode nrMode = GetProxy()->GetNrOptionMode(SLOT_0);
        ASSERT_GE(nrMode, NrMode::NR_MODE_UNKNOWN);
        ASSERT_LE(nrMode, NrMode::NR_MODE_NSA_AND_SA);
    }
}

/*
 * @tc.number  Telephony_NetworkSearch_IsNrSupported_0300
 * @tc.name    Test the  IsNrSupported interface query function executed 1000 times, each time the data is not false
 * @tc.desc    Reliability test
 */
HWTEST_F(NetworkSearchTest, Telephony_NetworkSearch_IsNrSupported_0300, Reliability | MediumTest | Level3)
{
    for (int i = 0; i < TEST_RUN_TIME_1000; i++) {
        bool nrResult = GetProxy()->IsNrSupported();
        ASSERT_TRUE(nrResult);
    }
}