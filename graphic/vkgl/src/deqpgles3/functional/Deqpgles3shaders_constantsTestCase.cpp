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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001332_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001332_2 ".constants.float_input_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001332, VkglTestCase_001332_1, VkglTestCase_001332_2);

#define VkglTestCase_001333_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001333_2 "constants.float_input_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001333, VkglTestCase_001333_1, VkglTestCase_001333_2);

#define VkglTestCase_001334_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001334_2 "constants.float_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001334, VkglTestCase_001334_1, VkglTestCase_001334_2);

#define VkglTestCase_001335_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001335_2 "onstants.float_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001335, VkglTestCase_001335_1, VkglTestCase_001335_2);

#define VkglTestCase_001336_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001336_2 "rs.constants.float_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001336, VkglTestCase_001336_1, VkglTestCase_001336_2);

#define VkglTestCase_001337_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001337_2 "s.constants.float_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001337, VkglTestCase_001337_1, VkglTestCase_001337_2);

#define VkglTestCase_001338_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001338_2 "rs.constants.float_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001338, VkglTestCase_001338_1, VkglTestCase_001338_2);

#define VkglTestCase_001339_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001339_2 "s.constants.float_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001339, VkglTestCase_001339_1, VkglTestCase_001339_2);

#define VkglTestCase_001340_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001340_2 "rs.constants.float_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001340, VkglTestCase_001340_1, VkglTestCase_001340_2);

#define VkglTestCase_001341_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001341_2 "s.constants.float_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001341, VkglTestCase_001341_1, VkglTestCase_001341_2);

#define VkglTestCase_001342_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001342_2 "rs.constants.float_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001342, VkglTestCase_001342_1, VkglTestCase_001342_2);

#define VkglTestCase_001343_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001343_2 "s.constants.float_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001343, VkglTestCase_001343_1, VkglTestCase_001343_2);

#define VkglTestCase_001344_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001344_2 "rs.constants.float_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001344, VkglTestCase_001344_1, VkglTestCase_001344_2);

#define VkglTestCase_001345_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001345_2 "s.constants.float_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001345, VkglTestCase_001345_1, VkglTestCase_001345_2);

#define VkglTestCase_001346_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001346_2 "rs.constants.float_5_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001346, VkglTestCase_001346_1, VkglTestCase_001346_2);

#define VkglTestCase_001347_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001347_2 "s.constants.float_5_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001347, VkglTestCase_001347_1, VkglTestCase_001347_2);

#define VkglTestCase_001348_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001348_2 "rs.constants.float_6_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001348, VkglTestCase_001348_1, VkglTestCase_001348_2);

#define VkglTestCase_001349_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001349_2 "s.constants.float_6_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001349, VkglTestCase_001349_1, VkglTestCase_001349_2);

#define VkglTestCase_001350_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001350_2 "rs.constants.float_7_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001350, VkglTestCase_001350_1, VkglTestCase_001350_2);

#define VkglTestCase_001351_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001351_2 "s.constants.float_7_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001351, VkglTestCase_001351_1, VkglTestCase_001351_2);

#define VkglTestCase_001352_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001352_2 "rs.constants.float_8_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001352, VkglTestCase_001352_1, VkglTestCase_001352_2);

#define VkglTestCase_001353_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001353_2 "s.constants.float_8_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001353, VkglTestCase_001353_1, VkglTestCase_001353_2);

#define VkglTestCase_001354_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001354_2 "onstants.float_f_suffix_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001354, VkglTestCase_001354_1, VkglTestCase_001354_2);

#define VkglTestCase_001355_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001355_2 "nstants.float_f_suffix_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001355, VkglTestCase_001355_1, VkglTestCase_001355_2);

#define VkglTestCase_001356_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001356_2 "onstants.float_f_suffix_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001356, VkglTestCase_001356_1, VkglTestCase_001356_2);

#define VkglTestCase_001357_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001357_2 "nstants.float_f_suffix_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001357, VkglTestCase_001357_1, VkglTestCase_001357_2);

