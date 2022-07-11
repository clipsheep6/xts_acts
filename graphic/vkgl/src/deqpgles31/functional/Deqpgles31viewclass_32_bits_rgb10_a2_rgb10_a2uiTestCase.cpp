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

#define VkglTestCase_030215_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030215_2 "lass_32_bits.rgb10_a2_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030215, VkglTestCase_030215_1, VkglTestCase_030215_2);

#define VkglTestCase_030216_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030216_2 "lass_32_bits.rgb10_a2_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030216, VkglTestCase_030216_1, VkglTestCase_030216_2);

#define VkglTestCase_030217_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030217_2 "class_32_bits.rgb10_a2_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030217, VkglTestCase_030217_1, VkglTestCase_030217_2);

#define VkglTestCase_030218_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030218_2 "s_32_bits.rgb10_a2_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030218, VkglTestCase_030218_1, VkglTestCase_030218_2);

#define VkglTestCase_030219_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030219_2 "ss_32_bits.rgb10_a2_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030219, VkglTestCase_030219_1, VkglTestCase_030219_2);

#define VkglTestCase_030220_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030220_2 "lass_32_bits.rgb10_a2_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030220, VkglTestCase_030220_1, VkglTestCase_030220_2);

#define VkglTestCase_030221_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030221_2 "lass_32_bits.rgb10_a2_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030221, VkglTestCase_030221_1, VkglTestCase_030221_2);

#define VkglTestCase_030222_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030222_2 "class_32_bits.rgb10_a2_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030222, VkglTestCase_030222_1, VkglTestCase_030222_2);

#define VkglTestCase_030223_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030223_2 "s_32_bits.rgb10_a2_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030223, VkglTestCase_030223_1, VkglTestCase_030223_2);

#define VkglTestCase_030224_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030224_2 "ss_32_bits.rgb10_a2_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030224, VkglTestCase_030224_1, VkglTestCase_030224_2);

#define VkglTestCase_030225_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030225_2 "class_32_bits.rgb10_a2_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030225, VkglTestCase_030225_1, VkglTestCase_030225_2);

#define VkglTestCase_030226_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030226_2 "class_32_bits.rgb10_a2_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030226, VkglTestCase_030226_1, VkglTestCase_030226_2);

#define VkglTestCase_030227_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030227_2 "wclass_32_bits.rgb10_a2_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030227, VkglTestCase_030227_1, VkglTestCase_030227_2);

#define VkglTestCase_030228_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030228_2 "ss_32_bits.rgb10_a2_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030228, VkglTestCase_030228_1, VkglTestCase_030228_2);

#define VkglTestCase_030229_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030229_2 "ass_32_bits.rgb10_a2_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030229, VkglTestCase_030229_1, VkglTestCase_030229_2);

#define VkglTestCase_030230_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030230_2 "s_32_bits.rgb10_a2_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030230, VkglTestCase_030230_1, VkglTestCase_030230_2);

#define VkglTestCase_030231_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030231_2 "s_32_bits.rgb10_a2_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030231, VkglTestCase_030231_1, VkglTestCase_030231_2);

#define VkglTestCase_030232_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030232_2 "ss_32_bits.rgb10_a2_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030232, VkglTestCase_030232_1, VkglTestCase_030232_2);

#define VkglTestCase_030233_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030233_2 "2_bits.rgb10_a2_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030233, VkglTestCase_030233_1, VkglTestCase_030233_2);

#define VkglTestCase_030234_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030234_2 "32_bits.rgb10_a2_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030234, VkglTestCase_030234_1, VkglTestCase_030234_2);

#define VkglTestCase_030235_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030235_2 "ss_32_bits.rgb10_a2_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030235, VkglTestCase_030235_1, VkglTestCase_030235_2);

#define VkglTestCase_030236_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030236_2 "ss_32_bits.rgb10_a2_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030236, VkglTestCase_030236_1, VkglTestCase_030236_2);

#define VkglTestCase_030237_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030237_2 "ass_32_bits.rgb10_a2_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030237, VkglTestCase_030237_1, VkglTestCase_030237_2);

#define VkglTestCase_030238_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030238_2 "32_bits.rgb10_a2_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030238, VkglTestCase_030238_1, VkglTestCase_030238_2);

#define VkglTestCase_030239_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030239_2 "s_32_bits.rgb10_a2_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030239, VkglTestCase_030239_1, VkglTestCase_030239_2);
