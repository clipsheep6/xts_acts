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
#include "../ActsDeqpgles30016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015060_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015060_2 "x.mul.dynamic.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015060, VkglTestCase_015060_1, VkglTestCase_015060_2);

#define VkglTestCase_015061_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015061_2 ".mul.dynamic.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015061, VkglTestCase_015061_1, VkglTestCase_015061_2);

#define VkglTestCase_015062_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015062_2 "x.mul.dynamic.lowp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015062, VkglTestCase_015062_1, VkglTestCase_015062_2);

#define VkglTestCase_015063_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015063_2 ".mul.dynamic.lowp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015063, VkglTestCase_015063_1, VkglTestCase_015063_2);

#define VkglTestCase_015064_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015064_2 "x.mul.dynamic.lowp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015064, VkglTestCase_015064_1, VkglTestCase_015064_2);

#define VkglTestCase_015065_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015065_2 ".mul.dynamic.lowp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015065, VkglTestCase_015065_1, VkglTestCase_015065_2);

#define VkglTestCase_015066_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015066_2 "x.mul.dynamic.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015066, VkglTestCase_015066_1, VkglTestCase_015066_2);

#define VkglTestCase_015067_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015067_2 ".mul.dynamic.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015067, VkglTestCase_015067_1, VkglTestCase_015067_2);

#define VkglTestCase_015068_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015068_2 ".mul.dynamic.lowp_mat2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015068, VkglTestCase_015068_1, VkglTestCase_015068_2);

#define VkglTestCase_015069_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015069_2 "mul.dynamic.lowp_mat2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015069, VkglTestCase_015069_1, VkglTestCase_015069_2);

#define VkglTestCase_015070_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015070_2 ".mul.dynamic.lowp_mat2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015070, VkglTestCase_015070_1, VkglTestCase_015070_2);

#define VkglTestCase_015071_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015071_2 "mul.dynamic.lowp_mat2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015071, VkglTestCase_015071_1, VkglTestCase_015071_2);

#define VkglTestCase_015072_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015072_2 "mul.dynamic.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015072, VkglTestCase_015072_1, VkglTestCase_015072_2);

#define VkglTestCase_015073_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015073_2 "ul.dynamic.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015073, VkglTestCase_015073_1, VkglTestCase_015073_2);

#define VkglTestCase_015074_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015074_2 ".mul.dynamic.mediump_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015074, VkglTestCase_015074_1, VkglTestCase_015074_2);

#define VkglTestCase_015075_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015075_2 "mul.dynamic.mediump_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015075, VkglTestCase_015075_1, VkglTestCase_015075_2);

#define VkglTestCase_015076_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015076_2 ".mul.dynamic.mediump_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015076, VkglTestCase_015076_1, VkglTestCase_015076_2);

#define VkglTestCase_015077_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015077_2 "mul.dynamic.mediump_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015077, VkglTestCase_015077_1, VkglTestCase_015077_2);

#define VkglTestCase_015078_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015078_2 ".mul.dynamic.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015078, VkglTestCase_015078_1, VkglTestCase_015078_2);

#define VkglTestCase_015079_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015079_2 "mul.dynamic.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015079, VkglTestCase_015079_1, VkglTestCase_015079_2);

#define VkglTestCase_015080_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015080_2 "mul.dynamic.mediump_mat2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015080, VkglTestCase_015080_1, VkglTestCase_015080_2);

#define VkglTestCase_015081_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015081_2 "ul.dynamic.mediump_mat2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015081, VkglTestCase_015081_1, VkglTestCase_015081_2);

#define VkglTestCase_015082_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015082_2 "mul.dynamic.mediump_mat2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015082, VkglTestCase_015082_1, VkglTestCase_015082_2);

#define VkglTestCase_015083_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015083_2 "ul.dynamic.mediump_mat2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015083, VkglTestCase_015083_1, VkglTestCase_015083_2);

#define VkglTestCase_015084_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015084_2 ".mul.dynamic.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015084, VkglTestCase_015084_1, VkglTestCase_015084_2);

#define VkglTestCase_015085_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015085_2 "mul.dynamic.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015085, VkglTestCase_015085_1, VkglTestCase_015085_2);

#define VkglTestCase_015086_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015086_2 "x.mul.dynamic.highp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015086, VkglTestCase_015086_1, VkglTestCase_015086_2);

#define VkglTestCase_015087_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015087_2 ".mul.dynamic.highp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015087, VkglTestCase_015087_1, VkglTestCase_015087_2);

#define VkglTestCase_015088_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015088_2 "x.mul.dynamic.highp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015088, VkglTestCase_015088_1, VkglTestCase_015088_2);

#define VkglTestCase_015089_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015089_2 ".mul.dynamic.highp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015089, VkglTestCase_015089_1, VkglTestCase_015089_2);

#define VkglTestCase_015090_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015090_2 "x.mul.dynamic.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015090, VkglTestCase_015090_1, VkglTestCase_015090_2);

#define VkglTestCase_015091_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015091_2 ".mul.dynamic.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015091, VkglTestCase_015091_1, VkglTestCase_015091_2);

#define VkglTestCase_015092_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015092_2 ".mul.dynamic.highp_mat2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015092, VkglTestCase_015092_1, VkglTestCase_015092_2);

#define VkglTestCase_015093_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015093_2 "mul.dynamic.highp_mat2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015093, VkglTestCase_015093_1, VkglTestCase_015093_2);

#define VkglTestCase_015094_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015094_2 ".mul.dynamic.highp_mat2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015094, VkglTestCase_015094_1, VkglTestCase_015094_2);

#define VkglTestCase_015095_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015095_2 "mul.dynamic.highp_mat2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015095, VkglTestCase_015095_1, VkglTestCase_015095_2);

#define VkglTestCase_015096_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015096_2 ".mul.dynamic.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015096, VkglTestCase_015096_1, VkglTestCase_015096_2);

#define VkglTestCase_015097_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015097_2 "mul.dynamic.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015097, VkglTestCase_015097_1, VkglTestCase_015097_2);

#define VkglTestCase_015098_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015098_2 ".mul.dynamic.lowp_mat2x3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015098, VkglTestCase_015098_1, VkglTestCase_015098_2);

#define VkglTestCase_015099_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015099_2 "mul.dynamic.lowp_mat2x3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015099, VkglTestCase_015099_1, VkglTestCase_015099_2);

#define VkglTestCase_015100_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015100_2 ".mul.dynamic.lowp_vec3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015100, VkglTestCase_015100_1, VkglTestCase_015100_2);

#define VkglTestCase_015101_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015101_2 "mul.dynamic.lowp_vec3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015101, VkglTestCase_015101_1, VkglTestCase_015101_2);

