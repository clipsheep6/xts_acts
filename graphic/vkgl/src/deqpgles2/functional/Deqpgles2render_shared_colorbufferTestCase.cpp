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

#define VkglTestCase_012525_1 "dEQP-GLES2.functional.fbo.rend"
#define VkglTestCase_012525_2 "er.shared_colorbuffer.tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012525, VkglTestCase_012525_1, VkglTestCase_012525_2);

#define VkglTestCase_012526_1 "dEQP-GLES2.functional.fbo.render.share"
#define VkglTestCase_012526_2 "d_colorbuffer.tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012526, VkglTestCase_012526_1, VkglTestCase_012526_2);

#define VkglTestCase_012527_1 "dEQP-GLES2.functional.fbo.render.shared"
#define VkglTestCase_012527_2 "_colorbuffer.tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012527, VkglTestCase_012527_1, VkglTestCase_012527_2);

#define VkglTestCase_012528_1 "dEQP-GLES2.functional.fbo.render.shared_colorbu"
#define VkglTestCase_012528_2 "ffer.tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012528, VkglTestCase_012528_1, VkglTestCase_012528_2);

#define VkglTestCase_012529_1 "dEQP-GLES2.functional.fbo.rende"
#define VkglTestCase_012529_2 "r.shared_colorbuffer.tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012529, VkglTestCase_012529_1, VkglTestCase_012529_2);

#define VkglTestCase_012530_1 "dEQP-GLES2.functional.fbo.render.share"
#define VkglTestCase_012530_2 "d_colorbuffer.tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012530, VkglTestCase_012530_1, VkglTestCase_012530_2);

#define VkglTestCase_012531_1 "dEQP-GLES2.functional.fbo.render.shared_"
#define VkglTestCase_012531_2 "colorbuffer.tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012531, VkglTestCase_012531_1, VkglTestCase_012531_2);

#define VkglTestCase_012532_1 "dEQP-GLES2.functional.fbo.render.shared_colorbu"
#define VkglTestCase_012532_2 "ffer.tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012532, VkglTestCase_012532_1, VkglTestCase_012532_2);

#define VkglTestCase_012533_1 "dEQP-GLES2.functional.fbo.rende"
#define VkglTestCase_012533_2 "r.shared_colorbuffer.rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012533, VkglTestCase_012533_1, VkglTestCase_012533_2);

#define VkglTestCase_012534_1 "dEQP-GLES2.functional.fbo.render.share"
#define VkglTestCase_012534_2 "d_colorbuffer.rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012534, VkglTestCase_012534_1, VkglTestCase_012534_2);

#define VkglTestCase_012535_1 "dEQP-GLES2.functional.fbo.render.shared_"
#define VkglTestCase_012535_2 "colorbuffer.rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012535, VkglTestCase_012535_1, VkglTestCase_012535_2);

#define VkglTestCase_012536_1 "dEQP-GLES2.functional.fbo.render.shared_colorbu"
#define VkglTestCase_012536_2 "ffer.rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012536, VkglTestCase_012536_1, VkglTestCase_012536_2);

#define VkglTestCase_012537_1 "dEQP-GLES2.functional.fbo.rende"
#define VkglTestCase_012537_2 "r.shared_colorbuffer.rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012537, VkglTestCase_012537_1, VkglTestCase_012537_2);

#define VkglTestCase_012538_1 "dEQP-GLES2.functional.fbo.render.shared"
#define VkglTestCase_012538_2 "_colorbuffer.rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012538, VkglTestCase_012538_1, VkglTestCase_012538_2);

#define VkglTestCase_012539_1 "dEQP-GLES2.functional.fbo.render.shared_"
#define VkglTestCase_012539_2 "colorbuffer.rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012539, VkglTestCase_012539_1, VkglTestCase_012539_2);

#define VkglTestCase_012540_1 "dEQP-GLES2.functional.fbo.render.shared_colorbuf"
#define VkglTestCase_012540_2 "fer.rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012540, VkglTestCase_012540_1, VkglTestCase_012540_2);

#define VkglTestCase_012541_1 "dEQP-GLES2.functional.fbo.rend"
#define VkglTestCase_012541_2 "er.shared_colorbuffer.rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012541, VkglTestCase_012541_1, VkglTestCase_012541_2);

#define VkglTestCase_012542_1 "dEQP-GLES2.functional.fbo.render.share"
#define VkglTestCase_012542_2 "d_colorbuffer.rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012542, VkglTestCase_012542_1, VkglTestCase_012542_2);

#define VkglTestCase_012543_1 "dEQP-GLES2.functional.fbo.render.shared"
#define VkglTestCase_012543_2 "_colorbuffer.rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012543, VkglTestCase_012543_1, VkglTestCase_012543_2);

#define VkglTestCase_012544_1 "dEQP-GLES2.functional.fbo.render.shared_colorbu"
#define VkglTestCase_012544_2 "ffer.rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012544, VkglTestCase_012544_1, VkglTestCase_012544_2);
