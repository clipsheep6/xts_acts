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

#define VkglTestCase_029188_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029188_2 "ewclass_32_bits.rgba8ui_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029188, VkglTestCase_029188_1, VkglTestCase_029188_2);

#define VkglTestCase_029189_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029189_2 "ewclass_32_bits.rgba8ui_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029189, VkglTestCase_029189_1, VkglTestCase_029189_2);

#define VkglTestCase_029190_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029190_2 "iewclass_32_bits.rgba8ui_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029190, VkglTestCase_029190_1, VkglTestCase_029190_2);

#define VkglTestCase_029191_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029191_2 "lass_32_bits.rgba8ui_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029191, VkglTestCase_029191_1, VkglTestCase_029191_2);

#define VkglTestCase_029192_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029192_2 "class_32_bits.rgba8ui_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029192, VkglTestCase_029192_1, VkglTestCase_029192_2);

#define VkglTestCase_029193_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029193_2 "ewclass_32_bits.rgba8ui_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029193, VkglTestCase_029193_1, VkglTestCase_029193_2);

#define VkglTestCase_029194_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029194_2 "ewclass_32_bits.rgba8ui_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029194, VkglTestCase_029194_1, VkglTestCase_029194_2);

#define VkglTestCase_029195_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029195_2 "iewclass_32_bits.rgba8ui_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029195, VkglTestCase_029195_1, VkglTestCase_029195_2);

#define VkglTestCase_029196_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029196_2 "lass_32_bits.rgba8ui_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029196, VkglTestCase_029196_1, VkglTestCase_029196_2);

#define VkglTestCase_029197_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029197_2 "class_32_bits.rgba8ui_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029197, VkglTestCase_029197_1, VkglTestCase_029197_2);

#define VkglTestCase_029198_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029198_2 "iewclass_32_bits.rgba8ui_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029198, VkglTestCase_029198_1, VkglTestCase_029198_2);

#define VkglTestCase_029199_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029199_2 "iewclass_32_bits.rgba8ui_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029199, VkglTestCase_029199_1, VkglTestCase_029199_2);

#define VkglTestCase_029200_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_029200_2 "viewclass_32_bits.rgba8ui_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029200, VkglTestCase_029200_1, VkglTestCase_029200_2);

#define VkglTestCase_029201_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029201_2 "class_32_bits.rgba8ui_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029201, VkglTestCase_029201_1, VkglTestCase_029201_2);

#define VkglTestCase_029202_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029202_2 "wclass_32_bits.rgba8ui_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029202, VkglTestCase_029202_1, VkglTestCase_029202_2);

#define VkglTestCase_029203_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029203_2 "lass_32_bits.rgba8ui_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029203, VkglTestCase_029203_1, VkglTestCase_029203_2);

#define VkglTestCase_029204_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029204_2 "lass_32_bits.rgba8ui_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029204, VkglTestCase_029204_1, VkglTestCase_029204_2);

#define VkglTestCase_029205_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029205_2 "class_32_bits.rgba8ui_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029205, VkglTestCase_029205_1, VkglTestCase_029205_2);

#define VkglTestCase_029206_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029206_2 "s_32_bits.rgba8ui_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029206, VkglTestCase_029206_1, VkglTestCase_029206_2);

#define VkglTestCase_029207_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029207_2 "ss_32_bits.rgba8ui_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029207, VkglTestCase_029207_1, VkglTestCase_029207_2);

#define VkglTestCase_029208_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029208_2 "class_32_bits.rgba8ui_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029208, VkglTestCase_029208_1, VkglTestCase_029208_2);

#define VkglTestCase_029209_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029209_2 "class_32_bits.rgba8ui_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029209, VkglTestCase_029209_1, VkglTestCase_029209_2);

#define VkglTestCase_029210_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029210_2 "wclass_32_bits.rgba8ui_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029210, VkglTestCase_029210_1, VkglTestCase_029210_2);

#define VkglTestCase_029211_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029211_2 "ss_32_bits.rgba8ui_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029211, VkglTestCase_029211_1, VkglTestCase_029211_2);

#define VkglTestCase_029212_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029212_2 "lass_32_bits.rgba8ui_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029212, VkglTestCase_029212_1, VkglTestCase_029212_2);
