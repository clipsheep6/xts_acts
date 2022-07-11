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
#include "../ActsDeqpgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002179_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002179_2 "ns.matrix_to_matrix.mat4_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002179, VkglTestCase_002179_1, VkglTestCase_002179_2);

#define VkglTestCase_002180_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002180_2 "s.matrix_to_matrix.mat4_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002180, VkglTestCase_002180_1, VkglTestCase_002180_2);

#define VkglTestCase_002181_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002181_2 "s.matrix_to_matrix.mat4_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002181, VkglTestCase_002181_1, VkglTestCase_002181_2);

#define VkglTestCase_002182_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002182_2 ".matrix_to_matrix.mat4_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002182, VkglTestCase_002182_1, VkglTestCase_002182_2);

#define VkglTestCase_002183_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002183_2 "s.matrix_to_matrix.mat4_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002183, VkglTestCase_002183_1, VkglTestCase_002183_2);

#define VkglTestCase_002184_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002184_2 ".matrix_to_matrix.mat4_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002184, VkglTestCase_002184_1, VkglTestCase_002184_2);

#define VkglTestCase_002185_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002185_2 "s.matrix_to_matrix.mat4_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002185, VkglTestCase_002185_1, VkglTestCase_002185_2);

#define VkglTestCase_002186_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002186_2 ".matrix_to_matrix.mat4_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002186, VkglTestCase_002186_1, VkglTestCase_002186_2);

#define VkglTestCase_002187_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002187_2 "ns.matrix_to_matrix.mat4_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002187, VkglTestCase_002187_1, VkglTestCase_002187_2);

#define VkglTestCase_002188_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002188_2 "s.matrix_to_matrix.mat4_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002188, VkglTestCase_002188_1, VkglTestCase_002188_2);

#define VkglTestCase_002189_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002189_2 "s.matrix_to_matrix.mat4_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002189, VkglTestCase_002189_1, VkglTestCase_002189_2);

#define VkglTestCase_002190_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002190_2 ".matrix_to_matrix.mat4_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002190, VkglTestCase_002190_1, VkglTestCase_002190_2);

#define VkglTestCase_002191_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002191_2 "s.matrix_to_matrix.mat4_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002191, VkglTestCase_002191_1, VkglTestCase_002191_2);

#define VkglTestCase_002192_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002192_2 ".matrix_to_matrix.mat4_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002192, VkglTestCase_002192_1, VkglTestCase_002192_2);

#define VkglTestCase_002193_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002193_2 "s.matrix_to_matrix.mat4_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002193, VkglTestCase_002193_1, VkglTestCase_002193_2);

#define VkglTestCase_002194_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002194_2 ".matrix_to_matrix.mat4_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002194, VkglTestCase_002194_1, VkglTestCase_002194_2);

#define VkglTestCase_002195_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002195_2 "ns.matrix_to_matrix.mat4_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002195, VkglTestCase_002195_1, VkglTestCase_002195_2);

#define VkglTestCase_002196_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002196_2 "s.matrix_to_matrix.mat4_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002196, VkglTestCase_002196_1, VkglTestCase_002196_2);

#define VkglTestCase_002197_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002197_2 "s.matrix_to_matrix.mat4x3_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002197, VkglTestCase_002197_1, VkglTestCase_002197_2);

#define VkglTestCase_002198_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002198_2 ".matrix_to_matrix.mat4x3_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002198, VkglTestCase_002198_1, VkglTestCase_002198_2);

#define VkglTestCase_002199_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002199_2 ".matrix_to_matrix.mat4x3_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002199, VkglTestCase_002199_1, VkglTestCase_002199_2);

#define VkglTestCase_002200_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002200_2 "matrix_to_matrix.mat4x3_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002200, VkglTestCase_002200_1, VkglTestCase_002200_2);

#define VkglTestCase_002201_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002201_2 ".matrix_to_matrix.mat4x3_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002201, VkglTestCase_002201_1, VkglTestCase_002201_2);

