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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004475_1 "dEQP-GLES3.functional.shaders.arrays.com"
#define VkglTestCase_004475_2 "plex_expression.and_short_circuits_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004475, VkglTestCase_004475_1, VkglTestCase_004475_2);

#define VkglTestCase_004476_1 "dEQP-GLES3.functional.shaders.arrays.comp"
#define VkglTestCase_004476_2 "lex_expression.and_short_circuits_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004476, VkglTestCase_004476_1, VkglTestCase_004476_2);

#define VkglTestCase_004477_1 "dEQP-GLES3.functional.shaders.arrays.com"
#define VkglTestCase_004477_2 "plex_expression.or_short_circuits_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004477, VkglTestCase_004477_1, VkglTestCase_004477_2);

#define VkglTestCase_004478_1 "dEQP-GLES3.functional.shaders.arrays.comp"
#define VkglTestCase_004478_2 "lex_expression.or_short_circuits_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004478, VkglTestCase_004478_1, VkglTestCase_004478_2);

#define VkglTestCase_004479_1 "dEQP-GLES3.functional.shaders.arrays.complex_exp"
#define VkglTestCase_004479_2 "ression.ternary_only_evaluates_one_operand_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004479, VkglTestCase_004479_1, VkglTestCase_004479_2);

#define VkglTestCase_004480_1 "dEQP-GLES3.functional.shaders.arrays.complex_expr"
#define VkglTestCase_004480_2 "ession.ternary_only_evaluates_one_operand_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004480, VkglTestCase_004480_1, VkglTestCase_004480_2);

#define VkglTestCase_004481_1 "dEQP-GLES3.functional.shaders.arrays.complex_expression.se"
#define VkglTestCase_004481_2 "quence_side_effects_affecting_compared_array_content_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004481, VkglTestCase_004481_1, VkglTestCase_004481_2);

#define VkglTestCase_004482_1 "dEQP-GLES3.functional.shaders.arrays.complex_expression.seq"
#define VkglTestCase_004482_2 "uence_side_effects_affecting_compared_array_content_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004482, VkglTestCase_004482_1, VkglTestCase_004482_2);
