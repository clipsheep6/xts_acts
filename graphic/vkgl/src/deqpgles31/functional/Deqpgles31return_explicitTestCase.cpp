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

#define VkglTestCase_003890_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003890_2 "rrays.es31.return.explicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003890, VkglTestCase_003890_1, VkglTestCase_003890_2);

#define VkglTestCase_003891_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003891_2 "rays.es31.return.explicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003891, VkglTestCase_003891_1, VkglTestCase_003891_2);

#define VkglTestCase_003892_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003892_2 "rrays.es31.return.explicit.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003892, VkglTestCase_003892_1, VkglTestCase_003892_2);

#define VkglTestCase_003893_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003893_2 "rays.es31.return.explicit.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003893, VkglTestCase_003893_1, VkglTestCase_003893_2);

#define VkglTestCase_003894_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003894_2 "rays.es31.return.explicit.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003894, VkglTestCase_003894_1, VkglTestCase_003894_2);

#define VkglTestCase_003895_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003895_2 "ays.es31.return.explicit.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003895, VkglTestCase_003895_1, VkglTestCase_003895_2);

#define VkglTestCase_003896_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003896_2 "rrays.es31.return.explicit.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003896, VkglTestCase_003896_1, VkglTestCase_003896_2);

#define VkglTestCase_003897_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003897_2 "rays.es31.return.explicit.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003897, VkglTestCase_003897_1, VkglTestCase_003897_2);

#define VkglTestCase_003898_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003898_2 "ays.es31.return.explicit.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003898, VkglTestCase_003898_1, VkglTestCase_003898_2);

#define VkglTestCase_003899_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003899_2 "ys.es31.return.explicit.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003899, VkglTestCase_003899_1, VkglTestCase_003899_2);

#define VkglTestCase_003900_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003900_2 "rrays.es31.return.explicit.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003900, VkglTestCase_003900_1, VkglTestCase_003900_2);

#define VkglTestCase_003901_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003901_2 "rays.es31.return.explicit.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003901, VkglTestCase_003901_1, VkglTestCase_003901_2);

#define VkglTestCase_003902_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003902_2 "rrays.es31.return.explicit.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003902, VkglTestCase_003902_1, VkglTestCase_003902_2);

#define VkglTestCase_003903_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003903_2 "rays.es31.return.explicit.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003903, VkglTestCase_003903_1, VkglTestCase_003903_2);

#define VkglTestCase_003904_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003904_2 "rrays.es31.return.explicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003904, VkglTestCase_003904_1, VkglTestCase_003904_2);

#define VkglTestCase_003905_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003905_2 "rays.es31.return.explicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003905, VkglTestCase_003905_1, VkglTestCase_003905_2);

#define VkglTestCase_003906_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003906_2 "rays.es31.return.explicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003906, VkglTestCase_003906_1, VkglTestCase_003906_2);

#define VkglTestCase_003907_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003907_2 "ays.es31.return.explicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003907, VkglTestCase_003907_1, VkglTestCase_003907_2);

#define VkglTestCase_003908_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003908_2 "rrays.es31.return.explicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003908, VkglTestCase_003908_1, VkglTestCase_003908_2);

#define VkglTestCase_003909_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003909_2 "rays.es31.return.explicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003909, VkglTestCase_003909_1, VkglTestCase_003909_2);

#define VkglTestCase_004182_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004182_2 "rrays.es32.return.explicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004182, VkglTestCase_004182_1, VkglTestCase_004182_2);

#define VkglTestCase_004183_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004183_2 "rays.es32.return.explicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004183, VkglTestCase_004183_1, VkglTestCase_004183_2);

#define VkglTestCase_004184_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004184_2 "rrays.es32.return.explicit.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004184, VkglTestCase_004184_1, VkglTestCase_004184_2);

#define VkglTestCase_004185_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004185_2 "rays.es32.return.explicit.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004185, VkglTestCase_004185_1, VkglTestCase_004185_2);

#define VkglTestCase_004186_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004186_2 "rays.es32.return.explicit.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004186, VkglTestCase_004186_1, VkglTestCase_004186_2);

#define VkglTestCase_004187_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004187_2 "ays.es32.return.explicit.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004187, VkglTestCase_004187_1, VkglTestCase_004187_2);

#define VkglTestCase_004188_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004188_2 "rrays.es32.return.explicit.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004188, VkglTestCase_004188_1, VkglTestCase_004188_2);

#define VkglTestCase_004189_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004189_2 "rays.es32.return.explicit.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004189, VkglTestCase_004189_1, VkglTestCase_004189_2);

#define VkglTestCase_004190_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004190_2 "ays.es32.return.explicit.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004190, VkglTestCase_004190_1, VkglTestCase_004190_2);

#define VkglTestCase_004191_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004191_2 "ys.es32.return.explicit.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004191, VkglTestCase_004191_1, VkglTestCase_004191_2);

#define VkglTestCase_004192_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004192_2 "rrays.es32.return.explicit.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004192, VkglTestCase_004192_1, VkglTestCase_004192_2);

#define VkglTestCase_004193_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004193_2 "rays.es32.return.explicit.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004193, VkglTestCase_004193_1, VkglTestCase_004193_2);

#define VkglTestCase_004194_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004194_2 "rrays.es32.return.explicit.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004194, VkglTestCase_004194_1, VkglTestCase_004194_2);

#define VkglTestCase_004195_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004195_2 "rays.es32.return.explicit.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004195, VkglTestCase_004195_1, VkglTestCase_004195_2);

#define VkglTestCase_004196_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004196_2 "rrays.es32.return.explicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004196, VkglTestCase_004196_1, VkglTestCase_004196_2);

#define VkglTestCase_004197_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004197_2 "rays.es32.return.explicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004197, VkglTestCase_004197_1, VkglTestCase_004197_2);

#define VkglTestCase_004198_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004198_2 "rays.es32.return.explicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004198, VkglTestCase_004198_1, VkglTestCase_004198_2);

#define VkglTestCase_004199_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004199_2 "ays.es32.return.explicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004199, VkglTestCase_004199_1, VkglTestCase_004199_2);

#define VkglTestCase_004200_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004200_2 "rrays.es32.return.explicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004200, VkglTestCase_004200_1, VkglTestCase_004200_2);

#define VkglTestCase_004201_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004201_2 "rays.es32.return.explicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004201, VkglTestCase_004201_1, VkglTestCase_004201_2);
