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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008230_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008230_2 "iltin_functions.vector_relational.lessThan_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008230, VkglTestCase_008230_1, VkglTestCase_008230_2);

#define VkglTestCase_008231_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008231_2 "ltin_functions.vector_relational.lessThan_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008231, VkglTestCase_008231_1, VkglTestCase_008231_2);

#define VkglTestCase_008232_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008232_2 "iltin_functions.vector_relational.lessThan_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008232, VkglTestCase_008232_1, VkglTestCase_008232_2);

#define VkglTestCase_008233_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008233_2 "ltin_functions.vector_relational.lessThan_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008233, VkglTestCase_008233_1, VkglTestCase_008233_2);

#define VkglTestCase_008234_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008234_2 "iltin_functions.vector_relational.lessThan_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008234, VkglTestCase_008234_1, VkglTestCase_008234_2);

#define VkglTestCase_008235_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008235_2 "ltin_functions.vector_relational.lessThan_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008235, VkglTestCase_008235_1, VkglTestCase_008235_2);

#define VkglTestCase_008236_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008236_2 "ltin_functions.vector_relational.lessThan_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008236, VkglTestCase_008236_1, VkglTestCase_008236_2);

#define VkglTestCase_008237_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008237_2 "tin_functions.vector_relational.lessThan_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008237, VkglTestCase_008237_1, VkglTestCase_008237_2);

#define VkglTestCase_008238_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008238_2 "ltin_functions.vector_relational.lessThan_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008238, VkglTestCase_008238_1, VkglTestCase_008238_2);

#define VkglTestCase_008239_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008239_2 "tin_functions.vector_relational.lessThan_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008239, VkglTestCase_008239_1, VkglTestCase_008239_2);

#define VkglTestCase_008240_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008240_2 "ltin_functions.vector_relational.lessThan_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008240, VkglTestCase_008240_1, VkglTestCase_008240_2);

#define VkglTestCase_008241_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008241_2 "tin_functions.vector_relational.lessThan_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008241, VkglTestCase_008241_1, VkglTestCase_008241_2);

#define VkglTestCase_008242_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008242_2 "in_functions.vector_relational.lessThanEqual_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008242, VkglTestCase_008242_1, VkglTestCase_008242_2);

#define VkglTestCase_008243_1 "dEQP-GLES2.functional.shaders.constant_expressions.builti"
#define VkglTestCase_008243_2 "n_functions.vector_relational.lessThanEqual_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008243, VkglTestCase_008243_1, VkglTestCase_008243_2);

#define VkglTestCase_008244_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008244_2 "in_functions.vector_relational.lessThanEqual_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008244, VkglTestCase_008244_1, VkglTestCase_008244_2);

#define VkglTestCase_008245_1 "dEQP-GLES2.functional.shaders.constant_expressions.builti"
#define VkglTestCase_008245_2 "n_functions.vector_relational.lessThanEqual_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008245, VkglTestCase_008245_1, VkglTestCase_008245_2);

#define VkglTestCase_008246_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008246_2 "in_functions.vector_relational.lessThanEqual_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008246, VkglTestCase_008246_1, VkglTestCase_008246_2);

#define VkglTestCase_008247_1 "dEQP-GLES2.functional.shaders.constant_expressions.builti"
#define VkglTestCase_008247_2 "n_functions.vector_relational.lessThanEqual_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008247, VkglTestCase_008247_1, VkglTestCase_008247_2);

#define VkglTestCase_008248_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008248_2 "in_functions.vector_relational.lessThanEqual_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008248, VkglTestCase_008248_1, VkglTestCase_008248_2);

#define VkglTestCase_008249_1 "dEQP-GLES2.functional.shaders.constant_expressions.builti"
#define VkglTestCase_008249_2 "n_functions.vector_relational.lessThanEqual_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008249, VkglTestCase_008249_1, VkglTestCase_008249_2);

#define VkglTestCase_008250_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008250_2 "in_functions.vector_relational.lessThanEqual_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008250, VkglTestCase_008250_1, VkglTestCase_008250_2);

