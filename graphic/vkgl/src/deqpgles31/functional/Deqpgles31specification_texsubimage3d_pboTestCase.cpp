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

#define VkglTestCase_012788_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012788_2 "tion.texsubimage3d_pbo.rgba32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012788, VkglTestCase_012788_1, VkglTestCase_012788_2);

#define VkglTestCase_012789_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012789_2 "tion.texsubimage3d_pbo.rgba32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012789, VkglTestCase_012789_1, VkglTestCase_012789_2);

#define VkglTestCase_012790_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012790_2 "ion.texsubimage3d_pbo.rgba32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012790, VkglTestCase_012790_1, VkglTestCase_012790_2);

#define VkglTestCase_012791_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012791_2 "tion.texsubimage3d_pbo.rgba16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012791, VkglTestCase_012791_1, VkglTestCase_012791_2);

#define VkglTestCase_012792_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012792_2 "tion.texsubimage3d_pbo.rgba16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012792, VkglTestCase_012792_1, VkglTestCase_012792_2);

#define VkglTestCase_012793_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012793_2 "ion.texsubimage3d_pbo.rgba16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012793, VkglTestCase_012793_1, VkglTestCase_012793_2);

#define VkglTestCase_012794_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012794_2 "ation.texsubimage3d_pbo.rgba8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012794, VkglTestCase_012794_1, VkglTestCase_012794_2);

#define VkglTestCase_012795_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012795_2 "tion.texsubimage3d_pbo.rgba8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012795, VkglTestCase_012795_1, VkglTestCase_012795_2);

#define VkglTestCase_012796_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012796_2 "tion.texsubimage3d_pbo.rgba8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012796, VkglTestCase_012796_1, VkglTestCase_012796_2);

#define VkglTestCase_012797_1 "dEQP-GLES31.functional.texture.specificatio"
#define VkglTestCase_012797_2 "n.texsubimage3d_pbo.srgb8_alpha8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012797, VkglTestCase_012797_1, VkglTestCase_012797_2);

#define VkglTestCase_012798_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012798_2 "ion.texsubimage3d_pbo.rgb10_a2_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012798, VkglTestCase_012798_1, VkglTestCase_012798_2);

#define VkglTestCase_012799_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012799_2 "on.texsubimage3d_pbo.rgb10_a2ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012799, VkglTestCase_012799_1, VkglTestCase_012799_2);

#define VkglTestCase_012800_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012800_2 "ation.texsubimage3d_pbo.rgba4_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012800, VkglTestCase_012800_1, VkglTestCase_012800_2);

#define VkglTestCase_012801_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012801_2 "tion.texsubimage3d_pbo.rgb5_a1_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012801, VkglTestCase_012801_1, VkglTestCase_012801_2);

#define VkglTestCase_012802_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012802_2 "on.texsubimage3d_pbo.rgba8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012802, VkglTestCase_012802_1, VkglTestCase_012802_2);

#define VkglTestCase_012803_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012803_2 "ation.texsubimage3d_pbo.rgb8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012803, VkglTestCase_012803_1, VkglTestCase_012803_2);

#define VkglTestCase_012804_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012804_2 "tion.texsubimage3d_pbo.rgb565_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012804, VkglTestCase_012804_1, VkglTestCase_012804_2);

#define VkglTestCase_012805_1 "dEQP-GLES31.functional.texture.specification"
#define VkglTestCase_012805_2 ".texsubimage3d_pbo.r11f_g11f_b10f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012805, VkglTestCase_012805_1, VkglTestCase_012805_2);

#define VkglTestCase_012806_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012806_2 "tion.texsubimage3d_pbo.rgb32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012806, VkglTestCase_012806_1, VkglTestCase_012806_2);

#define VkglTestCase_012807_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012807_2 "tion.texsubimage3d_pbo.rgb32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012807, VkglTestCase_012807_1, VkglTestCase_012807_2);

#define VkglTestCase_012808_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012808_2 "tion.texsubimage3d_pbo.rgb32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012808, VkglTestCase_012808_1, VkglTestCase_012808_2);

#define VkglTestCase_012809_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012809_2 "tion.texsubimage3d_pbo.rgb16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012809, VkglTestCase_012809_1, VkglTestCase_012809_2);

#define VkglTestCase_012810_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012810_2 "tion.texsubimage3d_pbo.rgb16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012810, VkglTestCase_012810_1, VkglTestCase_012810_2);

#define VkglTestCase_012811_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012811_2 "tion.texsubimage3d_pbo.rgb16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012811, VkglTestCase_012811_1, VkglTestCase_012811_2);

#define VkglTestCase_012812_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012812_2 "on.texsubimage3d_pbo.rgb8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012812, VkglTestCase_012812_1, VkglTestCase_012812_2);

#define VkglTestCase_012813_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012813_2 "ation.texsubimage3d_pbo.rgb8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012813, VkglTestCase_012813_1, VkglTestCase_012813_2);

#define VkglTestCase_012814_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012814_2 "tion.texsubimage3d_pbo.rgb8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012814, VkglTestCase_012814_1, VkglTestCase_012814_2);

#define VkglTestCase_012815_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012815_2 "ation.texsubimage3d_pbo.srgb8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012815, VkglTestCase_012815_1, VkglTestCase_012815_2);

