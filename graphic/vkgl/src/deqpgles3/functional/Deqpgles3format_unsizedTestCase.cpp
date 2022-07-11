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
#include "../ActsDeqpgles30022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021823_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021823_2 "e.format.unsized.alpha_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021823, VkglTestCase_021823_1, VkglTestCase_021823_2);

#define VkglTestCase_021824_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021824_2 ".format.unsized.alpha_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021824, VkglTestCase_021824_1, VkglTestCase_021824_2);

#define VkglTestCase_021825_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021825_2 ".format.unsized.alpha_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021825, VkglTestCase_021825_1, VkglTestCase_021825_2);

#define VkglTestCase_021826_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_021826_2 "format.unsized.alpha_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021826, VkglTestCase_021826_1, VkglTestCase_021826_2);

#define VkglTestCase_021827_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_021827_2 "ormat.unsized.alpha_2d_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021827, VkglTestCase_021827_1, VkglTestCase_021827_2);

#define VkglTestCase_021828_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_021828_2 "rmat.unsized.alpha_2d_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021828, VkglTestCase_021828_1, VkglTestCase_021828_2);

#define VkglTestCase_021829_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_021829_2 "e.format.unsized.alpha_3d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021829, VkglTestCase_021829_1, VkglTestCase_021829_2);

#define VkglTestCase_021830_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_021830_2 ".format.unsized.alpha_3d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021830, VkglTestCase_021830_1, VkglTestCase_021830_2);

#define VkglTestCase_021831_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_021831_2 "format.unsized.luminance_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021831, VkglTestCase_021831_1, VkglTestCase_021831_2);

#define VkglTestCase_021832_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_021832_2 "ormat.unsized.luminance_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021832, VkglTestCase_021832_1, VkglTestCase_021832_2);

#define VkglTestCase_021833_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_021833_2 "ormat.unsized.luminance_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021833, VkglTestCase_021833_1, VkglTestCase_021833_2);

#define VkglTestCase_021834_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_021834_2 "rmat.unsized.luminance_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021834, VkglTestCase_021834_1, VkglTestCase_021834_2);

#define VkglTestCase_021835_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_021835_2 "mat.unsized.luminance_2d_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021835, VkglTestCase_021835_1, VkglTestCase_021835_2);

#define VkglTestCase_021836_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021836_2 "at.unsized.luminance_2d_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021836, VkglTestCase_021836_1, VkglTestCase_021836_2);

#define VkglTestCase_021837_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_021837_2 "format.unsized.luminance_3d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021837, VkglTestCase_021837_1, VkglTestCase_021837_2);

#define VkglTestCase_021838_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_021838_2 "ormat.unsized.luminance_3d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021838, VkglTestCase_021838_1, VkglTestCase_021838_2);

#define VkglTestCase_021839_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_021839_2 "mat.unsized.luminance_alpha_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021839, VkglTestCase_021839_1, VkglTestCase_021839_2);

#define VkglTestCase_021840_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021840_2 "at.unsized.luminance_alpha_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021840, VkglTestCase_021840_1, VkglTestCase_021840_2);

#define VkglTestCase_021841_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021841_2 "at.unsized.luminance_alpha_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021841, VkglTestCase_021841_1, VkglTestCase_021841_2);

#define VkglTestCase_021842_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_021842_2 "t.unsized.luminance_alpha_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021842, VkglTestCase_021842_1, VkglTestCase_021842_2);

#define VkglTestCase_021843_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_021843_2 ".unsized.luminance_alpha_2d_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021843, VkglTestCase_021843_1, VkglTestCase_021843_2);

#define VkglTestCase_021844_1 "dEQP-GLES3.functional.texture.format."
#define VkglTestCase_021844_2 "unsized.luminance_alpha_2d_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021844, VkglTestCase_021844_1, VkglTestCase_021844_2);

#define VkglTestCase_021845_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_021845_2 "mat.unsized.luminance_alpha_3d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021845, VkglTestCase_021845_1, VkglTestCase_021845_2);

#define VkglTestCase_021846_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021846_2 "at.unsized.luminance_alpha_3d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021846, VkglTestCase_021846_1, VkglTestCase_021846_2);

#define VkglTestCase_021847_1 "dEQP-GLES3.functional.texture.format.u"
#define VkglTestCase_021847_2 "nsized.rgb_unsigned_short_5_6_5_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021847, VkglTestCase_021847_1, VkglTestCase_021847_2);

#define VkglTestCase_021848_1 "dEQP-GLES3.functional.texture.format.u"
#define VkglTestCase_021848_2 "nsized.rgb_unsigned_short_5_6_5_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021848, VkglTestCase_021848_1, VkglTestCase_021848_2);

