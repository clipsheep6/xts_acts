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
#include "../ActsDeqpgles30006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005086_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005086_2 "invalid.member_in_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005086, VkglTestCase_005086_1, VkglTestCase_005086_2);

#define VkglTestCase_005087_1 "dEQP-GLES3.functional.shaders.uniform_block.i"
#define VkglTestCase_005087_2 "nvalid.member_in_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005087, VkglTestCase_005087_1, VkglTestCase_005087_2);

#define VkglTestCase_005088_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005088_2 "invalid.member_out_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005088, VkglTestCase_005088_1, VkglTestCase_005088_2);

#define VkglTestCase_005089_1 "dEQP-GLES3.functional.shaders.uniform_block.i"
#define VkglTestCase_005089_2 "nvalid.member_out_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005089, VkglTestCase_005089_1, VkglTestCase_005089_2);

#define VkglTestCase_005090_1 "dEQP-GLES3.functional.shaders.uniform_block.in"
#define VkglTestCase_005090_2 "valid.member_buffer_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005090, VkglTestCase_005090_1, VkglTestCase_005090_2);

#define VkglTestCase_005091_1 "dEQP-GLES3.functional.shaders.uniform_block.inv"
#define VkglTestCase_005091_2 "alid.member_buffer_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005091, VkglTestCase_005091_1, VkglTestCase_005091_2);

#define VkglTestCase_005092_1 "dEQP-GLES3.functional.shaders.uniform_block.inv"
#define VkglTestCase_005092_2 "alid.member_attribute_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005092, VkglTestCase_005092_1, VkglTestCase_005092_2);

#define VkglTestCase_005093_1 "dEQP-GLES3.functional.shaders.uniform_block.inva"
#define VkglTestCase_005093_2 "lid.member_attribute_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005093, VkglTestCase_005093_1, VkglTestCase_005093_2);

#define VkglTestCase_005094_1 "dEQP-GLES3.functional.shaders.uniform_block.in"
#define VkglTestCase_005094_2 "valid.member_varying_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005094, VkglTestCase_005094_1, VkglTestCase_005094_2);

#define VkglTestCase_005095_1 "dEQP-GLES3.functional.shaders.uniform_block.inv"
#define VkglTestCase_005095_2 "alid.member_varying_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005095, VkglTestCase_005095_1, VkglTestCase_005095_2);

#define VkglTestCase_005096_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005096_2 "k.invalid.conflicting_instance_names_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005096, VkglTestCase_005096_1, VkglTestCase_005096_2);

#define VkglTestCase_005097_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005097_2 ".invalid.conflicting_instance_names_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005097, VkglTestCase_005097_1, VkglTestCase_005097_2);

#define VkglTestCase_005098_1 "dEQP-GLES3.functional.shaders.uniform_block.inva"
#define VkglTestCase_005098_2 "lid.conflicting_function_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005098, VkglTestCase_005098_1, VkglTestCase_005098_2);

#define VkglTestCase_005099_1 "dEQP-GLES3.functional.shaders.uniform_block.inval"
#define VkglTestCase_005099_2 "id.conflicting_function_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005099, VkglTestCase_005099_1, VkglTestCase_005099_2);

#define VkglTestCase_005100_1 "dEQP-GLES3.functional.shaders.uniform_block.inv"
#define VkglTestCase_005100_2 "alid.conflicting_function_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005100, VkglTestCase_005100_1, VkglTestCase_005100_2);

#define VkglTestCase_005101_1 "dEQP-GLES3.functional.shaders.uniform_block.inva"
#define VkglTestCase_005101_2 "lid.conflicting_function_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005101, VkglTestCase_005101_1, VkglTestCase_005101_2);

#define VkglTestCase_005102_1 "dEQP-GLES3.functional.shaders.uniform_block.inva"
#define VkglTestCase_005102_2 "lid.conflicting_uniform_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005102, VkglTestCase_005102_1, VkglTestCase_005102_2);

#define VkglTestCase_005103_1 "dEQP-GLES3.functional.shaders.uniform_block.inval"
#define VkglTestCase_005103_2 "id.conflicting_uniform_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005103, VkglTestCase_005103_1, VkglTestCase_005103_2);

#define VkglTestCase_005104_1 "dEQP-GLES3.functional.shaders.uniform_block.i"
#define VkglTestCase_005104_2 "nvalid.conflicting_in_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005104, VkglTestCase_005104_1, VkglTestCase_005104_2);

#define VkglTestCase_005105_1 "dEQP-GLES3.functional.shaders.uniform_block.in"
#define VkglTestCase_005105_2 "valid.conflicting_in_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005105, VkglTestCase_005105_1, VkglTestCase_005105_2);

#define VkglTestCase_005106_1 "dEQP-GLES3.functional.shaders.uniform_block.in"
#define VkglTestCase_005106_2 "valid.conflicting_out_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005106, VkglTestCase_005106_1, VkglTestCase_005106_2);