#define VkglTestCase_015102_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015102_2 ".mul.dynamic.lowp_mat2x3_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015102, VkglTestCase_015102_1, VkglTestCase_015102_2);

#define VkglTestCase_015103_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015103_2 "mul.dynamic.lowp_mat2x3_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015103, VkglTestCase_015103_1, VkglTestCase_015103_2);

#define VkglTestCase_015104_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015104_2 "mul.dynamic.lowp_mat2x3_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015104, VkglTestCase_015104_1, VkglTestCase_015104_2);

#define VkglTestCase_015105_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015105_2 "ul.dynamic.lowp_mat2x3_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015105, VkglTestCase_015105_1, VkglTestCase_015105_2);

#define VkglTestCase_015106_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015106_2 "mul.dynamic.lowp_mat2x3_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015106, VkglTestCase_015106_1, VkglTestCase_015106_2);

#define VkglTestCase_015107_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015107_2 "ul.dynamic.lowp_mat2x3_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015107, VkglTestCase_015107_1, VkglTestCase_015107_2);

#define VkglTestCase_015108_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015108_2 "ul.dynamic.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015108, VkglTestCase_015108_1, VkglTestCase_015108_2);

#define VkglTestCase_015109_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015109_2 "l.dynamic.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015109, VkglTestCase_015109_1, VkglTestCase_015109_2);

#define VkglTestCase_015110_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015110_2 "mul.dynamic.mediump_mat2x3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015110, VkglTestCase_015110_1, VkglTestCase_015110_2);

#define VkglTestCase_015111_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015111_2 "ul.dynamic.mediump_mat2x3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015111, VkglTestCase_015111_1, VkglTestCase_015111_2);

#define VkglTestCase_015112_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015112_2 "mul.dynamic.mediump_vec3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015112, VkglTestCase_015112_1, VkglTestCase_015112_2);

#define VkglTestCase_015113_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015113_2 "ul.dynamic.mediump_vec3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015113, VkglTestCase_015113_1, VkglTestCase_015113_2);

#define VkglTestCase_015114_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015114_2 "mul.dynamic.mediump_mat2x3_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015114, VkglTestCase_015114_1, VkglTestCase_015114_2);

#define VkglTestCase_015115_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015115_2 "ul.dynamic.mediump_mat2x3_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015115, VkglTestCase_015115_1, VkglTestCase_015115_2);

#define VkglTestCase_015116_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015116_2 "ul.dynamic.mediump_mat2x3_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015116, VkglTestCase_015116_1, VkglTestCase_015116_2);

#define VkglTestCase_015117_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015117_2 "l.dynamic.mediump_mat2x3_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015117, VkglTestCase_015117_1, VkglTestCase_015117_2);

#define VkglTestCase_015118_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015118_2 "ul.dynamic.mediump_mat2x3_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015118, VkglTestCase_015118_1, VkglTestCase_015118_2);

#define VkglTestCase_015119_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015119_2 "l.dynamic.mediump_mat2x3_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015119, VkglTestCase_015119_1, VkglTestCase_015119_2);

#define VkglTestCase_015120_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015120_2 "mul.dynamic.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015120, VkglTestCase_015120_1, VkglTestCase_015120_2);

#define VkglTestCase_015121_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015121_2 "ul.dynamic.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015121, VkglTestCase_015121_1, VkglTestCase_015121_2);

#define VkglTestCase_015122_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015122_2 ".mul.dynamic.highp_mat2x3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015122, VkglTestCase_015122_1, VkglTestCase_015122_2);

#define VkglTestCase_015123_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015123_2 "mul.dynamic.highp_mat2x3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015123, VkglTestCase_015123_1, VkglTestCase_015123_2);

#define VkglTestCase_015124_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015124_2 ".mul.dynamic.highp_vec3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015124, VkglTestCase_015124_1, VkglTestCase_015124_2);

#define VkglTestCase_015125_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015125_2 "mul.dynamic.highp_vec3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015125, VkglTestCase_015125_1, VkglTestCase_015125_2);

#define VkglTestCase_015126_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015126_2 ".mul.dynamic.highp_mat2x3_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015126, VkglTestCase_015126_1, VkglTestCase_015126_2);

#define VkglTestCase_015127_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015127_2 "mul.dynamic.highp_mat2x3_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015127, VkglTestCase_015127_1, VkglTestCase_015127_2);

#define VkglTestCase_015128_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015128_2 "mul.dynamic.highp_mat2x3_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015128, VkglTestCase_015128_1, VkglTestCase_015128_2);

#define VkglTestCase_015129_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015129_2 "ul.dynamic.highp_mat2x3_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015129, VkglTestCase_015129_1, VkglTestCase_015129_2);

#define VkglTestCase_015130_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015130_2 "mul.dynamic.highp_mat2x3_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015130, VkglTestCase_015130_1, VkglTestCase_015130_2);

#define VkglTestCase_015131_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015131_2 "ul.dynamic.highp_mat2x3_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015131, VkglTestCase_015131_1, VkglTestCase_015131_2);

#define VkglTestCase_015132_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015132_2 ".mul.dynamic.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015132, VkglTestCase_015132_1, VkglTestCase_015132_2);

#define VkglTestCase_015133_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015133_2 "mul.dynamic.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015133, VkglTestCase_015133_1, VkglTestCase_015133_2);

#define VkglTestCase_015134_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015134_2 ".mul.dynamic.lowp_mat2x4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015134, VkglTestCase_015134_1, VkglTestCase_015134_2);

#define VkglTestCase_015135_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015135_2 "mul.dynamic.lowp_mat2x4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015135, VkglTestCase_015135_1, VkglTestCase_015135_2);

#define VkglTestCase_015136_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015136_2 ".mul.dynamic.lowp_vec4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015136, VkglTestCase_015136_1, VkglTestCase_015136_2);

#define VkglTestCase_015137_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015137_2 "mul.dynamic.lowp_vec4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015137, VkglTestCase_015137_1, VkglTestCase_015137_2);

#define VkglTestCase_015138_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015138_2 ".mul.dynamic.lowp_mat2x4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015138, VkglTestCase_015138_1, VkglTestCase_015138_2);

#define VkglTestCase_015139_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015139_2 "mul.dynamic.lowp_mat2x4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015139, VkglTestCase_015139_1, VkglTestCase_015139_2);

#define VkglTestCase_015140_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015140_2 "mul.dynamic.lowp_mat2x4_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015140, VkglTestCase_015140_1, VkglTestCase_015140_2);