#define VkglTestCase_021849_1 "dEQP-GLES3.functional.texture.format.un"
#define VkglTestCase_021849_2 "sized.rgb_unsigned_short_5_6_5_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021849, VkglTestCase_021849_1, VkglTestCase_021849_2);

#define VkglTestCase_021850_1 "dEQP-GLES3.functional.texture.format.un"
#define VkglTestCase_021850_2 "sized.rgb_unsigned_short_5_6_5_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021850, VkglTestCase_021850_1, VkglTestCase_021850_2);

#define VkglTestCase_021851_1 "dEQP-GLES3.functional.texture.format.unsi"
#define VkglTestCase_021851_2 "zed.rgb_unsigned_short_5_6_5_2d_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021851, VkglTestCase_021851_1, VkglTestCase_021851_2);

#define VkglTestCase_021852_1 "dEQP-GLES3.functional.texture.format.unsi"
#define VkglTestCase_021852_2 "zed.rgb_unsigned_short_5_6_5_2d_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021852, VkglTestCase_021852_1, VkglTestCase_021852_2);

#define VkglTestCase_021853_1 "dEQP-GLES3.functional.texture.format.u"
#define VkglTestCase_021853_2 "nsized.rgb_unsigned_short_5_6_5_3d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021853, VkglTestCase_021853_1, VkglTestCase_021853_2);

#define VkglTestCase_021854_1 "dEQP-GLES3.functional.texture.format.u"
#define VkglTestCase_021854_2 "nsized.rgb_unsigned_short_5_6_5_3d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021854, VkglTestCase_021854_1, VkglTestCase_021854_2);

#define VkglTestCase_021855_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021855_2 "at.unsized.rgb_unsigned_byte_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021855, VkglTestCase_021855_1, VkglTestCase_021855_2);

#define VkglTestCase_021856_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_021856_2 "t.unsized.rgb_unsigned_byte_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021856, VkglTestCase_021856_1, VkglTestCase_021856_2);

#define VkglTestCase_021857_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_021857_2 "t.unsized.rgb_unsigned_byte_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021857, VkglTestCase_021857_1, VkglTestCase_021857_2);

#define VkglTestCase_021858_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_021858_2 ".unsized.rgb_unsigned_byte_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021858, VkglTestCase_021858_1, VkglTestCase_021858_2);

#define VkglTestCase_021859_1 "dEQP-GLES3.functional.texture.format."
#define VkglTestCase_021859_2 "unsized.rgb_unsigned_byte_2d_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021859, VkglTestCase_021859_1, VkglTestCase_021859_2);

#define VkglTestCase_021860_1 "dEQP-GLES3.functional.texture.format.u"
#define VkglTestCase_021860_2 "nsized.rgb_unsigned_byte_2d_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021860, VkglTestCase_021860_1, VkglTestCase_021860_2);

#define VkglTestCase_021861_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_021861_2 "at.unsized.rgb_unsigned_byte_3d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021861, VkglTestCase_021861_1, VkglTestCase_021861_2);

#define VkglTestCase_021862_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_021862_2 "t.unsized.rgb_unsigned_byte_3d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021862, VkglTestCase_021862_1, VkglTestCase_021862_2);

#define VkglTestCase_021863_1 "dEQP-GLES3.functional.texture.format.un"
#define VkglTestCase_021863_2 "sized.rgba_unsigned_short_4_4_4_4_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021863, VkglTestCase_021863_1, VkglTestCase_021863_2);

#define VkglTestCase_021864_1 "dEQP-GLES3.functional.texture.format.uns"
#define VkglTestCase_021864_2 "ized.rgba_unsigned_short_4_4_4_4_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021864, VkglTestCase_021864_1, VkglTestCase_021864_2);

#define VkglTestCase_021865_1 "dEQP-GLES3.functional.texture.format.uns"
#define VkglTestCase_021865_2 "ized.rgba_unsigned_short_4_4_4_4_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021865, VkglTestCase_021865_1, VkglTestCase_021865_2);

#define VkglTestCase_021866_1 "dEQP-GLES3.functional.texture.format.unsi"
#define VkglTestCase_021866_2 "zed.rgba_unsigned_short_4_4_4_4_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021866, VkglTestCase_021866_1, VkglTestCase_021866_2);

#define VkglTestCase_021867_1 "dEQP-GLES3.functional.texture.format.unsiz"
#define VkglTestCase_021867_2 "ed.rgba_unsigned_short_4_4_4_4_2d_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021867, VkglTestCase_021867_1, VkglTestCase_021867_2);

