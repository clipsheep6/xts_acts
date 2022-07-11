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

#define VkglTestCase_003822_1 "dEQP-GLES31.functional.shaders.arrays.e"
#define VkglTestCase_003822_2 "s32.invalid.constructor_c_style1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003822, VkglTestCase_003822_1, VkglTestCase_003822_2);

#define VkglTestCase_003823_1 "dEQP-GLES31.functional.shaders.arrays.es"
#define VkglTestCase_003823_2 "32.invalid.constructor_c_style1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003823, VkglTestCase_003823_1, VkglTestCase_003823_2);

#define VkglTestCase_003824_1 "dEQP-GLES31.functional.shaders.arrays.e"
#define VkglTestCase_003824_2 "s32.invalid.constructor_c_style2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003824, VkglTestCase_003824_1, VkglTestCase_003824_2);

#define VkglTestCase_003825_1 "dEQP-GLES31.functional.shaders.arrays.es"
#define VkglTestCase_003825_2 "32.invalid.constructor_c_style2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003825, VkglTestCase_003825_1, VkglTestCase_003825_2);

#define VkglTestCase_003826_1 "dEQP-GLES31.functional.shaders.arrays.e"
#define VkglTestCase_003826_2 "s32.invalid.constructor_c_style3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003826, VkglTestCase_003826_1, VkglTestCase_003826_2);

#define VkglTestCase_003827_1 "dEQP-GLES31.functional.shaders.arrays.es"
#define VkglTestCase_003827_2 "32.invalid.constructor_c_style3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003827, VkglTestCase_003827_1, VkglTestCase_003827_2);

#define VkglTestCase_003828_1 "dEQP-GLES31.functional.shaders.arrays.e"
#define VkglTestCase_003828_2 "s32.invalid.constructor_c_style4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003828, VkglTestCase_003828_1, VkglTestCase_003828_2);

#define VkglTestCase_003829_1 "dEQP-GLES31.functional.shaders.arrays.es"
#define VkglTestCase_003829_2 "32.invalid.constructor_c_style4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003829, VkglTestCase_003829_1, VkglTestCase_003829_2);

#define VkglTestCase_004406_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays."
#define VkglTestCase_004406_2 "es32.invalid.dynamic_expression_array_size_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004406, VkglTestCase_004406_1, VkglTestCase_004406_2);

#define VkglTestCase_004407_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004407_2 "s32.invalid.dynamic_expression_array_size_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004407, VkglTestCase_004407_1, VkglTestCase_004407_2);

#define VkglTestCase_004408_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004408_2 "s32.invalid.empty_declaration_with_var_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004408, VkglTestCase_004408_1, VkglTestCase_004408_2);

#define VkglTestCase_004409_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004409_2 "32.invalid.empty_declaration_with_var_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004409, VkglTestCase_004409_1, VkglTestCase_004409_2);

#define VkglTestCase_004410_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_004410_2 "_arrays.es32.invalid.uniform_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004410, VkglTestCase_004410_1, VkglTestCase_004410_2);

#define VkglTestCase_004411_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004411_2 "arrays.es32.invalid.uniform_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004411, VkglTestCase_004411_1, VkglTestCase_004411_2);

#define VkglTestCase_004412_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_004412_2 "_arrays.es32.invalid.storage_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004412, VkglTestCase_004412_1, VkglTestCase_004412_2);

#define VkglTestCase_004413_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004413_2 "arrays.es32.invalid.storage_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004413, VkglTestCase_004413_1, VkglTestCase_004413_2);

#define VkglTestCase_007391_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007391_2 "32.invalid.member_in_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007391, VkglTestCase_007391_1, VkglTestCase_007391_2);

#define VkglTestCase_007392_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007392_2 "2.invalid.member_in_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007392, VkglTestCase_007392_1, VkglTestCase_007392_2);

#define VkglTestCase_007393_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007393_2 "32.invalid.member_out_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007393, VkglTestCase_007393_1, VkglTestCase_007393_2);

#define VkglTestCase_007394_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007394_2 "2.invalid.member_out_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007394, VkglTestCase_007394_1, VkglTestCase_007394_2);

#define VkglTestCase_007395_1 "dEQP-GLES31.functional.shaders.uniform_block.es32"
#define VkglTestCase_007395_2 ".invalid.member_buffer_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007395, VkglTestCase_007395_1, VkglTestCase_007395_2);

