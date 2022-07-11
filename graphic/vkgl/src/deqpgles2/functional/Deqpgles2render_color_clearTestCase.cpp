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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012432_1 "dEQP-GLES2.functional.fbo.r"
#define VkglTestCase_012432_2 "ender.color_clear.tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012432, VkglTestCase_012432_1, VkglTestCase_012432_2);

#define VkglTestCase_012433_1 "dEQP-GLES2.functional.fbo.render.c"
#define VkglTestCase_012433_2 "olor_clear.tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012433, VkglTestCase_012433_1, VkglTestCase_012433_2);

#define VkglTestCase_012434_1 "dEQP-GLES2.functional.fbo.render.col"
#define VkglTestCase_012434_2 "or_clear.tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012434, VkglTestCase_012434_1, VkglTestCase_012434_2);

#define VkglTestCase_012435_1 "dEQP-GLES2.functional.fbo.render.color_clea"
#define VkglTestCase_012435_2 "r.tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012435, VkglTestCase_012435_1, VkglTestCase_012435_2);

#define VkglTestCase_012436_1 "dEQP-GLES2.functional.fbo.r"
#define VkglTestCase_012436_2 "ender.color_clear.tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012436, VkglTestCase_012436_1, VkglTestCase_012436_2);

#define VkglTestCase_012437_1 "dEQP-GLES2.functional.fbo.render.co"
#define VkglTestCase_012437_2 "lor_clear.tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012437, VkglTestCase_012437_1, VkglTestCase_012437_2);

#define VkglTestCase_012438_1 "dEQP-GLES2.functional.fbo.render.col"
#define VkglTestCase_012438_2 "or_clear.tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012438, VkglTestCase_012438_1, VkglTestCase_012438_2);

#define VkglTestCase_012439_1 "dEQP-GLES2.functional.fbo.render.color_clear"
#define VkglTestCase_012439_2 ".tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012439, VkglTestCase_012439_1, VkglTestCase_012439_2);

#define VkglTestCase_012440_1 "dEQP-GLES2.functional.fbo.r"
#define VkglTestCase_012440_2 "ender.color_clear.rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012440, VkglTestCase_012440_1, VkglTestCase_012440_2);

#define VkglTestCase_012441_1 "dEQP-GLES2.functional.fbo.render.co"
#define VkglTestCase_012441_2 "lor_clear.rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012441, VkglTestCase_012441_1, VkglTestCase_012441_2);

#define VkglTestCase_012442_1 "dEQP-GLES2.functional.fbo.render.col"
#define VkglTestCase_012442_2 "or_clear.rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012442, VkglTestCase_012442_1, VkglTestCase_012442_2);

#define VkglTestCase_012443_1 "dEQP-GLES2.functional.fbo.render.color_clear"
#define VkglTestCase_012443_2 ".rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012443, VkglTestCase_012443_1, VkglTestCase_012443_2);

#define VkglTestCase_012444_1 "dEQP-GLES2.functional.fbo.re"
#define VkglTestCase_012444_2 "nder.color_clear.rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012444, VkglTestCase_012444_1, VkglTestCase_012444_2);

#define VkglTestCase_012445_1 "dEQP-GLES2.functional.fbo.render.co"
#define VkglTestCase_012445_2 "lor_clear.rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012445, VkglTestCase_012445_1, VkglTestCase_012445_2);

#define VkglTestCase_012446_1 "dEQP-GLES2.functional.fbo.render.colo"
#define VkglTestCase_012446_2 "r_clear.rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012446, VkglTestCase_012446_1, VkglTestCase_012446_2);

#define VkglTestCase_012447_1 "dEQP-GLES2.functional.fbo.render.color_clear"
#define VkglTestCase_012447_2 ".rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012447, VkglTestCase_012447_1, VkglTestCase_012447_2);

#define VkglTestCase_012448_1 "dEQP-GLES2.functional.fbo.r"
#define VkglTestCase_012448_2 "ender.color_clear.rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012448, VkglTestCase_012448_1, VkglTestCase_012448_2);

#define VkglTestCase_012449_1 "dEQP-GLES2.functional.fbo.render.c"
#define VkglTestCase_012449_2 "olor_clear.rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012449, VkglTestCase_012449_1, VkglTestCase_012449_2);

#define VkglTestCase_012450_1 "dEQP-GLES2.functional.fbo.render.col"
#define VkglTestCase_012450_2 "or_clear.rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012450, VkglTestCase_012450_1, VkglTestCase_012450_2);

#define VkglTestCase_012451_1 "dEQP-GLES2.functional.fbo.render.color_clea"
#define VkglTestCase_012451_2 "r.rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012451, VkglTestCase_012451_1, VkglTestCase_012451_2);
