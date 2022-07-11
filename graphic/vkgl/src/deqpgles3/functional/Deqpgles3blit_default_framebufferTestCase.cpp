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
#include "../ActsDeqpgles30033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032569_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032569_2 "it.default_framebuffer.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032569, VkglTestCase_032569_1, VkglTestCase_032569_2);

#define VkglTestCase_032570_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032570_2 "buffer.rgba8_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032570, VkglTestCase_032570_1, VkglTestCase_032570_2);

#define VkglTestCase_032571_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032571_2 "ebuffer.rgba8_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032571, VkglTestCase_032571_1, VkglTestCase_032571_2);

#define VkglTestCase_032572_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032572_2 "ebuffer.rgba8_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032572, VkglTestCase_032572_1, VkglTestCase_032572_2);

#define VkglTestCase_032573_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032573_2 "mebuffer.rgba8_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032573, VkglTestCase_032573_1, VkglTestCase_032573_2);

#define VkglTestCase_032574_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032574_2 "fer.rgba8_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032574, VkglTestCase_032574_1, VkglTestCase_032574_2);

#define VkglTestCase_032575_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032575_2 "ffer.rgba8_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032575, VkglTestCase_032575_1, VkglTestCase_032575_2);

#define VkglTestCase_032576_1 "dEQP-GLES3.functional.fbo.blit."
#define VkglTestCase_032576_2 "default_framebuffer.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032576, VkglTestCase_032576_1, VkglTestCase_032576_2);

#define VkglTestCase_032577_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032577_2 "fer.srgb8_alpha8_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032577, VkglTestCase_032577_1, VkglTestCase_032577_2);

#define VkglTestCase_032578_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032578_2 "ffer.srgb8_alpha8_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032578, VkglTestCase_032578_1, VkglTestCase_032578_2);

#define VkglTestCase_032579_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032579_2 "fer.srgb8_alpha8_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032579, VkglTestCase_032579_1, VkglTestCase_032579_2);

#define VkglTestCase_032580_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032580_2 "ffer.srgb8_alpha8_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032580, VkglTestCase_032580_1, VkglTestCase_032580_2);

#define VkglTestCase_032581_1 "dEQP-GLES3.functional.fbo.blit.default_framebuffer."
#define VkglTestCase_032581_2 "srgb8_alpha8_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032581, VkglTestCase_032581_1, VkglTestCase_032581_2);

#define VkglTestCase_032582_1 "dEQP-GLES3.functional.fbo.blit.default_framebuffer"
#define VkglTestCase_032582_2 ".srgb8_alpha8_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032582, VkglTestCase_032582_1, VkglTestCase_032582_2);

#define VkglTestCase_032583_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032583_2 "t.default_framebuffer.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032583, VkglTestCase_032583_1, VkglTestCase_032583_2);

#define VkglTestCase_032584_1 "dEQP-GLES3.functional.fbo.blit.default_frameb"
#define VkglTestCase_032584_2 "uffer.rgb10_a2_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032584, VkglTestCase_032584_1, VkglTestCase_032584_2);

#define VkglTestCase_032585_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032585_2 "buffer.rgb10_a2_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032585, VkglTestCase_032585_1, VkglTestCase_032585_2);

#define VkglTestCase_032586_1 "dEQP-GLES3.functional.fbo.blit.default_frameb"
#define VkglTestCase_032586_2 "uffer.rgb10_a2_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032586, VkglTestCase_032586_1, VkglTestCase_032586_2);

#define VkglTestCase_032587_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032587_2 "buffer.rgb10_a2_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032587, VkglTestCase_032587_1, VkglTestCase_032587_2);

#define VkglTestCase_032588_1 "dEQP-GLES3.functional.fbo.blit.default_framebuffe"
#define VkglTestCase_032588_2 "r.rgb10_a2_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032588, VkglTestCase_032588_1, VkglTestCase_032588_2);