#define VkglTestCase_005107_1 "dEQP-GLES3.functional.shaders.uniform_block.inv"
#define VkglTestCase_005107_2 "alid.conflicting_out_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005107, VkglTestCase_005107_1, VkglTestCase_005107_2);

#define VkglTestCase_005108_1 "dEQP-GLES3.functional.shaders.uniform_block.in"
#define VkglTestCase_005108_2 "valid.conflicting_uniform_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005108, VkglTestCase_005108_1, VkglTestCase_005108_2);

#define VkglTestCase_005109_1 "dEQP-GLES3.functional.shaders.uniform_block.inv"
#define VkglTestCase_005109_2 "alid.conflicting_uniform_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005109, VkglTestCase_005109_1, VkglTestCase_005109_2);

#define VkglTestCase_005110_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005110_2 "invalid.conflicting_in_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005110, VkglTestCase_005110_1, VkglTestCase_005110_2);

#define VkglTestCase_005111_1 "dEQP-GLES3.functional.shaders.uniform_block.i"
#define VkglTestCase_005111_2 "nvalid.conflicting_in_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005111, VkglTestCase_005111_1, VkglTestCase_005111_2);

#define VkglTestCase_005112_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005112_2 "invalid.conflicting_out_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005112, VkglTestCase_005112_1, VkglTestCase_005112_2);

#define VkglTestCase_005113_1 "dEQP-GLES3.functional.shaders.uniform_block.i"
#define VkglTestCase_005113_2 "nvalid.conflicting_out_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005113, VkglTestCase_005113_1, VkglTestCase_005113_2);

#define VkglTestCase_005114_1 "dEQP-GLES3.functional.shaders.uniform_block.i"
#define VkglTestCase_005114_2 "nvalid.matching_instance_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005114, VkglTestCase_005114_1, VkglTestCase_005114_2);

#define VkglTestCase_005115_1 "dEQP-GLES3.functional.shaders.uniform_block.in"
#define VkglTestCase_005115_2 "valid.matching_instance_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005115, VkglTestCase_005115_1, VkglTestCase_005115_2);

#define VkglTestCase_005116_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005116_2 "k.invalid.reference_using_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005116, VkglTestCase_005116_1, VkglTestCase_005116_2);

#define VkglTestCase_005117_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005117_2 ".invalid.reference_using_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005117, VkglTestCase_005117_1, VkglTestCase_005117_2);

#define VkglTestCase_005118_1 "dEQP-GLES3.functional.shaders.unifo"
#define VkglTestCase_005118_2 "rm_block.invalid.empty_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005118, VkglTestCase_005118_1, VkglTestCase_005118_2);

#define VkglTestCase_005119_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005119_2 "m_block.invalid.empty_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005119, VkglTestCase_005119_1, VkglTestCase_005119_2);

#define VkglTestCase_005120_1 "dEQP-GLES3.functional.shaders.unifo"
#define VkglTestCase_005120_2 "rm_block.invalid.empty_layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005120, VkglTestCase_005120_1, VkglTestCase_005120_2);

#define VkglTestCase_005121_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005121_2 "m_block.invalid.empty_layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005121, VkglTestCase_005121_1, VkglTestCase_005121_2);

#define VkglTestCase_005122_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005122_2 "lock.invalid.empty_member_layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005122, VkglTestCase_005122_1, VkglTestCase_005122_2);

#define VkglTestCase_005123_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005123_2 "ock.invalid.empty_member_layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005123, VkglTestCase_005123_1, VkglTestCase_005123_2);

#define VkglTestCase_005124_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005124_2 "lock.invalid.empty_global_layout_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005124, VkglTestCase_005124_1, VkglTestCase_005124_2);

#define VkglTestCase_005125_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005125_2 "ock.invalid.empty_global_layout_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005125, VkglTestCase_005125_1, VkglTestCase_005125_2);

#define VkglTestCase_005126_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005126_2 "lock.invalid.structure_definition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005126, VkglTestCase_005126_1, VkglTestCase_005126_2);

#define VkglTestCase_005127_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005127_2 "ock.invalid.structure_definition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005127, VkglTestCase_005127_1, VkglTestCase_005127_2);

#define VkglTestCase_005128_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005128_2 "lock.invalid.member_layout_shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005128, VkglTestCase_005128_1, VkglTestCase_005128_2);

#define VkglTestCase_005129_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005129_2 "ock.invalid.member_layout_shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005129, VkglTestCase_005129_1, VkglTestCase_005129_2);

#define VkglTestCase_005130_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005130_2 "lock.invalid.member_layout_packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005130, VkglTestCase_005130_1, VkglTestCase_005130_2);

#define VkglTestCase_005131_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005131_2 "ock.invalid.member_layout_packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005131, VkglTestCase_005131_1, VkglTestCase_005131_2);

#define VkglTestCase_005132_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005132_2 "lock.invalid.member_layout_std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005132, VkglTestCase_005132_1, VkglTestCase_005132_2);

#define VkglTestCase_005133_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005133_2 "ock.invalid.member_layout_std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005133, VkglTestCase_005133_1, VkglTestCase_005133_2);

