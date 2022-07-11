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
#include "../ActsDeqpgles30009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008204_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008204_2 ".binary_operator.sub.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008204, VkglTestCase_008204_1, VkglTestCase_008204_2);

#define VkglTestCase_008205_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008205_2 "binary_operator.sub.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008205, VkglTestCase_008205_1, VkglTestCase_008205_2);

#define VkglTestCase_008206_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008206_2 "binary_operator.sub.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008206, VkglTestCase_008206_1, VkglTestCase_008206_2);

#define VkglTestCase_008207_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008207_2 "inary_operator.sub.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008207, VkglTestCase_008207_1, VkglTestCase_008207_2);

#define VkglTestCase_008208_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008208_2 ".binary_operator.sub.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008208, VkglTestCase_008208_1, VkglTestCase_008208_2);

#define VkglTestCase_008209_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008209_2 "binary_operator.sub.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008209, VkglTestCase_008209_1, VkglTestCase_008209_2);

#define VkglTestCase_008210_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008210_2 "r.binary_operator.sub.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008210, VkglTestCase_008210_1, VkglTestCase_008210_2);

#define VkglTestCase_008211_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008211_2 ".binary_operator.sub.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008211, VkglTestCase_008211_1, VkglTestCase_008211_2);

#define VkglTestCase_008212_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008212_2 "binary_operator.sub.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008212, VkglTestCase_008212_1, VkglTestCase_008212_2);

#define VkglTestCase_008213_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008213_2 "inary_operator.sub.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008213, VkglTestCase_008213_1, VkglTestCase_008213_2);

#define VkglTestCase_008214_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008214_2 ".binary_operator.sub.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008214, VkglTestCase_008214_1, VkglTestCase_008214_2);

#define VkglTestCase_008215_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008215_2 "binary_operator.sub.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008215, VkglTestCase_008215_1, VkglTestCase_008215_2);

#define VkglTestCase_008216_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008216_2 "r.binary_operator.sub.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008216, VkglTestCase_008216_1, VkglTestCase_008216_2);

#define VkglTestCase_008217_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008217_2 ".binary_operator.sub.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008217, VkglTestCase_008217_1, VkglTestCase_008217_2);

#define VkglTestCase_008218_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008218_2 "binary_operator.sub.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008218, VkglTestCase_008218_1, VkglTestCase_008218_2);

#define VkglTestCase_008219_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008219_2 "inary_operator.sub.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008219, VkglTestCase_008219_1, VkglTestCase_008219_2);

#define VkglTestCase_008220_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008220_2 ".binary_operator.sub.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008220, VkglTestCase_008220_1, VkglTestCase_008220_2);

#define VkglTestCase_008221_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008221_2 "binary_operator.sub.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008221, VkglTestCase_008221_1, VkglTestCase_008221_2);

#define VkglTestCase_008222_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008222_2 "r.binary_operator.sub.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008222, VkglTestCase_008222_1, VkglTestCase_008222_2);

#define VkglTestCase_008223_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008223_2 ".binary_operator.sub.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008223, VkglTestCase_008223_1, VkglTestCase_008223_2);

#define VkglTestCase_008224_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008224_2 "binary_operator.sub.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008224, VkglTestCase_008224_1, VkglTestCase_008224_2);

#define VkglTestCase_008225_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008225_2 "inary_operator.sub.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008225, VkglTestCase_008225_1, VkglTestCase_008225_2);

#define VkglTestCase_008226_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008226_2 ".binary_operator.sub.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008226, VkglTestCase_008226_1, VkglTestCase_008226_2);

#define VkglTestCase_008227_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008227_2 "binary_operator.sub.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008227, VkglTestCase_008227_1, VkglTestCase_008227_2);

#define VkglTestCase_008228_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008228_2 "r.binary_operator.sub.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008228, VkglTestCase_008228_1, VkglTestCase_008228_2);