#define VkglTestCase_032589_1 "dEQP-GLES3.functional.fbo.blit.default_framebuff"
#define VkglTestCase_032589_2 "er.rgb10_a2_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032589, VkglTestCase_032589_1, VkglTestCase_032589_2);

#define VkglTestCase_032590_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032590_2 "it.default_framebuffer.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032590, VkglTestCase_032590_1, VkglTestCase_032590_2);

#define VkglTestCase_032591_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032591_2 "buffer.rgba4_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032591, VkglTestCase_032591_1, VkglTestCase_032591_2);

#define VkglTestCase_032592_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032592_2 "ebuffer.rgba4_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032592, VkglTestCase_032592_1, VkglTestCase_032592_2);

#define VkglTestCase_032593_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032593_2 "ebuffer.rgba4_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032593, VkglTestCase_032593_1, VkglTestCase_032593_2);

#define VkglTestCase_032594_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032594_2 "mebuffer.rgba4_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032594, VkglTestCase_032594_1, VkglTestCase_032594_2);

#define VkglTestCase_032595_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032595_2 "fer.rgba4_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032595, VkglTestCase_032595_1, VkglTestCase_032595_2);

#define VkglTestCase_032596_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032596_2 "ffer.rgba4_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032596, VkglTestCase_032596_1, VkglTestCase_032596_2);

#define VkglTestCase_032597_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032597_2 "t.default_framebuffer.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032597, VkglTestCase_032597_1, VkglTestCase_032597_2);

#define VkglTestCase_032598_1 "dEQP-GLES3.functional.fbo.blit.default_frameb"
#define VkglTestCase_032598_2 "uffer.rgb5_a1_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032598, VkglTestCase_032598_1, VkglTestCase_032598_2);

#define VkglTestCase_032599_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032599_2 "buffer.rgb5_a1_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032599, VkglTestCase_032599_1, VkglTestCase_032599_2);

#define VkglTestCase_032600_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032600_2 "buffer.rgb5_a1_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032600, VkglTestCase_032600_1, VkglTestCase_032600_2);

#define VkglTestCase_032601_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032601_2 "ebuffer.rgb5_a1_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032601, VkglTestCase_032601_1, VkglTestCase_032601_2);

#define VkglTestCase_032602_1 "dEQP-GLES3.functional.fbo.blit.default_framebuff"
#define VkglTestCase_032602_2 "er.rgb5_a1_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032602, VkglTestCase_032602_1, VkglTestCase_032602_2);

#define VkglTestCase_032603_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032603_2 "fer.rgb5_a1_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032603, VkglTestCase_032603_1, VkglTestCase_032603_2);

#define VkglTestCase_032604_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032604_2 "lit.default_framebuffer.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032604, VkglTestCase_032604_1, VkglTestCase_032604_2);

#define VkglTestCase_032605_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032605_2 "ebuffer.rgb8_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032605, VkglTestCase_032605_1, VkglTestCase_032605_2);

#define VkglTestCase_032606_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032606_2 "mebuffer.rgb8_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032606, VkglTestCase_032606_1, VkglTestCase_032606_2);

#define VkglTestCase_032607_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032607_2 "ebuffer.rgb8_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032607, VkglTestCase_032607_1, VkglTestCase_032607_2);

#define VkglTestCase_032608_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032608_2 "mebuffer.rgb8_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032608, VkglTestCase_032608_1, VkglTestCase_032608_2);

#define VkglTestCase_032609_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032609_2 "fer.rgb8_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032609, VkglTestCase_032609_1, VkglTestCase_032609_2);

#define VkglTestCase_032610_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032610_2 "ffer.rgb8_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032610, VkglTestCase_032610_1, VkglTestCase_032610_2);

#define VkglTestCase_032611_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032611_2 "it.default_framebuffer.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032611, VkglTestCase_032611_1, VkglTestCase_032611_2);

#define VkglTestCase_032612_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032612_2 "buffer.rgb565_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032612, VkglTestCase_032612_1, VkglTestCase_032612_2);

#define VkglTestCase_032613_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032613_2 "ebuffer.rgb565_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032613, VkglTestCase_032613_1, VkglTestCase_032613_2);

