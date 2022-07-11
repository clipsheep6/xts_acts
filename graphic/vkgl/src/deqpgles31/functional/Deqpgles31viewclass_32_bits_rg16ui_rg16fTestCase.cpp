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

#define VkglTestCase_028068_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028068_2 "ewclass_32_bits.rg16ui_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028068, VkglTestCase_028068_1, VkglTestCase_028068_2);

#define VkglTestCase_028069_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028069_2 "ewclass_32_bits.rg16ui_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028069, VkglTestCase_028069_1, VkglTestCase_028069_2);

#define VkglTestCase_028070_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028070_2 "iewclass_32_bits.rg16ui_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028070, VkglTestCase_028070_1, VkglTestCase_028070_2);

#define VkglTestCase_028071_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028071_2 "lass_32_bits.rg16ui_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028071, VkglTestCase_028071_1, VkglTestCase_028071_2);

#define VkglTestCase_028072_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028072_2 "ewclass_32_bits.rg16ui_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028072, VkglTestCase_028072_1, VkglTestCase_028072_2);

#define VkglTestCase_028073_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028073_2 "ewclass_32_bits.rg16ui_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028073, VkglTestCase_028073_1, VkglTestCase_028073_2);

#define VkglTestCase_028074_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028074_2 "iewclass_32_bits.rg16ui_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028074, VkglTestCase_028074_1, VkglTestCase_028074_2);

#define VkglTestCase_028075_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028075_2 "lass_32_bits.rg16ui_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028075, VkglTestCase_028075_1, VkglTestCase_028075_2);

#define VkglTestCase_028076_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028076_2 "iewclass_32_bits.rg16ui_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028076, VkglTestCase_028076_1, VkglTestCase_028076_2);

#define VkglTestCase_028077_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028077_2 "iewclass_32_bits.rg16ui_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028077, VkglTestCase_028077_1, VkglTestCase_028077_2);

#define VkglTestCase_028078_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028078_2 "viewclass_32_bits.rg16ui_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028078, VkglTestCase_028078_1, VkglTestCase_028078_2);

#define VkglTestCase_028079_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028079_2 "class_32_bits.rg16ui_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028079, VkglTestCase_028079_1, VkglTestCase_028079_2);

#define VkglTestCase_028080_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028080_2 "lass_32_bits.rg16ui_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028080, VkglTestCase_028080_1, VkglTestCase_028080_2);

#define VkglTestCase_028081_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028081_2 "lass_32_bits.rg16ui_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028081, VkglTestCase_028081_1, VkglTestCase_028081_2);

#define VkglTestCase_028082_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028082_2 "class_32_bits.rg16ui_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028082, VkglTestCase_028082_1, VkglTestCase_028082_2);

#define VkglTestCase_028083_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028083_2 "s_32_bits.rg16ui_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028083, VkglTestCase_028083_1, VkglTestCase_028083_2);

#define VkglTestCase_028084_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028084_2 "wclass_32_bits.rg16ui_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028084, VkglTestCase_028084_1, VkglTestCase_028084_2);

#define VkglTestCase_028085_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028085_2 "wclass_32_bits.rg16ui_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028085, VkglTestCase_028085_1, VkglTestCase_028085_2);

#define VkglTestCase_028086_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028086_2 "ewclass_32_bits.rg16ui_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028086, VkglTestCase_028086_1, VkglTestCase_028086_2);

#define VkglTestCase_028087_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028087_2 "ass_32_bits.rg16ui_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028087, VkglTestCase_028087_1, VkglTestCase_028087_2);
