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
#include "../ActsDeqpgles30040TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_039704_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039704_2 "enderbuffer.rgba8_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039704, VkglTestCase_039704_1, VkglTestCase_039704_2);

#define VkglTestCase_039705_1 "dEQP-GLES3.functional.pbo"
#define VkglTestCase_039705_2 ".renderbuffer.rgba8_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039705, VkglTestCase_039705_1, VkglTestCase_039705_2);

#define VkglTestCase_039706_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039706_2 "enderbuffer.rgba8i_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039706, VkglTestCase_039706_1, VkglTestCase_039706_2);

#define VkglTestCase_039707_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039707_2 "renderbuffer.rgba8i_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039707, VkglTestCase_039707_1, VkglTestCase_039707_2);

#define VkglTestCase_039708_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039708_2 "nderbuffer.rgba8ui_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039708, VkglTestCase_039708_1, VkglTestCase_039708_2);

#define VkglTestCase_039709_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039709_2 "renderbuffer.rgba8ui_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039709, VkglTestCase_039709_1, VkglTestCase_039709_2);

#define VkglTestCase_039710_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039710_2 "nderbuffer.rgba16f_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039710, VkglTestCase_039710_1, VkglTestCase_039710_2);

#define VkglTestCase_039711_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039711_2 "renderbuffer.rgba16f_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039711, VkglTestCase_039711_1, VkglTestCase_039711_2);

#define VkglTestCase_039712_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039712_2 "nderbuffer.rgba16i_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039712, VkglTestCase_039712_1, VkglTestCase_039712_2);

#define VkglTestCase_039713_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039713_2 "renderbuffer.rgba16i_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039713, VkglTestCase_039713_1, VkglTestCase_039713_2);

#define VkglTestCase_039714_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039714_2 "nderbuffer.rgba16ui_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039714, VkglTestCase_039714_1, VkglTestCase_039714_2);

#define VkglTestCase_039715_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039715_2 "enderbuffer.rgba16ui_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039715, VkglTestCase_039715_1, VkglTestCase_039715_2);

#define VkglTestCase_039716_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039716_2 "nderbuffer.rgba32f_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039716, VkglTestCase_039716_1, VkglTestCase_039716_2);

#define VkglTestCase_039717_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039717_2 "renderbuffer.rgba32f_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039717, VkglTestCase_039717_1, VkglTestCase_039717_2);

#define VkglTestCase_039718_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039718_2 "nderbuffer.rgba32i_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039718, VkglTestCase_039718_1, VkglTestCase_039718_2);

#define VkglTestCase_039719_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039719_2 "renderbuffer.rgba32i_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039719, VkglTestCase_039719_1, VkglTestCase_039719_2);

#define VkglTestCase_039720_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039720_2 "nderbuffer.rgba32ui_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039720, VkglTestCase_039720_1, VkglTestCase_039720_2);

#define VkglTestCase_039721_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039721_2 "enderbuffer.rgba32ui_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039721, VkglTestCase_039721_1, VkglTestCase_039721_2);

#define VkglTestCase_039722_1 "dEQP-GLES3.functional.pbo.rend"
#define VkglTestCase_039722_2 "erbuffer.srgb8_alpha8_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039722, VkglTestCase_039722_1, VkglTestCase_039722_2);

#define VkglTestCase_039723_1 "dEQP-GLES3.functional.pbo.ren"
#define VkglTestCase_039723_2 "derbuffer.srgb8_alpha8_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039723, VkglTestCase_039723_1, VkglTestCase_039723_2);

#define VkglTestCase_039724_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039724_2 "nderbuffer.rgb10_a2_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039724, VkglTestCase_039724_1, VkglTestCase_039724_2);

#define VkglTestCase_039725_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039725_2 "enderbuffer.rgb10_a2_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039725, VkglTestCase_039725_1, VkglTestCase_039725_2);

#define VkglTestCase_039726_1 "dEQP-GLES3.functional.pbo.ren"
#define VkglTestCase_039726_2 "derbuffer.rgb10_a2ui_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039726, VkglTestCase_039726_1, VkglTestCase_039726_2);

#define VkglTestCase_039727_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039727_2 "nderbuffer.rgb10_a2ui_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039727, VkglTestCase_039727_1, VkglTestCase_039727_2);

#define VkglTestCase_039728_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039728_2 "enderbuffer.rgba4_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039728, VkglTestCase_039728_1, VkglTestCase_039728_2);

#define VkglTestCase_039729_1 "dEQP-GLES3.functional.pbo"
#define VkglTestCase_039729_2 ".renderbuffer.rgba4_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039729, VkglTestCase_039729_1, VkglTestCase_039729_2);

#define VkglTestCase_039730_1 "dEQP-GLES3.functional.pbo.re"
#define VkglTestCase_039730_2 "nderbuffer.rgb5_a1_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039730, VkglTestCase_039730_1, VkglTestCase_039730_2);

