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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026976_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026976_2 "ewclass_32_bits.r32i_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026976, VkglTestCase_026976_1, VkglTestCase_026976_2);

#define VkglTestCase_026977_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026977_2 "ewclass_32_bits.r32i_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026977, VkglTestCase_026977_1, VkglTestCase_026977_2);

#define VkglTestCase_026978_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026978_2 "iewclass_32_bits.r32i_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026978, VkglTestCase_026978_1, VkglTestCase_026978_2);

#define VkglTestCase_026979_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026979_2 "lass_32_bits.r32i_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026979, VkglTestCase_026979_1, VkglTestCase_026979_2);

#define VkglTestCase_026980_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026980_2 "class_32_bits.r32i_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026980, VkglTestCase_026980_1, VkglTestCase_026980_2);

#define VkglTestCase_026981_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026981_2 "ewclass_32_bits.r32i_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026981, VkglTestCase_026981_1, VkglTestCase_026981_2);

#define VkglTestCase_026982_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026982_2 "ewclass_32_bits.r32i_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026982, VkglTestCase_026982_1, VkglTestCase_026982_2);

#define VkglTestCase_026983_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026983_2 "iewclass_32_bits.r32i_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026983, VkglTestCase_026983_1, VkglTestCase_026983_2);

#define VkglTestCase_026984_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026984_2 "lass_32_bits.r32i_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026984, VkglTestCase_026984_1, VkglTestCase_026984_2);

#define VkglTestCase_026985_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026985_2 "class_32_bits.r32i_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026985, VkglTestCase_026985_1, VkglTestCase_026985_2);

#define VkglTestCase_026986_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026986_2 "iewclass_32_bits.r32i_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026986, VkglTestCase_026986_1, VkglTestCase_026986_2);

#define VkglTestCase_026987_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026987_2 "iewclass_32_bits.r32i_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026987, VkglTestCase_026987_1, VkglTestCase_026987_2);

#define VkglTestCase_026988_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026988_2 "viewclass_32_bits.r32i_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026988, VkglTestCase_026988_1, VkglTestCase_026988_2);

#define VkglTestCase_026989_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026989_2 "class_32_bits.r32i_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026989, VkglTestCase_026989_1, VkglTestCase_026989_2);

#define VkglTestCase_026990_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026990_2 "wclass_32_bits.r32i_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026990, VkglTestCase_026990_1, VkglTestCase_026990_2);

#define VkglTestCase_026991_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026991_2 "lass_32_bits.r32i_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026991, VkglTestCase_026991_1, VkglTestCase_026991_2);

#define VkglTestCase_026992_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026992_2 "lass_32_bits.r32i_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026992, VkglTestCase_026992_1, VkglTestCase_026992_2);

#define VkglTestCase_026993_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026993_2 "class_32_bits.r32i_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026993, VkglTestCase_026993_1, VkglTestCase_026993_2);

#define VkglTestCase_026994_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026994_2 "s_32_bits.r32i_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026994, VkglTestCase_026994_1, VkglTestCase_026994_2);

#define VkglTestCase_026995_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026995_2 "ss_32_bits.r32i_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026995, VkglTestCase_026995_1, VkglTestCase_026995_2);

#define VkglTestCase_026996_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026996_2 "class_32_bits.r32i_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026996, VkglTestCase_026996_1, VkglTestCase_026996_2);

#define VkglTestCase_026997_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026997_2 "class_32_bits.r32i_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026997, VkglTestCase_026997_1, VkglTestCase_026997_2);

#define VkglTestCase_026998_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026998_2 "wclass_32_bits.r32i_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026998, VkglTestCase_026998_1, VkglTestCase_026998_2);

#define VkglTestCase_026999_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026999_2 "ss_32_bits.r32i_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026999, VkglTestCase_026999_1, VkglTestCase_026999_2);

#define VkglTestCase_027000_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027000_2 "lass_32_bits.r32i_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_027000, VkglTestCase_027000_1, VkglTestCase_027000_2);
