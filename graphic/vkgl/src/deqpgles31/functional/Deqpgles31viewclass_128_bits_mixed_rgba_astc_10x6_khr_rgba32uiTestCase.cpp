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

#define VkglTestCase_035479_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035479_2 "s_mixed.rgba_astc_10x6_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035479, VkglTestCase_035479_1, VkglTestCase_035479_2);

#define VkglTestCase_035480_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035480_2 "s_mixed.rgba_astc_10x6_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035480, VkglTestCase_035480_1, VkglTestCase_035480_2);

#define VkglTestCase_035481_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035481_2 "ts_mixed.rgba_astc_10x6_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035481, VkglTestCase_035481_1, VkglTestCase_035481_2);

#define VkglTestCase_035482_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035482_2 "ixed.rgba_astc_10x6_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035482, VkglTestCase_035482_1, VkglTestCase_035482_2);

#define VkglTestCase_035483_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035483_2 "mixed.rgba_astc_10x6_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035483, VkglTestCase_035483_1, VkglTestCase_035483_2);

#define VkglTestCase_035484_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035484_2 "s_mixed.rgba_astc_10x6_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035484, VkglTestCase_035484_1, VkglTestCase_035484_2);

#define VkglTestCase_035485_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035485_2 "s_mixed.rgba_astc_10x6_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035485, VkglTestCase_035485_1, VkglTestCase_035485_2);

#define VkglTestCase_035486_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035486_2 "ts_mixed.rgba_astc_10x6_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035486, VkglTestCase_035486_1, VkglTestCase_035486_2);

#define VkglTestCase_035487_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035487_2 "ixed.rgba_astc_10x6_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035487, VkglTestCase_035487_1, VkglTestCase_035487_2);

#define VkglTestCase_035488_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035488_2 "mixed.rgba_astc_10x6_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035488, VkglTestCase_035488_1, VkglTestCase_035488_2);

#define VkglTestCase_035489_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035489_2 "ts_mixed.rgba_astc_10x6_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035489, VkglTestCase_035489_1, VkglTestCase_035489_2);

#define VkglTestCase_035490_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035490_2 "ts_mixed.rgba_astc_10x6_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035490, VkglTestCase_035490_1, VkglTestCase_035490_2);

#define VkglTestCase_035491_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035491_2 "its_mixed.rgba_astc_10x6_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035491, VkglTestCase_035491_1, VkglTestCase_035491_2);

#define VkglTestCase_035492_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035492_2 "mixed.rgba_astc_10x6_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035492, VkglTestCase_035492_1, VkglTestCase_035492_2);

#define VkglTestCase_035493_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035493_2 "_mixed.rgba_astc_10x6_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035493, VkglTestCase_035493_1, VkglTestCase_035493_2);

#define VkglTestCase_035494_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035494_2 "ixed.rgba_astc_10x6_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035494, VkglTestCase_035494_1, VkglTestCase_035494_2);

#define VkglTestCase_035495_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035495_2 "ixed.rgba_astc_10x6_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035495, VkglTestCase_035495_1, VkglTestCase_035495_2);

#define VkglTestCase_035496_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035496_2 "mixed.rgba_astc_10x6_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035496, VkglTestCase_035496_1, VkglTestCase_035496_2);

#define VkglTestCase_035497_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035497_2 "d.rgba_astc_10x6_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035497, VkglTestCase_035497_1, VkglTestCase_035497_2);

#define VkglTestCase_035498_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035498_2 "ed.rgba_astc_10x6_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035498, VkglTestCase_035498_1, VkglTestCase_035498_2);
