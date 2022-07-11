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
#include "../ActsDeqpgles30043TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_042358_1 "dEQP-GLES3.functional.state_query.boolea"
#define VkglTestCase_042358_2 "n.primitive_restart_fixed_index_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042358, VkglTestCase_042358_1, VkglTestCase_042358_2);

#define VkglTestCase_042359_1 "dEQP-GLES3.functional.state_query.boolean"
#define VkglTestCase_042359_2 ".primitive_restart_fixed_index_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042359, VkglTestCase_042359_1, VkglTestCase_042359_2);

#define VkglTestCase_042360_1 "dEQP-GLES3.functional.state_query.boolean"
#define VkglTestCase_042360_2 ".primitive_restart_fixed_index_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042360, VkglTestCase_042360_1, VkglTestCase_042360_2);

#define VkglTestCase_042361_1 "dEQP-GLES3.functional.state_query.boolean."
#define VkglTestCase_042361_2 "primitive_restart_fixed_index_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042361, VkglTestCase_042361_1, VkglTestCase_042361_2);

#define VkglTestCase_042362_1 "dEQP-GLES3.functional.state_query.boolea"
#define VkglTestCase_042362_2 "n.primitive_restart_fixed_index_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042362, VkglTestCase_042362_1, VkglTestCase_042362_2);

#define VkglTestCase_042363_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042363_2 "oolean.rasterizer_discard_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042363, VkglTestCase_042363_1, VkglTestCase_042363_2);

#define VkglTestCase_042364_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042364_2 "oolean.rasterizer_discard_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042364, VkglTestCase_042364_1, VkglTestCase_042364_2);

#define VkglTestCase_042365_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042365_2 "oolean.rasterizer_discard_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042365, VkglTestCase_042365_1, VkglTestCase_042365_2);

#define VkglTestCase_042366_1 "dEQP-GLES3.functional.state_query.bo"
#define VkglTestCase_042366_2 "olean.rasterizer_discard_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042366, VkglTestCase_042366_1, VkglTestCase_042366_2);

#define VkglTestCase_042367_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042367_2 "boolean.rasterizer_discard_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042367, VkglTestCase_042367_1, VkglTestCase_042367_2);

#define VkglTestCase_042368_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042368_2 "ery.boolean.cull_face_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042368, VkglTestCase_042368_1, VkglTestCase_042368_2);

#define VkglTestCase_042369_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042369_2 "ry.boolean.cull_face_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042369, VkglTestCase_042369_1, VkglTestCase_042369_2);

#define VkglTestCase_042370_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042370_2 "ry.boolean.cull_face_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042370, VkglTestCase_042370_1, VkglTestCase_042370_2);

#define VkglTestCase_042371_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042371_2 "y.boolean.cull_face_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042371, VkglTestCase_042371_1, VkglTestCase_042371_2);

#define VkglTestCase_042372_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042372_2 "ery.boolean.cull_face_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042372, VkglTestCase_042372_1, VkglTestCase_042372_2);

#define VkglTestCase_042373_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042373_2 "oolean.polygon_offset_fill_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042373, VkglTestCase_042373_1, VkglTestCase_042373_2);

#define VkglTestCase_042374_1 "dEQP-GLES3.functional.state_query.bo"
#define VkglTestCase_042374_2 "olean.polygon_offset_fill_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042374, VkglTestCase_042374_1, VkglTestCase_042374_2);

#define VkglTestCase_042375_1 "dEQP-GLES3.functional.state_query.bo"
#define VkglTestCase_042375_2 "olean.polygon_offset_fill_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042375, VkglTestCase_042375_1, VkglTestCase_042375_2);

#define VkglTestCase_042376_1 "dEQP-GLES3.functional.state_query.boo"
#define VkglTestCase_042376_2 "lean.polygon_offset_fill_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042376, VkglTestCase_042376_1, VkglTestCase_042376_2);

#define VkglTestCase_042377_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042377_2 "oolean.polygon_offset_fill_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042377, VkglTestCase_042377_1, VkglTestCase_042377_2);

#define VkglTestCase_042378_1 "dEQP-GLES3.functional.state_query.bool"
#define VkglTestCase_042378_2 "ean.sample_alpha_to_coverage_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042378, VkglTestCase_042378_1, VkglTestCase_042378_2);

