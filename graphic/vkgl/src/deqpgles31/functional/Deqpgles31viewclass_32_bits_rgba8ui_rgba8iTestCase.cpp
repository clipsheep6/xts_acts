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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029213_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029213_2 "wclass_32_bits.rgba8ui_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029213, VkglTestCase_029213_1, VkglTestCase_029213_2);

#define VkglTestCase_029214_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029214_2 "wclass_32_bits.rgba8ui_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029214, VkglTestCase_029214_1, VkglTestCase_029214_2);

#define VkglTestCase_029215_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029215_2 "ewclass_32_bits.rgba8ui_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029215, VkglTestCase_029215_1, VkglTestCase_029215_2);

#define VkglTestCase_029216_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029216_2 "ass_32_bits.rgba8ui_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029216, VkglTestCase_029216_1, VkglTestCase_029216_2);

#define VkglTestCase_029217_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029217_2 "class_32_bits.rgba8ui_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029217, VkglTestCase_029217_1, VkglTestCase_029217_2);

#define VkglTestCase_029218_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029218_2 "wclass_32_bits.rgba8ui_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029218, VkglTestCase_029218_1, VkglTestCase_029218_2);

#define VkglTestCase_029219_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029219_2 "wclass_32_bits.rgba8ui_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029219, VkglTestCase_029219_1, VkglTestCase_029219_2);

#define VkglTestCase_029220_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029220_2 "ewclass_32_bits.rgba8ui_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029220, VkglTestCase_029220_1, VkglTestCase_029220_2);

#define VkglTestCase_029221_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029221_2 "ass_32_bits.rgba8ui_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029221, VkglTestCase_029221_1, VkglTestCase_029221_2);

#define VkglTestCase_029222_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029222_2 "class_32_bits.rgba8ui_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029222, VkglTestCase_029222_1, VkglTestCase_029222_2);

#define VkglTestCase_029223_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029223_2 "ewclass_32_bits.rgba8ui_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029223, VkglTestCase_029223_1, VkglTestCase_029223_2);

#define VkglTestCase_029224_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029224_2 "ewclass_32_bits.rgba8ui_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029224, VkglTestCase_029224_1, VkglTestCase_029224_2);

#define VkglTestCase_029225_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029225_2 "iewclass_32_bits.rgba8ui_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029225, VkglTestCase_029225_1, VkglTestCase_029225_2);

#define VkglTestCase_029226_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029226_2 "lass_32_bits.rgba8ui_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029226, VkglTestCase_029226_1, VkglTestCase_029226_2);

#define VkglTestCase_029227_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029227_2 "wclass_32_bits.rgba8ui_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029227, VkglTestCase_029227_1, VkglTestCase_029227_2);

#define VkglTestCase_029228_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029228_2 "ass_32_bits.rgba8ui_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029228, VkglTestCase_029228_1, VkglTestCase_029228_2);

#define VkglTestCase_029229_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029229_2 "ass_32_bits.rgba8ui_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029229, VkglTestCase_029229_1, VkglTestCase_029229_2);

#define VkglTestCase_029230_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029230_2 "lass_32_bits.rgba8ui_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029230, VkglTestCase_029230_1, VkglTestCase_029230_2);

#define VkglTestCase_029231_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029231_2 "_32_bits.rgba8ui_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029231, VkglTestCase_029231_1, VkglTestCase_029231_2);

#define VkglTestCase_029232_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029232_2 "ss_32_bits.rgba8ui_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029232, VkglTestCase_029232_1, VkglTestCase_029232_2);

#define VkglTestCase_029233_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029233_2 "class_32_bits.rgba8ui_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029233, VkglTestCase_029233_1, VkglTestCase_029233_2);

#define VkglTestCase_029234_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029234_2 "class_32_bits.rgba8ui_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029234, VkglTestCase_029234_1, VkglTestCase_029234_2);

#define VkglTestCase_029235_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029235_2 "wclass_32_bits.rgba8ui_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029235, VkglTestCase_029235_1, VkglTestCase_029235_2);

#define VkglTestCase_029236_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029236_2 "ss_32_bits.rgba8ui_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029236, VkglTestCase_029236_1, VkglTestCase_029236_2);

#define VkglTestCase_029237_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029237_2 "ass_32_bits.rgba8ui_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029237, VkglTestCase_029237_1, VkglTestCase_029237_2);
