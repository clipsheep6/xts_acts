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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035459_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035459_2 "s_mixed.rgba32ui_rgba_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035459, VkglTestCase_035459_1, VkglTestCase_035459_2);

#define VkglTestCase_035460_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035460_2 "s_mixed.rgba32ui_rgba_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035460, VkglTestCase_035460_1, VkglTestCase_035460_2);

#define VkglTestCase_035461_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035461_2 "ts_mixed.rgba32ui_rgba_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035461, VkglTestCase_035461_1, VkglTestCase_035461_2);

#define VkglTestCase_035462_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035462_2 "ixed.rgba32ui_rgba_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035462, VkglTestCase_035462_1, VkglTestCase_035462_2);

#define VkglTestCase_035463_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035463_2 "s_mixed.rgba32ui_rgba_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035463, VkglTestCase_035463_1, VkglTestCase_035463_2);

#define VkglTestCase_035464_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035464_2 "s_mixed.rgba32ui_rgba_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035464, VkglTestCase_035464_1, VkglTestCase_035464_2);

#define VkglTestCase_035465_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035465_2 "ts_mixed.rgba32ui_rgba_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035465, VkglTestCase_035465_1, VkglTestCase_035465_2);

#define VkglTestCase_035466_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035466_2 "ixed.rgba32ui_rgba_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035466, VkglTestCase_035466_1, VkglTestCase_035466_2);

#define VkglTestCase_035467_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035467_2 "ts_mixed.rgba32ui_rgba_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035467, VkglTestCase_035467_1, VkglTestCase_035467_2);

#define VkglTestCase_035468_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035468_2 "ts_mixed.rgba32ui_rgba_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035468, VkglTestCase_035468_1, VkglTestCase_035468_2);

#define VkglTestCase_035469_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035469_2 "its_mixed.rgba32ui_rgba_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035469, VkglTestCase_035469_1, VkglTestCase_035469_2);

#define VkglTestCase_035470_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035470_2 "mixed.rgba32ui_rgba_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035470, VkglTestCase_035470_1, VkglTestCase_035470_2);

#define VkglTestCase_035471_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035471_2 "ixed.rgba32ui_rgba_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035471, VkglTestCase_035471_1, VkglTestCase_035471_2);

#define VkglTestCase_035472_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035472_2 "ixed.rgba32ui_rgba_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035472, VkglTestCase_035472_1, VkglTestCase_035472_2);

#define VkglTestCase_035473_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035473_2 "mixed.rgba32ui_rgba_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035473, VkglTestCase_035473_1, VkglTestCase_035473_2);

#define VkglTestCase_035474_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035474_2 "d.rgba32ui_rgba_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035474, VkglTestCase_035474_1, VkglTestCase_035474_2);

#define VkglTestCase_035475_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035475_2 "mixed.rgba32ui_rgba_astc_10x6_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035475, VkglTestCase_035475_1, VkglTestCase_035475_2);

#define VkglTestCase_035476_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035476_2 "mixed.rgba32ui_rgba_astc_10x6_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035476, VkglTestCase_035476_1, VkglTestCase_035476_2);

#define VkglTestCase_035477_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035477_2 "_mixed.rgba32ui_rgba_astc_10x6_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035477, VkglTestCase_035477_1, VkglTestCase_035477_2);

#define VkglTestCase_035478_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035478_2 "ed.rgba32ui_rgba_astc_10x6_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035478, VkglTestCase_035478_1, VkglTestCase_035478_2);
