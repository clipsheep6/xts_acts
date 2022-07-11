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

#define VkglTestCase_026830_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026830_2 "ion.texstorage3d.format.rgba32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026830, VkglTestCase_026830_1, VkglTestCase_026830_2);

#define VkglTestCase_026831_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026831_2 "cation.texstorage3d.format.rgba32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026831, VkglTestCase_026831_1, VkglTestCase_026831_2);

#define VkglTestCase_026832_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026832_2 "ion.texstorage3d.format.rgba32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026832, VkglTestCase_026832_1, VkglTestCase_026832_2);

#define VkglTestCase_026833_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026833_2 "cation.texstorage3d.format.rgba32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026833, VkglTestCase_026833_1, VkglTestCase_026833_2);

#define VkglTestCase_026834_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026834_2 "ion.texstorage3d.format.rgba32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026834, VkglTestCase_026834_1, VkglTestCase_026834_2);

#define VkglTestCase_026835_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026835_2 "cation.texstorage3d.format.rgba32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026835, VkglTestCase_026835_1, VkglTestCase_026835_2);

#define VkglTestCase_026836_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026836_2 "ion.texstorage3d.format.rgba16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026836, VkglTestCase_026836_1, VkglTestCase_026836_2);

#define VkglTestCase_026837_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026837_2 "cation.texstorage3d.format.rgba16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026837, VkglTestCase_026837_1, VkglTestCase_026837_2);

#define VkglTestCase_026838_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026838_2 "ion.texstorage3d.format.rgba16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026838, VkglTestCase_026838_1, VkglTestCase_026838_2);

#define VkglTestCase_026839_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026839_2 "cation.texstorage3d.format.rgba16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026839, VkglTestCase_026839_1, VkglTestCase_026839_2);

#define VkglTestCase_026840_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026840_2 "ion.texstorage3d.format.rgba16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026840, VkglTestCase_026840_1, VkglTestCase_026840_2);

#define VkglTestCase_026841_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026841_2 "cation.texstorage3d.format.rgba16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026841, VkglTestCase_026841_1, VkglTestCase_026841_2);

#define VkglTestCase_026842_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026842_2 "tion.texstorage3d.format.rgba8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026842, VkglTestCase_026842_1, VkglTestCase_026842_2);

#define VkglTestCase_026843_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026843_2 "ication.texstorage3d.format.rgba8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026843, VkglTestCase_026843_1, VkglTestCase_026843_2);

#define VkglTestCase_026844_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026844_2 "tion.texstorage3d.format.rgba8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026844, VkglTestCase_026844_1, VkglTestCase_026844_2);

#define VkglTestCase_026845_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026845_2 "ication.texstorage3d.format.rgba8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026845, VkglTestCase_026845_1, VkglTestCase_026845_2);

#define VkglTestCase_026846_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026846_2 "ion.texstorage3d.format.rgba8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026846, VkglTestCase_026846_1, VkglTestCase_026846_2);

#define VkglTestCase_026847_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026847_2 "cation.texstorage3d.format.rgba8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026847, VkglTestCase_026847_1, VkglTestCase_026847_2);

#define VkglTestCase_026848_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026848_2 "n.texstorage3d.format.srgb8_alpha8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026848, VkglTestCase_026848_1, VkglTestCase_026848_2);

#define VkglTestCase_026849_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026849_2 "tion.texstorage3d.format.srgb8_alpha8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026849, VkglTestCase_026849_1, VkglTestCase_026849_2);

#define VkglTestCase_026850_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026850_2 "ion.texstorage3d.format.rgb10_a2_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026850, VkglTestCase_026850_1, VkglTestCase_026850_2);

#define VkglTestCase_026851_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026851_2 "cation.texstorage3d.format.rgb10_a2_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026851, VkglTestCase_026851_1, VkglTestCase_026851_2);

#define VkglTestCase_026852_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026852_2 "on.texstorage3d.format.rgb10_a2ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026852, VkglTestCase_026852_1, VkglTestCase_026852_2);

#define VkglTestCase_026853_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026853_2 "ation.texstorage3d.format.rgb10_a2ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026853, VkglTestCase_026853_1, VkglTestCase_026853_2);

#define VkglTestCase_026854_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026854_2 "tion.texstorage3d.format.rgba4_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026854, VkglTestCase_026854_1, VkglTestCase_026854_2);

#define VkglTestCase_026855_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026855_2 "ication.texstorage3d.format.rgba4_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026855, VkglTestCase_026855_1, VkglTestCase_026855_2);