#define VkglTestCase_008251_1 "dEQP-GLES2.functional.shaders.constant_expressions.builti"
#define VkglTestCase_008251_2 "n_functions.vector_relational.lessThanEqual_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008251, VkglTestCase_008251_1, VkglTestCase_008251_2);

#define VkglTestCase_008252_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008252_2 "in_functions.vector_relational.lessThanEqual_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008252, VkglTestCase_008252_1, VkglTestCase_008252_2);

#define VkglTestCase_008253_1 "dEQP-GLES2.functional.shaders.constant_expressions.builti"
#define VkglTestCase_008253_2 "n_functions.vector_relational.lessThanEqual_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008253, VkglTestCase_008253_1, VkglTestCase_008253_2);

#define VkglTestCase_008254_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008254_2 "tin_functions.vector_relational.greaterThan_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008254, VkglTestCase_008254_1, VkglTestCase_008254_2);

#define VkglTestCase_008255_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008255_2 "in_functions.vector_relational.greaterThan_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008255, VkglTestCase_008255_1, VkglTestCase_008255_2);

#define VkglTestCase_008256_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008256_2 "tin_functions.vector_relational.greaterThan_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008256, VkglTestCase_008256_1, VkglTestCase_008256_2);

#define VkglTestCase_008257_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008257_2 "in_functions.vector_relational.greaterThan_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008257, VkglTestCase_008257_1, VkglTestCase_008257_2);

#define VkglTestCase_008258_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008258_2 "tin_functions.vector_relational.greaterThan_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008258, VkglTestCase_008258_1, VkglTestCase_008258_2);

#define VkglTestCase_008259_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008259_2 "in_functions.vector_relational.greaterThan_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008259, VkglTestCase_008259_1, VkglTestCase_008259_2);

#define VkglTestCase_008260_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008260_2 "tin_functions.vector_relational.greaterThan_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008260, VkglTestCase_008260_1, VkglTestCase_008260_2);

#define VkglTestCase_008261_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008261_2 "in_functions.vector_relational.greaterThan_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008261, VkglTestCase_008261_1, VkglTestCase_008261_2);

#define VkglTestCase_008262_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008262_2 "tin_functions.vector_relational.greaterThan_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008262, VkglTestCase_008262_1, VkglTestCase_008262_2);

#define VkglTestCase_008263_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008263_2 "in_functions.vector_relational.greaterThan_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008263, VkglTestCase_008263_1, VkglTestCase_008263_2);

#define VkglTestCase_008264_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008264_2 "tin_functions.vector_relational.greaterThan_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008264, VkglTestCase_008264_1, VkglTestCase_008264_2);

#define VkglTestCase_008265_1 "dEQP-GLES2.functional.shaders.constant_expressions.built"
#define VkglTestCase_008265_2 "in_functions.vector_relational.greaterThan_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008265, VkglTestCase_008265_1, VkglTestCase_008265_2);

#define VkglTestCase_008266_1 "dEQP-GLES2.functional.shaders.constant_expressions.builti"
#define VkglTestCase_008266_2 "n_functions.vector_relational.greaterThanEqual_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008266, VkglTestCase_008266_1, VkglTestCase_008266_2);

#define VkglTestCase_008267_1 "dEQP-GLES2.functional.shaders.constant_expressions.builtin"
#define VkglTestCase_008267_2 "_functions.vector_relational.greaterThanEqual_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008267, VkglTestCase_008267_1, VkglTestCase_008267_2);

#define VkglTestCase_008268_1 "dEQP-GLES2.functional.shaders.constant_expressions.builti"
#define VkglTestCase_008268_2 "n_functions.vector_relational.greaterThanEqual_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008268, VkglTestCase_008268_1, VkglTestCase_008268_2);

#define VkglTestCase_008269_1 "dEQP-GLES2.functional.shaders.constant_expressions.builtin"
#define VkglTestCase_008269_2 "_functions.vector_relational.greaterThanEqual_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008269, VkglTestCase_008269_1, VkglTestCase_008269_2);

