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

#define VkglTestCase_012843_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012843_2 "e.texture.stencil.depth_component_unsigned_short"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012843, VkglTestCase_012843_1, VkglTestCase_012843_2);

#define VkglTestCase_012844_1 "dEQP-GLES2.functional.fbo.completeness.renderab"
#define VkglTestCase_012844_2 "le.texture.stencil.depth_component_unsigned_int"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012844, VkglTestCase_012844_1, VkglTestCase_012844_2);

#define VkglTestCase_012845_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012845_2 "nderable.texture.stencil.red_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012845, VkglTestCase_012845_1, VkglTestCase_012845_2);

#define VkglTestCase_012846_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012846_2 "s.renderable.texture.stencil.red_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012846, VkglTestCase_012846_1, VkglTestCase_012846_2);

#define VkglTestCase_012847_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012847_2 "derable.texture.stencil.red_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012847, VkglTestCase_012847_1, VkglTestCase_012847_2);

#define VkglTestCase_012848_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012848_2 "nderable.texture.stencil.rgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012848, VkglTestCase_012848_1, VkglTestCase_012848_2);

#define VkglTestCase_012849_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012849_2 "s.renderable.texture.stencil.rgb_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012849, VkglTestCase_012849_1, VkglTestCase_012849_2);

#define VkglTestCase_012850_1 "dEQP-GLES2.functional.fbo.completeness.render"
#define VkglTestCase_012850_2 "able.texture.stencil.rgb_unsigned_short_5_6_5"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012850, VkglTestCase_012850_1, VkglTestCase_012850_2);

#define VkglTestCase_012851_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012851_2 "e.texture.stencil.rgb_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012851, VkglTestCase_012851_1, VkglTestCase_012851_2);

#define VkglTestCase_012852_1 "dEQP-GLES2.functional.fbo.completeness.renderable"
#define VkglTestCase_012852_2 ".texture.stencil.rgb_unsigned_int_10f_11f_11f_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012852, VkglTestCase_012852_1, VkglTestCase_012852_2);

#define VkglTestCase_012853_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012853_2 "derable.texture.stencil.rgb_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012853, VkglTestCase_012853_1, VkglTestCase_012853_2);

#define VkglTestCase_012854_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012854_2 "derable.texture.stencil.rgba_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012854, VkglTestCase_012854_1, VkglTestCase_012854_2);

#define VkglTestCase_012855_1 "dEQP-GLES2.functional.fbo.completeness"
#define VkglTestCase_012855_2 ".renderable.texture.stencil.rgba_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012855, VkglTestCase_012855_1, VkglTestCase_012855_2);

#define VkglTestCase_012856_1 "dEQP-GLES2.functional.fbo.completeness.rendera"
#define VkglTestCase_012856_2 "ble.texture.stencil.rgba_unsigned_short_4_4_4_4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012856, VkglTestCase_012856_1, VkglTestCase_012856_2);

#define VkglTestCase_012857_1 "dEQP-GLES2.functional.fbo.completeness.rendera"
#define VkglTestCase_012857_2 "ble.texture.stencil.rgba_unsigned_short_5_5_5_1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012857, VkglTestCase_012857_1, VkglTestCase_012857_2);

#define VkglTestCase_012858_1 "dEQP-GLES2.functional.fbo.completeness.renderable"
#define VkglTestCase_012858_2 ".texture.stencil.rgba_unsigned_int_2_10_10_10_rev"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012858, VkglTestCase_012858_1, VkglTestCase_012858_2);

#define VkglTestCase_012859_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012859_2 "derable.texture.stencil.rgba_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012859, VkglTestCase_012859_1, VkglTestCase_012859_2);

#define VkglTestCase_012860_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012860_2 "ess.renderable.texture.stencil.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012860, VkglTestCase_012860_1, VkglTestCase_012860_2);

#define VkglTestCase_012861_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012861_2 "ess.renderable.texture.stencil.rgb10"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012861, VkglTestCase_012861_1, VkglTestCase_012861_2);

#define VkglTestCase_012862_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012862_2 "ess.renderable.texture.stencil.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012862, VkglTestCase_012862_1, VkglTestCase_012862_2);

#define VkglTestCase_012863_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012863_2 "ss.renderable.texture.stencil.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012863, VkglTestCase_012863_1, VkglTestCase_012863_2);

#define VkglTestCase_012864_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012864_2 "ess.renderable.texture.stencil.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012864, VkglTestCase_012864_1, VkglTestCase_012864_2);

#define VkglTestCase_012865_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012865_2 "s.renderable.texture.stencil.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012865, VkglTestCase_012865_1, VkglTestCase_012865_2);

#define VkglTestCase_012866_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012866_2 "nderable.texture.stencil.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012866, VkglTestCase_012866_1, VkglTestCase_012866_2);

