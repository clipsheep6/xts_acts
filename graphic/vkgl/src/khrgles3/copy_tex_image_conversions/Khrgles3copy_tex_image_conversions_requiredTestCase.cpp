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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003992_1 "KHR-GLES3.copy_tex_image_convers"
#define VkglTestCase_003992_2 "ions.required.texture2d_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003992, VkglTestCase_003992_1, VkglTestCase_003992_2);

#define VkglTestCase_003993_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_003993_2 "ns.required.texture2d_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003993, VkglTestCase_003993_1, VkglTestCase_003993_2);

#define VkglTestCase_003994_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_003994_2 "ns.required.texture2d_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003994, VkglTestCase_003994_1, VkglTestCase_003994_2);

#define VkglTestCase_003995_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_003995_2 "ns.required.texture2d_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003995, VkglTestCase_003995_1, VkglTestCase_003995_2);

#define VkglTestCase_003996_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_003996_2 "ns.required.texture2d_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003996, VkglTestCase_003996_1, VkglTestCase_003996_2);

#define VkglTestCase_003997_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_003997_2 "ns.required.texture2d_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003997, VkglTestCase_003997_1, VkglTestCase_003997_2);

#define VkglTestCase_003998_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_003998_2 "ns.required.texture2d_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003998, VkglTestCase_003998_1, VkglTestCase_003998_2);

#define VkglTestCase_003999_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_003999_2 "ns.required.cubemap_negx_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003999, VkglTestCase_003999_1, VkglTestCase_003999_2);

#define VkglTestCase_004000_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004000_2 "s.required.cubemap_negx_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004000, VkglTestCase_004000_1, VkglTestCase_004000_2);

#define VkglTestCase_004001_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004001_2 "s.required.cubemap_negx_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004001, VkglTestCase_004001_1, VkglTestCase_004001_2);

#define VkglTestCase_004002_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004002_2 "s.required.cubemap_negx_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004002, VkglTestCase_004002_1, VkglTestCase_004002_2);

#define VkglTestCase_004003_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004003_2 "s.required.cubemap_negx_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004003, VkglTestCase_004003_1, VkglTestCase_004003_2);

#define VkglTestCase_004004_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004004_2 "s.required.cubemap_negx_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004004, VkglTestCase_004004_1, VkglTestCase_004004_2);

#define VkglTestCase_004005_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004005_2 "s.required.cubemap_negx_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004005, VkglTestCase_004005_1, VkglTestCase_004005_2);

#define VkglTestCase_004006_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004006_2 "ns.required.cubemap_negy_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004006, VkglTestCase_004006_1, VkglTestCase_004006_2);

#define VkglTestCase_004007_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004007_2 "s.required.cubemap_negy_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004007, VkglTestCase_004007_1, VkglTestCase_004007_2);

#define VkglTestCase_004008_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004008_2 "s.required.cubemap_negy_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004008, VkglTestCase_004008_1, VkglTestCase_004008_2);

#define VkglTestCase_004009_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004009_2 "s.required.cubemap_negy_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004009, VkglTestCase_004009_1, VkglTestCase_004009_2);

#define VkglTestCase_004010_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004010_2 "s.required.cubemap_negy_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004010, VkglTestCase_004010_1, VkglTestCase_004010_2);

#define VkglTestCase_004011_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004011_2 "s.required.cubemap_negy_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004011, VkglTestCase_004011_1, VkglTestCase_004011_2);

#define VkglTestCase_004012_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004012_2 "s.required.cubemap_negy_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004012, VkglTestCase_004012_1, VkglTestCase_004012_2);

#define VkglTestCase_004013_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004013_2 "ns.required.cubemap_negz_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004013, VkglTestCase_004013_1, VkglTestCase_004013_2);

#define VkglTestCase_004014_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004014_2 "s.required.cubemap_negz_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004014, VkglTestCase_004014_1, VkglTestCase_004014_2);

#define VkglTestCase_004015_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004015_2 "s.required.cubemap_negz_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004015, VkglTestCase_004015_1, VkglTestCase_004015_2);

