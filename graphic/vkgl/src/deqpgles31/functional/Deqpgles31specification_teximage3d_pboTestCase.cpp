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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012722_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012722_2 "ation.teximage3d_pbo.rgba32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012722, VkglTestCase_012722_1, VkglTestCase_012722_2);

#define VkglTestCase_012723_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012723_2 "ation.teximage3d_pbo.rgba32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012723, VkglTestCase_012723_1, VkglTestCase_012723_2);

#define VkglTestCase_012724_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012724_2 "ation.teximage3d_pbo.rgba32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012724, VkglTestCase_012724_1, VkglTestCase_012724_2);

#define VkglTestCase_012725_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012725_2 "ation.teximage3d_pbo.rgba16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012725, VkglTestCase_012725_1, VkglTestCase_012725_2);

#define VkglTestCase_012726_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012726_2 "ation.teximage3d_pbo.rgba16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012726, VkglTestCase_012726_1, VkglTestCase_012726_2);

#define VkglTestCase_012727_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012727_2 "ation.teximage3d_pbo.rgba16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012727, VkglTestCase_012727_1, VkglTestCase_012727_2);

#define VkglTestCase_012728_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012728_2 "cation.teximage3d_pbo.rgba8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012728, VkglTestCase_012728_1, VkglTestCase_012728_2);

#define VkglTestCase_012729_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012729_2 "cation.teximage3d_pbo.rgba8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012729, VkglTestCase_012729_1, VkglTestCase_012729_2);

#define VkglTestCase_012730_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012730_2 "ation.teximage3d_pbo.rgba8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012730, VkglTestCase_012730_1, VkglTestCase_012730_2);

#define VkglTestCase_012731_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012731_2 "ion.teximage3d_pbo.srgb8_alpha8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012731, VkglTestCase_012731_1, VkglTestCase_012731_2);

#define VkglTestCase_012732_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012732_2 "ation.teximage3d_pbo.rgb10_a2_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012732, VkglTestCase_012732_1, VkglTestCase_012732_2);

#define VkglTestCase_012733_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012733_2 "tion.teximage3d_pbo.rgb10_a2ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012733, VkglTestCase_012733_1, VkglTestCase_012733_2);

#define VkglTestCase_012734_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012734_2 "cation.teximage3d_pbo.rgba4_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012734, VkglTestCase_012734_1, VkglTestCase_012734_2);

#define VkglTestCase_012735_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012735_2 "ation.teximage3d_pbo.rgb5_a1_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012735, VkglTestCase_012735_1, VkglTestCase_012735_2);

#define VkglTestCase_012736_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012736_2 "ion.teximage3d_pbo.rgba8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012736, VkglTestCase_012736_1, VkglTestCase_012736_2);

#define VkglTestCase_012737_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012737_2 "ication.teximage3d_pbo.rgb8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012737, VkglTestCase_012737_1, VkglTestCase_012737_2);

#define VkglTestCase_012738_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012738_2 "cation.teximage3d_pbo.rgb565_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012738, VkglTestCase_012738_1, VkglTestCase_012738_2);

#define VkglTestCase_012739_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012739_2 "on.teximage3d_pbo.r11f_g11f_b10f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012739, VkglTestCase_012739_1, VkglTestCase_012739_2);

#define VkglTestCase_012740_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012740_2 "cation.teximage3d_pbo.rgb32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012740, VkglTestCase_012740_1, VkglTestCase_012740_2);

#define VkglTestCase_012741_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012741_2 "cation.teximage3d_pbo.rgb32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012741, VkglTestCase_012741_1, VkglTestCase_012741_2);

#define VkglTestCase_012742_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012742_2 "ation.teximage3d_pbo.rgb32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012742, VkglTestCase_012742_1, VkglTestCase_012742_2);

#define VkglTestCase_012743_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012743_2 "cation.teximage3d_pbo.rgb16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012743, VkglTestCase_012743_1, VkglTestCase_012743_2);

#define VkglTestCase_012744_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012744_2 "cation.teximage3d_pbo.rgb16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012744, VkglTestCase_012744_1, VkglTestCase_012744_2);

#define VkglTestCase_012745_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012745_2 "ation.teximage3d_pbo.rgb16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012745, VkglTestCase_012745_1, VkglTestCase_012745_2);

#define VkglTestCase_012746_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012746_2 "tion.teximage3d_pbo.rgb8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012746, VkglTestCase_012746_1, VkglTestCase_012746_2);

#define VkglTestCase_012747_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012747_2 "cation.teximage3d_pbo.rgb8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012747, VkglTestCase_012747_1, VkglTestCase_012747_2);

#define VkglTestCase_012748_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012748_2 "cation.teximage3d_pbo.rgb8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012748, VkglTestCase_012748_1, VkglTestCase_012748_2);

#define VkglTestCase_012749_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012749_2 "cation.teximage3d_pbo.srgb8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012749, VkglTestCase_012749_1, VkglTestCase_012749_2);

#define VkglTestCase_012750_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012750_2 "ation.teximage3d_pbo.rgb9_e5_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012750, VkglTestCase_012750_1, VkglTestCase_012750_2);

