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

#define VkglTestCase_032425_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032425_2 "iewclass_16_bits.rg8ui_r16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032425, VkglTestCase_032425_1, VkglTestCase_032425_2);

#define VkglTestCase_032426_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032426_2 "iewclass_16_bits.rg8ui_r16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032426, VkglTestCase_032426_1, VkglTestCase_032426_2);

#define VkglTestCase_032427_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032427_2 "viewclass_16_bits.rg8ui_r16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032427, VkglTestCase_032427_1, VkglTestCase_032427_2);

#define VkglTestCase_032428_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032428_2 "class_16_bits.rg8ui_r16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032428, VkglTestCase_032428_1, VkglTestCase_032428_2);

#define VkglTestCase_032429_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032429_2 "iewclass_16_bits.rg8ui_r16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032429, VkglTestCase_032429_1, VkglTestCase_032429_2);

#define VkglTestCase_032430_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032430_2 "iewclass_16_bits.rg8ui_r16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032430, VkglTestCase_032430_1, VkglTestCase_032430_2);

#define VkglTestCase_032431_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032431_2 "viewclass_16_bits.rg8ui_r16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032431, VkglTestCase_032431_1, VkglTestCase_032431_2);

#define VkglTestCase_032432_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032432_2 "class_16_bits.rg8ui_r16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032432, VkglTestCase_032432_1, VkglTestCase_032432_2);

#define VkglTestCase_032433_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032433_2 "viewclass_16_bits.rg8ui_r16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032433, VkglTestCase_032433_1, VkglTestCase_032433_2);

#define VkglTestCase_032434_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032434_2 "viewclass_16_bits.rg8ui_r16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032434, VkglTestCase_032434_1, VkglTestCase_032434_2);

#define VkglTestCase_032435_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032435_2 ".viewclass_16_bits.rg8ui_r16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032435, VkglTestCase_032435_1, VkglTestCase_032435_2);

#define VkglTestCase_032436_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032436_2 "wclass_16_bits.rg8ui_r16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032436, VkglTestCase_032436_1, VkglTestCase_032436_2);

#define VkglTestCase_032437_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032437_2 "class_16_bits.rg8ui_r16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032437, VkglTestCase_032437_1, VkglTestCase_032437_2);

#define VkglTestCase_032438_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032438_2 "class_16_bits.rg8ui_r16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032438, VkglTestCase_032438_1, VkglTestCase_032438_2);

#define VkglTestCase_032439_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032439_2 "wclass_16_bits.rg8ui_r16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032439, VkglTestCase_032439_1, VkglTestCase_032439_2);

#define VkglTestCase_032440_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032440_2 "ss_16_bits.rg8ui_r16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032440, VkglTestCase_032440_1, VkglTestCase_032440_2);

#define VkglTestCase_032441_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032441_2 "ewclass_16_bits.rg8ui_r16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032441, VkglTestCase_032441_1, VkglTestCase_032441_2);

#define VkglTestCase_032442_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032442_2 "ewclass_16_bits.rg8ui_r16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032442, VkglTestCase_032442_1, VkglTestCase_032442_2);

#define VkglTestCase_032443_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032443_2 "iewclass_16_bits.rg8ui_r16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032443, VkglTestCase_032443_1, VkglTestCase_032443_2);

#define VkglTestCase_032444_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032444_2 "lass_16_bits.rg8ui_r16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032444, VkglTestCase_032444_1, VkglTestCase_032444_2);
