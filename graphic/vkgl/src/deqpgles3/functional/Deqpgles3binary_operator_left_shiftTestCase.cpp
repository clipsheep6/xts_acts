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
#include "../ActsDeqpgles30010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009224_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009224_2 "ry_operator.left_shift.lowp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009224, VkglTestCase_009224_1, VkglTestCase_009224_2);

#define VkglTestCase_009225_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009225_2 "y_operator.left_shift.lowp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009225, VkglTestCase_009225_1, VkglTestCase_009225_2);

#define VkglTestCase_009226_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009226_2 "y_operator.left_shift.mediump_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009226, VkglTestCase_009226_1, VkglTestCase_009226_2);

#define VkglTestCase_009227_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009227_2 "_operator.left_shift.mediump_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009227, VkglTestCase_009227_1, VkglTestCase_009227_2);

#define VkglTestCase_009228_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009228_2 "y_operator.left_shift.lowp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009228, VkglTestCase_009228_1, VkglTestCase_009228_2);

#define VkglTestCase_009229_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009229_2 "_operator.left_shift.lowp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009229, VkglTestCase_009229_1, VkglTestCase_009229_2);

#define VkglTestCase_009230_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009230_2 "operator.left_shift.mediump_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009230, VkglTestCase_009230_1, VkglTestCase_009230_2);

#define VkglTestCase_009231_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009231_2 "perator.left_shift.mediump_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009231, VkglTestCase_009231_1, VkglTestCase_009231_2);

#define VkglTestCase_009232_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009232_2 "y_operator.left_shift.lowp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009232, VkglTestCase_009232_1, VkglTestCase_009232_2);

#define VkglTestCase_009233_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009233_2 "_operator.left_shift.lowp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009233, VkglTestCase_009233_1, VkglTestCase_009233_2);

#define VkglTestCase_009234_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009234_2 "operator.left_shift.mediump_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009234, VkglTestCase_009234_1, VkglTestCase_009234_2);

#define VkglTestCase_009235_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009235_2 "perator.left_shift.mediump_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009235, VkglTestCase_009235_1, VkglTestCase_009235_2);

#define VkglTestCase_009236_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009236_2 "y_operator.left_shift.lowp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009236, VkglTestCase_009236_1, VkglTestCase_009236_2);

#define VkglTestCase_009237_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009237_2 "_operator.left_shift.lowp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009237, VkglTestCase_009237_1, VkglTestCase_009237_2);

#define VkglTestCase_009238_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009238_2 "operator.left_shift.mediump_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009238, VkglTestCase_009238_1, VkglTestCase_009238_2);

#define VkglTestCase_009239_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009239_2 "perator.left_shift.mediump_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009239, VkglTestCase_009239_1, VkglTestCase_009239_2);

#define VkglTestCase_009240_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009240_2 "ry_operator.left_shift.highp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009240, VkglTestCase_009240_1, VkglTestCase_009240_2);

#define VkglTestCase_009241_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009241_2 "y_operator.left_shift.highp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009241, VkglTestCase_009241_1, VkglTestCase_009241_2);

#define VkglTestCase_009242_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009242_2 "_operator.left_shift.highp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009242, VkglTestCase_009242_1, VkglTestCase_009242_2);

#define VkglTestCase_009243_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009243_2 "operator.left_shift.highp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009243, VkglTestCase_009243_1, VkglTestCase_009243_2);

#define VkglTestCase_009244_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009244_2 "_operator.left_shift.highp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009244, VkglTestCase_009244_1, VkglTestCase_009244_2);

#define VkglTestCase_009245_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009245_2 "operator.left_shift.highp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009245, VkglTestCase_009245_1, VkglTestCase_009245_2);

#define VkglTestCase_009246_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009246_2 "_operator.left_shift.highp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009246, VkglTestCase_009246_1, VkglTestCase_009246_2);

#define VkglTestCase_009247_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009247_2 "operator.left_shift.highp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009247, VkglTestCase_009247_1, VkglTestCase_009247_2);

#define VkglTestCase_009248_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009248_2 "nary_operator.left_shift.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009248, VkglTestCase_009248_1, VkglTestCase_009248_2);

#define VkglTestCase_009249_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009249_2 "ary_operator.left_shift.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009249, VkglTestCase_009249_1, VkglTestCase_009249_2);

#define VkglTestCase_009250_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009250_2 "ary_operator.left_shift.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009250, VkglTestCase_009250_1, VkglTestCase_009250_2);

