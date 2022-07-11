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

#define VkglTestCase_028138_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028138_2 "ewclass_32_bits.rg16ui_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028138, VkglTestCase_028138_1, VkglTestCase_028138_2);

#define VkglTestCase_028139_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028139_2 "ewclass_32_bits.rg16ui_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028139, VkglTestCase_028139_1, VkglTestCase_028139_2);

#define VkglTestCase_028140_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028140_2 "iewclass_32_bits.rg16ui_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028140, VkglTestCase_028140_1, VkglTestCase_028140_2);

#define VkglTestCase_028141_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028141_2 "lass_32_bits.rg16ui_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028141, VkglTestCase_028141_1, VkglTestCase_028141_2);

#define VkglTestCase_028142_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028142_2 "wclass_32_bits.rg16ui_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028142, VkglTestCase_028142_1, VkglTestCase_028142_2);

#define VkglTestCase_028143_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028143_2 "ewclass_32_bits.rg16ui_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028143, VkglTestCase_028143_1, VkglTestCase_028143_2);

#define VkglTestCase_028144_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028144_2 "ewclass_32_bits.rg16ui_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028144, VkglTestCase_028144_1, VkglTestCase_028144_2);

#define VkglTestCase_028145_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028145_2 "iewclass_32_bits.rg16ui_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028145, VkglTestCase_028145_1, VkglTestCase_028145_2);

#define VkglTestCase_028146_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028146_2 "lass_32_bits.rg16ui_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028146, VkglTestCase_028146_1, VkglTestCase_028146_2);

#define VkglTestCase_028147_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028147_2 "wclass_32_bits.rg16ui_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028147, VkglTestCase_028147_1, VkglTestCase_028147_2);

#define VkglTestCase_028148_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028148_2 "iewclass_32_bits.rg16ui_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028148, VkglTestCase_028148_1, VkglTestCase_028148_2);

#define VkglTestCase_028149_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028149_2 "iewclass_32_bits.rg16ui_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028149, VkglTestCase_028149_1, VkglTestCase_028149_2);

#define VkglTestCase_028150_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028150_2 "viewclass_32_bits.rg16ui_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028150, VkglTestCase_028150_1, VkglTestCase_028150_2);

#define VkglTestCase_028151_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028151_2 "class_32_bits.rg16ui_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028151, VkglTestCase_028151_1, VkglTestCase_028151_2);

#define VkglTestCase_028152_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028152_2 "ewclass_32_bits.rg16ui_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028152, VkglTestCase_028152_1, VkglTestCase_028152_2);

#define VkglTestCase_028153_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028153_2 "lass_32_bits.rg16ui_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028153, VkglTestCase_028153_1, VkglTestCase_028153_2);

#define VkglTestCase_028154_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028154_2 "lass_32_bits.rg16ui_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028154, VkglTestCase_028154_1, VkglTestCase_028154_2);

#define VkglTestCase_028155_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028155_2 "class_32_bits.rg16ui_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028155, VkglTestCase_028155_1, VkglTestCase_028155_2);

#define VkglTestCase_028156_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028156_2 "s_32_bits.rg16ui_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028156, VkglTestCase_028156_1, VkglTestCase_028156_2);

#define VkglTestCase_028157_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028157_2 "ass_32_bits.rg16ui_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028157, VkglTestCase_028157_1, VkglTestCase_028157_2);

#define VkglTestCase_028158_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028158_2 "wclass_32_bits.rg16ui_rgba8.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028158, VkglTestCase_028158_1, VkglTestCase_028158_2);

#define VkglTestCase_028159_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028159_2 "wclass_32_bits.rg16ui_rgba8.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028159, VkglTestCase_028159_1, VkglTestCase_028159_2);

#define VkglTestCase_028160_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028160_2 "ewclass_32_bits.rg16ui_rgba8.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028160, VkglTestCase_028160_1, VkglTestCase_028160_2);

#define VkglTestCase_028161_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028161_2 "ass_32_bits.rg16ui_rgba8.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028161, VkglTestCase_028161_1, VkglTestCase_028161_2);

#define VkglTestCase_028162_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028162_2 "lass_32_bits.rg16ui_rgba8.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028162, VkglTestCase_028162_1, VkglTestCase_028162_2);
