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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028188_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028188_2 "wclass_32_bits.rg16ui_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028188, VkglTestCase_028188_1, VkglTestCase_028188_2);

#define VkglTestCase_028189_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028189_2 "wclass_32_bits.rg16ui_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028189, VkglTestCase_028189_1, VkglTestCase_028189_2);

#define VkglTestCase_028190_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028190_2 "ewclass_32_bits.rg16ui_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028190, VkglTestCase_028190_1, VkglTestCase_028190_2);

#define VkglTestCase_028191_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028191_2 "ass_32_bits.rg16ui_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028191, VkglTestCase_028191_1, VkglTestCase_028191_2);

#define VkglTestCase_028192_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028192_2 "class_32_bits.rg16ui_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028192, VkglTestCase_028192_1, VkglTestCase_028192_2);

#define VkglTestCase_028193_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028193_2 "wclass_32_bits.rg16ui_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028193, VkglTestCase_028193_1, VkglTestCase_028193_2);

#define VkglTestCase_028194_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028194_2 "wclass_32_bits.rg16ui_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028194, VkglTestCase_028194_1, VkglTestCase_028194_2);

#define VkglTestCase_028195_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028195_2 "ewclass_32_bits.rg16ui_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028195, VkglTestCase_028195_1, VkglTestCase_028195_2);

#define VkglTestCase_028196_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028196_2 "ass_32_bits.rg16ui_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028196, VkglTestCase_028196_1, VkglTestCase_028196_2);

#define VkglTestCase_028197_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028197_2 "class_32_bits.rg16ui_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028197, VkglTestCase_028197_1, VkglTestCase_028197_2);

#define VkglTestCase_028198_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028198_2 "ewclass_32_bits.rg16ui_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028198, VkglTestCase_028198_1, VkglTestCase_028198_2);

#define VkglTestCase_028199_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028199_2 "ewclass_32_bits.rg16ui_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028199, VkglTestCase_028199_1, VkglTestCase_028199_2);

#define VkglTestCase_028200_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028200_2 "iewclass_32_bits.rg16ui_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028200, VkglTestCase_028200_1, VkglTestCase_028200_2);

#define VkglTestCase_028201_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028201_2 "lass_32_bits.rg16ui_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028201, VkglTestCase_028201_1, VkglTestCase_028201_2);

#define VkglTestCase_028202_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028202_2 "wclass_32_bits.rg16ui_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028202, VkglTestCase_028202_1, VkglTestCase_028202_2);

#define VkglTestCase_028203_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028203_2 "ass_32_bits.rg16ui_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028203, VkglTestCase_028203_1, VkglTestCase_028203_2);

#define VkglTestCase_028204_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028204_2 "ass_32_bits.rg16ui_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028204, VkglTestCase_028204_1, VkglTestCase_028204_2);

#define VkglTestCase_028205_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028205_2 "lass_32_bits.rg16ui_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028205, VkglTestCase_028205_1, VkglTestCase_028205_2);

#define VkglTestCase_028206_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028206_2 "_32_bits.rg16ui_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028206, VkglTestCase_028206_1, VkglTestCase_028206_2);

#define VkglTestCase_028207_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028207_2 "ss_32_bits.rg16ui_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028207, VkglTestCase_028207_1, VkglTestCase_028207_2);

#define VkglTestCase_028208_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028208_2 "class_32_bits.rg16ui_rgba8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028208, VkglTestCase_028208_1, VkglTestCase_028208_2);

#define VkglTestCase_028209_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028209_2 "class_32_bits.rg16ui_rgba8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028209, VkglTestCase_028209_1, VkglTestCase_028209_2);

#define VkglTestCase_028210_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028210_2 "wclass_32_bits.rg16ui_rgba8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028210, VkglTestCase_028210_1, VkglTestCase_028210_2);

#define VkglTestCase_028211_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028211_2 "ss_32_bits.rg16ui_rgba8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028211, VkglTestCase_028211_1, VkglTestCase_028211_2);

#define VkglTestCase_028212_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028212_2 "ass_32_bits.rg16ui_rgba8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028212, VkglTestCase_028212_1, VkglTestCase_028212_2);
