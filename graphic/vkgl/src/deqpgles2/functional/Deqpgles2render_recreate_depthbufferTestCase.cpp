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

#define VkglTestCase_012615_1 "dEQP-GLES2.functional.fbo.render.recreate_de"
#define VkglTestCase_012615_2 "pthbuffer.rebind_tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012615, VkglTestCase_012615_1, VkglTestCase_012615_2);

#define VkglTestCase_012616_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuff"
#define VkglTestCase_012616_2 "er.rebind_tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012616, VkglTestCase_012616_1, VkglTestCase_012616_2);

#define VkglTestCase_012617_1 "dEQP-GLES2.functional.fbo.render.recreate_de"
#define VkglTestCase_012617_2 "pthbuffer.rebind_tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012617, VkglTestCase_012617_1, VkglTestCase_012617_2);

#define VkglTestCase_012618_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuffe"
#define VkglTestCase_012618_2 "r.rebind_tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012618, VkglTestCase_012618_1, VkglTestCase_012618_2);

#define VkglTestCase_012619_1 "dEQP-GLES2.functional.fbo.render.recreate_de"
#define VkglTestCase_012619_2 "pthbuffer.rebind_rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012619, VkglTestCase_012619_1, VkglTestCase_012619_2);

#define VkglTestCase_012620_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuffe"
#define VkglTestCase_012620_2 "r.rebind_rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012620, VkglTestCase_012620_1, VkglTestCase_012620_2);

#define VkglTestCase_012621_1 "dEQP-GLES2.functional.fbo.render.recreate_dep"
#define VkglTestCase_012621_2 "thbuffer.rebind_rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012621, VkglTestCase_012621_1, VkglTestCase_012621_2);

#define VkglTestCase_012622_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuffe"
#define VkglTestCase_012622_2 "r.rebind_rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012622, VkglTestCase_012622_1, VkglTestCase_012622_2);

#define VkglTestCase_012623_1 "dEQP-GLES2.functional.fbo.render.recreate_de"
#define VkglTestCase_012623_2 "pthbuffer.rebind_rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012623, VkglTestCase_012623_1, VkglTestCase_012623_2);

#define VkglTestCase_012624_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuff"
#define VkglTestCase_012624_2 "er.rebind_rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012624, VkglTestCase_012624_1, VkglTestCase_012624_2);

#define VkglTestCase_012625_1 "dEQP-GLES2.functional.fbo.render.recreate_dep"
#define VkglTestCase_012625_2 "thbuffer.no_rebind_tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012625, VkglTestCase_012625_1, VkglTestCase_012625_2);

#define VkglTestCase_012626_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuffer"
#define VkglTestCase_012626_2 ".no_rebind_tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012626, VkglTestCase_012626_1, VkglTestCase_012626_2);

#define VkglTestCase_012627_1 "dEQP-GLES2.functional.fbo.render.recreate_dept"
#define VkglTestCase_012627_2 "hbuffer.no_rebind_tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012627, VkglTestCase_012627_1, VkglTestCase_012627_2);

#define VkglTestCase_012628_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuffer"
#define VkglTestCase_012628_2 ".no_rebind_tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012628, VkglTestCase_012628_1, VkglTestCase_012628_2);

#define VkglTestCase_012629_1 "dEQP-GLES2.functional.fbo.render.recreate_dept"
#define VkglTestCase_012629_2 "hbuffer.no_rebind_rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012629, VkglTestCase_012629_1, VkglTestCase_012629_2);

#define VkglTestCase_012630_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuffer"
#define VkglTestCase_012630_2 ".no_rebind_rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012630, VkglTestCase_012630_1, VkglTestCase_012630_2);

#define VkglTestCase_012631_1 "dEQP-GLES2.functional.fbo.render.recreate_dept"
#define VkglTestCase_012631_2 "hbuffer.no_rebind_rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012631, VkglTestCase_012631_1, VkglTestCase_012631_2);

#define VkglTestCase_012632_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuffer."
#define VkglTestCase_012632_2 "no_rebind_rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012632, VkglTestCase_012632_1, VkglTestCase_012632_2);

#define VkglTestCase_012633_1 "dEQP-GLES2.functional.fbo.render.recreate_dep"
#define VkglTestCase_012633_2 "thbuffer.no_rebind_rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012633, VkglTestCase_012633_1, VkglTestCase_012633_2);

#define VkglTestCase_012634_1 "dEQP-GLES2.functional.fbo.render.recreate_depthbuffer"
#define VkglTestCase_012634_2 ".no_rebind_rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012634, VkglTestCase_012634_1, VkglTestCase_012634_2);