#define VkglTestCase_004016_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004016_2 "s.required.cubemap_negz_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004016, VkglTestCase_004016_1, VkglTestCase_004016_2);

#define VkglTestCase_004017_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004017_2 "s.required.cubemap_negz_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004017, VkglTestCase_004017_1, VkglTestCase_004017_2);

#define VkglTestCase_004018_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004018_2 "s.required.cubemap_negz_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004018, VkglTestCase_004018_1, VkglTestCase_004018_2);

#define VkglTestCase_004019_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004019_2 "s.required.cubemap_negz_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004019, VkglTestCase_004019_1, VkglTestCase_004019_2);

#define VkglTestCase_004020_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004020_2 "ns.required.cubemap_posx_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004020, VkglTestCase_004020_1, VkglTestCase_004020_2);

#define VkglTestCase_004021_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004021_2 "s.required.cubemap_posx_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004021, VkglTestCase_004021_1, VkglTestCase_004021_2);

#define VkglTestCase_004022_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004022_2 "s.required.cubemap_posx_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004022, VkglTestCase_004022_1, VkglTestCase_004022_2);

#define VkglTestCase_004023_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004023_2 "s.required.cubemap_posx_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004023, VkglTestCase_004023_1, VkglTestCase_004023_2);

#define VkglTestCase_004024_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004024_2 "s.required.cubemap_posx_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004024, VkglTestCase_004024_1, VkglTestCase_004024_2);

#define VkglTestCase_004025_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004025_2 "s.required.cubemap_posx_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004025, VkglTestCase_004025_1, VkglTestCase_004025_2);

#define VkglTestCase_004026_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004026_2 "s.required.cubemap_posx_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004026, VkglTestCase_004026_1, VkglTestCase_004026_2);

#define VkglTestCase_004027_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004027_2 "ns.required.cubemap_posy_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004027, VkglTestCase_004027_1, VkglTestCase_004027_2);

#define VkglTestCase_004028_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004028_2 "s.required.cubemap_posy_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004028, VkglTestCase_004028_1, VkglTestCase_004028_2);

#define VkglTestCase_004029_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004029_2 "s.required.cubemap_posy_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004029, VkglTestCase_004029_1, VkglTestCase_004029_2);

#define VkglTestCase_004030_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004030_2 "s.required.cubemap_posy_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004030, VkglTestCase_004030_1, VkglTestCase_004030_2);

#define VkglTestCase_004031_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004031_2 "s.required.cubemap_posy_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004031, VkglTestCase_004031_1, VkglTestCase_004031_2);

#define VkglTestCase_004032_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004032_2 "s.required.cubemap_posy_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004032, VkglTestCase_004032_1, VkglTestCase_004032_2);

#define VkglTestCase_004033_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004033_2 "s.required.cubemap_posy_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004033, VkglTestCase_004033_1, VkglTestCase_004033_2);

#define VkglTestCase_004034_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004034_2 "ns.required.cubemap_posz_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004034, VkglTestCase_004034_1, VkglTestCase_004034_2);

#define VkglTestCase_004035_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004035_2 "s.required.cubemap_posz_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004035, VkglTestCase_004035_1, VkglTestCase_004035_2);

#define VkglTestCase_004036_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004036_2 "s.required.cubemap_posz_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004036, VkglTestCase_004036_1, VkglTestCase_004036_2);

#define VkglTestCase_004037_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004037_2 "s.required.cubemap_posz_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004037, VkglTestCase_004037_1, VkglTestCase_004037_2);

#define VkglTestCase_004038_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004038_2 "s.required.cubemap_posz_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004038, VkglTestCase_004038_1, VkglTestCase_004038_2);

#define VkglTestCase_004039_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004039_2 "s.required.cubemap_posz_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004039, VkglTestCase_004039_1, VkglTestCase_004039_2);

#define VkglTestCase_004040_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004040_2 "s.required.cubemap_posz_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004040, VkglTestCase_004040_1, VkglTestCase_004040_2);

