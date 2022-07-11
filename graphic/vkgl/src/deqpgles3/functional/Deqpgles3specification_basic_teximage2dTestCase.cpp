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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025712_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025712_2 "fication.basic_teximage2d.rgba32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025712, VkglTestCase_025712_1, VkglTestCase_025712_2);

#define VkglTestCase_025713_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025713_2 "ication.basic_teximage2d.rgba32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025713, VkglTestCase_025713_1, VkglTestCase_025713_2);

#define VkglTestCase_025714_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025714_2 "fication.basic_teximage2d.rgba32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025714, VkglTestCase_025714_1, VkglTestCase_025714_2);

#define VkglTestCase_025715_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025715_2 "ication.basic_teximage2d.rgba32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025715, VkglTestCase_025715_1, VkglTestCase_025715_2);

#define VkglTestCase_025716_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025716_2 "ication.basic_teximage2d.rgba32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025716, VkglTestCase_025716_1, VkglTestCase_025716_2);

#define VkglTestCase_025717_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025717_2 "cation.basic_teximage2d.rgba32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025717, VkglTestCase_025717_1, VkglTestCase_025717_2);

#define VkglTestCase_025718_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025718_2 "fication.basic_teximage2d.rgba16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025718, VkglTestCase_025718_1, VkglTestCase_025718_2);

#define VkglTestCase_025719_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025719_2 "ication.basic_teximage2d.rgba16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025719, VkglTestCase_025719_1, VkglTestCase_025719_2);

#define VkglTestCase_025720_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025720_2 "fication.basic_teximage2d.rgba16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025720, VkglTestCase_025720_1, VkglTestCase_025720_2);

#define VkglTestCase_025721_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025721_2 "ication.basic_teximage2d.rgba16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025721, VkglTestCase_025721_1, VkglTestCase_025721_2);

#define VkglTestCase_025722_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025722_2 "ication.basic_teximage2d.rgba16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025722, VkglTestCase_025722_1, VkglTestCase_025722_2);

#define VkglTestCase_025723_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025723_2 "cation.basic_teximage2d.rgba16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025723, VkglTestCase_025723_1, VkglTestCase_025723_2);

#define VkglTestCase_025724_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025724_2 "ification.basic_teximage2d.rgba8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025724, VkglTestCase_025724_1, VkglTestCase_025724_2);

#define VkglTestCase_025725_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025725_2 "fication.basic_teximage2d.rgba8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025725, VkglTestCase_025725_1, VkglTestCase_025725_2);

#define VkglTestCase_025726_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025726_2 "fication.basic_teximage2d.rgba8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025726, VkglTestCase_025726_1, VkglTestCase_025726_2);

#define VkglTestCase_025727_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025727_2 "ication.basic_teximage2d.rgba8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025727, VkglTestCase_025727_1, VkglTestCase_025727_2);

#define VkglTestCase_025728_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025728_2 "fication.basic_teximage2d.rgba8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025728, VkglTestCase_025728_1, VkglTestCase_025728_2);

#define VkglTestCase_025729_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025729_2 "ication.basic_teximage2d.rgba8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025729, VkglTestCase_025729_1, VkglTestCase_025729_2);

#define VkglTestCase_025730_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025730_2 "ation.basic_teximage2d.srgb8_alpha8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025730, VkglTestCase_025730_1, VkglTestCase_025730_2);

#define VkglTestCase_025731_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025731_2 "tion.basic_teximage2d.srgb8_alpha8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025731, VkglTestCase_025731_1, VkglTestCase_025731_2);

#define VkglTestCase_025732_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025732_2 "ication.basic_teximage2d.rgb10_a2_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025732, VkglTestCase_025732_1, VkglTestCase_025732_2);

#define VkglTestCase_025733_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025733_2 "cation.basic_teximage2d.rgb10_a2_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025733, VkglTestCase_025733_1, VkglTestCase_025733_2);

#define VkglTestCase_025734_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025734_2 "cation.basic_teximage2d.rgb10_a2ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025734, VkglTestCase_025734_1, VkglTestCase_025734_2);

#define VkglTestCase_025735_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025735_2 "ation.basic_teximage2d.rgb10_a2ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025735, VkglTestCase_025735_1, VkglTestCase_025735_2);

