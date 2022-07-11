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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036399_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036399_2 "ts_mixed.rgba_astc_5x5_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036399, VkglTestCase_036399_1, VkglTestCase_036399_2);

#define VkglTestCase_036400_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036400_2 "ts_mixed.rgba_astc_5x5_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036400, VkglTestCase_036400_1, VkglTestCase_036400_2);

#define VkglTestCase_036401_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036401_2 "its_mixed.rgba_astc_5x5_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036401, VkglTestCase_036401_1, VkglTestCase_036401_2);

#define VkglTestCase_036402_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036402_2 "mixed.rgba_astc_5x5_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036402, VkglTestCase_036402_1, VkglTestCase_036402_2);

#define VkglTestCase_036403_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036403_2 "_mixed.rgba_astc_5x5_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036403, VkglTestCase_036403_1, VkglTestCase_036403_2);

#define VkglTestCase_036404_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036404_2 "ts_mixed.rgba_astc_5x5_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036404, VkglTestCase_036404_1, VkglTestCase_036404_2);

#define VkglTestCase_036405_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036405_2 "ts_mixed.rgba_astc_5x5_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036405, VkglTestCase_036405_1, VkglTestCase_036405_2);

#define VkglTestCase_036406_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036406_2 "its_mixed.rgba_astc_5x5_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036406, VkglTestCase_036406_1, VkglTestCase_036406_2);

#define VkglTestCase_036407_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036407_2 "mixed.rgba_astc_5x5_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036407, VkglTestCase_036407_1, VkglTestCase_036407_2);

#define VkglTestCase_036408_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036408_2 "_mixed.rgba_astc_5x5_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036408, VkglTestCase_036408_1, VkglTestCase_036408_2);

#define VkglTestCase_036409_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036409_2 "its_mixed.rgba_astc_5x5_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036409, VkglTestCase_036409_1, VkglTestCase_036409_2);

#define VkglTestCase_036410_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036410_2 "its_mixed.rgba_astc_5x5_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036410, VkglTestCase_036410_1, VkglTestCase_036410_2);

#define VkglTestCase_036411_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036411_2 "bits_mixed.rgba_astc_5x5_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036411, VkglTestCase_036411_1, VkglTestCase_036411_2);

#define VkglTestCase_036412_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036412_2 "_mixed.rgba_astc_5x5_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036412, VkglTestCase_036412_1, VkglTestCase_036412_2);

#define VkglTestCase_036413_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036413_2 "s_mixed.rgba_astc_5x5_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036413, VkglTestCase_036413_1, VkglTestCase_036413_2);

#define VkglTestCase_036414_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036414_2 "mixed.rgba_astc_5x5_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036414, VkglTestCase_036414_1, VkglTestCase_036414_2);

#define VkglTestCase_036415_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036415_2 "mixed.rgba_astc_5x5_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036415, VkglTestCase_036415_1, VkglTestCase_036415_2);

#define VkglTestCase_036416_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036416_2 "_mixed.rgba_astc_5x5_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036416, VkglTestCase_036416_1, VkglTestCase_036416_2);

#define VkglTestCase_036417_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036417_2 "ed.rgba_astc_5x5_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036417, VkglTestCase_036417_1, VkglTestCase_036417_2);

#define VkglTestCase_036418_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036418_2 "xed.rgba_astc_5x5_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036418, VkglTestCase_036418_1, VkglTestCase_036418_2);
