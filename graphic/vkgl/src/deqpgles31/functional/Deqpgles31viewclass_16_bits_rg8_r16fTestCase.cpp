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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032095_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032095_2 "viewclass_16_bits.rg8_r16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032095, VkglTestCase_032095_1, VkglTestCase_032095_2);

#define VkglTestCase_032096_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032096_2 "viewclass_16_bits.rg8_r16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032096, VkglTestCase_032096_1, VkglTestCase_032096_2);

#define VkglTestCase_032097_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032097_2 ".viewclass_16_bits.rg8_r16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032097, VkglTestCase_032097_1, VkglTestCase_032097_2);

#define VkglTestCase_032098_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032098_2 "wclass_16_bits.rg8_r16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032098, VkglTestCase_032098_1, VkglTestCase_032098_2);

#define VkglTestCase_032099_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032099_2 "viewclass_16_bits.rg8_r16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032099, VkglTestCase_032099_1, VkglTestCase_032099_2);

#define VkglTestCase_032100_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032100_2 "viewclass_16_bits.rg8_r16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032100, VkglTestCase_032100_1, VkglTestCase_032100_2);

#define VkglTestCase_032101_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032101_2 ".viewclass_16_bits.rg8_r16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032101, VkglTestCase_032101_1, VkglTestCase_032101_2);

#define VkglTestCase_032102_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032102_2 "wclass_16_bits.rg8_r16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032102, VkglTestCase_032102_1, VkglTestCase_032102_2);

#define VkglTestCase_032103_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032103_2 ".viewclass_16_bits.rg8_r16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032103, VkglTestCase_032103_1, VkglTestCase_032103_2);

#define VkglTestCase_032104_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032104_2 ".viewclass_16_bits.rg8_r16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032104, VkglTestCase_032104_1, VkglTestCase_032104_2);

#define VkglTestCase_032105_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032105_2 "d.viewclass_16_bits.rg8_r16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032105, VkglTestCase_032105_1, VkglTestCase_032105_2);

#define VkglTestCase_032106_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032106_2 "ewclass_16_bits.rg8_r16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032106, VkglTestCase_032106_1, VkglTestCase_032106_2);

#define VkglTestCase_032107_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032107_2 "wclass_16_bits.rg8_r16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032107, VkglTestCase_032107_1, VkglTestCase_032107_2);

#define VkglTestCase_032108_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032108_2 "wclass_16_bits.rg8_r16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032108, VkglTestCase_032108_1, VkglTestCase_032108_2);

#define VkglTestCase_032109_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032109_2 "ewclass_16_bits.rg8_r16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032109, VkglTestCase_032109_1, VkglTestCase_032109_2);

#define VkglTestCase_032110_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032110_2 "ass_16_bits.rg8_r16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032110, VkglTestCase_032110_1, VkglTestCase_032110_2);

#define VkglTestCase_032111_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032111_2 "iewclass_16_bits.rg8_r16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032111, VkglTestCase_032111_1, VkglTestCase_032111_2);

#define VkglTestCase_032112_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032112_2 "iewclass_16_bits.rg8_r16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032112, VkglTestCase_032112_1, VkglTestCase_032112_2);

#define VkglTestCase_032113_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032113_2 "viewclass_16_bits.rg8_r16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032113, VkglTestCase_032113_1, VkglTestCase_032113_2);

#define VkglTestCase_032114_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032114_2 "class_16_bits.rg8_r16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032114, VkglTestCase_032114_1, VkglTestCase_032114_2);
