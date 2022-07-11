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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019718_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019718_2 "ns.builtin_functions.exponential.pow_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019718, VkglTestCase_019718_1, VkglTestCase_019718_2);

#define VkglTestCase_019719_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019719_2 "s.builtin_functions.exponential.pow_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019719, VkglTestCase_019719_1, VkglTestCase_019719_2);

#define VkglTestCase_019720_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019720_2 "ns.builtin_functions.exponential.pow_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019720, VkglTestCase_019720_1, VkglTestCase_019720_2);

#define VkglTestCase_019721_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019721_2 "s.builtin_functions.exponential.pow_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019721, VkglTestCase_019721_1, VkglTestCase_019721_2);

#define VkglTestCase_019722_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019722_2 "ns.builtin_functions.exponential.pow_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019722, VkglTestCase_019722_1, VkglTestCase_019722_2);

#define VkglTestCase_019723_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019723_2 "s.builtin_functions.exponential.pow_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019723, VkglTestCase_019723_1, VkglTestCase_019723_2);

#define VkglTestCase_019724_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019724_2 "ns.builtin_functions.exponential.pow_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019724, VkglTestCase_019724_1, VkglTestCase_019724_2);

#define VkglTestCase_019725_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019725_2 "s.builtin_functions.exponential.pow_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019725, VkglTestCase_019725_1, VkglTestCase_019725_2);

#define VkglTestCase_019726_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019726_2 "ns.builtin_functions.exponential.exp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019726, VkglTestCase_019726_1, VkglTestCase_019726_2);

#define VkglTestCase_019727_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019727_2 "s.builtin_functions.exponential.exp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019727, VkglTestCase_019727_1, VkglTestCase_019727_2);

#define VkglTestCase_019728_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019728_2 "ns.builtin_functions.exponential.exp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019728, VkglTestCase_019728_1, VkglTestCase_019728_2);

#define VkglTestCase_019729_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019729_2 "s.builtin_functions.exponential.exp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019729, VkglTestCase_019729_1, VkglTestCase_019729_2);

#define VkglTestCase_019730_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019730_2 "ns.builtin_functions.exponential.exp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019730, VkglTestCase_019730_1, VkglTestCase_019730_2);

#define VkglTestCase_019731_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019731_2 "s.builtin_functions.exponential.exp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019731, VkglTestCase_019731_1, VkglTestCase_019731_2);

#define VkglTestCase_019732_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019732_2 "ns.builtin_functions.exponential.exp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019732, VkglTestCase_019732_1, VkglTestCase_019732_2);

#define VkglTestCase_019733_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019733_2 "s.builtin_functions.exponential.exp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019733, VkglTestCase_019733_1, VkglTestCase_019733_2);

#define VkglTestCase_019734_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019734_2 "ns.builtin_functions.exponential.log_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019734, VkglTestCase_019734_1, VkglTestCase_019734_2);

#define VkglTestCase_019735_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019735_2 "s.builtin_functions.exponential.log_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019735, VkglTestCase_019735_1, VkglTestCase_019735_2);

#define VkglTestCase_019736_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019736_2 "ns.builtin_functions.exponential.log_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019736, VkglTestCase_019736_1, VkglTestCase_019736_2);

#define VkglTestCase_019737_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019737_2 "s.builtin_functions.exponential.log_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019737, VkglTestCase_019737_1, VkglTestCase_019737_2);

#define VkglTestCase_019738_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019738_2 "ns.builtin_functions.exponential.log_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019738, VkglTestCase_019738_1, VkglTestCase_019738_2);

#define VkglTestCase_019739_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019739_2 "s.builtin_functions.exponential.log_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019739, VkglTestCase_019739_1, VkglTestCase_019739_2);

#define VkglTestCase_019740_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019740_2 "ns.builtin_functions.exponential.log_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019740, VkglTestCase_019740_1, VkglTestCase_019740_2);

#define VkglTestCase_019741_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019741_2 "s.builtin_functions.exponential.log_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019741, VkglTestCase_019741_1, VkglTestCase_019741_2);

#define VkglTestCase_019742_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019742_2 "s.builtin_functions.exponential.exp2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019742, VkglTestCase_019742_1, VkglTestCase_019742_2);

#define VkglTestCase_019743_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019743_2 ".builtin_functions.exponential.exp2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019743, VkglTestCase_019743_1, VkglTestCase_019743_2);

#define VkglTestCase_019744_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019744_2 "ns.builtin_functions.exponential.exp2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019744, VkglTestCase_019744_1, VkglTestCase_019744_2);

#define VkglTestCase_019745_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019745_2 "s.builtin_functions.exponential.exp2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019745, VkglTestCase_019745_1, VkglTestCase_019745_2);

#define VkglTestCase_019746_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019746_2 "ns.builtin_functions.exponential.exp2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019746, VkglTestCase_019746_1, VkglTestCase_019746_2);

#define VkglTestCase_019747_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019747_2 "s.builtin_functions.exponential.exp2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019747, VkglTestCase_019747_1, VkglTestCase_019747_2);