#define VkglTestCase_004041_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004041_2 "ns.required.texture_array_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004041, VkglTestCase_004041_1, VkglTestCase_004041_2);

#define VkglTestCase_004042_1 "KHR-GLES3.copy_tex_image_conversions"
#define VkglTestCase_004042_2 ".required.texture_array_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004042, VkglTestCase_004042_1, VkglTestCase_004042_2);

#define VkglTestCase_004043_1 "KHR-GLES3.copy_tex_image_conversions"
#define VkglTestCase_004043_2 ".required.texture_array_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004043, VkglTestCase_004043_1, VkglTestCase_004043_2);

#define VkglTestCase_004044_1 "KHR-GLES3.copy_tex_image_conversions"
#define VkglTestCase_004044_2 ".required.texture_array_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004044, VkglTestCase_004044_1, VkglTestCase_004044_2);

#define VkglTestCase_004045_1 "KHR-GLES3.copy_tex_image_conversions"
#define VkglTestCase_004045_2 ".required.texture_array_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004045, VkglTestCase_004045_1, VkglTestCase_004045_2);

#define VkglTestCase_004046_1 "KHR-GLES3.copy_tex_image_conversions"
#define VkglTestCase_004046_2 ".required.texture_array_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004046, VkglTestCase_004046_1, VkglTestCase_004046_2);

#define VkglTestCase_004047_1 "KHR-GLES3.copy_tex_image_conversions"
#define VkglTestCase_004047_2 ".required.texture_array_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004047, VkglTestCase_004047_1, VkglTestCase_004047_2);

#define VkglTestCase_004048_1 "KHR-GLES3.copy_tex_image_convers"
#define VkglTestCase_004048_2 "ions.required.texture3d_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004048, VkglTestCase_004048_1, VkglTestCase_004048_2);

#define VkglTestCase_004049_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004049_2 "ns.required.texture3d_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004049, VkglTestCase_004049_1, VkglTestCase_004049_2);

#define VkglTestCase_004050_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004050_2 "ns.required.texture3d_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004050, VkglTestCase_004050_1, VkglTestCase_004050_2);

#define VkglTestCase_004051_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004051_2 "ns.required.texture3d_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004051, VkglTestCase_004051_1, VkglTestCase_004051_2);

#define VkglTestCase_004052_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004052_2 "ns.required.texture3d_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004052, VkglTestCase_004052_1, VkglTestCase_004052_2);

#define VkglTestCase_004053_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004053_2 "ns.required.texture3d_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004053, VkglTestCase_004053_1, VkglTestCase_004053_2);

#define VkglTestCase_004054_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004054_2 "ns.required.texture3d_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004054, VkglTestCase_004054_1, VkglTestCase_004054_2);

#define VkglTestCase_004055_1 "KHR-GLES3.copy_tex_image_conversio"
#define VkglTestCase_004055_2 "ns.required.renderbuffer_texture2d"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004055, VkglTestCase_004055_1, VkglTestCase_004055_2);

#define VkglTestCase_004056_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004056_2 "s.required.renderbuffer_cubemap_negx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004056, VkglTestCase_004056_1, VkglTestCase_004056_2);

#define VkglTestCase_004057_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004057_2 "s.required.renderbuffer_cubemap_negy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004057, VkglTestCase_004057_1, VkglTestCase_004057_2);

#define VkglTestCase_004058_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004058_2 "s.required.renderbuffer_cubemap_negz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004058, VkglTestCase_004058_1, VkglTestCase_004058_2);

#define VkglTestCase_004059_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004059_2 "s.required.renderbuffer_cubemap_posx"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004059, VkglTestCase_004059_1, VkglTestCase_004059_2);

#define VkglTestCase_004060_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004060_2 "s.required.renderbuffer_cubemap_posy"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004060, VkglTestCase_004060_1, VkglTestCase_004060_2);

#define VkglTestCase_004061_1 "KHR-GLES3.copy_tex_image_conversion"
#define VkglTestCase_004061_2 "s.required.renderbuffer_cubemap_posz"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_004061, VkglTestCase_004061_1, VkglTestCase_004061_2);
