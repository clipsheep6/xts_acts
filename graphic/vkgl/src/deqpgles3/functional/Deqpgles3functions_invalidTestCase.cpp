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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004237_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004237_2 "tions.invalid.break_in_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004237, VkglTestCase_004237_1, VkglTestCase_004237_2);

#define VkglTestCase_004238_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004238_2 "ions.invalid.break_in_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004238, VkglTestCase_004238_1, VkglTestCase_004238_2);

#define VkglTestCase_004239_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004239_2 "ions.invalid.continue_in_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004239, VkglTestCase_004239_1, VkglTestCase_004239_2);

#define VkglTestCase_004240_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004240_2 "ons.invalid.continue_in_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004240, VkglTestCase_004240_1, VkglTestCase_004240_2);

#define VkglTestCase_004241_1 "dEQP-GLES3.functional.shaders.functions.inv"
#define VkglTestCase_004241_2 "alid.return_value_from_void_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004241, VkglTestCase_004241_1, VkglTestCase_004241_2);

#define VkglTestCase_004242_1 "dEQP-GLES3.functional.shaders.functions.inva"
#define VkglTestCase_004242_2 "lid.return_value_from_void_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004242, VkglTestCase_004242_1, VkglTestCase_004242_2);

#define VkglTestCase_004243_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004243_2 "ions.invalid.extra_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004243, VkglTestCase_004243_1, VkglTestCase_004243_2);

#define VkglTestCase_004244_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004244_2 "ons.invalid.extra_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004244, VkglTestCase_004244_1, VkglTestCase_004244_2);

#define VkglTestCase_004245_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004245_2 "ons.invalid.missing_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004245, VkglTestCase_004245_1, VkglTestCase_004245_2);

#define VkglTestCase_004246_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004246_2 "ns.invalid.missing_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004246, VkglTestCase_004246_1, VkglTestCase_004246_2);

#define VkglTestCase_004247_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004247_2 "s.invalid.missing_argument_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004247, VkglTestCase_004247_1, VkglTestCase_004247_2);

#define VkglTestCase_004248_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004248_2 ".invalid.missing_argument_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004248, VkglTestCase_004248_1, VkglTestCase_004248_2);

#define VkglTestCase_004249_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004249_2 "invalid.argument_basetype_mismatch_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004249, VkglTestCase_004249_1, VkglTestCase_004249_2);

#define VkglTestCase_004250_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004250_2 "nvalid.argument_basetype_mismatch_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004250, VkglTestCase_004250_1, VkglTestCase_004250_2);

#define VkglTestCase_004251_1 "dEQP-GLES3.functional.shaders.functions.inv"
#define VkglTestCase_004251_2 "alid.argument_scalar_vector_mismatch_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004251, VkglTestCase_004251_1, VkglTestCase_004251_2);

#define VkglTestCase_004252_1 "dEQP-GLES3.functional.shaders.functions.inva"
#define VkglTestCase_004252_2 "lid.argument_scalar_vector_mismatch_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004252, VkglTestCase_004252_1, VkglTestCase_004252_2);

#define VkglTestCase_004253_1 "dEQP-GLES3.functional.shaders.functions.in"
#define VkglTestCase_004253_2 "valid.argument_vector_size_mismatch_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004253, VkglTestCase_004253_1, VkglTestCase_004253_2);

#define VkglTestCase_004254_1 "dEQP-GLES3.functional.shaders.functions.inv"
#define VkglTestCase_004254_2 "alid.argument_vector_size_mismatch_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004254, VkglTestCase_004254_1, VkglTestCase_004254_2);

#define VkglTestCase_004255_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004255_2 "ons.invalid.duplicate_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004255, VkglTestCase_004255_1, VkglTestCase_004255_2);

#define VkglTestCase_004256_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004256_2 "ns.invalid.duplicate_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004256, VkglTestCase_004256_1, VkglTestCase_004256_2);

#define VkglTestCase_004257_1 "dEQP-GLES3.functional.shaders.functions.in"
#define VkglTestCase_004257_2 "valid.prototype_mismatch_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004257, VkglTestCase_004257_1, VkglTestCase_004257_2);

#define VkglTestCase_004258_1 "dEQP-GLES3.functional.shaders.functions.inv"
#define VkglTestCase_004258_2 "alid.prototype_mismatch_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004258, VkglTestCase_004258_1, VkglTestCase_004258_2);