#define VkglTestCase_032614_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032614_2 "buffer.rgb565_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032614, VkglTestCase_032614_1, VkglTestCase_032614_2);

#define VkglTestCase_032615_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032615_2 "ebuffer.rgb565_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032615, VkglTestCase_032615_1, VkglTestCase_032615_2);

#define VkglTestCase_032616_1 "dEQP-GLES3.functional.fbo.blit.default_framebuff"
#define VkglTestCase_032616_2 "er.rgb565_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032616, VkglTestCase_032616_1, VkglTestCase_032616_2);

#define VkglTestCase_032617_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032617_2 "fer.rgb565_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032617, VkglTestCase_032617_1, VkglTestCase_032617_2);

#define VkglTestCase_032618_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032618_2 "lit.default_framebuffer.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032618, VkglTestCase_032618_1, VkglTestCase_032618_2);

#define VkglTestCase_032619_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032619_2 "ebuffer.rg8_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032619, VkglTestCase_032619_1, VkglTestCase_032619_2);

#define VkglTestCase_032620_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032620_2 "mebuffer.rg8_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032620, VkglTestCase_032620_1, VkglTestCase_032620_2);

#define VkglTestCase_032621_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032621_2 "mebuffer.rg8_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032621, VkglTestCase_032621_1, VkglTestCase_032621_2);

#define VkglTestCase_032622_1 "dEQP-GLES3.functional.fbo.blit.default_fr"
#define VkglTestCase_032622_2 "amebuffer.rg8_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032622, VkglTestCase_032622_1, VkglTestCase_032622_2);

#define VkglTestCase_032623_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032623_2 "ffer.rg8_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032623, VkglTestCase_032623_1, VkglTestCase_032623_2);

#define VkglTestCase_032624_1 "dEQP-GLES3.functional.fbo.blit.default_frameb"
#define VkglTestCase_032624_2 "uffer.rg8_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032624, VkglTestCase_032624_1, VkglTestCase_032624_2);

#define VkglTestCase_032625_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032625_2 "blit.default_framebuffer.r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032625, VkglTestCase_032625_1, VkglTestCase_032625_2);

#define VkglTestCase_032626_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032626_2 "mebuffer.r8_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032626, VkglTestCase_032626_1, VkglTestCase_032626_2);

#define VkglTestCase_032627_1 "dEQP-GLES3.functional.fbo.blit.default_fr"
#define VkglTestCase_032627_2 "amebuffer.r8_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032627, VkglTestCase_032627_1, VkglTestCase_032627_2);

#define VkglTestCase_032628_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032628_2 "mebuffer.r8_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032628, VkglTestCase_032628_1, VkglTestCase_032628_2);

#define VkglTestCase_032629_1 "dEQP-GLES3.functional.fbo.blit.default_fr"
#define VkglTestCase_032629_2 "amebuffer.r8_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032629, VkglTestCase_032629_1, VkglTestCase_032629_2);

#define VkglTestCase_032630_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032630_2 "ffer.r8_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032630, VkglTestCase_032630_1, VkglTestCase_032630_2);

#define VkglTestCase_032631_1 "dEQP-GLES3.functional.fbo.blit.default_frameb"
#define VkglTestCase_032631_2 "uffer.r8_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032631, VkglTestCase_032631_1, VkglTestCase_032631_2);

#define VkglTestCase_032632_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032632_2 "t.default_framebuffer.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032632, VkglTestCase_032632_1, VkglTestCase_032632_2);

#define VkglTestCase_032633_1 "dEQP-GLES3.functional.fbo.blit.default_frameb"
#define VkglTestCase_032633_2 "uffer.rgba32f_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032633, VkglTestCase_032633_1, VkglTestCase_032633_2);

#define VkglTestCase_032634_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032634_2 "buffer.rgba32f_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032634, VkglTestCase_032634_1, VkglTestCase_032634_2);

