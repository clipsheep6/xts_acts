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

#define VkglTestCase_027206_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027206_2 "iewclass_32_bits.r32ui_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027206, VkglTestCase_027206_1, VkglTestCase_027206_2);

#define VkglTestCase_027207_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027207_2 "iewclass_32_bits.r32ui_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027207, VkglTestCase_027207_1, VkglTestCase_027207_2);

#define VkglTestCase_027208_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027208_2 "viewclass_32_bits.r32ui_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027208, VkglTestCase_027208_1, VkglTestCase_027208_2);

#define VkglTestCase_027209_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027209_2 "class_32_bits.r32ui_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027209, VkglTestCase_027209_1, VkglTestCase_027209_2);

#define VkglTestCase_027210_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027210_2 "wclass_32_bits.r32ui_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027210, VkglTestCase_027210_1, VkglTestCase_027210_2);

#define VkglTestCase_027211_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027211_2 "iewclass_32_bits.r32ui_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027211, VkglTestCase_027211_1, VkglTestCase_027211_2);

#define VkglTestCase_027212_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027212_2 "iewclass_32_bits.r32ui_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027212, VkglTestCase_027212_1, VkglTestCase_027212_2);

#define VkglTestCase_027213_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027213_2 "viewclass_32_bits.r32ui_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027213, VkglTestCase_027213_1, VkglTestCase_027213_2);

#define VkglTestCase_027214_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027214_2 "class_32_bits.r32ui_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027214, VkglTestCase_027214_1, VkglTestCase_027214_2);

#define VkglTestCase_027215_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027215_2 "wclass_32_bits.r32ui_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027215, VkglTestCase_027215_1, VkglTestCase_027215_2);

#define VkglTestCase_027216_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027216_2 "viewclass_32_bits.r32ui_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027216, VkglTestCase_027216_1, VkglTestCase_027216_2);

#define VkglTestCase_027217_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027217_2 "viewclass_32_bits.r32ui_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027217, VkglTestCase_027217_1, VkglTestCase_027217_2);

#define VkglTestCase_027218_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027218_2 ".viewclass_32_bits.r32ui_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027218, VkglTestCase_027218_1, VkglTestCase_027218_2);

#define VkglTestCase_027219_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027219_2 "wclass_32_bits.r32ui_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027219, VkglTestCase_027219_1, VkglTestCase_027219_2);

#define VkglTestCase_027220_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027220_2 "ewclass_32_bits.r32ui_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027220, VkglTestCase_027220_1, VkglTestCase_027220_2);

#define VkglTestCase_027221_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027221_2 "class_32_bits.r32ui_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027221, VkglTestCase_027221_1, VkglTestCase_027221_2);

#define VkglTestCase_027222_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027222_2 "class_32_bits.r32ui_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027222, VkglTestCase_027222_1, VkglTestCase_027222_2);

#define VkglTestCase_027223_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027223_2 "wclass_32_bits.r32ui_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027223, VkglTestCase_027223_1, VkglTestCase_027223_2);

#define VkglTestCase_027224_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027224_2 "ss_32_bits.r32ui_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027224, VkglTestCase_027224_1, VkglTestCase_027224_2);

#define VkglTestCase_027225_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027225_2 "ass_32_bits.r32ui_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027225, VkglTestCase_027225_1, VkglTestCase_027225_2);

#define VkglTestCase_027226_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027226_2 "wclass_32_bits.r32ui_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027226, VkglTestCase_027226_1, VkglTestCase_027226_2);

#define VkglTestCase_027227_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027227_2 "wclass_32_bits.r32ui_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027227, VkglTestCase_027227_1, VkglTestCase_027227_2);

#define VkglTestCase_027228_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027228_2 "ewclass_32_bits.r32ui_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027228, VkglTestCase_027228_1, VkglTestCase_027228_2);

#define VkglTestCase_027229_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027229_2 "ass_32_bits.r32ui_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027229, VkglTestCase_027229_1, VkglTestCase_027229_2);

#define VkglTestCase_027230_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027230_2 "class_32_bits.r32ui_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027230, VkglTestCase_027230_1, VkglTestCase_027230_2);