#define VkglTestCase_026856_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026856_2 "ion.texstorage3d.format.rgb5_a1_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026856, VkglTestCase_026856_1, VkglTestCase_026856_2);

#define VkglTestCase_026857_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026857_2 "cation.texstorage3d.format.rgb5_a1_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026857, VkglTestCase_026857_1, VkglTestCase_026857_2);

#define VkglTestCase_026858_1 "dEQP-GLES3.functional.texture.specificatio"
#define VkglTestCase_026858_2 "n.texstorage3d.format.rgba8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026858, VkglTestCase_026858_1, VkglTestCase_026858_2);

#define VkglTestCase_026859_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026859_2 "tion.texstorage3d.format.rgba8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026859, VkglTestCase_026859_1, VkglTestCase_026859_2);

#define VkglTestCase_026860_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026860_2 "ation.texstorage3d.format.rgb8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026860, VkglTestCase_026860_1, VkglTestCase_026860_2);

#define VkglTestCase_026861_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026861_2 "fication.texstorage3d.format.rgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026861, VkglTestCase_026861_1, VkglTestCase_026861_2);

#define VkglTestCase_026862_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026862_2 "tion.texstorage3d.format.rgb565_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026862, VkglTestCase_026862_1, VkglTestCase_026862_2);

#define VkglTestCase_026863_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026863_2 "ication.texstorage3d.format.rgb565_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026863, VkglTestCase_026863_1, VkglTestCase_026863_2);

#define VkglTestCase_026864_1 "dEQP-GLES3.functional.texture.specification"
#define VkglTestCase_026864_2 ".texstorage3d.format.r11f_g11f_b10f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026864, VkglTestCase_026864_1, VkglTestCase_026864_2);

#define VkglTestCase_026865_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026865_2 "ion.texstorage3d.format.r11f_g11f_b10f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026865, VkglTestCase_026865_1, VkglTestCase_026865_2);

#define VkglTestCase_026866_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026866_2 "tion.texstorage3d.format.rgb32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026866, VkglTestCase_026866_1, VkglTestCase_026866_2);

#define VkglTestCase_026867_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026867_2 "ication.texstorage3d.format.rgb32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026867, VkglTestCase_026867_1, VkglTestCase_026867_2);

#define VkglTestCase_026868_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026868_2 "tion.texstorage3d.format.rgb32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026868, VkglTestCase_026868_1, VkglTestCase_026868_2);

#define VkglTestCase_026869_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026869_2 "ication.texstorage3d.format.rgb32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026869, VkglTestCase_026869_1, VkglTestCase_026869_2);

#define VkglTestCase_026870_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026870_2 "ion.texstorage3d.format.rgb32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026870, VkglTestCase_026870_1, VkglTestCase_026870_2);

#define VkglTestCase_026871_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026871_2 "cation.texstorage3d.format.rgb32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026871, VkglTestCase_026871_1, VkglTestCase_026871_2);

#define VkglTestCase_026872_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026872_2 "tion.texstorage3d.format.rgb16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026872, VkglTestCase_026872_1, VkglTestCase_026872_2);

#define VkglTestCase_026873_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026873_2 "ication.texstorage3d.format.rgb16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026873, VkglTestCase_026873_1, VkglTestCase_026873_2);

#define VkglTestCase_026874_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026874_2 "tion.texstorage3d.format.rgb16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026874, VkglTestCase_026874_1, VkglTestCase_026874_2);

#define VkglTestCase_026875_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026875_2 "ication.texstorage3d.format.rgb16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026875, VkglTestCase_026875_1, VkglTestCase_026875_2);

#define VkglTestCase_026876_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026876_2 "ion.texstorage3d.format.rgb16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026876, VkglTestCase_026876_1, VkglTestCase_026876_2);

#define VkglTestCase_026877_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026877_2 "cation.texstorage3d.format.rgb16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026877, VkglTestCase_026877_1, VkglTestCase_026877_2);

#define VkglTestCase_026878_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026878_2 "on.texstorage3d.format.rgb8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026878, VkglTestCase_026878_1, VkglTestCase_026878_2);

#define VkglTestCase_026879_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026879_2 "ation.texstorage3d.format.rgb8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026879, VkglTestCase_026879_1, VkglTestCase_026879_2);

#define VkglTestCase_026880_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026880_2 "tion.texstorage3d.format.rgb8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026880, VkglTestCase_026880_1, VkglTestCase_026880_2);

