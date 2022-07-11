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

#define VkglTestCase_012279_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012279_2 "ing.cube_array.formats.rgba16f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012279, VkglTestCase_012279_1, VkglTestCase_012279_2);

#define VkglTestCase_012280_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012280_2 "ing.cube_array.formats.rgba16f_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012280, VkglTestCase_012280_1, VkglTestCase_012280_2);

#define VkglTestCase_012281_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012281_2 "_array.formats.rgba16f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012281, VkglTestCase_012281_1, VkglTestCase_012281_2);

#define VkglTestCase_012282_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012282_2 "e_array.formats.rgba16f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012282, VkglTestCase_012282_1, VkglTestCase_012282_2);

#define VkglTestCase_012283_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012283_2 "e_array.formats.rgba16f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012283, VkglTestCase_012283_1, VkglTestCase_012283_2);

#define VkglTestCase_012284_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012284_2 "e_array.formats.rgba16f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012284, VkglTestCase_012284_1, VkglTestCase_012284_2);

#define VkglTestCase_012285_1 "dEQP-GLES31.functional.texture.filtering."
#define VkglTestCase_012285_2 "cube_array.formats.r11f_g11f_b10f_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012285, VkglTestCase_012285_1, VkglTestCase_012285_2);

#define VkglTestCase_012286_1 "dEQP-GLES31.functional.texture.filtering"
#define VkglTestCase_012286_2 ".cube_array.formats.r11f_g11f_b10f_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012286, VkglTestCase_012286_1, VkglTestCase_012286_2);

#define VkglTestCase_012287_1 "dEQP-GLES31.functional.texture.filtering.cube_ar"
#define VkglTestCase_012287_2 "ray.formats.r11f_g11f_b10f_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012287, VkglTestCase_012287_1, VkglTestCase_012287_2);

#define VkglTestCase_012288_1 "dEQP-GLES31.functional.texture.filtering.cube_ar"
#define VkglTestCase_012288_2 "ray.formats.r11f_g11f_b10f_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012288, VkglTestCase_012288_1, VkglTestCase_012288_2);

#define VkglTestCase_012289_1 "dEQP-GLES31.functional.texture.filtering.cube_ar"
#define VkglTestCase_012289_2 "ray.formats.r11f_g11f_b10f_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012289, VkglTestCase_012289_1, VkglTestCase_012289_2);

#define VkglTestCase_012290_1 "dEQP-GLES31.functional.texture.filtering.cube_a"
#define VkglTestCase_012290_2 "rray.formats.r11f_g11f_b10f_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012290, VkglTestCase_012290_1, VkglTestCase_012290_2);

#define VkglTestCase_012291_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012291_2 "ing.cube_array.formats.rgb9_e5_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012291, VkglTestCase_012291_1, VkglTestCase_012291_2);

#define VkglTestCase_012292_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012292_2 "ing.cube_array.formats.rgb9_e5_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012292, VkglTestCase_012292_1, VkglTestCase_012292_2);

#define VkglTestCase_012293_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012293_2 "_array.formats.rgb9_e5_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012293, VkglTestCase_012293_1, VkglTestCase_012293_2);

#define VkglTestCase_012294_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012294_2 "e_array.formats.rgb9_e5_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012294, VkglTestCase_012294_1, VkglTestCase_012294_2);

#define VkglTestCase_012295_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012295_2 "e_array.formats.rgb9_e5_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012295, VkglTestCase_012295_1, VkglTestCase_012295_2);

#define VkglTestCase_012296_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012296_2 "e_array.formats.rgb9_e5_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012296, VkglTestCase_012296_1, VkglTestCase_012296_2);

#define VkglTestCase_012297_1 "dEQP-GLES31.functional.texture.filte"
#define VkglTestCase_012297_2 "ring.cube_array.formats.rgba8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012297, VkglTestCase_012297_1, VkglTestCase_012297_2);

#define VkglTestCase_012298_1 "dEQP-GLES31.functional.texture.filte"
#define VkglTestCase_012298_2 "ring.cube_array.formats.rgba8_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012298, VkglTestCase_012298_1, VkglTestCase_012298_2);

#define VkglTestCase_012299_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012299_2 "e_array.formats.rgba8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012299, VkglTestCase_012299_1, VkglTestCase_012299_2);

#define VkglTestCase_012300_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012300_2 "be_array.formats.rgba8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012300, VkglTestCase_012300_1, VkglTestCase_012300_2);

#define VkglTestCase_012301_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012301_2 "be_array.formats.rgba8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012301, VkglTestCase_012301_1, VkglTestCase_012301_2);

#define VkglTestCase_012302_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012302_2 "be_array.formats.rgba8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012302, VkglTestCase_012302_1, VkglTestCase_012302_2);

#define VkglTestCase_012303_1 "dEQP-GLES31.functional.texture.filterin"
#define VkglTestCase_012303_2 "g.cube_array.formats.rgba8_snorm_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012303, VkglTestCase_012303_1, VkglTestCase_012303_2);

