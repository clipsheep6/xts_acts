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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001996_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_001996_2 "tions.datatypes.float_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001996, VkglTestCase_001996_1, VkglTestCase_001996_2);

#define VkglTestCase_001997_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_001997_2 "ions.datatypes.float_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001997, VkglTestCase_001997_1, VkglTestCase_001997_2);

#define VkglTestCase_001998_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_001998_2 "ctions.datatypes.float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001998, VkglTestCase_001998_1, VkglTestCase_001998_2);

#define VkglTestCase_001999_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_001999_2 "tions.datatypes.float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001999, VkglTestCase_001999_1, VkglTestCase_001999_2);

#define VkglTestCase_002000_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002000_2 "ctions.datatypes.float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002000, VkglTestCase_002000_1, VkglTestCase_002000_2);

#define VkglTestCase_002001_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002001_2 "tions.datatypes.float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002001, VkglTestCase_002001_1, VkglTestCase_002001_2);

#define VkglTestCase_002002_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002002_2 "ctions.datatypes.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002002, VkglTestCase_002002_1, VkglTestCase_002002_2);

#define VkglTestCase_002003_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002003_2 "tions.datatypes.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002003, VkglTestCase_002003_1, VkglTestCase_002003_2);

#define VkglTestCase_002004_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002004_2 "ctions.datatypes.float_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002004, VkglTestCase_002004_1, VkglTestCase_002004_2);

#define VkglTestCase_002005_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002005_2 "tions.datatypes.float_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002005, VkglTestCase_002005_1, VkglTestCase_002005_2);

#define VkglTestCase_002006_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002006_2 "ctions.datatypes.float_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002006, VkglTestCase_002006_1, VkglTestCase_002006_2);

#define VkglTestCase_002007_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002007_2 "tions.datatypes.float_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002007, VkglTestCase_002007_1, VkglTestCase_002007_2);

#define VkglTestCase_002008_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002008_2 "ctions.datatypes.float_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002008, VkglTestCase_002008_1, VkglTestCase_002008_2);

#define VkglTestCase_002009_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002009_2 "tions.datatypes.float_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002009, VkglTestCase_002009_1, VkglTestCase_002009_2);

#define VkglTestCase_002010_1 "dEQP-GLES2.functional.shaders.fu"
#define VkglTestCase_002010_2 "nctions.datatypes.int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002010, VkglTestCase_002010_1, VkglTestCase_002010_2);

#define VkglTestCase_002011_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002011_2 "ctions.datatypes.int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002011, VkglTestCase_002011_1, VkglTestCase_002011_2);

#define VkglTestCase_002012_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002012_2 "ctions.datatypes.int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002012, VkglTestCase_002012_1, VkglTestCase_002012_2);

#define VkglTestCase_002013_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002013_2 "tions.datatypes.int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002013, VkglTestCase_002013_1, VkglTestCase_002013_2);

#define VkglTestCase_002014_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002014_2 "ctions.datatypes.int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002014, VkglTestCase_002014_1, VkglTestCase_002014_2);

#define VkglTestCase_002015_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002015_2 "tions.datatypes.int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002015, VkglTestCase_002015_1, VkglTestCase_002015_2);

#define VkglTestCase_002016_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002016_2 "ctions.datatypes.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002016, VkglTestCase_002016_1, VkglTestCase_002016_2);

#define VkglTestCase_002017_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002017_2 "tions.datatypes.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002017, VkglTestCase_002017_1, VkglTestCase_002017_2);

#define VkglTestCase_002018_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002018_2 "ctions.datatypes.bool_bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002018, VkglTestCase_002018_1, VkglTestCase_002018_2);

#define VkglTestCase_002019_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002019_2 "tions.datatypes.bool_bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002019, VkglTestCase_002019_1, VkglTestCase_002019_2);

#define VkglTestCase_002020_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002020_2 "ctions.datatypes.bool_bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002020, VkglTestCase_002020_1, VkglTestCase_002020_2);

#define VkglTestCase_002021_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002021_2 "tions.datatypes.bool_bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002021, VkglTestCase_002021_1, VkglTestCase_002021_2);

#define VkglTestCase_002022_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002022_2 "ctions.datatypes.bool_bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002022, VkglTestCase_002022_1, VkglTestCase_002022_2);

#define VkglTestCase_002023_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002023_2 "tions.datatypes.bool_bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002023, VkglTestCase_002023_1, VkglTestCase_002023_2);

#define VkglTestCase_002024_1 "dEQP-GLES2.functional.shaders.fun"
#define VkglTestCase_002024_2 "ctions.datatypes.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002024, VkglTestCase_002024_1, VkglTestCase_002024_2);

#define VkglTestCase_002025_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002025_2 "tions.datatypes.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002025, VkglTestCase_002025_1, VkglTestCase_002025_2);

#define VkglTestCase_002026_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002026_2 "functions.datatypes.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002026, VkglTestCase_002026_1, VkglTestCase_002026_2);

#define VkglTestCase_002027_1 "dEQP-GLES2.functional.shaders.f"
#define VkglTestCase_002027_2 "unctions.datatypes.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002027, VkglTestCase_002027_1, VkglTestCase_002027_2);

#define VkglTestCase_002028_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002028_2 "functions.datatypes.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002028, VkglTestCase_002028_1, VkglTestCase_002028_2);

#define VkglTestCase_002029_1 "dEQP-GLES2.functional.shaders.f"
#define VkglTestCase_002029_2 "unctions.datatypes.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002029, VkglTestCase_002029_1, VkglTestCase_002029_2);

#define VkglTestCase_002030_1 "dEQP-GLES2.functional.shaders."
#define VkglTestCase_002030_2 "functions.datatypes.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002030, VkglTestCase_002030_1, VkglTestCase_002030_2);

#define VkglTestCase_002031_1 "dEQP-GLES2.functional.shaders.f"
#define VkglTestCase_002031_2 "unctions.datatypes.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002031, VkglTestCase_002031_1, VkglTestCase_002031_2);

#define VkglTestCase_002032_1 "dEQP-GLES2.functional.shaders.func"
#define VkglTestCase_002032_2 "tions.datatypes.float_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002032, VkglTestCase_002032_1, VkglTestCase_002032_2);

#define VkglTestCase_002033_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002033_2 "ions.datatypes.float_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002033, VkglTestCase_002033_1, VkglTestCase_002033_2);

#define VkglTestCase_002034_1 "dEQP-GLES2.functional.shaders.funct"
#define VkglTestCase_002034_2 "ions.datatypes.struct_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002034, VkglTestCase_002034_1, VkglTestCase_002034_2);

#define VkglTestCase_002035_1 "dEQP-GLES2.functional.shaders.functi"
#define VkglTestCase_002035_2 "ons.datatypes.struct_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002035, VkglTestCase_002035_1, VkglTestCase_002035_2);

#define VkglTestCase_002036_1 "dEQP-GLES2.functional.shaders.function"
#define VkglTestCase_002036_2 "s.datatypes.struct_nested_struct_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002036, VkglTestCase_002036_1, VkglTestCase_002036_2);

#define VkglTestCase_002037_1 "dEQP-GLES2.functional.shaders.functions"
#define VkglTestCase_002037_2 ".datatypes.struct_nested_struct_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002037, VkglTestCase_002037_1, VkglTestCase_002037_2);

#define VkglTestCase_002038_1 "dEQP-GLES2.functional.shaders.functions.dat"
#define VkglTestCase_002038_2 "atypes.struct_constructor_highp_in_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_002038, VkglTestCase_002038_1, VkglTestCase_002038_2);
