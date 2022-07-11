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
#include "../ActsDeqpgles30042TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_041956_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041956_2 "ve_api.texture.activetexture"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041956, VkglTestCase_041956_1, VkglTestCase_041956_2);

#define VkglTestCase_041957_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_041957_2 "ive_api.texture.bindtexture"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041957, VkglTestCase_041957_1, VkglTestCase_041957_2);

#define VkglTestCase_041958_1 "dEQP-GLES3.functional.negative_api.text"
#define VkglTestCase_041958_2 "ure.compressedteximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041958, VkglTestCase_041958_1, VkglTestCase_041958_2);

#define VkglTestCase_041959_1 "dEQP-GLES3.functional.negative_api.text"
#define VkglTestCase_041959_2 "ure.compressedteximage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041959, VkglTestCase_041959_1, VkglTestCase_041959_2);

#define VkglTestCase_041960_1 "dEQP-GLES3.functional.negative_api.t"
#define VkglTestCase_041960_2 "exture.compressedteximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041960, VkglTestCase_041960_1, VkglTestCase_041960_2);

#define VkglTestCase_041961_1 "dEQP-GLES3.functional.negative_api.t"
#define VkglTestCase_041961_2 "exture.compressedteximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041961, VkglTestCase_041961_1, VkglTestCase_041961_2);

#define VkglTestCase_041962_1 "dEQP-GLES3.functional.negative_api.textu"
#define VkglTestCase_041962_2 "re.compressedteximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041962, VkglTestCase_041962_1, VkglTestCase_041962_2);

#define VkglTestCase_041963_1 "dEQP-GLES3.functional.negative_api.textu"
#define VkglTestCase_041963_2 "re.compressedteximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041963, VkglTestCase_041963_1, VkglTestCase_041963_2);

#define VkglTestCase_041964_1 "dEQP-GLES3.functional.negative_api.text"
#define VkglTestCase_041964_2 "ure.compressedteximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041964, VkglTestCase_041964_1, VkglTestCase_041964_2);

#define VkglTestCase_041965_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_041965_2 "ture.compressedteximage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041965, VkglTestCase_041965_1, VkglTestCase_041965_2);

#define VkglTestCase_041966_1 "dEQP-GLES3.functional.negative_api.texture"
#define VkglTestCase_041966_2 ".compressedteximage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041966, VkglTestCase_041966_1, VkglTestCase_041966_2);

#define VkglTestCase_041967_1 "dEQP-GLES3.functional.negative_api.textur"
#define VkglTestCase_041967_2 "e.compressedteximage2d_invalid_astc_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041967, VkglTestCase_041967_1, VkglTestCase_041967_2);

#define VkglTestCase_041968_1 "dEQP-GLES3.functional.negative_api.t"
#define VkglTestCase_041968_2 "exture.copyteximage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041968, VkglTestCase_041968_1, VkglTestCase_041968_2);

#define VkglTestCase_041969_1 "dEQP-GLES3.functional.negative_api.t"
#define VkglTestCase_041969_2 "exture.copyteximage2d_invalid_format"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041969, VkglTestCase_041969_1, VkglTestCase_041969_2);

#define VkglTestCase_041970_1 "dEQP-GLES3.functional.negative_api.textur"
#define VkglTestCase_041970_2 "e.copyteximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041970, VkglTestCase_041970_1, VkglTestCase_041970_2);

#define VkglTestCase_041971_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_041971_2 "i.texture.copyteximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041971, VkglTestCase_041971_1, VkglTestCase_041971_2);

#define VkglTestCase_041972_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_041972_2 "i.texture.copyteximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041972, VkglTestCase_041972_1, VkglTestCase_041972_2);

#define VkglTestCase_041973_1 "dEQP-GLES3.functional.negative_api.te"
#define VkglTestCase_041973_2 "xture.copyteximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041973, VkglTestCase_041973_1, VkglTestCase_041973_2);

#define VkglTestCase_041974_1 "dEQP-GLES3.functional.negative_api.te"
#define VkglTestCase_041974_2 "xture.copyteximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041974, VkglTestCase_041974_1, VkglTestCase_041974_2);

