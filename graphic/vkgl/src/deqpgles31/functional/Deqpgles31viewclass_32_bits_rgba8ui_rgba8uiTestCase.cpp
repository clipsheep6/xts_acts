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

#define VkglTestCase_029238_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029238_2 "wclass_32_bits.rgba8ui_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029238, VkglTestCase_029238_1, VkglTestCase_029238_2);

#define VkglTestCase_029239_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029239_2 "wclass_32_bits.rgba8ui_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029239, VkglTestCase_029239_1, VkglTestCase_029239_2);

#define VkglTestCase_029240_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029240_2 "ewclass_32_bits.rgba8ui_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029240, VkglTestCase_029240_1, VkglTestCase_029240_2);

#define VkglTestCase_029241_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029241_2 "ass_32_bits.rgba8ui_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029241, VkglTestCase_029241_1, VkglTestCase_029241_2);

#define VkglTestCase_029242_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029242_2 "lass_32_bits.rgba8ui_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029242, VkglTestCase_029242_1, VkglTestCase_029242_2);

#define VkglTestCase_029243_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029243_2 "wclass_32_bits.rgba8ui_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029243, VkglTestCase_029243_1, VkglTestCase_029243_2);

#define VkglTestCase_029244_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029244_2 "wclass_32_bits.rgba8ui_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029244, VkglTestCase_029244_1, VkglTestCase_029244_2);

#define VkglTestCase_029245_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029245_2 "ewclass_32_bits.rgba8ui_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029245, VkglTestCase_029245_1, VkglTestCase_029245_2);

#define VkglTestCase_029246_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029246_2 "ass_32_bits.rgba8ui_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029246, VkglTestCase_029246_1, VkglTestCase_029246_2);

#define VkglTestCase_029247_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029247_2 "lass_32_bits.rgba8ui_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029247, VkglTestCase_029247_1, VkglTestCase_029247_2);

#define VkglTestCase_029248_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029248_2 "ewclass_32_bits.rgba8ui_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029248, VkglTestCase_029248_1, VkglTestCase_029248_2);

#define VkglTestCase_029249_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029249_2 "ewclass_32_bits.rgba8ui_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029249, VkglTestCase_029249_1, VkglTestCase_029249_2);

#define VkglTestCase_029250_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029250_2 "iewclass_32_bits.rgba8ui_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029250, VkglTestCase_029250_1, VkglTestCase_029250_2);

#define VkglTestCase_029251_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029251_2 "lass_32_bits.rgba8ui_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029251, VkglTestCase_029251_1, VkglTestCase_029251_2);

#define VkglTestCase_029252_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029252_2 "class_32_bits.rgba8ui_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029252, VkglTestCase_029252_1, VkglTestCase_029252_2);

#define VkglTestCase_029253_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029253_2 "ass_32_bits.rgba8ui_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029253, VkglTestCase_029253_1, VkglTestCase_029253_2);

#define VkglTestCase_029254_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029254_2 "ass_32_bits.rgba8ui_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029254, VkglTestCase_029254_1, VkglTestCase_029254_2);

#define VkglTestCase_029255_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029255_2 "lass_32_bits.rgba8ui_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029255, VkglTestCase_029255_1, VkglTestCase_029255_2);

#define VkglTestCase_029256_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_029256_2 "_32_bits.rgba8ui_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029256, VkglTestCase_029256_1, VkglTestCase_029256_2);

#define VkglTestCase_029257_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029257_2 "s_32_bits.rgba8ui_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029257, VkglTestCase_029257_1, VkglTestCase_029257_2);

#define VkglTestCase_029258_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029258_2 "lass_32_bits.rgba8ui_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029258, VkglTestCase_029258_1, VkglTestCase_029258_2);

#define VkglTestCase_029259_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029259_2 "lass_32_bits.rgba8ui_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029259, VkglTestCase_029259_1, VkglTestCase_029259_2);

#define VkglTestCase_029260_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029260_2 "class_32_bits.rgba8ui_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029260, VkglTestCase_029260_1, VkglTestCase_029260_2);

#define VkglTestCase_029261_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029261_2 "s_32_bits.rgba8ui_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029261, VkglTestCase_029261_1, VkglTestCase_029261_2);

#define VkglTestCase_029262_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_029262_2 "ass_32_bits.rgba8ui_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029262, VkglTestCase_029262_1, VkglTestCase_029262_2);