#define VkglTestCase_012304_1 "dEQP-GLES31.functional.texture.filterin"
#define VkglTestCase_012304_2 "g.cube_array.formats.rgba8_snorm_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012304, VkglTestCase_012304_1, VkglTestCase_012304_2);

#define VkglTestCase_012305_1 "dEQP-GLES31.functional.texture.filtering.cube_a"
#define VkglTestCase_012305_2 "rray.formats.rgba8_snorm_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012305, VkglTestCase_012305_1, VkglTestCase_012305_2);

#define VkglTestCase_012306_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012306_2 "array.formats.rgba8_snorm_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012306, VkglTestCase_012306_1, VkglTestCase_012306_2);

#define VkglTestCase_012307_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012307_2 "array.formats.rgba8_snorm_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012307, VkglTestCase_012307_1, VkglTestCase_012307_2);

#define VkglTestCase_012308_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012308_2 "array.formats.rgba8_snorm_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012308, VkglTestCase_012308_1, VkglTestCase_012308_2);

#define VkglTestCase_012309_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012309_2 "ing.cube_array.formats.rgb565_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012309, VkglTestCase_012309_1, VkglTestCase_012309_2);

#define VkglTestCase_012310_1 "dEQP-GLES31.functional.texture.filte"
#define VkglTestCase_012310_2 "ring.cube_array.formats.rgb565_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012310, VkglTestCase_012310_1, VkglTestCase_012310_2);

#define VkglTestCase_012311_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012311_2 "e_array.formats.rgb565_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012311, VkglTestCase_012311_1, VkglTestCase_012311_2);

#define VkglTestCase_012312_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012312_2 "e_array.formats.rgb565_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012312, VkglTestCase_012312_1, VkglTestCase_012312_2);

#define VkglTestCase_012313_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012313_2 "e_array.formats.rgb565_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012313, VkglTestCase_012313_1, VkglTestCase_012313_2);

#define VkglTestCase_012314_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012314_2 "be_array.formats.rgb565_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012314, VkglTestCase_012314_1, VkglTestCase_012314_2);

#define VkglTestCase_012315_1 "dEQP-GLES31.functional.texture.filte"
#define VkglTestCase_012315_2 "ring.cube_array.formats.rgba4_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012315, VkglTestCase_012315_1, VkglTestCase_012315_2);

#define VkglTestCase_012316_1 "dEQP-GLES31.functional.texture.filte"
#define VkglTestCase_012316_2 "ring.cube_array.formats.rgba4_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012316, VkglTestCase_012316_1, VkglTestCase_012316_2);

#define VkglTestCase_012317_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012317_2 "e_array.formats.rgba4_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012317, VkglTestCase_012317_1, VkglTestCase_012317_2);

#define VkglTestCase_012318_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012318_2 "be_array.formats.rgba4_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012318, VkglTestCase_012318_1, VkglTestCase_012318_2);

#define VkglTestCase_012319_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012319_2 "be_array.formats.rgba4_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012319, VkglTestCase_012319_1, VkglTestCase_012319_2);

#define VkglTestCase_012320_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012320_2 "be_array.formats.rgba4_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012320, VkglTestCase_012320_1, VkglTestCase_012320_2);

#define VkglTestCase_012321_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012321_2 "ing.cube_array.formats.rgb5_a1_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012321, VkglTestCase_012321_1, VkglTestCase_012321_2);

#define VkglTestCase_012322_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012322_2 "ing.cube_array.formats.rgb5_a1_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012322, VkglTestCase_012322_1, VkglTestCase_012322_2);

#define VkglTestCase_012323_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012323_2 "_array.formats.rgb5_a1_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012323, VkglTestCase_012323_1, VkglTestCase_012323_2);

#define VkglTestCase_012324_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012324_2 "e_array.formats.rgb5_a1_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012324, VkglTestCase_012324_1, VkglTestCase_012324_2);

#define VkglTestCase_012325_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012325_2 "e_array.formats.rgb5_a1_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012325, VkglTestCase_012325_1, VkglTestCase_012325_2);

#define VkglTestCase_012326_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012326_2 "e_array.formats.rgb5_a1_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012326, VkglTestCase_012326_1, VkglTestCase_012326_2);

#define VkglTestCase_012327_1 "dEQP-GLES31.functional.texture.filt"
#define VkglTestCase_012327_2 "ering.cube_array.formats.sr8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012327, VkglTestCase_012327_1, VkglTestCase_012327_2);

#define VkglTestCase_012328_1 "dEQP-GLES31.functional.texture.filt"
#define VkglTestCase_012328_2 "ering.cube_array.formats.sr8_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012328, VkglTestCase_012328_1, VkglTestCase_012328_2);

#define VkglTestCase_012329_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012329_2 "be_array.formats.sr8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012329, VkglTestCase_012329_1, VkglTestCase_012329_2);

