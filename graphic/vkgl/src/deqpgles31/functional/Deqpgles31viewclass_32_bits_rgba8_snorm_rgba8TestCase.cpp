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

#define VkglTestCase_030442_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030442_2 "class_32_bits.rgba8_snorm_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030442, VkglTestCase_030442_1, VkglTestCase_030442_2);

#define VkglTestCase_030443_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030443_2 "class_32_bits.rgba8_snorm_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030443, VkglTestCase_030443_1, VkglTestCase_030443_2);

#define VkglTestCase_030444_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030444_2 "wclass_32_bits.rgba8_snorm_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030444, VkglTestCase_030444_1, VkglTestCase_030444_2);

#define VkglTestCase_030445_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030445_2 "ss_32_bits.rgba8_snorm_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030445, VkglTestCase_030445_1, VkglTestCase_030445_2);

#define VkglTestCase_030446_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030446_2 "ass_32_bits.rgba8_snorm_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030446, VkglTestCase_030446_1, VkglTestCase_030446_2);

#define VkglTestCase_030447_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030447_2 "class_32_bits.rgba8_snorm_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030447, VkglTestCase_030447_1, VkglTestCase_030447_2);

#define VkglTestCase_030448_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030448_2 "class_32_bits.rgba8_snorm_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030448, VkglTestCase_030448_1, VkglTestCase_030448_2);

#define VkglTestCase_030449_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030449_2 "wclass_32_bits.rgba8_snorm_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030449, VkglTestCase_030449_1, VkglTestCase_030449_2);

#define VkglTestCase_030450_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030450_2 "ss_32_bits.rgba8_snorm_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030450, VkglTestCase_030450_1, VkglTestCase_030450_2);

#define VkglTestCase_030451_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030451_2 "ass_32_bits.rgba8_snorm_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030451, VkglTestCase_030451_1, VkglTestCase_030451_2);

#define VkglTestCase_030452_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030452_2 "wclass_32_bits.rgba8_snorm_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030452, VkglTestCase_030452_1, VkglTestCase_030452_2);

#define VkglTestCase_030453_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030453_2 "wclass_32_bits.rgba8_snorm_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030453, VkglTestCase_030453_1, VkglTestCase_030453_2);

#define VkglTestCase_030454_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030454_2 "ewclass_32_bits.rgba8_snorm_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030454, VkglTestCase_030454_1, VkglTestCase_030454_2);

#define VkglTestCase_030455_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030455_2 "ass_32_bits.rgba8_snorm_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030455, VkglTestCase_030455_1, VkglTestCase_030455_2);

#define VkglTestCase_030456_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030456_2 "lass_32_bits.rgba8_snorm_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030456, VkglTestCase_030456_1, VkglTestCase_030456_2);

#define VkglTestCase_030457_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030457_2 "ss_32_bits.rgba8_snorm_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030457, VkglTestCase_030457_1, VkglTestCase_030457_2);

#define VkglTestCase_030458_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030458_2 "ss_32_bits.rgba8_snorm_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030458, VkglTestCase_030458_1, VkglTestCase_030458_2);

#define VkglTestCase_030459_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030459_2 "ass_32_bits.rgba8_snorm_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030459, VkglTestCase_030459_1, VkglTestCase_030459_2);

#define VkglTestCase_030460_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030460_2 "32_bits.rgba8_snorm_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030460, VkglTestCase_030460_1, VkglTestCase_030460_2);

#define VkglTestCase_030461_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030461_2 "_32_bits.rgba8_snorm_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030461, VkglTestCase_030461_1, VkglTestCase_030461_2);
