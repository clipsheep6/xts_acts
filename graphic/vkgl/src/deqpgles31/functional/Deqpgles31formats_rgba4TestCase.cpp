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

#define VkglTestCase_014295_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014295_2 "_clamp.formats.rgba4.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014295, VkglTestCase_014295_1, VkglTestCase_014295_2);

#define VkglTestCase_014296_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014296_2 "_clamp.formats.rgba4.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014296, VkglTestCase_014296_1, VkglTestCase_014296_2);

#define VkglTestCase_014297_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014297_2 "r_clamp.formats.rgba4.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014297, VkglTestCase_014297_1, VkglTestCase_014297_2);

#define VkglTestCase_014298_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014298_2 "_clamp.formats.rgba4.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014298, VkglTestCase_014298_1, VkglTestCase_014298_2);

#define VkglTestCase_014299_1 "dEQP-GLES31.functional.texture.borde"
#define VkglTestCase_014299_2 "r_clamp.formats.rgba4.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014299, VkglTestCase_014299_1, VkglTestCase_014299_2);

#define VkglTestCase_014300_1 "dEQP-GLES31.functional.texture.border"
#define VkglTestCase_014300_2 "_clamp.formats.rgba4.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014300, VkglTestCase_014300_1, VkglTestCase_014300_2);
