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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007325_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007325_2 ".es32.valid.repeat_interface_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007325, VkglTestCase_007325_1, VkglTestCase_007325_2);

#define VkglTestCase_007326_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007326_2 "es32.valid.repeat_interface_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007326, VkglTestCase_007326_1, VkglTestCase_007326_2);

#define VkglTestCase_007327_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007327_2 "_block.es32.valid.layout_shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007327, VkglTestCase_007327_1, VkglTestCase_007327_2);

#define VkglTestCase_007328_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007328_2 "block.es32.valid.layout_shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007328, VkglTestCase_007328_1, VkglTestCase_007328_2);

#define VkglTestCase_007329_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007329_2 "_block.es32.valid.layout_packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007329, VkglTestCase_007329_1, VkglTestCase_007329_2);

#define VkglTestCase_007330_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007330_2 "block.es32.valid.layout_packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007330, VkglTestCase_007330_1, VkglTestCase_007330_2);

#define VkglTestCase_007331_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007331_2 "_block.es32.valid.layout_std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007331, VkglTestCase_007331_1, VkglTestCase_007331_2);

#define VkglTestCase_007332_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007332_2 "block.es32.valid.layout_std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007332, VkglTestCase_007332_1, VkglTestCase_007332_2);

#define VkglTestCase_007333_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007333_2 "block.es32.valid.layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007333, VkglTestCase_007333_1, VkglTestCase_007333_2);

#define VkglTestCase_007334_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007334_2 "lock.es32.valid.layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007334, VkglTestCase_007334_1, VkglTestCase_007334_2);

#define VkglTestCase_007335_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007335_2 "ock.es32.valid.layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007335, VkglTestCase_007335_1, VkglTestCase_007335_2);

#define VkglTestCase_007336_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007336_2 "ck.es32.valid.layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007336, VkglTestCase_007336_1, VkglTestCase_007336_2);

#define VkglTestCase_007337_1 "dEQP-GLES31.functional.shaders.unifo"
#define VkglTestCase_007337_2 "rm_block.es32.valid.layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007337, VkglTestCase_007337_1, VkglTestCase_007337_2);

#define VkglTestCase_007338_1 "dEQP-GLES31.functional.shaders.unifor"
#define VkglTestCase_007338_2 "m_block.es32.valid.layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007338, VkglTestCase_007338_1, VkglTestCase_007338_2);

#define VkglTestCase_007339_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007339_2 "lock.es32.valid.layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007339, VkglTestCase_007339_1, VkglTestCase_007339_2);

#define VkglTestCase_007340_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007340_2 "ock.es32.valid.layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007340, VkglTestCase_007340_1, VkglTestCase_007340_2);

#define VkglTestCase_007341_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007341_2 "ock.es32.valid.global_layout_shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007341, VkglTestCase_007341_1, VkglTestCase_007341_2);

#define VkglTestCase_007342_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007342_2 "ck.es32.valid.global_layout_shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007342, VkglTestCase_007342_1, VkglTestCase_007342_2);

#define VkglTestCase_007343_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007343_2 "ock.es32.valid.global_layout_packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007343, VkglTestCase_007343_1, VkglTestCase_007343_2);

#define VkglTestCase_007344_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007344_2 "ck.es32.valid.global_layout_packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007344, VkglTestCase_007344_1, VkglTestCase_007344_2);

#define VkglTestCase_007345_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007345_2 "ock.es32.valid.global_layout_std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007345, VkglTestCase_007345_1, VkglTestCase_007345_2);

#define VkglTestCase_007346_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007346_2 "ck.es32.valid.global_layout_std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007346, VkglTestCase_007346_1, VkglTestCase_007346_2);

#define VkglTestCase_007347_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007347_2 "k.es32.valid.global_layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007347, VkglTestCase_007347_1, VkglTestCase_007347_2);

#define VkglTestCase_007348_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007348_2 ".es32.valid.global_layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007348, VkglTestCase_007348_1, VkglTestCase_007348_2);