#define VkglTestCase_012751_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012751_2 "cation.teximage3d_pbo.rg32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012751, VkglTestCase_012751_1, VkglTestCase_012751_2);

#define VkglTestCase_012752_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012752_2 "cation.teximage3d_pbo.rg32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012752, VkglTestCase_012752_1, VkglTestCase_012752_2);

#define VkglTestCase_012753_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012753_2 "cation.teximage3d_pbo.rg32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012753, VkglTestCase_012753_1, VkglTestCase_012753_2);

#define VkglTestCase_012754_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012754_2 "cation.teximage3d_pbo.rg16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012754, VkglTestCase_012754_1, VkglTestCase_012754_2);

#define VkglTestCase_012755_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012755_2 "cation.teximage3d_pbo.rg16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012755, VkglTestCase_012755_1, VkglTestCase_012755_2);

#define VkglTestCase_012756_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012756_2 "cation.teximage3d_pbo.rg16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012756, VkglTestCase_012756_1, VkglTestCase_012756_2);

#define VkglTestCase_012757_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012757_2 "ication.teximage3d_pbo.rg8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012757, VkglTestCase_012757_1, VkglTestCase_012757_2);

#define VkglTestCase_012758_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012758_2 "ication.teximage3d_pbo.rg8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012758, VkglTestCase_012758_1, VkglTestCase_012758_2);

#define VkglTestCase_012759_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012759_2 "cation.teximage3d_pbo.rg8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012759, VkglTestCase_012759_1, VkglTestCase_012759_2);

#define VkglTestCase_012760_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012760_2 "tion.teximage3d_pbo.rg8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012760, VkglTestCase_012760_1, VkglTestCase_012760_2);

#define VkglTestCase_012761_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012761_2 "ication.teximage3d_pbo.r32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012761, VkglTestCase_012761_1, VkglTestCase_012761_2);

#define VkglTestCase_012762_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012762_2 "ication.teximage3d_pbo.r32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012762, VkglTestCase_012762_1, VkglTestCase_012762_2);

#define VkglTestCase_012763_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012763_2 "cation.teximage3d_pbo.r32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012763, VkglTestCase_012763_1, VkglTestCase_012763_2);

#define VkglTestCase_012764_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012764_2 "ication.teximage3d_pbo.r16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012764, VkglTestCase_012764_1, VkglTestCase_012764_2);

#define VkglTestCase_012765_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012765_2 "ication.teximage3d_pbo.r16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012765, VkglTestCase_012765_1, VkglTestCase_012765_2);

#define VkglTestCase_012766_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012766_2 "cation.teximage3d_pbo.r16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012766, VkglTestCase_012766_1, VkglTestCase_012766_2);

#define VkglTestCase_012767_1 "dEQP-GLES31.functional.texture.speci"
#define VkglTestCase_012767_2 "fication.teximage3d_pbo.r8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012767, VkglTestCase_012767_1, VkglTestCase_012767_2);

#define VkglTestCase_012768_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012768_2 "ication.teximage3d_pbo.r8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012768, VkglTestCase_012768_1, VkglTestCase_012768_2);

#define VkglTestCase_012769_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012769_2 "ication.teximage3d_pbo.r8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012769, VkglTestCase_012769_1, VkglTestCase_012769_2);

#define VkglTestCase_012770_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012770_2 "ation.teximage3d_pbo.r8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012770, VkglTestCase_012770_1, VkglTestCase_012770_2);

#define VkglTestCase_012771_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012771_2 "ion.teximage3d_pbo.rgb8_offset_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012771, VkglTestCase_012771_1, VkglTestCase_012771_2);

#define VkglTestCase_012772_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012772_2 "on.teximage3d_pbo.rgb8_alignment_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012772, VkglTestCase_012772_1, VkglTestCase_012772_2);

#define VkglTestCase_012773_1 "dEQP-GLES31.functional.texture.specification"
#define VkglTestCase_012773_2 ".teximage3d_pbo.rgb8_image_height_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012773, VkglTestCase_012773_1, VkglTestCase_012773_2);

#define VkglTestCase_012774_1 "dEQP-GLES31.functional.texture.specificatio"
#define VkglTestCase_012774_2 "n.teximage3d_pbo.rgb8_row_length_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012774, VkglTestCase_012774_1, VkglTestCase_012774_2);

#define VkglTestCase_012775_1 "dEQP-GLES31.functional.texture.specificatio"
#define VkglTestCase_012775_2 "n.teximage3d_pbo.rgb8_skip_images_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012775, VkglTestCase_012775_1, VkglTestCase_012775_2);

#define VkglTestCase_012776_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012776_2 "on.teximage3d_pbo.rgb8_skip_rows_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012776, VkglTestCase_012776_1, VkglTestCase_012776_2);

#define VkglTestCase_012777_1 "dEQP-GLES31.functional.texture.specificatio"
#define VkglTestCase_012777_2 "n.teximage3d_pbo.rgb8_skip_pixels_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012777, VkglTestCase_012777_1, VkglTestCase_012777_2);
