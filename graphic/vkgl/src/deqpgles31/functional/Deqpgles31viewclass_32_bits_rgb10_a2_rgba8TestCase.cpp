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

#define VkglTestCase_030120_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030120_2 "wclass_32_bits.rgb10_a2_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030120, VkglTestCase_030120_1, VkglTestCase_030120_2);

#define VkglTestCase_030121_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030121_2 "wclass_32_bits.rgb10_a2_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030121, VkglTestCase_030121_1, VkglTestCase_030121_2);

#define VkglTestCase_030122_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030122_2 "ewclass_32_bits.rgb10_a2_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030122, VkglTestCase_030122_1, VkglTestCase_030122_2);

#define VkglTestCase_030123_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030123_2 "ass_32_bits.rgb10_a2_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030123, VkglTestCase_030123_1, VkglTestCase_030123_2);

#define VkglTestCase_030124_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030124_2 "class_32_bits.rgb10_a2_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030124, VkglTestCase_030124_1, VkglTestCase_030124_2);

#define VkglTestCase_030125_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030125_2 "wclass_32_bits.rgb10_a2_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030125, VkglTestCase_030125_1, VkglTestCase_030125_2);

#define VkglTestCase_030126_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030126_2 "wclass_32_bits.rgb10_a2_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030126, VkglTestCase_030126_1, VkglTestCase_030126_2);

#define VkglTestCase_030127_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030127_2 "ewclass_32_bits.rgb10_a2_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030127, VkglTestCase_030127_1, VkglTestCase_030127_2);

#define VkglTestCase_030128_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030128_2 "ass_32_bits.rgb10_a2_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030128, VkglTestCase_030128_1, VkglTestCase_030128_2);

#define VkglTestCase_030129_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030129_2 "class_32_bits.rgb10_a2_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030129, VkglTestCase_030129_1, VkglTestCase_030129_2);

#define VkglTestCase_030130_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030130_2 "ewclass_32_bits.rgb10_a2_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030130, VkglTestCase_030130_1, VkglTestCase_030130_2);

#define VkglTestCase_030131_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030131_2 "ewclass_32_bits.rgb10_a2_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030131, VkglTestCase_030131_1, VkglTestCase_030131_2);

#define VkglTestCase_030132_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_030132_2 "iewclass_32_bits.rgb10_a2_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030132, VkglTestCase_030132_1, VkglTestCase_030132_2);

#define VkglTestCase_030133_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030133_2 "lass_32_bits.rgb10_a2_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030133, VkglTestCase_030133_1, VkglTestCase_030133_2);

#define VkglTestCase_030134_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030134_2 "wclass_32_bits.rgb10_a2_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030134, VkglTestCase_030134_1, VkglTestCase_030134_2);

#define VkglTestCase_030135_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030135_2 "ass_32_bits.rgb10_a2_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030135, VkglTestCase_030135_1, VkglTestCase_030135_2);

#define VkglTestCase_030136_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030136_2 "ass_32_bits.rgb10_a2_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030136, VkglTestCase_030136_1, VkglTestCase_030136_2);

#define VkglTestCase_030137_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030137_2 "lass_32_bits.rgb10_a2_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030137, VkglTestCase_030137_1, VkglTestCase_030137_2);

#define VkglTestCase_030138_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030138_2 "_32_bits.rgb10_a2_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030138, VkglTestCase_030138_1, VkglTestCase_030138_2);

#define VkglTestCase_030139_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030139_2 "ss_32_bits.rgb10_a2_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030139, VkglTestCase_030139_1, VkglTestCase_030139_2);

#define VkglTestCase_030140_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030140_2 "class_32_bits.rgb10_a2_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030140, VkglTestCase_030140_1, VkglTestCase_030140_2);

#define VkglTestCase_030141_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030141_2 "class_32_bits.rgb10_a2_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030141, VkglTestCase_030141_1, VkglTestCase_030141_2);

#define VkglTestCase_030142_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030142_2 "wclass_32_bits.rgb10_a2_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030142, VkglTestCase_030142_1, VkglTestCase_030142_2);

#define VkglTestCase_030143_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030143_2 "ss_32_bits.rgb10_a2_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030143, VkglTestCase_030143_1, VkglTestCase_030143_2);

#define VkglTestCase_030144_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030144_2 "ass_32_bits.rgb10_a2_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030144, VkglTestCase_030144_1, VkglTestCase_030144_2);
