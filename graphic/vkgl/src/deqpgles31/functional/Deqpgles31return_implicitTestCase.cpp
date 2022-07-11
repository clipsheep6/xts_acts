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

#define VkglTestCase_003910_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003910_2 "rrays.es31.return.implicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003910, VkglTestCase_003910_1, VkglTestCase_003910_2);

#define VkglTestCase_003911_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003911_2 "rays.es31.return.implicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003911, VkglTestCase_003911_1, VkglTestCase_003911_2);

#define VkglTestCase_003912_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003912_2 "rrays.es31.return.implicit.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003912, VkglTestCase_003912_1, VkglTestCase_003912_2);

#define VkglTestCase_003913_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003913_2 "rays.es31.return.implicit.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003913, VkglTestCase_003913_1, VkglTestCase_003913_2);

#define VkglTestCase_003914_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003914_2 "rays.es31.return.implicit.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003914, VkglTestCase_003914_1, VkglTestCase_003914_2);

#define VkglTestCase_003915_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003915_2 "ays.es31.return.implicit.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003915, VkglTestCase_003915_1, VkglTestCase_003915_2);

#define VkglTestCase_003916_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003916_2 "rrays.es31.return.implicit.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003916, VkglTestCase_003916_1, VkglTestCase_003916_2);

#define VkglTestCase_003917_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003917_2 "rays.es31.return.implicit.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003917, VkglTestCase_003917_1, VkglTestCase_003917_2);

#define VkglTestCase_003918_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003918_2 "ays.es31.return.implicit.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003918, VkglTestCase_003918_1, VkglTestCase_003918_2);

#define VkglTestCase_003919_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_003919_2 "ys.es31.return.implicit.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003919, VkglTestCase_003919_1, VkglTestCase_003919_2);

#define VkglTestCase_003920_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003920_2 "rrays.es31.return.implicit.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003920, VkglTestCase_003920_1, VkglTestCase_003920_2);

#define VkglTestCase_003921_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003921_2 "rays.es31.return.implicit.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003921, VkglTestCase_003921_1, VkglTestCase_003921_2);

#define VkglTestCase_003922_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003922_2 "rrays.es31.return.implicit.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003922, VkglTestCase_003922_1, VkglTestCase_003922_2);

#define VkglTestCase_003923_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003923_2 "rays.es31.return.implicit.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003923, VkglTestCase_003923_1, VkglTestCase_003923_2);

#define VkglTestCase_003924_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003924_2 "rrays.es31.return.implicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003924, VkglTestCase_003924_1, VkglTestCase_003924_2);

#define VkglTestCase_003925_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003925_2 "rays.es31.return.implicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003925, VkglTestCase_003925_1, VkglTestCase_003925_2);

#define VkglTestCase_003926_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003926_2 "rays.es31.return.implicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003926, VkglTestCase_003926_1, VkglTestCase_003926_2);

#define VkglTestCase_003927_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003927_2 "ays.es31.return.implicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003927, VkglTestCase_003927_1, VkglTestCase_003927_2);

#define VkglTestCase_003928_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003928_2 "rrays.es31.return.implicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003928, VkglTestCase_003928_1, VkglTestCase_003928_2);

#define VkglTestCase_003929_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003929_2 "rays.es31.return.implicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003929, VkglTestCase_003929_1, VkglTestCase_003929_2);

#define VkglTestCase_004202_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004202_2 "rrays.es32.return.implicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004202, VkglTestCase_004202_1, VkglTestCase_004202_2);

#define VkglTestCase_004203_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004203_2 "rays.es32.return.implicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004203, VkglTestCase_004203_1, VkglTestCase_004203_2);

#define VkglTestCase_004204_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004204_2 "rrays.es32.return.implicit.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004204, VkglTestCase_004204_1, VkglTestCase_004204_2);

#define VkglTestCase_004205_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004205_2 "rays.es32.return.implicit.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004205, VkglTestCase_004205_1, VkglTestCase_004205_2);

#define VkglTestCase_004206_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004206_2 "rays.es32.return.implicit.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004206, VkglTestCase_004206_1, VkglTestCase_004206_2);

#define VkglTestCase_004207_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004207_2 "ays.es32.return.implicit.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004207, VkglTestCase_004207_1, VkglTestCase_004207_2);

#define VkglTestCase_004208_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004208_2 "rrays.es32.return.implicit.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004208, VkglTestCase_004208_1, VkglTestCase_004208_2);

#define VkglTestCase_004209_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004209_2 "rays.es32.return.implicit.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004209, VkglTestCase_004209_1, VkglTestCase_004209_2);

#define VkglTestCase_004210_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004210_2 "ays.es32.return.implicit.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004210, VkglTestCase_004210_1, VkglTestCase_004210_2);

#define VkglTestCase_004211_1 "dEQP-GLES31.functional.shaders.arrays_of_arra"
#define VkglTestCase_004211_2 "ys.es32.return.implicit.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004211, VkglTestCase_004211_1, VkglTestCase_004211_2);

#define VkglTestCase_004212_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004212_2 "rrays.es32.return.implicit.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004212, VkglTestCase_004212_1, VkglTestCase_004212_2);

#define VkglTestCase_004213_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004213_2 "rays.es32.return.implicit.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004213, VkglTestCase_004213_1, VkglTestCase_004213_2);

#define VkglTestCase_004214_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004214_2 "rrays.es32.return.implicit.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004214, VkglTestCase_004214_1, VkglTestCase_004214_2);

#define VkglTestCase_004215_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004215_2 "rays.es32.return.implicit.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004215, VkglTestCase_004215_1, VkglTestCase_004215_2);

#define VkglTestCase_004216_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004216_2 "rrays.es32.return.implicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004216, VkglTestCase_004216_1, VkglTestCase_004216_2);

#define VkglTestCase_004217_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004217_2 "rays.es32.return.implicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004217, VkglTestCase_004217_1, VkglTestCase_004217_2);

#define VkglTestCase_004218_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004218_2 "rays.es32.return.implicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004218, VkglTestCase_004218_1, VkglTestCase_004218_2);

#define VkglTestCase_004219_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004219_2 "ays.es32.return.implicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004219, VkglTestCase_004219_1, VkglTestCase_004219_2);

#define VkglTestCase_004220_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004220_2 "rrays.es32.return.implicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004220, VkglTestCase_004220_1, VkglTestCase_004220_2);

#define VkglTestCase_004221_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004221_2 "rays.es32.return.implicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004221, VkglTestCase_004221_1, VkglTestCase_004221_2);
