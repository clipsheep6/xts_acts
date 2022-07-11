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

#define VkglTestCase_034475_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034475_2 "s_mixed.rgba32f_rgba_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034475, VkglTestCase_034475_1, VkglTestCase_034475_2);

#define VkglTestCase_034476_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034476_2 "s_mixed.rgba32f_rgba_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034476, VkglTestCase_034476_1, VkglTestCase_034476_2);

#define VkglTestCase_034477_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034477_2 "ts_mixed.rgba32f_rgba_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034477, VkglTestCase_034477_1, VkglTestCase_034477_2);

#define VkglTestCase_034478_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034478_2 "ixed.rgba32f_rgba_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034478, VkglTestCase_034478_1, VkglTestCase_034478_2);

#define VkglTestCase_034479_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034479_2 "s_mixed.rgba32f_rgba_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034479, VkglTestCase_034479_1, VkglTestCase_034479_2);

#define VkglTestCase_034480_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034480_2 "s_mixed.rgba32f_rgba_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034480, VkglTestCase_034480_1, VkglTestCase_034480_2);

#define VkglTestCase_034481_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034481_2 "ts_mixed.rgba32f_rgba_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034481, VkglTestCase_034481_1, VkglTestCase_034481_2);

#define VkglTestCase_034482_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034482_2 "ixed.rgba32f_rgba_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034482, VkglTestCase_034482_1, VkglTestCase_034482_2);

#define VkglTestCase_034483_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034483_2 "ts_mixed.rgba32f_rgba_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034483, VkglTestCase_034483_1, VkglTestCase_034483_2);

#define VkglTestCase_034484_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034484_2 "ts_mixed.rgba32f_rgba_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034484, VkglTestCase_034484_1, VkglTestCase_034484_2);

#define VkglTestCase_034485_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034485_2 "its_mixed.rgba32f_rgba_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034485, VkglTestCase_034485_1, VkglTestCase_034485_2);

#define VkglTestCase_034486_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034486_2 "mixed.rgba32f_rgba_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034486, VkglTestCase_034486_1, VkglTestCase_034486_2);

#define VkglTestCase_034487_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034487_2 "ixed.rgba32f_rgba_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034487, VkglTestCase_034487_1, VkglTestCase_034487_2);

#define VkglTestCase_034488_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034488_2 "ixed.rgba32f_rgba_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034488, VkglTestCase_034488_1, VkglTestCase_034488_2);

#define VkglTestCase_034489_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034489_2 "mixed.rgba32f_rgba_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034489, VkglTestCase_034489_1, VkglTestCase_034489_2);

#define VkglTestCase_034490_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034490_2 "d.rgba32f_rgba_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034490, VkglTestCase_034490_1, VkglTestCase_034490_2);