#define VkglTestCase_002202_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002202_2 "matrix_to_matrix.mat4x3_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002202, VkglTestCase_002202_1, VkglTestCase_002202_2);

#define VkglTestCase_002203_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002203_2 ".matrix_to_matrix.mat4x3_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002203, VkglTestCase_002203_1, VkglTestCase_002203_2);

#define VkglTestCase_002204_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002204_2 "matrix_to_matrix.mat4x3_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002204, VkglTestCase_002204_1, VkglTestCase_002204_2);

#define VkglTestCase_002205_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002205_2 "s.matrix_to_matrix.mat4x3_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002205, VkglTestCase_002205_1, VkglTestCase_002205_2);

#define VkglTestCase_002206_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002206_2 ".matrix_to_matrix.mat4x3_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002206, VkglTestCase_002206_1, VkglTestCase_002206_2);

#define VkglTestCase_002207_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002207_2 ".matrix_to_matrix.mat4x3_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002207, VkglTestCase_002207_1, VkglTestCase_002207_2);

#define VkglTestCase_002208_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002208_2 "matrix_to_matrix.mat4x3_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002208, VkglTestCase_002208_1, VkglTestCase_002208_2);

#define VkglTestCase_002209_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002209_2 ".matrix_to_matrix.mat4x3_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002209, VkglTestCase_002209_1, VkglTestCase_002209_2);

#define VkglTestCase_002210_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002210_2 "matrix_to_matrix.mat4x3_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002210, VkglTestCase_002210_1, VkglTestCase_002210_2);

#define VkglTestCase_002211_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002211_2 ".matrix_to_matrix.mat4x3_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002211, VkglTestCase_002211_1, VkglTestCase_002211_2);

#define VkglTestCase_002212_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002212_2 "matrix_to_matrix.mat4x3_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002212, VkglTestCase_002212_1, VkglTestCase_002212_2);

#define VkglTestCase_002213_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002213_2 "s.matrix_to_matrix.mat4x3_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002213, VkglTestCase_002213_1, VkglTestCase_002213_2);

#define VkglTestCase_002214_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002214_2 ".matrix_to_matrix.mat4x3_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002214, VkglTestCase_002214_1, VkglTestCase_002214_2);

#define VkglTestCase_002215_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002215_2 "s.matrix_to_matrix.mat4x2_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002215, VkglTestCase_002215_1, VkglTestCase_002215_2);

#define VkglTestCase_002216_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002216_2 ".matrix_to_matrix.mat4x2_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002216, VkglTestCase_002216_1, VkglTestCase_002216_2);

#define VkglTestCase_002217_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002217_2 ".matrix_to_matrix.mat4x2_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002217, VkglTestCase_002217_1, VkglTestCase_002217_2);

#define VkglTestCase_002218_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002218_2 "matrix_to_matrix.mat4x2_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002218, VkglTestCase_002218_1, VkglTestCase_002218_2);

#define VkglTestCase_002219_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002219_2 ".matrix_to_matrix.mat4x2_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002219, VkglTestCase_002219_1, VkglTestCase_002219_2);

#define VkglTestCase_002220_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002220_2 "matrix_to_matrix.mat4x2_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002220, VkglTestCase_002220_1, VkglTestCase_002220_2);

#define VkglTestCase_002221_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002221_2 ".matrix_to_matrix.mat4x2_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002221, VkglTestCase_002221_1, VkglTestCase_002221_2);

#define VkglTestCase_002222_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002222_2 "matrix_to_matrix.mat4x2_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002222, VkglTestCase_002222_1, VkglTestCase_002222_2);

#define VkglTestCase_002223_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002223_2 "s.matrix_to_matrix.mat4x2_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002223, VkglTestCase_002223_1, VkglTestCase_002223_2);

#define VkglTestCase_002224_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002224_2 ".matrix_to_matrix.mat4x2_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002224, VkglTestCase_002224_1, VkglTestCase_002224_2);

#define VkglTestCase_002225_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002225_2 ".matrix_to_matrix.mat4x2_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002225, VkglTestCase_002225_1, VkglTestCase_002225_2);