#define VkglTestCase_008229_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008229_2 ".binary_operator.sub.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008229, VkglTestCase_008229_1, VkglTestCase_008229_2);

#define VkglTestCase_008230_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008230_2 ".binary_operator.sub.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008230, VkglTestCase_008230_1, VkglTestCase_008230_2);

#define VkglTestCase_008231_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008231_2 "binary_operator.sub.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008231, VkglTestCase_008231_1, VkglTestCase_008231_2);

#define VkglTestCase_008232_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008232_2 ".binary_operator.sub.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008232, VkglTestCase_008232_1, VkglTestCase_008232_2);

#define VkglTestCase_008233_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008233_2 "binary_operator.sub.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008233, VkglTestCase_008233_1, VkglTestCase_008233_2);

#define VkglTestCase_008234_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008234_2 "binary_operator.sub.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008234, VkglTestCase_008234_1, VkglTestCase_008234_2);

#define VkglTestCase_008235_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008235_2 "inary_operator.sub.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008235, VkglTestCase_008235_1, VkglTestCase_008235_2);

#define VkglTestCase_008236_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008236_2 ".binary_operator.sub.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008236, VkglTestCase_008236_1, VkglTestCase_008236_2);

#define VkglTestCase_008237_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008237_2 "binary_operator.sub.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008237, VkglTestCase_008237_1, VkglTestCase_008237_2);

#define VkglTestCase_008238_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008238_2 "binary_operator.sub.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008238, VkglTestCase_008238_1, VkglTestCase_008238_2);

#define VkglTestCase_008239_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008239_2 "inary_operator.sub.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008239, VkglTestCase_008239_1, VkglTestCase_008239_2);

#define VkglTestCase_008240_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008240_2 ".binary_operator.sub.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008240, VkglTestCase_008240_1, VkglTestCase_008240_2);

#define VkglTestCase_008241_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008241_2 "binary_operator.sub.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008241, VkglTestCase_008241_1, VkglTestCase_008241_2);

#define VkglTestCase_008242_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008242_2 "binary_operator.sub.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008242, VkglTestCase_008242_1, VkglTestCase_008242_2);

#define VkglTestCase_008243_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008243_2 "inary_operator.sub.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008243, VkglTestCase_008243_1, VkglTestCase_008243_2);

#define VkglTestCase_008244_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008244_2 "r.binary_operator.sub.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008244, VkglTestCase_008244_1, VkglTestCase_008244_2);

#define VkglTestCase_008245_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008245_2 ".binary_operator.sub.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008245, VkglTestCase_008245_1, VkglTestCase_008245_2);

#define VkglTestCase_008246_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008246_2 ".binary_operator.sub.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008246, VkglTestCase_008246_1, VkglTestCase_008246_2);

#define VkglTestCase_008247_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008247_2 "binary_operator.sub.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008247, VkglTestCase_008247_1, VkglTestCase_008247_2);

#define VkglTestCase_008248_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008248_2 ".binary_operator.sub.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008248, VkglTestCase_008248_1, VkglTestCase_008248_2);

#define VkglTestCase_008249_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008249_2 "binary_operator.sub.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008249, VkglTestCase_008249_1, VkglTestCase_008249_2);

#define VkglTestCase_008250_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008250_2 ".binary_operator.sub.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008250, VkglTestCase_008250_1, VkglTestCase_008250_2);

#define VkglTestCase_008251_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008251_2 "binary_operator.sub.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008251, VkglTestCase_008251_1, VkglTestCase_008251_2);

#define VkglTestCase_008252_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008252_2 "r.binary_operator.sub.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008252, VkglTestCase_008252_1, VkglTestCase_008252_2);

#define VkglTestCase_008253_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008253_2 ".binary_operator.sub.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008253, VkglTestCase_008253_1, VkglTestCase_008253_2);

#define VkglTestCase_008254_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008254_2 "binary_operator.sub.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008254, VkglTestCase_008254_1, VkglTestCase_008254_2);