#define VkglTestCase_001358_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_001358_2 "ers.constants.int_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001358, VkglTestCase_001358_1, VkglTestCase_001358_2);

#define VkglTestCase_001359_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001359_2 "rs.constants.int_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001359, VkglTestCase_001359_1, VkglTestCase_001359_2);

#define VkglTestCase_001360_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_001360_2 "ers.constants.int_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001360, VkglTestCase_001360_1, VkglTestCase_001360_2);

#define VkglTestCase_001361_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001361_2 "rs.constants.int_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001361, VkglTestCase_001361_1, VkglTestCase_001361_2);

#define VkglTestCase_001362_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_001362_2 "ers.constants.int_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001362, VkglTestCase_001362_1, VkglTestCase_001362_2);

#define VkglTestCase_001363_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001363_2 "rs.constants.int_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001363, VkglTestCase_001363_1, VkglTestCase_001363_2);

#define VkglTestCase_001364_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_001364_2 "ers.constants.int_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001364, VkglTestCase_001364_1, VkglTestCase_001364_2);

#define VkglTestCase_001365_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001365_2 "rs.constants.int_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001365, VkglTestCase_001365_1, VkglTestCase_001365_2);

#define VkglTestCase_001366_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_001366_2 "ers.constants.int_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001366, VkglTestCase_001366_1, VkglTestCase_001366_2);

#define VkglTestCase_001367_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001367_2 "rs.constants.int_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001367, VkglTestCase_001367_1, VkglTestCase_001367_2);

#define VkglTestCase_001368_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_001368_2 "ers.constants.bool_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001368, VkglTestCase_001368_1, VkglTestCase_001368_2);

#define VkglTestCase_001369_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001369_2 "rs.constants.bool_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001369, VkglTestCase_001369_1, VkglTestCase_001369_2);

#define VkglTestCase_001370_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_001370_2 "ers.constants.bool_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001370, VkglTestCase_001370_1, VkglTestCase_001370_2);

#define VkglTestCase_001371_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_001371_2 "rs.constants.bool_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001371, VkglTestCase_001371_1, VkglTestCase_001371_2);

#define VkglTestCase_001372_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001372_2 "nstants.const_float_global_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001372, VkglTestCase_001372_1, VkglTestCase_001372_2);

#define VkglTestCase_001373_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001373_2 "stants.const_float_global_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001373, VkglTestCase_001373_1, VkglTestCase_001373_2);

#define VkglTestCase_001374_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001374_2 "onstants.const_float_main_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001374, VkglTestCase_001374_1, VkglTestCase_001374_2);

#define VkglTestCase_001375_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001375_2 "nstants.const_float_main_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001375, VkglTestCase_001375_1, VkglTestCase_001375_2);

#define VkglTestCase_001376_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001376_2 "stants.const_float_function_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001376, VkglTestCase_001376_1, VkglTestCase_001376_2);

#define VkglTestCase_001377_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_001377_2 "tants.const_float_function_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001377, VkglTestCase_001377_1, VkglTestCase_001377_2);

#define VkglTestCase_001378_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001378_2 "nstants.const_float_scope_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001378, VkglTestCase_001378_1, VkglTestCase_001378_2);

#define VkglTestCase_001379_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001379_2 "stants.const_float_scope_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001379, VkglTestCase_001379_1, VkglTestCase_001379_2);

#define VkglTestCase_001380_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_001380_2 "s.const_float_scope_shawdowing_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001380, VkglTestCase_001380_1, VkglTestCase_001380_2);

#define VkglTestCase_001381_1 "dEQP-GLES3.functional.shaders.constants"
#define VkglTestCase_001381_2 ".const_float_scope_shawdowing_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001381, VkglTestCase_001381_1, VkglTestCase_001381_2);

#define VkglTestCase_001382_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_001382_2 "s.const_float_scope_shawdowing_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001382, VkglTestCase_001382_1, VkglTestCase_001382_2);

#define VkglTestCase_001383_1 "dEQP-GLES3.functional.shaders.constants"
#define VkglTestCase_001383_2 ".const_float_scope_shawdowing_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001383, VkglTestCase_001383_1, VkglTestCase_001383_2);