#define VkglTestCase_042379_1 "dEQP-GLES3.functional.state_query.bool"
#define VkglTestCase_042379_2 "ean.sample_alpha_to_coverage_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042379, VkglTestCase_042379_1, VkglTestCase_042379_2);

#define VkglTestCase_042380_1 "dEQP-GLES3.functional.state_query.bool"
#define VkglTestCase_042380_2 "ean.sample_alpha_to_coverage_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042380, VkglTestCase_042380_1, VkglTestCase_042380_2);

#define VkglTestCase_042381_1 "dEQP-GLES3.functional.state_query.boole"
#define VkglTestCase_042381_2 "an.sample_alpha_to_coverage_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042381, VkglTestCase_042381_1, VkglTestCase_042381_2);

#define VkglTestCase_042382_1 "dEQP-GLES3.functional.state_query.boo"
#define VkglTestCase_042382_2 "lean.sample_alpha_to_coverage_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042382, VkglTestCase_042382_1, VkglTestCase_042382_2);

#define VkglTestCase_042383_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042383_2 ".boolean.sample_coverage_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042383, VkglTestCase_042383_1, VkglTestCase_042383_2);

#define VkglTestCase_042384_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042384_2 "boolean.sample_coverage_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042384, VkglTestCase_042384_1, VkglTestCase_042384_2);

#define VkglTestCase_042385_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042385_2 "boolean.sample_coverage_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042385, VkglTestCase_042385_1, VkglTestCase_042385_2);

#define VkglTestCase_042386_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042386_2 "oolean.sample_coverage_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042386, VkglTestCase_042386_1, VkglTestCase_042386_2);

#define VkglTestCase_042387_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042387_2 ".boolean.sample_coverage_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042387, VkglTestCase_042387_1, VkglTestCase_042387_2);

#define VkglTestCase_042388_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042388_2 "y.boolean.scissor_test_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042388, VkglTestCase_042388_1, VkglTestCase_042388_2);

#define VkglTestCase_042389_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042389_2 "y.boolean.scissor_test_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042389, VkglTestCase_042389_1, VkglTestCase_042389_2);

#define VkglTestCase_042390_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042390_2 "y.boolean.scissor_test_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042390, VkglTestCase_042390_1, VkglTestCase_042390_2);

#define VkglTestCase_042391_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042391_2 ".boolean.scissor_test_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042391, VkglTestCase_042391_1, VkglTestCase_042391_2);

#define VkglTestCase_042392_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042392_2 "ry.boolean.scissor_test_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042392, VkglTestCase_042392_1, VkglTestCase_042392_2);

#define VkglTestCase_042393_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042393_2 "y.boolean.stencil_test_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042393, VkglTestCase_042393_1, VkglTestCase_042393_2);

#define VkglTestCase_042394_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042394_2 "y.boolean.stencil_test_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042394, VkglTestCase_042394_1, VkglTestCase_042394_2);

#define VkglTestCase_042395_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042395_2 "y.boolean.stencil_test_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042395, VkglTestCase_042395_1, VkglTestCase_042395_2);

#define VkglTestCase_042396_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042396_2 ".boolean.stencil_test_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042396, VkglTestCase_042396_1, VkglTestCase_042396_2);

#define VkglTestCase_042397_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042397_2 "ry.boolean.stencil_test_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042397, VkglTestCase_042397_1, VkglTestCase_042397_2);

#define VkglTestCase_042398_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042398_2 "ry.boolean.depth_test_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042398, VkglTestCase_042398_1, VkglTestCase_042398_2);

#define VkglTestCase_042399_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042399_2 "ry.boolean.depth_test_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042399, VkglTestCase_042399_1, VkglTestCase_042399_2);

#define VkglTestCase_042400_1 "dEQP-GLES3.functional.state_que"
#define VkglTestCase_042400_2 "ry.boolean.depth_test_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042400, VkglTestCase_042400_1, VkglTestCase_042400_2);

#define VkglTestCase_042401_1 "dEQP-GLES3.functional.state_quer"
#define VkglTestCase_042401_2 "y.boolean.depth_test_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042401, VkglTestCase_042401_1, VkglTestCase_042401_2);

#define VkglTestCase_042402_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042402_2 "ery.boolean.depth_test_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042402, VkglTestCase_042402_1, VkglTestCase_042402_2);