#define VkglTestCase_008255_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008255_2 "inary_operator.sub.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008255, VkglTestCase_008255_1, VkglTestCase_008255_2);

#define VkglTestCase_008256_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008256_2 ".binary_operator.sub.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008256, VkglTestCase_008256_1, VkglTestCase_008256_2);

#define VkglTestCase_008257_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008257_2 "binary_operator.sub.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008257, VkglTestCase_008257_1, VkglTestCase_008257_2);

#define VkglTestCase_008258_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008258_2 "binary_operator.sub.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008258, VkglTestCase_008258_1, VkglTestCase_008258_2);

#define VkglTestCase_008259_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008259_2 "inary_operator.sub.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008259, VkglTestCase_008259_1, VkglTestCase_008259_2);

#define VkglTestCase_008260_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008260_2 ".binary_operator.sub.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008260, VkglTestCase_008260_1, VkglTestCase_008260_2);

#define VkglTestCase_008261_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008261_2 "binary_operator.sub.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008261, VkglTestCase_008261_1, VkglTestCase_008261_2);

#define VkglTestCase_008262_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008262_2 "binary_operator.sub.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008262, VkglTestCase_008262_1, VkglTestCase_008262_2);

#define VkglTestCase_008263_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008263_2 "inary_operator.sub.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008263, VkglTestCase_008263_1, VkglTestCase_008263_2);

#define VkglTestCase_008264_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008264_2 ".binary_operator.sub.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008264, VkglTestCase_008264_1, VkglTestCase_008264_2);

#define VkglTestCase_008265_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008265_2 "binary_operator.sub.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008265, VkglTestCase_008265_1, VkglTestCase_008265_2);

#define VkglTestCase_008266_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008266_2 "binary_operator.sub.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008266, VkglTestCase_008266_1, VkglTestCase_008266_2);

#define VkglTestCase_008267_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008267_2 "inary_operator.sub.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008267, VkglTestCase_008267_1, VkglTestCase_008267_2);

#define VkglTestCase_008268_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008268_2 ".binary_operator.sub.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008268, VkglTestCase_008268_1, VkglTestCase_008268_2);

#define VkglTestCase_008269_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008269_2 "binary_operator.sub.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008269, VkglTestCase_008269_1, VkglTestCase_008269_2);

#define VkglTestCase_008270_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008270_2 ".binary_operator.sub.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008270, VkglTestCase_008270_1, VkglTestCase_008270_2);

#define VkglTestCase_008271_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008271_2 "binary_operator.sub.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008271, VkglTestCase_008271_1, VkglTestCase_008271_2);

#define VkglTestCase_008272_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008272_2 ".binary_operator.sub.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008272, VkglTestCase_008272_1, VkglTestCase_008272_2);

#define VkglTestCase_008273_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008273_2 "binary_operator.sub.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008273, VkglTestCase_008273_1, VkglTestCase_008273_2);

#define VkglTestCase_008274_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008274_2 ".binary_operator.sub.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008274, VkglTestCase_008274_1, VkglTestCase_008274_2);

#define VkglTestCase_008275_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008275_2 "binary_operator.sub.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008275, VkglTestCase_008275_1, VkglTestCase_008275_2);

#define VkglTestCase_008276_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008276_2 "inary_operator.sub.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008276, VkglTestCase_008276_1, VkglTestCase_008276_2);

#define VkglTestCase_008277_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008277_2 "nary_operator.sub.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008277, VkglTestCase_008277_1, VkglTestCase_008277_2);

#define VkglTestCase_008278_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008278_2 "ary_operator.sub.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008278, VkglTestCase_008278_1, VkglTestCase_008278_2);

#define VkglTestCase_008279_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008279_2 "ry_operator.sub.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008279, VkglTestCase_008279_1, VkglTestCase_008279_2);

#define VkglTestCase_008280_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008280_2 "nary_operator.sub.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008280, VkglTestCase_008280_1, VkglTestCase_008280_2);

