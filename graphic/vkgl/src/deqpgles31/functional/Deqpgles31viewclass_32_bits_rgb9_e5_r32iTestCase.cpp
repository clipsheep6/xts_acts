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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030960_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030960_2 "ewclass_32_bits.rgb9_e5_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030960, VkglTestCase_030960_1, VkglTestCase_030960_2);

#define VkglTestCase_030961_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030961_2 "ewclass_32_bits.rgb9_e5_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030961, VkglTestCase_030961_1, VkglTestCase_030961_2);

#define VkglTestCase_030962_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030962_2 "iewclass_32_bits.rgb9_e5_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030962, VkglTestCase_030962_1, VkglTestCase_030962_2);

#define VkglTestCase_030963_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030963_2 "lass_32_bits.rgb9_e5_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030963, VkglTestCase_030963_1, VkglTestCase_030963_2);

#define VkglTestCase_030964_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030964_2 "wclass_32_bits.rgb9_e5_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030964, VkglTestCase_030964_1, VkglTestCase_030964_2);

#define VkglTestCase_030965_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030965_2 "ewclass_32_bits.rgb9_e5_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030965, VkglTestCase_030965_1, VkglTestCase_030965_2);

#define VkglTestCase_030966_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030966_2 "ewclass_32_bits.rgb9_e5_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030966, VkglTestCase_030966_1, VkglTestCase_030966_2);

#define VkglTestCase_030967_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030967_2 "iewclass_32_bits.rgb9_e5_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030967, VkglTestCase_030967_1, VkglTestCase_030967_2);

#define VkglTestCase_030968_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030968_2 "lass_32_bits.rgb9_e5_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030968, VkglTestCase_030968_1, VkglTestCase_030968_2);

#define VkglTestCase_030969_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030969_2 "wclass_32_bits.rgb9_e5_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030969, VkglTestCase_030969_1, VkglTestCase_030969_2);

#define VkglTestCase_030970_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030970_2 "iewclass_32_bits.rgb9_e5_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030970, VkglTestCase_030970_1, VkglTestCase_030970_2);

#define VkglTestCase_030971_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030971_2 "iewclass_32_bits.rgb9_e5_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030971, VkglTestCase_030971_1, VkglTestCase_030971_2);

#define VkglTestCase_030972_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_030972_2 "viewclass_32_bits.rgb9_e5_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030972, VkglTestCase_030972_1, VkglTestCase_030972_2);

#define VkglTestCase_030973_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030973_2 "class_32_bits.rgb9_e5_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030973, VkglTestCase_030973_1, VkglTestCase_030973_2);

#define VkglTestCase_030974_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030974_2 "ewclass_32_bits.rgb9_e5_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030974, VkglTestCase_030974_1, VkglTestCase_030974_2);

#define VkglTestCase_030975_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030975_2 "lass_32_bits.rgb9_e5_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030975, VkglTestCase_030975_1, VkglTestCase_030975_2);

#define VkglTestCase_030976_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030976_2 "lass_32_bits.rgb9_e5_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030976, VkglTestCase_030976_1, VkglTestCase_030976_2);

#define VkglTestCase_030977_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030977_2 "class_32_bits.rgb9_e5_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030977, VkglTestCase_030977_1, VkglTestCase_030977_2);

#define VkglTestCase_030978_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030978_2 "s_32_bits.rgb9_e5_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030978, VkglTestCase_030978_1, VkglTestCase_030978_2);

#define VkglTestCase_030979_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030979_2 "ass_32_bits.rgb9_e5_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030979, VkglTestCase_030979_1, VkglTestCase_030979_2);