#define VkglTestCase_015141_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015141_2 "ul.dynamic.lowp_mat2x4_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015141, VkglTestCase_015141_1, VkglTestCase_015141_2);

#define VkglTestCase_015142_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015142_2 "mul.dynamic.lowp_mat2x4_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015142, VkglTestCase_015142_1, VkglTestCase_015142_2);

#define VkglTestCase_015143_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015143_2 "ul.dynamic.lowp_mat2x4_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015143, VkglTestCase_015143_1, VkglTestCase_015143_2);

#define VkglTestCase_015144_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015144_2 "ul.dynamic.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015144, VkglTestCase_015144_1, VkglTestCase_015144_2);

#define VkglTestCase_015145_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015145_2 "l.dynamic.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015145, VkglTestCase_015145_1, VkglTestCase_015145_2);

#define VkglTestCase_015146_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015146_2 "mul.dynamic.mediump_mat2x4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015146, VkglTestCase_015146_1, VkglTestCase_015146_2);

#define VkglTestCase_015147_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015147_2 "ul.dynamic.mediump_mat2x4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015147, VkglTestCase_015147_1, VkglTestCase_015147_2);

#define VkglTestCase_015148_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015148_2 "mul.dynamic.mediump_vec4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015148, VkglTestCase_015148_1, VkglTestCase_015148_2);

#define VkglTestCase_015149_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015149_2 "ul.dynamic.mediump_vec4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015149, VkglTestCase_015149_1, VkglTestCase_015149_2);

#define VkglTestCase_015150_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015150_2 "mul.dynamic.mediump_mat2x4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015150, VkglTestCase_015150_1, VkglTestCase_015150_2);

#define VkglTestCase_015151_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015151_2 "ul.dynamic.mediump_mat2x4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015151, VkglTestCase_015151_1, VkglTestCase_015151_2);

#define VkglTestCase_015152_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015152_2 "ul.dynamic.mediump_mat2x4_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015152, VkglTestCase_015152_1, VkglTestCase_015152_2);

#define VkglTestCase_015153_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015153_2 "l.dynamic.mediump_mat2x4_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015153, VkglTestCase_015153_1, VkglTestCase_015153_2);

#define VkglTestCase_015154_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015154_2 "ul.dynamic.mediump_mat2x4_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015154, VkglTestCase_015154_1, VkglTestCase_015154_2);

#define VkglTestCase_015155_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015155_2 "l.dynamic.mediump_mat2x4_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015155, VkglTestCase_015155_1, VkglTestCase_015155_2);

#define VkglTestCase_015156_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015156_2 "mul.dynamic.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015156, VkglTestCase_015156_1, VkglTestCase_015156_2);

#define VkglTestCase_015157_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015157_2 "ul.dynamic.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015157, VkglTestCase_015157_1, VkglTestCase_015157_2);

#define VkglTestCase_015158_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015158_2 ".mul.dynamic.highp_mat2x4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015158, VkglTestCase_015158_1, VkglTestCase_015158_2);

#define VkglTestCase_015159_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015159_2 "mul.dynamic.highp_mat2x4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015159, VkglTestCase_015159_1, VkglTestCase_015159_2);

#define VkglTestCase_015160_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015160_2 ".mul.dynamic.highp_vec4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015160, VkglTestCase_015160_1, VkglTestCase_015160_2);

#define VkglTestCase_015161_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015161_2 "mul.dynamic.highp_vec4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015161, VkglTestCase_015161_1, VkglTestCase_015161_2);

#define VkglTestCase_015162_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015162_2 ".mul.dynamic.highp_mat2x4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015162, VkglTestCase_015162_1, VkglTestCase_015162_2);

#define VkglTestCase_015163_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015163_2 "mul.dynamic.highp_mat2x4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015163, VkglTestCase_015163_1, VkglTestCase_015163_2);

#define VkglTestCase_015164_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015164_2 "mul.dynamic.highp_mat2x4_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015164, VkglTestCase_015164_1, VkglTestCase_015164_2);

#define VkglTestCase_015165_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015165_2 "ul.dynamic.highp_mat2x4_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015165, VkglTestCase_015165_1, VkglTestCase_015165_2);

#define VkglTestCase_015166_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015166_2 "mul.dynamic.highp_mat2x4_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015166, VkglTestCase_015166_1, VkglTestCase_015166_2);

#define VkglTestCase_015167_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015167_2 "ul.dynamic.highp_mat2x4_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015167, VkglTestCase_015167_1, VkglTestCase_015167_2);

#define VkglTestCase_015168_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015168_2 ".mul.dynamic.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015168, VkglTestCase_015168_1, VkglTestCase_015168_2);

#define VkglTestCase_015169_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015169_2 "mul.dynamic.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015169, VkglTestCase_015169_1, VkglTestCase_015169_2);

#define VkglTestCase_015170_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015170_2 ".mul.dynamic.lowp_mat3x2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015170, VkglTestCase_015170_1, VkglTestCase_015170_2);

#define VkglTestCase_015171_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015171_2 "mul.dynamic.lowp_mat3x2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015171, VkglTestCase_015171_1, VkglTestCase_015171_2);

#define VkglTestCase_015172_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015172_2 ".mul.dynamic.lowp_vec2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015172, VkglTestCase_015172_1, VkglTestCase_015172_2);

#define VkglTestCase_015173_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015173_2 "mul.dynamic.lowp_vec2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015173, VkglTestCase_015173_1, VkglTestCase_015173_2);

#define VkglTestCase_015174_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015174_2 "mul.dynamic.lowp_mat3x2_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015174, VkglTestCase_015174_1, VkglTestCase_015174_2);

#define VkglTestCase_015175_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015175_2 "ul.dynamic.lowp_mat3x2_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015175, VkglTestCase_015175_1, VkglTestCase_015175_2);

#define VkglTestCase_015176_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015176_2 ".mul.dynamic.lowp_mat3x2_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015176, VkglTestCase_015176_1, VkglTestCase_015176_2);

#define VkglTestCase_015177_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015177_2 "mul.dynamic.lowp_mat3x2_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015177, VkglTestCase_015177_1, VkglTestCase_015177_2);

#define VkglTestCase_015178_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015178_2 "mul.dynamic.lowp_mat3x2_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015178, VkglTestCase_015178_1, VkglTestCase_015178_2);

#define VkglTestCase_015179_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015179_2 "ul.dynamic.lowp_mat3x2_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015179, VkglTestCase_015179_1, VkglTestCase_015179_2);

#define VkglTestCase_015180_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015180_2 "ul.dynamic.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015180, VkglTestCase_015180_1, VkglTestCase_015180_2);