#define VkglTestCase_009251_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009251_2 "ry_operator.left_shift.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009251, VkglTestCase_009251_1, VkglTestCase_009251_2);

#define VkglTestCase_009252_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009252_2 "nary_operator.left_shift.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009252, VkglTestCase_009252_1, VkglTestCase_009252_2);

#define VkglTestCase_009253_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009253_2 "ary_operator.left_shift.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009253, VkglTestCase_009253_1, VkglTestCase_009253_2);

#define VkglTestCase_009254_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009254_2 "ry_operator.left_shift.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009254, VkglTestCase_009254_1, VkglTestCase_009254_2);

#define VkglTestCase_009255_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009255_2 "y_operator.left_shift.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009255, VkglTestCase_009255_1, VkglTestCase_009255_2);

#define VkglTestCase_009256_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009256_2 "nary_operator.left_shift.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009256, VkglTestCase_009256_1, VkglTestCase_009256_2);

#define VkglTestCase_009257_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009257_2 "ary_operator.left_shift.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009257, VkglTestCase_009257_1, VkglTestCase_009257_2);

#define VkglTestCase_009258_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009258_2 "ry_operator.left_shift.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009258, VkglTestCase_009258_1, VkglTestCase_009258_2);

#define VkglTestCase_009259_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009259_2 "y_operator.left_shift.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009259, VkglTestCase_009259_1, VkglTestCase_009259_2);

#define VkglTestCase_009260_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009260_2 "nary_operator.left_shift.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009260, VkglTestCase_009260_1, VkglTestCase_009260_2);

#define VkglTestCase_009261_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009261_2 "ary_operator.left_shift.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009261, VkglTestCase_009261_1, VkglTestCase_009261_2);

#define VkglTestCase_009262_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009262_2 "ry_operator.left_shift.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009262, VkglTestCase_009262_1, VkglTestCase_009262_2);

#define VkglTestCase_009263_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009263_2 "y_operator.left_shift.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009263, VkglTestCase_009263_1, VkglTestCase_009263_2);

#define VkglTestCase_009264_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009264_2 "nary_operator.left_shift.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009264, VkglTestCase_009264_1, VkglTestCase_009264_2);

#define VkglTestCase_009265_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009265_2 "ary_operator.left_shift.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009265, VkglTestCase_009265_1, VkglTestCase_009265_2);

#define VkglTestCase_009266_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009266_2 "ary_operator.left_shift.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009266, VkglTestCase_009266_1, VkglTestCase_009266_2);

#define VkglTestCase_009267_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009267_2 "ry_operator.left_shift.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009267, VkglTestCase_009267_1, VkglTestCase_009267_2);

#define VkglTestCase_009268_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009268_2 "ary_operator.left_shift.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009268, VkglTestCase_009268_1, VkglTestCase_009268_2);

#define VkglTestCase_009269_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009269_2 "ry_operator.left_shift.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009269, VkglTestCase_009269_1, VkglTestCase_009269_2);

#define VkglTestCase_009270_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009270_2 "ary_operator.left_shift.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009270, VkglTestCase_009270_1, VkglTestCase_009270_2);

#define VkglTestCase_009271_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009271_2 "ry_operator.left_shift.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009271, VkglTestCase_009271_1, VkglTestCase_009271_2);

#define VkglTestCase_009272_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009272_2 "y_operator.left_shift.lowp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009272, VkglTestCase_009272_1, VkglTestCase_009272_2);

#define VkglTestCase_009273_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009273_2 "_operator.left_shift.lowp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009273, VkglTestCase_009273_1, VkglTestCase_009273_2);

#define VkglTestCase_009274_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009274_2 "_operator.left_shift.mediump_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009274, VkglTestCase_009274_1, VkglTestCase_009274_2);

#define VkglTestCase_009275_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009275_2 "operator.left_shift.mediump_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009275, VkglTestCase_009275_1, VkglTestCase_009275_2);

#define VkglTestCase_009276_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009276_2 "y_operator.left_shift.lowp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009276, VkglTestCase_009276_1, VkglTestCase_009276_2);

#define VkglTestCase_009277_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009277_2 "_operator.left_shift.lowp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009277, VkglTestCase_009277_1, VkglTestCase_009277_2);

#define VkglTestCase_009278_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009278_2 "_operator.left_shift.mediump_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009278, VkglTestCase_009278_1, VkglTestCase_009278_2);