#define VkglTestCase_012867_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012867_2 "nderable.texture.stencil.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012867, VkglTestCase_012867_1, VkglTestCase_012867_2);

#define VkglTestCase_012868_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012868_2 "nderable.texture.stencil.depth_component32"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012868, VkglTestCase_012868_1, VkglTestCase_012868_2);

#define VkglTestCase_012869_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012869_2 "nderable.texture.stencil.rg_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012869, VkglTestCase_012869_1, VkglTestCase_012869_2);

#define VkglTestCase_012870_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012870_2 "s.renderable.texture.stencil.rg_float"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012870, VkglTestCase_012870_1, VkglTestCase_012870_2);

#define VkglTestCase_012871_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012871_2 "nderable.texture.stencil.rg_half_float_oes"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012871, VkglTestCase_012871_1, VkglTestCase_012871_2);

#define VkglTestCase_012872_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012872_2 "ness.renderable.texture.stencil.r8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012872, VkglTestCase_012872_1, VkglTestCase_012872_2);

#define VkglTestCase_012873_1 "dEQP-GLES2.functional.fbo.complete"
#define VkglTestCase_012873_2 "ness.renderable.texture.stencil.rg8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012873, VkglTestCase_012873_1, VkglTestCase_012873_2);

#define VkglTestCase_012874_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012874_2 "ess.renderable.texture.stencil.r16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012874, VkglTestCase_012874_1, VkglTestCase_012874_2);

#define VkglTestCase_012875_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012875_2 "ess.renderable.texture.stencil.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012875, VkglTestCase_012875_1, VkglTestCase_012875_2);

#define VkglTestCase_012876_1 "dEQP-GLES2.functional.fbo.completeness.renderabl"
#define VkglTestCase_012876_2 "e.texture.stencil.depth_stencil_unsigned_int_24_8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012876, VkglTestCase_012876_1, VkglTestCase_012876_2);

#define VkglTestCase_012877_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012877_2 "ss.renderable.texture.stencil.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012877, VkglTestCase_012877_1, VkglTestCase_012877_2);

#define VkglTestCase_012878_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012878_2 "ss.renderable.texture.stencil.rgb16f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012878, VkglTestCase_012878_1, VkglTestCase_012878_2);

#define VkglTestCase_012879_1 "dEQP-GLES2.functional.fbo.completeness.re"
#define VkglTestCase_012879_2 "nderable.texture.stencil.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012879, VkglTestCase_012879_1, VkglTestCase_012879_2);

#define VkglTestCase_012880_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012880_2 "enderable.texture.stencil.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012880, VkglTestCase_012880_1, VkglTestCase_012880_2);

#define VkglTestCase_012881_1 "dEQP-GLES2.functional.fbo.completeness.ren"
#define VkglTestCase_012881_2 "derable.texture.stencil.srgb_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012881, VkglTestCase_012881_1, VkglTestCase_012881_2);

#define VkglTestCase_012882_1 "dEQP-GLES2.functional.fbo.completen"
#define VkglTestCase_012882_2 "ess.renderable.texture.stencil.srgb8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012882, VkglTestCase_012882_1, VkglTestCase_012882_2);

#define VkglTestCase_012883_1 "dEQP-GLES2.functional.fbo.completeness.render"
#define VkglTestCase_012883_2 "able.texture.stencil.srgb_alpha_unsigned_byte"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012883, VkglTestCase_012883_1, VkglTestCase_012883_2);

#define VkglTestCase_012884_1 "dEQP-GLES2.functional.fbo.completeness."
#define VkglTestCase_012884_2 "renderable.texture.stencil.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012884, VkglTestCase_012884_1, VkglTestCase_012884_2);

#define VkglTestCase_012885_1 "dEQP-GLES2.functional.fbo.completeness.r"
#define VkglTestCase_012885_2 "enderable.texture.stencil.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012885, VkglTestCase_012885_1, VkglTestCase_012885_2);

#define VkglTestCase_012886_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012886_2 "ss.renderable.texture.stencil.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012886, VkglTestCase_012886_1, VkglTestCase_012886_2);

#define VkglTestCase_012887_1 "dEQP-GLES2.functional.fbo.completene"
#define VkglTestCase_012887_2 "ss.renderable.texture.stencil.sr8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012887, VkglTestCase_012887_1, VkglTestCase_012887_2);

#define VkglTestCase_012888_1 "dEQP-GLES2.functional.fbo.completenes"
#define VkglTestCase_012888_2 "s.renderable.texture.stencil.srg8_ext"
SHRINK_HWTEST_F(ActsDeqpgles20013TestSuite, TestCase_012888, VkglTestCase_012888_1, VkglTestCase_012888_2);