#define VkglTestCase_008281_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008281_2 "ary_operator.sub.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008281, VkglTestCase_008281_1, VkglTestCase_008281_2);

#define VkglTestCase_008282_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008282_2 "inary_operator.sub.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008282, VkglTestCase_008282_1, VkglTestCase_008282_2);

#define VkglTestCase_008283_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008283_2 "nary_operator.sub.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008283, VkglTestCase_008283_1, VkglTestCase_008283_2);

#define VkglTestCase_008284_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008284_2 "ary_operator.sub.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008284, VkglTestCase_008284_1, VkglTestCase_008284_2);

#define VkglTestCase_008285_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008285_2 "ry_operator.sub.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008285, VkglTestCase_008285_1, VkglTestCase_008285_2);

#define VkglTestCase_008286_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008286_2 "nary_operator.sub.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008286, VkglTestCase_008286_1, VkglTestCase_008286_2);

#define VkglTestCase_008287_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008287_2 "ary_operator.sub.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008287, VkglTestCase_008287_1, VkglTestCase_008287_2);

#define VkglTestCase_008288_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008288_2 "inary_operator.sub.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008288, VkglTestCase_008288_1, VkglTestCase_008288_2);

#define VkglTestCase_008289_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008289_2 "nary_operator.sub.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008289, VkglTestCase_008289_1, VkglTestCase_008289_2);

#define VkglTestCase_008290_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008290_2 "ary_operator.sub.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008290, VkglTestCase_008290_1, VkglTestCase_008290_2);

#define VkglTestCase_008291_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008291_2 "ry_operator.sub.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008291, VkglTestCase_008291_1, VkglTestCase_008291_2);

#define VkglTestCase_008292_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008292_2 "nary_operator.sub.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008292, VkglTestCase_008292_1, VkglTestCase_008292_2);

#define VkglTestCase_008293_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008293_2 "ary_operator.sub.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008293, VkglTestCase_008293_1, VkglTestCase_008293_2);

#define VkglTestCase_008294_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008294_2 "inary_operator.sub.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008294, VkglTestCase_008294_1, VkglTestCase_008294_2);

#define VkglTestCase_008295_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008295_2 "nary_operator.sub.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008295, VkglTestCase_008295_1, VkglTestCase_008295_2);

#define VkglTestCase_008296_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008296_2 "nary_operator.sub.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008296, VkglTestCase_008296_1, VkglTestCase_008296_2);

#define VkglTestCase_008297_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008297_2 "ary_operator.sub.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008297, VkglTestCase_008297_1, VkglTestCase_008297_2);

#define VkglTestCase_008298_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008298_2 "inary_operator.sub.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008298, VkglTestCase_008298_1, VkglTestCase_008298_2);

#define VkglTestCase_008299_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008299_2 "nary_operator.sub.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008299, VkglTestCase_008299_1, VkglTestCase_008299_2);

#define VkglTestCase_008300_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008300_2 "nary_operator.sub.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008300, VkglTestCase_008300_1, VkglTestCase_008300_2);

#define VkglTestCase_008301_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008301_2 "ary_operator.sub.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008301, VkglTestCase_008301_1, VkglTestCase_008301_2);

#define VkglTestCase_008302_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008302_2 "inary_operator.sub.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008302, VkglTestCase_008302_1, VkglTestCase_008302_2);

#define VkglTestCase_008303_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008303_2 "nary_operator.sub.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008303, VkglTestCase_008303_1, VkglTestCase_008303_2);

#define VkglTestCase_008304_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008304_2 "nary_operator.sub.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008304, VkglTestCase_008304_1, VkglTestCase_008304_2);

#define VkglTestCase_008305_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008305_2 "ary_operator.sub.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008305, VkglTestCase_008305_1, VkglTestCase_008305_2);

#define VkglTestCase_008306_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008306_2 "inary_operator.sub.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008306, VkglTestCase_008306_1, VkglTestCase_008306_2);

