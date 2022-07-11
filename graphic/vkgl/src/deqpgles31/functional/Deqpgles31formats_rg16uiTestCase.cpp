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

#define VkglTestCase_014429_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014429_2 "_clamp.formats.rg16ui.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014429, VkglTestCase_014429_1, VkglTestCase_014429_2);

#define VkglTestCase_014430_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014430_2 "clamp.formats.rg16ui.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014430, VkglTestCase_014430_1, VkglTestCase_014430_2);

#define VkglTestCase_014431_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014431_2 "_clamp.formats.rg16ui.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014431, VkglTestCase_014431_1, VkglTestCase_014431_2);

#define VkglTestCase_014432_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014432_2 "_clamp.formats.rg16ui.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014432, VkglTestCase_014432_1, VkglTestCase_014432_2);