#define VkglTestCase_012330_1 "dEQP-GLES31.functional.texture.filtering.c"
#define VkglTestCase_012330_2 "ube_array.formats.sr8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012330, VkglTestCase_012330_1, VkglTestCase_012330_2);

#define VkglTestCase_012331_1 "dEQP-GLES31.functional.texture.filtering.c"
#define VkglTestCase_012331_2 "ube_array.formats.sr8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012331, VkglTestCase_012331_1, VkglTestCase_012331_2);

#define VkglTestCase_012332_1 "dEQP-GLES31.functional.texture.filtering.c"
#define VkglTestCase_012332_2 "ube_array.formats.sr8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012332, VkglTestCase_012332_1, VkglTestCase_012332_2);

#define VkglTestCase_012333_1 "dEQP-GLES31.functional.texture.filte"
#define VkglTestCase_012333_2 "ring.cube_array.formats.srg8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012333, VkglTestCase_012333_1, VkglTestCase_012333_2);

#define VkglTestCase_012334_1 "dEQP-GLES31.functional.texture.filt"
#define VkglTestCase_012334_2 "ering.cube_array.formats.srg8_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012334, VkglTestCase_012334_1, VkglTestCase_012334_2);

#define VkglTestCase_012335_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012335_2 "be_array.formats.srg8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012335, VkglTestCase_012335_1, VkglTestCase_012335_2);

#define VkglTestCase_012336_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012336_2 "be_array.formats.srg8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012336, VkglTestCase_012336_1, VkglTestCase_012336_2);

#define VkglTestCase_012337_1 "dEQP-GLES31.functional.texture.filtering.cu"
#define VkglTestCase_012337_2 "be_array.formats.srg8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012337, VkglTestCase_012337_1, VkglTestCase_012337_2);

#define VkglTestCase_012338_1 "dEQP-GLES31.functional.texture.filtering.c"
#define VkglTestCase_012338_2 "ube_array.formats.srg8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012338, VkglTestCase_012338_1, VkglTestCase_012338_2);

#define VkglTestCase_012339_1 "dEQP-GLES31.functional.texture.filtering"
#define VkglTestCase_012339_2 ".cube_array.formats.srgb8_alpha8_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012339, VkglTestCase_012339_1, VkglTestCase_012339_2);

#define VkglTestCase_012340_1 "dEQP-GLES31.functional.texture.filterin"
#define VkglTestCase_012340_2 "g.cube_array.formats.srgb8_alpha8_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012340, VkglTestCase_012340_1, VkglTestCase_012340_2);

#define VkglTestCase_012341_1 "dEQP-GLES31.functional.texture.filtering.cube_a"
#define VkglTestCase_012341_2 "rray.formats.srgb8_alpha8_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012341, VkglTestCase_012341_1, VkglTestCase_012341_2);

#define VkglTestCase_012342_1 "dEQP-GLES31.functional.texture.filtering.cube_a"
#define VkglTestCase_012342_2 "rray.formats.srgb8_alpha8_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012342, VkglTestCase_012342_1, VkglTestCase_012342_2);

#define VkglTestCase_012343_1 "dEQP-GLES31.functional.texture.filtering.cube_a"
#define VkglTestCase_012343_2 "rray.formats.srgb8_alpha8_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012343, VkglTestCase_012343_1, VkglTestCase_012343_2);

#define VkglTestCase_012344_1 "dEQP-GLES31.functional.texture.filtering.cube_"
#define VkglTestCase_012344_2 "array.formats.srgb8_alpha8_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012344, VkglTestCase_012344_1, VkglTestCase_012344_2);

#define VkglTestCase_012345_1 "dEQP-GLES31.functional.texture.filteri"
#define VkglTestCase_012345_2 "ng.cube_array.formats.rgb10_a2_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012345, VkglTestCase_012345_1, VkglTestCase_012345_2);

#define VkglTestCase_012346_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012346_2 "ing.cube_array.formats.rgb10_a2_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012346, VkglTestCase_012346_1, VkglTestCase_012346_2);

#define VkglTestCase_012347_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012347_2 "_array.formats.rgb10_a2_nearest_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012347, VkglTestCase_012347_1, VkglTestCase_012347_2);

#define VkglTestCase_012348_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012348_2 "_array.formats.rgb10_a2_linear_mipmap_nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012348, VkglTestCase_012348_1, VkglTestCase_012348_2);

#define VkglTestCase_012349_1 "dEQP-GLES31.functional.texture.filtering.cube"
#define VkglTestCase_012349_2 "_array.formats.rgb10_a2_nearest_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012349, VkglTestCase_012349_1, VkglTestCase_012349_2);

#define VkglTestCase_012350_1 "dEQP-GLES31.functional.texture.filtering.cub"
#define VkglTestCase_012350_2 "e_array.formats.rgb10_a2_linear_mipmap_linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012350, VkglTestCase_012350_1, VkglTestCase_012350_2);