#define VkglTestCase_002226_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002226_2 "matrix_to_matrix.mat4x2_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002226, VkglTestCase_002226_1, VkglTestCase_002226_2);

#define VkglTestCase_002227_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002227_2 ".matrix_to_matrix.mat4x2_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002227, VkglTestCase_002227_1, VkglTestCase_002227_2);

#define VkglTestCase_002228_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002228_2 "matrix_to_matrix.mat4x2_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002228, VkglTestCase_002228_1, VkglTestCase_002228_2);

#define VkglTestCase_002229_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002229_2 ".matrix_to_matrix.mat4x2_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002229, VkglTestCase_002229_1, VkglTestCase_002229_2);

#define VkglTestCase_002230_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002230_2 "matrix_to_matrix.mat4x2_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002230, VkglTestCase_002230_1, VkglTestCase_002230_2);

#define VkglTestCase_002231_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002231_2 "s.matrix_to_matrix.mat4x2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002231, VkglTestCase_002231_1, VkglTestCase_002231_2);

#define VkglTestCase_002232_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002232_2 ".matrix_to_matrix.mat4x2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002232, VkglTestCase_002232_1, VkglTestCase_002232_2);

#define VkglTestCase_002233_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002233_2 "s.matrix_to_matrix.mat3x4_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002233, VkglTestCase_002233_1, VkglTestCase_002233_2);

#define VkglTestCase_002234_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002234_2 ".matrix_to_matrix.mat3x4_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002234, VkglTestCase_002234_1, VkglTestCase_002234_2);

#define VkglTestCase_002235_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002235_2 ".matrix_to_matrix.mat3x4_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002235, VkglTestCase_002235_1, VkglTestCase_002235_2);

#define VkglTestCase_002236_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002236_2 "matrix_to_matrix.mat3x4_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002236, VkglTestCase_002236_1, VkglTestCase_002236_2);

#define VkglTestCase_002237_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002237_2 ".matrix_to_matrix.mat3x4_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002237, VkglTestCase_002237_1, VkglTestCase_002237_2);

#define VkglTestCase_002238_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002238_2 "matrix_to_matrix.mat3x4_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002238, VkglTestCase_002238_1, VkglTestCase_002238_2);

#define VkglTestCase_002239_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002239_2 ".matrix_to_matrix.mat3x4_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002239, VkglTestCase_002239_1, VkglTestCase_002239_2);

#define VkglTestCase_002240_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002240_2 "matrix_to_matrix.mat3x4_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002240, VkglTestCase_002240_1, VkglTestCase_002240_2);

#define VkglTestCase_002241_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002241_2 "s.matrix_to_matrix.mat3x4_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002241, VkglTestCase_002241_1, VkglTestCase_002241_2);

#define VkglTestCase_002242_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002242_2 ".matrix_to_matrix.mat3x4_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002242, VkglTestCase_002242_1, VkglTestCase_002242_2);

#define VkglTestCase_002243_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002243_2 ".matrix_to_matrix.mat3x4_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002243, VkglTestCase_002243_1, VkglTestCase_002243_2);

#define VkglTestCase_002244_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002244_2 "matrix_to_matrix.mat3x4_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002244, VkglTestCase_002244_1, VkglTestCase_002244_2);

#define VkglTestCase_002245_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002245_2 ".matrix_to_matrix.mat3x4_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002245, VkglTestCase_002245_1, VkglTestCase_002245_2);

#define VkglTestCase_002246_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002246_2 "matrix_to_matrix.mat3x4_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002246, VkglTestCase_002246_1, VkglTestCase_002246_2);

#define VkglTestCase_002247_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002247_2 ".matrix_to_matrix.mat3x4_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002247, VkglTestCase_002247_1, VkglTestCase_002247_2);

#define VkglTestCase_002248_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002248_2 "matrix_to_matrix.mat3x4_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002248, VkglTestCase_002248_1, VkglTestCase_002248_2);