#define VkglTestCase_008307_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008307_2 "nary_operator.sub.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008307, VkglTestCase_008307_1, VkglTestCase_008307_2);

#define VkglTestCase_008308_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008308_2 "inary_operator.sub.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008308, VkglTestCase_008308_1, VkglTestCase_008308_2);

#define VkglTestCase_008309_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008309_2 "nary_operator.sub.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008309, VkglTestCase_008309_1, VkglTestCase_008309_2);

#define VkglTestCase_008310_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008310_2 "inary_operator.sub.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008310, VkglTestCase_008310_1, VkglTestCase_008310_2);

#define VkglTestCase_008311_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008311_2 "nary_operator.sub.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008311, VkglTestCase_008311_1, VkglTestCase_008311_2);

#define VkglTestCase_008312_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008312_2 "inary_operator.sub.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008312, VkglTestCase_008312_1, VkglTestCase_008312_2);

#define VkglTestCase_008313_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008313_2 "nary_operator.sub.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008313, VkglTestCase_008313_1, VkglTestCase_008313_2);

#define VkglTestCase_008314_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008314_2 "ary_operator.sub.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008314, VkglTestCase_008314_1, VkglTestCase_008314_2);

#define VkglTestCase_008315_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008315_2 "ry_operator.sub.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008315, VkglTestCase_008315_1, VkglTestCase_008315_2);

#define VkglTestCase_008316_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008316_2 "inary_operator.sub.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008316, VkglTestCase_008316_1, VkglTestCase_008316_2);

#define VkglTestCase_008317_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008317_2 "nary_operator.sub.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008317, VkglTestCase_008317_1, VkglTestCase_008317_2);

#define VkglTestCase_008318_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008318_2 "ary_operator.sub.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008318, VkglTestCase_008318_1, VkglTestCase_008318_2);

#define VkglTestCase_008319_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008319_2 "ry_operator.sub.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008319, VkglTestCase_008319_1, VkglTestCase_008319_2);

#define VkglTestCase_008320_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008320_2 "inary_operator.sub.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008320, VkglTestCase_008320_1, VkglTestCase_008320_2);

#define VkglTestCase_008321_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008321_2 "nary_operator.sub.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008321, VkglTestCase_008321_1, VkglTestCase_008321_2);

#define VkglTestCase_008322_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008322_2 "ary_operator.sub.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008322, VkglTestCase_008322_1, VkglTestCase_008322_2);

#define VkglTestCase_008323_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008323_2 "ry_operator.sub.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008323, VkglTestCase_008323_1, VkglTestCase_008323_2);

#define VkglTestCase_008324_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008324_2 "nary_operator.sub.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008324, VkglTestCase_008324_1, VkglTestCase_008324_2);

#define VkglTestCase_008325_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008325_2 "ary_operator.sub.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008325, VkglTestCase_008325_1, VkglTestCase_008325_2);

#define VkglTestCase_008326_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008326_2 "nary_operator.sub.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008326, VkglTestCase_008326_1, VkglTestCase_008326_2);

#define VkglTestCase_008327_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008327_2 "ary_operator.sub.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008327, VkglTestCase_008327_1, VkglTestCase_008327_2);

#define VkglTestCase_008328_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008328_2 "nary_operator.sub.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008328, VkglTestCase_008328_1, VkglTestCase_008328_2);

#define VkglTestCase_008329_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008329_2 "ary_operator.sub.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008329, VkglTestCase_008329_1, VkglTestCase_008329_2);

#define VkglTestCase_008330_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008330_2 "inary_operator.sub.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008330, VkglTestCase_008330_1, VkglTestCase_008330_2);

#define VkglTestCase_008331_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008331_2 "nary_operator.sub.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008331, VkglTestCase_008331_1, VkglTestCase_008331_2);

#define VkglTestCase_008332_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008332_2 "ary_operator.sub.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008332, VkglTestCase_008332_1, VkglTestCase_008332_2);

