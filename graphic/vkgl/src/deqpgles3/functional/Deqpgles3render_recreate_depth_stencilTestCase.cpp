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

#define VkglTestCase_031723_1 "dEQP-GLES3.functional.fbo.render.recreate_depth_s"
#define VkglTestCase_031723_2 "tencil.tex2d_rgba8_depth_tex2d_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031723, VkglTestCase_031723_1, VkglTestCase_031723_2);

#define VkglTestCase_031724_1 "dEQP-GLES3.functional.fbo.render.recreate_depth_"
#define VkglTestCase_031724_2 "stencil.tex2d_rgba8_depth_rbo_depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031724, VkglTestCase_031724_1, VkglTestCase_031724_2);

#define VkglTestCase_031725_1 "dEQP-GLES3.functional.fbo.render.recreate_depth_"
#define VkglTestCase_031725_2 "stencil.tex2d_rgba8_depth_tex2d_depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031725, VkglTestCase_031725_1, VkglTestCase_031725_2);

#define VkglTestCase_031726_1 "dEQP-GLES3.functional.fbo.render.recreate_depth"
#define VkglTestCase_031726_2 "_stencil.tex2d_rgba8_depth_rbo_depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031726, VkglTestCase_031726_1, VkglTestCase_031726_2);

#define VkglTestCase_031727_1 "dEQP-GLES3.functional.fbo.render.recreate_depth_"
#define VkglTestCase_031727_2 "stencil.tex2d_rgba8_depth_tex2d_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031727, VkglTestCase_031727_1, VkglTestCase_031727_2);

#define VkglTestCase_031728_1 "dEQP-GLES3.functional.fbo.render.recreate_depth"
#define VkglTestCase_031728_2 "_stencil.tex2d_rgba8_depth_rbo_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031728, VkglTestCase_031728_1, VkglTestCase_031728_2);

#define VkglTestCase_031729_1 "dEQP-GLES3.functional.fbo.render.recreate_depth_sten"
#define VkglTestCase_031729_2 "cil.tex2d_rgba8_depth_stencil_tex2d_depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031729, VkglTestCase_031729_1, VkglTestCase_031729_2);

#define VkglTestCase_031730_1 "dEQP-GLES3.functional.fbo.render.recreate_depth_ste"
#define VkglTestCase_031730_2 "ncil.tex2d_rgba8_depth_stencil_rbo_depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031730, VkglTestCase_031730_1, VkglTestCase_031730_2);

#define VkglTestCase_031731_1 "dEQP-GLES3.functional.fbo.render.recreate_depth_sten"
#define VkglTestCase_031731_2 "cil.tex2d_rgba8_depth_stencil_tex2d_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031731, VkglTestCase_031731_1, VkglTestCase_031731_2);

#define VkglTestCase_031732_1 "dEQP-GLES3.functional.fbo.render.recreate_depth_ste"
#define VkglTestCase_031732_2 "ncil.tex2d_rgba8_depth_stencil_rbo_depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031732, VkglTestCase_031732_1, VkglTestCase_031732_2);

#define VkglTestCase_031733_1 "dEQP-GLES3.functional.fbo.render.recreate_depth"
#define VkglTestCase_031733_2 "_stencil.tex2d_rgba8_stencil_rbo_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30032TestSuite, TestCase_031733, VkglTestCase_031733_1, VkglTestCase_031733_2);