#define VkglTestCase_015181_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015181_2 "l.dynamic.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015181, VkglTestCase_015181_1, VkglTestCase_015181_2);

#define VkglTestCase_015182_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015182_2 "mul.dynamic.mediump_mat3x2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015182, VkglTestCase_015182_1, VkglTestCase_015182_2);

#define VkglTestCase_015183_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015183_2 "ul.dynamic.mediump_mat3x2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015183, VkglTestCase_015183_1, VkglTestCase_015183_2);

#define VkglTestCase_015184_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015184_2 "mul.dynamic.mediump_vec2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015184, VkglTestCase_015184_1, VkglTestCase_015184_2);

#define VkglTestCase_015185_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015185_2 "ul.dynamic.mediump_vec2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015185, VkglTestCase_015185_1, VkglTestCase_015185_2);

#define VkglTestCase_015186_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015186_2 "ul.dynamic.mediump_mat3x2_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015186, VkglTestCase_015186_1, VkglTestCase_015186_2);

#define VkglTestCase_015187_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015187_2 "l.dynamic.mediump_mat3x2_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015187, VkglTestCase_015187_1, VkglTestCase_015187_2);

#define VkglTestCase_015188_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015188_2 "mul.dynamic.mediump_mat3x2_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015188, VkglTestCase_015188_1, VkglTestCase_015188_2);

#define VkglTestCase_015189_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015189_2 "ul.dynamic.mediump_mat3x2_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015189, VkglTestCase_015189_1, VkglTestCase_015189_2);

#define VkglTestCase_015190_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015190_2 "ul.dynamic.mediump_mat3x2_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015190, VkglTestCase_015190_1, VkglTestCase_015190_2);

#define VkglTestCase_015191_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015191_2 "l.dynamic.mediump_mat3x2_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015191, VkglTestCase_015191_1, VkglTestCase_015191_2);

#define VkglTestCase_015192_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015192_2 "mul.dynamic.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015192, VkglTestCase_015192_1, VkglTestCase_015192_2);

#define VkglTestCase_015193_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015193_2 "ul.dynamic.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015193, VkglTestCase_015193_1, VkglTestCase_015193_2);

#define VkglTestCase_015194_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015194_2 ".mul.dynamic.highp_mat3x2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015194, VkglTestCase_015194_1, VkglTestCase_015194_2);

#define VkglTestCase_015195_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015195_2 "mul.dynamic.highp_mat3x2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015195, VkglTestCase_015195_1, VkglTestCase_015195_2);

#define VkglTestCase_015196_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015196_2 ".mul.dynamic.highp_vec2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015196, VkglTestCase_015196_1, VkglTestCase_015196_2);

#define VkglTestCase_015197_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015197_2 "mul.dynamic.highp_vec2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015197, VkglTestCase_015197_1, VkglTestCase_015197_2);

#define VkglTestCase_015198_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015198_2 "mul.dynamic.highp_mat3x2_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015198, VkglTestCase_015198_1, VkglTestCase_015198_2);

#define VkglTestCase_015199_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015199_2 "ul.dynamic.highp_mat3x2_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015199, VkglTestCase_015199_1, VkglTestCase_015199_2);

#define VkglTestCase_015200_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015200_2 ".mul.dynamic.highp_mat3x2_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015200, VkglTestCase_015200_1, VkglTestCase_015200_2);

#define VkglTestCase_015201_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015201_2 "mul.dynamic.highp_mat3x2_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015201, VkglTestCase_015201_1, VkglTestCase_015201_2);

#define VkglTestCase_015202_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015202_2 "mul.dynamic.highp_mat3x2_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015202, VkglTestCase_015202_1, VkglTestCase_015202_2);

#define VkglTestCase_015203_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015203_2 "ul.dynamic.highp_mat3x2_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015203, VkglTestCase_015203_1, VkglTestCase_015203_2);

#define VkglTestCase_015204_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015204_2 "x.mul.dynamic.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015204, VkglTestCase_015204_1, VkglTestCase_015204_2);

#define VkglTestCase_015205_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015205_2 ".mul.dynamic.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015205, VkglTestCase_015205_1, VkglTestCase_015205_2);

#define VkglTestCase_015206_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015206_2 "x.mul.dynamic.lowp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015206, VkglTestCase_015206_1, VkglTestCase_015206_2);

#define VkglTestCase_015207_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015207_2 ".mul.dynamic.lowp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015207, VkglTestCase_015207_1, VkglTestCase_015207_2);

#define VkglTestCase_015208_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015208_2 "x.mul.dynamic.lowp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015208, VkglTestCase_015208_1, VkglTestCase_015208_2);

#define VkglTestCase_015209_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015209_2 ".mul.dynamic.lowp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015209, VkglTestCase_015209_1, VkglTestCase_015209_2);

#define VkglTestCase_015210_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015210_2 ".mul.dynamic.lowp_mat3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015210, VkglTestCase_015210_1, VkglTestCase_015210_2);

#define VkglTestCase_015211_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015211_2 "mul.dynamic.lowp_mat3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015211, VkglTestCase_015211_1, VkglTestCase_015211_2);

#define VkglTestCase_015212_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015212_2 "x.mul.dynamic.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015212, VkglTestCase_015212_1, VkglTestCase_015212_2);

#define VkglTestCase_015213_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015213_2 ".mul.dynamic.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015213, VkglTestCase_015213_1, VkglTestCase_015213_2);

#define VkglTestCase_015214_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015214_2 ".mul.dynamic.lowp_mat3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015214, VkglTestCase_015214_1, VkglTestCase_015214_2);

#define VkglTestCase_015215_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015215_2 "mul.dynamic.lowp_mat3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015215, VkglTestCase_015215_1, VkglTestCase_015215_2);

#define VkglTestCase_015216_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015216_2 "mul.dynamic.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015216, VkglTestCase_015216_1, VkglTestCase_015216_2);

#define VkglTestCase_015217_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015217_2 "ul.dynamic.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015217, VkglTestCase_015217_1, VkglTestCase_015217_2);

#define VkglTestCase_015218_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015218_2 ".mul.dynamic.mediump_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015218, VkglTestCase_015218_1, VkglTestCase_015218_2);

#define VkglTestCase_015219_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015219_2 "mul.dynamic.mediump_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015219, VkglTestCase_015219_1, VkglTestCase_015219_2);

#define VkglTestCase_015220_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015220_2 ".mul.dynamic.mediump_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015220, VkglTestCase_015220_1, VkglTestCase_015220_2);

#define VkglTestCase_015221_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015221_2 "mul.dynamic.mediump_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015221, VkglTestCase_015221_1, VkglTestCase_015221_2);

