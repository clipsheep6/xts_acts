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

#define VkglTestCase_012635_1 "dEQP-GLES2.functional.fbo.render.recreate_s"
#define VkglTestCase_012635_2 "tencilbuffer.rebind_tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012635, VkglTestCase_012635_1, VkglTestCase_012635_2);

#define VkglTestCase_012636_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuf"
#define VkglTestCase_012636_2 "fer.rebind_tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012636, VkglTestCase_012636_1, VkglTestCase_012636_2);

#define VkglTestCase_012637_1 "dEQP-GLES2.functional.fbo.render.recreate_st"
#define VkglTestCase_012637_2 "encilbuffer.rebind_tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012637, VkglTestCase_012637_1, VkglTestCase_012637_2);

#define VkglTestCase_012638_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuff"
#define VkglTestCase_012638_2 "er.rebind_tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012638, VkglTestCase_012638_1, VkglTestCase_012638_2);

#define VkglTestCase_012639_1 "dEQP-GLES2.functional.fbo.render.recreate_st"
#define VkglTestCase_012639_2 "encilbuffer.rebind_rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012639, VkglTestCase_012639_1, VkglTestCase_012639_2);

#define VkglTestCase_012640_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuff"
#define VkglTestCase_012640_2 "er.rebind_rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012640, VkglTestCase_012640_1, VkglTestCase_012640_2);

#define VkglTestCase_012641_1 "dEQP-GLES2.functional.fbo.render.recreate_st"
#define VkglTestCase_012641_2 "encilbuffer.rebind_rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012641, VkglTestCase_012641_1, VkglTestCase_012641_2);

#define VkglTestCase_012642_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuff"
#define VkglTestCase_012642_2 "er.rebind_rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012642, VkglTestCase_012642_1, VkglTestCase_012642_2);

#define VkglTestCase_012643_1 "dEQP-GLES2.functional.fbo.render.recreate_s"
#define VkglTestCase_012643_2 "tencilbuffer.rebind_rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012643, VkglTestCase_012643_1, VkglTestCase_012643_2);

#define VkglTestCase_012644_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuf"
#define VkglTestCase_012644_2 "fer.rebind_rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012644, VkglTestCase_012644_1, VkglTestCase_012644_2);

#define VkglTestCase_012645_1 "dEQP-GLES2.functional.fbo.render.recreate_ste"
#define VkglTestCase_012645_2 "ncilbuffer.no_rebind_tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012645, VkglTestCase_012645_1, VkglTestCase_012645_2);

#define VkglTestCase_012646_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuffe"
#define VkglTestCase_012646_2 "r.no_rebind_tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012646, VkglTestCase_012646_1, VkglTestCase_012646_2);

#define VkglTestCase_012647_1 "dEQP-GLES2.functional.fbo.render.recreate_ste"
#define VkglTestCase_012647_2 "ncilbuffer.no_rebind_tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012647, VkglTestCase_012647_1, VkglTestCase_012647_2);

#define VkglTestCase_012648_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuffe"
#define VkglTestCase_012648_2 "r.no_rebind_tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012648, VkglTestCase_012648_1, VkglTestCase_012648_2);

#define VkglTestCase_012649_1 "dEQP-GLES2.functional.fbo.render.recreate_ste"
#define VkglTestCase_012649_2 "ncilbuffer.no_rebind_rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012649, VkglTestCase_012649_1, VkglTestCase_012649_2);

#define VkglTestCase_012650_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuffe"
#define VkglTestCase_012650_2 "r.no_rebind_rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012650, VkglTestCase_012650_1, VkglTestCase_012650_2);

#define VkglTestCase_012651_1 "dEQP-GLES2.functional.fbo.render.recreate_sten"
#define VkglTestCase_012651_2 "cilbuffer.no_rebind_rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012651, VkglTestCase_012651_1, VkglTestCase_012651_2);

#define VkglTestCase_012652_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuffer"
#define VkglTestCase_012652_2 ".no_rebind_rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012652, VkglTestCase_012652_1, VkglTestCase_012652_2);

#define VkglTestCase_012653_1 "dEQP-GLES2.functional.fbo.render.recreate_ste"
#define VkglTestCase_012653_2 "ncilbuffer.no_rebind_rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012653, VkglTestCase_012653_1, VkglTestCase_012653_2);

#define VkglTestCase_012654_1 "dEQP-GLES2.functional.fbo.render.recreate_stencilbuffe"
#define VkglTestCase_012654_2 "r.no_rebind_rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012654, VkglTestCase_012654_1, VkglTestCase_012654_2);