#define VkglTestCase_039731_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039731_2 "renderbuffer.rgb5_a1_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039731, VkglTestCase_039731_1, VkglTestCase_039731_2);

#define VkglTestCase_039732_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039732_2 "renderbuffer.rgb8_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039732, VkglTestCase_039732_1, VkglTestCase_039732_2);

#define VkglTestCase_039733_1 "dEQP-GLES3.functional.pbo"
#define VkglTestCase_039733_2 ".renderbuffer.rgb8_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039733, VkglTestCase_039733_1, VkglTestCase_039733_2);

#define VkglTestCase_039734_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039734_2 "enderbuffer.rgb565_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039734, VkglTestCase_039734_1, VkglTestCase_039734_2);

#define VkglTestCase_039735_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039735_2 "renderbuffer.rgb565_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039735, VkglTestCase_039735_1, VkglTestCase_039735_2);

#define VkglTestCase_039736_1 "dEQP-GLES3.functional.pbo.rende"
#define VkglTestCase_039736_2 "rbuffer.r11f_g11f_b10f_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039736, VkglTestCase_039736_1, VkglTestCase_039736_2);

#define VkglTestCase_039737_1 "dEQP-GLES3.functional.pbo.rend"
#define VkglTestCase_039737_2 "erbuffer.r11f_g11f_b10f_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039737, VkglTestCase_039737_1, VkglTestCase_039737_2);

#define VkglTestCase_039738_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039738_2 "renderbuffer.rg8_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039738, VkglTestCase_039738_1, VkglTestCase_039738_2);

#define VkglTestCase_039739_1 "dEQP-GLES3.functional.pb"
#define VkglTestCase_039739_2 "o.renderbuffer.rg8_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039739, VkglTestCase_039739_1, VkglTestCase_039739_2);

#define VkglTestCase_039740_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039740_2 "renderbuffer.rg8i_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039740, VkglTestCase_039740_1, VkglTestCase_039740_2);

#define VkglTestCase_039741_1 "dEQP-GLES3.functional.pbo"
#define VkglTestCase_039741_2 ".renderbuffer.rg8i_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039741, VkglTestCase_039741_1, VkglTestCase_039741_2);

#define VkglTestCase_039742_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039742_2 "enderbuffer.rg8ui_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039742, VkglTestCase_039742_1, VkglTestCase_039742_2);

#define VkglTestCase_039743_1 "dEQP-GLES3.functional.pbo"
#define VkglTestCase_039743_2 ".renderbuffer.rg8ui_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039743, VkglTestCase_039743_1, VkglTestCase_039743_2);

#define VkglTestCase_039744_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039744_2 "enderbuffer.rg16f_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039744, VkglTestCase_039744_1, VkglTestCase_039744_2);

#define VkglTestCase_039745_1 "dEQP-GLES3.functional.pbo"
#define VkglTestCase_039745_2 ".renderbuffer.rg16f_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039745, VkglTestCase_039745_1, VkglTestCase_039745_2);

#define VkglTestCase_039746_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039746_2 "enderbuffer.rg16i_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039746, VkglTestCase_039746_1, VkglTestCase_039746_2);

#define VkglTestCase_039747_1 "dEQP-GLES3.functional.pbo"
#define VkglTestCase_039747_2 ".renderbuffer.rg16i_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039747, VkglTestCase_039747_1, VkglTestCase_039747_2);

#define VkglTestCase_039748_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039748_2 "enderbuffer.rg16ui_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039748, VkglTestCase_039748_1, VkglTestCase_039748_2);

#define VkglTestCase_039749_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039749_2 "renderbuffer.rg16ui_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039749, VkglTestCase_039749_1, VkglTestCase_039749_2);

#define VkglTestCase_039750_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039750_2 "enderbuffer.rg32f_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039750, VkglTestCase_039750_1, VkglTestCase_039750_2);

#define VkglTestCase_039751_1 "dEQP-GLES3.functional.pbo"
#define VkglTestCase_039751_2 ".renderbuffer.rg32f_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039751, VkglTestCase_039751_1, VkglTestCase_039751_2);

#define VkglTestCase_039752_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039752_2 "enderbuffer.rg32i_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039752, VkglTestCase_039752_1, VkglTestCase_039752_2);

#define VkglTestCase_039753_1 "dEQP-GLES3.functional.pbo"
#define VkglTestCase_039753_2 ".renderbuffer.rg32i_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039753, VkglTestCase_039753_1, VkglTestCase_039753_2);

#define VkglTestCase_039754_1 "dEQP-GLES3.functional.pbo.r"
#define VkglTestCase_039754_2 "enderbuffer.rg32ui_triangles"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039754, VkglTestCase_039754_1, VkglTestCase_039754_2);

#define VkglTestCase_039755_1 "dEQP-GLES3.functional.pbo."
#define VkglTestCase_039755_2 "renderbuffer.rg32ui_clears"
SHRINK_HWTEST_F(ActsDeqpgles30040TestSuite, TestCase_039755, VkglTestCase_039755_1, VkglTestCase_039755_2);
