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

#define VkglTestCase_012575_1 "dEQP-GLES2.functional.fbo.render.re"
#define VkglTestCase_012575_2 "create_colorbuffer.rebind_tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012575, VkglTestCase_012575_1, VkglTestCase_012575_2);

#define VkglTestCase_012576_1 "dEQP-GLES2.functional.fbo.render.recreate_"
#define VkglTestCase_012576_2 "colorbuffer.rebind_tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012576, VkglTestCase_012576_1, VkglTestCase_012576_2);

#define VkglTestCase_012577_1 "dEQP-GLES2.functional.fbo.render.recreate_co"
#define VkglTestCase_012577_2 "lorbuffer.rebind_tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012577, VkglTestCase_012577_1, VkglTestCase_012577_2);

#define VkglTestCase_012578_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuff"
#define VkglTestCase_012578_2 "er.rebind_tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012578, VkglTestCase_012578_1, VkglTestCase_012578_2);

#define VkglTestCase_012579_1 "dEQP-GLES2.functional.fbo.render.re"
#define VkglTestCase_012579_2 "create_colorbuffer.rebind_tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012579, VkglTestCase_012579_1, VkglTestCase_012579_2);

#define VkglTestCase_012580_1 "dEQP-GLES2.functional.fbo.render.recreate_c"
#define VkglTestCase_012580_2 "olorbuffer.rebind_tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012580, VkglTestCase_012580_1, VkglTestCase_012580_2);

#define VkglTestCase_012581_1 "dEQP-GLES2.functional.fbo.render.recreate_co"
#define VkglTestCase_012581_2 "lorbuffer.rebind_tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012581, VkglTestCase_012581_1, VkglTestCase_012581_2);

#define VkglTestCase_012582_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuffe"
#define VkglTestCase_012582_2 "r.rebind_tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012582, VkglTestCase_012582_1, VkglTestCase_012582_2);

#define VkglTestCase_012583_1 "dEQP-GLES2.functional.fbo.render.re"
#define VkglTestCase_012583_2 "create_colorbuffer.rebind_rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012583, VkglTestCase_012583_1, VkglTestCase_012583_2);

#define VkglTestCase_012584_1 "dEQP-GLES2.functional.fbo.render.recreate_c"
#define VkglTestCase_012584_2 "olorbuffer.rebind_rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012584, VkglTestCase_012584_1, VkglTestCase_012584_2);

#define VkglTestCase_012585_1 "dEQP-GLES2.functional.fbo.render.recreate_co"
#define VkglTestCase_012585_2 "lorbuffer.rebind_rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012585, VkglTestCase_012585_1, VkglTestCase_012585_2);

#define VkglTestCase_012586_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuffe"
#define VkglTestCase_012586_2 "r.rebind_rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012586, VkglTestCase_012586_1, VkglTestCase_012586_2);

#define VkglTestCase_012587_1 "dEQP-GLES2.functional.fbo.render.rec"
#define VkglTestCase_012587_2 "reate_colorbuffer.rebind_rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012587, VkglTestCase_012587_1, VkglTestCase_012587_2);

#define VkglTestCase_012588_1 "dEQP-GLES2.functional.fbo.render.recreate_c"
#define VkglTestCase_012588_2 "olorbuffer.rebind_rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012588, VkglTestCase_012588_1, VkglTestCase_012588_2);

#define VkglTestCase_012589_1 "dEQP-GLES2.functional.fbo.render.recreate_col"
#define VkglTestCase_012589_2 "orbuffer.rebind_rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012589, VkglTestCase_012589_1, VkglTestCase_012589_2);

#define VkglTestCase_012590_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuffe"
#define VkglTestCase_012590_2 "r.rebind_rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012590, VkglTestCase_012590_1, VkglTestCase_012590_2);

#define VkglTestCase_012591_1 "dEQP-GLES2.functional.fbo.render.re"
#define VkglTestCase_012591_2 "create_colorbuffer.rebind_rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012591, VkglTestCase_012591_1, VkglTestCase_012591_2);

#define VkglTestCase_012592_1 "dEQP-GLES2.functional.fbo.render.recreate_"
#define VkglTestCase_012592_2 "colorbuffer.rebind_rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012592, VkglTestCase_012592_1, VkglTestCase_012592_2);

#define VkglTestCase_012593_1 "dEQP-GLES2.functional.fbo.render.recreate_co"
#define VkglTestCase_012593_2 "lorbuffer.rebind_rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012593, VkglTestCase_012593_1, VkglTestCase_012593_2);

#define VkglTestCase_012594_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuff"
#define VkglTestCase_012594_2 "er.rebind_rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012594, VkglTestCase_012594_1, VkglTestCase_012594_2);

#define VkglTestCase_012595_1 "dEQP-GLES2.functional.fbo.render.rec"
#define VkglTestCase_012595_2 "reate_colorbuffer.no_rebind_tex2d_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012595, VkglTestCase_012595_1, VkglTestCase_012595_2);