#define VkglTestCase_042403_1 "dEQP-GLES3.functional.state_"
#define VkglTestCase_042403_2 "query.boolean.blend_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042403, VkglTestCase_042403_1, VkglTestCase_042403_2);

#define VkglTestCase_042404_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_042404_2 "uery.boolean.blend_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042404, VkglTestCase_042404_1, VkglTestCase_042404_2);

#define VkglTestCase_042405_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_042405_2 "uery.boolean.blend_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042405, VkglTestCase_042405_1, VkglTestCase_042405_2);

#define VkglTestCase_042406_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042406_2 "ery.boolean.blend_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042406, VkglTestCase_042406_1, VkglTestCase_042406_2);

#define VkglTestCase_042407_1 "dEQP-GLES3.functional.state_"
#define VkglTestCase_042407_2 "query.boolean.blend_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042407, VkglTestCase_042407_1, VkglTestCase_042407_2);

#define VkglTestCase_042408_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_042408_2 "uery.boolean.dither_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042408, VkglTestCase_042408_1, VkglTestCase_042408_2);

#define VkglTestCase_042409_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_042409_2 "uery.boolean.dither_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042409, VkglTestCase_042409_1, VkglTestCase_042409_2);

#define VkglTestCase_042410_1 "dEQP-GLES3.functional.state_q"
#define VkglTestCase_042410_2 "uery.boolean.dither_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042410, VkglTestCase_042410_1, VkglTestCase_042410_2);

#define VkglTestCase_042411_1 "dEQP-GLES3.functional.state_qu"
#define VkglTestCase_042411_2 "ery.boolean.dither_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042411, VkglTestCase_042411_1, VkglTestCase_042411_2);

#define VkglTestCase_042412_1 "dEQP-GLES3.functional.state_"
#define VkglTestCase_042412_2 "query.boolean.dither_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042412, VkglTestCase_042412_1, VkglTestCase_042412_2);

#define VkglTestCase_042413_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042413_2 "boolean.color_writemask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042413, VkglTestCase_042413_1, VkglTestCase_042413_2);

#define VkglTestCase_042414_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042414_2 "boolean.color_writemask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042414, VkglTestCase_042414_1, VkglTestCase_042414_2);

#define VkglTestCase_042415_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042415_2 "oolean.color_writemask_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042415, VkglTestCase_042415_1, VkglTestCase_042415_2);

#define VkglTestCase_042416_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042416_2 ".boolean.color_writemask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042416, VkglTestCase_042416_1, VkglTestCase_042416_2);

#define VkglTestCase_042417_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042417_2 "boolean.depth_writemask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042417, VkglTestCase_042417_1, VkglTestCase_042417_2);

#define VkglTestCase_042418_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042418_2 "boolean.depth_writemask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042418, VkglTestCase_042418_1, VkglTestCase_042418_2);

#define VkglTestCase_042419_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042419_2 "oolean.depth_writemask_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042419, VkglTestCase_042419_1, VkglTestCase_042419_2);

#define VkglTestCase_042420_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042420_2 ".boolean.depth_writemask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042420, VkglTestCase_042420_1, VkglTestCase_042420_2);

#define VkglTestCase_042421_1 "dEQP-GLES3.functional.state_query.boo"
#define VkglTestCase_042421_2 "lean.sample_coverage_invert_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042421, VkglTestCase_042421_1, VkglTestCase_042421_2);

#define VkglTestCase_042422_1 "dEQP-GLES3.functional.state_query.boo"
#define VkglTestCase_042422_2 "lean.sample_coverage_invert_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042422, VkglTestCase_042422_1, VkglTestCase_042422_2);

#define VkglTestCase_042423_1 "dEQP-GLES3.functional.state_query.bool"
#define VkglTestCase_042423_2 "ean.sample_coverage_invert_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042423, VkglTestCase_042423_1, VkglTestCase_042423_2);

#define VkglTestCase_042424_1 "dEQP-GLES3.functional.state_query.bo"
#define VkglTestCase_042424_2 "olean.sample_coverage_invert_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042424, VkglTestCase_042424_1, VkglTestCase_042424_2);

#define VkglTestCase_042425_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042425_2 "boolean.shader_compiler_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042425, VkglTestCase_042425_1, VkglTestCase_042425_2);

#define VkglTestCase_042426_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042426_2 "boolean.shader_compiler_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042426, VkglTestCase_042426_1, VkglTestCase_042426_2);