#define VkglTestCase_008270_1 "dEQP-GLES2.functional.shaders.constant_expressions.builti"
#define VkglTestCase_008270_2 "n_functions.vector_relational.greaterThanEqual_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008270, VkglTestCase_008270_1, VkglTestCase_008270_2);

#define VkglTestCase_008271_1 "dEQP-GLES2.functional.shaders.constant_expressions.builtin"
#define VkglTestCase_008271_2 "_functions.vector_relational.greaterThanEqual_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008271, VkglTestCase_008271_1, VkglTestCase_008271_2);

#define VkglTestCase_008272_1 "dEQP-GLES2.functional.shaders.constant_expressions.builtin"
#define VkglTestCase_008272_2 "_functions.vector_relational.greaterThanEqual_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008272, VkglTestCase_008272_1, VkglTestCase_008272_2);

#define VkglTestCase_008273_1 "dEQP-GLES2.functional.shaders.constant_expressions.builtin_"
#define VkglTestCase_008273_2 "functions.vector_relational.greaterThanEqual_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008273, VkglTestCase_008273_1, VkglTestCase_008273_2);

#define VkglTestCase_008274_1 "dEQP-GLES2.functional.shaders.constant_expressions.builtin"
#define VkglTestCase_008274_2 "_functions.vector_relational.greaterThanEqual_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008274, VkglTestCase_008274_1, VkglTestCase_008274_2);

#define VkglTestCase_008275_1 "dEQP-GLES2.functional.shaders.constant_expressions.builtin_"
#define VkglTestCase_008275_2 "functions.vector_relational.greaterThanEqual_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008275, VkglTestCase_008275_1, VkglTestCase_008275_2);

#define VkglTestCase_008276_1 "dEQP-GLES2.functional.shaders.constant_expressions.builtin"
#define VkglTestCase_008276_2 "_functions.vector_relational.greaterThanEqual_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008276, VkglTestCase_008276_1, VkglTestCase_008276_2);

#define VkglTestCase_008277_1 "dEQP-GLES2.functional.shaders.constant_expressions.builtin_"
#define VkglTestCase_008277_2 "functions.vector_relational.greaterThanEqual_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008277, VkglTestCase_008277_1, VkglTestCase_008277_2);

#define VkglTestCase_008278_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008278_2 "uiltin_functions.vector_relational.equal_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008278, VkglTestCase_008278_1, VkglTestCase_008278_2);

#define VkglTestCase_008279_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008279_2 "iltin_functions.vector_relational.equal_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008279, VkglTestCase_008279_1, VkglTestCase_008279_2);

#define VkglTestCase_008280_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008280_2 "uiltin_functions.vector_relational.equal_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008280, VkglTestCase_008280_1, VkglTestCase_008280_2);

#define VkglTestCase_008281_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008281_2 "iltin_functions.vector_relational.equal_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008281, VkglTestCase_008281_1, VkglTestCase_008281_2);

#define VkglTestCase_008282_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008282_2 "uiltin_functions.vector_relational.equal_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008282, VkglTestCase_008282_1, VkglTestCase_008282_2);

#define VkglTestCase_008283_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008283_2 "iltin_functions.vector_relational.equal_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008283, VkglTestCase_008283_1, VkglTestCase_008283_2);

#define VkglTestCase_008284_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008284_2 "uiltin_functions.vector_relational.equal_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008284, VkglTestCase_008284_1, VkglTestCase_008284_2);

#define VkglTestCase_008285_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008285_2 "iltin_functions.vector_relational.equal_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008285, VkglTestCase_008285_1, VkglTestCase_008285_2);

#define VkglTestCase_008286_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008286_2 "uiltin_functions.vector_relational.equal_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008286, VkglTestCase_008286_1, VkglTestCase_008286_2);