#define VkglTestCase_015222_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015222_2 "mul.dynamic.mediump_mat3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015222, VkglTestCase_015222_1, VkglTestCase_015222_2);

#define VkglTestCase_015223_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015223_2 "ul.dynamic.mediump_mat3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015223, VkglTestCase_015223_1, VkglTestCase_015223_2);

#define VkglTestCase_015224_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015224_2 ".mul.dynamic.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015224, VkglTestCase_015224_1, VkglTestCase_015224_2);

#define VkglTestCase_015225_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015225_2 "mul.dynamic.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015225, VkglTestCase_015225_1, VkglTestCase_015225_2);

#define VkglTestCase_015226_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015226_2 "mul.dynamic.mediump_mat3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015226, VkglTestCase_015226_1, VkglTestCase_015226_2);

#define VkglTestCase_015227_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015227_2 "ul.dynamic.mediump_mat3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015227, VkglTestCase_015227_1, VkglTestCase_015227_2);

#define VkglTestCase_015228_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015228_2 ".mul.dynamic.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015228, VkglTestCase_015228_1, VkglTestCase_015228_2);

#define VkglTestCase_015229_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015229_2 "mul.dynamic.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015229, VkglTestCase_015229_1, VkglTestCase_015229_2);

#define VkglTestCase_015230_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015230_2 "x.mul.dynamic.highp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015230, VkglTestCase_015230_1, VkglTestCase_015230_2);

#define VkglTestCase_015231_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015231_2 ".mul.dynamic.highp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015231, VkglTestCase_015231_1, VkglTestCase_015231_2);

#define VkglTestCase_015232_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015232_2 "x.mul.dynamic.highp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015232, VkglTestCase_015232_1, VkglTestCase_015232_2);

#define VkglTestCase_015233_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015233_2 ".mul.dynamic.highp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015233, VkglTestCase_015233_1, VkglTestCase_015233_2);

#define VkglTestCase_015234_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015234_2 ".mul.dynamic.highp_mat3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015234, VkglTestCase_015234_1, VkglTestCase_015234_2);

#define VkglTestCase_015235_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015235_2 "mul.dynamic.highp_mat3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015235, VkglTestCase_015235_1, VkglTestCase_015235_2);

#define VkglTestCase_015236_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015236_2 "x.mul.dynamic.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015236, VkglTestCase_015236_1, VkglTestCase_015236_2);

#define VkglTestCase_015237_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015237_2 ".mul.dynamic.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015237, VkglTestCase_015237_1, VkglTestCase_015237_2);

#define VkglTestCase_015238_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015238_2 ".mul.dynamic.highp_mat3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015238, VkglTestCase_015238_1, VkglTestCase_015238_2);

#define VkglTestCase_015239_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015239_2 "mul.dynamic.highp_mat3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015239, VkglTestCase_015239_1, VkglTestCase_015239_2);

#define VkglTestCase_015240_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015240_2 ".mul.dynamic.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015240, VkglTestCase_015240_1, VkglTestCase_015240_2);

#define VkglTestCase_015241_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015241_2 "mul.dynamic.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015241, VkglTestCase_015241_1, VkglTestCase_015241_2);

#define VkglTestCase_015242_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015242_2 ".mul.dynamic.lowp_mat3x4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015242, VkglTestCase_015242_1, VkglTestCase_015242_2);

#define VkglTestCase_015243_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015243_2 "mul.dynamic.lowp_mat3x4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015243, VkglTestCase_015243_1, VkglTestCase_015243_2);

#define VkglTestCase_015244_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015244_2 ".mul.dynamic.lowp_vec4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015244, VkglTestCase_015244_1, VkglTestCase_015244_2);

#define VkglTestCase_015245_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015245_2 "mul.dynamic.lowp_vec4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015245, VkglTestCase_015245_1, VkglTestCase_015245_2);

#define VkglTestCase_015246_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015246_2 "mul.dynamic.lowp_mat3x4_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015246, VkglTestCase_015246_1, VkglTestCase_015246_2);

#define VkglTestCase_015247_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015247_2 "ul.dynamic.lowp_mat3x4_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015247, VkglTestCase_015247_1, VkglTestCase_015247_2);

#define VkglTestCase_015248_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015248_2 ".mul.dynamic.lowp_mat3x4_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015248, VkglTestCase_015248_1, VkglTestCase_015248_2);

#define VkglTestCase_015249_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015249_2 "mul.dynamic.lowp_mat3x4_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015249, VkglTestCase_015249_1, VkglTestCase_015249_2);

#define VkglTestCase_015250_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015250_2 "mul.dynamic.lowp_mat3x4_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015250, VkglTestCase_015250_1, VkglTestCase_015250_2);

#define VkglTestCase_015251_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015251_2 "ul.dynamic.lowp_mat3x4_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015251, VkglTestCase_015251_1, VkglTestCase_015251_2);

#define VkglTestCase_015252_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015252_2 "ul.dynamic.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015252, VkglTestCase_015252_1, VkglTestCase_015252_2);

#define VkglTestCase_015253_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015253_2 "l.dynamic.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015253, VkglTestCase_015253_1, VkglTestCase_015253_2);

#define VkglTestCase_015254_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015254_2 "mul.dynamic.mediump_mat3x4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015254, VkglTestCase_015254_1, VkglTestCase_015254_2);

#define VkglTestCase_015255_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015255_2 "ul.dynamic.mediump_mat3x4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015255, VkglTestCase_015255_1, VkglTestCase_015255_2);

#define VkglTestCase_015256_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015256_2 "mul.dynamic.mediump_vec4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015256, VkglTestCase_015256_1, VkglTestCase_015256_2);

#define VkglTestCase_015257_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015257_2 "ul.dynamic.mediump_vec4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015257, VkglTestCase_015257_1, VkglTestCase_015257_2);

#define VkglTestCase_015258_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015258_2 "ul.dynamic.mediump_mat3x4_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015258, VkglTestCase_015258_1, VkglTestCase_015258_2);

#define VkglTestCase_015259_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015259_2 "l.dynamic.mediump_mat3x4_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015259, VkglTestCase_015259_1, VkglTestCase_015259_2);

#define VkglTestCase_015260_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015260_2 "mul.dynamic.mediump_mat3x4_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015260, VkglTestCase_015260_1, VkglTestCase_015260_2);

#define VkglTestCase_015261_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015261_2 "ul.dynamic.mediump_mat3x4_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015261, VkglTestCase_015261_1, VkglTestCase_015261_2);

#define VkglTestCase_015262_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015262_2 "ul.dynamic.mediump_mat3x4_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015262, VkglTestCase_015262_1, VkglTestCase_015262_2);

