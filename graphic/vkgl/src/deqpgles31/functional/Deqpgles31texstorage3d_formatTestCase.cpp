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

#define VkglTestCase_012848_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012848_2 "ion.texstorage3d.format.rgba32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012848, VkglTestCase_012848_1, VkglTestCase_012848_2);

#define VkglTestCase_012849_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012849_2 "ion.texstorage3d.format.rgba32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012849, VkglTestCase_012849_1, VkglTestCase_012849_2);

#define VkglTestCase_012850_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012850_2 "on.texstorage3d.format.rgba32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012850, VkglTestCase_012850_1, VkglTestCase_012850_2);

#define VkglTestCase_012851_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012851_2 "ion.texstorage3d.format.rgba16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012851, VkglTestCase_012851_1, VkglTestCase_012851_2);

#define VkglTestCase_012852_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012852_2 "ion.texstorage3d.format.rgba16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012852, VkglTestCase_012852_1, VkglTestCase_012852_2);

#define VkglTestCase_012853_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012853_2 "on.texstorage3d.format.rgba16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012853, VkglTestCase_012853_1, VkglTestCase_012853_2);

#define VkglTestCase_012854_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012854_2 "tion.texstorage3d.format.rgba8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012854, VkglTestCase_012854_1, VkglTestCase_012854_2);

#define VkglTestCase_012855_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012855_2 "ion.texstorage3d.format.rgba8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012855, VkglTestCase_012855_1, VkglTestCase_012855_2);

#define VkglTestCase_012856_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012856_2 "ion.texstorage3d.format.rgba8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012856, VkglTestCase_012856_1, VkglTestCase_012856_2);

#define VkglTestCase_012857_1 "dEQP-GLES31.functional.texture.specification"
#define VkglTestCase_012857_2 ".texstorage3d.format.srgb8_alpha8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012857, VkglTestCase_012857_1, VkglTestCase_012857_2);

#define VkglTestCase_012858_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012858_2 "on.texstorage3d.format.rgb10_a2_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012858, VkglTestCase_012858_1, VkglTestCase_012858_2);

#define VkglTestCase_012859_1 "dEQP-GLES31.functional.texture.specificatio"
#define VkglTestCase_012859_2 "n.texstorage3d.format.rgb10_a2ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012859, VkglTestCase_012859_1, VkglTestCase_012859_2);

#define VkglTestCase_012860_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012860_2 "tion.texstorage3d.format.rgba4_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012860, VkglTestCase_012860_1, VkglTestCase_012860_2);

#define VkglTestCase_012861_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012861_2 "ion.texstorage3d.format.rgb5_a1_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012861, VkglTestCase_012861_1, VkglTestCase_012861_2);

#define VkglTestCase_012862_1 "dEQP-GLES31.functional.texture.specificatio"
#define VkglTestCase_012862_2 "n.texstorage3d.format.rgba8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012862, VkglTestCase_012862_1, VkglTestCase_012862_2);

#define VkglTestCase_012863_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012863_2 "tion.texstorage3d.format.rgb8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012863, VkglTestCase_012863_1, VkglTestCase_012863_2);

#define VkglTestCase_012864_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012864_2 "ion.texstorage3d.format.rgb565_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012864, VkglTestCase_012864_1, VkglTestCase_012864_2);

#define VkglTestCase_012865_1 "dEQP-GLES31.functional.texture.specification."
#define VkglTestCase_012865_2 "texstorage3d.format.r11f_g11f_b10f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012865, VkglTestCase_012865_1, VkglTestCase_012865_2);

#define VkglTestCase_012866_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012866_2 "ion.texstorage3d.format.rgb32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012866, VkglTestCase_012866_1, VkglTestCase_012866_2);

#define VkglTestCase_012867_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012867_2 "ion.texstorage3d.format.rgb32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012867, VkglTestCase_012867_1, VkglTestCase_012867_2);

#define VkglTestCase_012868_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012868_2 "ion.texstorage3d.format.rgb32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012868, VkglTestCase_012868_1, VkglTestCase_012868_2);

#define VkglTestCase_012869_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012869_2 "ion.texstorage3d.format.rgb16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012869, VkglTestCase_012869_1, VkglTestCase_012869_2);

#define VkglTestCase_012870_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012870_2 "ion.texstorage3d.format.rgb16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012870, VkglTestCase_012870_1, VkglTestCase_012870_2);

#define VkglTestCase_012871_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012871_2 "ion.texstorage3d.format.rgb16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012871, VkglTestCase_012871_1, VkglTestCase_012871_2);

#define VkglTestCase_012872_1 "dEQP-GLES31.functional.texture.specificatio"
#define VkglTestCase_012872_2 "n.texstorage3d.format.rgb8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012872, VkglTestCase_012872_1, VkglTestCase_012872_2);

#define VkglTestCase_012873_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012873_2 "tion.texstorage3d.format.rgb8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012873, VkglTestCase_012873_1, VkglTestCase_012873_2);

#define VkglTestCase_012874_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012874_2 "ion.texstorage3d.format.rgb8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012874, VkglTestCase_012874_1, VkglTestCase_012874_2);

