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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016014_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016014_2 ".pre_increment.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016014, VkglTestCase_016014_1, VkglTestCase_016014_2);

#define VkglTestCase_016015_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016015_2 "pre_increment.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016015, VkglTestCase_016015_1, VkglTestCase_016015_2);

#define VkglTestCase_016016_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016016_2 "re_increment.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016016, VkglTestCase_016016_1, VkglTestCase_016016_2);

#define VkglTestCase_016017_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016017_2 "e_increment.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016017, VkglTestCase_016017_1, VkglTestCase_016017_2);

#define VkglTestCase_016018_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016018_2 "pre_increment.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016018, VkglTestCase_016018_1, VkglTestCase_016018_2);

#define VkglTestCase_016019_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016019_2 "re_increment.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016019, VkglTestCase_016019_1, VkglTestCase_016019_2);

#define VkglTestCase_016020_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016020_2 "pre_increment.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016020, VkglTestCase_016020_1, VkglTestCase_016020_2);

#define VkglTestCase_016021_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016021_2 "re_increment.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016021, VkglTestCase_016021_1, VkglTestCase_016021_2);

#define VkglTestCase_016022_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016022_2 "e_increment.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016022, VkglTestCase_016022_1, VkglTestCase_016022_2);

#define VkglTestCase_016023_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016023_2 "_increment.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016023, VkglTestCase_016023_1, VkglTestCase_016023_2);

#define VkglTestCase_016024_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016024_2 "re_increment.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016024, VkglTestCase_016024_1, VkglTestCase_016024_2);

#define VkglTestCase_016025_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016025_2 "e_increment.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016025, VkglTestCase_016025_1, VkglTestCase_016025_2);

#define VkglTestCase_016026_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016026_2 "pre_increment.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016026, VkglTestCase_016026_1, VkglTestCase_016026_2);

#define VkglTestCase_016027_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016027_2 "re_increment.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016027, VkglTestCase_016027_1, VkglTestCase_016027_2);

#define VkglTestCase_016028_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016028_2 "e_increment.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016028, VkglTestCase_016028_1, VkglTestCase_016028_2);

#define VkglTestCase_016029_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016029_2 "_increment.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016029, VkglTestCase_016029_1, VkglTestCase_016029_2);

#define VkglTestCase_016030_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016030_2 "re_increment.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016030, VkglTestCase_016030_1, VkglTestCase_016030_2);

#define VkglTestCase_016031_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016031_2 "e_increment.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016031, VkglTestCase_016031_1, VkglTestCase_016031_2);

#define VkglTestCase_016032_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016032_2 "pre_increment.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016032, VkglTestCase_016032_1, VkglTestCase_016032_2);

#define VkglTestCase_016033_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016033_2 "re_increment.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016033, VkglTestCase_016033_1, VkglTestCase_016033_2);

#define VkglTestCase_016034_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016034_2 "e_increment.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016034, VkglTestCase_016034_1, VkglTestCase_016034_2);

#define VkglTestCase_016035_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016035_2 "_increment.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016035, VkglTestCase_016035_1, VkglTestCase_016035_2);

#define VkglTestCase_016036_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016036_2 "re_increment.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016036, VkglTestCase_016036_1, VkglTestCase_016036_2);

#define VkglTestCase_016037_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016037_2 "e_increment.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016037, VkglTestCase_016037_1, VkglTestCase_016037_2);

#define VkglTestCase_016038_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016038_2 ".pre_increment.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016038, VkglTestCase_016038_1, VkglTestCase_016038_2);

#define VkglTestCase_016039_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016039_2 "pre_increment.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016039, VkglTestCase_016039_1, VkglTestCase_016039_2);

#define VkglTestCase_016040_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016040_2 "re_increment.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016040, VkglTestCase_016040_1, VkglTestCase_016040_2);

#define VkglTestCase_016041_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016041_2 "e_increment.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016041, VkglTestCase_016041_1, VkglTestCase_016041_2);

