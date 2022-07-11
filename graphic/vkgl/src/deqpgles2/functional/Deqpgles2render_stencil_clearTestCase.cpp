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

#define VkglTestCase_012452_1 "dEQP-GLES2.functional.fbo.render.st"
#define VkglTestCase_012452_2 "encil_clear.tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012452, VkglTestCase_012452_1, VkglTestCase_012452_2);

#define VkglTestCase_012453_1 "dEQP-GLES2.functional.fbo.render.stencil_cle"
#define VkglTestCase_012453_2 "ar.tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012453, VkglTestCase_012453_1, VkglTestCase_012453_2);

#define VkglTestCase_012454_1 "dEQP-GLES2.functional.fbo.render.ste"
#define VkglTestCase_012454_2 "ncil_clear.tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012454, VkglTestCase_012454_1, VkglTestCase_012454_2);

#define VkglTestCase_012455_1 "dEQP-GLES2.functional.fbo.render.stencil_clea"
#define VkglTestCase_012455_2 "r.tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012455, VkglTestCase_012455_1, VkglTestCase_012455_2);

#define VkglTestCase_012456_1 "dEQP-GLES2.functional.fbo.render.ste"
#define VkglTestCase_012456_2 "ncil_clear.rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012456, VkglTestCase_012456_1, VkglTestCase_012456_2);

#define VkglTestCase_012457_1 "dEQP-GLES2.functional.fbo.render.stencil_clea"
#define VkglTestCase_012457_2 "r.rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012457, VkglTestCase_012457_1, VkglTestCase_012457_2);

#define VkglTestCase_012458_1 "dEQP-GLES2.functional.fbo.render.ste"
#define VkglTestCase_012458_2 "ncil_clear.rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012458, VkglTestCase_012458_1, VkglTestCase_012458_2);

#define VkglTestCase_012459_1 "dEQP-GLES2.functional.fbo.render.stencil_clea"
#define VkglTestCase_012459_2 "r.rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012459, VkglTestCase_012459_1, VkglTestCase_012459_2);

#define VkglTestCase_012460_1 "dEQP-GLES2.functional.fbo.render.st"
#define VkglTestCase_012460_2 "encil_clear.rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012460, VkglTestCase_012460_1, VkglTestCase_012460_2);

#define VkglTestCase_012461_1 "dEQP-GLES2.functional.fbo.render.stencil_cle"
#define VkglTestCase_012461_2 "ar.rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012461, VkglTestCase_012461_1, VkglTestCase_012461_2);
