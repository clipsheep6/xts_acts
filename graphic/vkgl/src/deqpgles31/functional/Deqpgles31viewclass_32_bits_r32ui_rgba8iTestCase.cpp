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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027231_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027231_2 "ewclass_32_bits.r32ui_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027231, VkglTestCase_027231_1, VkglTestCase_027231_2);

#define VkglTestCase_027232_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027232_2 "ewclass_32_bits.r32ui_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027232, VkglTestCase_027232_1, VkglTestCase_027232_2);

#define VkglTestCase_027233_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027233_2 "iewclass_32_bits.r32ui_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027233, VkglTestCase_027233_1, VkglTestCase_027233_2);

#define VkglTestCase_027234_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027234_2 "lass_32_bits.r32ui_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027234, VkglTestCase_027234_1, VkglTestCase_027234_2);

#define VkglTestCase_027235_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027235_2 "wclass_32_bits.r32ui_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027235, VkglTestCase_027235_1, VkglTestCase_027235_2);

#define VkglTestCase_027236_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027236_2 "ewclass_32_bits.r32ui_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027236, VkglTestCase_027236_1, VkglTestCase_027236_2);

#define VkglTestCase_027237_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027237_2 "ewclass_32_bits.r32ui_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027237, VkglTestCase_027237_1, VkglTestCase_027237_2);

#define VkglTestCase_027238_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027238_2 "iewclass_32_bits.r32ui_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027238, VkglTestCase_027238_1, VkglTestCase_027238_2);

#define VkglTestCase_027239_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027239_2 "lass_32_bits.r32ui_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027239, VkglTestCase_027239_1, VkglTestCase_027239_2);

#define VkglTestCase_027240_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027240_2 "wclass_32_bits.r32ui_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027240, VkglTestCase_027240_1, VkglTestCase_027240_2);

#define VkglTestCase_027241_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027241_2 "iewclass_32_bits.r32ui_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027241, VkglTestCase_027241_1, VkglTestCase_027241_2);

#define VkglTestCase_027242_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027242_2 "iewclass_32_bits.r32ui_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027242, VkglTestCase_027242_1, VkglTestCase_027242_2);

#define VkglTestCase_027243_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027243_2 "viewclass_32_bits.r32ui_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027243, VkglTestCase_027243_1, VkglTestCase_027243_2);

#define VkglTestCase_027244_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027244_2 "class_32_bits.r32ui_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027244, VkglTestCase_027244_1, VkglTestCase_027244_2);

#define VkglTestCase_027245_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027245_2 "ewclass_32_bits.r32ui_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027245, VkglTestCase_027245_1, VkglTestCase_027245_2);

#define VkglTestCase_027246_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027246_2 "lass_32_bits.r32ui_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027246, VkglTestCase_027246_1, VkglTestCase_027246_2);

#define VkglTestCase_027247_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027247_2 "lass_32_bits.r32ui_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027247, VkglTestCase_027247_1, VkglTestCase_027247_2);

#define VkglTestCase_027248_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027248_2 "class_32_bits.r32ui_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027248, VkglTestCase_027248_1, VkglTestCase_027248_2);

#define VkglTestCase_027249_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027249_2 "s_32_bits.r32ui_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027249, VkglTestCase_027249_1, VkglTestCase_027249_2);

#define VkglTestCase_027250_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027250_2 "ass_32_bits.r32ui_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027250, VkglTestCase_027250_1, VkglTestCase_027250_2);

#define VkglTestCase_027251_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027251_2 "wclass_32_bits.r32ui_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027251, VkglTestCase_027251_1, VkglTestCase_027251_2);

#define VkglTestCase_027252_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027252_2 "wclass_32_bits.r32ui_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027252, VkglTestCase_027252_1, VkglTestCase_027252_2);

#define VkglTestCase_027253_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027253_2 "ewclass_32_bits.r32ui_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027253, VkglTestCase_027253_1, VkglTestCase_027253_2);

#define VkglTestCase_027254_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027254_2 "ass_32_bits.r32ui_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027254, VkglTestCase_027254_1, VkglTestCase_027254_2);

#define VkglTestCase_027255_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027255_2 "lass_32_bits.r32ui_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027255, VkglTestCase_027255_1, VkglTestCase_027255_2);
