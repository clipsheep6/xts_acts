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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014301_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014301_2 "clamp.formats.rgb5_a1.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014301, VkglTestCase_014301_1, VkglTestCase_014301_2);

#define VkglTestCase_014302_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014302_2 "clamp.formats.rgb5_a1.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014302, VkglTestCase_014302_1, VkglTestCase_014302_2);

#define VkglTestCase_014303_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014303_2 "_clamp.formats.rgb5_a1.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014303, VkglTestCase_014303_1, VkglTestCase_014303_2);

#define VkglTestCase_014304_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014304_2 "clamp.formats.rgb5_a1.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014304, VkglTestCase_014304_1, VkglTestCase_014304_2);

#define VkglTestCase_014305_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014305_2 "_clamp.formats.rgb5_a1.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014305, VkglTestCase_014305_1, VkglTestCase_014305_2);

#define VkglTestCase_014306_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014306_2 "clamp.formats.rgb5_a1.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014306, VkglTestCase_014306_1, VkglTestCase_014306_2);
