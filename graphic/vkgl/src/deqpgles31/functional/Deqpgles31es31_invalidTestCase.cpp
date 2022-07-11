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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003814_1 "dEQP-GLES31.functional.shaders.arrays.e"
#define VkglTestCase_003814_2 "s31.invalid.constructor_c_style1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003814, VkglTestCase_003814_1, VkglTestCase_003814_2);

#define VkglTestCase_003815_1 "dEQP-GLES31.functional.shaders.arrays.es"
#define VkglTestCase_003815_2 "31.invalid.constructor_c_style1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003815, VkglTestCase_003815_1, VkglTestCase_003815_2);

#define VkglTestCase_003816_1 "dEQP-GLES31.functional.shaders.arrays.e"
#define VkglTestCase_003816_2 "s31.invalid.constructor_c_style2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003816, VkglTestCase_003816_1, VkglTestCase_003816_2);

#define VkglTestCase_003817_1 "dEQP-GLES31.functional.shaders.arrays.es"
#define VkglTestCase_003817_2 "31.invalid.constructor_c_style2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003817, VkglTestCase_003817_1, VkglTestCase_003817_2);

#define VkglTestCase_003818_1 "dEQP-GLES31.functional.shaders.arrays.e"
#define VkglTestCase_003818_2 "s31.invalid.constructor_c_style3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003818, VkglTestCase_003818_1, VkglTestCase_003818_2);

#define VkglTestCase_003819_1 "dEQP-GLES31.functional.shaders.arrays.es"
#define VkglTestCase_003819_2 "31.invalid.constructor_c_style3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003819, VkglTestCase_003819_1, VkglTestCase_003819_2);

#define VkglTestCase_003820_1 "dEQP-GLES31.functional.shaders.arrays.e"
#define VkglTestCase_003820_2 "s31.invalid.constructor_c_style4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003820, VkglTestCase_003820_1, VkglTestCase_003820_2);

#define VkglTestCase_003821_1 "dEQP-GLES31.functional.shaders.arrays.es"
#define VkglTestCase_003821_2 "31.invalid.constructor_c_style4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003821, VkglTestCase_003821_1, VkglTestCase_003821_2);

#define VkglTestCase_004114_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays."
#define VkglTestCase_004114_2 "es31.invalid.dynamic_expression_array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004114, VkglTestCase_004114_1, VkglTestCase_004114_2);

#define VkglTestCase_004115_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004115_2 "s31.invalid.dynamic_expression_array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004115, VkglTestCase_004115_1, VkglTestCase_004115_2);

#define VkglTestCase_004116_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004116_2 "s31.invalid.empty_declaration_with_var_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004116, VkglTestCase_004116_1, VkglTestCase_004116_2);

#define VkglTestCase_004117_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004117_2 "31.invalid.empty_declaration_with_var_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004117, VkglTestCase_004117_1, VkglTestCase_004117_2);

#define VkglTestCase_004118_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_004118_2 "_arrays.es31.invalid.uniform_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004118, VkglTestCase_004118_1, VkglTestCase_004118_2);

#define VkglTestCase_004119_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004119_2 "arrays.es31.invalid.uniform_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004119, VkglTestCase_004119_1, VkglTestCase_004119_2);

#define VkglTestCase_004120_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_004120_2 "_arrays.es31.invalid.storage_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004120, VkglTestCase_004120_1, VkglTestCase_004120_2);

#define VkglTestCase_004121_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004121_2 "arrays.es31.invalid.storage_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004121, VkglTestCase_004121_1, VkglTestCase_004121_2);

#define VkglTestCase_007249_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007249_2 "31.invalid.member_in_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007249, VkglTestCase_007249_1, VkglTestCase_007249_2);

#define VkglTestCase_007250_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007250_2 "1.invalid.member_in_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007250, VkglTestCase_007250_1, VkglTestCase_007250_2);

#define VkglTestCase_007251_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007251_2 "31.invalid.member_out_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007251, VkglTestCase_007251_1, VkglTestCase_007251_2);

#define VkglTestCase_007252_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007252_2 "1.invalid.member_out_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007252, VkglTestCase_007252_1, VkglTestCase_007252_2);

#define VkglTestCase_007253_1 "dEQP-GLES31.functional.shaders.uniform_block.es31"
#define VkglTestCase_007253_2 ".invalid.member_buffer_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007253, VkglTestCase_007253_1, VkglTestCase_007253_2);

