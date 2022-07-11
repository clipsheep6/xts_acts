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

#define VkglTestCase_014381_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014381_2 "mp.formats.r11f_g11f_b10f.nearest_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014381, VkglTestCase_014381_1, VkglTestCase_014381_2);

#define VkglTestCase_014382_1 "dEQP-GLES31.functional.texture.border_clam"
#define VkglTestCase_014382_2 "p.formats.r11f_g11f_b10f.nearest_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014382, VkglTestCase_014382_1, VkglTestCase_014382_2);

#define VkglTestCase_014383_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014383_2 "mp.formats.r11f_g11f_b10f.linear_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014383, VkglTestCase_014383_1, VkglTestCase_014383_2);

#define VkglTestCase_014384_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014384_2 "mp.formats.r11f_g11f_b10f.linear_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014384, VkglTestCase_014384_1, VkglTestCase_014384_2);

#define VkglTestCase_014385_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014385_2 "mp.formats.r11f_g11f_b10f.gather_size_pot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014385, VkglTestCase_014385_1, VkglTestCase_014385_2);

#define VkglTestCase_014386_1 "dEQP-GLES31.functional.texture.border_cla"
#define VkglTestCase_014386_2 "mp.formats.r11f_g11f_b10f.gather_size_npot"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014386, VkglTestCase_014386_1, VkglTestCase_014386_2);