#define VkglTestCase_019748_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019748_2 "ns.builtin_functions.exponential.exp2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019748, VkglTestCase_019748_1, VkglTestCase_019748_2);

#define VkglTestCase_019749_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019749_2 "s.builtin_functions.exponential.exp2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019749, VkglTestCase_019749_1, VkglTestCase_019749_2);

#define VkglTestCase_019750_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019750_2 "s.builtin_functions.exponential.log2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019750, VkglTestCase_019750_1, VkglTestCase_019750_2);

#define VkglTestCase_019751_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019751_2 ".builtin_functions.exponential.log2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019751, VkglTestCase_019751_1, VkglTestCase_019751_2);

#define VkglTestCase_019752_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019752_2 "ns.builtin_functions.exponential.log2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019752, VkglTestCase_019752_1, VkglTestCase_019752_2);

#define VkglTestCase_019753_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019753_2 "s.builtin_functions.exponential.log2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019753, VkglTestCase_019753_1, VkglTestCase_019753_2);

#define VkglTestCase_019754_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019754_2 "ns.builtin_functions.exponential.log2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019754, VkglTestCase_019754_1, VkglTestCase_019754_2);

#define VkglTestCase_019755_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019755_2 "s.builtin_functions.exponential.log2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019755, VkglTestCase_019755_1, VkglTestCase_019755_2);

#define VkglTestCase_019756_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019756_2 "ns.builtin_functions.exponential.log2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019756, VkglTestCase_019756_1, VkglTestCase_019756_2);

#define VkglTestCase_019757_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019757_2 "s.builtin_functions.exponential.log2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019757, VkglTestCase_019757_1, VkglTestCase_019757_2);

#define VkglTestCase_019758_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019758_2 "s.builtin_functions.exponential.sqrt_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019758, VkglTestCase_019758_1, VkglTestCase_019758_2);

#define VkglTestCase_019759_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019759_2 ".builtin_functions.exponential.sqrt_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019759, VkglTestCase_019759_1, VkglTestCase_019759_2);

#define VkglTestCase_019760_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019760_2 "ns.builtin_functions.exponential.sqrt_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019760, VkglTestCase_019760_1, VkglTestCase_019760_2);

#define VkglTestCase_019761_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019761_2 "s.builtin_functions.exponential.sqrt_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019761, VkglTestCase_019761_1, VkglTestCase_019761_2);

#define VkglTestCase_019762_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019762_2 "ns.builtin_functions.exponential.sqrt_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019762, VkglTestCase_019762_1, VkglTestCase_019762_2);

#define VkglTestCase_019763_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019763_2 "s.builtin_functions.exponential.sqrt_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019763, VkglTestCase_019763_1, VkglTestCase_019763_2);

#define VkglTestCase_019764_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019764_2 "ns.builtin_functions.exponential.sqrt_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019764, VkglTestCase_019764_1, VkglTestCase_019764_2);

#define VkglTestCase_019765_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019765_2 "s.builtin_functions.exponential.sqrt_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019765, VkglTestCase_019765_1, VkglTestCase_019765_2);

#define VkglTestCase_019766_1 "dEQP-GLES3.functional.shaders.constant_expressions.b"
#define VkglTestCase_019766_2 "uiltin_functions.exponential.inversesqrt_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019766, VkglTestCase_019766_1, VkglTestCase_019766_2);

#define VkglTestCase_019767_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019767_2 "iltin_functions.exponential.inversesqrt_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019767, VkglTestCase_019767_1, VkglTestCase_019767_2);

#define VkglTestCase_019768_1 "dEQP-GLES3.functional.shaders.constant_expressions.b"
#define VkglTestCase_019768_2 "uiltin_functions.exponential.inversesqrt_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019768, VkglTestCase_019768_1, VkglTestCase_019768_2);

#define VkglTestCase_019769_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019769_2 "iltin_functions.exponential.inversesqrt_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019769, VkglTestCase_019769_1, VkglTestCase_019769_2);

#define VkglTestCase_019770_1 "dEQP-GLES3.functional.shaders.constant_expressions.b"
#define VkglTestCase_019770_2 "uiltin_functions.exponential.inversesqrt_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019770, VkglTestCase_019770_1, VkglTestCase_019770_2);

#define VkglTestCase_019771_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019771_2 "iltin_functions.exponential.inversesqrt_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019771, VkglTestCase_019771_1, VkglTestCase_019771_2);

#define VkglTestCase_019772_1 "dEQP-GLES3.functional.shaders.constant_expressions.b"
#define VkglTestCase_019772_2 "uiltin_functions.exponential.inversesqrt_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019772, VkglTestCase_019772_1, VkglTestCase_019772_2);

#define VkglTestCase_019773_1 "dEQP-GLES3.functional.shaders.constant_expressions.bu"
#define VkglTestCase_019773_2 "iltin_functions.exponential.inversesqrt_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019773, VkglTestCase_019773_1, VkglTestCase_019773_2);
