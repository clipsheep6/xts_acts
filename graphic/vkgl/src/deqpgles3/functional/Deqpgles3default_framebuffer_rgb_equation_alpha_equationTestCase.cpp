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
#include "../ActsDeqpgles30030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029441_1 "dEQP-GLES3.functional.fragment_ops.blend.default"
#define VkglTestCase_029441_2 "_framebuffer.rgb_equation_alpha_equation.add_add"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029441, VkglTestCase_029441_1, VkglTestCase_029441_2);

#define VkglTestCase_029442_1 "dEQP-GLES3.functional.fragment_ops.blend.default_f"
#define VkglTestCase_029442_2 "ramebuffer.rgb_equation_alpha_equation.add_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029442, VkglTestCase_029442_1, VkglTestCase_029442_2);

#define VkglTestCase_029443_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029443_2 "buffer.rgb_equation_alpha_equation.add_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029443, VkglTestCase_029443_1, VkglTestCase_029443_2);

#define VkglTestCase_029444_1 "dEQP-GLES3.functional.fragment_ops.blend.default"
#define VkglTestCase_029444_2 "_framebuffer.rgb_equation_alpha_equation.add_min"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029444, VkglTestCase_029444_1, VkglTestCase_029444_2);

#define VkglTestCase_029445_1 "dEQP-GLES3.functional.fragment_ops.blend.default"
#define VkglTestCase_029445_2 "_framebuffer.rgb_equation_alpha_equation.add_max"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029445, VkglTestCase_029445_1, VkglTestCase_029445_2);

#define VkglTestCase_029446_1 "dEQP-GLES3.functional.fragment_ops.blend.default_f"
#define VkglTestCase_029446_2 "ramebuffer.rgb_equation_alpha_equation.subtract_add"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029446, VkglTestCase_029446_1, VkglTestCase_029446_2);

#define VkglTestCase_029447_1 "dEQP-GLES3.functional.fragment_ops.blend.default_fram"
#define VkglTestCase_029447_2 "ebuffer.rgb_equation_alpha_equation.subtract_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029447, VkglTestCase_029447_1, VkglTestCase_029447_2);

#define VkglTestCase_029448_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029448_2 "fer.rgb_equation_alpha_equation.subtract_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029448, VkglTestCase_029448_1, VkglTestCase_029448_2);

#define VkglTestCase_029449_1 "dEQP-GLES3.functional.fragment_ops.blend.default_f"
#define VkglTestCase_029449_2 "ramebuffer.rgb_equation_alpha_equation.subtract_min"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029449, VkglTestCase_029449_1, VkglTestCase_029449_2);

#define VkglTestCase_029450_1 "dEQP-GLES3.functional.fragment_ops.blend.default_f"
#define VkglTestCase_029450_2 "ramebuffer.rgb_equation_alpha_equation.subtract_max"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029450, VkglTestCase_029450_1, VkglTestCase_029450_2);

#define VkglTestCase_029451_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029451_2 "buffer.rgb_equation_alpha_equation.reverse_subtract_add"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029451, VkglTestCase_029451_1, VkglTestCase_029451_2);

#define VkglTestCase_029452_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuf"
#define VkglTestCase_029452_2 "fer.rgb_equation_alpha_equation.reverse_subtract_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029452, VkglTestCase_029452_1, VkglTestCase_029452_2);

#define VkglTestCase_029453_1 "dEQP-GLES3.functional.fragment_ops.blend.default_framebuffer."
#define VkglTestCase_029453_2 "rgb_equation_alpha_equation.reverse_subtract_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029453, VkglTestCase_029453_1, VkglTestCase_029453_2);

#define VkglTestCase_029454_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029454_2 "buffer.rgb_equation_alpha_equation.reverse_subtract_min"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029454, VkglTestCase_029454_1, VkglTestCase_029454_2);

#define VkglTestCase_029455_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029455_2 "buffer.rgb_equation_alpha_equation.reverse_subtract_max"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029455, VkglTestCase_029455_1, VkglTestCase_029455_2);

#define VkglTestCase_029456_1 "dEQP-GLES3.functional.fragment_ops.blend.default"
#define VkglTestCase_029456_2 "_framebuffer.rgb_equation_alpha_equation.min_add"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029456, VkglTestCase_029456_1, VkglTestCase_029456_2);

#define VkglTestCase_029457_1 "dEQP-GLES3.functional.fragment_ops.blend.default_f"
#define VkglTestCase_029457_2 "ramebuffer.rgb_equation_alpha_equation.min_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029457, VkglTestCase_029457_1, VkglTestCase_029457_2);

#define VkglTestCase_029458_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029458_2 "buffer.rgb_equation_alpha_equation.min_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029458, VkglTestCase_029458_1, VkglTestCase_029458_2);

#define VkglTestCase_029459_1 "dEQP-GLES3.functional.fragment_ops.blend.default"
#define VkglTestCase_029459_2 "_framebuffer.rgb_equation_alpha_equation.min_min"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029459, VkglTestCase_029459_1, VkglTestCase_029459_2);

#define VkglTestCase_029460_1 "dEQP-GLES3.functional.fragment_ops.blend.default"
#define VkglTestCase_029460_2 "_framebuffer.rgb_equation_alpha_equation.min_max"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029460, VkglTestCase_029460_1, VkglTestCase_029460_2);

#define VkglTestCase_029461_1 "dEQP-GLES3.functional.fragment_ops.blend.default"
#define VkglTestCase_029461_2 "_framebuffer.rgb_equation_alpha_equation.max_add"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029461, VkglTestCase_029461_1, VkglTestCase_029461_2);

#define VkglTestCase_029462_1 "dEQP-GLES3.functional.fragment_ops.blend.default_f"
#define VkglTestCase_029462_2 "ramebuffer.rgb_equation_alpha_equation.max_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029462, VkglTestCase_029462_1, VkglTestCase_029462_2);

#define VkglTestCase_029463_1 "dEQP-GLES3.functional.fragment_ops.blend.default_frame"
#define VkglTestCase_029463_2 "buffer.rgb_equation_alpha_equation.max_reverse_subtract"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029463, VkglTestCase_029463_1, VkglTestCase_029463_2);

#define VkglTestCase_029464_1 "dEQP-GLES3.functional.fragment_ops.blend.default"
#define VkglTestCase_029464_2 "_framebuffer.rgb_equation_alpha_equation.max_min"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029464, VkglTestCase_029464_1, VkglTestCase_029464_2);

#define VkglTestCase_029465_1 "dEQP-GLES3.functional.fragment_ops.blend.default"
#define VkglTestCase_029465_2 "_framebuffer.rgb_equation_alpha_equation.max_max"
SHRINK_HWTEST_F(ActsDeqpgles30030TestSuite, TestCase_029465, VkglTestCase_029465_1, VkglTestCase_029465_2);
