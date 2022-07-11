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

#define VkglTestCase_035539_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035539_2 "_mixed.rgba32ui_rgba_astc_10x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035539, VkglTestCase_035539_1, VkglTestCase_035539_2);

#define VkglTestCase_035540_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035540_2 "_mixed.rgba32ui_rgba_astc_10x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035540, VkglTestCase_035540_1, VkglTestCase_035540_2);

#define VkglTestCase_035541_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035541_2 "s_mixed.rgba32ui_rgba_astc_10x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035541, VkglTestCase_035541_1, VkglTestCase_035541_2);

#define VkglTestCase_035542_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035542_2 "xed.rgba32ui_rgba_astc_10x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035542, VkglTestCase_035542_1, VkglTestCase_035542_2);

#define VkglTestCase_035543_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035543_2 "_mixed.rgba32ui_rgba_astc_10x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035543, VkglTestCase_035543_1, VkglTestCase_035543_2);

#define VkglTestCase_035544_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035544_2 "_mixed.rgba32ui_rgba_astc_10x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035544, VkglTestCase_035544_1, VkglTestCase_035544_2);

#define VkglTestCase_035545_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035545_2 "s_mixed.rgba32ui_rgba_astc_10x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035545, VkglTestCase_035545_1, VkglTestCase_035545_2);

#define VkglTestCase_035546_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035546_2 "xed.rgba32ui_rgba_astc_10x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035546, VkglTestCase_035546_1, VkglTestCase_035546_2);

#define VkglTestCase_035547_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035547_2 "s_mixed.rgba32ui_rgba_astc_10x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035547, VkglTestCase_035547_1, VkglTestCase_035547_2);

#define VkglTestCase_035548_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035548_2 "s_mixed.rgba32ui_rgba_astc_10x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035548, VkglTestCase_035548_1, VkglTestCase_035548_2);

#define VkglTestCase_035549_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035549_2 "ts_mixed.rgba32ui_rgba_astc_10x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035549, VkglTestCase_035549_1, VkglTestCase_035549_2);

#define VkglTestCase_035550_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035550_2 "ixed.rgba32ui_rgba_astc_10x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035550, VkglTestCase_035550_1, VkglTestCase_035550_2);

#define VkglTestCase_035551_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035551_2 "xed.rgba32ui_rgba_astc_10x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035551, VkglTestCase_035551_1, VkglTestCase_035551_2);

#define VkglTestCase_035552_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035552_2 "xed.rgba32ui_rgba_astc_10x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035552, VkglTestCase_035552_1, VkglTestCase_035552_2);

#define VkglTestCase_035553_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035553_2 "ixed.rgba32ui_rgba_astc_10x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035553, VkglTestCase_035553_1, VkglTestCase_035553_2);

#define VkglTestCase_035554_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035554_2 ".rgba32ui_rgba_astc_10x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035554, VkglTestCase_035554_1, VkglTestCase_035554_2);

#define VkglTestCase_035555_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035555_2 "mixed.rgba32ui_rgba_astc_10x10_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035555, VkglTestCase_035555_1, VkglTestCase_035555_2);

#define VkglTestCase_035556_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035556_2 "mixed.rgba32ui_rgba_astc_10x10_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035556, VkglTestCase_035556_1, VkglTestCase_035556_2);

#define VkglTestCase_035557_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035557_2 "_mixed.rgba32ui_rgba_astc_10x10_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035557, VkglTestCase_035557_1, VkglTestCase_035557_2);

#define VkglTestCase_035558_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035558_2 "ed.rgba32ui_rgba_astc_10x10_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035558, VkglTestCase_035558_1, VkglTestCase_035558_2);
