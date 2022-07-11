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

#define VkglTestCase_034459_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034459_2 "s_mixed.rgba_astc_10x8_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034459, VkglTestCase_034459_1, VkglTestCase_034459_2);

#define VkglTestCase_034460_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034460_2 "s_mixed.rgba_astc_10x8_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034460, VkglTestCase_034460_1, VkglTestCase_034460_2);

#define VkglTestCase_034461_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034461_2 "ts_mixed.rgba_astc_10x8_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034461, VkglTestCase_034461_1, VkglTestCase_034461_2);

#define VkglTestCase_034462_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034462_2 "ixed.rgba_astc_10x8_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034462, VkglTestCase_034462_1, VkglTestCase_034462_2);

#define VkglTestCase_034463_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034463_2 "s_mixed.rgba_astc_10x8_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034463, VkglTestCase_034463_1, VkglTestCase_034463_2);

#define VkglTestCase_034464_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034464_2 "s_mixed.rgba_astc_10x8_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034464, VkglTestCase_034464_1, VkglTestCase_034464_2);

#define VkglTestCase_034465_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034465_2 "ts_mixed.rgba_astc_10x8_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034465, VkglTestCase_034465_1, VkglTestCase_034465_2);

#define VkglTestCase_034466_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034466_2 "ixed.rgba_astc_10x8_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034466, VkglTestCase_034466_1, VkglTestCase_034466_2);

#define VkglTestCase_034467_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034467_2 "ts_mixed.rgba_astc_10x8_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034467, VkglTestCase_034467_1, VkglTestCase_034467_2);

#define VkglTestCase_034468_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034468_2 "ts_mixed.rgba_astc_10x8_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034468, VkglTestCase_034468_1, VkglTestCase_034468_2);

#define VkglTestCase_034469_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034469_2 "its_mixed.rgba_astc_10x8_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034469, VkglTestCase_034469_1, VkglTestCase_034469_2);

#define VkglTestCase_034470_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034470_2 "mixed.rgba_astc_10x8_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034470, VkglTestCase_034470_1, VkglTestCase_034470_2);

#define VkglTestCase_034471_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034471_2 "ixed.rgba_astc_10x8_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034471, VkglTestCase_034471_1, VkglTestCase_034471_2);

#define VkglTestCase_034472_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034472_2 "ixed.rgba_astc_10x8_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034472, VkglTestCase_034472_1, VkglTestCase_034472_2);

#define VkglTestCase_034473_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034473_2 "mixed.rgba_astc_10x8_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034473, VkglTestCase_034473_1, VkglTestCase_034473_2);

#define VkglTestCase_034474_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034474_2 "d.rgba_astc_10x8_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034474, VkglTestCase_034474_1, VkglTestCase_034474_2);