#define VkglTestCase_032635_1 "dEQP-GLES3.functional.fbo.blit.default_framebuffe"
#define VkglTestCase_032635_2 "r.rgba32f_nearest_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032635, VkglTestCase_032635_1, VkglTestCase_032635_2);

#define VkglTestCase_032636_1 "dEQP-GLES3.functional.fbo.blit.default_framebuff"
#define VkglTestCase_032636_2 "er.rgba32f_nearest_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032636, VkglTestCase_032636_1, VkglTestCase_032636_2);

#define VkglTestCase_032637_1 "dEQP-GLES3.functional.fbo.bli"
#define VkglTestCase_032637_2 "t.default_framebuffer.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032637, VkglTestCase_032637_1, VkglTestCase_032637_2);

#define VkglTestCase_032638_1 "dEQP-GLES3.functional.fbo.blit.default_frameb"
#define VkglTestCase_032638_2 "uffer.rgba16f_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032638, VkglTestCase_032638_1, VkglTestCase_032638_2);

#define VkglTestCase_032639_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032639_2 "buffer.rgba16f_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032639, VkglTestCase_032639_1, VkglTestCase_032639_2);

#define VkglTestCase_032640_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032640_2 "buffer.rgba16f_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032640, VkglTestCase_032640_1, VkglTestCase_032640_2);

#define VkglTestCase_032641_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032641_2 "ebuffer.rgba16f_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032641, VkglTestCase_032641_1, VkglTestCase_032641_2);

#define VkglTestCase_032642_1 "dEQP-GLES3.functional.fbo.blit.default_framebuff"
#define VkglTestCase_032642_2 "er.rgba16f_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032642, VkglTestCase_032642_1, VkglTestCase_032642_2);

#define VkglTestCase_032643_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032643_2 "fer.rgba16f_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032643, VkglTestCase_032643_1, VkglTestCase_032643_2);

#define VkglTestCase_032644_1 "dEQP-GLES3.functional.fbo.blit.d"
#define VkglTestCase_032644_2 "efault_framebuffer.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032644, VkglTestCase_032644_1, VkglTestCase_032644_2);

#define VkglTestCase_032645_1 "dEQP-GLES3.functional.fbo.blit.default_framebuff"
#define VkglTestCase_032645_2 "er.r11f_g11f_b10f_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032645, VkglTestCase_032645_1, VkglTestCase_032645_2);

#define VkglTestCase_032646_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032646_2 "fer.r11f_g11f_b10f_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032646, VkglTestCase_032646_1, VkglTestCase_032646_2);

#define VkglTestCase_032647_1 "dEQP-GLES3.functional.fbo.blit.default_framebuff"
#define VkglTestCase_032647_2 "er.r11f_g11f_b10f_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032647, VkglTestCase_032647_1, VkglTestCase_032647_2);

#define VkglTestCase_032648_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032648_2 "fer.r11f_g11f_b10f_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032648, VkglTestCase_032648_1, VkglTestCase_032648_2);

#define VkglTestCase_032649_1 "dEQP-GLES3.functional.fbo.blit.default_framebuffer.r"
#define VkglTestCase_032649_2 "11f_g11f_b10f_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032649, VkglTestCase_032649_1, VkglTestCase_032649_2);

#define VkglTestCase_032650_1 "dEQP-GLES3.functional.fbo.blit.default_framebuffer."
#define VkglTestCase_032650_2 "r11f_g11f_b10f_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032650, VkglTestCase_032650_1, VkglTestCase_032650_2);

#define VkglTestCase_032651_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032651_2 "it.default_framebuffer.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032651, VkglTestCase_032651_1, VkglTestCase_032651_2);

#define VkglTestCase_032652_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032652_2 "buffer.rg32f_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032652, VkglTestCase_032652_1, VkglTestCase_032652_2);

#define VkglTestCase_032653_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032653_2 "ebuffer.rg32f_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032653, VkglTestCase_032653_1, VkglTestCase_032653_2);