#define VkglTestCase_007349_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007349_2 ".es32.valid.global_layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007349, VkglTestCase_007349_1, VkglTestCase_007349_2);

#define VkglTestCase_007350_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007350_2 "es32.valid.global_layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007350, VkglTestCase_007350_1, VkglTestCase_007350_2);

#define VkglTestCase_007351_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007351_2 "lock.es32.valid.global_layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007351, VkglTestCase_007351_1, VkglTestCase_007351_2);

#define VkglTestCase_007352_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007352_2 "ock.es32.valid.global_layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007352, VkglTestCase_007352_1, VkglTestCase_007352_2);

#define VkglTestCase_007353_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007353_2 ".es32.valid.global_layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007353, VkglTestCase_007353_1, VkglTestCase_007353_2);

#define VkglTestCase_007354_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007354_2 "es32.valid.global_layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007354, VkglTestCase_007354_1, VkglTestCase_007354_2);

#define VkglTestCase_007355_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007355_2 "k.es32.valid.member_layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007355, VkglTestCase_007355_1, VkglTestCase_007355_2);

#define VkglTestCase_007356_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007356_2 ".es32.valid.member_layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007356, VkglTestCase_007356_1, VkglTestCase_007356_2);

#define VkglTestCase_007357_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007357_2 ".es32.valid.member_layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007357, VkglTestCase_007357_1, VkglTestCase_007357_2);

#define VkglTestCase_007358_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007358_2 "es32.valid.member_layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007358, VkglTestCase_007358_1, VkglTestCase_007358_2);

#define VkglTestCase_007359_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007359_2 "es32.valid.member_layout_row_major_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007359, VkglTestCase_007359_1, VkglTestCase_007359_2);

#define VkglTestCase_007360_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007360_2 "s32.valid.member_layout_row_major_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007360, VkglTestCase_007360_1, VkglTestCase_007360_2);

#define VkglTestCase_007361_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007361_2 "32.valid.member_layout_column_major_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007361, VkglTestCase_007361_1, VkglTestCase_007361_2);

#define VkglTestCase_007362_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007362_2 "2.valid.member_layout_column_major_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007362, VkglTestCase_007362_1, VkglTestCase_007362_2);

#define VkglTestCase_007363_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007363_2 "lock.es32.valid.member_layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007363, VkglTestCase_007363_1, VkglTestCase_007363_2);

#define VkglTestCase_007364_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007364_2 "ock.es32.valid.member_layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007364, VkglTestCase_007364_1, VkglTestCase_007364_2);

#define VkglTestCase_007365_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007365_2 ".es32.valid.member_layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007365, VkglTestCase_007365_1, VkglTestCase_007365_2);

#define VkglTestCase_007366_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007366_2 "es32.valid.member_layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007366, VkglTestCase_007366_1, VkglTestCase_007366_2);

#define VkglTestCase_007367_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007367_2 "block.es32.valid.no_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007367, VkglTestCase_007367_1, VkglTestCase_007367_2);

#define VkglTestCase_007368_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007368_2 "lock.es32.valid.no_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007368, VkglTestCase_007368_1, VkglTestCase_007368_2);

#define VkglTestCase_007369_1 "dEQP-GLES31.functional.shaders.uniform_block."
#define VkglTestCase_007369_2 "es32.valid.same_variable_and_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007369, VkglTestCase_007369_1, VkglTestCase_007369_2);

#define VkglTestCase_007370_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007370_2 "s32.valid.same_variable_and_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007370, VkglTestCase_007370_1, VkglTestCase_007370_2);

#define VkglTestCase_007371_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007371_2 "32.valid.same_variable_and_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007371, VkglTestCase_007371_1, VkglTestCase_007371_2);

#define VkglTestCase_007372_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007372_2 "2.valid.same_variable_and_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007372, VkglTestCase_007372_1, VkglTestCase_007372_2);