#define VkglTestCase_007254_1 "dEQP-GLES31.functional.shaders.uniform_block.es31."
#define VkglTestCase_007254_2 "invalid.member_buffer_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007254, VkglTestCase_007254_1, VkglTestCase_007254_2);

#define VkglTestCase_007255_1 "dEQP-GLES31.functional.shaders.uniform_block.es31."
#define VkglTestCase_007255_2 "invalid.member_attribute_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007255, VkglTestCase_007255_1, VkglTestCase_007255_2);

#define VkglTestCase_007256_1 "dEQP-GLES31.functional.shaders.uniform_block.es31.i"
#define VkglTestCase_007256_2 "nvalid.member_attribute_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007256, VkglTestCase_007256_1, VkglTestCase_007256_2);

#define VkglTestCase_007257_1 "dEQP-GLES31.functional.shaders.uniform_block.es31"
#define VkglTestCase_007257_2 ".invalid.member_varying_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007257, VkglTestCase_007257_1, VkglTestCase_007257_2);

#define VkglTestCase_007258_1 "dEQP-GLES31.functional.shaders.uniform_block.es31."
#define VkglTestCase_007258_2 "invalid.member_varying_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007258, VkglTestCase_007258_1, VkglTestCase_007258_2);

#define VkglTestCase_007259_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007259_2 "es31.invalid.conflicting_instance_names_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007259, VkglTestCase_007259_1, VkglTestCase_007259_2);

#define VkglTestCase_007260_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007260_2 "s31.invalid.conflicting_instance_names_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007260, VkglTestCase_007260_1, VkglTestCase_007260_2);

#define VkglTestCase_007261_1 "dEQP-GLES31.functional.shaders.uniform_block.es31.i"
#define VkglTestCase_007261_2 "nvalid.conflicting_function_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007261, VkglTestCase_007261_1, VkglTestCase_007261_2);

#define VkglTestCase_007262_1 "dEQP-GLES31.functional.shaders.uniform_block.es31.in"
#define VkglTestCase_007262_2 "valid.conflicting_function_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007262, VkglTestCase_007262_1, VkglTestCase_007262_2);

#define VkglTestCase_007263_1 "dEQP-GLES31.functional.shaders.uniform_block.es31."
#define VkglTestCase_007263_2 "invalid.conflicting_function_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007263, VkglTestCase_007263_1, VkglTestCase_007263_2);

#define VkglTestCase_007264_1 "dEQP-GLES31.functional.shaders.uniform_block.es31.i"
#define VkglTestCase_007264_2 "nvalid.conflicting_function_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007264, VkglTestCase_007264_1, VkglTestCase_007264_2);

#define VkglTestCase_007265_1 "dEQP-GLES31.functional.shaders.uniform_block.es31.i"
#define VkglTestCase_007265_2 "nvalid.conflicting_uniform_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007265, VkglTestCase_007265_1, VkglTestCase_007265_2);

#define VkglTestCase_007266_1 "dEQP-GLES31.functional.shaders.uniform_block.es31.in"
#define VkglTestCase_007266_2 "valid.conflicting_uniform_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007266, VkglTestCase_007266_1, VkglTestCase_007266_2);

#define VkglTestCase_007267_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007267_2 "1.invalid.conflicting_in_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007267, VkglTestCase_007267_1, VkglTestCase_007267_2);

#define VkglTestCase_007268_1 "dEQP-GLES31.functional.shaders.uniform_block.es31"
#define VkglTestCase_007268_2 ".invalid.conflicting_in_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007268, VkglTestCase_007268_1, VkglTestCase_007268_2);

#define VkglTestCase_007269_1 "dEQP-GLES31.functional.shaders.uniform_block.es31"
#define VkglTestCase_007269_2 ".invalid.conflicting_out_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007269, VkglTestCase_007269_1, VkglTestCase_007269_2);

#define VkglTestCase_007270_1 "dEQP-GLES31.functional.shaders.uniform_block.es31."
#define VkglTestCase_007270_2 "invalid.conflicting_out_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007270, VkglTestCase_007270_1, VkglTestCase_007270_2);

#define VkglTestCase_007271_1 "dEQP-GLES31.functional.shaders.uniform_block.es31"
#define VkglTestCase_007271_2 ".invalid.conflicting_uniform_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007271, VkglTestCase_007271_1, VkglTestCase_007271_2);

#define VkglTestCase_007272_1 "dEQP-GLES31.functional.shaders.uniform_block.es31."
#define VkglTestCase_007272_2 "invalid.conflicting_uniform_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007272, VkglTestCase_007272_1, VkglTestCase_007272_2);

