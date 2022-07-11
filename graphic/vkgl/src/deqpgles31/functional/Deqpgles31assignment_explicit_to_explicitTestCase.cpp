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

#define VkglTestCase_004010_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004010_2 "31.assignment.explicit_to_explicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004010, VkglTestCase_004010_1, VkglTestCase_004010_2);

#define VkglTestCase_004011_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004011_2 "1.assignment.explicit_to_explicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004011, VkglTestCase_004011_1, VkglTestCase_004011_2);

#define VkglTestCase_004012_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004012_2 "s31.assignment.explicit_to_explicit.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004012, VkglTestCase_004012_1, VkglTestCase_004012_2);

#define VkglTestCase_004013_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004013_2 "31.assignment.explicit_to_explicit.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004013, VkglTestCase_004013_1, VkglTestCase_004013_2);

#define VkglTestCase_004014_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004014_2 "1.assignment.explicit_to_explicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004014, VkglTestCase_004014_1, VkglTestCase_004014_2);

#define VkglTestCase_004015_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004015_2 ".assignment.explicit_to_explicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004015, VkglTestCase_004015_1, VkglTestCase_004015_2);

#define VkglTestCase_004016_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004016_2 ".assignment.explicit_to_explicit.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004016, VkglTestCase_004016_1, VkglTestCase_004016_2);

#define VkglTestCase_004017_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31."
#define VkglTestCase_004017_2 "assignment.explicit_to_explicit.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004017, VkglTestCase_004017_1, VkglTestCase_004017_2);

#define VkglTestCase_004018_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004018_2 "31.assignment.explicit_to_explicit.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004018, VkglTestCase_004018_1, VkglTestCase_004018_2);

#define VkglTestCase_004019_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004019_2 "1.assignment.explicit_to_explicit.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004019, VkglTestCase_004019_1, VkglTestCase_004019_2);

#define VkglTestCase_004020_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004020_2 "1.assignment.explicit_to_explicit.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004020, VkglTestCase_004020_1, VkglTestCase_004020_2);

#define VkglTestCase_004021_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004021_2 ".assignment.explicit_to_explicit.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004021, VkglTestCase_004021_1, VkglTestCase_004021_2);

#define VkglTestCase_004022_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004022_2 "31.assignment.explicit_to_explicit.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004022, VkglTestCase_004022_1, VkglTestCase_004022_2);

#define VkglTestCase_004023_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004023_2 "1.assignment.explicit_to_explicit.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004023, VkglTestCase_004023_1, VkglTestCase_004023_2);

#define VkglTestCase_004024_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004024_2 "31.assignment.explicit_to_explicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004024, VkglTestCase_004024_1, VkglTestCase_004024_2);

#define VkglTestCase_004025_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004025_2 "1.assignment.explicit_to_explicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004025, VkglTestCase_004025_1, VkglTestCase_004025_2);

#define VkglTestCase_004026_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004026_2 "1.assignment.explicit_to_explicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004026, VkglTestCase_004026_1, VkglTestCase_004026_2);

#define VkglTestCase_004027_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004027_2 ".assignment.explicit_to_explicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004027, VkglTestCase_004027_1, VkglTestCase_004027_2);

#define VkglTestCase_004028_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004028_2 "31.assignment.explicit_to_explicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004028, VkglTestCase_004028_1, VkglTestCase_004028_2);

#define VkglTestCase_004029_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004029_2 "1.assignment.explicit_to_explicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004029, VkglTestCase_004029_1, VkglTestCase_004029_2);

#define VkglTestCase_004302_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004302_2 "32.assignment.explicit_to_explicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004302, VkglTestCase_004302_1, VkglTestCase_004302_2);

#define VkglTestCase_004303_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004303_2 "2.assignment.explicit_to_explicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004303, VkglTestCase_004303_1, VkglTestCase_004303_2);

#define VkglTestCase_004304_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004304_2 "s32.assignment.explicit_to_explicit.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004304, VkglTestCase_004304_1, VkglTestCase_004304_2);

#define VkglTestCase_004305_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004305_2 "32.assignment.explicit_to_explicit.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004305, VkglTestCase_004305_1, VkglTestCase_004305_2);

#define VkglTestCase_004306_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004306_2 "2.assignment.explicit_to_explicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004306, VkglTestCase_004306_1, VkglTestCase_004306_2);

#define VkglTestCase_004307_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004307_2 ".assignment.explicit_to_explicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004307, VkglTestCase_004307_1, VkglTestCase_004307_2);

#define VkglTestCase_004308_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004308_2 ".assignment.explicit_to_explicit.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004308, VkglTestCase_004308_1, VkglTestCase_004308_2);

#define VkglTestCase_004309_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32."
#define VkglTestCase_004309_2 "assignment.explicit_to_explicit.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004309, VkglTestCase_004309_1, VkglTestCase_004309_2);

#define VkglTestCase_004310_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004310_2 "32.assignment.explicit_to_explicit.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004310, VkglTestCase_004310_1, VkglTestCase_004310_2);

#define VkglTestCase_004311_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004311_2 "2.assignment.explicit_to_explicit.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004311, VkglTestCase_004311_1, VkglTestCase_004311_2);

#define VkglTestCase_004312_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004312_2 "2.assignment.explicit_to_explicit.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004312, VkglTestCase_004312_1, VkglTestCase_004312_2);

#define VkglTestCase_004313_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004313_2 ".assignment.explicit_to_explicit.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004313, VkglTestCase_004313_1, VkglTestCase_004313_2);

#define VkglTestCase_004314_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004314_2 "32.assignment.explicit_to_explicit.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004314, VkglTestCase_004314_1, VkglTestCase_004314_2);

#define VkglTestCase_004315_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004315_2 "2.assignment.explicit_to_explicit.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004315, VkglTestCase_004315_1, VkglTestCase_004315_2);

#define VkglTestCase_004316_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004316_2 "32.assignment.explicit_to_explicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004316, VkglTestCase_004316_1, VkglTestCase_004316_2);

#define VkglTestCase_004317_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004317_2 "2.assignment.explicit_to_explicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004317, VkglTestCase_004317_1, VkglTestCase_004317_2);

#define VkglTestCase_004318_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004318_2 "2.assignment.explicit_to_explicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004318, VkglTestCase_004318_1, VkglTestCase_004318_2);

#define VkglTestCase_004319_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004319_2 ".assignment.explicit_to_explicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004319, VkglTestCase_004319_1, VkglTestCase_004319_2);

#define VkglTestCase_004320_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004320_2 "32.assignment.explicit_to_explicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004320, VkglTestCase_004320_1, VkglTestCase_004320_2);

#define VkglTestCase_004321_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004321_2 "2.assignment.explicit_to_explicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004321, VkglTestCase_004321_1, VkglTestCase_004321_2);
