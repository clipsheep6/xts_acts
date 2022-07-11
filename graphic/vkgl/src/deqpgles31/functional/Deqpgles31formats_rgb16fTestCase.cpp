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

#define VkglTestCase_014353_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014353_2 "_clamp.formats.rgb16f.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014353, VkglTestCase_014353_1, VkglTestCase_014353_2);

#define VkglTestCase_014354_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014354_2 "clamp.formats.rgb16f.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014354, VkglTestCase_014354_1, VkglTestCase_014354_2);

#define VkglTestCase_014355_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014355_2 "_clamp.formats.rgb16f.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014355, VkglTestCase_014355_1, VkglTestCase_014355_2);

#define VkglTestCase_014356_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014356_2 "_clamp.formats.rgb16f.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014356, VkglTestCase_014356_1, VkglTestCase_014356_2);

#define VkglTestCase_014357_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014357_2 "_clamp.formats.rgb16f.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014357, VkglTestCase_014357_1, VkglTestCase_014357_2);

#define VkglTestCase_014358_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014358_2 "_clamp.formats.rgb16f.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014358, VkglTestCase_014358_1, VkglTestCase_014358_2);