#define VkglTestCase_002249_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002249_2 "s.matrix_to_matrix.mat3x4_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002249, VkglTestCase_002249_1, VkglTestCase_002249_2);

#define VkglTestCase_002250_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002250_2 ".matrix_to_matrix.mat3x4_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002250, VkglTestCase_002250_1, VkglTestCase_002250_2);

#define VkglTestCase_002251_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002251_2 "ns.matrix_to_matrix.mat3_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002251, VkglTestCase_002251_1, VkglTestCase_002251_2);

#define VkglTestCase_002252_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002252_2 "s.matrix_to_matrix.mat3_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002252, VkglTestCase_002252_1, VkglTestCase_002252_2);

#define VkglTestCase_002253_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002253_2 "s.matrix_to_matrix.mat3_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002253, VkglTestCase_002253_1, VkglTestCase_002253_2);

#define VkglTestCase_002254_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002254_2 ".matrix_to_matrix.mat3_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002254, VkglTestCase_002254_1, VkglTestCase_002254_2);

#define VkglTestCase_002255_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002255_2 "s.matrix_to_matrix.mat3_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002255, VkglTestCase_002255_1, VkglTestCase_002255_2);

#define VkglTestCase_002256_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002256_2 ".matrix_to_matrix.mat3_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002256, VkglTestCase_002256_1, VkglTestCase_002256_2);

#define VkglTestCase_002257_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002257_2 "s.matrix_to_matrix.mat3_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002257, VkglTestCase_002257_1, VkglTestCase_002257_2);

#define VkglTestCase_002258_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002258_2 ".matrix_to_matrix.mat3_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002258, VkglTestCase_002258_1, VkglTestCase_002258_2);

#define VkglTestCase_002259_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002259_2 "ns.matrix_to_matrix.mat3_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002259, VkglTestCase_002259_1, VkglTestCase_002259_2);

#define VkglTestCase_002260_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002260_2 "s.matrix_to_matrix.mat3_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002260, VkglTestCase_002260_1, VkglTestCase_002260_2);

#define VkglTestCase_002261_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002261_2 "s.matrix_to_matrix.mat3_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002261, VkglTestCase_002261_1, VkglTestCase_002261_2);

#define VkglTestCase_002262_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002262_2 ".matrix_to_matrix.mat3_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002262, VkglTestCase_002262_1, VkglTestCase_002262_2);

#define VkglTestCase_002263_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002263_2 "s.matrix_to_matrix.mat3_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002263, VkglTestCase_002263_1, VkglTestCase_002263_2);

#define VkglTestCase_002264_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002264_2 ".matrix_to_matrix.mat3_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002264, VkglTestCase_002264_1, VkglTestCase_002264_2);

#define VkglTestCase_002265_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002265_2 "s.matrix_to_matrix.mat3_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002265, VkglTestCase_002265_1, VkglTestCase_002265_2);

#define VkglTestCase_002266_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002266_2 ".matrix_to_matrix.mat3_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002266, VkglTestCase_002266_1, VkglTestCase_002266_2);

#define VkglTestCase_002267_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002267_2 "ns.matrix_to_matrix.mat3_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002267, VkglTestCase_002267_1, VkglTestCase_002267_2);

#define VkglTestCase_002268_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002268_2 "s.matrix_to_matrix.mat3_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002268, VkglTestCase_002268_1, VkglTestCase_002268_2);

#define VkglTestCase_002269_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002269_2 "s.matrix_to_matrix.mat3x2_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002269, VkglTestCase_002269_1, VkglTestCase_002269_2);

#define VkglTestCase_002270_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002270_2 ".matrix_to_matrix.mat3x2_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002270, VkglTestCase_002270_1, VkglTestCase_002270_2);

#define VkglTestCase_002271_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002271_2 ".matrix_to_matrix.mat3x2_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002271, VkglTestCase_002271_1, VkglTestCase_002271_2);

#define VkglTestCase_002272_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002272_2 "matrix_to_matrix.mat3x2_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002272, VkglTestCase_002272_1, VkglTestCase_002272_2);