#define VkglTestCase_007396_1 "dEQP-GLES31.functional.shaders.uniform_block.es32."
#define VkglTestCase_007396_2 "invalid.member_buffer_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007396, VkglTestCase_007396_1, VkglTestCase_007396_2);

#define VkglTestCase_007397_1 "dEQP-GLES31.functional.shaders.uniform_block.es32."
#define VkglTestCase_007397_2 "invalid.member_attribute_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007397, VkglTestCase_007397_1, VkglTestCase_007397_2);

#define VkglTestCase_007398_1 "dEQP-GLES31.functional.shaders.uniform_block.es32.i"
#define VkglTestCase_007398_2 "nvalid.member_attribute_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007398, VkglTestCase_007398_1, VkglTestCase_007398_2);

#define VkglTestCase_007399_1 "dEQP-GLES31.functional.shaders.uniform_block.es32"
#define VkglTestCase_007399_2 ".invalid.member_varying_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007399, VkglTestCase_007399_1, VkglTestCase_007399_2);

#define VkglTestCase_007400_1 "dEQP-GLES31.functional.shaders.uniform_block.es32."
#define VkglTestCase_007400_2 "invalid.member_varying_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007400, VkglTestCase_007400_1, VkglTestCase_007400_2);

#define VkglTestCase_007401_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007401_2 "es32.invalid.conflicting_instance_names_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007401, VkglTestCase_007401_1, VkglTestCase_007401_2);

#define VkglTestCase_007402_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007402_2 "s32.invalid.conflicting_instance_names_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007402, VkglTestCase_007402_1, VkglTestCase_007402_2);

#define VkglTestCase_007403_1 "dEQP-GLES31.functional.shaders.uniform_block.es32.i"
#define VkglTestCase_007403_2 "nvalid.conflicting_function_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007403, VkglTestCase_007403_1, VkglTestCase_007403_2);

#define VkglTestCase_007404_1 "dEQP-GLES31.functional.shaders.uniform_block.es32.in"
#define VkglTestCase_007404_2 "valid.conflicting_function_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007404, VkglTestCase_007404_1, VkglTestCase_007404_2);

#define VkglTestCase_007405_1 "dEQP-GLES31.functional.shaders.uniform_block.es32."
#define VkglTestCase_007405_2 "invalid.conflicting_function_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007405, VkglTestCase_007405_1, VkglTestCase_007405_2);

#define VkglTestCase_007406_1 "dEQP-GLES31.functional.shaders.uniform_block.es32.i"
#define VkglTestCase_007406_2 "nvalid.conflicting_function_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007406, VkglTestCase_007406_1, VkglTestCase_007406_2);

#define VkglTestCase_007407_1 "dEQP-GLES31.functional.shaders.uniform_block.es32.i"
#define VkglTestCase_007407_2 "nvalid.conflicting_uniform_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007407, VkglTestCase_007407_1, VkglTestCase_007407_2);

#define VkglTestCase_007408_1 "dEQP-GLES31.functional.shaders.uniform_block.es32.in"
#define VkglTestCase_007408_2 "valid.conflicting_uniform_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007408, VkglTestCase_007408_1, VkglTestCase_007408_2);

#define VkglTestCase_007409_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007409_2 "2.invalid.conflicting_in_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007409, VkglTestCase_007409_1, VkglTestCase_007409_2);

#define VkglTestCase_007410_1 "dEQP-GLES31.functional.shaders.uniform_block.es32"
#define VkglTestCase_007410_2 ".invalid.conflicting_in_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007410, VkglTestCase_007410_1, VkglTestCase_007410_2);

#define VkglTestCase_007411_1 "dEQP-GLES31.functional.shaders.uniform_block.es32"
#define VkglTestCase_007411_2 ".invalid.conflicting_out_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007411, VkglTestCase_007411_1, VkglTestCase_007411_2);

#define VkglTestCase_007412_1 "dEQP-GLES31.functional.shaders.uniform_block.es32."
#define VkglTestCase_007412_2 "invalid.conflicting_out_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007412, VkglTestCase_007412_1, VkglTestCase_007412_2);

#define VkglTestCase_007413_1 "dEQP-GLES31.functional.shaders.uniform_block.es32"
#define VkglTestCase_007413_2 ".invalid.conflicting_uniform_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007413, VkglTestCase_007413_1, VkglTestCase_007413_2);

#define VkglTestCase_007414_1 "dEQP-GLES31.functional.shaders.uniform_block.es32."
#define VkglTestCase_007414_2 "invalid.conflicting_uniform_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007414, VkglTestCase_007414_1, VkglTestCase_007414_2);