#define VkglTestCase_001384_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_001384_2 "s.const_float_scope_shawdowing_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001384, VkglTestCase_001384_1, VkglTestCase_001384_2);

#define VkglTestCase_001385_1 "dEQP-GLES3.functional.shaders.constants"
#define VkglTestCase_001385_2 ".const_float_scope_shawdowing_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001385, VkglTestCase_001385_1, VkglTestCase_001385_2);

#define VkglTestCase_001386_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_001386_2 "s.const_float_scope_shawdowing_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001386, VkglTestCase_001386_1, VkglTestCase_001386_2);

#define VkglTestCase_001387_1 "dEQP-GLES3.functional.shaders.constants"
#define VkglTestCase_001387_2 ".const_float_scope_shawdowing_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001387, VkglTestCase_001387_1, VkglTestCase_001387_2);

#define VkglTestCase_001388_1 "dEQP-GLES3.functional.shaders.constants."
#define VkglTestCase_001388_2 "const_float_operations_with_const_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001388, VkglTestCase_001388_1, VkglTestCase_001388_2);

#define VkglTestCase_001389_1 "dEQP-GLES3.functional.shaders.constants.c"
#define VkglTestCase_001389_2 "onst_float_operations_with_const_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001389, VkglTestCase_001389_1, VkglTestCase_001389_2);

#define VkglTestCase_001390_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_001390_2 "ants.const_float_assignment_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001390, VkglTestCase_001390_1, VkglTestCase_001390_2);

#define VkglTestCase_001391_1 "dEQP-GLES3.functional.shaders.consta"
#define VkglTestCase_001391_2 "nts.const_float_assignment_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001391, VkglTestCase_001391_1, VkglTestCase_001391_2);

#define VkglTestCase_001392_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_001392_2 "ants.const_float_assignment_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001392, VkglTestCase_001392_1, VkglTestCase_001392_2);

#define VkglTestCase_001393_1 "dEQP-GLES3.functional.shaders.consta"
#define VkglTestCase_001393_2 "nts.const_float_assignment_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001393, VkglTestCase_001393_1, VkglTestCase_001393_2);

#define VkglTestCase_001394_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_001394_2 "ants.const_float_assignment_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001394, VkglTestCase_001394_1, VkglTestCase_001394_2);

#define VkglTestCase_001395_1 "dEQP-GLES3.functional.shaders.consta"
#define VkglTestCase_001395_2 "nts.const_float_assignment_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001395, VkglTestCase_001395_1, VkglTestCase_001395_2);

#define VkglTestCase_001396_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_001396_2 "ants.const_float_assignment_4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001396, VkglTestCase_001396_1, VkglTestCase_001396_2);

#define VkglTestCase_001397_1 "dEQP-GLES3.functional.shaders.consta"
#define VkglTestCase_001397_2 "nts.const_float_assignment_4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001397, VkglTestCase_001397_1, VkglTestCase_001397_2);

#define VkglTestCase_001398_1 "dEQP-GLES3.functional.shaders.consta"
#define VkglTestCase_001398_2 "nts.const_float_assign_uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001398, VkglTestCase_001398_1, VkglTestCase_001398_2);

#define VkglTestCase_001399_1 "dEQP-GLES3.functional.shaders.constan"
#define VkglTestCase_001399_2 "ts.const_float_assign_uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001399, VkglTestCase_001399_1, VkglTestCase_001399_2);

#define VkglTestCase_001400_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001400_2 "stants.const_float_assign_varying"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001400, VkglTestCase_001400_1, VkglTestCase_001400_2);

#define VkglTestCase_001401_1 "dEQP-GLES3.functional.shaders.constan"
#define VkglTestCase_001401_2 "ts.const_float_function_gotcha_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001401, VkglTestCase_001401_1, VkglTestCase_001401_2);

#define VkglTestCase_001402_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_001402_2 "s.const_float_function_gotcha_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001402, VkglTestCase_001402_1, VkglTestCase_001402_2);