#define VkglTestCase_002273_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002273_2 ".matrix_to_matrix.mat3x2_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002273, VkglTestCase_002273_1, VkglTestCase_002273_2);

#define VkglTestCase_002274_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002274_2 "matrix_to_matrix.mat3x2_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002274, VkglTestCase_002274_1, VkglTestCase_002274_2);

#define VkglTestCase_002275_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002275_2 ".matrix_to_matrix.mat3x2_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002275, VkglTestCase_002275_1, VkglTestCase_002275_2);

#define VkglTestCase_002276_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002276_2 "matrix_to_matrix.mat3x2_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002276, VkglTestCase_002276_1, VkglTestCase_002276_2);

#define VkglTestCase_002277_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002277_2 "s.matrix_to_matrix.mat3x2_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002277, VkglTestCase_002277_1, VkglTestCase_002277_2);

#define VkglTestCase_002278_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002278_2 ".matrix_to_matrix.mat3x2_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002278, VkglTestCase_002278_1, VkglTestCase_002278_2);

#define VkglTestCase_002279_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002279_2 ".matrix_to_matrix.mat3x2_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002279, VkglTestCase_002279_1, VkglTestCase_002279_2);

#define VkglTestCase_002280_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002280_2 "matrix_to_matrix.mat3x2_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002280, VkglTestCase_002280_1, VkglTestCase_002280_2);

#define VkglTestCase_002281_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002281_2 ".matrix_to_matrix.mat3x2_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002281, VkglTestCase_002281_1, VkglTestCase_002281_2);

#define VkglTestCase_002282_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002282_2 "matrix_to_matrix.mat3x2_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002282, VkglTestCase_002282_1, VkglTestCase_002282_2);

#define VkglTestCase_002283_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002283_2 ".matrix_to_matrix.mat3x2_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002283, VkglTestCase_002283_1, VkglTestCase_002283_2);

#define VkglTestCase_002284_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002284_2 "matrix_to_matrix.mat3x2_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002284, VkglTestCase_002284_1, VkglTestCase_002284_2);

#define VkglTestCase_002285_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002285_2 "s.matrix_to_matrix.mat3x2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002285, VkglTestCase_002285_1, VkglTestCase_002285_2);

#define VkglTestCase_002286_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002286_2 ".matrix_to_matrix.mat3x2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002286, VkglTestCase_002286_1, VkglTestCase_002286_2);

#define VkglTestCase_002287_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002287_2 "s.matrix_to_matrix.mat2x4_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002287, VkglTestCase_002287_1, VkglTestCase_002287_2);

#define VkglTestCase_002288_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002288_2 ".matrix_to_matrix.mat2x4_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002288, VkglTestCase_002288_1, VkglTestCase_002288_2);

#define VkglTestCase_002289_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002289_2 ".matrix_to_matrix.mat2x4_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002289, VkglTestCase_002289_1, VkglTestCase_002289_2);

#define VkglTestCase_002290_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002290_2 "matrix_to_matrix.mat2x4_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002290, VkglTestCase_002290_1, VkglTestCase_002290_2);

#define VkglTestCase_002291_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002291_2 ".matrix_to_matrix.mat2x4_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002291, VkglTestCase_002291_1, VkglTestCase_002291_2);

#define VkglTestCase_002292_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002292_2 "matrix_to_matrix.mat2x4_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002292, VkglTestCase_002292_1, VkglTestCase_002292_2);

#define VkglTestCase_002293_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002293_2 ".matrix_to_matrix.mat2x4_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002293, VkglTestCase_002293_1, VkglTestCase_002293_2);

#define VkglTestCase_002294_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002294_2 "matrix_to_matrix.mat2x4_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002294, VkglTestCase_002294_1, VkglTestCase_002294_2);

#define VkglTestCase_002295_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002295_2 "s.matrix_to_matrix.mat2x4_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002295, VkglTestCase_002295_1, VkglTestCase_002295_2);