#define VkglTestCase_015263_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015263_2 "l.dynamic.mediump_mat3x4_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015263, VkglTestCase_015263_1, VkglTestCase_015263_2);

#define VkglTestCase_015264_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015264_2 "mul.dynamic.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015264, VkglTestCase_015264_1, VkglTestCase_015264_2);

#define VkglTestCase_015265_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015265_2 "ul.dynamic.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015265, VkglTestCase_015265_1, VkglTestCase_015265_2);

#define VkglTestCase_015266_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015266_2 ".mul.dynamic.highp_mat3x4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015266, VkglTestCase_015266_1, VkglTestCase_015266_2);

#define VkglTestCase_015267_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015267_2 "mul.dynamic.highp_mat3x4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015267, VkglTestCase_015267_1, VkglTestCase_015267_2);

#define VkglTestCase_015268_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015268_2 ".mul.dynamic.highp_vec4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015268, VkglTestCase_015268_1, VkglTestCase_015268_2);

#define VkglTestCase_015269_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015269_2 "mul.dynamic.highp_vec4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015269, VkglTestCase_015269_1, VkglTestCase_015269_2);

#define VkglTestCase_015270_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015270_2 "mul.dynamic.highp_mat3x4_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015270, VkglTestCase_015270_1, VkglTestCase_015270_2);

#define VkglTestCase_015271_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015271_2 "ul.dynamic.highp_mat3x4_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015271, VkglTestCase_015271_1, VkglTestCase_015271_2);

#define VkglTestCase_015272_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015272_2 ".mul.dynamic.highp_mat3x4_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015272, VkglTestCase_015272_1, VkglTestCase_015272_2);

#define VkglTestCase_015273_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015273_2 "mul.dynamic.highp_mat3x4_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015273, VkglTestCase_015273_1, VkglTestCase_015273_2);

#define VkglTestCase_015274_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015274_2 "mul.dynamic.highp_mat3x4_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015274, VkglTestCase_015274_1, VkglTestCase_015274_2);

#define VkglTestCase_015275_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015275_2 "ul.dynamic.highp_mat3x4_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015275, VkglTestCase_015275_1, VkglTestCase_015275_2);

#define VkglTestCase_015276_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015276_2 ".mul.dynamic.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015276, VkglTestCase_015276_1, VkglTestCase_015276_2);

#define VkglTestCase_015277_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015277_2 "mul.dynamic.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015277, VkglTestCase_015277_1, VkglTestCase_015277_2);

#define VkglTestCase_015278_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015278_2 ".mul.dynamic.lowp_mat4x2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015278, VkglTestCase_015278_1, VkglTestCase_015278_2);

#define VkglTestCase_015279_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015279_2 "mul.dynamic.lowp_mat4x2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015279, VkglTestCase_015279_1, VkglTestCase_015279_2);

#define VkglTestCase_015280_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015280_2 ".mul.dynamic.lowp_vec2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015280, VkglTestCase_015280_1, VkglTestCase_015280_2);

#define VkglTestCase_015281_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015281_2 "mul.dynamic.lowp_vec2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015281, VkglTestCase_015281_1, VkglTestCase_015281_2);

#define VkglTestCase_015282_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015282_2 "mul.dynamic.lowp_mat4x2_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015282, VkglTestCase_015282_1, VkglTestCase_015282_2);

#define VkglTestCase_015283_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015283_2 "ul.dynamic.lowp_mat4x2_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015283, VkglTestCase_015283_1, VkglTestCase_015283_2);

#define VkglTestCase_015284_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015284_2 "mul.dynamic.lowp_mat4x2_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015284, VkglTestCase_015284_1, VkglTestCase_015284_2);

#define VkglTestCase_015285_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015285_2 "ul.dynamic.lowp_mat4x2_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015285, VkglTestCase_015285_1, VkglTestCase_015285_2);

#define VkglTestCase_015286_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015286_2 ".mul.dynamic.lowp_mat4x2_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015286, VkglTestCase_015286_1, VkglTestCase_015286_2);

#define VkglTestCase_015287_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015287_2 "mul.dynamic.lowp_mat4x2_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015287, VkglTestCase_015287_1, VkglTestCase_015287_2);

#define VkglTestCase_015288_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015288_2 "ul.dynamic.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015288, VkglTestCase_015288_1, VkglTestCase_015288_2);

#define VkglTestCase_015289_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015289_2 "l.dynamic.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015289, VkglTestCase_015289_1, VkglTestCase_015289_2);

#define VkglTestCase_015290_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015290_2 "mul.dynamic.mediump_mat4x2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015290, VkglTestCase_015290_1, VkglTestCase_015290_2);

#define VkglTestCase_015291_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015291_2 "ul.dynamic.mediump_mat4x2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015291, VkglTestCase_015291_1, VkglTestCase_015291_2);

#define VkglTestCase_015292_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015292_2 "mul.dynamic.mediump_vec2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015292, VkglTestCase_015292_1, VkglTestCase_015292_2);

#define VkglTestCase_015293_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015293_2 "ul.dynamic.mediump_vec2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015293, VkglTestCase_015293_1, VkglTestCase_015293_2);

#define VkglTestCase_015294_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015294_2 "ul.dynamic.mediump_mat4x2_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015294, VkglTestCase_015294_1, VkglTestCase_015294_2);

#define VkglTestCase_015295_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015295_2 "l.dynamic.mediump_mat4x2_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015295, VkglTestCase_015295_1, VkglTestCase_015295_2);

#define VkglTestCase_015296_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015296_2 "ul.dynamic.mediump_mat4x2_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015296, VkglTestCase_015296_1, VkglTestCase_015296_2);

#define VkglTestCase_015297_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015297_2 "l.dynamic.mediump_mat4x2_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015297, VkglTestCase_015297_1, VkglTestCase_015297_2);

#define VkglTestCase_015298_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015298_2 "mul.dynamic.mediump_mat4x2_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015298, VkglTestCase_015298_1, VkglTestCase_015298_2);

#define VkglTestCase_015299_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015299_2 "ul.dynamic.mediump_mat4x2_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015299, VkglTestCase_015299_1, VkglTestCase_015299_2);

#define VkglTestCase_015300_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015300_2 "mul.dynamic.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015300, VkglTestCase_015300_1, VkglTestCase_015300_2);

#define VkglTestCase_015301_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015301_2 "ul.dynamic.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015301, VkglTestCase_015301_1, VkglTestCase_015301_2);

#define VkglTestCase_015302_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015302_2 ".mul.dynamic.highp_mat4x2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015302, VkglTestCase_015302_1, VkglTestCase_015302_2);

