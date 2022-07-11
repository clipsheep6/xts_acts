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
#include "../ActsDeqpgles30015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014196_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014196_2 "x.sub.uniform.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014196, VkglTestCase_014196_1, VkglTestCase_014196_2);

#define VkglTestCase_014197_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014197_2 ".sub.uniform.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014197, VkglTestCase_014197_1, VkglTestCase_014197_2);

#define VkglTestCase_014198_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014198_2 "x.sub.uniform.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014198, VkglTestCase_014198_1, VkglTestCase_014198_2);

#define VkglTestCase_014199_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014199_2 ".sub.uniform.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014199, VkglTestCase_014199_1, VkglTestCase_014199_2);

#define VkglTestCase_014200_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014200_2 "sub.uniform.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014200, VkglTestCase_014200_1, VkglTestCase_014200_2);

#define VkglTestCase_014201_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014201_2 "ub.uniform.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014201, VkglTestCase_014201_1, VkglTestCase_014201_2);

#define VkglTestCase_014202_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014202_2 ".sub.uniform.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014202, VkglTestCase_014202_1, VkglTestCase_014202_2);

#define VkglTestCase_014203_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014203_2 "sub.uniform.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014203, VkglTestCase_014203_1, VkglTestCase_014203_2);

#define VkglTestCase_014204_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014204_2 ".sub.uniform.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014204, VkglTestCase_014204_1, VkglTestCase_014204_2);

#define VkglTestCase_014205_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014205_2 "sub.uniform.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014205, VkglTestCase_014205_1, VkglTestCase_014205_2);

#define VkglTestCase_014206_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014206_2 "x.sub.uniform.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014206, VkglTestCase_014206_1, VkglTestCase_014206_2);

#define VkglTestCase_014207_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014207_2 ".sub.uniform.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014207, VkglTestCase_014207_1, VkglTestCase_014207_2);

#define VkglTestCase_014208_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014208_2 ".sub.uniform.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014208, VkglTestCase_014208_1, VkglTestCase_014208_2);

#define VkglTestCase_014209_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014209_2 "sub.uniform.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014209, VkglTestCase_014209_1, VkglTestCase_014209_2);

#define VkglTestCase_014210_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014210_2 "sub.uniform.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014210, VkglTestCase_014210_1, VkglTestCase_014210_2);

#define VkglTestCase_014211_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014211_2 "ub.uniform.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014211, VkglTestCase_014211_1, VkglTestCase_014211_2);

#define VkglTestCase_014212_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014212_2 "ub.uniform.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014212, VkglTestCase_014212_1, VkglTestCase_014212_2);

#define VkglTestCase_014213_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014213_2 "b.uniform.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014213, VkglTestCase_014213_1, VkglTestCase_014213_2);

#define VkglTestCase_014214_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014214_2 "ub.uniform.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014214, VkglTestCase_014214_1, VkglTestCase_014214_2);

#define VkglTestCase_014215_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014215_2 "b.uniform.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014215, VkglTestCase_014215_1, VkglTestCase_014215_2);

#define VkglTestCase_014216_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014216_2 "sub.uniform.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014216, VkglTestCase_014216_1, VkglTestCase_014216_2);

#define VkglTestCase_014217_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014217_2 "ub.uniform.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014217, VkglTestCase_014217_1, VkglTestCase_014217_2);

#define VkglTestCase_014218_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014218_2 "sub.uniform.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014218, VkglTestCase_014218_1, VkglTestCase_014218_2);

#define VkglTestCase_014219_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014219_2 "ub.uniform.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014219, VkglTestCase_014219_1, VkglTestCase_014219_2);

#define VkglTestCase_014220_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014220_2 ".sub.uniform.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014220, VkglTestCase_014220_1, VkglTestCase_014220_2);

#define VkglTestCase_014221_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014221_2 "sub.uniform.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014221, VkglTestCase_014221_1, VkglTestCase_014221_2);

#define VkglTestCase_014222_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014222_2 "sub.uniform.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014222, VkglTestCase_014222_1, VkglTestCase_014222_2);

