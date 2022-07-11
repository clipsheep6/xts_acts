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
#include "../ActsDeqpgles20003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002169_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002169_2 "tions.invalid.break_in_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002169, VkglTestCase_002169_1, VkglTestCase_002169_2);

#define VkglTestCase_002170_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002170_2 "ions.invalid.break_in_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002170, VkglTestCase_002170_1, VkglTestCase_002170_2);

#define VkglTestCase_002171_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002171_2 "ions.invalid.continue_in_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002171, VkglTestCase_002171_1, VkglTestCase_002171_2);

#define VkglTestCase_002172_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002172_2 "ons.invalid.continue_in_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002172, VkglTestCase_002172_1, VkglTestCase_002172_2);

#define VkglTestCase_002173_1 "dEQP-GLES2.functional.shaders.functions.inv"
#define VkglTestCase_002173_2 "alid.return_value_from_void_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002173, VkglTestCase_002173_1, VkglTestCase_002173_2);

#define VkglTestCase_002174_1 "dEQP-GLES2.functional.shaders.functions.inva"
#define VkglTestCase_002174_2 "lid.return_value_from_void_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002174, VkglTestCase_002174_1, VkglTestCase_002174_2);

#define VkglTestCase_002175_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002175_2 "ions.invalid.extra_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002175, VkglTestCase_002175_1, VkglTestCase_002175_2);

#define VkglTestCase_002176_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002176_2 "ons.invalid.extra_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002176, VkglTestCase_002176_1, VkglTestCase_002176_2);

#define VkglTestCase_002177_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002177_2 "ons.invalid.missing_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002177, VkglTestCase_002177_1, VkglTestCase_002177_2);

#define VkglTestCase_002178_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002178_2 "ns.invalid.missing_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002178, VkglTestCase_002178_1, VkglTestCase_002178_2);

#define VkglTestCase_002179_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002179_2 "s.invalid.missing_argument_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002179, VkglTestCase_002179_1, VkglTestCase_002179_2);

#define VkglTestCase_002180_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002180_2 ".invalid.missing_argument_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002180, VkglTestCase_002180_1, VkglTestCase_002180_2);

#define VkglTestCase_002181_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002181_2 "invalid.argument_basetype_mismatch_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002181, VkglTestCase_002181_1, VkglTestCase_002181_2);

#define VkglTestCase_002182_1 "dEQP-GLES2.functional.shaders.functions.i"
#define VkglTestCase_002182_2 "nvalid.argument_basetype_mismatch_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002182, VkglTestCase_002182_1, VkglTestCase_002182_2);

#define VkglTestCase_002183_1 "dEQP-GLES2.functional.shaders.functions.inv"
#define VkglTestCase_002183_2 "alid.argument_scalar_vector_mismatch_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002183, VkglTestCase_002183_1, VkglTestCase_002183_2);

#define VkglTestCase_002184_1 "dEQP-GLES2.functional.shaders.functions.inva"
#define VkglTestCase_002184_2 "lid.argument_scalar_vector_mismatch_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002184, VkglTestCase_002184_1, VkglTestCase_002184_2);

#define VkglTestCase_002185_1 "dEQP-GLES2.functional.shaders.functions.in"
#define VkglTestCase_002185_2 "valid.argument_vector_size_mismatch_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002185, VkglTestCase_002185_1, VkglTestCase_002185_2);

#define VkglTestCase_002186_1 "dEQP-GLES2.functional.shaders.functions.inv"
#define VkglTestCase_002186_2 "alid.argument_vector_size_mismatch_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002186, VkglTestCase_002186_1, VkglTestCase_002186_2);

#define VkglTestCase_002187_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002187_2 "ons.invalid.duplicate_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002187, VkglTestCase_002187_1, VkglTestCase_002187_2);

#define VkglTestCase_002188_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002188_2 "ns.invalid.duplicate_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002188, VkglTestCase_002188_1, VkglTestCase_002188_2);

