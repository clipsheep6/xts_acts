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

#define VkglTestCase_028213_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028213_2 "ass_32_bits.rg16ui_r11f_g11f_b10f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028213, VkglTestCase_028213_1, VkglTestCase_028213_2);

#define VkglTestCase_028214_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028214_2 "ass_32_bits.rg16ui_r11f_g11f_b10f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028214, VkglTestCase_028214_1, VkglTestCase_028214_2);

#define VkglTestCase_028215_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028215_2 "lass_32_bits.rg16ui_r11f_g11f_b10f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028215, VkglTestCase_028215_1, VkglTestCase_028215_2);

#define VkglTestCase_028216_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028216_2 "_32_bits.rg16ui_r11f_g11f_b10f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028216, VkglTestCase_028216_1, VkglTestCase_028216_2);

#define VkglTestCase_028217_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028217_2 "ass_32_bits.rg16ui_r11f_g11f_b10f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028217, VkglTestCase_028217_1, VkglTestCase_028217_2);

#define VkglTestCase_028218_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028218_2 "ass_32_bits.rg16ui_r11f_g11f_b10f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028218, VkglTestCase_028218_1, VkglTestCase_028218_2);

#define VkglTestCase_028219_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028219_2 "lass_32_bits.rg16ui_r11f_g11f_b10f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028219, VkglTestCase_028219_1, VkglTestCase_028219_2);

#define VkglTestCase_028220_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028220_2 "_32_bits.rg16ui_r11f_g11f_b10f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028220, VkglTestCase_028220_1, VkglTestCase_028220_2);

#define VkglTestCase_028221_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028221_2 "lass_32_bits.rg16ui_r11f_g11f_b10f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028221, VkglTestCase_028221_1, VkglTestCase_028221_2);

#define VkglTestCase_028222_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028222_2 "lass_32_bits.rg16ui_r11f_g11f_b10f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028222, VkglTestCase_028222_1, VkglTestCase_028222_2);

#define VkglTestCase_028223_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028223_2 "class_32_bits.rg16ui_r11f_g11f_b10f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028223, VkglTestCase_028223_1, VkglTestCase_028223_2);

#define VkglTestCase_028224_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028224_2 "s_32_bits.rg16ui_r11f_g11f_b10f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028224, VkglTestCase_028224_1, VkglTestCase_028224_2);

#define VkglTestCase_028225_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028225_2 "_32_bits.rg16ui_r11f_g11f_b10f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028225, VkglTestCase_028225_1, VkglTestCase_028225_2);

#define VkglTestCase_028226_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028226_2 "_32_bits.rg16ui_r11f_g11f_b10f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028226, VkglTestCase_028226_1, VkglTestCase_028226_2);

#define VkglTestCase_028227_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028227_2 "s_32_bits.rg16ui_r11f_g11f_b10f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028227, VkglTestCase_028227_1, VkglTestCase_028227_2);

#define VkglTestCase_028228_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_028228_2 "_bits.rg16ui_r11f_g11f_b10f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028228, VkglTestCase_028228_1, VkglTestCase_028228_2);

#define VkglTestCase_028229_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028229_2 "s_32_bits.rg16ui_r11f_g11f_b10f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028229, VkglTestCase_028229_1, VkglTestCase_028229_2);

#define VkglTestCase_028230_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028230_2 "s_32_bits.rg16ui_r11f_g11f_b10f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028230, VkglTestCase_028230_1, VkglTestCase_028230_2);

#define VkglTestCase_028231_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028231_2 "ss_32_bits.rg16ui_r11f_g11f_b10f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028231, VkglTestCase_028231_1, VkglTestCase_028231_2);

#define VkglTestCase_028232_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_028232_2 "2_bits.rg16ui_r11f_g11f_b10f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028232, VkglTestCase_028232_1, VkglTestCase_028232_2);