#define VkglTestCase_041975_1 "dEQP-GLES3.functional.negative_api.t"
#define VkglTestCase_041975_2 "exture.copyteximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041975, VkglTestCase_041975_1, VkglTestCase_041975_2);

#define VkglTestCase_041976_1 "dEQP-GLES3.functional.negative_api.textu"
#define VkglTestCase_041976_2 "re.copyteximage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041976, VkglTestCase_041976_1, VkglTestCase_041976_2);

#define VkglTestCase_041977_1 "dEQP-GLES3.functional.negative_api.te"
#define VkglTestCase_041977_2 "xture.copytexsubimage2d_invalid_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041977, VkglTestCase_041977_1, VkglTestCase_041977_2);

#define VkglTestCase_041978_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_041978_2 "texture.copytexsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041978, VkglTestCase_041978_1, VkglTestCase_041978_2);

#define VkglTestCase_041979_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_041979_2 "texture.copytexsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041979, VkglTestCase_041979_1, VkglTestCase_041979_2);

#define VkglTestCase_041980_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_041980_2 "texture.copytexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041980, VkglTestCase_041980_1, VkglTestCase_041980_2);

#define VkglTestCase_041981_1 "dEQP-GLES3.functional.negative_api.te"
#define VkglTestCase_041981_2 "xture.copytexsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041981, VkglTestCase_041981_1, VkglTestCase_041981_2);

#define VkglTestCase_041982_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_041982_2 "ture.copytexsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041982, VkglTestCase_041982_1, VkglTestCase_041982_2);

#define VkglTestCase_041983_1 "dEQP-GLES3.functional.negative_api.textur"
#define VkglTestCase_041983_2 "e.copytexsubimage2d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041983, VkglTestCase_041983_1, VkglTestCase_041983_2);

#define VkglTestCase_041984_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041984_2 "ve_api.texture.deletetextures"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041984, VkglTestCase_041984_1, VkglTestCase_041984_2);

#define VkglTestCase_041985_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041985_2 "ve_api.texture.generatemipmap"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041985, VkglTestCase_041985_1, VkglTestCase_041985_2);

#define VkglTestCase_041986_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_041986_2 "ive_api.texture.gentextures"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041986, VkglTestCase_041986_1, VkglTestCase_041986_2);

#define VkglTestCase_041987_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_041987_2 "ive_api.texture.pixelstorei"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041987, VkglTestCase_041987_1, VkglTestCase_041987_2);

#define VkglTestCase_041988_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_041988_2 "tive_api.texture.teximage2d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041988, VkglTestCase_041988_1, VkglTestCase_041988_2);

#define VkglTestCase_041989_1 "dEQP-GLES3.functional.negative_api.text"
#define VkglTestCase_041989_2 "ure.teximage2d_inequal_width_height_cube"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041989, VkglTestCase_041989_1, VkglTestCase_041989_2);

#define VkglTestCase_041990_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_041990_2 "api.texture.teximage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041990, VkglTestCase_041990_1, VkglTestCase_041990_2);

#define VkglTestCase_041991_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_041991_2 "api.texture.teximage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041991, VkglTestCase_041991_1, VkglTestCase_041991_2);

#define VkglTestCase_041992_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_041992_2 "texture.teximage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041992, VkglTestCase_041992_1, VkglTestCase_041992_2);

#define VkglTestCase_041993_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_041993_2 "texture.teximage2d_max_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041993, VkglTestCase_041993_1, VkglTestCase_041993_2);

#define VkglTestCase_041994_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_041994_2 ".texture.teximage2d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041994, VkglTestCase_041994_1, VkglTestCase_041994_2);

#define VkglTestCase_041995_1 "dEQP-GLES3.functional.negative_api.te"
#define VkglTestCase_041995_2 "xture.teximage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041995, VkglTestCase_041995_1, VkglTestCase_041995_2);

#define VkglTestCase_041996_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_041996_2 "ve_api.texture.texsubimage2d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041996, VkglTestCase_041996_1, VkglTestCase_041996_2);