#define VkglTestCase_026881_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026881_2 "ication.texstorage3d.format.rgb8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026881, VkglTestCase_026881_1, VkglTestCase_026881_2);

#define VkglTestCase_026882_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026882_2 "tion.texstorage3d.format.rgb8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026882, VkglTestCase_026882_1, VkglTestCase_026882_2);

#define VkglTestCase_026883_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026883_2 "ication.texstorage3d.format.rgb8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026883, VkglTestCase_026883_1, VkglTestCase_026883_2);

#define VkglTestCase_026884_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026884_2 "tion.texstorage3d.format.srgb8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026884, VkglTestCase_026884_1, VkglTestCase_026884_2);

#define VkglTestCase_026885_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026885_2 "ication.texstorage3d.format.srgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026885, VkglTestCase_026885_1, VkglTestCase_026885_2);

#define VkglTestCase_026886_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026886_2 "ion.texstorage3d.format.rgb9_e5_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026886, VkglTestCase_026886_1, VkglTestCase_026886_2);

#define VkglTestCase_026887_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026887_2 "cation.texstorage3d.format.rgb9_e5_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026887, VkglTestCase_026887_1, VkglTestCase_026887_2);

#define VkglTestCase_026888_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026888_2 "tion.texstorage3d.format.rg32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026888, VkglTestCase_026888_1, VkglTestCase_026888_2);

#define VkglTestCase_026889_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026889_2 "ication.texstorage3d.format.rg32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026889, VkglTestCase_026889_1, VkglTestCase_026889_2);

#define VkglTestCase_026890_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026890_2 "tion.texstorage3d.format.rg32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026890, VkglTestCase_026890_1, VkglTestCase_026890_2);

#define VkglTestCase_026891_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026891_2 "ication.texstorage3d.format.rg32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026891, VkglTestCase_026891_1, VkglTestCase_026891_2);

#define VkglTestCase_026892_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026892_2 "tion.texstorage3d.format.rg32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026892, VkglTestCase_026892_1, VkglTestCase_026892_2);

#define VkglTestCase_026893_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026893_2 "ication.texstorage3d.format.rg32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026893, VkglTestCase_026893_1, VkglTestCase_026893_2);

#define VkglTestCase_026894_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026894_2 "tion.texstorage3d.format.rg16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026894, VkglTestCase_026894_1, VkglTestCase_026894_2);

#define VkglTestCase_026895_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026895_2 "ication.texstorage3d.format.rg16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026895, VkglTestCase_026895_1, VkglTestCase_026895_2);

#define VkglTestCase_026896_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026896_2 "tion.texstorage3d.format.rg16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026896, VkglTestCase_026896_1, VkglTestCase_026896_2);

#define VkglTestCase_026897_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026897_2 "ication.texstorage3d.format.rg16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026897, VkglTestCase_026897_1, VkglTestCase_026897_2);

#define VkglTestCase_026898_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026898_2 "tion.texstorage3d.format.rg16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026898, VkglTestCase_026898_1, VkglTestCase_026898_2);

#define VkglTestCase_026899_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026899_2 "ication.texstorage3d.format.rg16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026899, VkglTestCase_026899_1, VkglTestCase_026899_2);

#define VkglTestCase_026900_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026900_2 "ation.texstorage3d.format.rg8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026900, VkglTestCase_026900_1, VkglTestCase_026900_2);

#define VkglTestCase_026901_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026901_2 "fication.texstorage3d.format.rg8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026901, VkglTestCase_026901_1, VkglTestCase_026901_2);

#define VkglTestCase_026902_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026902_2 "ation.texstorage3d.format.rg8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026902, VkglTestCase_026902_1, VkglTestCase_026902_2);

#define VkglTestCase_026903_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026903_2 "fication.texstorage3d.format.rg8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026903, VkglTestCase_026903_1, VkglTestCase_026903_2);

#define VkglTestCase_026904_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026904_2 "tion.texstorage3d.format.rg8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026904, VkglTestCase_026904_1, VkglTestCase_026904_2);

#define VkglTestCase_026905_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026905_2 "ication.texstorage3d.format.rg8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026905, VkglTestCase_026905_1, VkglTestCase_026905_2);

#define VkglTestCase_026906_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026906_2 "on.texstorage3d.format.rg8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026906, VkglTestCase_026906_1, VkglTestCase_026906_2);

