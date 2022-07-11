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

#define VkglTestCase_032260_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032260_2 "viewclass_16_bits.rg8i_r16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032260, VkglTestCase_032260_1, VkglTestCase_032260_2);

#define VkglTestCase_032261_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032261_2 "viewclass_16_bits.rg8i_r16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032261, VkglTestCase_032261_1, VkglTestCase_032261_2);

#define VkglTestCase_032262_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032262_2 ".viewclass_16_bits.rg8i_r16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032262, VkglTestCase_032262_1, VkglTestCase_032262_2);

#define VkglTestCase_032263_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032263_2 "wclass_16_bits.rg8i_r16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032263, VkglTestCase_032263_1, VkglTestCase_032263_2);

#define VkglTestCase_032264_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032264_2 "viewclass_16_bits.rg8i_r16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032264, VkglTestCase_032264_1, VkglTestCase_032264_2);

#define VkglTestCase_032265_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032265_2 "viewclass_16_bits.rg8i_r16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032265, VkglTestCase_032265_1, VkglTestCase_032265_2);

#define VkglTestCase_032266_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032266_2 ".viewclass_16_bits.rg8i_r16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032266, VkglTestCase_032266_1, VkglTestCase_032266_2);

#define VkglTestCase_032267_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032267_2 "wclass_16_bits.rg8i_r16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032267, VkglTestCase_032267_1, VkglTestCase_032267_2);

#define VkglTestCase_032268_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032268_2 ".viewclass_16_bits.rg8i_r16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032268, VkglTestCase_032268_1, VkglTestCase_032268_2);

#define VkglTestCase_032269_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032269_2 ".viewclass_16_bits.rg8i_r16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032269, VkglTestCase_032269_1, VkglTestCase_032269_2);

#define VkglTestCase_032270_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032270_2 "d.viewclass_16_bits.rg8i_r16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032270, VkglTestCase_032270_1, VkglTestCase_032270_2);

#define VkglTestCase_032271_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032271_2 "ewclass_16_bits.rg8i_r16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032271, VkglTestCase_032271_1, VkglTestCase_032271_2);

#define VkglTestCase_032272_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032272_2 "wclass_16_bits.rg8i_r16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032272, VkglTestCase_032272_1, VkglTestCase_032272_2);

#define VkglTestCase_032273_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032273_2 "wclass_16_bits.rg8i_r16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032273, VkglTestCase_032273_1, VkglTestCase_032273_2);

#define VkglTestCase_032274_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032274_2 "ewclass_16_bits.rg8i_r16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032274, VkglTestCase_032274_1, VkglTestCase_032274_2);

#define VkglTestCase_032275_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032275_2 "ass_16_bits.rg8i_r16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032275, VkglTestCase_032275_1, VkglTestCase_032275_2);

#define VkglTestCase_032276_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032276_2 "ewclass_16_bits.rg8i_r16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032276, VkglTestCase_032276_1, VkglTestCase_032276_2);

#define VkglTestCase_032277_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032277_2 "ewclass_16_bits.rg8i_r16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032277, VkglTestCase_032277_1, VkglTestCase_032277_2);

#define VkglTestCase_032278_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032278_2 "iewclass_16_bits.rg8i_r16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032278, VkglTestCase_032278_1, VkglTestCase_032278_2);

#define VkglTestCase_032279_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032279_2 "lass_16_bits.rg8i_r16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032279, VkglTestCase_032279_1, VkglTestCase_032279_2);