#define VkglTestCase_025736_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025736_2 "ification.basic_teximage2d.rgba4_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025736, VkglTestCase_025736_1, VkglTestCase_025736_2);

#define VkglTestCase_025737_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025737_2 "fication.basic_teximage2d.rgba4_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025737, VkglTestCase_025737_1, VkglTestCase_025737_2);

#define VkglTestCase_025738_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025738_2 "fication.basic_teximage2d.rgb5_a1_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025738, VkglTestCase_025738_1, VkglTestCase_025738_2);

#define VkglTestCase_025739_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025739_2 "ication.basic_teximage2d.rgb5_a1_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025739, VkglTestCase_025739_1, VkglTestCase_025739_2);

#define VkglTestCase_025740_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025740_2 "cation.basic_teximage2d.rgba8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025740, VkglTestCase_025740_1, VkglTestCase_025740_2);

#define VkglTestCase_025741_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025741_2 "ation.basic_teximage2d.rgba8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025741, VkglTestCase_025741_1, VkglTestCase_025741_2);

#define VkglTestCase_025742_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025742_2 "ification.basic_teximage2d.rgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025742, VkglTestCase_025742_1, VkglTestCase_025742_2);

#define VkglTestCase_025743_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025743_2 "fication.basic_teximage2d.rgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025743, VkglTestCase_025743_1, VkglTestCase_025743_2);

#define VkglTestCase_025744_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025744_2 "fication.basic_teximage2d.rgb565_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025744, VkglTestCase_025744_1, VkglTestCase_025744_2);

#define VkglTestCase_025745_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025745_2 "ication.basic_teximage2d.rgb565_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025745, VkglTestCase_025745_1, VkglTestCase_025745_2);

#define VkglTestCase_025746_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_025746_2 "tion.basic_teximage2d.r11f_g11f_b10f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025746, VkglTestCase_025746_1, VkglTestCase_025746_2);

#define VkglTestCase_025747_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_025747_2 "ion.basic_teximage2d.r11f_g11f_b10f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025747, VkglTestCase_025747_1, VkglTestCase_025747_2);

#define VkglTestCase_025748_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025748_2 "fication.basic_teximage2d.rgb32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025748, VkglTestCase_025748_1, VkglTestCase_025748_2);

#define VkglTestCase_025749_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025749_2 "ication.basic_teximage2d.rgb32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025749, VkglTestCase_025749_1, VkglTestCase_025749_2);

#define VkglTestCase_025750_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025750_2 "fication.basic_teximage2d.rgb32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025750, VkglTestCase_025750_1, VkglTestCase_025750_2);

#define VkglTestCase_025751_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025751_2 "ication.basic_teximage2d.rgb32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025751, VkglTestCase_025751_1, VkglTestCase_025751_2);

#define VkglTestCase_025752_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025752_2 "fication.basic_teximage2d.rgb32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025752, VkglTestCase_025752_1, VkglTestCase_025752_2);

#define VkglTestCase_025753_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025753_2 "ication.basic_teximage2d.rgb32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025753, VkglTestCase_025753_1, VkglTestCase_025753_2);

#define VkglTestCase_025754_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025754_2 "fication.basic_teximage2d.rgb16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025754, VkglTestCase_025754_1, VkglTestCase_025754_2);

#define VkglTestCase_025755_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025755_2 "ication.basic_teximage2d.rgb16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025755, VkglTestCase_025755_1, VkglTestCase_025755_2);

#define VkglTestCase_025756_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025756_2 "fication.basic_teximage2d.rgb16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025756, VkglTestCase_025756_1, VkglTestCase_025756_2);

#define VkglTestCase_025757_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025757_2 "ication.basic_teximage2d.rgb16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025757, VkglTestCase_025757_1, VkglTestCase_025757_2);

#define VkglTestCase_025758_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025758_2 "fication.basic_teximage2d.rgb16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025758, VkglTestCase_025758_1, VkglTestCase_025758_2);

#define VkglTestCase_025759_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025759_2 "ication.basic_teximage2d.rgb16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025759, VkglTestCase_025759_1, VkglTestCase_025759_2);

