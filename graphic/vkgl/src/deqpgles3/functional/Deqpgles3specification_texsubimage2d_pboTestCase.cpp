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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026162_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026162_2 "ication.texsubimage2d_pbo.rgba32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026162, VkglTestCase_026162_1, VkglTestCase_026162_2);

#define VkglTestCase_026163_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026163_2 "cation.texsubimage2d_pbo.rgba32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026163, VkglTestCase_026163_1, VkglTestCase_026163_2);

#define VkglTestCase_026164_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026164_2 "ication.texsubimage2d_pbo.rgba32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026164, VkglTestCase_026164_1, VkglTestCase_026164_2);

#define VkglTestCase_026165_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026165_2 "cation.texsubimage2d_pbo.rgba32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026165, VkglTestCase_026165_1, VkglTestCase_026165_2);

#define VkglTestCase_026166_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026166_2 "ication.texsubimage2d_pbo.rgba32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026166, VkglTestCase_026166_1, VkglTestCase_026166_2);

#define VkglTestCase_026167_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026167_2 "cation.texsubimage2d_pbo.rgba32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026167, VkglTestCase_026167_1, VkglTestCase_026167_2);

#define VkglTestCase_026168_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026168_2 "ication.texsubimage2d_pbo.rgba16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026168, VkglTestCase_026168_1, VkglTestCase_026168_2);

#define VkglTestCase_026169_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026169_2 "cation.texsubimage2d_pbo.rgba16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026169, VkglTestCase_026169_1, VkglTestCase_026169_2);

#define VkglTestCase_026170_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026170_2 "ication.texsubimage2d_pbo.rgba16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026170, VkglTestCase_026170_1, VkglTestCase_026170_2);

#define VkglTestCase_026171_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026171_2 "cation.texsubimage2d_pbo.rgba16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026171, VkglTestCase_026171_1, VkglTestCase_026171_2);

#define VkglTestCase_026172_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026172_2 "ication.texsubimage2d_pbo.rgba16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026172, VkglTestCase_026172_1, VkglTestCase_026172_2);

#define VkglTestCase_026173_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026173_2 "cation.texsubimage2d_pbo.rgba16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026173, VkglTestCase_026173_1, VkglTestCase_026173_2);

#define VkglTestCase_026174_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026174_2 "fication.texsubimage2d_pbo.rgba8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026174, VkglTestCase_026174_1, VkglTestCase_026174_2);

#define VkglTestCase_026175_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026175_2 "ication.texsubimage2d_pbo.rgba8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026175, VkglTestCase_026175_1, VkglTestCase_026175_2);

#define VkglTestCase_026176_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026176_2 "fication.texsubimage2d_pbo.rgba8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026176, VkglTestCase_026176_1, VkglTestCase_026176_2);

#define VkglTestCase_026177_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026177_2 "ication.texsubimage2d_pbo.rgba8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026177, VkglTestCase_026177_1, VkglTestCase_026177_2);

#define VkglTestCase_026178_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026178_2 "ication.texsubimage2d_pbo.rgba8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026178, VkglTestCase_026178_1, VkglTestCase_026178_2);

#define VkglTestCase_026179_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026179_2 "cation.texsubimage2d_pbo.rgba8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026179, VkglTestCase_026179_1, VkglTestCase_026179_2);

#define VkglTestCase_026180_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026180_2 "ation.texsubimage2d_pbo.srgb8_alpha8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026180, VkglTestCase_026180_1, VkglTestCase_026180_2);

#define VkglTestCase_026181_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026181_2 "tion.texsubimage2d_pbo.srgb8_alpha8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026181, VkglTestCase_026181_1, VkglTestCase_026181_2);

#define VkglTestCase_026182_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026182_2 "ication.texsubimage2d_pbo.rgb10_a2_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026182, VkglTestCase_026182_1, VkglTestCase_026182_2);

#define VkglTestCase_026183_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026183_2 "cation.texsubimage2d_pbo.rgb10_a2_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026183, VkglTestCase_026183_1, VkglTestCase_026183_2);

