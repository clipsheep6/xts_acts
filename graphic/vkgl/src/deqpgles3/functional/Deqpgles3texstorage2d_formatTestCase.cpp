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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026708_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026708_2 "cation.texstorage2d.format.rgba32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026708, VkglTestCase_026708_1, VkglTestCase_026708_2);

#define VkglTestCase_026709_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026709_2 "ation.texstorage2d.format.rgba32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026709, VkglTestCase_026709_1, VkglTestCase_026709_2);

#define VkglTestCase_026710_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026710_2 "cation.texstorage2d.format.rgba32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026710, VkglTestCase_026710_1, VkglTestCase_026710_2);

#define VkglTestCase_026711_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026711_2 "ation.texstorage2d.format.rgba32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026711, VkglTestCase_026711_1, VkglTestCase_026711_2);

#define VkglTestCase_026712_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026712_2 "cation.texstorage2d.format.rgba32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026712, VkglTestCase_026712_1, VkglTestCase_026712_2);

#define VkglTestCase_026713_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026713_2 "ation.texstorage2d.format.rgba32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026713, VkglTestCase_026713_1, VkglTestCase_026713_2);

#define VkglTestCase_026714_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026714_2 "cation.texstorage2d.format.rgba16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026714, VkglTestCase_026714_1, VkglTestCase_026714_2);

#define VkglTestCase_026715_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026715_2 "ation.texstorage2d.format.rgba16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026715, VkglTestCase_026715_1, VkglTestCase_026715_2);

#define VkglTestCase_026716_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026716_2 "cation.texstorage2d.format.rgba16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026716, VkglTestCase_026716_1, VkglTestCase_026716_2);

#define VkglTestCase_026717_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026717_2 "ation.texstorage2d.format.rgba16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026717, VkglTestCase_026717_1, VkglTestCase_026717_2);

#define VkglTestCase_026718_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026718_2 "cation.texstorage2d.format.rgba16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026718, VkglTestCase_026718_1, VkglTestCase_026718_2);

#define VkglTestCase_026719_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026719_2 "ation.texstorage2d.format.rgba16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026719, VkglTestCase_026719_1, VkglTestCase_026719_2);

#define VkglTestCase_026720_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026720_2 "ication.texstorage2d.format.rgba8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026720, VkglTestCase_026720_1, VkglTestCase_026720_2);

#define VkglTestCase_026721_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026721_2 "cation.texstorage2d.format.rgba8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026721, VkglTestCase_026721_1, VkglTestCase_026721_2);

#define VkglTestCase_026722_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026722_2 "ication.texstorage2d.format.rgba8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026722, VkglTestCase_026722_1, VkglTestCase_026722_2);

#define VkglTestCase_026723_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026723_2 "cation.texstorage2d.format.rgba8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026723, VkglTestCase_026723_1, VkglTestCase_026723_2);

#define VkglTestCase_026724_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026724_2 "cation.texstorage2d.format.rgba8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026724, VkglTestCase_026724_1, VkglTestCase_026724_2);

#define VkglTestCase_026725_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026725_2 "ation.texstorage2d.format.rgba8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026725, VkglTestCase_026725_1, VkglTestCase_026725_2);

#define VkglTestCase_026726_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026726_2 "tion.texstorage2d.format.srgb8_alpha8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026726, VkglTestCase_026726_1, VkglTestCase_026726_2);

#define VkglTestCase_026727_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026727_2 "ion.texstorage2d.format.srgb8_alpha8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026727, VkglTestCase_026727_1, VkglTestCase_026727_2);

#define VkglTestCase_026728_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026728_2 "cation.texstorage2d.format.rgb10_a2_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026728, VkglTestCase_026728_1, VkglTestCase_026728_2);

#define VkglTestCase_026729_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026729_2 "ation.texstorage2d.format.rgb10_a2_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026729, VkglTestCase_026729_1, VkglTestCase_026729_2);

#define VkglTestCase_026730_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026730_2 "ation.texstorage2d.format.rgb10_a2ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026730, VkglTestCase_026730_1, VkglTestCase_026730_2);

#define VkglTestCase_026731_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026731_2 "tion.texstorage2d.format.rgb10_a2ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026731, VkglTestCase_026731_1, VkglTestCase_026731_2);

#define VkglTestCase_026732_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026732_2 "ication.texstorage2d.format.rgba4_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026732, VkglTestCase_026732_1, VkglTestCase_026732_2);

#define VkglTestCase_026733_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026733_2 "cation.texstorage2d.format.rgba4_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026733, VkglTestCase_026733_1, VkglTestCase_026733_2);