#define VkglTestCase_014223_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014223_2 "ub.uniform.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014223, VkglTestCase_014223_1, VkglTestCase_014223_2);

#define VkglTestCase_014224_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014224_2 "ub.uniform.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014224, VkglTestCase_014224_1, VkglTestCase_014224_2);

#define VkglTestCase_014225_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014225_2 "b.uniform.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014225, VkglTestCase_014225_1, VkglTestCase_014225_2);

#define VkglTestCase_014226_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014226_2 "ub.uniform.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014226, VkglTestCase_014226_1, VkglTestCase_014226_2);

#define VkglTestCase_014227_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014227_2 "b.uniform.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014227, VkglTestCase_014227_1, VkglTestCase_014227_2);

#define VkglTestCase_014228_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014228_2 "sub.uniform.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014228, VkglTestCase_014228_1, VkglTestCase_014228_2);

#define VkglTestCase_014229_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014229_2 "ub.uniform.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014229, VkglTestCase_014229_1, VkglTestCase_014229_2);

#define VkglTestCase_014230_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014230_2 "sub.uniform.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014230, VkglTestCase_014230_1, VkglTestCase_014230_2);

#define VkglTestCase_014231_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014231_2 "ub.uniform.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014231, VkglTestCase_014231_1, VkglTestCase_014231_2);

#define VkglTestCase_014232_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014232_2 ".sub.uniform.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014232, VkglTestCase_014232_1, VkglTestCase_014232_2);

#define VkglTestCase_014233_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014233_2 "sub.uniform.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014233, VkglTestCase_014233_1, VkglTestCase_014233_2);

#define VkglTestCase_014234_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014234_2 "sub.uniform.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014234, VkglTestCase_014234_1, VkglTestCase_014234_2);

#define VkglTestCase_014235_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014235_2 "ub.uniform.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014235, VkglTestCase_014235_1, VkglTestCase_014235_2);

#define VkglTestCase_014236_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014236_2 "ub.uniform.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014236, VkglTestCase_014236_1, VkglTestCase_014236_2);

#define VkglTestCase_014237_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014237_2 "b.uniform.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014237, VkglTestCase_014237_1, VkglTestCase_014237_2);

#define VkglTestCase_014238_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014238_2 "ub.uniform.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014238, VkglTestCase_014238_1, VkglTestCase_014238_2);

#define VkglTestCase_014239_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014239_2 "b.uniform.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014239, VkglTestCase_014239_1, VkglTestCase_014239_2);

#define VkglTestCase_014240_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014240_2 "sub.uniform.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014240, VkglTestCase_014240_1, VkglTestCase_014240_2);

#define VkglTestCase_014241_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014241_2 "ub.uniform.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014241, VkglTestCase_014241_1, VkglTestCase_014241_2);

#define VkglTestCase_014242_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014242_2 "sub.uniform.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014242, VkglTestCase_014242_1, VkglTestCase_014242_2);

#define VkglTestCase_014243_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014243_2 "ub.uniform.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014243, VkglTestCase_014243_1, VkglTestCase_014243_2);

#define VkglTestCase_014244_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014244_2 "x.sub.uniform.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014244, VkglTestCase_014244_1, VkglTestCase_014244_2);

#define VkglTestCase_014245_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014245_2 ".sub.uniform.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014245, VkglTestCase_014245_1, VkglTestCase_014245_2);

#define VkglTestCase_014246_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014246_2 "x.sub.uniform.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014246, VkglTestCase_014246_1, VkglTestCase_014246_2);

#define VkglTestCase_014247_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014247_2 ".sub.uniform.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014247, VkglTestCase_014247_1, VkglTestCase_014247_2);

#define VkglTestCase_014248_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014248_2 "sub.uniform.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014248, VkglTestCase_014248_1, VkglTestCase_014248_2);

#define VkglTestCase_014249_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014249_2 "ub.uniform.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014249, VkglTestCase_014249_1, VkglTestCase_014249_2);