#define VkglTestCase_021868_1 "dEQP-GLES3.functional.texture.format.unsize"
#define VkglTestCase_021868_2 "d.rgba_unsigned_short_4_4_4_4_2d_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021868, VkglTestCase_021868_1, VkglTestCase_021868_2);

#define VkglTestCase_021869_1 "dEQP-GLES3.functional.texture.format.un"
#define VkglTestCase_021869_2 "sized.rgba_unsigned_short_4_4_4_4_3d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021869, VkglTestCase_021869_1, VkglTestCase_021869_2);

#define VkglTestCase_021870_1 "dEQP-GLES3.functional.texture.format.uns"
#define VkglTestCase_021870_2 "ized.rgba_unsigned_short_4_4_4_4_3d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021870, VkglTestCase_021870_1, VkglTestCase_021870_2);

#define VkglTestCase_021871_1 "dEQP-GLES3.functional.texture.format.un"
#define VkglTestCase_021871_2 "sized.rgba_unsigned_short_5_5_5_1_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021871, VkglTestCase_021871_1, VkglTestCase_021871_2);

#define VkglTestCase_021872_1 "dEQP-GLES3.functional.texture.format.uns"
#define VkglTestCase_021872_2 "ized.rgba_unsigned_short_5_5_5_1_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021872, VkglTestCase_021872_1, VkglTestCase_021872_2);

#define VkglTestCase_021873_1 "dEQP-GLES3.functional.texture.format.uns"
#define VkglTestCase_021873_2 "ized.rgba_unsigned_short_5_5_5_1_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021873, VkglTestCase_021873_1, VkglTestCase_021873_2);

#define VkglTestCase_021874_1 "dEQP-GLES3.functional.texture.format.unsi"
#define VkglTestCase_021874_2 "zed.rgba_unsigned_short_5_5_5_1_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021874, VkglTestCase_021874_1, VkglTestCase_021874_2);

#define VkglTestCase_021875_1 "dEQP-GLES3.functional.texture.format.unsiz"
#define VkglTestCase_021875_2 "ed.rgba_unsigned_short_5_5_5_1_2d_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021875, VkglTestCase_021875_1, VkglTestCase_021875_2);

#define VkglTestCase_021876_1 "dEQP-GLES3.functional.texture.format.unsize"
#define VkglTestCase_021876_2 "d.rgba_unsigned_short_5_5_5_1_2d_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021876, VkglTestCase_021876_1, VkglTestCase_021876_2);

#define VkglTestCase_021877_1 "dEQP-GLES3.functional.texture.format.un"
#define VkglTestCase_021877_2 "sized.rgba_unsigned_short_5_5_5_1_3d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021877, VkglTestCase_021877_1, VkglTestCase_021877_2);

#define VkglTestCase_021878_1 "dEQP-GLES3.functional.texture.format.uns"
#define VkglTestCase_021878_2 "ized.rgba_unsigned_short_5_5_5_1_3d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021878, VkglTestCase_021878_1, VkglTestCase_021878_2);

#define VkglTestCase_021879_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_021879_2 "t.unsized.rgba_unsigned_byte_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021879, VkglTestCase_021879_1, VkglTestCase_021879_2);

#define VkglTestCase_021880_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_021880_2 "t.unsized.rgba_unsigned_byte_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021880, VkglTestCase_021880_1, VkglTestCase_021880_2);

#define VkglTestCase_021881_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_021881_2 ".unsized.rgba_unsigned_byte_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021881, VkglTestCase_021881_1, VkglTestCase_021881_2);

#define VkglTestCase_021882_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_021882_2 ".unsized.rgba_unsigned_byte_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021882, VkglTestCase_021882_1, VkglTestCase_021882_2);

#define VkglTestCase_021883_1 "dEQP-GLES3.functional.texture.format.u"
#define VkglTestCase_021883_2 "nsized.rgba_unsigned_byte_2d_array_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021883, VkglTestCase_021883_1, VkglTestCase_021883_2);

#define VkglTestCase_021884_1 "dEQP-GLES3.functional.texture.format.u"
#define VkglTestCase_021884_2 "nsized.rgba_unsigned_byte_2d_array_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021884, VkglTestCase_021884_1, VkglTestCase_021884_2);

#define VkglTestCase_021885_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_021885_2 "t.unsized.rgba_unsigned_byte_3d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021885, VkglTestCase_021885_1, VkglTestCase_021885_2);

#define VkglTestCase_021886_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_021886_2 "t.unsized.rgba_unsigned_byte_3d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021886, VkglTestCase_021886_1, VkglTestCase_021886_2);
