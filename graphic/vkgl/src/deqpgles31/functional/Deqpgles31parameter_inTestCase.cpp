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

#define VkglTestCase_003930_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003930_2 "arrays.es31.parameter.in.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003930, VkglTestCase_003930_1, VkglTestCase_003930_2);

#define VkglTestCase_003931_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003931_2 "rrays.es31.parameter.in.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003931, VkglTestCase_003931_1, VkglTestCase_003931_2);

#define VkglTestCase_003932_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003932_2 "arrays.es31.parameter.in.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003932, VkglTestCase_003932_1, VkglTestCase_003932_2);

#define VkglTestCase_003933_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003933_2 "rrays.es31.parameter.in.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003933, VkglTestCase_003933_1, VkglTestCase_003933_2);

#define VkglTestCase_003934_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003934_2 "arrays.es31.parameter.in.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003934, VkglTestCase_003934_1, VkglTestCase_003934_2);

#define VkglTestCase_003935_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003935_2 "rrays.es31.parameter.in.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003935, VkglTestCase_003935_1, VkglTestCase_003935_2);

#define VkglTestCase_003936_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_003936_2 "_arrays.es31.parameter.in.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003936, VkglTestCase_003936_1, VkglTestCase_003936_2);

#define VkglTestCase_003937_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003937_2 "arrays.es31.parameter.in.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003937, VkglTestCase_003937_1, VkglTestCase_003937_2);

#define VkglTestCase_003938_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003938_2 "rrays.es31.parameter.in.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003938, VkglTestCase_003938_1, VkglTestCase_003938_2);

#define VkglTestCase_003939_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_003939_2 "rays.es31.parameter.in.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003939, VkglTestCase_003939_1, VkglTestCase_003939_2);

#define VkglTestCase_003940_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003940_2 "arrays.es31.parameter.in.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003940, VkglTestCase_003940_1, VkglTestCase_003940_2);

#define VkglTestCase_003941_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003941_2 "rrays.es31.parameter.in.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003941, VkglTestCase_003941_1, VkglTestCase_003941_2);

#define VkglTestCase_003942_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003942_2 "arrays.es31.parameter.in.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003942, VkglTestCase_003942_1, VkglTestCase_003942_2);

#define VkglTestCase_003943_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003943_2 "rrays.es31.parameter.in.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003943, VkglTestCase_003943_1, VkglTestCase_003943_2);

#define VkglTestCase_003944_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_003944_2 "_arrays.es31.parameter.in.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003944, VkglTestCase_003944_1, VkglTestCase_003944_2);

#define VkglTestCase_003945_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003945_2 "arrays.es31.parameter.in.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003945, VkglTestCase_003945_1, VkglTestCase_003945_2);

#define VkglTestCase_003946_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003946_2 "arrays.es31.parameter.in.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003946, VkglTestCase_003946_1, VkglTestCase_003946_2);

#define VkglTestCase_003947_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_003947_2 "rrays.es31.parameter.in.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003947, VkglTestCase_003947_1, VkglTestCase_003947_2);

#define VkglTestCase_003948_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_003948_2 "_arrays.es31.parameter.in.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003948, VkglTestCase_003948_1, VkglTestCase_003948_2);

#define VkglTestCase_003949_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_003949_2 "arrays.es31.parameter.in.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003949, VkglTestCase_003949_1, VkglTestCase_003949_2);

#define VkglTestCase_004222_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004222_2 "arrays.es32.parameter.in.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004222, VkglTestCase_004222_1, VkglTestCase_004222_2);

#define VkglTestCase_004223_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004223_2 "rrays.es32.parameter.in.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004223, VkglTestCase_004223_1, VkglTestCase_004223_2);

#define VkglTestCase_004224_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004224_2 "arrays.es32.parameter.in.int_2x2x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004224, VkglTestCase_004224_1, VkglTestCase_004224_2);

#define VkglTestCase_004225_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004225_2 "rrays.es32.parameter.in.int_2x2x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004225, VkglTestCase_004225_1, VkglTestCase_004225_2);

#define VkglTestCase_004226_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004226_2 "arrays.es32.parameter.in.bool_3x2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004226, VkglTestCase_004226_1, VkglTestCase_004226_2);

#define VkglTestCase_004227_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004227_2 "rrays.es32.parameter.in.bool_3x2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004227, VkglTestCase_004227_1, VkglTestCase_004227_2);

#define VkglTestCase_004228_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_004228_2 "_arrays.es32.parameter.in.vec3_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004228, VkglTestCase_004228_1, VkglTestCase_004228_2);

#define VkglTestCase_004229_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004229_2 "arrays.es32.parameter.in.vec3_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004229, VkglTestCase_004229_1, VkglTestCase_004229_2);

#define VkglTestCase_004230_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004230_2 "rrays.es32.parameter.in.struct_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004230, VkglTestCase_004230_1, VkglTestCase_004230_2);

#define VkglTestCase_004231_1 "dEQP-GLES31.functional.shaders.arrays_of_ar"
#define VkglTestCase_004231_2 "rays.es32.parameter.in.struct_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004231, VkglTestCase_004231_1, VkglTestCase_004231_2);

#define VkglTestCase_004232_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004232_2 "arrays.es32.parameter.in.ivec3_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004232, VkglTestCase_004232_1, VkglTestCase_004232_2);

#define VkglTestCase_004233_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004233_2 "rrays.es32.parameter.in.ivec3_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004233, VkglTestCase_004233_1, VkglTestCase_004233_2);

#define VkglTestCase_004234_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004234_2 "arrays.es32.parameter.in.bvec4_4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004234, VkglTestCase_004234_1, VkglTestCase_004234_2);

#define VkglTestCase_004235_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004235_2 "rrays.es32.parameter.in.bvec4_4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004235, VkglTestCase_004235_1, VkglTestCase_004235_2);

#define VkglTestCase_004236_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_004236_2 "_arrays.es32.parameter.in.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004236, VkglTestCase_004236_1, VkglTestCase_004236_2);

#define VkglTestCase_004237_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004237_2 "arrays.es32.parameter.in.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004237, VkglTestCase_004237_1, VkglTestCase_004237_2);

#define VkglTestCase_004238_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004238_2 "arrays.es32.parameter.in.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004238, VkglTestCase_004238_1, VkglTestCase_004238_2);

#define VkglTestCase_004239_1 "dEQP-GLES31.functional.shaders.arrays_of_a"
#define VkglTestCase_004239_2 "rrays.es32.parameter.in.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004239, VkglTestCase_004239_1, VkglTestCase_004239_2);

#define VkglTestCase_004240_1 "dEQP-GLES31.functional.shaders.arrays_of"
#define VkglTestCase_004240_2 "_arrays.es32.parameter.in.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004240, VkglTestCase_004240_1, VkglTestCase_004240_2);

#define VkglTestCase_004241_1 "dEQP-GLES31.functional.shaders.arrays_of_"
#define VkglTestCase_004241_2 "arrays.es32.parameter.in.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004241, VkglTestCase_004241_1, VkglTestCase_004241_2);
