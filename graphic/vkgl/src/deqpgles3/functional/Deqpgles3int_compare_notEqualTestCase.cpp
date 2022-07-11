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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013588_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013588_2 ".int_compare.notEqual.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013588, VkglTestCase_013588_1, VkglTestCase_013588_2);

#define VkglTestCase_013589_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013589_2 "int_compare.notEqual.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013589, VkglTestCase_013589_1, VkglTestCase_013589_2);

#define VkglTestCase_013590_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013590_2 "nt_compare.notEqual.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013590, VkglTestCase_013590_1, VkglTestCase_013590_2);

#define VkglTestCase_013591_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013591_2 "t_compare.notEqual.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013591, VkglTestCase_013591_1, VkglTestCase_013591_2);

#define VkglTestCase_013592_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013592_2 "int_compare.notEqual.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013592, VkglTestCase_013592_1, VkglTestCase_013592_2);

#define VkglTestCase_013593_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013593_2 "nt_compare.notEqual.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013593, VkglTestCase_013593_1, VkglTestCase_013593_2);

#define VkglTestCase_013594_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013594_2 ".int_compare.notEqual.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013594, VkglTestCase_013594_1, VkglTestCase_013594_2);

#define VkglTestCase_013595_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013595_2 "int_compare.notEqual.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013595, VkglTestCase_013595_1, VkglTestCase_013595_2);

#define VkglTestCase_013596_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013596_2 "nt_compare.notEqual.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013596, VkglTestCase_013596_1, VkglTestCase_013596_2);

#define VkglTestCase_013597_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013597_2 "t_compare.notEqual.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013597, VkglTestCase_013597_1, VkglTestCase_013597_2);

#define VkglTestCase_013598_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013598_2 "int_compare.notEqual.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013598, VkglTestCase_013598_1, VkglTestCase_013598_2);

#define VkglTestCase_013599_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013599_2 "nt_compare.notEqual.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013599, VkglTestCase_013599_1, VkglTestCase_013599_2);

#define VkglTestCase_013600_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013600_2 ".int_compare.notEqual.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013600, VkglTestCase_013600_1, VkglTestCase_013600_2);

#define VkglTestCase_013601_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013601_2 "int_compare.notEqual.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013601, VkglTestCase_013601_1, VkglTestCase_013601_2);

#define VkglTestCase_013602_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013602_2 "nt_compare.notEqual.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013602, VkglTestCase_013602_1, VkglTestCase_013602_2);

#define VkglTestCase_013603_1 "dEQP-GLES3.functional.shaders.operator.in"
#define VkglTestCase_013603_2 "t_compare.notEqual.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013603, VkglTestCase_013603_1, VkglTestCase_013603_2);

#define VkglTestCase_013604_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013604_2 "int_compare.notEqual.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013604, VkglTestCase_013604_1, VkglTestCase_013604_2);

#define VkglTestCase_013605_1 "dEQP-GLES3.functional.shaders.operator.i"
#define VkglTestCase_013605_2 "nt_compare.notEqual.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013605, VkglTestCase_013605_1, VkglTestCase_013605_2);