#define VkglTestCase_001403_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001403_2 "stants.const_float_from_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001403, VkglTestCase_001403_1, VkglTestCase_001403_2);

#define VkglTestCase_001404_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_001404_2 "tants.const_float_from_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001404, VkglTestCase_001404_1, VkglTestCase_001404_2);

#define VkglTestCase_001405_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_001405_2 "tants.const_float_from_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001405, VkglTestCase_001405_1, VkglTestCase_001405_2);

#define VkglTestCase_001406_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_001406_2 "ants.const_float_from_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001406, VkglTestCase_001406_1, VkglTestCase_001406_2);

#define VkglTestCase_001407_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_001407_2 "tants.const_float_from_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001407, VkglTestCase_001407_1, VkglTestCase_001407_2);

#define VkglTestCase_001408_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_001408_2 "ants.const_float_from_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001408, VkglTestCase_001408_1, VkglTestCase_001408_2);

#define VkglTestCase_001409_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_001409_2 "tants.const_float_from_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001409, VkglTestCase_001409_1, VkglTestCase_001409_2);

#define VkglTestCase_001410_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_001410_2 "ants.const_float_from_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001410, VkglTestCase_001410_1, VkglTestCase_001410_2);

#define VkglTestCase_001411_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_001411_2 "s.const_float_assign_variable_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001411, VkglTestCase_001411_1, VkglTestCase_001411_2);

#define VkglTestCase_001412_1 "dEQP-GLES3.functional.shaders.constants"
#define VkglTestCase_001412_2 ".const_float_assign_variable_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001412, VkglTestCase_001412_1, VkglTestCase_001412_2);

#define VkglTestCase_001413_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_001413_2 "s.const_float_assign_variable_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001413, VkglTestCase_001413_1, VkglTestCase_001413_2);

#define VkglTestCase_001414_1 "dEQP-GLES3.functional.shaders.constants"
#define VkglTestCase_001414_2 ".const_float_assign_variable_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001414, VkglTestCase_001414_1, VkglTestCase_001414_2);

#define VkglTestCase_001415_1 "dEQP-GLES3.functional.shaders.constan"
#define VkglTestCase_001415_2 "ts.const_float_assign_user_func_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001415, VkglTestCase_001415_1, VkglTestCase_001415_2);

#define VkglTestCase_001416_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_001416_2 "s.const_float_assign_user_func_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001416, VkglTestCase_001416_1, VkglTestCase_001416_2);

#define VkglTestCase_001417_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001417_2 "nstants.const_mat_multiply_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001417, VkglTestCase_001417_1, VkglTestCase_001417_2);

#define VkglTestCase_001418_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001418_2 "stants.const_mat_multiply_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001418, VkglTestCase_001418_1, VkglTestCase_001418_2);

#define VkglTestCase_001419_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001419_2 ".constants.int_decimal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001419, VkglTestCase_001419_1, VkglTestCase_001419_2);

#define VkglTestCase_001420_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001420_2 "constants.int_decimal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001420, VkglTestCase_001420_1, VkglTestCase_001420_2);

#define VkglTestCase_001421_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_001421_2 "s.constants.int_octal_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001421, VkglTestCase_001421_1, VkglTestCase_001421_2);

#define VkglTestCase_001422_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001422_2 ".constants.int_octal_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001422, VkglTestCase_001422_1, VkglTestCase_001422_2);

#define VkglTestCase_001423_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001423_2 "nstants.int_hexadecimal_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001423, VkglTestCase_001423_1, VkglTestCase_001423_2);

#define VkglTestCase_001424_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001424_2 "stants.int_hexadecimal_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001424, VkglTestCase_001424_1, VkglTestCase_001424_2);

#define VkglTestCase_001425_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001425_2 "nstants.int_hexadecimal_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001425, VkglTestCase_001425_1, VkglTestCase_001425_2);

#define VkglTestCase_001426_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001426_2 "stants.int_hexadecimal_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001426, VkglTestCase_001426_1, VkglTestCase_001426_2);

#define VkglTestCase_001427_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001427_2 "constants.uint_decimal_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001427, VkglTestCase_001427_1, VkglTestCase_001427_2);

