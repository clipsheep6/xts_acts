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

#define VkglTestCase_012555_1 "dEQP-GLES2.functional.fb"
#define VkglTestCase_012555_2 "o.render.resize.tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012555, VkglTestCase_012555_1, VkglTestCase_012555_2);

#define VkglTestCase_012556_1 "dEQP-GLES2.functional.fbo.render"
#define VkglTestCase_012556_2 ".resize.tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012556, VkglTestCase_012556_1, VkglTestCase_012556_2);

#define VkglTestCase_012557_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012557_2 "resize.tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012557, VkglTestCase_012557_1, VkglTestCase_012557_2);

#define VkglTestCase_012558_1 "dEQP-GLES2.functional.fbo.render.resize.t"
#define VkglTestCase_012558_2 "ex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012558, VkglTestCase_012558_1, VkglTestCase_012558_2);

#define VkglTestCase_012559_1 "dEQP-GLES2.functional.fbo"
#define VkglTestCase_012559_2 ".render.resize.tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012559, VkglTestCase_012559_1, VkglTestCase_012559_2);

#define VkglTestCase_012560_1 "dEQP-GLES2.functional.fbo.render"
#define VkglTestCase_012560_2 ".resize.tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012560, VkglTestCase_012560_1, VkglTestCase_012560_2);

#define VkglTestCase_012561_1 "dEQP-GLES2.functional.fbo.render.r"
#define VkglTestCase_012561_2 "esize.tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012561, VkglTestCase_012561_1, VkglTestCase_012561_2);

#define VkglTestCase_012562_1 "dEQP-GLES2.functional.fbo.render.resize.t"
#define VkglTestCase_012562_2 "ex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012562, VkglTestCase_012562_1, VkglTestCase_012562_2);

#define VkglTestCase_012563_1 "dEQP-GLES2.functional.fbo"
#define VkglTestCase_012563_2 ".render.resize.rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012563, VkglTestCase_012563_1, VkglTestCase_012563_2);

#define VkglTestCase_012564_1 "dEQP-GLES2.functional.fbo.render"
#define VkglTestCase_012564_2 ".resize.rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012564, VkglTestCase_012564_1, VkglTestCase_012564_2);

#define VkglTestCase_012565_1 "dEQP-GLES2.functional.fbo.render.r"
#define VkglTestCase_012565_2 "esize.rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012565, VkglTestCase_012565_1, VkglTestCase_012565_2);

#define VkglTestCase_012566_1 "dEQP-GLES2.functional.fbo.render.resize.r"
#define VkglTestCase_012566_2 "bo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012566, VkglTestCase_012566_1, VkglTestCase_012566_2);

#define VkglTestCase_012567_1 "dEQP-GLES2.functional.fbo"
#define VkglTestCase_012567_2 ".render.resize.rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012567, VkglTestCase_012567_1, VkglTestCase_012567_2);

#define VkglTestCase_012568_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012568_2 "resize.rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012568, VkglTestCase_012568_1, VkglTestCase_012568_2);

#define VkglTestCase_012569_1 "dEQP-GLES2.functional.fbo.render.r"
#define VkglTestCase_012569_2 "esize.rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012569, VkglTestCase_012569_1, VkglTestCase_012569_2);

#define VkglTestCase_012570_1 "dEQP-GLES2.functional.fbo.render.resize.rb"
#define VkglTestCase_012570_2 "o_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012570, VkglTestCase_012570_1, VkglTestCase_012570_2);

#define VkglTestCase_012571_1 "dEQP-GLES2.functional.fb"
#define VkglTestCase_012571_2 "o.render.resize.rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012571, VkglTestCase_012571_1, VkglTestCase_012571_2);

#define VkglTestCase_012572_1 "dEQP-GLES2.functional.fbo.render"
#define VkglTestCase_012572_2 ".resize.rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012572, VkglTestCase_012572_1, VkglTestCase_012572_2);

#define VkglTestCase_012573_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012573_2 "resize.rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012573, VkglTestCase_012573_1, VkglTestCase_012573_2);

#define VkglTestCase_012574_1 "dEQP-GLES2.functional.fbo.render.resize.r"
#define VkglTestCase_012574_2 "bo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012574, VkglTestCase_012574_1, VkglTestCase_012574_2);