#define VkglTestCase_026734_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026734_2 "cation.texstorage2d.format.rgb5_a1_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026734, VkglTestCase_026734_1, VkglTestCase_026734_2);

#define VkglTestCase_026735_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026735_2 "ation.texstorage2d.format.rgb5_a1_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026735, VkglTestCase_026735_1, VkglTestCase_026735_2);

#define VkglTestCase_026736_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026736_2 "tion.texstorage2d.format.rgba8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026736, VkglTestCase_026736_1, VkglTestCase_026736_2);

#define VkglTestCase_026737_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026737_2 "ion.texstorage2d.format.rgba8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026737, VkglTestCase_026737_1, VkglTestCase_026737_2);

#define VkglTestCase_026738_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026738_2 "fication.texstorage2d.format.rgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026738, VkglTestCase_026738_1, VkglTestCase_026738_2);

#define VkglTestCase_026739_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026739_2 "ication.texstorage2d.format.rgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026739, VkglTestCase_026739_1, VkglTestCase_026739_2);

#define VkglTestCase_026740_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026740_2 "ication.texstorage2d.format.rgb565_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026740, VkglTestCase_026740_1, VkglTestCase_026740_2);

#define VkglTestCase_026741_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026741_2 "cation.texstorage2d.format.rgb565_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026741, VkglTestCase_026741_1, VkglTestCase_026741_2);

#define VkglTestCase_026742_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026742_2 "ion.texstorage2d.format.r11f_g11f_b10f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026742, VkglTestCase_026742_1, VkglTestCase_026742_2);

#define VkglTestCase_026743_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026743_2 "on.texstorage2d.format.r11f_g11f_b10f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026743, VkglTestCase_026743_1, VkglTestCase_026743_2);

#define VkglTestCase_026744_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026744_2 "ication.texstorage2d.format.rgb32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026744, VkglTestCase_026744_1, VkglTestCase_026744_2);

#define VkglTestCase_026745_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026745_2 "cation.texstorage2d.format.rgb32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026745, VkglTestCase_026745_1, VkglTestCase_026745_2);

#define VkglTestCase_026746_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026746_2 "ication.texstorage2d.format.rgb32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026746, VkglTestCase_026746_1, VkglTestCase_026746_2);

#define VkglTestCase_026747_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026747_2 "cation.texstorage2d.format.rgb32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026747, VkglTestCase_026747_1, VkglTestCase_026747_2);

#define VkglTestCase_026748_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026748_2 "cation.texstorage2d.format.rgb32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026748, VkglTestCase_026748_1, VkglTestCase_026748_2);

#define VkglTestCase_026749_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026749_2 "ation.texstorage2d.format.rgb32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026749, VkglTestCase_026749_1, VkglTestCase_026749_2);

#define VkglTestCase_026750_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026750_2 "ication.texstorage2d.format.rgb16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026750, VkglTestCase_026750_1, VkglTestCase_026750_2);

#define VkglTestCase_026751_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026751_2 "cation.texstorage2d.format.rgb16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026751, VkglTestCase_026751_1, VkglTestCase_026751_2);

#define VkglTestCase_026752_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026752_2 "ication.texstorage2d.format.rgb16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026752, VkglTestCase_026752_1, VkglTestCase_026752_2);

#define VkglTestCase_026753_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026753_2 "cation.texstorage2d.format.rgb16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026753, VkglTestCase_026753_1, VkglTestCase_026753_2);

#define VkglTestCase_026754_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026754_2 "cation.texstorage2d.format.rgb16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026754, VkglTestCase_026754_1, VkglTestCase_026754_2);

#define VkglTestCase_026755_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026755_2 "ation.texstorage2d.format.rgb16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026755, VkglTestCase_026755_1, VkglTestCase_026755_2);

#define VkglTestCase_026756_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026756_2 "ation.texstorage2d.format.rgb8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026756, VkglTestCase_026756_1, VkglTestCase_026756_2);

#define VkglTestCase_026757_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026757_2 "tion.texstorage2d.format.rgb8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026757, VkglTestCase_026757_1, VkglTestCase_026757_2);

#define VkglTestCase_026758_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026758_2 "ication.texstorage2d.format.rgb8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026758, VkglTestCase_026758_1, VkglTestCase_026758_2);

#define VkglTestCase_026759_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026759_2 "cation.texstorage2d.format.rgb8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026759, VkglTestCase_026759_1, VkglTestCase_026759_2);

#define VkglTestCase_026760_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026760_2 "ication.texstorage2d.format.rgb8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026760, VkglTestCase_026760_1, VkglTestCase_026760_2);