#define VkglTestCase_007373_1 "dEQP-GLES31.functional.shaders.uniform"
#define VkglTestCase_007373_2 "_block.es32.valid.struct_member_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007373, VkglTestCase_007373_1, VkglTestCase_007373_2);

#define VkglTestCase_007374_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007374_2 "block.es32.valid.struct_member_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007374, VkglTestCase_007374_1, VkglTestCase_007374_2);

#define VkglTestCase_007375_1 "dEQP-GLES31.functional.shaders.uniform_block.e"
#define VkglTestCase_007375_2 "s32.valid.struct_member_layout_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007375, VkglTestCase_007375_1, VkglTestCase_007375_2);

#define VkglTestCase_007376_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007376_2 "32.valid.struct_member_layout_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007376, VkglTestCase_007376_1, VkglTestCase_007376_2);

#define VkglTestCase_007377_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007377_2 "2.valid.struct_member_layout_column_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007377, VkglTestCase_007377_1, VkglTestCase_007377_2);

#define VkglTestCase_007378_1 "dEQP-GLES31.functional.shaders.uniform_block.es32"
#define VkglTestCase_007378_2 ".valid.struct_member_layout_column_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007378, VkglTestCase_007378_1, VkglTestCase_007378_2);

#define VkglTestCase_007379_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007379_2 "k.es32.valid.struct_member_layout_all_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007379, VkglTestCase_007379_1, VkglTestCase_007379_2);

#define VkglTestCase_007380_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007380_2 ".es32.valid.struct_member_layout_all_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007380, VkglTestCase_007380_1, VkglTestCase_007380_2);

#define VkglTestCase_007381_1 "dEQP-GLES31.functional.shaders.uniform_block.es"
#define VkglTestCase_007381_2 "32.valid.struct_member_layout_all_8_times_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007381, VkglTestCase_007381_1, VkglTestCase_007381_2);

#define VkglTestCase_007382_1 "dEQP-GLES31.functional.shaders.uniform_block.es3"
#define VkglTestCase_007382_2 "2.valid.struct_member_layout_all_8_times_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007382, VkglTestCase_007382_1, VkglTestCase_007382_2);

#define VkglTestCase_007383_1 "dEQP-GLES31.functional.shaders.uniform_"
#define VkglTestCase_007383_2 "block.es32.valid.long_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007383, VkglTestCase_007383_1, VkglTestCase_007383_2);

#define VkglTestCase_007384_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007384_2 "lock.es32.valid.long_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007384, VkglTestCase_007384_1, VkglTestCase_007384_2);

#define VkglTestCase_007385_1 "dEQP-GLES31.functional.shaders.uniform_b"
#define VkglTestCase_007385_2 "lock.es32.valid.long_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007385, VkglTestCase_007385_1, VkglTestCase_007385_2);

#define VkglTestCase_007386_1 "dEQP-GLES31.functional.shaders.uniform_bl"
#define VkglTestCase_007386_2 "ock.es32.valid.long_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007386, VkglTestCase_007386_1, VkglTestCase_007386_2);

#define VkglTestCase_007387_1 "dEQP-GLES31.functional.shaders.uniform_blo"
#define VkglTestCase_007387_2 "ck.es32.valid.underscore_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007387, VkglTestCase_007387_1, VkglTestCase_007387_2);

#define VkglTestCase_007388_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007388_2 "k.es32.valid.underscore_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007388, VkglTestCase_007388_1, VkglTestCase_007388_2);

#define VkglTestCase_007389_1 "dEQP-GLES31.functional.shaders.uniform_bloc"
#define VkglTestCase_007389_2 "k.es32.valid.underscore_instance_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007389, VkglTestCase_007389_1, VkglTestCase_007389_2);

#define VkglTestCase_007390_1 "dEQP-GLES31.functional.shaders.uniform_block"
#define VkglTestCase_007390_2 ".es32.valid.underscore_instance_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007390, VkglTestCase_007390_1, VkglTestCase_007390_2);