#define VkglTestCase_002189_1 "dEQP-GLES2.functional.shaders.functions.in"
#define VkglTestCase_002189_2 "valid.prototype_mismatch_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002189, VkglTestCase_002189_1, VkglTestCase_002189_2);

#define VkglTestCase_002190_1 "dEQP-GLES2.functional.shaders.functions.inv"
#define VkglTestCase_002190_2 "alid.prototype_mismatch_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002190, VkglTestCase_002190_1, VkglTestCase_002190_2);

#define VkglTestCase_002191_1 "dEQP-GLES2.functional.shaders.functions.inv"
#define VkglTestCase_002191_2 "alid.prototype_unspecified_array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002191, VkglTestCase_002191_1, VkglTestCase_002191_2);

#define VkglTestCase_002192_1 "dEQP-GLES2.functional.shaders.functions.inva"
#define VkglTestCase_002192_2 "lid.prototype_unspecified_array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002192, VkglTestCase_002192_1, VkglTestCase_002192_2);

#define VkglTestCase_002193_1 "dEQP-GLES2.functional.shaders.functions.inva"
#define VkglTestCase_002193_2 "lid.call_mismatch_argument_array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002193, VkglTestCase_002193_1, VkglTestCase_002193_2);

#define VkglTestCase_002194_1 "dEQP-GLES2.functional.shaders.functions.inval"
#define VkglTestCase_002194_2 "id.call_mismatch_argument_array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002194, VkglTestCase_002194_1, VkglTestCase_002194_2);

#define VkglTestCase_002195_1 "dEQP-GLES2.functional.shaders.functions.inva"
#define VkglTestCase_002195_2 "lid.prototype_mismatch_argument_const_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002195, VkglTestCase_002195_1, VkglTestCase_002195_2);

#define VkglTestCase_002196_1 "dEQP-GLES2.functional.shaders.functions.inval"
#define VkglTestCase_002196_2 "id.prototype_mismatch_argument_const_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002196, VkglTestCase_002196_1, VkglTestCase_002196_2);

#define VkglTestCase_002197_1 "dEQP-GLES2.functional.shaders.functions.invalid"
#define VkglTestCase_002197_2 ".prototype_mismatch_argument_array_const_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002197, VkglTestCase_002197_1, VkglTestCase_002197_2);

#define VkglTestCase_002198_1 "dEQP-GLES2.functional.shaders.functions.invalid."
#define VkglTestCase_002198_2 "prototype_mismatch_argument_array_const_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002198, VkglTestCase_002198_1, VkglTestCase_002198_2);

#define VkglTestCase_002199_1 "dEQP-GLES2.functional.shaders.functions.in"
#define VkglTestCase_002199_2 "valid.prototype_mismatch_array_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002199, VkglTestCase_002199_1, VkglTestCase_002199_2);

#define VkglTestCase_002200_1 "dEQP-GLES2.functional.shaders.functions.inv"
#define VkglTestCase_002200_2 "alid.prototype_mismatch_array_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002200, VkglTestCase_002200_1, VkglTestCase_002200_2);

#define VkglTestCase_002201_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002201_2 "ns.invalid.missing_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002201, VkglTestCase_002201_1, VkglTestCase_002201_2);

#define VkglTestCase_002202_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002202_2 "s.invalid.missing_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002202, VkglTestCase_002202_1, VkglTestCase_002202_2);

#define VkglTestCase_002203_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002203_2 "s.invalid.call_before_definition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002203, VkglTestCase_002203_1, VkglTestCase_002203_2);

#define VkglTestCase_002204_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002204_2 ".invalid.call_before_definition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002204, VkglTestCase_002204_1, VkglTestCase_002204_2);

#define VkglTestCase_002205_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002205_2 "s.invalid.return_array_in_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002205, VkglTestCase_002205_1, VkglTestCase_002205_2);

#define VkglTestCase_002206_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002206_2 ".invalid.return_array_in_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002206, VkglTestCase_002206_1, VkglTestCase_002206_2);

