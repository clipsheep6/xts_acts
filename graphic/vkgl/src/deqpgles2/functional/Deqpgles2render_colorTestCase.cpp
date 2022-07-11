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

#define VkglTestCase_012462_1 "dEQP-GLES2.functional.fbo."
#define VkglTestCase_012462_2 "render.color.mix_tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012462, VkglTestCase_012462_1, VkglTestCase_012462_2);

#define VkglTestCase_012463_1 "dEQP-GLES2.functional.fbo.render.co"
#define VkglTestCase_012463_2 "lor.mix_tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012463, VkglTestCase_012463_1, VkglTestCase_012463_2);

#define VkglTestCase_012464_1 "dEQP-GLES2.functional.fbo."
#define VkglTestCase_012464_2 "render.color.mix_tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012464, VkglTestCase_012464_1, VkglTestCase_012464_2);

#define VkglTestCase_012465_1 "dEQP-GLES2.functional.fbo.render.co"
#define VkglTestCase_012465_2 "lor.mix_tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012465, VkglTestCase_012465_1, VkglTestCase_012465_2);

#define VkglTestCase_012466_1 "dEQP-GLES2.functional.fbo.re"
#define VkglTestCase_012466_2 "nder.color.mix_npot_tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012466, VkglTestCase_012466_1, VkglTestCase_012466_2);

#define VkglTestCase_012467_1 "dEQP-GLES2.functional.fbo.render.colo"
#define VkglTestCase_012467_2 "r.mix_npot_tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012467, VkglTestCase_012467_1, VkglTestCase_012467_2);

#define VkglTestCase_012468_1 "dEQP-GLES2.functional.fbo.ren"
#define VkglTestCase_012468_2 "der.color.mix_npot_tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012468, VkglTestCase_012468_1, VkglTestCase_012468_2);

#define VkglTestCase_012469_1 "dEQP-GLES2.functional.fbo.render.color"
#define VkglTestCase_012469_2 ".mix_npot_tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012469, VkglTestCase_012469_1, VkglTestCase_012469_2);

#define VkglTestCase_012470_1 "dEQP-GLES2.functional.fbo.r"
#define VkglTestCase_012470_2 "ender.color.blend_tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012470, VkglTestCase_012470_1, VkglTestCase_012470_2);

#define VkglTestCase_012471_1 "dEQP-GLES2.functional.fbo.render.col"
#define VkglTestCase_012471_2 "or.blend_tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012471, VkglTestCase_012471_1, VkglTestCase_012471_2);

#define VkglTestCase_012472_1 "dEQP-GLES2.functional.fbo.r"
#define VkglTestCase_012472_2 "ender.color.blend_tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012472, VkglTestCase_012472_1, VkglTestCase_012472_2);

#define VkglTestCase_012473_1 "dEQP-GLES2.functional.fbo.render.col"
#define VkglTestCase_012473_2 "or.blend_tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012473, VkglTestCase_012473_1, VkglTestCase_012473_2);

#define VkglTestCase_012474_1 "dEQP-GLES2.functional.fbo.r"
#define VkglTestCase_012474_2 "ender.color.blend_rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012474, VkglTestCase_012474_1, VkglTestCase_012474_2);

#define VkglTestCase_012475_1 "dEQP-GLES2.functional.fbo.render.col"
#define VkglTestCase_012475_2 "or.blend_rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012475, VkglTestCase_012475_1, VkglTestCase_012475_2);

#define VkglTestCase_012476_1 "dEQP-GLES2.functional.fbo.re"
#define VkglTestCase_012476_2 "nder.color.blend_rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012476, VkglTestCase_012476_1, VkglTestCase_012476_2);

#define VkglTestCase_012477_1 "dEQP-GLES2.functional.fbo.render.colo"
#define VkglTestCase_012477_2 "r.blend_rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012477, VkglTestCase_012477_1, VkglTestCase_012477_2);

#define VkglTestCase_012478_1 "dEQP-GLES2.functional.fbo.r"
#define VkglTestCase_012478_2 "ender.color.blend_rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012478, VkglTestCase_012478_1, VkglTestCase_012478_2);

#define VkglTestCase_012479_1 "dEQP-GLES2.functional.fbo.render.col"
#define VkglTestCase_012479_2 "or.blend_rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012479, VkglTestCase_012479_1, VkglTestCase_012479_2);

#define VkglTestCase_012480_1 "dEQP-GLES2.functional.fbo.ren"
#define VkglTestCase_012480_2 "der.color.blend_npot_tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012480, VkglTestCase_012480_1, VkglTestCase_012480_2);

#define VkglTestCase_012481_1 "dEQP-GLES2.functional.fbo.render.color"
#define VkglTestCase_012481_2 ".blend_npot_tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012481, VkglTestCase_012481_1, VkglTestCase_012481_2);

#define VkglTestCase_012482_1 "dEQP-GLES2.functional.fbo.rend"
#define VkglTestCase_012482_2 "er.color.blend_npot_tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012482, VkglTestCase_012482_1, VkglTestCase_012482_2);

#define VkglTestCase_012483_1 "dEQP-GLES2.functional.fbo.render.color."
#define VkglTestCase_012483_2 "blend_npot_tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012483, VkglTestCase_012483_1, VkglTestCase_012483_2);

#define VkglTestCase_012484_1 "dEQP-GLES2.functional.fbo.rend"
#define VkglTestCase_012484_2 "er.color.blend_npot_rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012484, VkglTestCase_012484_1, VkglTestCase_012484_2);

#define VkglTestCase_012485_1 "dEQP-GLES2.functional.fbo.render.color."
#define VkglTestCase_012485_2 "blend_npot_rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012485, VkglTestCase_012485_1, VkglTestCase_012485_2);

#define VkglTestCase_012486_1 "dEQP-GLES2.functional.fbo.rend"
#define VkglTestCase_012486_2 "er.color.blend_npot_rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012486, VkglTestCase_012486_1, VkglTestCase_012486_2);

#define VkglTestCase_012487_1 "dEQP-GLES2.functional.fbo.render.color."
#define VkglTestCase_012487_2 "blend_npot_rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012487, VkglTestCase_012487_1, VkglTestCase_012487_2);

#define VkglTestCase_012488_1 "dEQP-GLES2.functional.fbo.ren"
#define VkglTestCase_012488_2 "der.color.blend_npot_rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012488, VkglTestCase_012488_1, VkglTestCase_012488_2);

#define VkglTestCase_012489_1 "dEQP-GLES2.functional.fbo.render.color"
#define VkglTestCase_012489_2 ".blend_npot_rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012489, VkglTestCase_012489_1, VkglTestCase_012489_2);