#define VkglTestCase_032654_1 "dEQP-GLES3.functional.fbo.blit.default_framebuff"
#define VkglTestCase_032654_2 "er.rg32f_nearest_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032654, VkglTestCase_032654_1, VkglTestCase_032654_2);

#define VkglTestCase_032655_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032655_2 "fer.rg32f_nearest_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032655, VkglTestCase_032655_1, VkglTestCase_032655_2);

#define VkglTestCase_032656_1 "dEQP-GLES3.functional.fbo.bl"
#define VkglTestCase_032656_2 "it.default_framebuffer.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032656, VkglTestCase_032656_1, VkglTestCase_032656_2);

#define VkglTestCase_032657_1 "dEQP-GLES3.functional.fbo.blit.default_frame"
#define VkglTestCase_032657_2 "buffer.rg16f_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032657, VkglTestCase_032657_1, VkglTestCase_032657_2);

#define VkglTestCase_032658_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032658_2 "ebuffer.rg16f_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032658, VkglTestCase_032658_1, VkglTestCase_032658_2);

#define VkglTestCase_032659_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032659_2 "ebuffer.rg16f_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032659, VkglTestCase_032659_1, VkglTestCase_032659_2);

#define VkglTestCase_032660_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032660_2 "mebuffer.rg16f_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032660, VkglTestCase_032660_1, VkglTestCase_032660_2);

#define VkglTestCase_032661_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032661_2 "fer.rg16f_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032661, VkglTestCase_032661_1, VkglTestCase_032661_2);

#define VkglTestCase_032662_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032662_2 "ffer.rg16f_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032662, VkglTestCase_032662_1, VkglTestCase_032662_2);

#define VkglTestCase_032663_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032663_2 "lit.default_framebuffer.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032663, VkglTestCase_032663_1, VkglTestCase_032663_2);

#define VkglTestCase_032664_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032664_2 "ebuffer.r32f_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032664, VkglTestCase_032664_1, VkglTestCase_032664_2);

#define VkglTestCase_032665_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032665_2 "mebuffer.r32f_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032665, VkglTestCase_032665_1, VkglTestCase_032665_2);

#define VkglTestCase_032666_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032666_2 "fer.r32f_nearest_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032666, VkglTestCase_032666_1, VkglTestCase_032666_2);

#define VkglTestCase_032667_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032667_2 "ffer.r32f_nearest_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032667, VkglTestCase_032667_1, VkglTestCase_032667_2);

#define VkglTestCase_032668_1 "dEQP-GLES3.functional.fbo.b"
#define VkglTestCase_032668_2 "lit.default_framebuffer.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032668, VkglTestCase_032668_1, VkglTestCase_032668_2);

#define VkglTestCase_032669_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032669_2 "ebuffer.r16f_nearest_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032669, VkglTestCase_032669_1, VkglTestCase_032669_2);

#define VkglTestCase_032670_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032670_2 "mebuffer.r16f_nearest_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032670, VkglTestCase_032670_1, VkglTestCase_032670_2);

#define VkglTestCase_032671_1 "dEQP-GLES3.functional.fbo.blit.default_fram"
#define VkglTestCase_032671_2 "ebuffer.r16f_linear_scale_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032671, VkglTestCase_032671_1, VkglTestCase_032671_2);

#define VkglTestCase_032672_1 "dEQP-GLES3.functional.fbo.blit.default_fra"
#define VkglTestCase_032672_2 "mebuffer.r16f_linear_scale_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032672, VkglTestCase_032672_1, VkglTestCase_032672_2);

#define VkglTestCase_032673_1 "dEQP-GLES3.functional.fbo.blit.default_framebuf"
#define VkglTestCase_032673_2 "fer.r16f_linear_out_of_bounds_blit_from_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032673, VkglTestCase_032673_1, VkglTestCase_032673_2);

#define VkglTestCase_032674_1 "dEQP-GLES3.functional.fbo.blit.default_framebu"
#define VkglTestCase_032674_2 "ffer.r16f_linear_out_of_bounds_blit_to_default"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032674, VkglTestCase_032674_1, VkglTestCase_032674_2);