#define VkglTestCase_025760_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025760_2 "cation.basic_teximage2d.rgb8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025760, VkglTestCase_025760_1, VkglTestCase_025760_2);

#define VkglTestCase_025761_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_025761_2 "ation.basic_teximage2d.rgb8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025761, VkglTestCase_025761_1, VkglTestCase_025761_2);

#define VkglTestCase_025762_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025762_2 "ification.basic_teximage2d.rgb8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025762, VkglTestCase_025762_1, VkglTestCase_025762_2);

#define VkglTestCase_025763_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025763_2 "fication.basic_teximage2d.rgb8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025763, VkglTestCase_025763_1, VkglTestCase_025763_2);

#define VkglTestCase_025764_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025764_2 "fication.basic_teximage2d.rgb8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025764, VkglTestCase_025764_1, VkglTestCase_025764_2);

#define VkglTestCase_025765_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025765_2 "ication.basic_teximage2d.rgb8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025765, VkglTestCase_025765_1, VkglTestCase_025765_2);

#define VkglTestCase_025766_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025766_2 "ification.basic_teximage2d.srgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025766, VkglTestCase_025766_1, VkglTestCase_025766_2);

#define VkglTestCase_025767_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025767_2 "fication.basic_teximage2d.srgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025767, VkglTestCase_025767_1, VkglTestCase_025767_2);

#define VkglTestCase_025768_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025768_2 "fication.basic_teximage2d.rgb9_e5_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025768, VkglTestCase_025768_1, VkglTestCase_025768_2);

#define VkglTestCase_025769_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025769_2 "ication.basic_teximage2d.rgb9_e5_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025769, VkglTestCase_025769_1, VkglTestCase_025769_2);

#define VkglTestCase_025770_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025770_2 "ification.basic_teximage2d.rg32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025770, VkglTestCase_025770_1, VkglTestCase_025770_2);

#define VkglTestCase_025771_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025771_2 "fication.basic_teximage2d.rg32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025771, VkglTestCase_025771_1, VkglTestCase_025771_2);

#define VkglTestCase_025772_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025772_2 "ification.basic_teximage2d.rg32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025772, VkglTestCase_025772_1, VkglTestCase_025772_2);

#define VkglTestCase_025773_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025773_2 "fication.basic_teximage2d.rg32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025773, VkglTestCase_025773_1, VkglTestCase_025773_2);

#define VkglTestCase_025774_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025774_2 "fication.basic_teximage2d.rg32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025774, VkglTestCase_025774_1, VkglTestCase_025774_2);

#define VkglTestCase_025775_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025775_2 "ication.basic_teximage2d.rg32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025775, VkglTestCase_025775_1, VkglTestCase_025775_2);

#define VkglTestCase_025776_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025776_2 "ification.basic_teximage2d.rg16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025776, VkglTestCase_025776_1, VkglTestCase_025776_2);

#define VkglTestCase_025777_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025777_2 "fication.basic_teximage2d.rg16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025777, VkglTestCase_025777_1, VkglTestCase_025777_2);

#define VkglTestCase_025778_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025778_2 "ification.basic_teximage2d.rg16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025778, VkglTestCase_025778_1, VkglTestCase_025778_2);

#define VkglTestCase_025779_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025779_2 "fication.basic_teximage2d.rg16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025779, VkglTestCase_025779_1, VkglTestCase_025779_2);

#define VkglTestCase_025780_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025780_2 "fication.basic_teximage2d.rg16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025780, VkglTestCase_025780_1, VkglTestCase_025780_2);

#define VkglTestCase_025781_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025781_2 "ication.basic_teximage2d.rg16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025781, VkglTestCase_025781_1, VkglTestCase_025781_2);

#define VkglTestCase_025782_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025782_2 "cification.basic_teximage2d.rg8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025782, VkglTestCase_025782_1, VkglTestCase_025782_2);

#define VkglTestCase_025783_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025783_2 "ification.basic_teximage2d.rg8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025783, VkglTestCase_025783_1, VkglTestCase_025783_2);

#define VkglTestCase_025784_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025784_2 "ification.basic_teximage2d.rg8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025784, VkglTestCase_025784_1, VkglTestCase_025784_2);