#define VkglTestCase_008287_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008287_2 "iltin_functions.vector_relational.equal_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008287, VkglTestCase_008287_1, VkglTestCase_008287_2);

#define VkglTestCase_008288_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008288_2 "uiltin_functions.vector_relational.equal_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008288, VkglTestCase_008288_1, VkglTestCase_008288_2);

#define VkglTestCase_008289_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008289_2 "iltin_functions.vector_relational.equal_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008289, VkglTestCase_008289_1, VkglTestCase_008289_2);

#define VkglTestCase_008290_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008290_2 "uiltin_functions.vector_relational.equal_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008290, VkglTestCase_008290_1, VkglTestCase_008290_2);

#define VkglTestCase_008291_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008291_2 "iltin_functions.vector_relational.equal_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008291, VkglTestCase_008291_1, VkglTestCase_008291_2);

#define VkglTestCase_008292_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008292_2 "uiltin_functions.vector_relational.equal_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008292, VkglTestCase_008292_1, VkglTestCase_008292_2);

#define VkglTestCase_008293_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008293_2 "iltin_functions.vector_relational.equal_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008293, VkglTestCase_008293_1, VkglTestCase_008293_2);

#define VkglTestCase_008294_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008294_2 "uiltin_functions.vector_relational.equal_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008294, VkglTestCase_008294_1, VkglTestCase_008294_2);

#define VkglTestCase_008295_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008295_2 "iltin_functions.vector_relational.equal_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008295, VkglTestCase_008295_1, VkglTestCase_008295_2);

#define VkglTestCase_008296_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008296_2 "iltin_functions.vector_relational.notEqual_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008296, VkglTestCase_008296_1, VkglTestCase_008296_2);

#define VkglTestCase_008297_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008297_2 "ltin_functions.vector_relational.notEqual_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008297, VkglTestCase_008297_1, VkglTestCase_008297_2);

#define VkglTestCase_008298_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008298_2 "iltin_functions.vector_relational.notEqual_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008298, VkglTestCase_008298_1, VkglTestCase_008298_2);

#define VkglTestCase_008299_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008299_2 "ltin_functions.vector_relational.notEqual_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008299, VkglTestCase_008299_1, VkglTestCase_008299_2);

#define VkglTestCase_008300_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008300_2 "iltin_functions.vector_relational.notEqual_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008300, VkglTestCase_008300_1, VkglTestCase_008300_2);

#define VkglTestCase_008301_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008301_2 "ltin_functions.vector_relational.notEqual_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008301, VkglTestCase_008301_1, VkglTestCase_008301_2);

#define VkglTestCase_008302_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008302_2 "ltin_functions.vector_relational.notEqual_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008302, VkglTestCase_008302_1, VkglTestCase_008302_2);

#define VkglTestCase_008303_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008303_2 "tin_functions.vector_relational.notEqual_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008303, VkglTestCase_008303_1, VkglTestCase_008303_2);

#define VkglTestCase_008304_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008304_2 "ltin_functions.vector_relational.notEqual_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008304, VkglTestCase_008304_1, VkglTestCase_008304_2);

#define VkglTestCase_008305_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008305_2 "tin_functions.vector_relational.notEqual_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008305, VkglTestCase_008305_1, VkglTestCase_008305_2);

#define VkglTestCase_008306_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008306_2 "ltin_functions.vector_relational.notEqual_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008306, VkglTestCase_008306_1, VkglTestCase_008306_2);

#define VkglTestCase_008307_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008307_2 "tin_functions.vector_relational.notEqual_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008307, VkglTestCase_008307_1, VkglTestCase_008307_2);

#define VkglTestCase_008308_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008308_2 "ltin_functions.vector_relational.notEqual_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008308, VkglTestCase_008308_1, VkglTestCase_008308_2);

#define VkglTestCase_008309_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008309_2 "tin_functions.vector_relational.notEqual_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008309, VkglTestCase_008309_1, VkglTestCase_008309_2);