#define VkglTestCase_026184_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026184_2 "cation.texsubimage2d_pbo.rgb10_a2ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026184, VkglTestCase_026184_1, VkglTestCase_026184_2);

#define VkglTestCase_026185_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026185_2 "ation.texsubimage2d_pbo.rgb10_a2ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026185, VkglTestCase_026185_1, VkglTestCase_026185_2);

#define VkglTestCase_026186_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026186_2 "fication.texsubimage2d_pbo.rgba4_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026186, VkglTestCase_026186_1, VkglTestCase_026186_2);

#define VkglTestCase_026187_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026187_2 "ication.texsubimage2d_pbo.rgba4_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026187, VkglTestCase_026187_1, VkglTestCase_026187_2);

#define VkglTestCase_026188_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026188_2 "ication.texsubimage2d_pbo.rgb5_a1_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026188, VkglTestCase_026188_1, VkglTestCase_026188_2);

#define VkglTestCase_026189_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026189_2 "cation.texsubimage2d_pbo.rgb5_a1_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026189, VkglTestCase_026189_1, VkglTestCase_026189_2);

#define VkglTestCase_026190_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026190_2 "ation.texsubimage2d_pbo.rgba8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026190, VkglTestCase_026190_1, VkglTestCase_026190_2);

#define VkglTestCase_026191_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026191_2 "tion.texsubimage2d_pbo.rgba8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026191, VkglTestCase_026191_1, VkglTestCase_026191_2);

#define VkglTestCase_026192_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026192_2 "ification.texsubimage2d_pbo.rgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026192, VkglTestCase_026192_1, VkglTestCase_026192_2);

#define VkglTestCase_026193_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026193_2 "fication.texsubimage2d_pbo.rgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026193, VkglTestCase_026193_1, VkglTestCase_026193_2);

#define VkglTestCase_026194_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026194_2 "fication.texsubimage2d_pbo.rgb565_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026194, VkglTestCase_026194_1, VkglTestCase_026194_2);

#define VkglTestCase_026195_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026195_2 "ication.texsubimage2d_pbo.rgb565_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026195, VkglTestCase_026195_1, VkglTestCase_026195_2);

#define VkglTestCase_026196_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026196_2 "tion.texsubimage2d_pbo.r11f_g11f_b10f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026196, VkglTestCase_026196_1, VkglTestCase_026196_2);

#define VkglTestCase_026197_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026197_2 "ion.texsubimage2d_pbo.r11f_g11f_b10f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026197, VkglTestCase_026197_1, VkglTestCase_026197_2);

#define VkglTestCase_026198_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026198_2 "fication.texsubimage2d_pbo.rgb32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026198, VkglTestCase_026198_1, VkglTestCase_026198_2);

#define VkglTestCase_026199_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026199_2 "ication.texsubimage2d_pbo.rgb32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026199, VkglTestCase_026199_1, VkglTestCase_026199_2);

#define VkglTestCase_026200_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026200_2 "fication.texsubimage2d_pbo.rgb32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026200, VkglTestCase_026200_1, VkglTestCase_026200_2);

#define VkglTestCase_026201_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026201_2 "ication.texsubimage2d_pbo.rgb32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026201, VkglTestCase_026201_1, VkglTestCase_026201_2);

#define VkglTestCase_026202_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026202_2 "ication.texsubimage2d_pbo.rgb32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026202, VkglTestCase_026202_1, VkglTestCase_026202_2);

#define VkglTestCase_026203_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026203_2 "cation.texsubimage2d_pbo.rgb32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026203, VkglTestCase_026203_1, VkglTestCase_026203_2);

#define VkglTestCase_026204_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026204_2 "fication.texsubimage2d_pbo.rgb16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026204, VkglTestCase_026204_1, VkglTestCase_026204_2);

