/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014125_1 "dEQP-GLES2.functional.uniform_api"
#define VkglTestCase_014125_2 ".info_query.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014125, VkglTestCase_014125_1, VkglTestCase_014125_2);

#define VkglTestCase_014126_1 "dEQP-GLES2.functional.uniform_api."
#define VkglTestCase_014126_2 "info_query.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014126, VkglTestCase_014126_1, VkglTestCase_014126_2);

#define VkglTestCase_014127_1 "dEQP-GLES2.functional.uniform_ap"
#define VkglTestCase_014127_2 "i.info_query.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014127, VkglTestCase_014127_1, VkglTestCase_014127_2);