#define VkglTestCase_007273_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007273_2 "31.invalid.conflicting_in_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007273, VkglTestCase_007273_1, VkglTestCase_007273_2);

#define VkglTestCase_007274_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007274_2 "1.invalid.conflicting_in_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007274, VkglTestCase_007274_1, VkglTestCase_007274_2);

#define VkglTestCase_007275_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007275_2 "31.invalid.conflicting_out_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007275, VkglTestCase_007275_1, VkglTestCase_007275_2);

#define VkglTestCase_007276_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007276_2 "1.invalid.conflicting_out_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007276, VkglTestCase_007276_1, VkglTestCase_007276_2);

#define VkglTestCase_007277_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007277_2 "1.invalid.matching_instance_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007277, VkglTestCase_007277_1, VkglTestCase_007277_2);

#define VkglTestCase_007278_1 "dEQP-GLES31.functional.shaders.uniform_block.es31"
#define VkglTestCase_007278_2 ".invalid.matching_instance_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007278, VkglTestCase_007278_1, VkglTestCase_007278_2);

#define VkglTestCase_007279_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007279_2 "es31.invalid.reference_using_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007279, VkglTestCase_007279_1, VkglTestCase_007279_2);

#define VkglTestCase_007280_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007280_2 "s31.invalid.reference_using_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007280, VkglTestCase_007280_1, VkglTestCase_007280_2);

#define VkglTestCase_007281_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007281_2 "_block.es31.invalid.empty_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007281, VkglTestCase_007281_1, VkglTestCase_007281_2);

#define VkglTestCase_007282_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007282_2 "block.es31.invalid.empty_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007282, VkglTestCase_007282_1, VkglTestCase_007282_2);

#define VkglTestCase_007283_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007283_2 "_block.es31.invalid.empty_layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007283, VkglTestCase_007283_1, VkglTestCase_007283_2);

#define VkglTestCase_007284_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007284_2 "block.es31.invalid.empty_layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007284, VkglTestCase_007284_1, VkglTestCase_007284_2);

#define VkglTestCase_007285_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007285_2 "ck.es31.invalid.empty_member_layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007285, VkglTestCase_007285_1, VkglTestCase_007285_2);

#define VkglTestCase_007286_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007286_2 "k.es31.invalid.empty_member_layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007286, VkglTestCase_007286_1, VkglTestCase_007286_2);

#define VkglTestCase_007287_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007287_2 "ck.es31.invalid.empty_global_layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007287, VkglTestCase_007287_1, VkglTestCase_007287_2);

#define VkglTestCase_007288_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007288_2 "k.es31.invalid.empty_global_layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007288, VkglTestCase_007288_1, VkglTestCase_007288_2);

#define VkglTestCase_007289_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007289_2 "ck.es31.invalid.structure_definition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007289, VkglTestCase_007289_1, VkglTestCase_007289_2);

#define VkglTestCase_007290_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007290_2 "k.es31.invalid.structure_definition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007290, VkglTestCase_007290_1, VkglTestCase_007290_2);

#define VkglTestCase_007291_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007291_2 "ck.es31.invalid.member_layout_shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007291, VkglTestCase_007291_1, VkglTestCase_007291_2);

#define VkglTestCase_007292_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007292_2 "k.es31.invalid.member_layout_shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007292, VkglTestCase_007292_1, VkglTestCase_007292_2);

#define VkglTestCase_007293_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007293_2 "ck.es31.invalid.member_layout_packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007293, VkglTestCase_007293_1, VkglTestCase_007293_2);

#define VkglTestCase_007294_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007294_2 "k.es31.invalid.member_layout_packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007294, VkglTestCase_007294_1, VkglTestCase_007294_2);

#define VkglTestCase_007295_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007295_2 "es31.invalid.member_layout_std140std430_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007295, VkglTestCase_007295_1, VkglTestCase_007295_2);

#define VkglTestCase_007296_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007296_2 "s31.invalid.member_layout_std140std430_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007296, VkglTestCase_007296_1, VkglTestCase_007296_2);

#define VkglTestCase_007297_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007297_2 "ock.es31.invalid.missing_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007297, VkglTestCase_007297_1, VkglTestCase_007297_2);

#define VkglTestCase_007298_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007298_2 "ck.es31.invalid.missing_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007298, VkglTestCase_007298_1, VkglTestCase_007298_2);

