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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034491_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034491_2 "s_mixed.rgba_astc_10x10_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034491, VkglTestCase_034491_1, VkglTestCase_034491_2);

#define VkglTestCase_034492_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034492_2 "s_mixed.rgba_astc_10x10_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034492, VkglTestCase_034492_1, VkglTestCase_034492_2);

#define VkglTestCase_034493_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034493_2 "ts_mixed.rgba_astc_10x10_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034493, VkglTestCase_034493_1, VkglTestCase_034493_2);

#define VkglTestCase_034494_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034494_2 "ixed.rgba_astc_10x10_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034494, VkglTestCase_034494_1, VkglTestCase_034494_2);

#define VkglTestCase_034495_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034495_2 "s_mixed.rgba_astc_10x10_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034495, VkglTestCase_034495_1, VkglTestCase_034495_2);

#define VkglTestCase_034496_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034496_2 "s_mixed.rgba_astc_10x10_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034496, VkglTestCase_034496_1, VkglTestCase_034496_2);

#define VkglTestCase_034497_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034497_2 "ts_mixed.rgba_astc_10x10_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034497, VkglTestCase_034497_1, VkglTestCase_034497_2);

#define VkglTestCase_034498_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034498_2 "ixed.rgba_astc_10x10_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034498, VkglTestCase_034498_1, VkglTestCase_034498_2);

#define VkglTestCase_034499_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034499_2 "ts_mixed.rgba_astc_10x10_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034499, VkglTestCase_034499_1, VkglTestCase_034499_2);

#define VkglTestCase_034500_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034500_2 "ts_mixed.rgba_astc_10x10_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034500, VkglTestCase_034500_1, VkglTestCase_034500_2);

#define VkglTestCase_034501_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034501_2 "its_mixed.rgba_astc_10x10_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034501, VkglTestCase_034501_1, VkglTestCase_034501_2);

#define VkglTestCase_034502_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034502_2 "mixed.rgba_astc_10x10_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034502, VkglTestCase_034502_1, VkglTestCase_034502_2);

#define VkglTestCase_034503_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034503_2 "ixed.rgba_astc_10x10_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034503, VkglTestCase_034503_1, VkglTestCase_034503_2);

#define VkglTestCase_034504_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034504_2 "ixed.rgba_astc_10x10_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034504, VkglTestCase_034504_1, VkglTestCase_034504_2);

#define VkglTestCase_034505_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034505_2 "mixed.rgba_astc_10x10_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034505, VkglTestCase_034505_1, VkglTestCase_034505_2);

#define VkglTestCase_034506_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034506_2 "d.rgba_astc_10x10_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034506, VkglTestCase_034506_1, VkglTestCase_034506_2);