#define VkglTestCase_008333_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008333_2 "ry_operator.sub.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008333, VkglTestCase_008333_1, VkglTestCase_008333_2);

#define VkglTestCase_008334_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008334_2 "nary_operator.sub.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008334, VkglTestCase_008334_1, VkglTestCase_008334_2);

#define VkglTestCase_008335_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008335_2 "ary_operator.sub.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008335, VkglTestCase_008335_1, VkglTestCase_008335_2);

#define VkglTestCase_008336_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008336_2 "inary_operator.sub.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008336, VkglTestCase_008336_1, VkglTestCase_008336_2);

#define VkglTestCase_008337_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008337_2 "nary_operator.sub.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008337, VkglTestCase_008337_1, VkglTestCase_008337_2);

#define VkglTestCase_008338_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008338_2 "ary_operator.sub.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008338, VkglTestCase_008338_1, VkglTestCase_008338_2);

#define VkglTestCase_008339_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008339_2 "ry_operator.sub.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008339, VkglTestCase_008339_1, VkglTestCase_008339_2);

#define VkglTestCase_008340_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008340_2 "nary_operator.sub.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008340, VkglTestCase_008340_1, VkglTestCase_008340_2);

#define VkglTestCase_008341_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008341_2 "ary_operator.sub.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008341, VkglTestCase_008341_1, VkglTestCase_008341_2);

#define VkglTestCase_008342_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008342_2 "inary_operator.sub.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008342, VkglTestCase_008342_1, VkglTestCase_008342_2);

#define VkglTestCase_008343_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008343_2 "nary_operator.sub.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008343, VkglTestCase_008343_1, VkglTestCase_008343_2);

#define VkglTestCase_008344_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008344_2 "ary_operator.sub.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008344, VkglTestCase_008344_1, VkglTestCase_008344_2);

#define VkglTestCase_008345_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008345_2 "ry_operator.sub.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008345, VkglTestCase_008345_1, VkglTestCase_008345_2);

#define VkglTestCase_008346_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008346_2 "nary_operator.sub.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008346, VkglTestCase_008346_1, VkglTestCase_008346_2);

#define VkglTestCase_008347_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008347_2 "ary_operator.sub.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008347, VkglTestCase_008347_1, VkglTestCase_008347_2);

#define VkglTestCase_008348_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008348_2 "inary_operator.sub.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008348, VkglTestCase_008348_1, VkglTestCase_008348_2);

#define VkglTestCase_008349_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008349_2 "nary_operator.sub.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008349, VkglTestCase_008349_1, VkglTestCase_008349_2);

#define VkglTestCase_008350_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008350_2 "nary_operator.sub.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008350, VkglTestCase_008350_1, VkglTestCase_008350_2);

#define VkglTestCase_008351_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008351_2 "ary_operator.sub.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008351, VkglTestCase_008351_1, VkglTestCase_008351_2);

#define VkglTestCase_008352_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008352_2 "inary_operator.sub.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008352, VkglTestCase_008352_1, VkglTestCase_008352_2);

#define VkglTestCase_008353_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008353_2 "nary_operator.sub.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008353, VkglTestCase_008353_1, VkglTestCase_008353_2);

#define VkglTestCase_008354_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008354_2 "nary_operator.sub.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008354, VkglTestCase_008354_1, VkglTestCase_008354_2);

#define VkglTestCase_008355_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008355_2 "ary_operator.sub.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008355, VkglTestCase_008355_1, VkglTestCase_008355_2);

#define VkglTestCase_008356_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008356_2 "inary_operator.sub.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008356, VkglTestCase_008356_1, VkglTestCase_008356_2);

#define VkglTestCase_008357_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008357_2 "nary_operator.sub.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008357, VkglTestCase_008357_1, VkglTestCase_008357_2);

#define VkglTestCase_008358_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008358_2 "nary_operator.sub.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008358, VkglTestCase_008358_1, VkglTestCase_008358_2);