#define VkglTestCase_007415_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007415_2 "32.invalid.conflicting_in_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007415, VkglTestCase_007415_1, VkglTestCase_007415_2);

#define VkglTestCase_007416_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007416_2 "2.invalid.conflicting_in_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007416, VkglTestCase_007416_1, VkglTestCase_007416_2);

#define VkglTestCase_007417_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007417_2 "32.invalid.conflicting_out_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007417, VkglTestCase_007417_1, VkglTestCase_007417_2);

#define VkglTestCase_007418_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007418_2 "2.invalid.conflicting_out_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007418, VkglTestCase_007418_1, VkglTestCase_007418_2);

#define VkglTestCase_007419_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007419_2 "2.invalid.matching_instance_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007419, VkglTestCase_007419_1, VkglTestCase_007419_2);

#define VkglTestCase_007420_1 "dEQP-GLES31.functional.shaders.uniform_block.es32"
#define VkglTestCase_007420_2 ".invalid.matching_instance_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007420, VkglTestCase_007420_1, VkglTestCase_007420_2);

#define VkglTestCase_007421_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007421_2 "es32.invalid.reference_using_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007421, VkglTestCase_007421_1, VkglTestCase_007421_2);

#define VkglTestCase_007422_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007422_2 "s32.invalid.reference_using_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007422, VkglTestCase_007422_1, VkglTestCase_007422_2);

#define VkglTestCase_007423_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007423_2 "_block.es32.invalid.empty_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007423, VkglTestCase_007423_1, VkglTestCase_007423_2);

#define VkglTestCase_007424_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007424_2 "block.es32.invalid.empty_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007424, VkglTestCase_007424_1, VkglTestCase_007424_2);

#define VkglTestCase_007425_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007425_2 "_block.es32.invalid.empty_layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007425, VkglTestCase_007425_1, VkglTestCase_007425_2);

#define VkglTestCase_007426_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007426_2 "block.es32.invalid.empty_layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007426, VkglTestCase_007426_1, VkglTestCase_007426_2);

#define VkglTestCase_007427_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007427_2 "ck.es32.invalid.empty_member_layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007427, VkglTestCase_007427_1, VkglTestCase_007427_2);

#define VkglTestCase_007428_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007428_2 "k.es32.invalid.empty_member_layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007428, VkglTestCase_007428_1, VkglTestCase_007428_2);

#define VkglTestCase_007429_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007429_2 "ck.es32.invalid.empty_global_layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007429, VkglTestCase_007429_1, VkglTestCase_007429_2);

#define VkglTestCase_007430_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007430_2 "k.es32.invalid.empty_global_layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007430, VkglTestCase_007430_1, VkglTestCase_007430_2);

#define VkglTestCase_007431_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007431_2 "ck.es32.invalid.structure_definition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007431, VkglTestCase_007431_1, VkglTestCase_007431_2);

#define VkglTestCase_007432_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007432_2 "k.es32.invalid.structure_definition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007432, VkglTestCase_007432_1, VkglTestCase_007432_2);

#define VkglTestCase_007433_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007433_2 "ck.es32.invalid.member_layout_shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007433, VkglTestCase_007433_1, VkglTestCase_007433_2);

#define VkglTestCase_007434_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007434_2 "k.es32.invalid.member_layout_shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007434, VkglTestCase_007434_1, VkglTestCase_007434_2);

#define VkglTestCase_007435_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007435_2 "ck.es32.invalid.member_layout_packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007435, VkglTestCase_007435_1, VkglTestCase_007435_2);

#define VkglTestCase_007436_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007436_2 "k.es32.invalid.member_layout_packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007436, VkglTestCase_007436_1, VkglTestCase_007436_2);

#define VkglTestCase_007437_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007437_2 "es32.invalid.member_layout_std140std430_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007437, VkglTestCase_007437_1, VkglTestCase_007437_2);

#define VkglTestCase_007438_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007438_2 "s32.invalid.member_layout_std140std430_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007438, VkglTestCase_007438_1, VkglTestCase_007438_2);

#define VkglTestCase_007439_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007439_2 "ock.es32.invalid.missing_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007439, VkglTestCase_007439_1, VkglTestCase_007439_2);

#define VkglTestCase_007440_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007440_2 "ck.es32.invalid.missing_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007440, VkglTestCase_007440_1, VkglTestCase_007440_2);