#define VkglTestCase_002296_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002296_2 ".matrix_to_matrix.mat2x4_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002296, VkglTestCase_002296_1, VkglTestCase_002296_2);

#define VkglTestCase_002297_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002297_2 ".matrix_to_matrix.mat2x4_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002297, VkglTestCase_002297_1, VkglTestCase_002297_2);

#define VkglTestCase_002298_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002298_2 "matrix_to_matrix.mat2x4_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002298, VkglTestCase_002298_1, VkglTestCase_002298_2);

#define VkglTestCase_002299_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002299_2 ".matrix_to_matrix.mat2x4_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002299, VkglTestCase_002299_1, VkglTestCase_002299_2);

#define VkglTestCase_002300_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002300_2 "matrix_to_matrix.mat2x4_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002300, VkglTestCase_002300_1, VkglTestCase_002300_2);

#define VkglTestCase_002301_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002301_2 ".matrix_to_matrix.mat2x4_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002301, VkglTestCase_002301_1, VkglTestCase_002301_2);

#define VkglTestCase_002302_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002302_2 "matrix_to_matrix.mat2x4_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002302, VkglTestCase_002302_1, VkglTestCase_002302_2);

#define VkglTestCase_002303_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002303_2 "s.matrix_to_matrix.mat2x4_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002303, VkglTestCase_002303_1, VkglTestCase_002303_2);

#define VkglTestCase_002304_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002304_2 ".matrix_to_matrix.mat2x4_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002304, VkglTestCase_002304_1, VkglTestCase_002304_2);

#define VkglTestCase_002305_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002305_2 "s.matrix_to_matrix.mat2x3_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002305, VkglTestCase_002305_1, VkglTestCase_002305_2);

#define VkglTestCase_002306_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002306_2 ".matrix_to_matrix.mat2x3_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002306, VkglTestCase_002306_1, VkglTestCase_002306_2);

#define VkglTestCase_002307_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002307_2 ".matrix_to_matrix.mat2x3_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002307, VkglTestCase_002307_1, VkglTestCase_002307_2);

#define VkglTestCase_002308_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002308_2 "matrix_to_matrix.mat2x3_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002308, VkglTestCase_002308_1, VkglTestCase_002308_2);

#define VkglTestCase_002309_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002309_2 ".matrix_to_matrix.mat2x3_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002309, VkglTestCase_002309_1, VkglTestCase_002309_2);

#define VkglTestCase_002310_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002310_2 "matrix_to_matrix.mat2x3_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002310, VkglTestCase_002310_1, VkglTestCase_002310_2);

#define VkglTestCase_002311_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002311_2 ".matrix_to_matrix.mat2x3_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002311, VkglTestCase_002311_1, VkglTestCase_002311_2);

#define VkglTestCase_002312_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002312_2 "matrix_to_matrix.mat2x3_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002312, VkglTestCase_002312_1, VkglTestCase_002312_2);

#define VkglTestCase_002313_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002313_2 "s.matrix_to_matrix.mat2x3_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002313, VkglTestCase_002313_1, VkglTestCase_002313_2);

#define VkglTestCase_002314_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002314_2 ".matrix_to_matrix.mat2x3_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002314, VkglTestCase_002314_1, VkglTestCase_002314_2);

#define VkglTestCase_002315_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002315_2 ".matrix_to_matrix.mat2x3_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002315, VkglTestCase_002315_1, VkglTestCase_002315_2);

#define VkglTestCase_002316_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002316_2 "matrix_to_matrix.mat2x3_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002316, VkglTestCase_002316_1, VkglTestCase_002316_2);

#define VkglTestCase_002317_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002317_2 ".matrix_to_matrix.mat2x3_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002317, VkglTestCase_002317_1, VkglTestCase_002317_2);

#define VkglTestCase_002318_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002318_2 "matrix_to_matrix.mat2x3_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002318, VkglTestCase_002318_1, VkglTestCase_002318_2);

#define VkglTestCase_002319_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002319_2 ".matrix_to_matrix.mat2x3_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002319, VkglTestCase_002319_1, VkglTestCase_002319_2);