#define VkglTestCase_015303_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015303_2 "mul.dynamic.highp_mat4x2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015303, VkglTestCase_015303_1, VkglTestCase_015303_2);

#define VkglTestCase_015304_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015304_2 ".mul.dynamic.highp_vec2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015304, VkglTestCase_015304_1, VkglTestCase_015304_2);

#define VkglTestCase_015305_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015305_2 "mul.dynamic.highp_vec2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015305, VkglTestCase_015305_1, VkglTestCase_015305_2);

#define VkglTestCase_015306_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015306_2 "mul.dynamic.highp_mat4x2_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015306, VkglTestCase_015306_1, VkglTestCase_015306_2);

#define VkglTestCase_015307_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015307_2 "ul.dynamic.highp_mat4x2_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015307, VkglTestCase_015307_1, VkglTestCase_015307_2);

#define VkglTestCase_015308_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015308_2 "mul.dynamic.highp_mat4x2_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015308, VkglTestCase_015308_1, VkglTestCase_015308_2);

#define VkglTestCase_015309_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015309_2 "ul.dynamic.highp_mat4x2_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015309, VkglTestCase_015309_1, VkglTestCase_015309_2);

#define VkglTestCase_015310_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015310_2 ".mul.dynamic.highp_mat4x2_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015310, VkglTestCase_015310_1, VkglTestCase_015310_2);

#define VkglTestCase_015311_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015311_2 "mul.dynamic.highp_mat4x2_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015311, VkglTestCase_015311_1, VkglTestCase_015311_2);

#define VkglTestCase_015312_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015312_2 ".mul.dynamic.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015312, VkglTestCase_015312_1, VkglTestCase_015312_2);

#define VkglTestCase_015313_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015313_2 "mul.dynamic.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015313, VkglTestCase_015313_1, VkglTestCase_015313_2);

#define VkglTestCase_015314_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015314_2 ".mul.dynamic.lowp_mat4x3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015314, VkglTestCase_015314_1, VkglTestCase_015314_2);

#define VkglTestCase_015315_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015315_2 "mul.dynamic.lowp_mat4x3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015315, VkglTestCase_015315_1, VkglTestCase_015315_2);

#define VkglTestCase_015316_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015316_2 ".mul.dynamic.lowp_vec3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015316, VkglTestCase_015316_1, VkglTestCase_015316_2);

#define VkglTestCase_015317_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015317_2 "mul.dynamic.lowp_vec3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015317, VkglTestCase_015317_1, VkglTestCase_015317_2);

#define VkglTestCase_015318_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015318_2 "mul.dynamic.lowp_mat4x3_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015318, VkglTestCase_015318_1, VkglTestCase_015318_2);

#define VkglTestCase_015319_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015319_2 "ul.dynamic.lowp_mat4x3_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015319, VkglTestCase_015319_1, VkglTestCase_015319_2);

#define VkglTestCase_015320_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015320_2 "mul.dynamic.lowp_mat4x3_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015320, VkglTestCase_015320_1, VkglTestCase_015320_2);

#define VkglTestCase_015321_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015321_2 "ul.dynamic.lowp_mat4x3_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015321, VkglTestCase_015321_1, VkglTestCase_015321_2);

#define VkglTestCase_015322_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015322_2 ".mul.dynamic.lowp_mat4x3_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015322, VkglTestCase_015322_1, VkglTestCase_015322_2);

#define VkglTestCase_015323_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015323_2 "mul.dynamic.lowp_mat4x3_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015323, VkglTestCase_015323_1, VkglTestCase_015323_2);

#define VkglTestCase_015324_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015324_2 "ul.dynamic.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015324, VkglTestCase_015324_1, VkglTestCase_015324_2);

#define VkglTestCase_015325_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015325_2 "l.dynamic.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015325, VkglTestCase_015325_1, VkglTestCase_015325_2);

#define VkglTestCase_015326_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015326_2 "mul.dynamic.mediump_mat4x3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015326, VkglTestCase_015326_1, VkglTestCase_015326_2);

#define VkglTestCase_015327_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015327_2 "ul.dynamic.mediump_mat4x3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015327, VkglTestCase_015327_1, VkglTestCase_015327_2);

#define VkglTestCase_015328_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015328_2 "mul.dynamic.mediump_vec3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015328, VkglTestCase_015328_1, VkglTestCase_015328_2);

#define VkglTestCase_015329_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015329_2 "ul.dynamic.mediump_vec3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015329, VkglTestCase_015329_1, VkglTestCase_015329_2);

#define VkglTestCase_015330_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015330_2 "ul.dynamic.mediump_mat4x3_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015330, VkglTestCase_015330_1, VkglTestCase_015330_2);

#define VkglTestCase_015331_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015331_2 "l.dynamic.mediump_mat4x3_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015331, VkglTestCase_015331_1, VkglTestCase_015331_2);

#define VkglTestCase_015332_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015332_2 "ul.dynamic.mediump_mat4x3_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015332, VkglTestCase_015332_1, VkglTestCase_015332_2);

#define VkglTestCase_015333_1 "dEQP-GLES3.functional.shaders.matrix.mu"
#define VkglTestCase_015333_2 "l.dynamic.mediump_mat4x3_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015333, VkglTestCase_015333_1, VkglTestCase_015333_2);

#define VkglTestCase_015334_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015334_2 "mul.dynamic.mediump_mat4x3_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015334, VkglTestCase_015334_1, VkglTestCase_015334_2);

#define VkglTestCase_015335_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015335_2 "ul.dynamic.mediump_mat4x3_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015335, VkglTestCase_015335_1, VkglTestCase_015335_2);

#define VkglTestCase_015336_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015336_2 "mul.dynamic.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015336, VkglTestCase_015336_1, VkglTestCase_015336_2);

#define VkglTestCase_015337_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015337_2 "ul.dynamic.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015337, VkglTestCase_015337_1, VkglTestCase_015337_2);

#define VkglTestCase_015338_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015338_2 ".mul.dynamic.highp_mat4x3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015338, VkglTestCase_015338_1, VkglTestCase_015338_2);

#define VkglTestCase_015339_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015339_2 "mul.dynamic.highp_mat4x3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015339, VkglTestCase_015339_1, VkglTestCase_015339_2);

#define VkglTestCase_015340_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015340_2 ".mul.dynamic.highp_vec3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015340, VkglTestCase_015340_1, VkglTestCase_015340_2);

#define VkglTestCase_015341_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015341_2 "mul.dynamic.highp_vec3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015341, VkglTestCase_015341_1, VkglTestCase_015341_2);

