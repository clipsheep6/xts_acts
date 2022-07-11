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

#define VkglTestCase_014359_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014359_2 "clamp.formats.rgba16f.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014359, VkglTestCase_014359_1, VkglTestCase_014359_2);

#define VkglTestCase_014360_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014360_2 "clamp.formats.rgba16f.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014360, VkglTestCase_014360_1, VkglTestCase_014360_2);

#define VkglTestCase_014361_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014361_2 "_clamp.formats.rgba16f.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014361, VkglTestCase_014361_1, VkglTestCase_014361_2);

#define VkglTestCase_014362_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014362_2 "clamp.formats.rgba16f.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014362, VkglTestCase_014362_1, VkglTestCase_014362_2);

#define VkglTestCase_014363_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014363_2 "_clamp.formats.rgba16f.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014363, VkglTestCase_014363_1, VkglTestCase_014363_2);

#define VkglTestCase_014364_1 "dEQP-GLES31.functional.texture.border_"
#define VkglTestCase_014364_2 "clamp.formats.rgba16f.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014364, VkglTestCase_014364_1, VkglTestCase_014364_2);