#define VkglTestCase_026205_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026205_2 "ication.texsubimage2d_pbo.rgb16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026205, VkglTestCase_026205_1, VkglTestCase_026205_2);

#define VkglTestCase_026206_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026206_2 "fication.texsubimage2d_pbo.rgb16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026206, VkglTestCase_026206_1, VkglTestCase_026206_2);

#define VkglTestCase_026207_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026207_2 "ication.texsubimage2d_pbo.rgb16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026207, VkglTestCase_026207_1, VkglTestCase_026207_2);

#define VkglTestCase_026208_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026208_2 "ication.texsubimage2d_pbo.rgb16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026208, VkglTestCase_026208_1, VkglTestCase_026208_2);

#define VkglTestCase_026209_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026209_2 "cation.texsubimage2d_pbo.rgb16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026209, VkglTestCase_026209_1, VkglTestCase_026209_2);

#define VkglTestCase_026210_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026210_2 "cation.texsubimage2d_pbo.rgb8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026210, VkglTestCase_026210_1, VkglTestCase_026210_2);

#define VkglTestCase_026211_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026211_2 "ation.texsubimage2d_pbo.rgb8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026211, VkglTestCase_026211_1, VkglTestCase_026211_2);

#define VkglTestCase_026212_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026212_2 "fication.texsubimage2d_pbo.rgb8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026212, VkglTestCase_026212_1, VkglTestCase_026212_2);

#define VkglTestCase_026213_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026213_2 "ication.texsubimage2d_pbo.rgb8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026213, VkglTestCase_026213_1, VkglTestCase_026213_2);

#define VkglTestCase_026214_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026214_2 "fication.texsubimage2d_pbo.rgb8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026214, VkglTestCase_026214_1, VkglTestCase_026214_2);

#define VkglTestCase_026215_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026215_2 "ication.texsubimage2d_pbo.rgb8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026215, VkglTestCase_026215_1, VkglTestCase_026215_2);

#define VkglTestCase_026216_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026216_2 "fication.texsubimage2d_pbo.srgb8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026216, VkglTestCase_026216_1, VkglTestCase_026216_2);

#define VkglTestCase_026217_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026217_2 "ication.texsubimage2d_pbo.srgb8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026217, VkglTestCase_026217_1, VkglTestCase_026217_2);

#define VkglTestCase_026218_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026218_2 "ication.texsubimage2d_pbo.rgb9_e5_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026218, VkglTestCase_026218_1, VkglTestCase_026218_2);

#define VkglTestCase_026219_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026219_2 "cation.texsubimage2d_pbo.rgb9_e5_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026219, VkglTestCase_026219_1, VkglTestCase_026219_2);

#define VkglTestCase_026220_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026220_2 "fication.texsubimage2d_pbo.rg32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026220, VkglTestCase_026220_1, VkglTestCase_026220_2);

#define VkglTestCase_026221_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026221_2 "ication.texsubimage2d_pbo.rg32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026221, VkglTestCase_026221_1, VkglTestCase_026221_2);

#define VkglTestCase_026222_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026222_2 "fication.texsubimage2d_pbo.rg32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026222, VkglTestCase_026222_1, VkglTestCase_026222_2);

#define VkglTestCase_026223_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026223_2 "ication.texsubimage2d_pbo.rg32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026223, VkglTestCase_026223_1, VkglTestCase_026223_2);

#define VkglTestCase_026224_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026224_2 "fication.texsubimage2d_pbo.rg32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026224, VkglTestCase_026224_1, VkglTestCase_026224_2);

#define VkglTestCase_026225_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026225_2 "ication.texsubimage2d_pbo.rg32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026225, VkglTestCase_026225_1, VkglTestCase_026225_2);

#define VkglTestCase_026226_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026226_2 "fication.texsubimage2d_pbo.rg16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026226, VkglTestCase_026226_1, VkglTestCase_026226_2);

#define VkglTestCase_026227_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026227_2 "ication.texsubimage2d_pbo.rg16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026227, VkglTestCase_026227_1, VkglTestCase_026227_2);