#define VkglTestCase_015342_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015342_2 "mul.dynamic.highp_mat4x3_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015342, VkglTestCase_015342_1, VkglTestCase_015342_2);

#define VkglTestCase_015343_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015343_2 "ul.dynamic.highp_mat4x3_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015343, VkglTestCase_015343_1, VkglTestCase_015343_2);

#define VkglTestCase_015344_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015344_2 "mul.dynamic.highp_mat4x3_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015344, VkglTestCase_015344_1, VkglTestCase_015344_2);

#define VkglTestCase_015345_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015345_2 "ul.dynamic.highp_mat4x3_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015345, VkglTestCase_015345_1, VkglTestCase_015345_2);

#define VkglTestCase_015346_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015346_2 ".mul.dynamic.highp_mat4x3_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015346, VkglTestCase_015346_1, VkglTestCase_015346_2);

#define VkglTestCase_015347_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015347_2 "mul.dynamic.highp_mat4x3_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015347, VkglTestCase_015347_1, VkglTestCase_015347_2);

#define VkglTestCase_015348_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015348_2 "x.mul.dynamic.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015348, VkglTestCase_015348_1, VkglTestCase_015348_2);

#define VkglTestCase_015349_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015349_2 ".mul.dynamic.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015349, VkglTestCase_015349_1, VkglTestCase_015349_2);

#define VkglTestCase_015350_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015350_2 "x.mul.dynamic.lowp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015350, VkglTestCase_015350_1, VkglTestCase_015350_2);

#define VkglTestCase_015351_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015351_2 ".mul.dynamic.lowp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015351, VkglTestCase_015351_1, VkglTestCase_015351_2);

#define VkglTestCase_015352_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015352_2 "x.mul.dynamic.lowp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015352, VkglTestCase_015352_1, VkglTestCase_015352_2);

#define VkglTestCase_015353_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015353_2 ".mul.dynamic.lowp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015353, VkglTestCase_015353_1, VkglTestCase_015353_2);

#define VkglTestCase_015354_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015354_2 ".mul.dynamic.lowp_mat4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015354, VkglTestCase_015354_1, VkglTestCase_015354_2);

#define VkglTestCase_015355_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015355_2 "mul.dynamic.lowp_mat4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015355, VkglTestCase_015355_1, VkglTestCase_015355_2);

#define VkglTestCase_015356_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015356_2 ".mul.dynamic.lowp_mat4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015356, VkglTestCase_015356_1, VkglTestCase_015356_2);

#define VkglTestCase_015357_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015357_2 "mul.dynamic.lowp_mat4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015357, VkglTestCase_015357_1, VkglTestCase_015357_2);

#define VkglTestCase_015358_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015358_2 "x.mul.dynamic.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015358, VkglTestCase_015358_1, VkglTestCase_015358_2);

#define VkglTestCase_015359_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015359_2 ".mul.dynamic.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015359, VkglTestCase_015359_1, VkglTestCase_015359_2);

#define VkglTestCase_015360_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015360_2 "mul.dynamic.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015360, VkglTestCase_015360_1, VkglTestCase_015360_2);

#define VkglTestCase_015361_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015361_2 "ul.dynamic.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015361, VkglTestCase_015361_1, VkglTestCase_015361_2);

#define VkglTestCase_015362_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015362_2 ".mul.dynamic.mediump_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015362, VkglTestCase_015362_1, VkglTestCase_015362_2);

#define VkglTestCase_015363_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015363_2 "mul.dynamic.mediump_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015363, VkglTestCase_015363_1, VkglTestCase_015363_2);

#define VkglTestCase_015364_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015364_2 ".mul.dynamic.mediump_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015364, VkglTestCase_015364_1, VkglTestCase_015364_2);

#define VkglTestCase_015365_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015365_2 "mul.dynamic.mediump_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015365, VkglTestCase_015365_1, VkglTestCase_015365_2);

#define VkglTestCase_015366_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015366_2 "mul.dynamic.mediump_mat4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015366, VkglTestCase_015366_1, VkglTestCase_015366_2);

#define VkglTestCase_015367_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015367_2 "ul.dynamic.mediump_mat4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015367, VkglTestCase_015367_1, VkglTestCase_015367_2);

#define VkglTestCase_015368_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015368_2 "mul.dynamic.mediump_mat4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015368, VkglTestCase_015368_1, VkglTestCase_015368_2);

#define VkglTestCase_015369_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_015369_2 "ul.dynamic.mediump_mat4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015369, VkglTestCase_015369_1, VkglTestCase_015369_2);

#define VkglTestCase_015370_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015370_2 ".mul.dynamic.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015370, VkglTestCase_015370_1, VkglTestCase_015370_2);

#define VkglTestCase_015371_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015371_2 "mul.dynamic.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015371, VkglTestCase_015371_1, VkglTestCase_015371_2);

#define VkglTestCase_015372_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015372_2 ".mul.dynamic.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015372, VkglTestCase_015372_1, VkglTestCase_015372_2);

#define VkglTestCase_015373_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015373_2 "mul.dynamic.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015373, VkglTestCase_015373_1, VkglTestCase_015373_2);

#define VkglTestCase_015374_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015374_2 "x.mul.dynamic.highp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015374, VkglTestCase_015374_1, VkglTestCase_015374_2);

#define VkglTestCase_015375_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015375_2 ".mul.dynamic.highp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015375, VkglTestCase_015375_1, VkglTestCase_015375_2);

#define VkglTestCase_015376_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015376_2 "x.mul.dynamic.highp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015376, VkglTestCase_015376_1, VkglTestCase_015376_2);

#define VkglTestCase_015377_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015377_2 ".mul.dynamic.highp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015377, VkglTestCase_015377_1, VkglTestCase_015377_2);

#define VkglTestCase_015378_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015378_2 ".mul.dynamic.highp_mat4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015378, VkglTestCase_015378_1, VkglTestCase_015378_2);

#define VkglTestCase_015379_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015379_2 "mul.dynamic.highp_mat4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015379, VkglTestCase_015379_1, VkglTestCase_015379_2);

#define VkglTestCase_015380_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015380_2 ".mul.dynamic.highp_mat4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015380, VkglTestCase_015380_1, VkglTestCase_015380_2);

#define VkglTestCase_015381_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015381_2 "mul.dynamic.highp_mat4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015381, VkglTestCase_015381_1, VkglTestCase_015381_2);

#define VkglTestCase_015382_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015382_2 "x.mul.dynamic.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015382, VkglTestCase_015382_1, VkglTestCase_015382_2);

#define VkglTestCase_015383_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015383_2 ".mul.dynamic.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015383, VkglTestCase_015383_1, VkglTestCase_015383_2);