#define VkglTestCase_002320_1 "dEQP-GLES3.functional.shaders.conversions."
#define VkglTestCase_002320_2 "matrix_to_matrix.mat2x3_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002320, VkglTestCase_002320_1, VkglTestCase_002320_2);

#define VkglTestCase_002321_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002321_2 "s.matrix_to_matrix.mat2x3_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002321, VkglTestCase_002321_1, VkglTestCase_002321_2);

#define VkglTestCase_002322_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002322_2 ".matrix_to_matrix.mat2x3_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002322, VkglTestCase_002322_1, VkglTestCase_002322_2);

#define VkglTestCase_002323_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002323_2 "ns.matrix_to_matrix.mat2_to_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002323, VkglTestCase_002323_1, VkglTestCase_002323_2);

#define VkglTestCase_002324_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002324_2 "s.matrix_to_matrix.mat2_to_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002324, VkglTestCase_002324_1, VkglTestCase_002324_2);

#define VkglTestCase_002325_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002325_2 "s.matrix_to_matrix.mat2_to_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002325, VkglTestCase_002325_1, VkglTestCase_002325_2);

#define VkglTestCase_002326_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002326_2 ".matrix_to_matrix.mat2_to_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002326, VkglTestCase_002326_1, VkglTestCase_002326_2);

#define VkglTestCase_002327_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002327_2 "s.matrix_to_matrix.mat2_to_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002327, VkglTestCase_002327_1, VkglTestCase_002327_2);

#define VkglTestCase_002328_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002328_2 ".matrix_to_matrix.mat2_to_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002328, VkglTestCase_002328_1, VkglTestCase_002328_2);

#define VkglTestCase_002329_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002329_2 "s.matrix_to_matrix.mat2_to_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002329, VkglTestCase_002329_1, VkglTestCase_002329_2);

#define VkglTestCase_002330_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002330_2 ".matrix_to_matrix.mat2_to_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002330, VkglTestCase_002330_1, VkglTestCase_002330_2);

#define VkglTestCase_002331_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002331_2 "ns.matrix_to_matrix.mat2_to_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002331, VkglTestCase_002331_1, VkglTestCase_002331_2);

#define VkglTestCase_002332_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002332_2 "s.matrix_to_matrix.mat2_to_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002332, VkglTestCase_002332_1, VkglTestCase_002332_2);

#define VkglTestCase_002333_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002333_2 "s.matrix_to_matrix.mat2_to_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002333, VkglTestCase_002333_1, VkglTestCase_002333_2);

#define VkglTestCase_002334_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002334_2 ".matrix_to_matrix.mat2_to_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002334, VkglTestCase_002334_1, VkglTestCase_002334_2);

#define VkglTestCase_002335_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002335_2 "s.matrix_to_matrix.mat2_to_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002335, VkglTestCase_002335_1, VkglTestCase_002335_2);

#define VkglTestCase_002336_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002336_2 ".matrix_to_matrix.mat2_to_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002336, VkglTestCase_002336_1, VkglTestCase_002336_2);

#define VkglTestCase_002337_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002337_2 "s.matrix_to_matrix.mat2_to_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002337, VkglTestCase_002337_1, VkglTestCase_002337_2);

#define VkglTestCase_002338_1 "dEQP-GLES3.functional.shaders.conversions"
#define VkglTestCase_002338_2 ".matrix_to_matrix.mat2_to_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002338, VkglTestCase_002338_1, VkglTestCase_002338_2);

#define VkglTestCase_002339_1 "dEQP-GLES3.functional.shaders.conversio"
#define VkglTestCase_002339_2 "ns.matrix_to_matrix.mat2_to_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002339, VkglTestCase_002339_1, VkglTestCase_002339_2);

#define VkglTestCase_002340_1 "dEQP-GLES3.functional.shaders.conversion"
#define VkglTestCase_002340_2 "s.matrix_to_matrix.mat2_to_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002340, VkglTestCase_002340_1, VkglTestCase_002340_2);