#define VkglTestCase_001428_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001428_2 "onstants.uint_decimal_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001428, VkglTestCase_001428_1, VkglTestCase_001428_2);

#define VkglTestCase_001429_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001429_2 "constants.uint_decimal_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001429, VkglTestCase_001429_1, VkglTestCase_001429_2);

#define VkglTestCase_001430_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001430_2 "onstants.uint_decimal_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001430, VkglTestCase_001430_1, VkglTestCase_001430_2);

#define VkglTestCase_001431_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001431_2 "constants.uint_decimal_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001431, VkglTestCase_001431_1, VkglTestCase_001431_2);

#define VkglTestCase_001432_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001432_2 "onstants.uint_decimal_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001432, VkglTestCase_001432_1, VkglTestCase_001432_2);

#define VkglTestCase_001433_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001433_2 "constants.uint_decimal_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001433, VkglTestCase_001433_1, VkglTestCase_001433_2);

#define VkglTestCase_001434_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001434_2 "onstants.uint_decimal_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001434, VkglTestCase_001434_1, VkglTestCase_001434_2);

#define VkglTestCase_001435_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001435_2 ".constants.uint_octal_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001435, VkglTestCase_001435_1, VkglTestCase_001435_2);

#define VkglTestCase_001436_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001436_2 "constants.uint_octal_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001436, VkglTestCase_001436_1, VkglTestCase_001436_2);

#define VkglTestCase_001437_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001437_2 ".constants.uint_octal_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001437, VkglTestCase_001437_1, VkglTestCase_001437_2);

#define VkglTestCase_001438_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001438_2 "constants.uint_octal_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001438, VkglTestCase_001438_1, VkglTestCase_001438_2);

#define VkglTestCase_001439_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001439_2 "nstants.uint_hexadecimal_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001439, VkglTestCase_001439_1, VkglTestCase_001439_2);

#define VkglTestCase_001440_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001440_2 "stants.uint_hexadecimal_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001440, VkglTestCase_001440_1, VkglTestCase_001440_2);

#define VkglTestCase_001441_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001441_2 "nstants.uint_hexadecimal_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001441, VkglTestCase_001441_1, VkglTestCase_001441_2);

#define VkglTestCase_001442_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001442_2 "stants.uint_hexadecimal_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001442, VkglTestCase_001442_1, VkglTestCase_001442_2);

#define VkglTestCase_001443_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001443_2 "constants.int_from_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001443, VkglTestCase_001443_1, VkglTestCase_001443_2);

#define VkglTestCase_001444_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001444_2 "onstants.int_from_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001444, VkglTestCase_001444_1, VkglTestCase_001444_2);

#define VkglTestCase_001445_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001445_2 "onstants.int_from_uint_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001445, VkglTestCase_001445_1, VkglTestCase_001445_2);

#define VkglTestCase_001446_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001446_2 "nstants.int_from_uint_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001446, VkglTestCase_001446_1, VkglTestCase_001446_2);

#define VkglTestCase_001447_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001447_2 "constants.uint_from_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001447, VkglTestCase_001447_1, VkglTestCase_001447_2);

#define VkglTestCase_001448_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001448_2 "onstants.uint_from_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001448, VkglTestCase_001448_1, VkglTestCase_001448_2);

#define VkglTestCase_001449_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001449_2 "onstants.uint_from_int_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001449, VkglTestCase_001449_1, VkglTestCase_001449_2);

#define VkglTestCase_001450_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001450_2 "nstants.uint_from_int_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001450, VkglTestCase_001450_1, VkglTestCase_001450_2);

#define VkglTestCase_001451_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001451_2 "constants.int_from_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001451, VkglTestCase_001451_1, VkglTestCase_001451_2);

#define VkglTestCase_001452_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001452_2 "onstants.int_from_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001452, VkglTestCase_001452_1, VkglTestCase_001452_2);

#define VkglTestCase_001453_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001453_2 "onstants.uint_from_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001453, VkglTestCase_001453_1, VkglTestCase_001453_2);

