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

#define VkglTestCase_004050_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004050_2 "31.assignment.implicit_to_explicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004050, VkglTestCase_004050_1, VkglTestCase_004050_2);

#define VkglTestCase_004051_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004051_2 "1.assignment.implicit_to_explicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004051, VkglTestCase_004051_1, VkglTestCase_004051_2);

#define VkglTestCase_004052_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004052_2 "s31.assignment.implicit_to_explicit.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004052, VkglTestCase_004052_1, VkglTestCase_004052_2);

#define VkglTestCase_004053_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004053_2 "31.assignment.implicit_to_explicit.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004053, VkglTestCase_004053_1, VkglTestCase_004053_2);

#define VkglTestCase_004054_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004054_2 "1.assignment.implicit_to_explicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004054, VkglTestCase_004054_1, VkglTestCase_004054_2);

#define VkglTestCase_004055_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004055_2 ".assignment.implicit_to_explicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004055, VkglTestCase_004055_1, VkglTestCase_004055_2);

#define VkglTestCase_004056_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004056_2 ".assignment.implicit_to_explicit.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004056, VkglTestCase_004056_1, VkglTestCase_004056_2);

#define VkglTestCase_004057_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31."
#define VkglTestCase_004057_2 "assignment.implicit_to_explicit.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004057, VkglTestCase_004057_1, VkglTestCase_004057_2);

#define VkglTestCase_004058_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004058_2 "31.assignment.implicit_to_explicit.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004058, VkglTestCase_004058_1, VkglTestCase_004058_2);

#define VkglTestCase_004059_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004059_2 "1.assignment.implicit_to_explicit.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004059, VkglTestCase_004059_1, VkglTestCase_004059_2);

#define VkglTestCase_004060_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004060_2 "1.assignment.implicit_to_explicit.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004060, VkglTestCase_004060_1, VkglTestCase_004060_2);

#define VkglTestCase_004061_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004061_2 ".assignment.implicit_to_explicit.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004061, VkglTestCase_004061_1, VkglTestCase_004061_2);

#define VkglTestCase_004062_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004062_2 "31.assignment.implicit_to_explicit.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004062, VkglTestCase_004062_1, VkglTestCase_004062_2);

#define VkglTestCase_004063_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004063_2 "1.assignment.implicit_to_explicit.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004063, VkglTestCase_004063_1, VkglTestCase_004063_2);

#define VkglTestCase_004064_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004064_2 "31.assignment.implicit_to_explicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004064, VkglTestCase_004064_1, VkglTestCase_004064_2);

#define VkglTestCase_004065_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004065_2 "1.assignment.implicit_to_explicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004065, VkglTestCase_004065_1, VkglTestCase_004065_2);

#define VkglTestCase_004066_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004066_2 "1.assignment.implicit_to_explicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004066, VkglTestCase_004066_1, VkglTestCase_004066_2);

#define VkglTestCase_004067_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31"
#define VkglTestCase_004067_2 ".assignment.implicit_to_explicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004067, VkglTestCase_004067_1, VkglTestCase_004067_2);

#define VkglTestCase_004068_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004068_2 "31.assignment.implicit_to_explicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004068, VkglTestCase_004068_1, VkglTestCase_004068_2);

#define VkglTestCase_004069_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004069_2 "1.assignment.implicit_to_explicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004069, VkglTestCase_004069_1, VkglTestCase_004069_2);

#define VkglTestCase_004342_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004342_2 "32.assignment.implicit_to_explicit.float_3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004342, VkglTestCase_004342_1, VkglTestCase_004342_2);

#define VkglTestCase_004343_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004343_2 "2.assignment.implicit_to_explicit.float_3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004343, VkglTestCase_004343_1, VkglTestCase_004343_2);

#define VkglTestCase_004344_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.e"
#define VkglTestCase_004344_2 "s32.assignment.implicit_to_explicit.int_2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004344, VkglTestCase_004344_1, VkglTestCase_004344_2);

#define VkglTestCase_004345_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004345_2 "32.assignment.implicit_to_explicit.int_2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004345, VkglTestCase_004345_1, VkglTestCase_004345_2);

#define VkglTestCase_004346_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004346_2 "2.assignment.implicit_to_explicit.bool_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004346, VkglTestCase_004346_1, VkglTestCase_004346_2);

#define VkglTestCase_004347_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004347_2 ".assignment.implicit_to_explicit.bool_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004347, VkglTestCase_004347_1, VkglTestCase_004347_2);

#define VkglTestCase_004348_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004348_2 ".assignment.implicit_to_explicit.struct_5x5x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004348, VkglTestCase_004348_1, VkglTestCase_004348_2);

#define VkglTestCase_004349_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32."
#define VkglTestCase_004349_2 "assignment.implicit_to_explicit.struct_5x5x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004349, VkglTestCase_004349_1, VkglTestCase_004349_2);

#define VkglTestCase_004350_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004350_2 "32.assignment.implicit_to_explicit.vec3_1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004350, VkglTestCase_004350_1, VkglTestCase_004350_2);

#define VkglTestCase_004351_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004351_2 "2.assignment.implicit_to_explicit.vec3_1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004351, VkglTestCase_004351_1, VkglTestCase_004351_2);

#define VkglTestCase_004352_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004352_2 "2.assignment.implicit_to_explicit.ivec3_3x1x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004352, VkglTestCase_004352_1, VkglTestCase_004352_2);

#define VkglTestCase_004353_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004353_2 ".assignment.implicit_to_explicit.ivec3_3x1x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004353, VkglTestCase_004353_1, VkglTestCase_004353_2);

#define VkglTestCase_004354_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004354_2 "32.assignment.implicit_to_explicit.bvec3_3x1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004354, VkglTestCase_004354_1, VkglTestCase_004354_2);

#define VkglTestCase_004355_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004355_2 "2.assignment.implicit_to_explicit.bvec3_3x1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004355, VkglTestCase_004355_1, VkglTestCase_004355_2);

#define VkglTestCase_004356_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004356_2 "32.assignment.implicit_to_explicit.mat3_3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004356, VkglTestCase_004356_1, VkglTestCase_004356_2);

#define VkglTestCase_004357_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004357_2 "2.assignment.implicit_to_explicit.mat3_3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004357, VkglTestCase_004357_1, VkglTestCase_004357_2);

#define VkglTestCase_004358_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004358_2 "2.assignment.implicit_to_explicit.mat3_3x3x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004358, VkglTestCase_004358_1, VkglTestCase_004358_2);

#define VkglTestCase_004359_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32"
#define VkglTestCase_004359_2 ".assignment.implicit_to_explicit.mat3_3x3x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004359, VkglTestCase_004359_1, VkglTestCase_004359_2);

#define VkglTestCase_004360_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es"
#define VkglTestCase_004360_2 "32.assignment.implicit_to_explicit.mat3_3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004360, VkglTestCase_004360_1, VkglTestCase_004360_2);

#define VkglTestCase_004361_1 "dEQP-GLES31.functional.shaders.arrays_of_arrays.es3"
#define VkglTestCase_004361_2 "2.assignment.implicit_to_explicit.mat3_3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004361, VkglTestCase_004361_1, VkglTestCase_004361_2);
