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

#define VkglTestCase_004030_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004030_2 "31.assignment.explicit_to_implicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004030, VkglTestCase_004030_1, VkglTestCase_004030_2);

#define VkglTestCase_004031_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004031_2 "1.assignment.explicit_to_implicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004031, VkglTestCase_004031_1, VkglTestCase_004031_2);

#define VkglTestCase_004032_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004032_2 "s31.assignment.explicit_to_implicit.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004032, VkglTestCase_004032_1, VkglTestCase_004032_2);

#define VkglTestCase_004033_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004033_2 "31.assignment.explicit_to_implicit.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004033, VkglTestCase_004033_1, VkglTestCase_004033_2);

#define VkglTestCase_004034_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004034_2 "1.assignment.explicit_to_implicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004034, VkglTestCase_004034_1, VkglTestCase_004034_2);

#define VkglTestCase_004035_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004035_2 ".assignment.explicit_to_implicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004035, VkglTestCase_004035_1, VkglTestCase_004035_2);

#define VkglTestCase_004036_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004036_2 ".assignment.explicit_to_implicit.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004036, VkglTestCase_004036_1, VkglTestCase_004036_2);

#define VkglTestCase_004037_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31."
#define VkglTestCase_004037_2 "assignment.explicit_to_implicit.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004037, VkglTestCase_004037_1, VkglTestCase_004037_2);

#define VkglTestCase_004038_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004038_2 "31.assignment.explicit_to_implicit.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004038, VkglTestCase_004038_1, VkglTestCase_004038_2);

#define VkglTestCase_004039_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004039_2 "1.assignment.explicit_to_implicit.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004039, VkglTestCase_004039_1, VkglTestCase_004039_2);

#define VkglTestCase_004040_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004040_2 "1.assignment.explicit_to_implicit.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004040, VkglTestCase_004040_1, VkglTestCase_004040_2);

#define VkglTestCase_004041_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004041_2 ".assignment.explicit_to_implicit.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004041, VkglTestCase_004041_1, VkglTestCase_004041_2);

#define VkglTestCase_004042_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004042_2 "31.assignment.explicit_to_implicit.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004042, VkglTestCase_004042_1, VkglTestCase_004042_2);

#define VkglTestCase_004043_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004043_2 "1.assignment.explicit_to_implicit.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004043, VkglTestCase_004043_1, VkglTestCase_004043_2);

#define VkglTestCase_004044_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004044_2 "31.assignment.explicit_to_implicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004044, VkglTestCase_004044_1, VkglTestCase_004044_2);

#define VkglTestCase_004045_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004045_2 "1.assignment.explicit_to_implicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004045, VkglTestCase_004045_1, VkglTestCase_004045_2);

#define VkglTestCase_004046_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004046_2 "1.assignment.explicit_to_implicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004046, VkglTestCase_004046_1, VkglTestCase_004046_2);

#define VkglTestCase_004047_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004047_2 ".assignment.explicit_to_implicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004047, VkglTestCase_004047_1, VkglTestCase_004047_2);

#define VkglTestCase_004048_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004048_2 "31.assignment.explicit_to_implicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004048, VkglTestCase_004048_1, VkglTestCase_004048_2);

#define VkglTestCase_004049_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004049_2 "1.assignment.explicit_to_implicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004049, VkglTestCase_004049_1, VkglTestCase_004049_2);

#define VkglTestCase_004322_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004322_2 "32.assignment.explicit_to_implicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004322, VkglTestCase_004322_1, VkglTestCase_004322_2);

#define VkglTestCase_004323_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004323_2 "2.assignment.explicit_to_implicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004323, VkglTestCase_004323_1, VkglTestCase_004323_2);

#define VkglTestCase_004324_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004324_2 "s32.assignment.explicit_to_implicit.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004324, VkglTestCase_004324_1, VkglTestCase_004324_2);

#define VkglTestCase_004325_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004325_2 "32.assignment.explicit_to_implicit.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004325, VkglTestCase_004325_1, VkglTestCase_004325_2);

#define VkglTestCase_004326_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004326_2 "2.assignment.explicit_to_implicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004326, VkglTestCase_004326_1, VkglTestCase_004326_2);

#define VkglTestCase_004327_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004327_2 ".assignment.explicit_to_implicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004327, VkglTestCase_004327_1, VkglTestCase_004327_2);

#define VkglTestCase_004328_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004328_2 ".assignment.explicit_to_implicit.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004328, VkglTestCase_004328_1, VkglTestCase_004328_2);

#define VkglTestCase_004329_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32."
#define VkglTestCase_004329_2 "assignment.explicit_to_implicit.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004329, VkglTestCase_004329_1, VkglTestCase_004329_2);

#define VkglTestCase_004330_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004330_2 "32.assignment.explicit_to_implicit.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004330, VkglTestCase_004330_1, VkglTestCase_004330_2);

#define VkglTestCase_004331_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004331_2 "2.assignment.explicit_to_implicit.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004331, VkglTestCase_004331_1, VkglTestCase_004331_2);

#define VkglTestCase_004332_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004332_2 "2.assignment.explicit_to_implicit.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004332, VkglTestCase_004332_1, VkglTestCase_004332_2);

#define VkglTestCase_004333_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004333_2 ".assignment.explicit_to_implicit.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004333, VkglTestCase_004333_1, VkglTestCase_004333_2);

#define VkglTestCase_004334_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004334_2 "32.assignment.explicit_to_implicit.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004334, VkglTestCase_004334_1, VkglTestCase_004334_2);

#define VkglTestCase_004335_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004335_2 "2.assignment.explicit_to_implicit.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004335, VkglTestCase_004335_1, VkglTestCase_004335_2);

#define VkglTestCase_004336_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004336_2 "32.assignment.explicit_to_implicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004336, VkglTestCase_004336_1, VkglTestCase_004336_2);

#define VkglTestCase_004337_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004337_2 "2.assignment.explicit_to_implicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004337, VkglTestCase_004337_1, VkglTestCase_004337_2);

#define VkglTestCase_004338_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004338_2 "2.assignment.explicit_to_implicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004338, VkglTestCase_004338_1, VkglTestCase_004338_2);

#define VkglTestCase_004339_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004339_2 ".assignment.explicit_to_implicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004339, VkglTestCase_004339_1, VkglTestCase_004339_2);

#define VkglTestCase_004340_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004340_2 "32.assignment.explicit_to_implicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004340, VkglTestCase_004340_1, VkglTestCase_004340_2);

#define VkglTestCase_004341_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004341_2 "2.assignment.explicit_to_implicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004341, VkglTestCase_004341_1, VkglTestCase_004341_2);