#define VkglTestCase_002207_1 "dEQP-GLES2.functional.shaders.functions.i"
#define VkglTestCase_002207_2 "nvalid.argument_precision_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002207, VkglTestCase_002207_1, VkglTestCase_002207_2);

#define VkglTestCase_002208_1 "dEQP-GLES2.functional.shaders.functions.in"
#define VkglTestCase_002208_2 "valid.argument_precision_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002208, VkglTestCase_002208_1, VkglTestCase_002208_2);

#define VkglTestCase_002209_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002209_2 ".invalid.argument_in_out_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002209, VkglTestCase_002209_1, VkglTestCase_002209_2);

#define VkglTestCase_002210_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002210_2 "invalid.argument_in_out_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002210, VkglTestCase_002210_1, VkglTestCase_002210_2);

#define VkglTestCase_002211_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002211_2 "invalid.argument_in_inout_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002211, VkglTestCase_002211_1, VkglTestCase_002211_2);

#define VkglTestCase_002212_1 "dEQP-GLES2.functional.shaders.functions.i"
#define VkglTestCase_002212_2 "nvalid.argument_in_inout_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002212, VkglTestCase_002212_1, VkglTestCase_002212_2);

#define VkglTestCase_002213_1 "dEQP-GLES2.functional.shaders.functions.i"
#define VkglTestCase_002213_2 "nvalid.argument_out_inout_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002213, VkglTestCase_002213_1, VkglTestCase_002213_2);

#define VkglTestCase_002214_1 "dEQP-GLES2.functional.shaders.functions.in"
#define VkglTestCase_002214_2 "valid.argument_out_inout_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002214, VkglTestCase_002214_1, VkglTestCase_002214_2);

#define VkglTestCase_002215_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002215_2 "ns.invalid.return_type_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002215, VkglTestCase_002215_1, VkglTestCase_002215_2);

#define VkglTestCase_002216_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002216_2 "s.invalid.return_type_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002216, VkglTestCase_002216_1, VkglTestCase_002216_2);

#define VkglTestCase_002217_1 "dEQP-GLES2.functional.shaders.functions.in"
#define VkglTestCase_002217_2 "valid.return_type_precision_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002217, VkglTestCase_002217_1, VkglTestCase_002217_2);

#define VkglTestCase_002218_1 "dEQP-GLES2.functional.shaders.functions.inv"
#define VkglTestCase_002218_2 "alid.return_type_precision_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002218, VkglTestCase_002218_1, VkglTestCase_002218_2);

#define VkglTestCase_002219_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002219_2 "invalid.return_type_const_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002219, VkglTestCase_002219_1, VkglTestCase_002219_2);

#define VkglTestCase_002220_1 "dEQP-GLES2.functional.shaders.functions.i"
#define VkglTestCase_002220_2 "nvalid.return_type_const_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002220, VkglTestCase_002220_1, VkglTestCase_002220_2);

#define VkglTestCase_002221_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002221_2 "ns.invalid.return_without_value_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002221, VkglTestCase_002221_1, VkglTestCase_002221_2);

#define VkglTestCase_002222_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002222_2 "s.invalid.return_without_value_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002222, VkglTestCase_002222_1, VkglTestCase_002222_2);

#define VkglTestCase_002223_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002223_2 "invalid.local_function_definition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002223, VkglTestCase_002223_1, VkglTestCase_002223_2);

#define VkglTestCase_002224_1 "dEQP-GLES2.functional.shaders.functions.i"
#define VkglTestCase_002224_2 "nvalid.local_function_definition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002224, VkglTestCase_002224_1, VkglTestCase_002224_2);

#define VkglTestCase_002225_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002225_2 "ons.invalid.name_type_conflict_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002225, VkglTestCase_002225_1, VkglTestCase_002225_2);

#define VkglTestCase_002226_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002226_2 "ns.invalid.name_type_conflict_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002226, VkglTestCase_002226_1, VkglTestCase_002226_2);

#define VkglTestCase_002227_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002227_2 "tions.invalid.const_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002227, VkglTestCase_002227_1, VkglTestCase_002227_2);

