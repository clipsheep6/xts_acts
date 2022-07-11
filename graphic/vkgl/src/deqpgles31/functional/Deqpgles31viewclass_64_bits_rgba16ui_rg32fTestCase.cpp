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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026200_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026200_2 "wclass_64_bits.rgba16ui_rg32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026200, VkglTestCase_026200_1, VkglTestCase_026200_2);

#define VkglTestCase_026201_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026201_2 "wclass_64_bits.rgba16ui_rg32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026201, VkglTestCase_026201_1, VkglTestCase_026201_2);

#define VkglTestCase_026202_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026202_2 "ewclass_64_bits.rgba16ui_rg32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026202, VkglTestCase_026202_1, VkglTestCase_026202_2);

#define VkglTestCase_026203_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026203_2 "ass_64_bits.rgba16ui_rg32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026203, VkglTestCase_026203_1, VkglTestCase_026203_2);

#define VkglTestCase_026204_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026204_2 "wclass_64_bits.rgba16ui_rg32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026204, VkglTestCase_026204_1, VkglTestCase_026204_2);

#define VkglTestCase_026205_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026205_2 "wclass_64_bits.rgba16ui_rg32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026205, VkglTestCase_026205_1, VkglTestCase_026205_2);

#define VkglTestCase_026206_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026206_2 "ewclass_64_bits.rgba16ui_rg32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026206, VkglTestCase_026206_1, VkglTestCase_026206_2);

#define VkglTestCase_026207_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026207_2 "ass_64_bits.rgba16ui_rg32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026207, VkglTestCase_026207_1, VkglTestCase_026207_2);

#define VkglTestCase_026208_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026208_2 "ewclass_64_bits.rgba16ui_rg32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026208, VkglTestCase_026208_1, VkglTestCase_026208_2);

#define VkglTestCase_026209_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026209_2 "ewclass_64_bits.rgba16ui_rg32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026209, VkglTestCase_026209_1, VkglTestCase_026209_2);

#define VkglTestCase_026210_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026210_2 "iewclass_64_bits.rgba16ui_rg32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026210, VkglTestCase_026210_1, VkglTestCase_026210_2);

#define VkglTestCase_026211_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026211_2 "lass_64_bits.rgba16ui_rg32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026211, VkglTestCase_026211_1, VkglTestCase_026211_2);

#define VkglTestCase_026212_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026212_2 "ass_64_bits.rgba16ui_rg32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026212, VkglTestCase_026212_1, VkglTestCase_026212_2);

#define VkglTestCase_026213_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026213_2 "ass_64_bits.rgba16ui_rg32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026213, VkglTestCase_026213_1, VkglTestCase_026213_2);

#define VkglTestCase_026214_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026214_2 "lass_64_bits.rgba16ui_rg32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026214, VkglTestCase_026214_1, VkglTestCase_026214_2);

#define VkglTestCase_026215_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026215_2 "_64_bits.rgba16ui_rg32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026215, VkglTestCase_026215_1, VkglTestCase_026215_2);

#define VkglTestCase_026216_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026216_2 "class_64_bits.rgba16ui_rg32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026216, VkglTestCase_026216_1, VkglTestCase_026216_2);

#define VkglTestCase_026217_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026217_2 "class_64_bits.rgba16ui_rg32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026217, VkglTestCase_026217_1, VkglTestCase_026217_2);

#define VkglTestCase_026218_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026218_2 "wclass_64_bits.rgba16ui_rg32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026218, VkglTestCase_026218_1, VkglTestCase_026218_2);

#define VkglTestCase_026219_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026219_2 "ss_64_bits.rgba16ui_rg32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026219, VkglTestCase_026219_1, VkglTestCase_026219_2);