#define VkglTestCase_004259_1 "dEQP-GLES3.functional.shaders.functions.inv"
#define VkglTestCase_004259_2 "alid.prototype_unspecified_array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004259, VkglTestCase_004259_1, VkglTestCase_004259_2);

#define VkglTestCase_004260_1 "dEQP-GLES3.functional.shaders.functions.inva"
#define VkglTestCase_004260_2 "lid.prototype_unspecified_array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004260, VkglTestCase_004260_1, VkglTestCase_004260_2);

#define VkglTestCase_004261_1 "dEQP-GLES3.functional.shaders.functions.inva"
#define VkglTestCase_004261_2 "lid.call_mismatch_argument_array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004261, VkglTestCase_004261_1, VkglTestCase_004261_2);

#define VkglTestCase_004262_1 "dEQP-GLES3.functional.shaders.functions.inval"
#define VkglTestCase_004262_2 "id.call_mismatch_argument_array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004262, VkglTestCase_004262_1, VkglTestCase_004262_2);

#define VkglTestCase_004263_1 "dEQP-GLES3.functional.shaders.functions.inva"
#define VkglTestCase_004263_2 "lid.prototype_mismatch_argument_const_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004263, VkglTestCase_004263_1, VkglTestCase_004263_2);

#define VkglTestCase_004264_1 "dEQP-GLES3.functional.shaders.functions.inval"
#define VkglTestCase_004264_2 "id.prototype_mismatch_argument_const_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004264, VkglTestCase_004264_1, VkglTestCase_004264_2);

#define VkglTestCase_004265_1 "dEQP-GLES3.functional.shaders.functions.invalid"
#define VkglTestCase_004265_2 ".prototype_mismatch_argument_array_const_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004265, VkglTestCase_004265_1, VkglTestCase_004265_2);

#define VkglTestCase_004266_1 "dEQP-GLES3.functional.shaders.functions.invalid."
#define VkglTestCase_004266_2 "prototype_mismatch_argument_array_const_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004266, VkglTestCase_004266_1, VkglTestCase_004266_2);

#define VkglTestCase_004267_1 "dEQP-GLES3.functional.shaders.functions.in"
#define VkglTestCase_004267_2 "valid.prototype_mismatch_array_inout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004267, VkglTestCase_004267_1, VkglTestCase_004267_2);

#define VkglTestCase_004268_1 "dEQP-GLES3.functional.shaders.functions.inv"
#define VkglTestCase_004268_2 "alid.prototype_mismatch_array_inout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004268, VkglTestCase_004268_1, VkglTestCase_004268_2);

#define VkglTestCase_004269_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004269_2 "ns.invalid.missing_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004269, VkglTestCase_004269_1, VkglTestCase_004269_2);

#define VkglTestCase_004270_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004270_2 "s.invalid.missing_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004270, VkglTestCase_004270_1, VkglTestCase_004270_2);

#define VkglTestCase_004271_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004271_2 "s.invalid.call_before_definition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004271, VkglTestCase_004271_1, VkglTestCase_004271_2);

#define VkglTestCase_004272_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004272_2 ".invalid.call_before_definition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004272, VkglTestCase_004272_1, VkglTestCase_004272_2);

#define VkglTestCase_004273_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004273_2 "nvalid.argument_precision_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004273, VkglTestCase_004273_1, VkglTestCase_004273_2);

#define VkglTestCase_004274_1 "dEQP-GLES3.functional.shaders.functions.in"
#define VkglTestCase_004274_2 "valid.argument_precision_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004274, VkglTestCase_004274_1, VkglTestCase_004274_2);

#define VkglTestCase_004275_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004275_2 ".invalid.argument_in_out_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004275, VkglTestCase_004275_1, VkglTestCase_004275_2);

#define VkglTestCase_004276_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004276_2 "invalid.argument_in_out_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004276, VkglTestCase_004276_1, VkglTestCase_004276_2);

#define VkglTestCase_004277_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004277_2 "invalid.argument_in_inout_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004277, VkglTestCase_004277_1, VkglTestCase_004277_2);

#define VkglTestCase_004278_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004278_2 "nvalid.argument_in_inout_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004278, VkglTestCase_004278_1, VkglTestCase_004278_2);

