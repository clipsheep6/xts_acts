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

#define VkglTestCase_032495_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032495_2 "viewclass_16_bits.rg8ui_rg8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032495, VkglTestCase_032495_1, VkglTestCase_032495_2);

#define VkglTestCase_032496_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032496_2 "viewclass_16_bits.rg8ui_rg8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032496, VkglTestCase_032496_1, VkglTestCase_032496_2);

#define VkglTestCase_032497_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032497_2 ".viewclass_16_bits.rg8ui_rg8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032497, VkglTestCase_032497_1, VkglTestCase_032497_2);

#define VkglTestCase_032498_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032498_2 "wclass_16_bits.rg8ui_rg8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032498, VkglTestCase_032498_1, VkglTestCase_032498_2);

#define VkglTestCase_032499_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032499_2 "ewclass_16_bits.rg8ui_rg8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032499, VkglTestCase_032499_1, VkglTestCase_032499_2);

#define VkglTestCase_032500_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032500_2 "viewclass_16_bits.rg8ui_rg8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032500, VkglTestCase_032500_1, VkglTestCase_032500_2);

#define VkglTestCase_032501_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032501_2 "viewclass_16_bits.rg8ui_rg8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032501, VkglTestCase_032501_1, VkglTestCase_032501_2);

#define VkglTestCase_032502_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032502_2 ".viewclass_16_bits.rg8ui_rg8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032502, VkglTestCase_032502_1, VkglTestCase_032502_2);

#define VkglTestCase_032503_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032503_2 "wclass_16_bits.rg8ui_rg8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032503, VkglTestCase_032503_1, VkglTestCase_032503_2);

#define VkglTestCase_032504_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032504_2 "ewclass_16_bits.rg8ui_rg8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032504, VkglTestCase_032504_1, VkglTestCase_032504_2);

#define VkglTestCase_032505_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032505_2 ".viewclass_16_bits.rg8ui_rg8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032505, VkglTestCase_032505_1, VkglTestCase_032505_2);

#define VkglTestCase_032506_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032506_2 ".viewclass_16_bits.rg8ui_rg8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032506, VkglTestCase_032506_1, VkglTestCase_032506_2);

#define VkglTestCase_032507_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032507_2 "d.viewclass_16_bits.rg8ui_rg8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032507, VkglTestCase_032507_1, VkglTestCase_032507_2);

#define VkglTestCase_032508_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032508_2 "ewclass_16_bits.rg8ui_rg8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032508, VkglTestCase_032508_1, VkglTestCase_032508_2);

#define VkglTestCase_032509_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032509_2 "iewclass_16_bits.rg8ui_rg8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032509, VkglTestCase_032509_1, VkglTestCase_032509_2);

#define VkglTestCase_032510_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032510_2 "wclass_16_bits.rg8ui_rg8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032510, VkglTestCase_032510_1, VkglTestCase_032510_2);

#define VkglTestCase_032511_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032511_2 "wclass_16_bits.rg8ui_rg8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032511, VkglTestCase_032511_1, VkglTestCase_032511_2);

#define VkglTestCase_032512_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032512_2 "ewclass_16_bits.rg8ui_rg8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032512, VkglTestCase_032512_1, VkglTestCase_032512_2);

#define VkglTestCase_032513_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032513_2 "ass_16_bits.rg8ui_rg8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032513, VkglTestCase_032513_1, VkglTestCase_032513_2);

#define VkglTestCase_032514_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032514_2 "lass_16_bits.rg8ui_rg8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032514, VkglTestCase_032514_1, VkglTestCase_032514_2);

#define VkglTestCase_032515_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032515_2 "ewclass_16_bits.rg8ui_rg8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032515, VkglTestCase_032515_1, VkglTestCase_032515_2);

#define VkglTestCase_032516_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032516_2 "ewclass_16_bits.rg8ui_rg8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032516, VkglTestCase_032516_1, VkglTestCase_032516_2);

#define VkglTestCase_032517_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032517_2 "iewclass_16_bits.rg8ui_rg8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032517, VkglTestCase_032517_1, VkglTestCase_032517_2);

#define VkglTestCase_032518_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032518_2 "lass_16_bits.rg8ui_rg8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032518, VkglTestCase_032518_1, VkglTestCase_032518_2);

#define VkglTestCase_032519_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032519_2 "wclass_16_bits.rg8ui_rg8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032519, VkglTestCase_032519_1, VkglTestCase_032519_2);
