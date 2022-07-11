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
#include "../ActsDeqpgles30032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031429_1 "dEQP-GLES3.functional.fbo.render.sh"
#define VkglTestCase_031429_2 "ared_colorbuffer_clear.tex2d_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031429, VkglTestCase_031429_1, VkglTestCase_031429_2);

#define VkglTestCase_031430_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031430_2 "hared_colorbuffer_clear.rbo_rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031430, VkglTestCase_031430_1, VkglTestCase_031430_2);

#define VkglTestCase_031431_1 "dEQP-GLES3.functional.fbo.render.sh"
#define VkglTestCase_031431_2 "ared_colorbuffer_clear.tex2d_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031431, VkglTestCase_031431_1, VkglTestCase_031431_2);

#define VkglTestCase_031432_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031432_2 "hared_colorbuffer_clear.rbo_rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031432, VkglTestCase_031432_1, VkglTestCase_031432_2);

#define VkglTestCase_031433_1 "dEQP-GLES3.functional.fbo.render.sh"
#define VkglTestCase_031433_2 "ared_colorbuffer_clear.tex2d_rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031433, VkglTestCase_031433_1, VkglTestCase_031433_2);

#define VkglTestCase_031434_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031434_2 "hared_colorbuffer_clear.rbo_rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031434, VkglTestCase_031434_1, VkglTestCase_031434_2);

#define VkglTestCase_031435_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031435_2 "hared_colorbuffer_clear.tex2d_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031435, VkglTestCase_031435_1, VkglTestCase_031435_2);

#define VkglTestCase_031436_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031436_2 "shared_colorbuffer_clear.rbo_rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031436, VkglTestCase_031436_1, VkglTestCase_031436_2);

#define VkglTestCase_031437_1 "dEQP-GLES3.functional.fbo.render.share"
#define VkglTestCase_031437_2 "d_colorbuffer_clear.tex2d_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031437, VkglTestCase_031437_1, VkglTestCase_031437_2);

#define VkglTestCase_031438_1 "dEQP-GLES3.functional.fbo.render.shar"
#define VkglTestCase_031438_2 "ed_colorbuffer_clear.rbo_srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031438, VkglTestCase_031438_1, VkglTestCase_031438_2);

#define VkglTestCase_031439_1 "dEQP-GLES3.functional.fbo.render.sha"
#define VkglTestCase_031439_2 "red_colorbuffer_clear.tex2d_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031439, VkglTestCase_031439_1, VkglTestCase_031439_2);

#define VkglTestCase_031440_1 "dEQP-GLES3.functional.fbo.render.sh"
#define VkglTestCase_031440_2 "ared_colorbuffer_clear.rbo_rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031440, VkglTestCase_031440_1, VkglTestCase_031440_2);

#define VkglTestCase_031441_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031441_2 "hared_colorbuffer_clear.tex2d_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031441, VkglTestCase_031441_1, VkglTestCase_031441_2);

#define VkglTestCase_031442_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031442_2 "shared_colorbuffer_clear.rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031442, VkglTestCase_031442_1, VkglTestCase_031442_2);

#define VkglTestCase_031443_1 "dEQP-GLES3.functional.fbo.render.sh"
#define VkglTestCase_031443_2 "ared_colorbuffer_clear.tex2d_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031443, VkglTestCase_031443_1, VkglTestCase_031443_2);

#define VkglTestCase_031444_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031444_2 "hared_colorbuffer_clear.rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031444, VkglTestCase_031444_1, VkglTestCase_031444_2);

#define VkglTestCase_031445_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031445_2 "hared_colorbuffer_clear.tex2d_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031445, VkglTestCase_031445_1, VkglTestCase_031445_2);

#define VkglTestCase_031446_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031446_2 "shared_colorbuffer_clear.rbo_rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031446, VkglTestCase_031446_1, VkglTestCase_031446_2);

#define VkglTestCase_031447_1 "dEQP-GLES3.functional.fbo.render.sh"
#define VkglTestCase_031447_2 "ared_colorbuffer_clear.tex2d_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031447, VkglTestCase_031447_1, VkglTestCase_031447_2);

#define VkglTestCase_031448_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031448_2 "hared_colorbuffer_clear.rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031448, VkglTestCase_031448_1, VkglTestCase_031448_2);

#define VkglTestCase_031449_1 "dEQP-GLES3.functional.fbo.render.shared"
#define VkglTestCase_031449_2 "_colorbuffer_clear.tex2d_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031449, VkglTestCase_031449_1, VkglTestCase_031449_2);

#define VkglTestCase_031450_1 "dEQP-GLES3.functional.fbo.render.share"
#define VkglTestCase_031450_2 "d_colorbuffer_clear.rbo_r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031450, VkglTestCase_031450_1, VkglTestCase_031450_2);

#define VkglTestCase_031451_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031451_2 "hared_colorbuffer_clear.tex2d_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031451, VkglTestCase_031451_1, VkglTestCase_031451_2);

#define VkglTestCase_031452_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031452_2 "shared_colorbuffer_clear.rbo_rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031452, VkglTestCase_031452_1, VkglTestCase_031452_2);

#define VkglTestCase_031453_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031453_2 "hared_colorbuffer_clear.tex2d_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031453, VkglTestCase_031453_1, VkglTestCase_031453_2);

#define VkglTestCase_031454_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031454_2 "shared_colorbuffer_clear.rbo_rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031454, VkglTestCase_031454_1, VkglTestCase_031454_2);

#define VkglTestCase_031455_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031455_2 "shared_colorbuffer_clear.tex2d_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031455, VkglTestCase_031455_1, VkglTestCase_031455_2);

#define VkglTestCase_031456_1 "dEQP-GLES3.functional.fbo.render"
#define VkglTestCase_031456_2 ".shared_colorbuffer_clear.rbo_rg8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031456, VkglTestCase_031456_1, VkglTestCase_031456_2);

#define VkglTestCase_031457_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031457_2 "hared_colorbuffer_clear.tex2d_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031457, VkglTestCase_031457_1, VkglTestCase_031457_2);

#define VkglTestCase_031458_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031458_2 "shared_colorbuffer_clear.rbo_r32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031458, VkglTestCase_031458_1, VkglTestCase_031458_2);

#define VkglTestCase_031459_1 "dEQP-GLES3.functional.fbo.render.s"
#define VkglTestCase_031459_2 "hared_colorbuffer_clear.tex2d_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031459, VkglTestCase_031459_1, VkglTestCase_031459_2);

#define VkglTestCase_031460_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031460_2 "shared_colorbuffer_clear.rbo_r16f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031460, VkglTestCase_031460_1, VkglTestCase_031460_2);

#define VkglTestCase_031461_1 "dEQP-GLES3.functional.fbo.render."
#define VkglTestCase_031461_2 "shared_colorbuffer_clear.tex2d_r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031461, VkglTestCase_031461_1, VkglTestCase_031461_2);

#define VkglTestCase_031462_1 "dEQP-GLES3.functional.fbo.render"
#define VkglTestCase_031462_2 ".shared_colorbuffer_clear.rbo_r8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031462, VkglTestCase_031462_1, VkglTestCase_031462_2);
