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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004070_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004070_2 "31.assignment.implicit_to_implicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004070, VkglTestCase_004070_1, VkglTestCase_004070_2);

#define VkglTestCase_004071_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004071_2 "1.assignment.implicit_to_implicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004071, VkglTestCase_004071_1, VkglTestCase_004071_2);

#define VkglTestCase_004072_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004072_2 "s31.assignment.implicit_to_implicit.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004072, VkglTestCase_004072_1, VkglTestCase_004072_2);

#define VkglTestCase_004073_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004073_2 "31.assignment.implicit_to_implicit.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004073, VkglTestCase_004073_1, VkglTestCase_004073_2);

#define VkglTestCase_004074_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004074_2 "1.assignment.implicit_to_implicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004074, VkglTestCase_004074_1, VkglTestCase_004074_2);

#define VkglTestCase_004075_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004075_2 ".assignment.implicit_to_implicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004075, VkglTestCase_004075_1, VkglTestCase_004075_2);

#define VkglTestCase_004076_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004076_2 ".assignment.implicit_to_implicit.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004076, VkglTestCase_004076_1, VkglTestCase_004076_2);

#define VkglTestCase_004077_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31."
#define VkglTestCase_004077_2 "assignment.implicit_to_implicit.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004077, VkglTestCase_004077_1, VkglTestCase_004077_2);

#define VkglTestCase_004078_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004078_2 "31.assignment.implicit_to_implicit.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004078, VkglTestCase_004078_1, VkglTestCase_004078_2);

#define VkglTestCase_004079_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004079_2 "1.assignment.implicit_to_implicit.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004079, VkglTestCase_004079_1, VkglTestCase_004079_2);

#define VkglTestCase_004080_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004080_2 "1.assignment.implicit_to_implicit.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004080, VkglTestCase_004080_1, VkglTestCase_004080_2);

#define VkglTestCase_004081_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004081_2 ".assignment.implicit_to_implicit.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004081, VkglTestCase_004081_1, VkglTestCase_004081_2);

#define VkglTestCase_004082_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004082_2 "31.assignment.implicit_to_implicit.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004082, VkglTestCase_004082_1, VkglTestCase_004082_2);

#define VkglTestCase_004083_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004083_2 "1.assignment.implicit_to_implicit.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004083, VkglTestCase_004083_1, VkglTestCase_004083_2);

#define VkglTestCase_004084_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004084_2 "31.assignment.implicit_to_implicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004084, VkglTestCase_004084_1, VkglTestCase_004084_2);

#define VkglTestCase_004085_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004085_2 "1.assignment.implicit_to_implicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004085, VkglTestCase_004085_1, VkglTestCase_004085_2);

#define VkglTestCase_004086_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004086_2 "1.assignment.implicit_to_implicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004086, VkglTestCase_004086_1, VkglTestCase_004086_2);

#define VkglTestCase_004087_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004087_2 ".assignment.implicit_to_implicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004087, VkglTestCase_004087_1, VkglTestCase_004087_2);

#define VkglTestCase_004088_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004088_2 "31.assignment.implicit_to_implicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004088, VkglTestCase_004088_1, VkglTestCase_004088_2);

#define VkglTestCase_004089_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004089_2 "1.assignment.implicit_to_implicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004089, VkglTestCase_004089_1, VkglTestCase_004089_2);

#define VkglTestCase_004362_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004362_2 "32.assignment.implicit_to_implicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004362, VkglTestCase_004362_1, VkglTestCase_004362_2);

#define VkglTestCase_004363_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004363_2 "2.assignment.implicit_to_implicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004363, VkglTestCase_004363_1, VkglTestCase_004363_2);

#define VkglTestCase_004364_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004364_2 "s32.assignment.implicit_to_implicit.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004364, VkglTestCase_004364_1, VkglTestCase_004364_2);

#define VkglTestCase_004365_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004365_2 "32.assignment.implicit_to_implicit.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004365, VkglTestCase_004365_1, VkglTestCase_004365_2);

#define VkglTestCase_004366_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004366_2 "2.assignment.implicit_to_implicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004366, VkglTestCase_004366_1, VkglTestCase_004366_2);

#define VkglTestCase_004367_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004367_2 ".assignment.implicit_to_implicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004367, VkglTestCase_004367_1, VkglTestCase_004367_2);

#define VkglTestCase_004368_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004368_2 ".assignment.implicit_to_implicit.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004368, VkglTestCase_004368_1, VkglTestCase_004368_2);

#define VkglTestCase_004369_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32."
#define VkglTestCase_004369_2 "assignment.implicit_to_implicit.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004369, VkglTestCase_004369_1, VkglTestCase_004369_2);

#define VkglTestCase_004370_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004370_2 "32.assignment.implicit_to_implicit.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004370, VkglTestCase_004370_1, VkglTestCase_004370_2);

#define VkglTestCase_004371_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004371_2 "2.assignment.implicit_to_implicit.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004371, VkglTestCase_004371_1, VkglTestCase_004371_2);

#define VkglTestCase_004372_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004372_2 "2.assignment.implicit_to_implicit.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004372, VkglTestCase_004372_1, VkglTestCase_004372_2);

#define VkglTestCase_004373_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004373_2 ".assignment.implicit_to_implicit.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004373, VkglTestCase_004373_1, VkglTestCase_004373_2);

#define VkglTestCase_004374_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004374_2 "32.assignment.implicit_to_implicit.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004374, VkglTestCase_004374_1, VkglTestCase_004374_2);

#define VkglTestCase_004375_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004375_2 "2.assignment.implicit_to_implicit.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004375, VkglTestCase_004375_1, VkglTestCase_004375_2);

#define VkglTestCase_004376_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004376_2 "32.assignment.implicit_to_implicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004376, VkglTestCase_004376_1, VkglTestCase_004376_2);

#define VkglTestCase_004377_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004377_2 "2.assignment.implicit_to_implicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004377, VkglTestCase_004377_1, VkglTestCase_004377_2);

#define VkglTestCase_004378_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004378_2 "2.assignment.implicit_to_implicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004378, VkglTestCase_004378_1, VkglTestCase_004378_2);

#define VkglTestCase_004379_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004379_2 ".assignment.implicit_to_implicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004379, VkglTestCase_004379_1, VkglTestCase_004379_2);

#define VkglTestCase_004380_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004380_2 "32.assignment.implicit_to_implicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004380, VkglTestCase_004380_1, VkglTestCase_004380_2);

#define VkglTestCase_004381_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004381_2 "2.assignment.implicit_to_implicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004381, VkglTestCase_004381_1, VkglTestCase_004381_2);