#define VkglTestCase_004279_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004279_2 "nvalid.argument_out_inout_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004279, VkglTestCase_004279_1, VkglTestCase_004279_2);

#define VkglTestCase_004280_1 "dEQP-GLES3.functional.shaders.functions.in"
#define VkglTestCase_004280_2 "valid.argument_out_inout_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004280, VkglTestCase_004280_1, VkglTestCase_004280_2);

#define VkglTestCase_004281_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004281_2 "ns.invalid.return_type_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004281, VkglTestCase_004281_1, VkglTestCase_004281_2);

#define VkglTestCase_004282_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004282_2 "s.invalid.return_type_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004282, VkglTestCase_004282_1, VkglTestCase_004282_2);

#define VkglTestCase_004283_1 "dEQP-GLES3.functional.shaders.functions.in"
#define VkglTestCase_004283_2 "valid.return_type_precision_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004283, VkglTestCase_004283_1, VkglTestCase_004283_2);

#define VkglTestCase_004284_1 "dEQP-GLES3.functional.shaders.functions.inv"
#define VkglTestCase_004284_2 "alid.return_type_precision_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004284, VkglTestCase_004284_1, VkglTestCase_004284_2);

#define VkglTestCase_004285_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004285_2 "invalid.return_type_const_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004285, VkglTestCase_004285_1, VkglTestCase_004285_2);

#define VkglTestCase_004286_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004286_2 "nvalid.return_type_const_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004286, VkglTestCase_004286_1, VkglTestCase_004286_2);

#define VkglTestCase_004287_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004287_2 "ns.invalid.return_without_value_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004287, VkglTestCase_004287_1, VkglTestCase_004287_2);

#define VkglTestCase_004288_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004288_2 "s.invalid.return_without_value_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004288, VkglTestCase_004288_1, VkglTestCase_004288_2);

#define VkglTestCase_004289_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004289_2 ".invalid.local_function_prototype_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004289, VkglTestCase_004289_1, VkglTestCase_004289_2);

#define VkglTestCase_004290_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004290_2 "invalid.local_function_prototype_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004290, VkglTestCase_004290_1, VkglTestCase_004290_2);

#define VkglTestCase_004291_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004291_2 "invalid.local_function_definition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004291, VkglTestCase_004291_1, VkglTestCase_004291_2);

#define VkglTestCase_004292_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004292_2 "nvalid.local_function_definition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004292, VkglTestCase_004292_1, VkglTestCase_004292_2);

#define VkglTestCase_004293_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004293_2 "ons.invalid.name_type_conflict_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004293, VkglTestCase_004293_1, VkglTestCase_004293_2);

#define VkglTestCase_004294_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004294_2 "ns.invalid.name_type_conflict_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004294, VkglTestCase_004294_1, VkglTestCase_004294_2);

#define VkglTestCase_004295_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004295_2 "tions.invalid.const_overload_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004295, VkglTestCase_004295_1, VkglTestCase_004295_2);

#define VkglTestCase_004296_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004296_2 "ions.invalid.const_overload_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004296, VkglTestCase_004296_1, VkglTestCase_004296_2);

#define VkglTestCase_004297_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004297_2 "tions.invalid.uniform_local_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004297, VkglTestCase_004297_1, VkglTestCase_004297_2);

#define VkglTestCase_004298_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004298_2 "ions.invalid.uniform_local_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004298, VkglTestCase_004298_1, VkglTestCase_004298_2);

#define VkglTestCase_004299_1 "dEQP-GLES3.functional.shaders.f"
#define VkglTestCase_004299_2 "unctions.invalid.in_local_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004299, VkglTestCase_004299_1, VkglTestCase_004299_2);

#define VkglTestCase_004300_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004300_2 "nctions.invalid.in_local_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004300, VkglTestCase_004300_1, VkglTestCase_004300_2);

#define VkglTestCase_004301_1 "dEQP-GLES3.functional.shaders.fu"
#define VkglTestCase_004301_2 "nctions.invalid.out_local_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004301, VkglTestCase_004301_1, VkglTestCase_004301_2);

#define VkglTestCase_004302_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004302_2 "ctions.invalid.out_local_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004302, VkglTestCase_004302_1, VkglTestCase_004302_2);