#define VkglTestCase_026761_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026761_2 "cation.texstorage2d.format.rgb8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026761, VkglTestCase_026761_1, VkglTestCase_026761_2);

#define VkglTestCase_026762_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026762_2 "ication.texstorage2d.format.srgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026762, VkglTestCase_026762_1, VkglTestCase_026762_2);

#define VkglTestCase_026763_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026763_2 "cation.texstorage2d.format.srgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026763, VkglTestCase_026763_1, VkglTestCase_026763_2);

#define VkglTestCase_026764_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026764_2 "cation.texstorage2d.format.rgb9_e5_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026764, VkglTestCase_026764_1, VkglTestCase_026764_2);

#define VkglTestCase_026765_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026765_2 "ation.texstorage2d.format.rgb9_e5_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026765, VkglTestCase_026765_1, VkglTestCase_026765_2);

#define VkglTestCase_026766_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026766_2 "ication.texstorage2d.format.rg32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026766, VkglTestCase_026766_1, VkglTestCase_026766_2);

#define VkglTestCase_026767_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026767_2 "cation.texstorage2d.format.rg32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026767, VkglTestCase_026767_1, VkglTestCase_026767_2);

#define VkglTestCase_026768_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026768_2 "ication.texstorage2d.format.rg32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026768, VkglTestCase_026768_1, VkglTestCase_026768_2);

#define VkglTestCase_026769_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026769_2 "cation.texstorage2d.format.rg32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026769, VkglTestCase_026769_1, VkglTestCase_026769_2);

#define VkglTestCase_026770_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026770_2 "ication.texstorage2d.format.rg32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026770, VkglTestCase_026770_1, VkglTestCase_026770_2);

#define VkglTestCase_026771_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026771_2 "cation.texstorage2d.format.rg32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026771, VkglTestCase_026771_1, VkglTestCase_026771_2);

#define VkglTestCase_026772_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026772_2 "ication.texstorage2d.format.rg16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026772, VkglTestCase_026772_1, VkglTestCase_026772_2);

#define VkglTestCase_026773_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026773_2 "cation.texstorage2d.format.rg16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026773, VkglTestCase_026773_1, VkglTestCase_026773_2);

#define VkglTestCase_026774_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026774_2 "ication.texstorage2d.format.rg16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026774, VkglTestCase_026774_1, VkglTestCase_026774_2);

#define VkglTestCase_026775_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026775_2 "cation.texstorage2d.format.rg16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026775, VkglTestCase_026775_1, VkglTestCase_026775_2);

#define VkglTestCase_026776_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026776_2 "ication.texstorage2d.format.rg16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026776, VkglTestCase_026776_1, VkglTestCase_026776_2);

#define VkglTestCase_026777_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026777_2 "cation.texstorage2d.format.rg16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026777, VkglTestCase_026777_1, VkglTestCase_026777_2);

#define VkglTestCase_026778_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026778_2 "fication.texstorage2d.format.rg8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026778, VkglTestCase_026778_1, VkglTestCase_026778_2);

#define VkglTestCase_026779_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026779_2 "ication.texstorage2d.format.rg8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026779, VkglTestCase_026779_1, VkglTestCase_026779_2);

#define VkglTestCase_026780_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026780_2 "fication.texstorage2d.format.rg8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026780, VkglTestCase_026780_1, VkglTestCase_026780_2);

#define VkglTestCase_026781_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026781_2 "ication.texstorage2d.format.rg8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026781, VkglTestCase_026781_1, VkglTestCase_026781_2);

#define VkglTestCase_026782_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026782_2 "ication.texstorage2d.format.rg8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026782, VkglTestCase_026782_1, VkglTestCase_026782_2);

#define VkglTestCase_026783_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026783_2 "cation.texstorage2d.format.rg8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026783, VkglTestCase_026783_1, VkglTestCase_026783_2);

#define VkglTestCase_026784_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026784_2 "ation.texstorage2d.format.rg8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026784, VkglTestCase_026784_1, VkglTestCase_026784_2);

#define VkglTestCase_026785_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026785_2 "tion.texstorage2d.format.rg8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026785, VkglTestCase_026785_1, VkglTestCase_026785_2);

#define VkglTestCase_026786_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026786_2 "fication.texstorage2d.format.r32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026786, VkglTestCase_026786_1, VkglTestCase_026786_2);

#define VkglTestCase_026787_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026787_2 "ication.texstorage2d.format.r32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026787, VkglTestCase_026787_1, VkglTestCase_026787_2);

