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
#include "../ActsDeqpgles30031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030593_1 "dEQP-GLES3.functional.fragment_ops.blend.f"
#define VkglTestCase_030593_2 "bo_srgb.rgb_equation_alpha_equation.add_add"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030593, VkglTestCase_030593_1, VkglTestCase_030593_2);

#define VkglTestCase_030594_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
#define VkglTestCase_030594_2 "srgb.rgb_equation_alpha_equation.add_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030594, VkglTestCase_030594_1, VkglTestCase_030594_2);

#define VkglTestCase_030595_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030595_2 ".rgb_equation_alpha_equation.add_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030595, VkglTestCase_030595_1, VkglTestCase_030595_2);

#define VkglTestCase_030596_1 "dEQP-GLES3.functional.fragment_ops.blend.f"
#define VkglTestCase_030596_2 "bo_srgb.rgb_equation_alpha_equation.add_min"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030596, VkglTestCase_030596_1, VkglTestCase_030596_2);

#define VkglTestCase_030597_1 "dEQP-GLES3.functional.fragment_ops.blend.f"
#define VkglTestCase_030597_2 "bo_srgb.rgb_equation_alpha_equation.add_max"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030597, VkglTestCase_030597_1, VkglTestCase_030597_2);

#define VkglTestCase_030598_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
#define VkglTestCase_030598_2 "srgb.rgb_equation_alpha_equation.subtract_add"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030598, VkglTestCase_030598_1, VkglTestCase_030598_2);

#define VkglTestCase_030599_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_sr"
#define VkglTestCase_030599_2 "gb.rgb_equation_alpha_equation.subtract_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030599, VkglTestCase_030599_1, VkglTestCase_030599_2);

#define VkglTestCase_030600_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030600_2 "gb_equation_alpha_equation.subtract_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030600, VkglTestCase_030600_1, VkglTestCase_030600_2);

#define VkglTestCase_030601_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
#define VkglTestCase_030601_2 "srgb.rgb_equation_alpha_equation.subtract_min"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030601, VkglTestCase_030601_1, VkglTestCase_030601_2);

#define VkglTestCase_030602_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
#define VkglTestCase_030602_2 "srgb.rgb_equation_alpha_equation.subtract_max"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030602, VkglTestCase_030602_1, VkglTestCase_030602_2);

#define VkglTestCase_030603_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030603_2 ".rgb_equation_alpha_equation.reverse_subtract_add"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030603, VkglTestCase_030603_1, VkglTestCase_030603_2);

#define VkglTestCase_030604_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.r"
#define VkglTestCase_030604_2 "gb_equation_alpha_equation.reverse_subtract_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030604, VkglTestCase_030604_1, VkglTestCase_030604_2);

#define VkglTestCase_030605_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb.rgb_e"
#define VkglTestCase_030605_2 "quation_alpha_equation.reverse_subtract_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030605, VkglTestCase_030605_1, VkglTestCase_030605_2);

#define VkglTestCase_030606_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030606_2 ".rgb_equation_alpha_equation.reverse_subtract_min"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030606, VkglTestCase_030606_1, VkglTestCase_030606_2);

#define VkglTestCase_030607_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030607_2 ".rgb_equation_alpha_equation.reverse_subtract_max"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030607, VkglTestCase_030607_1, VkglTestCase_030607_2);

#define VkglTestCase_030608_1 "dEQP-GLES3.functional.fragment_ops.blend.f"
#define VkglTestCase_030608_2 "bo_srgb.rgb_equation_alpha_equation.min_add"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030608, VkglTestCase_030608_1, VkglTestCase_030608_2);

#define VkglTestCase_030609_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
#define VkglTestCase_030609_2 "srgb.rgb_equation_alpha_equation.min_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030609, VkglTestCase_030609_1, VkglTestCase_030609_2);

#define VkglTestCase_030610_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030610_2 ".rgb_equation_alpha_equation.min_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030610, VkglTestCase_030610_1, VkglTestCase_030610_2);

#define VkglTestCase_030611_1 "dEQP-GLES3.functional.fragment_ops.blend.f"
#define VkglTestCase_030611_2 "bo_srgb.rgb_equation_alpha_equation.min_min"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030611, VkglTestCase_030611_1, VkglTestCase_030611_2);

#define VkglTestCase_030612_1 "dEQP-GLES3.functional.fragment_ops.blend.f"
#define VkglTestCase_030612_2 "bo_srgb.rgb_equation_alpha_equation.min_max"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030612, VkglTestCase_030612_1, VkglTestCase_030612_2);

#define VkglTestCase_030613_1 "dEQP-GLES3.functional.fragment_ops.blend.f"
#define VkglTestCase_030613_2 "bo_srgb.rgb_equation_alpha_equation.max_add"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030613, VkglTestCase_030613_1, VkglTestCase_030613_2);

#define VkglTestCase_030614_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_"
#define VkglTestCase_030614_2 "srgb.rgb_equation_alpha_equation.max_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030614, VkglTestCase_030614_1, VkglTestCase_030614_2);

#define VkglTestCase_030615_1 "dEQP-GLES3.functional.fragment_ops.blend.fbo_srgb"
#define VkglTestCase_030615_2 ".rgb_equation_alpha_equation.max_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030615, VkglTestCase_030615_1, VkglTestCase_030615_2);

#define VkglTestCase_030616_1 "dEQP-GLES3.functional.fragment_ops.blend.f"
#define VkglTestCase_030616_2 "bo_srgb.rgb_equation_alpha_equation.max_min"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030616, VkglTestCase_030616_1, VkglTestCase_030616_2);

#define VkglTestCase_030617_1 "dEQP-GLES3.functional.fragment_ops.blend.f"
#define VkglTestCase_030617_2 "bo_srgb.rgb_equation_alpha_equation.max_max"
SHRINK_HWTEST_F(ActsDeqpgles30031TestSuite, TestCase_030617, VkglTestCase_030617_1, VkglTestCase_030617_2);