#define VkglTestCase_042427_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042427_2 "oolean.shader_compiler_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042427, VkglTestCase_042427_1, VkglTestCase_042427_2);

#define VkglTestCase_042428_1 "dEQP-GLES3.functional.state_query"
#define VkglTestCase_042428_2 ".boolean.shader_compiler_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042428, VkglTestCase_042428_1, VkglTestCase_042428_2);

#define VkglTestCase_042429_1 "dEQP-GLES3.functional.state_query.boolean.t"
#define VkglTestCase_042429_2 "ransform_feedback_active_initial_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042429, VkglTestCase_042429_1, VkglTestCase_042429_2);

#define VkglTestCase_042430_1 "dEQP-GLES3.functional.state_query.boolean.t"
#define VkglTestCase_042430_2 "ransform_feedback_active_initial_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042430, VkglTestCase_042430_1, VkglTestCase_042430_2);

#define VkglTestCase_042431_1 "dEQP-GLES3.functional.state_query.boolean.tr"
#define VkglTestCase_042431_2 "ansform_feedback_active_initial_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042431, VkglTestCase_042431_1, VkglTestCase_042431_2);

#define VkglTestCase_042432_1 "dEQP-GLES3.functional.state_query.boolean."
#define VkglTestCase_042432_2 "transform_feedback_active_initial_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042432, VkglTestCase_042432_1, VkglTestCase_042432_2);

#define VkglTestCase_042433_1 "dEQP-GLES3.functional.state_query.boolean.t"
#define VkglTestCase_042433_2 "ransform_feedback_paused_initial_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042433, VkglTestCase_042433_1, VkglTestCase_042433_2);

#define VkglTestCase_042434_1 "dEQP-GLES3.functional.state_query.boolean.t"
#define VkglTestCase_042434_2 "ransform_feedback_paused_initial_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042434, VkglTestCase_042434_1, VkglTestCase_042434_2);

#define VkglTestCase_042435_1 "dEQP-GLES3.functional.state_query.boolean.tr"
#define VkglTestCase_042435_2 "ansform_feedback_paused_initial_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042435, VkglTestCase_042435_1, VkglTestCase_042435_2);

#define VkglTestCase_042436_1 "dEQP-GLES3.functional.state_query.boolean."
#define VkglTestCase_042436_2 "transform_feedback_paused_initial_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042436, VkglTestCase_042436_1, VkglTestCase_042436_2);

#define VkglTestCase_042437_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042437_2 "oolean.transform_feedback_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042437, VkglTestCase_042437_1, VkglTestCase_042437_2);

#define VkglTestCase_042438_1 "dEQP-GLES3.functional.state_query.b"
#define VkglTestCase_042438_2 "oolean.transform_feedback_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042438, VkglTestCase_042438_1, VkglTestCase_042438_2);

#define VkglTestCase_042439_1 "dEQP-GLES3.functional.state_query.bo"
#define VkglTestCase_042439_2 "olean.transform_feedback_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042439, VkglTestCase_042439_1, VkglTestCase_042439_2);

#define VkglTestCase_042440_1 "dEQP-GLES3.functional.state_query."
#define VkglTestCase_042440_2 "boolean.transform_feedback_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042440, VkglTestCase_042440_1, VkglTestCase_042440_2);

#define VkglTestCase_042441_1 "dEQP-GLES3.functional.state_query.boolean.t"
#define VkglTestCase_042441_2 "ransform_feedback_implicit_resume_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042441, VkglTestCase_042441_1, VkglTestCase_042441_2);

#define VkglTestCase_042442_1 "dEQP-GLES3.functional.state_query.boolean.t"
#define VkglTestCase_042442_2 "ransform_feedback_implicit_resume_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042442, VkglTestCase_042442_1, VkglTestCase_042442_2);

#define VkglTestCase_042443_1 "dEQP-GLES3.functional.state_query.boolean.tr"
#define VkglTestCase_042443_2 "ansform_feedback_implicit_resume_getinteger64"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042443, VkglTestCase_042443_1, VkglTestCase_042443_2);

#define VkglTestCase_042444_1 "dEQP-GLES3.functional.state_query.boolean."
#define VkglTestCase_042444_2 "transform_feedback_implicit_resume_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles30043TestSuite, TestCase_042444, VkglTestCase_042444_1, VkglTestCase_042444_2);