#define VkglTestCase_026788_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026788_2 "fication.texstorage2d.format.r32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026788, VkglTestCase_026788_1, VkglTestCase_026788_2);

#define VkglTestCase_026789_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026789_2 "ication.texstorage2d.format.r32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026789, VkglTestCase_026789_1, VkglTestCase_026789_2);

#define VkglTestCase_026790_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026790_2 "ication.texstorage2d.format.r32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026790, VkglTestCase_026790_1, VkglTestCase_026790_2);

#define VkglTestCase_026791_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026791_2 "cation.texstorage2d.format.r32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026791, VkglTestCase_026791_1, VkglTestCase_026791_2);

#define VkglTestCase_026792_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026792_2 "fication.texstorage2d.format.r16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026792, VkglTestCase_026792_1, VkglTestCase_026792_2);

#define VkglTestCase_026793_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026793_2 "ication.texstorage2d.format.r16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026793, VkglTestCase_026793_1, VkglTestCase_026793_2);

#define VkglTestCase_026794_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026794_2 "fication.texstorage2d.format.r16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026794, VkglTestCase_026794_1, VkglTestCase_026794_2);

#define VkglTestCase_026795_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026795_2 "ication.texstorage2d.format.r16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026795, VkglTestCase_026795_1, VkglTestCase_026795_2);

#define VkglTestCase_026796_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026796_2 "ication.texstorage2d.format.r16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026796, VkglTestCase_026796_1, VkglTestCase_026796_2);

#define VkglTestCase_026797_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026797_2 "cation.texstorage2d.format.r16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026797, VkglTestCase_026797_1, VkglTestCase_026797_2);

#define VkglTestCase_026798_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026798_2 "ification.texstorage2d.format.r8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026798, VkglTestCase_026798_1, VkglTestCase_026798_2);

#define VkglTestCase_026799_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026799_2 "fication.texstorage2d.format.r8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026799, VkglTestCase_026799_1, VkglTestCase_026799_2);

#define VkglTestCase_026800_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026800_2 "fication.texstorage2d.format.r8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026800, VkglTestCase_026800_1, VkglTestCase_026800_2);

#define VkglTestCase_026801_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026801_2 "ication.texstorage2d.format.r8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026801, VkglTestCase_026801_1, VkglTestCase_026801_2);

#define VkglTestCase_026802_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026802_2 "fication.texstorage2d.format.r8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026802, VkglTestCase_026802_1, VkglTestCase_026802_2);

#define VkglTestCase_026803_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026803_2 "ication.texstorage2d.format.r8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026803, VkglTestCase_026803_1, VkglTestCase_026803_2);

#define VkglTestCase_026804_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026804_2 "cation.texstorage2d.format.r8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026804, VkglTestCase_026804_1, VkglTestCase_026804_2);

#define VkglTestCase_026805_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026805_2 "ation.texstorage2d.format.r8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026805, VkglTestCase_026805_1, VkglTestCase_026805_2);

#define VkglTestCase_026806_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026806_2 "n.texstorage2d.format.depth_component32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026806, VkglTestCase_026806_1, VkglTestCase_026806_2);

#define VkglTestCase_026807_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026807_2 ".texstorage2d.format.depth_component32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026807, VkglTestCase_026807_1, VkglTestCase_026807_2);

#define VkglTestCase_026808_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026808_2 "n.texstorage2d.format.depth_component24_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026808, VkglTestCase_026808_1, VkglTestCase_026808_2);

#define VkglTestCase_026809_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026809_2 ".texstorage2d.format.depth_component24_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026809, VkglTestCase_026809_1, VkglTestCase_026809_2);

#define VkglTestCase_026810_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026810_2 "n.texstorage2d.format.depth_component16_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026810, VkglTestCase_026810_1, VkglTestCase_026810_2);

#define VkglTestCase_026811_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026811_2 ".texstorage2d.format.depth_component16_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026811, VkglTestCase_026811_1, VkglTestCase_026811_2);

#define VkglTestCase_026812_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026812_2 "n.texstorage2d.format.depth32f_stencil8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026812, VkglTestCase_026812_1, VkglTestCase_026812_2);

#define VkglTestCase_026813_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026813_2 ".texstorage2d.format.depth32f_stencil8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026813, VkglTestCase_026813_1, VkglTestCase_026813_2);

#define VkglTestCase_026814_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026814_2 "on.texstorage2d.format.depth24_stencil8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026814, VkglTestCase_026814_1, VkglTestCase_026814_2);

#define VkglTestCase_026815_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026815_2 "n.texstorage2d.format.depth24_stencil8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026815, VkglTestCase_026815_1, VkglTestCase_026815_2);