#define VkglTestCase_026228_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026228_2 "fication.texsubimage2d_pbo.rg16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026228, VkglTestCase_026228_1, VkglTestCase_026228_2);

#define VkglTestCase_026229_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026229_2 "ication.texsubimage2d_pbo.rg16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026229, VkglTestCase_026229_1, VkglTestCase_026229_2);

#define VkglTestCase_026230_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026230_2 "fication.texsubimage2d_pbo.rg16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026230, VkglTestCase_026230_1, VkglTestCase_026230_2);

#define VkglTestCase_026231_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026231_2 "ication.texsubimage2d_pbo.rg16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026231, VkglTestCase_026231_1, VkglTestCase_026231_2);

#define VkglTestCase_026232_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026232_2 "ification.texsubimage2d_pbo.rg8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026232, VkglTestCase_026232_1, VkglTestCase_026232_2);

#define VkglTestCase_026233_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026233_2 "fication.texsubimage2d_pbo.rg8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026233, VkglTestCase_026233_1, VkglTestCase_026233_2);

#define VkglTestCase_026234_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026234_2 "ification.texsubimage2d_pbo.rg8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026234, VkglTestCase_026234_1, VkglTestCase_026234_2);

#define VkglTestCase_026235_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026235_2 "fication.texsubimage2d_pbo.rg8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026235, VkglTestCase_026235_1, VkglTestCase_026235_2);

#define VkglTestCase_026236_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026236_2 "fication.texsubimage2d_pbo.rg8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026236, VkglTestCase_026236_1, VkglTestCase_026236_2);

#define VkglTestCase_026237_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026237_2 "ication.texsubimage2d_pbo.rg8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026237, VkglTestCase_026237_1, VkglTestCase_026237_2);

#define VkglTestCase_026238_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026238_2 "cation.texsubimage2d_pbo.rg8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026238, VkglTestCase_026238_1, VkglTestCase_026238_2);

#define VkglTestCase_026239_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026239_2 "ation.texsubimage2d_pbo.rg8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026239, VkglTestCase_026239_1, VkglTestCase_026239_2);

#define VkglTestCase_026240_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026240_2 "ification.texsubimage2d_pbo.r32f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026240, VkglTestCase_026240_1, VkglTestCase_026240_2);

#define VkglTestCase_026241_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026241_2 "fication.texsubimage2d_pbo.r32f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026241, VkglTestCase_026241_1, VkglTestCase_026241_2);

#define VkglTestCase_026242_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026242_2 "ification.texsubimage2d_pbo.r32i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026242, VkglTestCase_026242_1, VkglTestCase_026242_2);

#define VkglTestCase_026243_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026243_2 "fication.texsubimage2d_pbo.r32i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026243, VkglTestCase_026243_1, VkglTestCase_026243_2);

#define VkglTestCase_026244_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026244_2 "fication.texsubimage2d_pbo.r32ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026244, VkglTestCase_026244_1, VkglTestCase_026244_2);

#define VkglTestCase_026245_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026245_2 "ication.texsubimage2d_pbo.r32ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026245, VkglTestCase_026245_1, VkglTestCase_026245_2);

#define VkglTestCase_026246_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026246_2 "ification.texsubimage2d_pbo.r16f_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026246, VkglTestCase_026246_1, VkglTestCase_026246_2);

#define VkglTestCase_026247_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026247_2 "fication.texsubimage2d_pbo.r16f_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026247, VkglTestCase_026247_1, VkglTestCase_026247_2);

#define VkglTestCase_026248_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026248_2 "ification.texsubimage2d_pbo.r16i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026248, VkglTestCase_026248_1, VkglTestCase_026248_2);

#define VkglTestCase_026249_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026249_2 "fication.texsubimage2d_pbo.r16i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026249, VkglTestCase_026249_1, VkglTestCase_026249_2);

#define VkglTestCase_026250_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026250_2 "fication.texsubimage2d_pbo.r16ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026250, VkglTestCase_026250_1, VkglTestCase_026250_2);