#define VkglTestCase_004303_1 "dEQP-GLES3.functional.shaders.fun"
#define VkglTestCase_004303_2 "ctions.invalid.inout_local_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004303, VkglTestCase_004303_1, VkglTestCase_004303_2);

#define VkglTestCase_004304_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004304_2 "tions.invalid.inout_local_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004304, VkglTestCase_004304_1, VkglTestCase_004304_2);

#define VkglTestCase_004305_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004305_2 "ions.invalid.uniform_argument_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004305, VkglTestCase_004305_1, VkglTestCase_004305_2);

#define VkglTestCase_004306_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004306_2 "ons.invalid.uniform_argument_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004306, VkglTestCase_004306_1, VkglTestCase_004306_2);

#define VkglTestCase_004307_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004307_2 "ns.invalid.uniform_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004307, VkglTestCase_004307_1, VkglTestCase_004307_2);

#define VkglTestCase_004308_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004308_2 "s.invalid.uniform_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004308, VkglTestCase_004308_1, VkglTestCase_004308_2);

#define VkglTestCase_004309_1 "dEQP-GLES3.functional.shaders.func"
#define VkglTestCase_004309_2 "tions.invalid.in_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004309, VkglTestCase_004309_1, VkglTestCase_004309_2);

#define VkglTestCase_004310_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004310_2 "ions.invalid.in_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004310, VkglTestCase_004310_1, VkglTestCase_004310_2);

#define VkglTestCase_004311_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004311_2 "ions.invalid.out_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004311, VkglTestCase_004311_1, VkglTestCase_004311_2);

#define VkglTestCase_004312_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004312_2 "ons.invalid.out_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004312, VkglTestCase_004312_1, VkglTestCase_004312_2);

#define VkglTestCase_004313_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004313_2 "ons.invalid.inout_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004313, VkglTestCase_004313_1, VkglTestCase_004313_2);

#define VkglTestCase_004314_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004314_2 "ns.invalid.inout_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004314, VkglTestCase_004314_1, VkglTestCase_004314_2);

#define VkglTestCase_004315_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004315_2 ".invalid.main_invalid_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004315, VkglTestCase_004315_1, VkglTestCase_004315_2);

#define VkglTestCase_004316_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004316_2 "invalid.main_invalid_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004316, VkglTestCase_004316_1, VkglTestCase_004316_2);

#define VkglTestCase_004317_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004317_2 "ons.invalid.main_has_arguments_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004317, VkglTestCase_004317_1, VkglTestCase_004317_2);

#define VkglTestCase_004318_1 "dEQP-GLES3.functional.shaders.functio"
#define VkglTestCase_004318_2 "ns.invalid.main_has_arguments_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004318, VkglTestCase_004318_1, VkglTestCase_004318_2);

#define VkglTestCase_004319_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004319_2 ".invalid.main_missing_return_type_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004319, VkglTestCase_004319_1, VkglTestCase_004319_2);

#define VkglTestCase_004320_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004320_2 "invalid.main_missing_return_type_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004320, VkglTestCase_004320_1, VkglTestCase_004320_2);

#define VkglTestCase_004321_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004321_2 "ions.invalid.write_const_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004321, VkglTestCase_004321_1, VkglTestCase_004321_2);

#define VkglTestCase_004322_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004322_2 "ons.invalid.write_const_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004322, VkglTestCase_004322_1, VkglTestCase_004322_2);

#define VkglTestCase_004323_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004323_2 "s.invalid.write_const_array_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004323, VkglTestCase_004323_1, VkglTestCase_004323_2);

#define VkglTestCase_004324_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004324_2 ".invalid.write_const_array_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004324, VkglTestCase_004324_1, VkglTestCase_004324_2);

#define VkglTestCase_004325_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004325_2 "nvalid.use_const_arg_in_const_expr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004325, VkglTestCase_004325_1, VkglTestCase_004325_2);

#define VkglTestCase_004326_1 "dEQP-GLES3.functional.shaders.functions.in"
#define VkglTestCase_004326_2 "valid.use_const_arg_in_const_expr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004326, VkglTestCase_004326_1, VkglTestCase_004326_2);

#define VkglTestCase_004327_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004327_2 "nvalid.use_const_arg_as_array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004327, VkglTestCase_004327_1, VkglTestCase_004327_2);