#define VkglTestCase_012596_1 "dEQP-GLES2.functional.fbo.render.recreate_co"
#define VkglTestCase_012596_2 "lorbuffer.no_rebind_tex2d_rgb_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012596, VkglTestCase_012596_1, VkglTestCase_012596_2);

#define VkglTestCase_012597_1 "dEQP-GLES2.functional.fbo.render.recreate_col"
#define VkglTestCase_012597_2 "orbuffer.no_rebind_tex2d_rgb_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012597, VkglTestCase_012597_1, VkglTestCase_012597_2);

#define VkglTestCase_012598_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuffer"
#define VkglTestCase_012598_2 ".no_rebind_tex2d_rgb_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012598, VkglTestCase_012598_1, VkglTestCase_012598_2);

#define VkglTestCase_012599_1 "dEQP-GLES2.functional.fbo.render.recr"
#define VkglTestCase_012599_2 "eate_colorbuffer.no_rebind_tex2d_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012599, VkglTestCase_012599_1, VkglTestCase_012599_2);

#define VkglTestCase_012600_1 "dEQP-GLES2.functional.fbo.render.recreate_co"
#define VkglTestCase_012600_2 "lorbuffer.no_rebind_tex2d_rgba_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012600, VkglTestCase_012600_1, VkglTestCase_012600_2);

#define VkglTestCase_012601_1 "dEQP-GLES2.functional.fbo.render.recreate_colo"
#define VkglTestCase_012601_2 "rbuffer.no_rebind_tex2d_rgba_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012601, VkglTestCase_012601_1, VkglTestCase_012601_2);

#define VkglTestCase_012602_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuffer"
#define VkglTestCase_012602_2 ".no_rebind_tex2d_rgba_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012602, VkglTestCase_012602_1, VkglTestCase_012602_2);

#define VkglTestCase_012603_1 "dEQP-GLES2.functional.fbo.render.recr"
#define VkglTestCase_012603_2 "eate_colorbuffer.no_rebind_rbo_rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012603, VkglTestCase_012603_1, VkglTestCase_012603_2);

#define VkglTestCase_012604_1 "dEQP-GLES2.functional.fbo.render.recreate_co"
#define VkglTestCase_012604_2 "lorbuffer.no_rebind_rbo_rgb565_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012604, VkglTestCase_012604_1, VkglTestCase_012604_2);

#define VkglTestCase_012605_1 "dEQP-GLES2.functional.fbo.render.recreate_colo"
#define VkglTestCase_012605_2 "rbuffer.no_rebind_rbo_rgb565_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012605, VkglTestCase_012605_1, VkglTestCase_012605_2);

#define VkglTestCase_012606_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuffer"
#define VkglTestCase_012606_2 ".no_rebind_rbo_rgb565_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012606, VkglTestCase_012606_1, VkglTestCase_012606_2);

#define VkglTestCase_012607_1 "dEQP-GLES2.functional.fbo.render.recr"
#define VkglTestCase_012607_2 "eate_colorbuffer.no_rebind_rbo_rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012607, VkglTestCase_012607_1, VkglTestCase_012607_2);

#define VkglTestCase_012608_1 "dEQP-GLES2.functional.fbo.render.recreate_col"
#define VkglTestCase_012608_2 "orbuffer.no_rebind_rbo_rgb5_a1_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012608, VkglTestCase_012608_1, VkglTestCase_012608_2);

#define VkglTestCase_012609_1 "dEQP-GLES2.functional.fbo.render.recreate_colo"
#define VkglTestCase_012609_2 "rbuffer.no_rebind_rbo_rgb5_a1_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012609, VkglTestCase_012609_1, VkglTestCase_012609_2);

#define VkglTestCase_012610_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuffer."
#define VkglTestCase_012610_2 "no_rebind_rbo_rgb5_a1_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012610, VkglTestCase_012610_1, VkglTestCase_012610_2);

#define VkglTestCase_012611_1 "dEQP-GLES2.functional.fbo.render.rec"
#define VkglTestCase_012611_2 "reate_colorbuffer.no_rebind_rbo_rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012611, VkglTestCase_012611_1, VkglTestCase_012611_2);

#define VkglTestCase_012612_1 "dEQP-GLES2.functional.fbo.render.recreate_co"
#define VkglTestCase_012612_2 "lorbuffer.no_rebind_rbo_rgba4_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012612, VkglTestCase_012612_1, VkglTestCase_012612_2);

#define VkglTestCase_012613_1 "dEQP-GLES2.functional.fbo.render.recreate_col"
#define VkglTestCase_012613_2 "orbuffer.no_rebind_rbo_rgba4_depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012613, VkglTestCase_012613_1, VkglTestCase_012613_2);

#define VkglTestCase_012614_1 "dEQP-GLES2.functional.fbo.render.recreate_colorbuffer"
#define VkglTestCase_012614_2 ".no_rebind_rbo_rgba4_depth_component16_stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012614, VkglTestCase_012614_1, VkglTestCase_012614_2);