#define VkglTestCase_009279_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009279_2 "operator.left_shift.mediump_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009279, VkglTestCase_009279_1, VkglTestCase_009279_2);

#define VkglTestCase_009280_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009280_2 "y_operator.left_shift.lowp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009280, VkglTestCase_009280_1, VkglTestCase_009280_2);

#define VkglTestCase_009281_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009281_2 "_operator.left_shift.lowp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009281, VkglTestCase_009281_1, VkglTestCase_009281_2);

#define VkglTestCase_009282_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009282_2 "_operator.left_shift.mediump_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009282, VkglTestCase_009282_1, VkglTestCase_009282_2);

#define VkglTestCase_009283_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009283_2 "operator.left_shift.mediump_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009283, VkglTestCase_009283_1, VkglTestCase_009283_2);

#define VkglTestCase_009284_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009284_2 "y_operator.left_shift.highp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009284, VkglTestCase_009284_1, VkglTestCase_009284_2);

#define VkglTestCase_009285_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009285_2 "_operator.left_shift.highp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009285, VkglTestCase_009285_1, VkglTestCase_009285_2);

#define VkglTestCase_009286_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009286_2 "y_operator.left_shift.highp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009286, VkglTestCase_009286_1, VkglTestCase_009286_2);

#define VkglTestCase_009287_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009287_2 "_operator.left_shift.highp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009287, VkglTestCase_009287_1, VkglTestCase_009287_2);

#define VkglTestCase_009288_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009288_2 "y_operator.left_shift.highp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009288, VkglTestCase_009288_1, VkglTestCase_009288_2);

#define VkglTestCase_009289_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009289_2 "_operator.left_shift.highp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009289, VkglTestCase_009289_1, VkglTestCase_009289_2);

#define VkglTestCase_009290_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009290_2 "y_operator.left_shift.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009290, VkglTestCase_009290_1, VkglTestCase_009290_2);

#define VkglTestCase_009291_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009291_2 "_operator.left_shift.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009291, VkglTestCase_009291_1, VkglTestCase_009291_2);

#define VkglTestCase_009292_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009292_2 "_operator.left_shift.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009292, VkglTestCase_009292_1, VkglTestCase_009292_2);

#define VkglTestCase_009293_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009293_2 "operator.left_shift.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009293, VkglTestCase_009293_1, VkglTestCase_009293_2);

#define VkglTestCase_009294_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009294_2 "y_operator.left_shift.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009294, VkglTestCase_009294_1, VkglTestCase_009294_2);

#define VkglTestCase_009295_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009295_2 "_operator.left_shift.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009295, VkglTestCase_009295_1, VkglTestCase_009295_2);

#define VkglTestCase_009296_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009296_2 "_operator.left_shift.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009296, VkglTestCase_009296_1, VkglTestCase_009296_2);

#define VkglTestCase_009297_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009297_2 "operator.left_shift.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009297, VkglTestCase_009297_1, VkglTestCase_009297_2);

#define VkglTestCase_009298_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009298_2 "y_operator.left_shift.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009298, VkglTestCase_009298_1, VkglTestCase_009298_2);

#define VkglTestCase_009299_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009299_2 "_operator.left_shift.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009299, VkglTestCase_009299_1, VkglTestCase_009299_2);

#define VkglTestCase_009300_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009300_2 "_operator.left_shift.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009300, VkglTestCase_009300_1, VkglTestCase_009300_2);

#define VkglTestCase_009301_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009301_2 "operator.left_shift.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009301, VkglTestCase_009301_1, VkglTestCase_009301_2);

#define VkglTestCase_009302_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009302_2 "y_operator.left_shift.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009302, VkglTestCase_009302_1, VkglTestCase_009302_2);

#define VkglTestCase_009303_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009303_2 "_operator.left_shift.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009303, VkglTestCase_009303_1, VkglTestCase_009303_2);

#define VkglTestCase_009304_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009304_2 "y_operator.left_shift.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009304, VkglTestCase_009304_1, VkglTestCase_009304_2);

#define VkglTestCase_009305_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009305_2 "_operator.left_shift.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009305, VkglTestCase_009305_1, VkglTestCase_009305_2);

#define VkglTestCase_009306_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009306_2 "y_operator.left_shift.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009306, VkglTestCase_009306_1, VkglTestCase_009306_2);