#define VkglTestCase_002228_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002228_2 "ions.invalid.const_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002228, VkglTestCase_002228_1, VkglTestCase_002228_2);

#define VkglTestCase_002229_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002229_2 "tions.invalid.uniform_local_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002229, VkglTestCase_002229_1, VkglTestCase_002229_2);

#define VkglTestCase_002230_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002230_2 "ions.invalid.uniform_local_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002230, VkglTestCase_002230_1, VkglTestCase_002230_2);

#define VkglTestCase_002231_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002231_2 "tions.invalid.varying_local_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002231, VkglTestCase_002231_1, VkglTestCase_002231_2);

#define VkglTestCase_002232_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002232_2 "ions.invalid.varying_local_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002232, VkglTestCase_002232_1, VkglTestCase_002232_2);

#define VkglTestCase_002233_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002233_2 "ions.invalid.attribute_local_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002233, VkglTestCase_002233_1, VkglTestCase_002233_2);

#define VkglTestCase_002234_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002234_2 "ons.invalid.attribute_local_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002234, VkglTestCase_002234_1, VkglTestCase_002234_2);

#define VkglTestCase_002235_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002235_2 "ions.invalid.uniform_argument_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002235, VkglTestCase_002235_1, VkglTestCase_002235_2);

#define VkglTestCase_002236_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002236_2 "ons.invalid.uniform_argument_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002236, VkglTestCase_002236_1, VkglTestCase_002236_2);

#define VkglTestCase_002237_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002237_2 "ns.invalid.attribute_argument_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002237, VkglTestCase_002237_1, VkglTestCase_002237_2);

#define VkglTestCase_002238_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002238_2 "s.invalid.attribute_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002238, VkglTestCase_002238_1, VkglTestCase_002238_2);

#define VkglTestCase_002239_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002239_2 ".invalid.attribute_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002239, VkglTestCase_002239_1, VkglTestCase_002239_2);

#define VkglTestCase_002240_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002240_2 ".invalid.main_invalid_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002240, VkglTestCase_002240_1, VkglTestCase_002240_2);

#define VkglTestCase_002241_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002241_2 "invalid.main_invalid_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002241, VkglTestCase_002241_1, VkglTestCase_002241_2);

#define VkglTestCase_002242_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002242_2 "ons.invalid.main_has_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002242, VkglTestCase_002242_1, VkglTestCase_002242_2);

#define VkglTestCase_002243_1 "dEQP-GLES2.functional.shaders.functio"
#define VkglTestCase_002243_2 "ns.invalid.main_has_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002243, VkglTestCase_002243_1, VkglTestCase_002243_2);

#define VkglTestCase_002244_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002244_2 ".invalid.main_missing_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002244, VkglTestCase_002244_1, VkglTestCase_002244_2);

#define VkglTestCase_002245_1 "dEQP-GLES2.functional.shaders.functions."
#define VkglTestCase_002245_2 "invalid.main_missing_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002245, VkglTestCase_002245_1, VkglTestCase_002245_2);

#define VkglTestCase_002246_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002246_2 "ions.invalid.write_const_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002246, VkglTestCase_002246_1, VkglTestCase_002246_2);

#define VkglTestCase_002247_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002247_2 "ons.invalid.write_const_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002247, VkglTestCase_002247_1, VkglTestCase_002247_2);

#define VkglTestCase_002248_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002248_2 "s.invalid.write_const_array_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002248, VkglTestCase_002248_1, VkglTestCase_002248_2);

#define VkglTestCase_002249_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002249_2 ".invalid.write_const_array_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002249, VkglTestCase_002249_1, VkglTestCase_002249_2);

#define VkglTestCase_002250_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002250_2 "ions.invalid.modify_const_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002250, VkglTestCase_002250_1, VkglTestCase_002250_2);

#define VkglTestCase_002251_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002251_2 "ons.invalid.modify_const_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20003TestSuite, TestCase_002251, VkglTestCase_002251_1, VkglTestCase_002251_2);