#define VkglTestCase_016042_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016042_2 "pre_increment.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016042, VkglTestCase_016042_1, VkglTestCase_016042_2);

#define VkglTestCase_016043_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016043_2 "re_increment.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016043, VkglTestCase_016043_1, VkglTestCase_016043_2);

#define VkglTestCase_016044_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016044_2 "pre_increment.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016044, VkglTestCase_016044_1, VkglTestCase_016044_2);

#define VkglTestCase_016045_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016045_2 "re_increment.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016045, VkglTestCase_016045_1, VkglTestCase_016045_2);

#define VkglTestCase_016046_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016046_2 "e_increment.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016046, VkglTestCase_016046_1, VkglTestCase_016046_2);

#define VkglTestCase_016047_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016047_2 "_increment.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016047, VkglTestCase_016047_1, VkglTestCase_016047_2);

#define VkglTestCase_016048_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016048_2 "re_increment.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016048, VkglTestCase_016048_1, VkglTestCase_016048_2);

#define VkglTestCase_016049_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016049_2 "e_increment.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016049, VkglTestCase_016049_1, VkglTestCase_016049_2);

#define VkglTestCase_016050_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016050_2 "pre_increment.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016050, VkglTestCase_016050_1, VkglTestCase_016050_2);

#define VkglTestCase_016051_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016051_2 "re_increment.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016051, VkglTestCase_016051_1, VkglTestCase_016051_2);

#define VkglTestCase_016052_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016052_2 "e_increment.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016052, VkglTestCase_016052_1, VkglTestCase_016052_2);

#define VkglTestCase_016053_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016053_2 "_increment.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016053, VkglTestCase_016053_1, VkglTestCase_016053_2);

#define VkglTestCase_016054_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016054_2 "re_increment.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016054, VkglTestCase_016054_1, VkglTestCase_016054_2);

#define VkglTestCase_016055_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016055_2 "e_increment.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016055, VkglTestCase_016055_1, VkglTestCase_016055_2);

#define VkglTestCase_016056_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016056_2 "pre_increment.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016056, VkglTestCase_016056_1, VkglTestCase_016056_2);

#define VkglTestCase_016057_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016057_2 "re_increment.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016057, VkglTestCase_016057_1, VkglTestCase_016057_2);

#define VkglTestCase_016058_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016058_2 "e_increment.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016058, VkglTestCase_016058_1, VkglTestCase_016058_2);

#define VkglTestCase_016059_1 "dEQP-GLES3.functional.shaders.matrix.pre"
#define VkglTestCase_016059_2 "_increment.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016059, VkglTestCase_016059_1, VkglTestCase_016059_2);

#define VkglTestCase_016060_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016060_2 "re_increment.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016060, VkglTestCase_016060_1, VkglTestCase_016060_2);

#define VkglTestCase_016061_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016061_2 "e_increment.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016061, VkglTestCase_016061_1, VkglTestCase_016061_2);

#define VkglTestCase_016062_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_016062_2 ".pre_increment.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016062, VkglTestCase_016062_1, VkglTestCase_016062_2);

#define VkglTestCase_016063_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016063_2 "pre_increment.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016063, VkglTestCase_016063_1, VkglTestCase_016063_2);

#define VkglTestCase_016064_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016064_2 "re_increment.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016064, VkglTestCase_016064_1, VkglTestCase_016064_2);

#define VkglTestCase_016065_1 "dEQP-GLES3.functional.shaders.matrix.pr"
#define VkglTestCase_016065_2 "e_increment.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016065, VkglTestCase_016065_1, VkglTestCase_016065_2);

#define VkglTestCase_016066_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016066_2 "pre_increment.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016066, VkglTestCase_016066_1, VkglTestCase_016066_2);

#define VkglTestCase_016067_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016067_2 "re_increment.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016067, VkglTestCase_016067_1, VkglTestCase_016067_2);