#define VkglTestCase_009307_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009307_2 "_operator.left_shift.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009307, VkglTestCase_009307_1, VkglTestCase_009307_2);

#define VkglTestCase_009308_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_009308_2 "inary_operator.left_shift.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009308, VkglTestCase_009308_1, VkglTestCase_009308_2);

#define VkglTestCase_009309_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009309_2 "nary_operator.left_shift.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009309, VkglTestCase_009309_1, VkglTestCase_009309_2);

#define VkglTestCase_009310_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009310_2 "ary_operator.left_shift.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009310, VkglTestCase_009310_1, VkglTestCase_009310_2);

#define VkglTestCase_009311_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009311_2 "ry_operator.left_shift.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009311, VkglTestCase_009311_1, VkglTestCase_009311_2);

#define VkglTestCase_009312_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009312_2 "nary_operator.left_shift.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009312, VkglTestCase_009312_1, VkglTestCase_009312_2);

#define VkglTestCase_009313_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009313_2 "ary_operator.left_shift.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009313, VkglTestCase_009313_1, VkglTestCase_009313_2);

#define VkglTestCase_009314_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009314_2 "ry_operator.left_shift.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009314, VkglTestCase_009314_1, VkglTestCase_009314_2);

#define VkglTestCase_009315_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009315_2 "y_operator.left_shift.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009315, VkglTestCase_009315_1, VkglTestCase_009315_2);

#define VkglTestCase_009316_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009316_2 "nary_operator.left_shift.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009316, VkglTestCase_009316_1, VkglTestCase_009316_2);

#define VkglTestCase_009317_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009317_2 "ary_operator.left_shift.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009317, VkglTestCase_009317_1, VkglTestCase_009317_2);

#define VkglTestCase_009318_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009318_2 "ry_operator.left_shift.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009318, VkglTestCase_009318_1, VkglTestCase_009318_2);

#define VkglTestCase_009319_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009319_2 "y_operator.left_shift.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009319, VkglTestCase_009319_1, VkglTestCase_009319_2);

#define VkglTestCase_009320_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009320_2 "nary_operator.left_shift.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009320, VkglTestCase_009320_1, VkglTestCase_009320_2);

#define VkglTestCase_009321_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009321_2 "ary_operator.left_shift.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009321, VkglTestCase_009321_1, VkglTestCase_009321_2);

#define VkglTestCase_009322_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009322_2 "ry_operator.left_shift.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009322, VkglTestCase_009322_1, VkglTestCase_009322_2);

#define VkglTestCase_009323_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009323_2 "y_operator.left_shift.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009323, VkglTestCase_009323_1, VkglTestCase_009323_2);

#define VkglTestCase_009324_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009324_2 "nary_operator.left_shift.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009324, VkglTestCase_009324_1, VkglTestCase_009324_2);

#define VkglTestCase_009325_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009325_2 "ary_operator.left_shift.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009325, VkglTestCase_009325_1, VkglTestCase_009325_2);

#define VkglTestCase_009326_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009326_2 "ary_operator.left_shift.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009326, VkglTestCase_009326_1, VkglTestCase_009326_2);

#define VkglTestCase_009327_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009327_2 "ry_operator.left_shift.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009327, VkglTestCase_009327_1, VkglTestCase_009327_2);

#define VkglTestCase_009328_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009328_2 "ary_operator.left_shift.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009328, VkglTestCase_009328_1, VkglTestCase_009328_2);

#define VkglTestCase_009329_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009329_2 "ry_operator.left_shift.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009329, VkglTestCase_009329_1, VkglTestCase_009329_2);

#define VkglTestCase_009330_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009330_2 "ary_operator.left_shift.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009330, VkglTestCase_009330_1, VkglTestCase_009330_2);

#define VkglTestCase_009331_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009331_2 "ry_operator.left_shift.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009331, VkglTestCase_009331_1, VkglTestCase_009331_2);

#define VkglTestCase_009332_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009332_2 "ry_operator.left_shift.lowp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009332, VkglTestCase_009332_1, VkglTestCase_009332_2);

#define VkglTestCase_009333_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009333_2 "y_operator.left_shift.lowp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009333, VkglTestCase_009333_1, VkglTestCase_009333_2);

#define VkglTestCase_009334_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009334_2 "y_operator.left_shift.mediump_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009334, VkglTestCase_009334_1, VkglTestCase_009334_2);

#define VkglTestCase_009335_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009335_2 "_operator.left_shift.mediump_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009335, VkglTestCase_009335_1, VkglTestCase_009335_2);

