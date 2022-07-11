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

#define VkglTestCase_032190_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032190_2 "viewclass_16_bits.rg8_rg8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032190, VkglTestCase_032190_1, VkglTestCase_032190_2);

#define VkglTestCase_032191_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032191_2 "viewclass_16_bits.rg8_rg8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032191, VkglTestCase_032191_1, VkglTestCase_032191_2);

#define VkglTestCase_032192_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032192_2 ".viewclass_16_bits.rg8_rg8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032192, VkglTestCase_032192_1, VkglTestCase_032192_2);

#define VkglTestCase_032193_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032193_2 "wclass_16_bits.rg8_rg8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032193, VkglTestCase_032193_1, VkglTestCase_032193_2);

#define VkglTestCase_032194_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032194_2 "iewclass_16_bits.rg8_rg8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032194, VkglTestCase_032194_1, VkglTestCase_032194_2);

#define VkglTestCase_032195_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032195_2 "viewclass_16_bits.rg8_rg8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032195, VkglTestCase_032195_1, VkglTestCase_032195_2);

#define VkglTestCase_032196_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032196_2 "viewclass_16_bits.rg8_rg8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032196, VkglTestCase_032196_1, VkglTestCase_032196_2);

#define VkglTestCase_032197_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032197_2 ".viewclass_16_bits.rg8_rg8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032197, VkglTestCase_032197_1, VkglTestCase_032197_2);

#define VkglTestCase_032198_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032198_2 "wclass_16_bits.rg8_rg8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032198, VkglTestCase_032198_1, VkglTestCase_032198_2);

#define VkglTestCase_032199_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032199_2 "iewclass_16_bits.rg8_rg8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032199, VkglTestCase_032199_1, VkglTestCase_032199_2);

#define VkglTestCase_032200_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032200_2 ".viewclass_16_bits.rg8_rg8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032200, VkglTestCase_032200_1, VkglTestCase_032200_2);

#define VkglTestCase_032201_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032201_2 ".viewclass_16_bits.rg8_rg8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032201, VkglTestCase_032201_1, VkglTestCase_032201_2);

#define VkglTestCase_032202_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032202_2 "d.viewclass_16_bits.rg8_rg8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032202, VkglTestCase_032202_1, VkglTestCase_032202_2);

#define VkglTestCase_032203_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032203_2 "ewclass_16_bits.rg8_rg8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032203, VkglTestCase_032203_1, VkglTestCase_032203_2);

#define VkglTestCase_032204_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032204_2 "viewclass_16_bits.rg8_rg8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032204, VkglTestCase_032204_1, VkglTestCase_032204_2);

#define VkglTestCase_032205_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032205_2 "wclass_16_bits.rg8_rg8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032205, VkglTestCase_032205_1, VkglTestCase_032205_2);

#define VkglTestCase_032206_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032206_2 "wclass_16_bits.rg8_rg8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032206, VkglTestCase_032206_1, VkglTestCase_032206_2);

#define VkglTestCase_032207_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032207_2 "ewclass_16_bits.rg8_rg8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032207, VkglTestCase_032207_1, VkglTestCase_032207_2);

#define VkglTestCase_032208_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032208_2 "ass_16_bits.rg8_rg8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032208, VkglTestCase_032208_1, VkglTestCase_032208_2);

#define VkglTestCase_032209_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032209_2 "class_16_bits.rg8_rg8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032209, VkglTestCase_032209_1, VkglTestCase_032209_2);

#define VkglTestCase_032210_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032210_2 "iewclass_16_bits.rg8_rg8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032210, VkglTestCase_032210_1, VkglTestCase_032210_2);

#define VkglTestCase_032211_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032211_2 "iewclass_16_bits.rg8_rg8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032211, VkglTestCase_032211_1, VkglTestCase_032211_2);

#define VkglTestCase_032212_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032212_2 "viewclass_16_bits.rg8_rg8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032212, VkglTestCase_032212_1, VkglTestCase_032212_2);

#define VkglTestCase_032213_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032213_2 "class_16_bits.rg8_rg8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032213, VkglTestCase_032213_1, VkglTestCase_032213_2);

#define VkglTestCase_032214_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032214_2 "wclass_16_bits.rg8_rg8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032214, VkglTestCase_032214_1, VkglTestCase_032214_2);
