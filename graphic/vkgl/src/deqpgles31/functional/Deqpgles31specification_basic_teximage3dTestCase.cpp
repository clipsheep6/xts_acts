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

#define VkglTestCase_012673_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012673_2 "tion.basic_teximage3d.rgba32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012673, VkglTestCase_012673_1, VkglTestCase_012673_2);

#define VkglTestCase_012674_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012674_2 "tion.basic_teximage3d.rgba32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012674, VkglTestCase_012674_1, VkglTestCase_012674_2);

#define VkglTestCase_012675_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012675_2 "tion.basic_teximage3d.rgba32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012675, VkglTestCase_012675_1, VkglTestCase_012675_2);

#define VkglTestCase_012676_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012676_2 "tion.basic_teximage3d.rgba16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012676, VkglTestCase_012676_1, VkglTestCase_012676_2);

#define VkglTestCase_012677_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012677_2 "tion.basic_teximage3d.rgba16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012677, VkglTestCase_012677_1, VkglTestCase_012677_2);

#define VkglTestCase_012678_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012678_2 "tion.basic_teximage3d.rgba16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012678, VkglTestCase_012678_1, VkglTestCase_012678_2);

#define VkglTestCase_012679_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012679_2 "ation.basic_teximage3d.rgba8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012679, VkglTestCase_012679_1, VkglTestCase_012679_2);

#define VkglTestCase_012680_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012680_2 "ation.basic_teximage3d.rgba8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012680, VkglTestCase_012680_1, VkglTestCase_012680_2);

#define VkglTestCase_012681_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012681_2 "tion.basic_teximage3d.rgba8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012681, VkglTestCase_012681_1, VkglTestCase_012681_2);

#define VkglTestCase_012682_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012682_2 "on.basic_teximage3d.srgb8_alpha8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012682, VkglTestCase_012682_1, VkglTestCase_012682_2);

#define VkglTestCase_012683_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012683_2 "tion.basic_teximage3d.rgb10_a2_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012683, VkglTestCase_012683_1, VkglTestCase_012683_2);

#define VkglTestCase_012684_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012684_2 "ion.basic_teximage3d.rgb10_a2ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012684, VkglTestCase_012684_1, VkglTestCase_012684_2);

#define VkglTestCase_012685_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012685_2 "ation.basic_teximage3d.rgba4_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012685, VkglTestCase_012685_1, VkglTestCase_012685_2);

#define VkglTestCase_012686_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012686_2 "tion.basic_teximage3d.rgb5_a1_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012686, VkglTestCase_012686_1, VkglTestCase_012686_2);

#define VkglTestCase_012687_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012687_2 "on.basic_teximage3d.rgba8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012687, VkglTestCase_012687_1, VkglTestCase_012687_2);

#define VkglTestCase_012688_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012688_2 "cation.basic_teximage3d.rgb8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012688, VkglTestCase_012688_1, VkglTestCase_012688_2);

#define VkglTestCase_012689_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012689_2 "ation.basic_teximage3d.rgb565_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012689, VkglTestCase_012689_1, VkglTestCase_012689_2);

#define VkglTestCase_012690_1 "dEQP-GLES31.functional.texture.specificatio"
#define VkglTestCase_012690_2 "n.basic_teximage3d.r11f_g11f_b10f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012690, VkglTestCase_012690_1, VkglTestCase_012690_2);

#define VkglTestCase_012691_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012691_2 "ation.basic_teximage3d.rgb32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012691, VkglTestCase_012691_1, VkglTestCase_012691_2);

#define VkglTestCase_012692_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012692_2 "ation.basic_teximage3d.rgb32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012692, VkglTestCase_012692_1, VkglTestCase_012692_2);

#define VkglTestCase_012693_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012693_2 "tion.basic_teximage3d.rgb32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012693, VkglTestCase_012693_1, VkglTestCase_012693_2);

#define VkglTestCase_012694_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012694_2 "ation.basic_teximage3d.rgb16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012694, VkglTestCase_012694_1, VkglTestCase_012694_2);

#define VkglTestCase_012695_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012695_2 "ation.basic_teximage3d.rgb16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012695, VkglTestCase_012695_1, VkglTestCase_012695_2);

#define VkglTestCase_012696_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012696_2 "tion.basic_teximage3d.rgb16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012696, VkglTestCase_012696_1, VkglTestCase_012696_2);

