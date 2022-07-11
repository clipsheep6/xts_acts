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

#define VkglTestCase_036319_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036319_2 "ts_mixed.rgba_astc_4x4_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036319, VkglTestCase_036319_1, VkglTestCase_036319_2);

#define VkglTestCase_036320_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036320_2 "ts_mixed.rgba_astc_4x4_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036320, VkglTestCase_036320_1, VkglTestCase_036320_2);

#define VkglTestCase_036321_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036321_2 "its_mixed.rgba_astc_4x4_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036321, VkglTestCase_036321_1, VkglTestCase_036321_2);

#define VkglTestCase_036322_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036322_2 "mixed.rgba_astc_4x4_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036322, VkglTestCase_036322_1, VkglTestCase_036322_2);

#define VkglTestCase_036323_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036323_2 "_mixed.rgba_astc_4x4_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036323, VkglTestCase_036323_1, VkglTestCase_036323_2);

#define VkglTestCase_036324_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036324_2 "ts_mixed.rgba_astc_4x4_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036324, VkglTestCase_036324_1, VkglTestCase_036324_2);

#define VkglTestCase_036325_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036325_2 "ts_mixed.rgba_astc_4x4_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036325, VkglTestCase_036325_1, VkglTestCase_036325_2);

#define VkglTestCase_036326_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036326_2 "its_mixed.rgba_astc_4x4_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036326, VkglTestCase_036326_1, VkglTestCase_036326_2);

#define VkglTestCase_036327_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036327_2 "mixed.rgba_astc_4x4_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036327, VkglTestCase_036327_1, VkglTestCase_036327_2);

#define VkglTestCase_036328_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036328_2 "_mixed.rgba_astc_4x4_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036328, VkglTestCase_036328_1, VkglTestCase_036328_2);

#define VkglTestCase_036329_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036329_2 "its_mixed.rgba_astc_4x4_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036329, VkglTestCase_036329_1, VkglTestCase_036329_2);

#define VkglTestCase_036330_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036330_2 "its_mixed.rgba_astc_4x4_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036330, VkglTestCase_036330_1, VkglTestCase_036330_2);

#define VkglTestCase_036331_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036331_2 "bits_mixed.rgba_astc_4x4_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036331, VkglTestCase_036331_1, VkglTestCase_036331_2);

#define VkglTestCase_036332_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036332_2 "_mixed.rgba_astc_4x4_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036332, VkglTestCase_036332_1, VkglTestCase_036332_2);

#define VkglTestCase_036333_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036333_2 "s_mixed.rgba_astc_4x4_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036333, VkglTestCase_036333_1, VkglTestCase_036333_2);

#define VkglTestCase_036334_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036334_2 "mixed.rgba_astc_4x4_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036334, VkglTestCase_036334_1, VkglTestCase_036334_2);

#define VkglTestCase_036335_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036335_2 "mixed.rgba_astc_4x4_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036335, VkglTestCase_036335_1, VkglTestCase_036335_2);

#define VkglTestCase_036336_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036336_2 "_mixed.rgba_astc_4x4_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036336, VkglTestCase_036336_1, VkglTestCase_036336_2);

#define VkglTestCase_036337_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036337_2 "ed.rgba_astc_4x4_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036337, VkglTestCase_036337_1, VkglTestCase_036337_2);

#define VkglTestCase_036338_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036338_2 "xed.rgba_astc_4x4_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036338, VkglTestCase_036338_1, VkglTestCase_036338_2);