#define VkglTestCase_007299_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007299_2 "es31.invalid.invalid_number_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007299, VkglTestCase_007299_1, VkglTestCase_007299_2);

#define VkglTestCase_007300_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007300_2 "s31.invalid.invalid_number_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007300, VkglTestCase_007300_1, VkglTestCase_007300_2);

#define VkglTestCase_007301_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007301_2 "31.invalid.invalid_identifier_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007301, VkglTestCase_007301_1, VkglTestCase_007301_2);

#define VkglTestCase_007302_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007302_2 "1.invalid.invalid_identifier_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007302, VkglTestCase_007302_1, VkglTestCase_007302_2);

#define VkglTestCase_007303_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007303_2 ".es31.invalid.invalid_hash_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007303, VkglTestCase_007303_1, VkglTestCase_007303_2);

#define VkglTestCase_007304_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007304_2 "es31.invalid.invalid_hash_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007304, VkglTestCase_007304_1, VkglTestCase_007304_2);

#define VkglTestCase_007305_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007305_2 "es31.invalid.invalid_dollar_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007305, VkglTestCase_007305_1, VkglTestCase_007305_2);

#define VkglTestCase_007306_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007306_2 "s31.invalid.invalid_dollar_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007306, VkglTestCase_007306_1, VkglTestCase_007306_2);

#define VkglTestCase_007307_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007307_2 "ck.es31.invalid.too_long_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007307, VkglTestCase_007307_1, VkglTestCase_007307_2);

#define VkglTestCase_007308_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007308_2 "k.es31.invalid.too_long_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007308, VkglTestCase_007308_1, VkglTestCase_007308_2);

#define VkglTestCase_007309_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007309_2 "s31.invalid.invalid_number_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007309, VkglTestCase_007309_1, VkglTestCase_007309_2);

#define VkglTestCase_007310_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007310_2 "31.invalid.invalid_number_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007310, VkglTestCase_007310_1, VkglTestCase_007310_2);

#define VkglTestCase_007311_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007311_2 "1.invalid.invalid_identifier_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007311, VkglTestCase_007311_1, VkglTestCase_007311_2);

#define VkglTestCase_007312_1 "dEQP-GLES31.functional.shaders.uniform_block.es31"
#define VkglTestCase_007312_2 ".invalid.invalid_identifier_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007312, VkglTestCase_007312_1, VkglTestCase_007312_2);

#define VkglTestCase_007313_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007313_2 "es31.invalid.invalid_hash_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007313, VkglTestCase_007313_1, VkglTestCase_007313_2);

#define VkglTestCase_007314_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007314_2 "s31.invalid.invalid_hash_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007314, VkglTestCase_007314_1, VkglTestCase_007314_2);

#define VkglTestCase_007315_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007315_2 "s31.invalid.invalid_dollar_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007315, VkglTestCase_007315_1, VkglTestCase_007315_2);

#define VkglTestCase_007316_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007316_2 "31.invalid.invalid_dollar_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007316, VkglTestCase_007316_1, VkglTestCase_007316_2);

#define VkglTestCase_007317_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007317_2 "block.es31.invalid.repeated_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007317, VkglTestCase_007317_1, VkglTestCase_007317_2);

#define VkglTestCase_007318_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007318_2 "lock.es31.invalid.repeated_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007318, VkglTestCase_007318_1, VkglTestCase_007318_2);

#define VkglTestCase_007319_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007319_2 "1.invalid.repeated_block_no_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007319, VkglTestCase_007319_1, VkglTestCase_007319_2);

#define VkglTestCase_007320_1 "dEQP-GLES31.functional.shaders.uniform_block.es31"
#define VkglTestCase_007320_2 ".invalid.repeated_block_no_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007320, VkglTestCase_007320_1, VkglTestCase_007320_2);

#define VkglTestCase_007321_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007321_2 "block.es31.invalid.layout_std430_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007321, VkglTestCase_007321_1, VkglTestCase_007321_2);

#define VkglTestCase_007322_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007322_2 "lock.es31.invalid.layout_std430_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007322, VkglTestCase_007322_1, VkglTestCase_007322_2);

#define VkglTestCase_007323_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007323_2 "ck.es31.invalid.global_layout_std430_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007323, VkglTestCase_007323_1, VkglTestCase_007323_2);

#define VkglTestCase_007324_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007324_2 "k.es31.invalid.global_layout_std430_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007324, VkglTestCase_007324_1, VkglTestCase_007324_2);