#define VkglTestCase_041997_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_041997_2 "i.texture.texsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041997, VkglTestCase_041997_1, VkglTestCase_041997_2);

#define VkglTestCase_041998_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_041998_2 "i.texture.texsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041998, VkglTestCase_041998_1, VkglTestCase_041998_2);

#define VkglTestCase_041999_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_041999_2 "i.texture.texsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041999, VkglTestCase_041999_1, VkglTestCase_041999_2);

#define VkglTestCase_042000_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042000_2 "texture.texsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042000, VkglTestCase_042000_1, VkglTestCase_042000_2);

#define VkglTestCase_042001_1 "dEQP-GLES3.functional.negative_api.t"
#define VkglTestCase_042001_2 "exture.texsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042001, VkglTestCase_042001_1, VkglTestCase_042001_2);

#define VkglTestCase_042002_1 "dEQP-GLES3.functional.negative_api.text"
#define VkglTestCase_042002_2 "ure.texsubimage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042002, VkglTestCase_042002_1, VkglTestCase_042002_2);

#define VkglTestCase_042003_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042003_2 "ve_api.texture.texparameteri"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042003, VkglTestCase_042003_1, VkglTestCase_042003_2);

#define VkglTestCase_042004_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042004_2 "ve_api.texture.texparameterf"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042004, VkglTestCase_042004_1, VkglTestCase_042004_2);

#define VkglTestCase_042005_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042005_2 "ve_api.texture.texparameteriv"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042005, VkglTestCase_042005_1, VkglTestCase_042005_2);

#define VkglTestCase_042006_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042006_2 "ve_api.texture.texparameterfv"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042006, VkglTestCase_042006_1, VkglTestCase_042006_2);

#define VkglTestCase_042007_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042007_2 "i.texture.compressedtexsubimage2d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042007, VkglTestCase_042007_1, VkglTestCase_042007_2);

#define VkglTestCase_042008_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042008_2 "ture.compressedtexsubimage2d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042008, VkglTestCase_042008_1, VkglTestCase_042008_2);

#define VkglTestCase_042009_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042009_2 "ture.compressedtexsubimage2d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042009, VkglTestCase_042009_1, VkglTestCase_042009_2);

#define VkglTestCase_042010_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042010_2 "ture.compressedtexsubimage2d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042010, VkglTestCase_042010_1, VkglTestCase_042010_2);

#define VkglTestCase_042011_1 "dEQP-GLES3.functional.negative_api.textu"
#define VkglTestCase_042011_2 "re.compressedtexsubimage2d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042011, VkglTestCase_042011_1, VkglTestCase_042011_2);

#define VkglTestCase_042012_1 "dEQP-GLES3.functional.negative_api.textur"
#define VkglTestCase_042012_2 "e.compressedtexsubimage2d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042012, VkglTestCase_042012_1, VkglTestCase_042012_2);

#define VkglTestCase_042013_1 "dEQP-GLES3.functional.negative_api.text"
#define VkglTestCase_042013_2 "ure.compressedtexsubimage2d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042013, VkglTestCase_042013_1, VkglTestCase_042013_2);

#define VkglTestCase_042014_1 "dEQP-GLES3.functional.negative_api.texture.c"
#define VkglTestCase_042014_2 "ompressedtexsubimage2d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042014, VkglTestCase_042014_1, VkglTestCase_042014_2);

#define VkglTestCase_042015_1 "dEQP-GLES3.functional.nega"
#define VkglTestCase_042015_2 "tive_api.texture.teximage3d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042015, VkglTestCase_042015_1, VkglTestCase_042015_2);

#define VkglTestCase_042016_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042016_2 "api.texture.teximage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042016, VkglTestCase_042016_1, VkglTestCase_042016_2);

#define VkglTestCase_042017_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042017_2 "api.texture.teximage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042017, VkglTestCase_042017_1, VkglTestCase_042017_2);

#define VkglTestCase_042018_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042018_2 "ture.teximage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042018, VkglTestCase_042018_1, VkglTestCase_042018_2);

#define VkglTestCase_042019_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042019_2 "ture.teximage3d_max_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042019, VkglTestCase_042019_1, VkglTestCase_042019_2);

