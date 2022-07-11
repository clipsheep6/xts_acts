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

#define VkglTestCase_012490_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012490_2 "depth.tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012490, VkglTestCase_012490_1, VkglTestCase_012490_2);

#define VkglTestCase_012491_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012491_2 "depth.tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012491, VkglTestCase_012491_1, VkglTestCase_012491_2);

#define VkglTestCase_012492_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012492_2 "depth.rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012492, VkglTestCase_012492_1, VkglTestCase_012492_2);

#define VkglTestCase_012493_1 "dEQP-GLES2.functional.fbo.render.d"
#define VkglTestCase_012493_2 "epth.rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012493, VkglTestCase_012493_1, VkglTestCase_012493_2);

#define VkglTestCase_012494_1 "dEQP-GLES2.functional.fbo.render."
#define VkglTestCase_012494_2 "depth.rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012494, VkglTestCase_012494_1, VkglTestCase_012494_2);

#define VkglTestCase_012495_1 "dEQP-GLES2.functional.fbo.render.de"
#define VkglTestCase_012495_2 "pth.npot_tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012495, VkglTestCase_012495_1, VkglTestCase_012495_2);

#define VkglTestCase_012496_1 "dEQP-GLES2.functional.fbo.render.dep"
#define VkglTestCase_012496_2 "th.npot_tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012496, VkglTestCase_012496_1, VkglTestCase_012496_2);

#define VkglTestCase_012497_1 "dEQP-GLES2.functional.fbo.render.dep"
#define VkglTestCase_012497_2 "th.npot_rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012497, VkglTestCase_012497_1, VkglTestCase_012497_2);

#define VkglTestCase_012498_1 "dEQP-GLES2.functional.fbo.render.dep"
#define VkglTestCase_012498_2 "th.npot_rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012498, VkglTestCase_012498_1, VkglTestCase_012498_2);

#define VkglTestCase_012499_1 "dEQP-GLES2.functional.fbo.render.de"
#define VkglTestCase_012499_2 "pth.npot_rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012499, VkglTestCase_012499_1, VkglTestCase_012499_2);