#define VkglTestCase_005134_1 "dEQP-GLES3.functional.shaders.uniform_"
#define VkglTestCase_005134_2 "block.invalid.missing_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005134, VkglTestCase_005134_1, VkglTestCase_005134_2);

#define VkglTestCase_005135_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005135_2 "lock.invalid.missing_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005135, VkglTestCase_005135_1, VkglTestCase_005135_2);

#define VkglTestCase_005136_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005136_2 "k.invalid.invalid_number_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005136, VkglTestCase_005136_1, VkglTestCase_005136_2);

#define VkglTestCase_005137_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005137_2 ".invalid.invalid_number_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005137, VkglTestCase_005137_1, VkglTestCase_005137_2);

#define VkglTestCase_005138_1 "dEQP-GLES3.functional.shaders.uniform_blo"
#define VkglTestCase_005138_2 "ck.invalid.invalid_hash_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005138, VkglTestCase_005138_1, VkglTestCase_005138_2);

#define VkglTestCase_005139_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005139_2 "k.invalid.invalid_hash_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005139, VkglTestCase_005139_1, VkglTestCase_005139_2);

#define VkglTestCase_005140_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005140_2 "k.invalid.invalid_dollar_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005140, VkglTestCase_005140_1, VkglTestCase_005140_2);

#define VkglTestCase_005141_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005141_2 ".invalid.invalid_dollar_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005141, VkglTestCase_005141_1, VkglTestCase_005141_2);

#define VkglTestCase_005142_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005142_2 "invalid.invalid_identifier_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005142, VkglTestCase_005142_1, VkglTestCase_005142_2);

#define VkglTestCase_005143_1 "dEQP-GLES3.functional.shaders.uniform_block.i"
#define VkglTestCase_005143_2 "nvalid.invalid_identifier_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005143, VkglTestCase_005143_1, VkglTestCase_005143_2);

#define VkglTestCase_005144_1 "dEQP-GLES3.functional.shaders.uniform_b"
#define VkglTestCase_005144_2 "lock.invalid.too_long_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005144, VkglTestCase_005144_1, VkglTestCase_005144_2);

#define VkglTestCase_005145_1 "dEQP-GLES3.functional.shaders.uniform_bl"
#define VkglTestCase_005145_2 "ock.invalid.too_long_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005145, VkglTestCase_005145_1, VkglTestCase_005145_2);

#define VkglTestCase_005146_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005146_2 ".invalid.invalid_number_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005146, VkglTestCase_005146_1, VkglTestCase_005146_2);

#define VkglTestCase_005147_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005147_2 "invalid.invalid_number_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005147, VkglTestCase_005147_1, VkglTestCase_005147_2);

#define VkglTestCase_005148_1 "dEQP-GLES3.functional.shaders.uniform_bloc"
#define VkglTestCase_005148_2 "k.invalid.invalid_hash_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005148, VkglTestCase_005148_1, VkglTestCase_005148_2);

#define VkglTestCase_005149_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005149_2 ".invalid.invalid_hash_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005149, VkglTestCase_005149_1, VkglTestCase_005149_2);

#define VkglTestCase_005150_1 "dEQP-GLES3.functional.shaders.uniform_block"
#define VkglTestCase_005150_2 ".invalid.invalid_dollar_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005150, VkglTestCase_005150_1, VkglTestCase_005150_2);

#define VkglTestCase_005151_1 "dEQP-GLES3.functional.shaders.uniform_block."
#define VkglTestCase_005151_2 "invalid.invalid_dollar_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005151, VkglTestCase_005151_1, VkglTestCase_005151_2);

#define VkglTestCase_005152_1 "dEQP-GLES3.functional.shaders.uniform_block.i"
#define VkglTestCase_005152_2 "nvalid.invalid_identifier_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005152, VkglTestCase_005152_1, VkglTestCase_005152_2);

#define VkglTestCase_005153_1 "dEQP-GLES3.functional.shaders.uniform_block.in"
#define VkglTestCase_005153_2 "valid.invalid_identifier_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005153, VkglTestCase_005153_1, VkglTestCase_005153_2);

#define VkglTestCase_005154_1 "dEQP-GLES3.functional.shaders.unifor"
#define VkglTestCase_005154_2 "m_block.invalid.repeated_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005154, VkglTestCase_005154_1, VkglTestCase_005154_2);

#define VkglTestCase_005155_1 "dEQP-GLES3.functional.shaders.uniform"
#define VkglTestCase_005155_2 "_block.invalid.repeated_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005155, VkglTestCase_005155_1, VkglTestCase_005155_2);

#define VkglTestCase_005156_1 "dEQP-GLES3.functional.shaders.uniform_block.i"
#define VkglTestCase_005156_2 "nvalid.repeated_block_no_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005156, VkglTestCase_005156_1, VkglTestCase_005156_2);

#define VkglTestCase_005157_1 "dEQP-GLES3.functional.shaders.uniform_block.in"
#define VkglTestCase_005157_2 "valid.repeated_block_no_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005157, VkglTestCase_005157_1, VkglTestCase_005157_2);