#define VkglTestCase_008310_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008310_2 "ltin_functions.vector_relational.notEqual_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008310, VkglTestCase_008310_1, VkglTestCase_008310_2);

#define VkglTestCase_008311_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008311_2 "tin_functions.vector_relational.notEqual_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008311, VkglTestCase_008311_1, VkglTestCase_008311_2);

#define VkglTestCase_008312_1 "dEQP-GLES2.functional.shaders.constant_expressions.bui"
#define VkglTestCase_008312_2 "ltin_functions.vector_relational.notEqual_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008312, VkglTestCase_008312_1, VkglTestCase_008312_2);

#define VkglTestCase_008313_1 "dEQP-GLES2.functional.shaders.constant_expressions.buil"
#define VkglTestCase_008313_2 "tin_functions.vector_relational.notEqual_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008313, VkglTestCase_008313_1, VkglTestCase_008313_2);

#define VkglTestCase_008314_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008314_2 "builtin_functions.vector_relational.any_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008314, VkglTestCase_008314_1, VkglTestCase_008314_2);

#define VkglTestCase_008315_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008315_2 "uiltin_functions.vector_relational.any_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008315, VkglTestCase_008315_1, VkglTestCase_008315_2);

#define VkglTestCase_008316_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008316_2 "builtin_functions.vector_relational.any_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008316, VkglTestCase_008316_1, VkglTestCase_008316_2);

#define VkglTestCase_008317_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008317_2 "uiltin_functions.vector_relational.any_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008317, VkglTestCase_008317_1, VkglTestCase_008317_2);

#define VkglTestCase_008318_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008318_2 "builtin_functions.vector_relational.any_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008318, VkglTestCase_008318_1, VkglTestCase_008318_2);

#define VkglTestCase_008319_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008319_2 "uiltin_functions.vector_relational.any_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008319, VkglTestCase_008319_1, VkglTestCase_008319_2);

#define VkglTestCase_008320_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008320_2 "builtin_functions.vector_relational.all_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008320, VkglTestCase_008320_1, VkglTestCase_008320_2);

#define VkglTestCase_008321_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008321_2 "uiltin_functions.vector_relational.all_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008321, VkglTestCase_008321_1, VkglTestCase_008321_2);

#define VkglTestCase_008322_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008322_2 "builtin_functions.vector_relational.all_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008322, VkglTestCase_008322_1, VkglTestCase_008322_2);

#define VkglTestCase_008323_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008323_2 "uiltin_functions.vector_relational.all_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008323, VkglTestCase_008323_1, VkglTestCase_008323_2);

#define VkglTestCase_008324_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008324_2 "builtin_functions.vector_relational.all_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008324, VkglTestCase_008324_1, VkglTestCase_008324_2);

#define VkglTestCase_008325_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008325_2 "uiltin_functions.vector_relational.all_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008325, VkglTestCase_008325_1, VkglTestCase_008325_2);

#define VkglTestCase_008326_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008326_2 "builtin_functions.vector_relational.not_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008326, VkglTestCase_008326_1, VkglTestCase_008326_2);

#define VkglTestCase_008327_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008327_2 "uiltin_functions.vector_relational.not_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008327, VkglTestCase_008327_1, VkglTestCase_008327_2);

#define VkglTestCase_008328_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008328_2 "builtin_functions.vector_relational.not_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008328, VkglTestCase_008328_1, VkglTestCase_008328_2);

#define VkglTestCase_008329_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008329_2 "uiltin_functions.vector_relational.not_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008329, VkglTestCase_008329_1, VkglTestCase_008329_2);

#define VkglTestCase_008330_1 "dEQP-GLES2.functional.shaders.constant_expressions."
#define VkglTestCase_008330_2 "builtin_functions.vector_relational.not_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008330, VkglTestCase_008330_1, VkglTestCase_008330_2);

#define VkglTestCase_008331_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008331_2 "uiltin_functions.vector_relational.not_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20009TestSuite, TestCase_008331, VkglTestCase_008331_1, VkglTestCase_008331_2);