#define VkglTestCase_007441_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007441_2 "es32.invalid.invalid_number_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007441, VkglTestCase_007441_1, VkglTestCase_007441_2);

#define VkglTestCase_007442_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007442_2 "s32.invalid.invalid_number_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007442, VkglTestCase_007442_1, VkglTestCase_007442_2);

#define VkglTestCase_007443_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007443_2 "32.invalid.invalid_identifier_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007443, VkglTestCase_007443_1, VkglTestCase_007443_2);

#define VkglTestCase_007444_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007444_2 "2.invalid.invalid_identifier_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007444, VkglTestCase_007444_1, VkglTestCase_007444_2);

#define VkglTestCase_007445_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007445_2 ".es32.invalid.invalid_hash_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007445, VkglTestCase_007445_1, VkglTestCase_007445_2);

#define VkglTestCase_007446_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007446_2 "es32.invalid.invalid_hash_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007446, VkglTestCase_007446_1, VkglTestCase_007446_2);

#define VkglTestCase_007447_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007447_2 "es32.invalid.invalid_dollar_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007447, VkglTestCase_007447_1, VkglTestCase_007447_2);

#define VkglTestCase_007448_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007448_2 "s32.invalid.invalid_dollar_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007448, VkglTestCase_007448_1, VkglTestCase_007448_2);

#define VkglTestCase_007449_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007449_2 "ck.es32.invalid.too_long_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007449, VkglTestCase_007449_1, VkglTestCase_007449_2);

#define VkglTestCase_007450_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007450_2 "k.es32.invalid.too_long_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007450, VkglTestCase_007450_1, VkglTestCase_007450_2);

#define VkglTestCase_007451_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007451_2 "s32.invalid.invalid_number_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007451, VkglTestCase_007451_1, VkglTestCase_007451_2);

#define VkglTestCase_007452_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007452_2 "32.invalid.invalid_number_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007452, VkglTestCase_007452_1, VkglTestCase_007452_2);

#define VkglTestCase_007453_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007453_2 "2.invalid.invalid_identifier_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007453, VkglTestCase_007453_1, VkglTestCase_007453_2);

#define VkglTestCase_007454_1 "dEQP-GLES31.functional.shaders.uniform_block.es32"
#define VkglTestCase_007454_2 ".invalid.invalid_identifier_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007454, VkglTestCase_007454_1, VkglTestCase_007454_2);

#define VkglTestCase_007455_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007455_2 "es32.invalid.invalid_hash_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007455, VkglTestCase_007455_1, VkglTestCase_007455_2);

#define VkglTestCase_007456_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007456_2 "s32.invalid.invalid_hash_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007456, VkglTestCase_007456_1, VkglTestCase_007456_2);

#define VkglTestCase_007457_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007457_2 "s32.invalid.invalid_dollar_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007457, VkglTestCase_007457_1, VkglTestCase_007457_2);

#define VkglTestCase_007458_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007458_2 "32.invalid.invalid_dollar_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007458, VkglTestCase_007458_1, VkglTestCase_007458_2);

#define VkglTestCase_007459_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007459_2 "block.es32.invalid.repeated_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007459, VkglTestCase_007459_1, VkglTestCase_007459_2);

#define VkglTestCase_007460_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007460_2 "lock.es32.invalid.repeated_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007460, VkglTestCase_007460_1, VkglTestCase_007460_2);

#define VkglTestCase_007461_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007461_2 "2.invalid.repeated_block_no_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007461, VkglTestCase_007461_1, VkglTestCase_007461_2);

#define VkglTestCase_007462_1 "dEQP-GLES31.functional.shaders.uniform_block.es32"
#define VkglTestCase_007462_2 ".invalid.repeated_block_no_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007462, VkglTestCase_007462_1, VkglTestCase_007462_2);

#define VkglTestCase_007463_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007463_2 "block.es32.invalid.layout_std430_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007463, VkglTestCase_007463_1, VkglTestCase_007463_2);

#define VkglTestCase_007464_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007464_2 "lock.es32.invalid.layout_std430_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007464, VkglTestCase_007464_1, VkglTestCase_007464_2);

#define VkglTestCase_007465_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007465_2 "ck.es32.invalid.global_layout_std430_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007465, VkglTestCase_007465_1, VkglTestCase_007465_2);

#define VkglTestCase_007466_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007466_2 "k.es32.invalid.global_layout_std430_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_007466, VkglTestCase_007466_1, VkglTestCase_007466_2);
