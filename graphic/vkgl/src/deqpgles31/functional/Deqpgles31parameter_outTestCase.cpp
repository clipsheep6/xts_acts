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

#define VkglTestCase_003950_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003950_2 "arrays.es31.parameter.out.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003950, VkglTestCase_003950_1, VkglTestCase_003950_2);

#define VkglTestCase_003951_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003951_2 "rrays.es31.parameter.out.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003951, VkglTestCase_003951_1, VkglTestCase_003951_2);

#define VkglTestCase_003952_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003952_2 "arrays.es31.parameter.out.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003952, VkglTestCase_003952_1, VkglTestCase_003952_2);

#define VkglTestCase_003953_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003953_2 "rrays.es31.parameter.out.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003953, VkglTestCase_003953_1, VkglTestCase_003953_2);

#define VkglTestCase_003954_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003954_2 "rrays.es31.parameter.out.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003954, VkglTestCase_003954_1, VkglTestCase_003954_2);

#define VkglTestCase_003955_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003955_2 "rays.es31.parameter.out.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003955, VkglTestCase_003955_1, VkglTestCase_003955_2);

#define VkglTestCase_003956_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003956_2 "arrays.es31.parameter.out.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003956, VkglTestCase_003956_1, VkglTestCase_003956_2);

#define VkglTestCase_003957_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003957_2 "rrays.es31.parameter.out.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003957, VkglTestCase_003957_1, VkglTestCase_003957_2);

#define VkglTestCase_003958_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003958_2 "rays.es31.parameter.out.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003958, VkglTestCase_003958_1, VkglTestCase_003958_2);

#define VkglTestCase_003959_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_003959_2 "ays.es31.parameter.out.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003959, VkglTestCase_003959_1, VkglTestCase_003959_2);

#define VkglTestCase_003960_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003960_2 "arrays.es31.parameter.out.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003960, VkglTestCase_003960_1, VkglTestCase_003960_2);

#define VkglTestCase_003961_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003961_2 "rrays.es31.parameter.out.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003961, VkglTestCase_003961_1, VkglTestCase_003961_2);

#define VkglTestCase_003962_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003962_2 "arrays.es31.parameter.out.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003962, VkglTestCase_003962_1, VkglTestCase_003962_2);

#define VkglTestCase_003963_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003963_2 "rrays.es31.parameter.out.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003963, VkglTestCase_003963_1, VkglTestCase_003963_2);

#define VkglTestCase_003964_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003964_2 "arrays.es31.parameter.out.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003964, VkglTestCase_003964_1, VkglTestCase_003964_2);

#define VkglTestCase_003965_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003965_2 "rrays.es31.parameter.out.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003965, VkglTestCase_003965_1, VkglTestCase_003965_2);

#define VkglTestCase_003966_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003966_2 "rrays.es31.parameter.out.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003966, VkglTestCase_003966_1, VkglTestCase_003966_2);

#define VkglTestCase_003967_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003967_2 "rays.es31.parameter.out.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003967, VkglTestCase_003967_1, VkglTestCase_003967_2);

#define VkglTestCase_003968_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003968_2 "arrays.es31.parameter.out.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003968, VkglTestCase_003968_1, VkglTestCase_003968_2);

#define VkglTestCase_003969_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003969_2 "rrays.es31.parameter.out.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003969, VkglTestCase_003969_1, VkglTestCase_003969_2);

#define VkglTestCase_004242_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004242_2 "arrays.es32.parameter.out.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004242, VkglTestCase_004242_1, VkglTestCase_004242_2);

#define VkglTestCase_004243_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004243_2 "rrays.es32.parameter.out.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004243, VkglTestCase_004243_1, VkglTestCase_004243_2);

#define VkglTestCase_004244_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004244_2 "arrays.es32.parameter.out.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004244, VkglTestCase_004244_1, VkglTestCase_004244_2);

#define VkglTestCase_004245_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004245_2 "rrays.es32.parameter.out.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004245, VkglTestCase_004245_1, VkglTestCase_004245_2);

#define VkglTestCase_004246_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004246_2 "rrays.es32.parameter.out.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004246, VkglTestCase_004246_1, VkglTestCase_004246_2);

#define VkglTestCase_004247_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004247_2 "rays.es32.parameter.out.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004247, VkglTestCase_004247_1, VkglTestCase_004247_2);

#define VkglTestCase_004248_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004248_2 "arrays.es32.parameter.out.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004248, VkglTestCase_004248_1, VkglTestCase_004248_2);

#define VkglTestCase_004249_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004249_2 "rrays.es32.parameter.out.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004249, VkglTestCase_004249_1, VkglTestCase_004249_2);

#define VkglTestCase_004250_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004250_2 "rays.es32.parameter.out.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004250, VkglTestCase_004250_1, VkglTestCase_004250_2);

#define VkglTestCase_004251_1 "dEQP-GLES31.functional.shaders.arrays_of_arr"
#define VkglTestCase_004251_2 "ays.es32.parameter.out.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004251, VkglTestCase_004251_1, VkglTestCase_004251_2);

#define VkglTestCase_004252_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004252_2 "arrays.es32.parameter.out.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004252, VkglTestCase_004252_1, VkglTestCase_004252_2);

#define VkglTestCase_004253_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004253_2 "rrays.es32.parameter.out.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004253, VkglTestCase_004253_1, VkglTestCase_004253_2);

#define VkglTestCase_004254_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004254_2 "arrays.es32.parameter.out.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004254, VkglTestCase_004254_1, VkglTestCase_004254_2);

#define VkglTestCase_004255_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004255_2 "rrays.es32.parameter.out.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004255, VkglTestCase_004255_1, VkglTestCase_004255_2);

#define VkglTestCase_004256_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004256_2 "arrays.es32.parameter.out.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004256, VkglTestCase_004256_1, VkglTestCase_004256_2);

#define VkglTestCase_004257_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004257_2 "rrays.es32.parameter.out.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004257, VkglTestCase_004257_1, VkglTestCase_004257_2);

#define VkglTestCase_004258_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004258_2 "rrays.es32.parameter.out.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004258, VkglTestCase_004258_1, VkglTestCase_004258_2);

#define VkglTestCase_004259_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004259_2 "rays.es32.parameter.out.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004259, VkglTestCase_004259_1, VkglTestCase_004259_2);

#define VkglTestCase_004260_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004260_2 "arrays.es32.parameter.out.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004260, VkglTestCase_004260_1, VkglTestCase_004260_2);

#define VkglTestCase_004261_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004261_2 "rrays.es32.parameter.out.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004261, VkglTestCase_004261_1, VkglTestCase_004261_2);