#define VkglTestCase_025785_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025785_2 "fication.basic_teximage2d.rg8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025785, VkglTestCase_025785_1, VkglTestCase_025785_2);

#define VkglTestCase_025786_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025786_2 "ification.basic_teximage2d.rg8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025786, VkglTestCase_025786_1, VkglTestCase_025786_2);

#define VkglTestCase_025787_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025787_2 "fication.basic_teximage2d.rg8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025787, VkglTestCase_025787_1, VkglTestCase_025787_2);

#define VkglTestCase_025788_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025788_2 "ication.basic_teximage2d.rg8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025788, VkglTestCase_025788_1, VkglTestCase_025788_2);

#define VkglTestCase_025789_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025789_2 "cation.basic_teximage2d.rg8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025789, VkglTestCase_025789_1, VkglTestCase_025789_2);

#define VkglTestCase_025790_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025790_2 "ification.basic_teximage2d.r32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025790, VkglTestCase_025790_1, VkglTestCase_025790_2);

#define VkglTestCase_025791_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025791_2 "fication.basic_teximage2d.r32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025791, VkglTestCase_025791_1, VkglTestCase_025791_2);

#define VkglTestCase_025792_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025792_2 "ification.basic_teximage2d.r32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025792, VkglTestCase_025792_1, VkglTestCase_025792_2);

#define VkglTestCase_025793_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025793_2 "fication.basic_teximage2d.r32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025793, VkglTestCase_025793_1, VkglTestCase_025793_2);

#define VkglTestCase_025794_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025794_2 "ification.basic_teximage2d.r32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025794, VkglTestCase_025794_1, VkglTestCase_025794_2);

#define VkglTestCase_025795_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025795_2 "fication.basic_teximage2d.r32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025795, VkglTestCase_025795_1, VkglTestCase_025795_2);

#define VkglTestCase_025796_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025796_2 "ification.basic_teximage2d.r16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025796, VkglTestCase_025796_1, VkglTestCase_025796_2);

#define VkglTestCase_025797_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025797_2 "fication.basic_teximage2d.r16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025797, VkglTestCase_025797_1, VkglTestCase_025797_2);

#define VkglTestCase_025798_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025798_2 "ification.basic_teximage2d.r16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025798, VkglTestCase_025798_1, VkglTestCase_025798_2);

#define VkglTestCase_025799_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025799_2 "fication.basic_teximage2d.r16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025799, VkglTestCase_025799_1, VkglTestCase_025799_2);

#define VkglTestCase_025800_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025800_2 "ification.basic_teximage2d.r16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025800, VkglTestCase_025800_1, VkglTestCase_025800_2);

#define VkglTestCase_025801_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025801_2 "fication.basic_teximage2d.r16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025801, VkglTestCase_025801_1, VkglTestCase_025801_2);

#define VkglTestCase_025802_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025802_2 "cification.basic_teximage2d.r8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025802, VkglTestCase_025802_1, VkglTestCase_025802_2);

#define VkglTestCase_025803_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025803_2 "ification.basic_teximage2d.r8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025803, VkglTestCase_025803_1, VkglTestCase_025803_2);

#define VkglTestCase_025804_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_025804_2 "cification.basic_teximage2d.r8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025804, VkglTestCase_025804_1, VkglTestCase_025804_2);

#define VkglTestCase_025805_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025805_2 "ification.basic_teximage2d.r8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025805, VkglTestCase_025805_1, VkglTestCase_025805_2);

#define VkglTestCase_025806_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_025806_2 "ification.basic_teximage2d.r8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025806, VkglTestCase_025806_1, VkglTestCase_025806_2);

#define VkglTestCase_025807_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_025807_2 "fication.basic_teximage2d.r8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025807, VkglTestCase_025807_1, VkglTestCase_025807_2);

#define VkglTestCase_025808_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_025808_2 "ication.basic_teximage2d.r8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025808, VkglTestCase_025808_1, VkglTestCase_025808_2);

#define VkglTestCase_025809_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_025809_2 "cation.basic_teximage2d.r8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025809, VkglTestCase_025809_1, VkglTestCase_025809_2);