#define VkglTestCase_004328_1 "dEQP-GLES3.functional.shaders.functions.in"
#define VkglTestCase_004328_2 "valid.use_const_arg_as_array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004328, VkglTestCase_004328_1, VkglTestCase_004328_2);

#define VkglTestCase_004329_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004329_2 "invalid.overload_builtin_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004329, VkglTestCase_004329_1, VkglTestCase_004329_2);

#define VkglTestCase_004330_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004330_2 "nvalid.overload_builtin_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004330, VkglTestCase_004330_1, VkglTestCase_004330_2);

#define VkglTestCase_004331_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004331_2 "invalid.redefine_builtin_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004331, VkglTestCase_004331_1, VkglTestCase_004331_2);

#define VkglTestCase_004332_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004332_2 "nvalid.redefine_builtin_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004332, VkglTestCase_004332_1, VkglTestCase_004332_2);

#define VkglTestCase_004333_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004333_2 "ions.invalid.basic_recursion_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004333, VkglTestCase_004333_1, VkglTestCase_004333_2);

#define VkglTestCase_004334_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004334_2 "ons.invalid.basic_recursion_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004334, VkglTestCase_004334_1, VkglTestCase_004334_2);

#define VkglTestCase_004335_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004335_2 "s.invalid.simple_tail_recursion_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004335, VkglTestCase_004335_1, VkglTestCase_004335_2);

#define VkglTestCase_004336_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004336_2 ".invalid.simple_tail_recursion_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004336, VkglTestCase_004336_1, VkglTestCase_004336_2);

#define VkglTestCase_004337_1 "dEQP-GLES3.functional.shaders.functions.in"
#define VkglTestCase_004337_2 "valid.dynamic_conditional_recursion_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004337, VkglTestCase_004337_1, VkglTestCase_004337_2);

#define VkglTestCase_004338_1 "dEQP-GLES3.functional.shaders.functions.inv"
#define VkglTestCase_004338_2 "alid.dynamic_conditional_recursion_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004338, VkglTestCase_004338_1, VkglTestCase_004338_2);

#define VkglTestCase_004339_1 "dEQP-GLES3.functional.shaders.function"
#define VkglTestCase_004339_2 "s.invalid.dynamic_loop_recursion_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004339, VkglTestCase_004339_1, VkglTestCase_004339_2);

#define VkglTestCase_004340_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004340_2 ".invalid.dynamic_loop_recursion_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004340, VkglTestCase_004340_1, VkglTestCase_004340_2);

#define VkglTestCase_004341_1 "dEQP-GLES3.functional.shaders.functions"
#define VkglTestCase_004341_2 ".invalid.dynamic_switch_recursion_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004341, VkglTestCase_004341_1, VkglTestCase_004341_2);

#define VkglTestCase_004342_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004342_2 "invalid.dynamic_switch_recursion_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004342, VkglTestCase_004342_1, VkglTestCase_004342_2);

#define VkglTestCase_004343_1 "dEQP-GLES3.functional.shaders.funct"
#define VkglTestCase_004343_2 "ions.invalid.modify_const_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004343, VkglTestCase_004343_1, VkglTestCase_004343_2);

#define VkglTestCase_004344_1 "dEQP-GLES3.functional.shaders.functi"
#define VkglTestCase_004344_2 "ons.invalid.modify_const_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004344, VkglTestCase_004344_1, VkglTestCase_004344_2);

#define VkglTestCase_004345_1 "dEQP-GLES3.functional.shaders.functions.inv"
#define VkglTestCase_004345_2 "alid.init_const_local_from_const_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004345, VkglTestCase_004345_1, VkglTestCase_004345_2);

#define VkglTestCase_004346_1 "dEQP-GLES3.functional.shaders.functions.inva"
#define VkglTestCase_004346_2 "lid.init_const_local_from_const_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004346, VkglTestCase_004346_1, VkglTestCase_004346_2);

#define VkglTestCase_004347_1 "dEQP-GLES3.functional.shaders.functions."
#define VkglTestCase_004347_2 "invalid.array_size_from_const_arg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004347, VkglTestCase_004347_1, VkglTestCase_004347_2);

#define VkglTestCase_004348_1 "dEQP-GLES3.functional.shaders.functions.i"
#define VkglTestCase_004348_2 "nvalid.array_size_from_const_arg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004348, VkglTestCase_004348_1, VkglTestCase_004348_2);