#define VkglTestCase_026251_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026251_2 "ication.texsubimage2d_pbo.r16ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026251, VkglTestCase_026251_1, VkglTestCase_026251_2);

#define VkglTestCase_026252_1 "dEQP-GLES3.functional.texture.spe"
#define VkglTestCase_026252_2 "cification.texsubimage2d_pbo.r8_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026252, VkglTestCase_026252_1, VkglTestCase_026252_2);

#define VkglTestCase_026253_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026253_2 "ification.texsubimage2d_pbo.r8_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026253, VkglTestCase_026253_1, VkglTestCase_026253_2);

#define VkglTestCase_026254_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026254_2 "ification.texsubimage2d_pbo.r8i_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026254, VkglTestCase_026254_1, VkglTestCase_026254_2);

#define VkglTestCase_026255_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026255_2 "fication.texsubimage2d_pbo.r8i_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026255, VkglTestCase_026255_1, VkglTestCase_026255_2);

#define VkglTestCase_026256_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026256_2 "ification.texsubimage2d_pbo.r8ui_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026256, VkglTestCase_026256_1, VkglTestCase_026256_2);

#define VkglTestCase_026257_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026257_2 "fication.texsubimage2d_pbo.r8ui_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026257, VkglTestCase_026257_1, VkglTestCase_026257_2);

#define VkglTestCase_026258_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026258_2 "ication.texsubimage2d_pbo.r8_snorm_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026258, VkglTestCase_026258_1, VkglTestCase_026258_2);

#define VkglTestCase_026259_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026259_2 "cation.texsubimage2d_pbo.r8_snorm_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026259, VkglTestCase_026259_1, VkglTestCase_026259_2);

#define VkglTestCase_026260_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026260_2 "ation.texsubimage2d_pbo.rgb8_offset_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026260, VkglTestCase_026260_1, VkglTestCase_026260_2);

#define VkglTestCase_026261_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026261_2 "tion.texsubimage2d_pbo.rgb8_offset_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026261, VkglTestCase_026261_1, VkglTestCase_026261_2);

#define VkglTestCase_026262_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026262_2 "tion.texsubimage2d_pbo.rgb8_alignment_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026262, VkglTestCase_026262_1, VkglTestCase_026262_2);

#define VkglTestCase_026263_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026263_2 "ion.texsubimage2d_pbo.rgb8_alignment_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026263, VkglTestCase_026263_1, VkglTestCase_026263_2);

#define VkglTestCase_026264_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026264_2 "ion.texsubimage2d_pbo.rgb8_row_length_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026264, VkglTestCase_026264_1, VkglTestCase_026264_2);

#define VkglTestCase_026265_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026265_2 "on.texsubimage2d_pbo.rgb8_row_length_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026265, VkglTestCase_026265_1, VkglTestCase_026265_2);

#define VkglTestCase_026266_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026266_2 "tion.texsubimage2d_pbo.rgb8_skip_rows_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026266, VkglTestCase_026266_1, VkglTestCase_026266_2);

#define VkglTestCase_026267_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026267_2 "ion.texsubimage2d_pbo.rgb8_skip_rows_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026267, VkglTestCase_026267_1, VkglTestCase_026267_2);

#define VkglTestCase_026268_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026268_2 "ion.texsubimage2d_pbo.rgb8_skip_pixels_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026268, VkglTestCase_026268_1, VkglTestCase_026268_2);

#define VkglTestCase_026269_1 "dEQP-GLES3.functional.texture.specificati"
#define VkglTestCase_026269_2 "on.texsubimage2d_pbo.rgb8_skip_pixels_cube"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026269, VkglTestCase_026269_1, VkglTestCase_026269_2);

#define VkglTestCase_026270_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026270_2 "cation.texsubimage2d_pbo.pbo_bounds_2d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026270, VkglTestCase_026270_1, VkglTestCase_026270_2);
