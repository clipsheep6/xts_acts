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

#define VkglTestCase_036439_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036439_2 "ts_mixed.rgba_astc_6x5_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036439, VkglTestCase_036439_1, VkglTestCase_036439_2);

#define VkglTestCase_036440_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036440_2 "ts_mixed.rgba_astc_6x5_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036440, VkglTestCase_036440_1, VkglTestCase_036440_2);

#define VkglTestCase_036441_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036441_2 "its_mixed.rgba_astc_6x5_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036441, VkglTestCase_036441_1, VkglTestCase_036441_2);

#define VkglTestCase_036442_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036442_2 "mixed.rgba_astc_6x5_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036442, VkglTestCase_036442_1, VkglTestCase_036442_2);

#define VkglTestCase_036443_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036443_2 "_mixed.rgba_astc_6x5_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036443, VkglTestCase_036443_1, VkglTestCase_036443_2);

#define VkglTestCase_036444_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036444_2 "ts_mixed.rgba_astc_6x5_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036444, VkglTestCase_036444_1, VkglTestCase_036444_2);

#define VkglTestCase_036445_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036445_2 "ts_mixed.rgba_astc_6x5_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036445, VkglTestCase_036445_1, VkglTestCase_036445_2);

#define VkglTestCase_036446_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036446_2 "its_mixed.rgba_astc_6x5_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036446, VkglTestCase_036446_1, VkglTestCase_036446_2);

#define VkglTestCase_036447_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036447_2 "mixed.rgba_astc_6x5_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036447, VkglTestCase_036447_1, VkglTestCase_036447_2);

#define VkglTestCase_036448_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036448_2 "_mixed.rgba_astc_6x5_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036448, VkglTestCase_036448_1, VkglTestCase_036448_2);

#define VkglTestCase_036449_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036449_2 "its_mixed.rgba_astc_6x5_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036449, VkglTestCase_036449_1, VkglTestCase_036449_2);

#define VkglTestCase_036450_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036450_2 "its_mixed.rgba_astc_6x5_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036450, VkglTestCase_036450_1, VkglTestCase_036450_2);

#define VkglTestCase_036451_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036451_2 "bits_mixed.rgba_astc_6x5_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036451, VkglTestCase_036451_1, VkglTestCase_036451_2);

#define VkglTestCase_036452_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036452_2 "_mixed.rgba_astc_6x5_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036452, VkglTestCase_036452_1, VkglTestCase_036452_2);

#define VkglTestCase_036453_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036453_2 "s_mixed.rgba_astc_6x5_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036453, VkglTestCase_036453_1, VkglTestCase_036453_2);

#define VkglTestCase_036454_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036454_2 "mixed.rgba_astc_6x5_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036454, VkglTestCase_036454_1, VkglTestCase_036454_2);

#define VkglTestCase_036455_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036455_2 "mixed.rgba_astc_6x5_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036455, VkglTestCase_036455_1, VkglTestCase_036455_2);

#define VkglTestCase_036456_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036456_2 "_mixed.rgba_astc_6x5_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036456, VkglTestCase_036456_1, VkglTestCase_036456_2);

#define VkglTestCase_036457_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036457_2 "ed.rgba_astc_6x5_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036457, VkglTestCase_036457_1, VkglTestCase_036457_2);

#define VkglTestCase_036458_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036458_2 "xed.rgba_astc_6x5_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036458, VkglTestCase_036458_1, VkglTestCase_036458_2);
