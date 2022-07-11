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

#define VkglTestCase_030980_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030980_2 "ewclass_32_bits.rgb9_e5_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030980, VkglTestCase_030980_1, VkglTestCase_030980_2);

#define VkglTestCase_030981_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030981_2 "ewclass_32_bits.rgb9_e5_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030981, VkglTestCase_030981_1, VkglTestCase_030981_2);

#define VkglTestCase_030982_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030982_2 "iewclass_32_bits.rgb9_e5_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030982, VkglTestCase_030982_1, VkglTestCase_030982_2);

#define VkglTestCase_030983_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030983_2 "lass_32_bits.rgb9_e5_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030983, VkglTestCase_030983_1, VkglTestCase_030983_2);

#define VkglTestCase_030984_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030984_2 "class_32_bits.rgb9_e5_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030984, VkglTestCase_030984_1, VkglTestCase_030984_2);

#define VkglTestCase_030985_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030985_2 "ewclass_32_bits.rgb9_e5_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030985, VkglTestCase_030985_1, VkglTestCase_030985_2);

#define VkglTestCase_030986_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030986_2 "ewclass_32_bits.rgb9_e5_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030986, VkglTestCase_030986_1, VkglTestCase_030986_2);

#define VkglTestCase_030987_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030987_2 "iewclass_32_bits.rgb9_e5_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030987, VkglTestCase_030987_1, VkglTestCase_030987_2);

#define VkglTestCase_030988_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030988_2 "lass_32_bits.rgb9_e5_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030988, VkglTestCase_030988_1, VkglTestCase_030988_2);

#define VkglTestCase_030989_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030989_2 "class_32_bits.rgb9_e5_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030989, VkglTestCase_030989_1, VkglTestCase_030989_2);

#define VkglTestCase_030990_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030990_2 "iewclass_32_bits.rgb9_e5_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030990, VkglTestCase_030990_1, VkglTestCase_030990_2);

#define VkglTestCase_030991_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030991_2 "iewclass_32_bits.rgb9_e5_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030991, VkglTestCase_030991_1, VkglTestCase_030991_2);

#define VkglTestCase_030992_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_030992_2 "viewclass_32_bits.rgb9_e5_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030992, VkglTestCase_030992_1, VkglTestCase_030992_2);

#define VkglTestCase_030993_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030993_2 "class_32_bits.rgb9_e5_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030993, VkglTestCase_030993_1, VkglTestCase_030993_2);

#define VkglTestCase_030994_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030994_2 "wclass_32_bits.rgb9_e5_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030994, VkglTestCase_030994_1, VkglTestCase_030994_2);

#define VkglTestCase_030995_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030995_2 "lass_32_bits.rgb9_e5_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030995, VkglTestCase_030995_1, VkglTestCase_030995_2);

#define VkglTestCase_030996_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030996_2 "lass_32_bits.rgb9_e5_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030996, VkglTestCase_030996_1, VkglTestCase_030996_2);

#define VkglTestCase_030997_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030997_2 "class_32_bits.rgb9_e5_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030997, VkglTestCase_030997_1, VkglTestCase_030997_2);

#define VkglTestCase_030998_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030998_2 "s_32_bits.rgb9_e5_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030998, VkglTestCase_030998_1, VkglTestCase_030998_2);

#define VkglTestCase_030999_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030999_2 "ss_32_bits.rgb9_e5_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030999, VkglTestCase_030999_1, VkglTestCase_030999_2);
