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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027978_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027978_2 "ewclass_32_bits.rg16i_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027978, VkglTestCase_027978_1, VkglTestCase_027978_2);

#define VkglTestCase_027979_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027979_2 "ewclass_32_bits.rg16i_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027979, VkglTestCase_027979_1, VkglTestCase_027979_2);

#define VkglTestCase_027980_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027980_2 "iewclass_32_bits.rg16i_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027980, VkglTestCase_027980_1, VkglTestCase_027980_2);

#define VkglTestCase_027981_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027981_2 "lass_32_bits.rg16i_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027981, VkglTestCase_027981_1, VkglTestCase_027981_2);

#define VkglTestCase_027982_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027982_2 "ewclass_32_bits.rg16i_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027982, VkglTestCase_027982_1, VkglTestCase_027982_2);

#define VkglTestCase_027983_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027983_2 "ewclass_32_bits.rg16i_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027983, VkglTestCase_027983_1, VkglTestCase_027983_2);

#define VkglTestCase_027984_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027984_2 "iewclass_32_bits.rg16i_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027984, VkglTestCase_027984_1, VkglTestCase_027984_2);

#define VkglTestCase_027985_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027985_2 "lass_32_bits.rg16i_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027985, VkglTestCase_027985_1, VkglTestCase_027985_2);

#define VkglTestCase_027986_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027986_2 "iewclass_32_bits.rg16i_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027986, VkglTestCase_027986_1, VkglTestCase_027986_2);

#define VkglTestCase_027987_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027987_2 "iewclass_32_bits.rg16i_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027987, VkglTestCase_027987_1, VkglTestCase_027987_2);

#define VkglTestCase_027988_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027988_2 "viewclass_32_bits.rg16i_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027988, VkglTestCase_027988_1, VkglTestCase_027988_2);

#define VkglTestCase_027989_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027989_2 "class_32_bits.rg16i_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027989, VkglTestCase_027989_1, VkglTestCase_027989_2);

#define VkglTestCase_027990_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027990_2 "lass_32_bits.rg16i_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027990, VkglTestCase_027990_1, VkglTestCase_027990_2);

#define VkglTestCase_027991_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027991_2 "lass_32_bits.rg16i_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027991, VkglTestCase_027991_1, VkglTestCase_027991_2);

#define VkglTestCase_027992_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027992_2 "class_32_bits.rg16i_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027992, VkglTestCase_027992_1, VkglTestCase_027992_2);

#define VkglTestCase_027993_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027993_2 "s_32_bits.rg16i_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027993, VkglTestCase_027993_1, VkglTestCase_027993_2);

#define VkglTestCase_027994_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027994_2 "class_32_bits.rg16i_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027994, VkglTestCase_027994_1, VkglTestCase_027994_2);

#define VkglTestCase_027995_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027995_2 "class_32_bits.rg16i_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027995, VkglTestCase_027995_1, VkglTestCase_027995_2);

#define VkglTestCase_027996_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027996_2 "wclass_32_bits.rg16i_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027996, VkglTestCase_027996_1, VkglTestCase_027996_2);

#define VkglTestCase_027997_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027997_2 "ss_32_bits.rg16i_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027997, VkglTestCase_027997_1, VkglTestCase_027997_2);