#define VkglTestCase_009336_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009336_2 "y_operator.left_shift.lowp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009336, VkglTestCase_009336_1, VkglTestCase_009336_2);

#define VkglTestCase_009337_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009337_2 "_operator.left_shift.lowp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009337, VkglTestCase_009337_1, VkglTestCase_009337_2);

#define VkglTestCase_009338_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009338_2 "operator.left_shift.mediump_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009338, VkglTestCase_009338_1, VkglTestCase_009338_2);

#define VkglTestCase_009339_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009339_2 "perator.left_shift.mediump_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009339, VkglTestCase_009339_1, VkglTestCase_009339_2);

#define VkglTestCase_009340_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009340_2 "y_operator.left_shift.lowp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009340, VkglTestCase_009340_1, VkglTestCase_009340_2);

#define VkglTestCase_009341_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009341_2 "_operator.left_shift.lowp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009341, VkglTestCase_009341_1, VkglTestCase_009341_2);

#define VkglTestCase_009342_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009342_2 "operator.left_shift.mediump_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009342, VkglTestCase_009342_1, VkglTestCase_009342_2);

#define VkglTestCase_009343_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009343_2 "perator.left_shift.mediump_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009343, VkglTestCase_009343_1, VkglTestCase_009343_2);

#define VkglTestCase_009344_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009344_2 "y_operator.left_shift.lowp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009344, VkglTestCase_009344_1, VkglTestCase_009344_2);

#define VkglTestCase_009345_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009345_2 "_operator.left_shift.lowp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009345, VkglTestCase_009345_1, VkglTestCase_009345_2);

#define VkglTestCase_009346_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009346_2 "operator.left_shift.mediump_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009346, VkglTestCase_009346_1, VkglTestCase_009346_2);

#define VkglTestCase_009347_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009347_2 "perator.left_shift.mediump_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009347, VkglTestCase_009347_1, VkglTestCase_009347_2);

#define VkglTestCase_009348_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009348_2 "ry_operator.left_shift.highp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009348, VkglTestCase_009348_1, VkglTestCase_009348_2);

#define VkglTestCase_009349_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009349_2 "y_operator.left_shift.highp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009349, VkglTestCase_009349_1, VkglTestCase_009349_2);

#define VkglTestCase_009350_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009350_2 "_operator.left_shift.highp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009350, VkglTestCase_009350_1, VkglTestCase_009350_2);

#define VkglTestCase_009351_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009351_2 "operator.left_shift.highp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009351, VkglTestCase_009351_1, VkglTestCase_009351_2);

#define VkglTestCase_009352_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009352_2 "_operator.left_shift.highp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009352, VkglTestCase_009352_1, VkglTestCase_009352_2);

#define VkglTestCase_009353_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009353_2 "operator.left_shift.highp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009353, VkglTestCase_009353_1, VkglTestCase_009353_2);

#define VkglTestCase_009354_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009354_2 "_operator.left_shift.highp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009354, VkglTestCase_009354_1, VkglTestCase_009354_2);

#define VkglTestCase_009355_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009355_2 "operator.left_shift.highp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009355, VkglTestCase_009355_1, VkglTestCase_009355_2);

#define VkglTestCase_009356_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009356_2 "ry_operator.left_shift.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009356, VkglTestCase_009356_1, VkglTestCase_009356_2);

#define VkglTestCase_009357_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009357_2 "y_operator.left_shift.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009357, VkglTestCase_009357_1, VkglTestCase_009357_2);

#define VkglTestCase_009358_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009358_2 "_operator.left_shift.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009358, VkglTestCase_009358_1, VkglTestCase_009358_2);

#define VkglTestCase_009359_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009359_2 "operator.left_shift.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009359, VkglTestCase_009359_1, VkglTestCase_009359_2);

#define VkglTestCase_009360_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009360_2 "ry_operator.left_shift.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009360, VkglTestCase_009360_1, VkglTestCase_009360_2);

#define VkglTestCase_009361_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009361_2 "y_operator.left_shift.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009361, VkglTestCase_009361_1, VkglTestCase_009361_2);

#define VkglTestCase_009362_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009362_2 "_operator.left_shift.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009362, VkglTestCase_009362_1, VkglTestCase_009362_2);

#define VkglTestCase_009363_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009363_2 "operator.left_shift.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009363, VkglTestCase_009363_1, VkglTestCase_009363_2);

