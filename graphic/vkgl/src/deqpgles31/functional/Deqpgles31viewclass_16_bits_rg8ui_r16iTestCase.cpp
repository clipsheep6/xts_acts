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

#define VkglTestCase_032445_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032445_2 "iewclass_16_bits.rg8ui_r16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032445, VkglTestCase_032445_1, VkglTestCase_032445_2);

#define VkglTestCase_032446_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032446_2 "iewclass_16_bits.rg8ui_r16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032446, VkglTestCase_032446_1, VkglTestCase_032446_2);

#define VkglTestCase_032447_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032447_2 "viewclass_16_bits.rg8ui_r16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032447, VkglTestCase_032447_1, VkglTestCase_032447_2);

#define VkglTestCase_032448_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032448_2 "class_16_bits.rg8ui_r16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032448, VkglTestCase_032448_1, VkglTestCase_032448_2);

#define VkglTestCase_032449_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032449_2 "ewclass_16_bits.rg8ui_r16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032449, VkglTestCase_032449_1, VkglTestCase_032449_2);

#define VkglTestCase_032450_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032450_2 "iewclass_16_bits.rg8ui_r16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032450, VkglTestCase_032450_1, VkglTestCase_032450_2);

#define VkglTestCase_032451_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032451_2 "iewclass_16_bits.rg8ui_r16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032451, VkglTestCase_032451_1, VkglTestCase_032451_2);

#define VkglTestCase_032452_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032452_2 "viewclass_16_bits.rg8ui_r16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032452, VkglTestCase_032452_1, VkglTestCase_032452_2);

#define VkglTestCase_032453_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032453_2 "class_16_bits.rg8ui_r16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032453, VkglTestCase_032453_1, VkglTestCase_032453_2);

#define VkglTestCase_032454_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032454_2 "ewclass_16_bits.rg8ui_r16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032454, VkglTestCase_032454_1, VkglTestCase_032454_2);

#define VkglTestCase_032455_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032455_2 "viewclass_16_bits.rg8ui_r16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032455, VkglTestCase_032455_1, VkglTestCase_032455_2);

#define VkglTestCase_032456_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032456_2 "viewclass_16_bits.rg8ui_r16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032456, VkglTestCase_032456_1, VkglTestCase_032456_2);

#define VkglTestCase_032457_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032457_2 ".viewclass_16_bits.rg8ui_r16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032457, VkglTestCase_032457_1, VkglTestCase_032457_2);

#define VkglTestCase_032458_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032458_2 "wclass_16_bits.rg8ui_r16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032458, VkglTestCase_032458_1, VkglTestCase_032458_2);

#define VkglTestCase_032459_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032459_2 "iewclass_16_bits.rg8ui_r16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032459, VkglTestCase_032459_1, VkglTestCase_032459_2);

#define VkglTestCase_032460_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032460_2 "class_16_bits.rg8ui_r16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032460, VkglTestCase_032460_1, VkglTestCase_032460_2);

#define VkglTestCase_032461_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032461_2 "class_16_bits.rg8ui_r16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032461, VkglTestCase_032461_1, VkglTestCase_032461_2);

#define VkglTestCase_032462_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032462_2 "wclass_16_bits.rg8ui_r16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032462, VkglTestCase_032462_1, VkglTestCase_032462_2);

#define VkglTestCase_032463_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032463_2 "ss_16_bits.rg8ui_r16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032463, VkglTestCase_032463_1, VkglTestCase_032463_2);

#define VkglTestCase_032464_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032464_2 "lass_16_bits.rg8ui_r16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032464, VkglTestCase_032464_1, VkglTestCase_032464_2);

#define VkglTestCase_032465_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032465_2 "ewclass_16_bits.rg8ui_r16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032465, VkglTestCase_032465_1, VkglTestCase_032465_2);

#define VkglTestCase_032466_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032466_2 "ewclass_16_bits.rg8ui_r16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032466, VkglTestCase_032466_1, VkglTestCase_032466_2);

#define VkglTestCase_032467_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032467_2 "iewclass_16_bits.rg8ui_r16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032467, VkglTestCase_032467_1, VkglTestCase_032467_2);

#define VkglTestCase_032468_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032468_2 "lass_16_bits.rg8ui_r16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032468, VkglTestCase_032468_1, VkglTestCase_032468_2);

#define VkglTestCase_032469_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032469_2 "class_16_bits.rg8ui_r16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032469, VkglTestCase_032469_1, VkglTestCase_032469_2);