#define VkglTestCase_008359_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008359_2 "ary_operator.sub.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008359, VkglTestCase_008359_1, VkglTestCase_008359_2);

#define VkglTestCase_008360_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008360_2 "inary_operator.sub.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008360, VkglTestCase_008360_1, VkglTestCase_008360_2);

#define VkglTestCase_008361_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008361_2 "nary_operator.sub.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008361, VkglTestCase_008361_1, VkglTestCase_008361_2);

#define VkglTestCase_008362_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008362_2 "inary_operator.sub.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008362, VkglTestCase_008362_1, VkglTestCase_008362_2);

#define VkglTestCase_008363_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008363_2 "nary_operator.sub.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008363, VkglTestCase_008363_1, VkglTestCase_008363_2);

#define VkglTestCase_008364_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008364_2 "inary_operator.sub.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008364, VkglTestCase_008364_1, VkglTestCase_008364_2);

#define VkglTestCase_008365_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008365_2 "nary_operator.sub.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008365, VkglTestCase_008365_1, VkglTestCase_008365_2);

#define VkglTestCase_008366_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008366_2 "inary_operator.sub.lowp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008366, VkglTestCase_008366_1, VkglTestCase_008366_2);

#define VkglTestCase_008367_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008367_2 "nary_operator.sub.lowp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008367, VkglTestCase_008367_1, VkglTestCase_008367_2);

#define VkglTestCase_008368_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008368_2 "ary_operator.sub.mediump_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008368, VkglTestCase_008368_1, VkglTestCase_008368_2);

#define VkglTestCase_008369_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008369_2 "ry_operator.sub.mediump_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008369, VkglTestCase_008369_1, VkglTestCase_008369_2);

#define VkglTestCase_008370_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008370_2 "inary_operator.sub.lowp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008370, VkglTestCase_008370_1, VkglTestCase_008370_2);

#define VkglTestCase_008371_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008371_2 "nary_operator.sub.lowp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008371, VkglTestCase_008371_1, VkglTestCase_008371_2);

#define VkglTestCase_008372_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008372_2 "ary_operator.sub.mediump_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008372, VkglTestCase_008372_1, VkglTestCase_008372_2);

#define VkglTestCase_008373_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008373_2 "ry_operator.sub.mediump_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008373, VkglTestCase_008373_1, VkglTestCase_008373_2);

#define VkglTestCase_008374_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008374_2 "inary_operator.sub.lowp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008374, VkglTestCase_008374_1, VkglTestCase_008374_2);

#define VkglTestCase_008375_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008375_2 "nary_operator.sub.lowp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008375, VkglTestCase_008375_1, VkglTestCase_008375_2);

#define VkglTestCase_008376_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008376_2 "ary_operator.sub.mediump_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008376, VkglTestCase_008376_1, VkglTestCase_008376_2);

#define VkglTestCase_008377_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008377_2 "ry_operator.sub.mediump_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008377, VkglTestCase_008377_1, VkglTestCase_008377_2);

#define VkglTestCase_008378_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008378_2 "nary_operator.sub.highp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008378, VkglTestCase_008378_1, VkglTestCase_008378_2);

#define VkglTestCase_008379_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008379_2 "ary_operator.sub.highp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008379, VkglTestCase_008379_1, VkglTestCase_008379_2);

#define VkglTestCase_008380_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008380_2 "nary_operator.sub.highp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008380, VkglTestCase_008380_1, VkglTestCase_008380_2);

#define VkglTestCase_008381_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008381_2 "ary_operator.sub.highp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008381, VkglTestCase_008381_1, VkglTestCase_008381_2);

#define VkglTestCase_008382_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008382_2 "nary_operator.sub.highp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008382, VkglTestCase_008382_1, VkglTestCase_008382_2);

#define VkglTestCase_008383_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008383_2 "ary_operator.sub.highp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008383, VkglTestCase_008383_1, VkglTestCase_008383_2);