#define VkglTestCase_012875_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012875_2 "tion.texstorage3d.format.srgb8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012875, VkglTestCase_012875_1, VkglTestCase_012875_2);

#define VkglTestCase_012876_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012876_2 "ion.texstorage3d.format.rgb9_e5_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012876, VkglTestCase_012876_1, VkglTestCase_012876_2);

#define VkglTestCase_012877_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012877_2 "tion.texstorage3d.format.rg32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012877, VkglTestCase_012877_1, VkglTestCase_012877_2);

#define VkglTestCase_012878_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012878_2 "tion.texstorage3d.format.rg32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012878, VkglTestCase_012878_1, VkglTestCase_012878_2);

#define VkglTestCase_012879_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012879_2 "ion.texstorage3d.format.rg32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012879, VkglTestCase_012879_1, VkglTestCase_012879_2);

#define VkglTestCase_012880_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012880_2 "tion.texstorage3d.format.rg16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012880, VkglTestCase_012880_1, VkglTestCase_012880_2);

#define VkglTestCase_012881_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012881_2 "tion.texstorage3d.format.rg16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012881, VkglTestCase_012881_1, VkglTestCase_012881_2);

#define VkglTestCase_012882_1 "dEQP-GLES31.functional.texture.specificat"
#define VkglTestCase_012882_2 "ion.texstorage3d.format.rg16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012882, VkglTestCase_012882_1, VkglTestCase_012882_2);

#define VkglTestCase_012883_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012883_2 "ation.texstorage3d.format.rg8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012883, VkglTestCase_012883_1, VkglTestCase_012883_2);

#define VkglTestCase_012884_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012884_2 "tion.texstorage3d.format.rg8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012884, VkglTestCase_012884_1, VkglTestCase_012884_2);

#define VkglTestCase_012885_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012885_2 "tion.texstorage3d.format.rg8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012885, VkglTestCase_012885_1, VkglTestCase_012885_2);

#define VkglTestCase_012886_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012886_2 "on.texstorage3d.format.rg8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012886, VkglTestCase_012886_1, VkglTestCase_012886_2);

#define VkglTestCase_012887_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012887_2 "tion.texstorage3d.format.r32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012887, VkglTestCase_012887_1, VkglTestCase_012887_2);

#define VkglTestCase_012888_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012888_2 "tion.texstorage3d.format.r32i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012888, VkglTestCase_012888_1, VkglTestCase_012888_2);

#define VkglTestCase_012889_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012889_2 "tion.texstorage3d.format.r32ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012889, VkglTestCase_012889_1, VkglTestCase_012889_2);

#define VkglTestCase_012890_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012890_2 "tion.texstorage3d.format.r16f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012890, VkglTestCase_012890_1, VkglTestCase_012890_2);

#define VkglTestCase_012891_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012891_2 "tion.texstorage3d.format.r16i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012891, VkglTestCase_012891_1, VkglTestCase_012891_2);

#define VkglTestCase_012892_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012892_2 "tion.texstorage3d.format.r16ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012892, VkglTestCase_012892_1, VkglTestCase_012892_2);

#define VkglTestCase_012893_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012893_2 "ation.texstorage3d.format.r8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012893, VkglTestCase_012893_1, VkglTestCase_012893_2);

#define VkglTestCase_012894_1 "dEQP-GLES31.functional.texture.specific"
#define VkglTestCase_012894_2 "ation.texstorage3d.format.r8i_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012894, VkglTestCase_012894_1, VkglTestCase_012894_2);

#define VkglTestCase_012895_1 "dEQP-GLES31.functional.texture.specifica"
#define VkglTestCase_012895_2 "tion.texstorage3d.format.r8ui_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012895, VkglTestCase_012895_1, VkglTestCase_012895_2);

#define VkglTestCase_012896_1 "dEQP-GLES31.functional.texture.specificati"
#define VkglTestCase_012896_2 "on.texstorage3d.format.r8_snorm_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012896, VkglTestCase_012896_1, VkglTestCase_012896_2);

#define VkglTestCase_012897_1 "dEQP-GLES31.functional.texture.specification.te"
#define VkglTestCase_012897_2 "xstorage3d.format.depth_component32f_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012897, VkglTestCase_012897_1, VkglTestCase_012897_2);

#define VkglTestCase_012898_1 "dEQP-GLES31.functional.texture.specification.t"
#define VkglTestCase_012898_2 "exstorage3d.format.depth_component24_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012898, VkglTestCase_012898_1, VkglTestCase_012898_2);

#define VkglTestCase_012899_1 "dEQP-GLES31.functional.texture.specification.t"
#define VkglTestCase_012899_2 "exstorage3d.format.depth_component16_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012899, VkglTestCase_012899_1, VkglTestCase_012899_2);

#define VkglTestCase_012900_1 "dEQP-GLES31.functional.texture.specification.t"
#define VkglTestCase_012900_2 "exstorage3d.format.depth32f_stencil8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012900, VkglTestCase_012900_1, VkglTestCase_012900_2);

#define VkglTestCase_012901_1 "dEQP-GLES31.functional.texture.specification.t"
#define VkglTestCase_012901_2 "exstorage3d.format.depth24_stencil8_cube_array"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012901, VkglTestCase_012901_1, VkglTestCase_012901_2);