#define VkglTestCase_042020_1 "dEQP-GLES3.functional.negative_api"
#define VkglTestCase_042020_2 ".texture.teximage3d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042020, VkglTestCase_042020_1, VkglTestCase_042020_2);

#define VkglTestCase_042021_1 "dEQP-GLES3.functional.negative_api.te"
#define VkglTestCase_042021_2 "xture.teximage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042021, VkglTestCase_042021_1, VkglTestCase_042021_2);

#define VkglTestCase_042022_1 "dEQP-GLES3.functional.negati"
#define VkglTestCase_042022_2 "ve_api.texture.texsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042022, VkglTestCase_042022_1, VkglTestCase_042022_2);

#define VkglTestCase_042023_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042023_2 "i.texture.texsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042023, VkglTestCase_042023_1, VkglTestCase_042023_2);

#define VkglTestCase_042024_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042024_2 "i.texture.texsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042024, VkglTestCase_042024_1, VkglTestCase_042024_2);

#define VkglTestCase_042025_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042025_2 "i.texture.texsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042025, VkglTestCase_042025_1, VkglTestCase_042025_2);

#define VkglTestCase_042026_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042026_2 "texture.texsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042026, VkglTestCase_042026_1, VkglTestCase_042026_2);

#define VkglTestCase_042027_1 "dEQP-GLES3.functional.negative_api.t"
#define VkglTestCase_042027_2 "exture.texsubimage3d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042027, VkglTestCase_042027_1, VkglTestCase_042027_2);

#define VkglTestCase_042028_1 "dEQP-GLES3.functional.negative_api.text"
#define VkglTestCase_042028_2 "ure.texsubimage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042028, VkglTestCase_042028_1, VkglTestCase_042028_2);

#define VkglTestCase_042029_1 "dEQP-GLES3.functional.negative"
#define VkglTestCase_042029_2 "_api.texture.copytexsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042029, VkglTestCase_042029_1, VkglTestCase_042029_2);

#define VkglTestCase_042030_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042030_2 "texture.copytexsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042030, VkglTestCase_042030_1, VkglTestCase_042030_2);

#define VkglTestCase_042031_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042031_2 "texture.copytexsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042031, VkglTestCase_042031_1, VkglTestCase_042031_2);

#define VkglTestCase_042032_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042032_2 "texture.copytexsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042032, VkglTestCase_042032_1, VkglTestCase_042032_2);

#define VkglTestCase_042033_1 "dEQP-GLES3.functional.negative_api.te"
#define VkglTestCase_042033_2 "xture.copytexsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042033, VkglTestCase_042033_1, VkglTestCase_042033_2);

#define VkglTestCase_042034_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042034_2 "ture.copytexsubimage3d_neg_width_height"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042034, VkglTestCase_042034_1, VkglTestCase_042034_2);

#define VkglTestCase_042035_1 "dEQP-GLES3.functional.negative_api.textur"
#define VkglTestCase_042035_2 "e.copytexsubimage3d_incomplete_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042035, VkglTestCase_042035_1, VkglTestCase_042035_2);

#define VkglTestCase_042036_1 "dEQP-GLES3.functional.negative_"
#define VkglTestCase_042036_2 "api.texture.compressedteximage3d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042036, VkglTestCase_042036_1, VkglTestCase_042036_2);

#define VkglTestCase_042037_1 "dEQP-GLES3.functional.negative_api.t"
#define VkglTestCase_042037_2 "exture.compressedteximage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042037, VkglTestCase_042037_1, VkglTestCase_042037_2);

#define VkglTestCase_042038_1 "dEQP-GLES3.functional.negative_api.t"
#define VkglTestCase_042038_2 "exture.compressedteximage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042038, VkglTestCase_042038_1, VkglTestCase_042038_2);

#define VkglTestCase_042039_1 "dEQP-GLES3.functional.negative_api.texture."
#define VkglTestCase_042039_2 "compressedteximage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042039, VkglTestCase_042039_1, VkglTestCase_042039_2);