#define VkglTestCase_026907_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026907_2 "ation.texstorage3d.format.rg8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026907, VkglTestCase_026907_1, VkglTestCase_026907_2);

#define VkglTestCase_026908_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026908_2 "ation.texstorage3d.format.r32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026908, VkglTestCase_026908_1, VkglTestCase_026908_2);

#define VkglTestCase_026909_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026909_2 "fication.texstorage3d.format.r32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026909, VkglTestCase_026909_1, VkglTestCase_026909_2);

#define VkglTestCase_026910_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026910_2 "ation.texstorage3d.format.r32i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026910, VkglTestCase_026910_1, VkglTestCase_026910_2);

#define VkglTestCase_026911_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026911_2 "fication.texstorage3d.format.r32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026911, VkglTestCase_026911_1, VkglTestCase_026911_2);

#define VkglTestCase_026912_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026912_2 "tion.texstorage3d.format.r32ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026912, VkglTestCase_026912_1, VkglTestCase_026912_2);

#define VkglTestCase_026913_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026913_2 "ication.texstorage3d.format.r32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026913, VkglTestCase_026913_1, VkglTestCase_026913_2);

#define VkglTestCase_026914_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026914_2 "ation.texstorage3d.format.r16f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026914, VkglTestCase_026914_1, VkglTestCase_026914_2);

#define VkglTestCase_026915_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026915_2 "fication.texstorage3d.format.r16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026915, VkglTestCase_026915_1, VkglTestCase_026915_2);

#define VkglTestCase_026916_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026916_2 "ation.texstorage3d.format.r16i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026916, VkglTestCase_026916_1, VkglTestCase_026916_2);

#define VkglTestCase_026917_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026917_2 "fication.texstorage3d.format.r16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026917, VkglTestCase_026917_1, VkglTestCase_026917_2);

#define VkglTestCase_026918_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026918_2 "tion.texstorage3d.format.r16ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026918, VkglTestCase_026918_1, VkglTestCase_026918_2);

#define VkglTestCase_026919_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026919_2 "ication.texstorage3d.format.r16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026919, VkglTestCase_026919_1, VkglTestCase_026919_2);

#define VkglTestCase_026920_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026920_2 "cation.texstorage3d.format.r8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026920, VkglTestCase_026920_1, VkglTestCase_026920_2);

#define VkglTestCase_026921_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026921_2 "ification.texstorage3d.format.r8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026921, VkglTestCase_026921_1, VkglTestCase_026921_2);

#define VkglTestCase_026922_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026922_2 "ation.texstorage3d.format.r8i_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026922, VkglTestCase_026922_1, VkglTestCase_026922_2);

#define VkglTestCase_026923_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026923_2 "fication.texstorage3d.format.r8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026923, VkglTestCase_026923_1, VkglTestCase_026923_2);

#define VkglTestCase_026924_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026924_2 "ation.texstorage3d.format.r8ui_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026924, VkglTestCase_026924_1, VkglTestCase_026924_2);

#define VkglTestCase_026925_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026925_2 "fication.texstorage3d.format.r8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026925, VkglTestCase_026925_1, VkglTestCase_026925_2);

#define VkglTestCase_026926_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026926_2 "ion.texstorage3d.format.r8_snorm_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026926, VkglTestCase_026926_1, VkglTestCase_026926_2);

#define VkglTestCase_026927_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026927_2 "cation.texstorage3d.format.r8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026927, VkglTestCase_026927_1, VkglTestCase_026927_2);

#define VkglTestCase_026928_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026928_2 "exstorage3d.format.depth_component32f_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026928, VkglTestCase_026928_1, VkglTestCase_026928_2);

#define VkglTestCase_026929_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026929_2 "exstorage3d.format.depth_component24_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026929, VkglTestCase_026929_1, VkglTestCase_026929_2);

#define VkglTestCase_026930_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026930_2 "exstorage3d.format.depth_component16_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026930, VkglTestCase_026930_1, VkglTestCase_026930_2);

#define VkglTestCase_026931_1 "dEQP-GLES3.functional.texture.specification.t"
#define VkglTestCase_026931_2 "exstorage3d.format.depth32f_stencil8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026931, VkglTestCase_026931_1, VkglTestCase_026931_2);

#define VkglTestCase_026932_1 "dEQP-GLES3.functional.texture.specification."
#define VkglTestCase_026932_2 "texstorage3d.format.depth24_stencil8_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026932, VkglTestCase_026932_1, VkglTestCase_026932_2);
