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

#define VkglTestCase_030000_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030000_2 "ewclass_32_bits.rgb10_a2_r32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030000, VkglTestCase_030000_1, VkglTestCase_030000_2);

#define VkglTestCase_030001_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030001_2 "ewclass_32_bits.rgb10_a2_r32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030001, VkglTestCase_030001_1, VkglTestCase_030001_2);

#define VkglTestCase_030002_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030002_2 "iewclass_32_bits.rgb10_a2_r32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030002, VkglTestCase_030002_1, VkglTestCase_030002_2);

#define VkglTestCase_030003_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030003_2 "lass_32_bits.rgb10_a2_r32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030003, VkglTestCase_030003_1, VkglTestCase_030003_2);

#define VkglTestCase_030004_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030004_2 "class_32_bits.rgb10_a2_r32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030004, VkglTestCase_030004_1, VkglTestCase_030004_2);

#define VkglTestCase_030005_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030005_2 "ewclass_32_bits.rgb10_a2_r32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030005, VkglTestCase_030005_1, VkglTestCase_030005_2);

#define VkglTestCase_030006_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030006_2 "ewclass_32_bits.rgb10_a2_r32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030006, VkglTestCase_030006_1, VkglTestCase_030006_2);

#define VkglTestCase_030007_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030007_2 "iewclass_32_bits.rgb10_a2_r32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030007, VkglTestCase_030007_1, VkglTestCase_030007_2);

#define VkglTestCase_030008_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030008_2 "lass_32_bits.rgb10_a2_r32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030008, VkglTestCase_030008_1, VkglTestCase_030008_2);

#define VkglTestCase_030009_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030009_2 "class_32_bits.rgb10_a2_r32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030009, VkglTestCase_030009_1, VkglTestCase_030009_2);

#define VkglTestCase_030010_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030010_2 "iewclass_32_bits.rgb10_a2_r32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030010, VkglTestCase_030010_1, VkglTestCase_030010_2);

#define VkglTestCase_030011_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030011_2 "iewclass_32_bits.rgb10_a2_r32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030011, VkglTestCase_030011_1, VkglTestCase_030011_2);

#define VkglTestCase_030012_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_030012_2 "viewclass_32_bits.rgb10_a2_r32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030012, VkglTestCase_030012_1, VkglTestCase_030012_2);

#define VkglTestCase_030013_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030013_2 "class_32_bits.rgb10_a2_r32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030013, VkglTestCase_030013_1, VkglTestCase_030013_2);

#define VkglTestCase_030014_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030014_2 "wclass_32_bits.rgb10_a2_r32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030014, VkglTestCase_030014_1, VkglTestCase_030014_2);

#define VkglTestCase_030015_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030015_2 "lass_32_bits.rgb10_a2_r32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030015, VkglTestCase_030015_1, VkglTestCase_030015_2);

#define VkglTestCase_030016_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030016_2 "lass_32_bits.rgb10_a2_r32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030016, VkglTestCase_030016_1, VkglTestCase_030016_2);

#define VkglTestCase_030017_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030017_2 "class_32_bits.rgb10_a2_r32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030017, VkglTestCase_030017_1, VkglTestCase_030017_2);

#define VkglTestCase_030018_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030018_2 "s_32_bits.rgb10_a2_r32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030018, VkglTestCase_030018_1, VkglTestCase_030018_2);

#define VkglTestCase_030019_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030019_2 "ss_32_bits.rgb10_a2_r32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030019, VkglTestCase_030019_1, VkglTestCase_030019_2);

#define VkglTestCase_030020_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030020_2 "class_32_bits.rgb10_a2_r32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030020, VkglTestCase_030020_1, VkglTestCase_030020_2);

#define VkglTestCase_030021_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030021_2 "class_32_bits.rgb10_a2_r32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030021, VkglTestCase_030021_1, VkglTestCase_030021_2);

#define VkglTestCase_030022_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030022_2 "wclass_32_bits.rgb10_a2_r32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030022, VkglTestCase_030022_1, VkglTestCase_030022_2);

#define VkglTestCase_030023_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030023_2 "ss_32_bits.rgb10_a2_r32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030023, VkglTestCase_030023_1, VkglTestCase_030023_2);

#define VkglTestCase_030024_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030024_2 "lass_32_bits.rgb10_a2_r32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030024, VkglTestCase_030024_1, VkglTestCase_030024_2);