#define VkglTestCase_001454_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001454_2 "nstants.uint_from_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001454, VkglTestCase_001454_1, VkglTestCase_001454_2);

#define VkglTestCase_001455_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001455_2 "constants.bool_from_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001455, VkglTestCase_001455_1, VkglTestCase_001455_2);

#define VkglTestCase_001456_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001456_2 "onstants.bool_from_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001456, VkglTestCase_001456_1, VkglTestCase_001456_2);

#define VkglTestCase_001457_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001457_2 "constants.bool_from_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001457, VkglTestCase_001457_1, VkglTestCase_001457_2);

#define VkglTestCase_001458_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001458_2 "onstants.bool_from_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001458, VkglTestCase_001458_1, VkglTestCase_001458_2);

#define VkglTestCase_001459_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001459_2 "onstants.bool_from_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001459, VkglTestCase_001459_1, VkglTestCase_001459_2);

#define VkglTestCase_001460_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001460_2 "nstants.bool_from_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001460, VkglTestCase_001460_1, VkglTestCase_001460_2);

#define VkglTestCase_001461_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001461_2 "stants.float_int_f_suffix_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001461, VkglTestCase_001461_1, VkglTestCase_001461_2);

#define VkglTestCase_001462_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_001462_2 "tants.float_int_f_suffix_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001462, VkglTestCase_001462_1, VkglTestCase_001462_2);

#define VkglTestCase_001463_1 "dEQP-GLES3.functional.shaders.con"
#define VkglTestCase_001463_2 "stants.float_int_f_suffix_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001463, VkglTestCase_001463_1, VkglTestCase_001463_2);

#define VkglTestCase_001464_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_001464_2 "tants.float_int_f_suffix_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001464, VkglTestCase_001464_1, VkglTestCase_001464_2);

#define VkglTestCase_001465_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_001465_2 ".constants.int_l_suffix_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001465, VkglTestCase_001465_1, VkglTestCase_001465_2);

#define VkglTestCase_001466_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001466_2 "constants.int_l_suffix_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001466, VkglTestCase_001466_1, VkglTestCase_001466_2);

#define VkglTestCase_001467_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001467_2 "constants.uint_ul_suffix_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001467, VkglTestCase_001467_1, VkglTestCase_001467_2);

#define VkglTestCase_001468_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001468_2 "onstants.uint_ul_suffix_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001468, VkglTestCase_001468_1, VkglTestCase_001468_2);

#define VkglTestCase_001469_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001469_2 "onstants.invalid_octal_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001469, VkglTestCase_001469_1, VkglTestCase_001469_2);

#define VkglTestCase_001470_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001470_2 "nstants.invalid_octal_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001470, VkglTestCase_001470_1, VkglTestCase_001470_2);

#define VkglTestCase_001471_1 "dEQP-GLES3.functional.shaders.c"
#define VkglTestCase_001471_2 "onstants.invalid_octal_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001471, VkglTestCase_001471_1, VkglTestCase_001471_2);

#define VkglTestCase_001472_1 "dEQP-GLES3.functional.shaders.co"
#define VkglTestCase_001472_2 "nstants.invalid_octal_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001472, VkglTestCase_001472_1, VkglTestCase_001472_2);

#define VkglTestCase_001473_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_001473_2 "tants.invalid_hexadecimal_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001473, VkglTestCase_001473_1, VkglTestCase_001473_2);

#define VkglTestCase_001474_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_001474_2 "ants.invalid_hexadecimal_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001474, VkglTestCase_001474_1, VkglTestCase_001474_2);

#define VkglTestCase_001475_1 "dEQP-GLES3.functional.shaders.cons"
#define VkglTestCase_001475_2 "tants.invalid_hexadecimal_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001475, VkglTestCase_001475_1, VkglTestCase_001475_2);

#define VkglTestCase_001476_1 "dEQP-GLES3.functional.shaders.const"
#define VkglTestCase_001476_2 "ants.invalid_hexadecimal_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001476, VkglTestCase_001476_1, VkglTestCase_001476_2);