#define VkglTestCase_042040_1 "dEQP-GLES3.functional.negative_api.texture."
#define VkglTestCase_042040_2 "compressedteximage3d_max_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042040, VkglTestCase_042040_1, VkglTestCase_042040_2);

#define VkglTestCase_042041_1 "dEQP-GLES3.functional.negative_api.text"
#define VkglTestCase_042041_2 "ure.compressedteximage3d_invalid_border"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042041, VkglTestCase_042041_1, VkglTestCase_042041_2);

#define VkglTestCase_042042_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042042_2 "ture.compressedteximage3d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042042, VkglTestCase_042042_1, VkglTestCase_042042_2);

#define VkglTestCase_042043_1 "dEQP-GLES3.functional.negative_api.texture"
#define VkglTestCase_042043_2 ".compressedteximage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042043, VkglTestCase_042043_1, VkglTestCase_042043_2);

#define VkglTestCase_042044_1 "dEQP-GLES3.functional.negative_ap"
#define VkglTestCase_042044_2 "i.texture.compressedtexsubimage3d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042044, VkglTestCase_042044_1, VkglTestCase_042044_2);

#define VkglTestCase_042045_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042045_2 "ture.compressedtexsubimage3d_neg_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042045, VkglTestCase_042045_1, VkglTestCase_042045_2);

#define VkglTestCase_042046_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042046_2 "ture.compressedtexsubimage3d_max_level"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042046, VkglTestCase_042046_1, VkglTestCase_042046_2);

#define VkglTestCase_042047_1 "dEQP-GLES3.functional.negative_api.tex"
#define VkglTestCase_042047_2 "ture.compressedtexsubimage3d_neg_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042047, VkglTestCase_042047_1, VkglTestCase_042047_2);

#define VkglTestCase_042048_1 "dEQP-GLES3.functional.negative_api.textu"
#define VkglTestCase_042048_2 "re.compressedtexsubimage3d_invalid_offset"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042048, VkglTestCase_042048_1, VkglTestCase_042048_2);

#define VkglTestCase_042049_1 "dEQP-GLES3.functional.negative_api.texture.c"
#define VkglTestCase_042049_2 "ompressedtexsubimage3d_neg_width_height_depth"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042049, VkglTestCase_042049_1, VkglTestCase_042049_2);

#define VkglTestCase_042050_1 "dEQP-GLES3.functional.negative_api.text"
#define VkglTestCase_042050_2 "ure.compressedtexsubimage3d_invalid_size"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042050, VkglTestCase_042050_1, VkglTestCase_042050_2);

#define VkglTestCase_042051_1 "dEQP-GLES3.functional.negative_api.texture.c"
#define VkglTestCase_042051_2 "ompressedtexsubimage3d_invalid_buffer_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042051, VkglTestCase_042051_1, VkglTestCase_042051_2);

#define VkglTestCase_042052_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042052_2 "ive_api.texture.texstorage2d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042052, VkglTestCase_042052_1, VkglTestCase_042052_2);

#define VkglTestCase_042053_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042053_2 "texture.texstorage2d_invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042053, VkglTestCase_042053_1, VkglTestCase_042053_2);

#define VkglTestCase_042054_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042054_2 "texture.texstorage2d_invalid_levels"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042054, VkglTestCase_042054_1, VkglTestCase_042054_2);

#define VkglTestCase_042055_1 "dEQP-GLES3.functional.negative_api.te"
#define VkglTestCase_042055_2 "xture.texstorage2d_invalid_astc_target"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042055, VkglTestCase_042055_1, VkglTestCase_042055_2);

#define VkglTestCase_042056_1 "dEQP-GLES3.functional.negat"
#define VkglTestCase_042056_2 "ive_api.texture.texstorage3d"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042056, VkglTestCase_042056_1, VkglTestCase_042056_2);

#define VkglTestCase_042057_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042057_2 "texture.texstorage3d_invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042057, VkglTestCase_042057_1, VkglTestCase_042057_2);

#define VkglTestCase_042058_1 "dEQP-GLES3.functional.negative_api."
#define VkglTestCase_042058_2 "texture.texstorage3d_invalid_levels"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_042058, VkglTestCase_042058_1, VkglTestCase_042058_2);