#define VkglTestCase_012816_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012816_2 "tion.texsubimage3d_pbo.rgb9_e5_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012816, VkglTestCase_012816_1, VkglTestCase_012816_2);

#define VkglTestCase_012817_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012817_2 "ation.texsubimage3d_pbo.rg32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012817, VkglTestCase_012817_1, VkglTestCase_012817_2);

#define VkglTestCase_012818_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012818_2 "ation.texsubimage3d_pbo.rg32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012818, VkglTestCase_012818_1, VkglTestCase_012818_2);

#define VkglTestCase_012819_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012819_2 "tion.texsubimage3d_pbo.rg32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012819, VkglTestCase_012819_1, VkglTestCase_012819_2);

#define VkglTestCase_012820_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012820_2 "ation.texsubimage3d_pbo.rg16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012820, VkglTestCase_012820_1, VkglTestCase_012820_2);

#define VkglTestCase_012821_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012821_2 "ation.texsubimage3d_pbo.rg16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012821, VkglTestCase_012821_1, VkglTestCase_012821_2);

#define VkglTestCase_012822_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012822_2 "tion.texsubimage3d_pbo.rg16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012822, VkglTestCase_012822_1, VkglTestCase_012822_2);

#define VkglTestCase_012823_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012823_2 "cation.texsubimage3d_pbo.rg8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012823, VkglTestCase_012823_1, VkglTestCase_012823_2);

#define VkglTestCase_012824_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012824_2 "ation.texsubimage3d_pbo.rg8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012824, VkglTestCase_012824_1, VkglTestCase_012824_2);

#define VkglTestCase_012825_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012825_2 "ation.texsubimage3d_pbo.rg8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012825, VkglTestCase_012825_1, VkglTestCase_012825_2);

#define VkglTestCase_012826_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012826_2 "ion.texsubimage3d_pbo.rg8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012826, VkglTestCase_012826_1, VkglTestCase_012826_2);

#define VkglTestCase_012827_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012827_2 "ation.texsubimage3d_pbo.r32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012827, VkglTestCase_012827_1, VkglTestCase_012827_2);

#define VkglTestCase_012828_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012828_2 "ation.texsubimage3d_pbo.r32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012828, VkglTestCase_012828_1, VkglTestCase_012828_2);

#define VkglTestCase_012829_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012829_2 "ation.texsubimage3d_pbo.r32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012829, VkglTestCase_012829_1, VkglTestCase_012829_2);

#define VkglTestCase_012830_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012830_2 "ation.texsubimage3d_pbo.r16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012830, VkglTestCase_012830_1, VkglTestCase_012830_2);

#define VkglTestCase_012831_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012831_2 "ation.texsubimage3d_pbo.r16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012831, VkglTestCase_012831_1, VkglTestCase_012831_2);

#define VkglTestCase_012832_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012832_2 "ation.texsubimage3d_pbo.r16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012832, VkglTestCase_012832_1, VkglTestCase_012832_2);

#define VkglTestCase_012833_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012833_2 "cation.texsubimage3d_pbo.r8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012833, VkglTestCase_012833_1, VkglTestCase_012833_2);

#define VkglTestCase_012834_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012834_2 "cation.texsubimage3d_pbo.r8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012834, VkglTestCase_012834_1, VkglTestCase_012834_2);

#define VkglTestCase_012835_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012835_2 "ation.texsubimage3d_pbo.r8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012835, VkglTestCase_012835_1, VkglTestCase_012835_2);

#define VkglTestCase_012836_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012836_2 "ion.texsubimage3d_pbo.r8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012836, VkglTestCase_012836_1, VkglTestCase_012836_2);

#define VkglTestCase_012837_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012837_2 "on.texsubimage3d_pbo.rgb8_offset_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012837, VkglTestCase_012837_1, VkglTestCase_012837_2);

#define VkglTestCase_012838_1 "dEQP-GLES31.functional.texture.specification."
#define VkglTestCase_012838_2 "texsubimage3d_pbo.rgb8_image_height_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012838, VkglTestCase_012838_1, VkglTestCase_012838_2);

#define VkglTestCase_012839_1 "dEQP-GLES31.functional.texture.specification"
#define VkglTestCase_012839_2 ".texsubimage3d_pbo.rgb8_row_length_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012839, VkglTestCase_012839_1, VkglTestCase_012839_2);

#define VkglTestCase_012840_1 "dEQP-GLES31.functional.texture.specification."
#define VkglTestCase_012840_2 "texsubimage3d_pbo.rgb8_skip_images_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012840, VkglTestCase_012840_1, VkglTestCase_012840_2);

#define VkglTestCase_012841_1 "dEQP-GLES31.functional.texture.specification"
#define VkglTestCase_012841_2 ".texsubimage3d_pbo.rgb8_skip_rows_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012841, VkglTestCase_012841_1, VkglTestCase_012841_2);

#define VkglTestCase_012842_1 "dEQP-GLES31.functional.texture.specification."
#define VkglTestCase_012842_2 "texsubimage3d_pbo.rgb8_skip_pixels_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012842, VkglTestCase_012842_1, VkglTestCase_012842_2);