#define VkglTestCase_009364_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009364_2 "ry_operator.left_shift.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009364, VkglTestCase_009364_1, VkglTestCase_009364_2);

#define VkglTestCase_009365_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009365_2 "y_operator.left_shift.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009365, VkglTestCase_009365_1, VkglTestCase_009365_2);

#define VkglTestCase_009366_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009366_2 "_operator.left_shift.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009366, VkglTestCase_009366_1, VkglTestCase_009366_2);

#define VkglTestCase_009367_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009367_2 "operator.left_shift.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009367, VkglTestCase_009367_1, VkglTestCase_009367_2);

#define VkglTestCase_009368_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009368_2 "y_operator.left_shift.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009368, VkglTestCase_009368_1, VkglTestCase_009368_2);

#define VkglTestCase_009369_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009369_2 "_operator.left_shift.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009369, VkglTestCase_009369_1, VkglTestCase_009369_2);

#define VkglTestCase_009370_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009370_2 "y_operator.left_shift.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009370, VkglTestCase_009370_1, VkglTestCase_009370_2);

#define VkglTestCase_009371_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009371_2 "_operator.left_shift.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009371, VkglTestCase_009371_1, VkglTestCase_009371_2);

#define VkglTestCase_009372_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009372_2 "y_operator.left_shift.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009372, VkglTestCase_009372_1, VkglTestCase_009372_2);

#define VkglTestCase_009373_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009373_2 "_operator.left_shift.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009373, VkglTestCase_009373_1, VkglTestCase_009373_2);

#define VkglTestCase_009374_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009374_2 "ry_operator.left_shift.lowp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009374, VkglTestCase_009374_1, VkglTestCase_009374_2);

#define VkglTestCase_009375_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009375_2 "y_operator.left_shift.lowp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009375, VkglTestCase_009375_1, VkglTestCase_009375_2);

#define VkglTestCase_009376_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009376_2 "_operator.left_shift.mediump_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009376, VkglTestCase_009376_1, VkglTestCase_009376_2);

#define VkglTestCase_009377_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009377_2 "operator.left_shift.mediump_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009377, VkglTestCase_009377_1, VkglTestCase_009377_2);

#define VkglTestCase_009378_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009378_2 "ry_operator.left_shift.lowp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009378, VkglTestCase_009378_1, VkglTestCase_009378_2);

#define VkglTestCase_009379_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009379_2 "y_operator.left_shift.lowp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009379, VkglTestCase_009379_1, VkglTestCase_009379_2);

#define VkglTestCase_009380_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009380_2 "_operator.left_shift.mediump_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009380, VkglTestCase_009380_1, VkglTestCase_009380_2);

#define VkglTestCase_009381_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009381_2 "operator.left_shift.mediump_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009381, VkglTestCase_009381_1, VkglTestCase_009381_2);

#define VkglTestCase_009382_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009382_2 "ry_operator.left_shift.lowp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009382, VkglTestCase_009382_1, VkglTestCase_009382_2);

#define VkglTestCase_009383_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009383_2 "y_operator.left_shift.lowp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009383, VkglTestCase_009383_1, VkglTestCase_009383_2);

#define VkglTestCase_009384_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009384_2 "_operator.left_shift.mediump_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009384, VkglTestCase_009384_1, VkglTestCase_009384_2);

#define VkglTestCase_009385_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009385_2 "operator.left_shift.mediump_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009385, VkglTestCase_009385_1, VkglTestCase_009385_2);

#define VkglTestCase_009386_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009386_2 "y_operator.left_shift.highp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009386, VkglTestCase_009386_1, VkglTestCase_009386_2);

#define VkglTestCase_009387_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009387_2 "_operator.left_shift.highp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009387, VkglTestCase_009387_1, VkglTestCase_009387_2);

#define VkglTestCase_009388_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009388_2 "y_operator.left_shift.highp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009388, VkglTestCase_009388_1, VkglTestCase_009388_2);

#define VkglTestCase_009389_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009389_2 "_operator.left_shift.highp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009389, VkglTestCase_009389_1, VkglTestCase_009389_2);

#define VkglTestCase_009390_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009390_2 "y_operator.left_shift.highp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009390, VkglTestCase_009390_1, VkglTestCase_009390_2);

#define VkglTestCase_009391_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009391_2 "_operator.left_shift.highp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009391, VkglTestCase_009391_1, VkglTestCase_009391_2);
