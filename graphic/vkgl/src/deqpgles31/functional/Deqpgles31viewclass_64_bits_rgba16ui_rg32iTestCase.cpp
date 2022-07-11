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

#define VkglTestCase_026220_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026220_2 "wclass_64_bits.rgba16ui_rg32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026220, VkglTestCase_026220_1, VkglTestCase_026220_2);

#define VkglTestCase_026221_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026221_2 "wclass_64_bits.rgba16ui_rg32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026221, VkglTestCase_026221_1, VkglTestCase_026221_2);

#define VkglTestCase_026222_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026222_2 "ewclass_64_bits.rgba16ui_rg32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026222, VkglTestCase_026222_1, VkglTestCase_026222_2);

#define VkglTestCase_026223_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026223_2 "ass_64_bits.rgba16ui_rg32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026223, VkglTestCase_026223_1, VkglTestCase_026223_2);

#define VkglTestCase_026224_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026224_2 "class_64_bits.rgba16ui_rg32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026224, VkglTestCase_026224_1, VkglTestCase_026224_2);

#define VkglTestCase_026225_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026225_2 "wclass_64_bits.rgba16ui_rg32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026225, VkglTestCase_026225_1, VkglTestCase_026225_2);

#define VkglTestCase_026226_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026226_2 "wclass_64_bits.rgba16ui_rg32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026226, VkglTestCase_026226_1, VkglTestCase_026226_2);

#define VkglTestCase_026227_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026227_2 "ewclass_64_bits.rgba16ui_rg32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026227, VkglTestCase_026227_1, VkglTestCase_026227_2);

#define VkglTestCase_026228_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026228_2 "ass_64_bits.rgba16ui_rg32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026228, VkglTestCase_026228_1, VkglTestCase_026228_2);

#define VkglTestCase_026229_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026229_2 "class_64_bits.rgba16ui_rg32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026229, VkglTestCase_026229_1, VkglTestCase_026229_2);

#define VkglTestCase_026230_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026230_2 "ewclass_64_bits.rgba16ui_rg32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026230, VkglTestCase_026230_1, VkglTestCase_026230_2);

#define VkglTestCase_026231_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026231_2 "ewclass_64_bits.rgba16ui_rg32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026231, VkglTestCase_026231_1, VkglTestCase_026231_2);

#define VkglTestCase_026232_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026232_2 "iewclass_64_bits.rgba16ui_rg32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026232, VkglTestCase_026232_1, VkglTestCase_026232_2);

#define VkglTestCase_026233_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026233_2 "lass_64_bits.rgba16ui_rg32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026233, VkglTestCase_026233_1, VkglTestCase_026233_2);

#define VkglTestCase_026234_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026234_2 "wclass_64_bits.rgba16ui_rg32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026234, VkglTestCase_026234_1, VkglTestCase_026234_2);

#define VkglTestCase_026235_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026235_2 "ass_64_bits.rgba16ui_rg32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026235, VkglTestCase_026235_1, VkglTestCase_026235_2);

#define VkglTestCase_026236_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026236_2 "ass_64_bits.rgba16ui_rg32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026236, VkglTestCase_026236_1, VkglTestCase_026236_2);

#define VkglTestCase_026237_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026237_2 "lass_64_bits.rgba16ui_rg32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026237, VkglTestCase_026237_1, VkglTestCase_026237_2);

#define VkglTestCase_026238_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026238_2 "_64_bits.rgba16ui_rg32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026238, VkglTestCase_026238_1, VkglTestCase_026238_2);

#define VkglTestCase_026239_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026239_2 "ss_64_bits.rgba16ui_rg32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026239, VkglTestCase_026239_1, VkglTestCase_026239_2);

#define VkglTestCase_026240_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026240_2 "class_64_bits.rgba16ui_rg32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026240, VkglTestCase_026240_1, VkglTestCase_026240_2);

#define VkglTestCase_026241_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026241_2 "class_64_bits.rgba16ui_rg32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026241, VkglTestCase_026241_1, VkglTestCase_026241_2);

#define VkglTestCase_026242_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026242_2 "wclass_64_bits.rgba16ui_rg32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026242, VkglTestCase_026242_1, VkglTestCase_026242_2);

#define VkglTestCase_026243_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026243_2 "ss_64_bits.rgba16ui_rg32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026243, VkglTestCase_026243_1, VkglTestCase_026243_2);

#define VkglTestCase_026244_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026244_2 "ass_64_bits.rgba16ui_rg32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026244, VkglTestCase_026244_1, VkglTestCase_026244_2);