#define VkglTestCase_014250_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014250_2 ".sub.uniform.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014250, VkglTestCase_014250_1, VkglTestCase_014250_2);

#define VkglTestCase_014251_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014251_2 "sub.uniform.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014251, VkglTestCase_014251_1, VkglTestCase_014251_2);

#define VkglTestCase_014252_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014252_2 ".sub.uniform.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014252, VkglTestCase_014252_1, VkglTestCase_014252_2);

#define VkglTestCase_014253_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014253_2 "sub.uniform.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014253, VkglTestCase_014253_1, VkglTestCase_014253_2);

#define VkglTestCase_014254_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014254_2 "x.sub.uniform.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014254, VkglTestCase_014254_1, VkglTestCase_014254_2);

#define VkglTestCase_014255_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014255_2 ".sub.uniform.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014255, VkglTestCase_014255_1, VkglTestCase_014255_2);

#define VkglTestCase_014256_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014256_2 ".sub.uniform.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014256, VkglTestCase_014256_1, VkglTestCase_014256_2);

#define VkglTestCase_014257_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014257_2 "sub.uniform.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014257, VkglTestCase_014257_1, VkglTestCase_014257_2);

#define VkglTestCase_014258_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014258_2 "sub.uniform.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014258, VkglTestCase_014258_1, VkglTestCase_014258_2);

#define VkglTestCase_014259_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014259_2 "ub.uniform.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014259, VkglTestCase_014259_1, VkglTestCase_014259_2);

#define VkglTestCase_014260_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014260_2 "ub.uniform.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014260, VkglTestCase_014260_1, VkglTestCase_014260_2);

#define VkglTestCase_014261_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014261_2 "b.uniform.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014261, VkglTestCase_014261_1, VkglTestCase_014261_2);

#define VkglTestCase_014262_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014262_2 "ub.uniform.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014262, VkglTestCase_014262_1, VkglTestCase_014262_2);

#define VkglTestCase_014263_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014263_2 "b.uniform.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014263, VkglTestCase_014263_1, VkglTestCase_014263_2);

#define VkglTestCase_014264_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014264_2 "sub.uniform.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014264, VkglTestCase_014264_1, VkglTestCase_014264_2);

#define VkglTestCase_014265_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014265_2 "ub.uniform.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014265, VkglTestCase_014265_1, VkglTestCase_014265_2);

#define VkglTestCase_014266_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014266_2 "sub.uniform.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014266, VkglTestCase_014266_1, VkglTestCase_014266_2);

#define VkglTestCase_014267_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014267_2 "ub.uniform.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014267, VkglTestCase_014267_1, VkglTestCase_014267_2);

#define VkglTestCase_014268_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014268_2 ".sub.uniform.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014268, VkglTestCase_014268_1, VkglTestCase_014268_2);

#define VkglTestCase_014269_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014269_2 "sub.uniform.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014269, VkglTestCase_014269_1, VkglTestCase_014269_2);

#define VkglTestCase_014270_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014270_2 "sub.uniform.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014270, VkglTestCase_014270_1, VkglTestCase_014270_2);

#define VkglTestCase_014271_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014271_2 "ub.uniform.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014271, VkglTestCase_014271_1, VkglTestCase_014271_2);

#define VkglTestCase_014272_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014272_2 "ub.uniform.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014272, VkglTestCase_014272_1, VkglTestCase_014272_2);

#define VkglTestCase_014273_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014273_2 "b.uniform.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014273, VkglTestCase_014273_1, VkglTestCase_014273_2);

#define VkglTestCase_014274_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014274_2 "ub.uniform.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014274, VkglTestCase_014274_1, VkglTestCase_014274_2);

#define VkglTestCase_014275_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014275_2 "b.uniform.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014275, VkglTestCase_014275_1, VkglTestCase_014275_2);

#define VkglTestCase_014276_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014276_2 "sub.uniform.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014276, VkglTestCase_014276_1, VkglTestCase_014276_2);

#define VkglTestCase_014277_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014277_2 "ub.uniform.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014277, VkglTestCase_014277_1, VkglTestCase_014277_2);

