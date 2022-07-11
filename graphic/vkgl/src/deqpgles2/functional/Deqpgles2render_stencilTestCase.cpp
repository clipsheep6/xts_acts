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

#define VkglTestCase_012500_1 "dEQP-GLES2.functional.fbo.render"
#define VkglTestCase_012500_2 ".stencil.tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012500, VkglTestCase_012500_1, VkglTestCase_012500_2);

#define VkglTestCase_012501_1 "dEQP-GLES2.functional.fbo.render.stencil."
#define VkglTestCase_012501_2 "tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012501, VkglTestCase_012501_1, VkglTestCase_012501_2);

#define VkglTestCase_012502_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012502_2 "stencil.tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012502, VkglTestCase_012502_1, VkglTestCase_012502_2);

#define VkglTestCase_012503_1 "dEQP-GLES2.functional.fbo.render.stencil.t"
#define VkglTestCase_012503_2 "ex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012503, VkglTestCase_012503_1, VkglTestCase_012503_2);

#define VkglTestCase_012504_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012504_2 "stencil.rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012504, VkglTestCase_012504_1, VkglTestCase_012504_2);

#define VkglTestCase_012505_1 "dEQP-GLES2.functional.fbo.render.stencil.r"
#define VkglTestCase_012505_2 "bo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012505, VkglTestCase_012505_1, VkglTestCase_012505_2);

#define VkglTestCase_012506_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012506_2 "stencil.rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012506, VkglTestCase_012506_1, VkglTestCase_012506_2);

#define VkglTestCase_012507_1 "dEQP-GLES2.functional.fbo.render.stencil.r"
#define VkglTestCase_012507_2 "bo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012507, VkglTestCase_012507_1, VkglTestCase_012507_2);

#define VkglTestCase_012508_1 "dEQP-GLES2.functional.fbo.render"
#define VkglTestCase_012508_2 ".stencil.rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012508, VkglTestCase_012508_1, VkglTestCase_012508_2);

#define VkglTestCase_012509_1 "dEQP-GLES2.functional.fbo.render.stencil."
#define VkglTestCase_012509_2 "rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012509, VkglTestCase_012509_1, VkglTestCase_012509_2);

#define VkglTestCase_012510_1 "dEQP-GLES2.functional.fbo.render.st"
#define VkglTestCase_012510_2 "encil.npot_tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012510, VkglTestCase_012510_1, VkglTestCase_012510_2);

#define VkglTestCase_012511_1 "dEQP-GLES2.functional.fbo.render.stencil.npo"
#define VkglTestCase_012511_2 "t_tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012511, VkglTestCase_012511_1, VkglTestCase_012511_2);

#define VkglTestCase_012512_1 "dEQP-GLES2.functional.fbo.render.st"
#define VkglTestCase_012512_2 "encil.npot_tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012512, VkglTestCase_012512_1, VkglTestCase_012512_2);

#define VkglTestCase_012513_1 "dEQP-GLES2.functional.fbo.render.stencil.npo"
#define VkglTestCase_012513_2 "t_tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012513, VkglTestCase_012513_1, VkglTestCase_012513_2);

#define VkglTestCase_012514_1 "dEQP-GLES2.functional.fbo.render.st"
#define VkglTestCase_012514_2 "encil.npot_rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012514, VkglTestCase_012514_1, VkglTestCase_012514_2);

#define VkglTestCase_012515_1 "dEQP-GLES2.functional.fbo.render.stencil.npo"
#define VkglTestCase_012515_2 "t_rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012515, VkglTestCase_012515_1, VkglTestCase_012515_2);

#define VkglTestCase_012516_1 "dEQP-GLES2.functional.fbo.render.ste"
#define VkglTestCase_012516_2 "ncil.npot_rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012516, VkglTestCase_012516_1, VkglTestCase_012516_2);

#define VkglTestCase_012517_1 "dEQP-GLES2.functional.fbo.render.stencil.npot"
#define VkglTestCase_012517_2 "_rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012517, VkglTestCase_012517_1, VkglTestCase_012517_2);

#define VkglTestCase_012518_1 "dEQP-GLES2.functional.fbo.render.st"
#define VkglTestCase_012518_2 "encil.npot_rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012518, VkglTestCase_012518_1, VkglTestCase_012518_2);

#define VkglTestCase_012519_1 "dEQP-GLES2.functional.fbo.render.stencil.npo"
#define VkglTestCase_012519_2 "t_rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012519, VkglTestCase_012519_1, VkglTestCase_012519_2);