#define VkglTestCase_012697_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012697_2 "ion.basic_teximage3d.rgb8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012697, VkglTestCase_012697_1, VkglTestCase_012697_2);

#define VkglTestCase_012698_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012698_2 "ation.basic_teximage3d.rgb8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012698, VkglTestCase_012698_1, VkglTestCase_012698_2);

#define VkglTestCase_012699_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012699_2 "ation.basic_teximage3d.rgb8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012699, VkglTestCase_012699_1, VkglTestCase_012699_2);

#define VkglTestCase_012700_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012700_2 "ation.basic_teximage3d.srgb8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012700, VkglTestCase_012700_1, VkglTestCase_012700_2);

#define VkglTestCase_012701_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012701_2 "tion.basic_teximage3d.rgb9_e5_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012701, VkglTestCase_012701_1, VkglTestCase_012701_2);

#define VkglTestCase_012702_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012702_2 "ation.basic_teximage3d.rg32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012702, VkglTestCase_012702_1, VkglTestCase_012702_2);

#define VkglTestCase_012703_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012703_2 "ation.basic_teximage3d.rg32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012703, VkglTestCase_012703_1, VkglTestCase_012703_2);

#define VkglTestCase_012704_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012704_2 "ation.basic_teximage3d.rg32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012704, VkglTestCase_012704_1, VkglTestCase_012704_2);

#define VkglTestCase_012705_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012705_2 "ation.basic_teximage3d.rg16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012705, VkglTestCase_012705_1, VkglTestCase_012705_2);

#define VkglTestCase_012706_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012706_2 "ation.basic_teximage3d.rg16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012706, VkglTestCase_012706_1, VkglTestCase_012706_2);

#define VkglTestCase_012707_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012707_2 "ation.basic_teximage3d.rg16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012707, VkglTestCase_012707_1, VkglTestCase_012707_2);

#define VkglTestCase_012708_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012708_2 "cation.basic_teximage3d.rg8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012708, VkglTestCase_012708_1, VkglTestCase_012708_2);

#define VkglTestCase_012709_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012709_2 "cation.basic_teximage3d.rg8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012709, VkglTestCase_012709_1, VkglTestCase_012709_2);

#define VkglTestCase_012710_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012710_2 "ation.basic_teximage3d.rg8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012710, VkglTestCase_012710_1, VkglTestCase_012710_2);

#define VkglTestCase_012711_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012711_2 "ion.basic_teximage3d.rg8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012711, VkglTestCase_012711_1, VkglTestCase_012711_2);

#define VkglTestCase_012712_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012712_2 "cation.basic_teximage3d.r32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012712, VkglTestCase_012712_1, VkglTestCase_012712_2);

#define VkglTestCase_012713_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012713_2 "cation.basic_teximage3d.r32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012713, VkglTestCase_012713_1, VkglTestCase_012713_2);

#define VkglTestCase_012714_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012714_2 "ation.basic_teximage3d.r32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012714, VkglTestCase_012714_1, VkglTestCase_012714_2);

#define VkglTestCase_012715_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012715_2 "cation.basic_teximage3d.r16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012715, VkglTestCase_012715_1, VkglTestCase_012715_2);

#define VkglTestCase_012716_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012716_2 "cation.basic_teximage3d.r16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012716, VkglTestCase_012716_1, VkglTestCase_012716_2);

#define VkglTestCase_012717_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012717_2 "ation.basic_teximage3d.r16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012717, VkglTestCase_012717_1, VkglTestCase_012717_2);

#define VkglTestCase_012718_1 "dEQP-GLES31.functional.texture.specif"
#define VkglTestCase_012718_2 "ication.basic_teximage3d.r8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012718, VkglTestCase_012718_1, VkglTestCase_012718_2);

#define VkglTestCase_012719_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012719_2 "cation.basic_teximage3d.r8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012719, VkglTestCase_012719_1, VkglTestCase_012719_2);

#define VkglTestCase_012720_1 "dEQP-GLES31.functional.texture.specifi"
#define VkglTestCase_012720_2 "cation.basic_teximage3d.r8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012720, VkglTestCase_012720_1, VkglTestCase_012720_2);

#define VkglTestCase_012721_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012721_2 "tion.basic_teximage3d.r8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012721, VkglTestCase_012721_1, VkglTestCase_012721_2);
