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

#define VkglTestCase_012545_1 "dEQP-GLES2.functional.fbo.render.shared"
#define VkglTestCase_012545_2 "_depthbuffer.tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012545, VkglTestCase_012545_1, VkglTestCase_012545_2);

#define VkglTestCase_012546_1 "dEQP-GLES2.functional.fbo.render.shared_depthbu"
#define VkglTestCase_012546_2 "ffer.tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012546, VkglTestCase_012546_1, VkglTestCase_012546_2);

#define VkglTestCase_012547_1 "dEQP-GLES2.functional.fbo.render.shared_"
#define VkglTestCase_012547_2 "depthbuffer.tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012547, VkglTestCase_012547_1, VkglTestCase_012547_2);

#define VkglTestCase_012548_1 "dEQP-GLES2.functional.fbo.render.shared_depthbu"
#define VkglTestCase_012548_2 "ffer.tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012548, VkglTestCase_012548_1, VkglTestCase_012548_2);

#define VkglTestCase_012549_1 "dEQP-GLES2.functional.fbo.render.shared_"
#define VkglTestCase_012549_2 "depthbuffer.rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012549, VkglTestCase_012549_1, VkglTestCase_012549_2);

#define VkglTestCase_012550_1 "dEQP-GLES2.functional.fbo.render.shared_depthbu"
#define VkglTestCase_012550_2 "ffer.rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012550, VkglTestCase_012550_1, VkglTestCase_012550_2);

#define VkglTestCase_012551_1 "dEQP-GLES2.functional.fbo.render.shared_"
#define VkglTestCase_012551_2 "depthbuffer.rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012551, VkglTestCase_012551_1, VkglTestCase_012551_2);

#define VkglTestCase_012552_1 "dEQP-GLES2.functional.fbo.render.shared_depthbuf"
#define VkglTestCase_012552_2 "fer.rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012552, VkglTestCase_012552_1, VkglTestCase_012552_2);

#define VkglTestCase_012553_1 "dEQP-GLES2.functional.fbo.render.shared"
#define VkglTestCase_012553_2 "_depthbuffer.rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012553, VkglTestCase_012553_1, VkglTestCase_012553_2);

#define VkglTestCase_012554_1 "dEQP-GLES2.functional.fbo.render.shared_depthbu"
#define VkglTestCase_012554_2 "ffer.rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012554, VkglTestCase_012554_1, VkglTestCase_012554_2);