#define VkglTestCase_014278_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014278_2 "sub.uniform.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014278, VkglTestCase_014278_1, VkglTestCase_014278_2);

#define VkglTestCase_014279_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014279_2 "ub.uniform.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014279, VkglTestCase_014279_1, VkglTestCase_014279_2);

#define VkglTestCase_014280_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014280_2 ".sub.uniform.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014280, VkglTestCase_014280_1, VkglTestCase_014280_2);

#define VkglTestCase_014281_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014281_2 "sub.uniform.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014281, VkglTestCase_014281_1, VkglTestCase_014281_2);

#define VkglTestCase_014282_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014282_2 "sub.uniform.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014282, VkglTestCase_014282_1, VkglTestCase_014282_2);

#define VkglTestCase_014283_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014283_2 "ub.uniform.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014283, VkglTestCase_014283_1, VkglTestCase_014283_2);

#define VkglTestCase_014284_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014284_2 "ub.uniform.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014284, VkglTestCase_014284_1, VkglTestCase_014284_2);

#define VkglTestCase_014285_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014285_2 "b.uniform.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014285, VkglTestCase_014285_1, VkglTestCase_014285_2);

#define VkglTestCase_014286_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014286_2 "ub.uniform.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014286, VkglTestCase_014286_1, VkglTestCase_014286_2);

#define VkglTestCase_014287_1 "dEQP-GLES3.functional.shaders.matrix.su"
#define VkglTestCase_014287_2 "b.uniform.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014287, VkglTestCase_014287_1, VkglTestCase_014287_2);

#define VkglTestCase_014288_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014288_2 "sub.uniform.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014288, VkglTestCase_014288_1, VkglTestCase_014288_2);

#define VkglTestCase_014289_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014289_2 "ub.uniform.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014289, VkglTestCase_014289_1, VkglTestCase_014289_2);

#define VkglTestCase_014290_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014290_2 "sub.uniform.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014290, VkglTestCase_014290_1, VkglTestCase_014290_2);

#define VkglTestCase_014291_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014291_2 "ub.uniform.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014291, VkglTestCase_014291_1, VkglTestCase_014291_2);

#define VkglTestCase_014292_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014292_2 "x.sub.uniform.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014292, VkglTestCase_014292_1, VkglTestCase_014292_2);

#define VkglTestCase_014293_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014293_2 ".sub.uniform.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014293, VkglTestCase_014293_1, VkglTestCase_014293_2);

#define VkglTestCase_014294_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014294_2 "x.sub.uniform.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014294, VkglTestCase_014294_1, VkglTestCase_014294_2);

#define VkglTestCase_014295_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014295_2 ".sub.uniform.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014295, VkglTestCase_014295_1, VkglTestCase_014295_2);

#define VkglTestCase_014296_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014296_2 "sub.uniform.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014296, VkglTestCase_014296_1, VkglTestCase_014296_2);

#define VkglTestCase_014297_1 "dEQP-GLES3.functional.shaders.matrix.s"
#define VkglTestCase_014297_2 "ub.uniform.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014297, VkglTestCase_014297_1, VkglTestCase_014297_2);

#define VkglTestCase_014298_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014298_2 ".sub.uniform.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014298, VkglTestCase_014298_1, VkglTestCase_014298_2);

#define VkglTestCase_014299_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014299_2 "sub.uniform.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014299, VkglTestCase_014299_1, VkglTestCase_014299_2);

#define VkglTestCase_014300_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014300_2 ".sub.uniform.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014300, VkglTestCase_014300_1, VkglTestCase_014300_2);

#define VkglTestCase_014301_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014301_2 "sub.uniform.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014301, VkglTestCase_014301_1, VkglTestCase_014301_2);

#define VkglTestCase_014302_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014302_2 "x.sub.uniform.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014302, VkglTestCase_014302_1, VkglTestCase_014302_2);

#define VkglTestCase_014303_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014303_2 ".sub.uniform.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014303, VkglTestCase_014303_1, VkglTestCase_014303_2);
