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
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012064_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012064_2 "nary_operator.not_equal.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012064, VkglTestCase_012064_1, VkglTestCase_012064_2);

#define VkglTestCase_012065_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012065_2 "ary_operator.not_equal.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012065, VkglTestCase_012065_1, VkglTestCase_012065_2);

#define VkglTestCase_012066_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012066_2 "ary_operator.not_equal.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012066, VkglTestCase_012066_1, VkglTestCase_012066_2);

#define VkglTestCase_012067_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012067_2 "ry_operator.not_equal.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012067, VkglTestCase_012067_1, VkglTestCase_012067_2);

#define VkglTestCase_012068_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012068_2 "nary_operator.not_equal.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012068, VkglTestCase_012068_1, VkglTestCase_012068_2);

#define VkglTestCase_012069_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012069_2 "ary_operator.not_equal.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012069, VkglTestCase_012069_1, VkglTestCase_012069_2);

#define VkglTestCase_012070_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012070_2 "inary_operator.not_equal.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012070, VkglTestCase_012070_1, VkglTestCase_012070_2);

#define VkglTestCase_012071_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012071_2 "nary_operator.not_equal.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012071, VkglTestCase_012071_1, VkglTestCase_012071_2);

#define VkglTestCase_012072_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012072_2 "ary_operator.not_equal.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012072, VkglTestCase_012072_1, VkglTestCase_012072_2);

#define VkglTestCase_012073_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012073_2 "ry_operator.not_equal.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012073, VkglTestCase_012073_1, VkglTestCase_012073_2);

#define VkglTestCase_012074_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012074_2 "nary_operator.not_equal.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012074, VkglTestCase_012074_1, VkglTestCase_012074_2);

#define VkglTestCase_012075_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012075_2 "ary_operator.not_equal.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012075, VkglTestCase_012075_1, VkglTestCase_012075_2);

#define VkglTestCase_012076_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012076_2 "inary_operator.not_equal.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012076, VkglTestCase_012076_1, VkglTestCase_012076_2);

#define VkglTestCase_012077_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012077_2 "nary_operator.not_equal.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012077, VkglTestCase_012077_1, VkglTestCase_012077_2);

#define VkglTestCase_012078_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012078_2 "ary_operator.not_equal.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012078, VkglTestCase_012078_1, VkglTestCase_012078_2);

#define VkglTestCase_012079_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012079_2 "ry_operator.not_equal.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012079, VkglTestCase_012079_1, VkglTestCase_012079_2);

#define VkglTestCase_012080_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012080_2 "nary_operator.not_equal.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012080, VkglTestCase_012080_1, VkglTestCase_012080_2);

#define VkglTestCase_012081_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012081_2 "ary_operator.not_equal.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012081, VkglTestCase_012081_1, VkglTestCase_012081_2);

#define VkglTestCase_012082_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012082_2 "inary_operator.not_equal.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012082, VkglTestCase_012082_1, VkglTestCase_012082_2);

#define VkglTestCase_012083_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012083_2 "nary_operator.not_equal.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012083, VkglTestCase_012083_1, VkglTestCase_012083_2);

#define VkglTestCase_012084_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012084_2 "ary_operator.not_equal.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012084, VkglTestCase_012084_1, VkglTestCase_012084_2);

#define VkglTestCase_012085_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012085_2 "ry_operator.not_equal.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012085, VkglTestCase_012085_1, VkglTestCase_012085_2);

#define VkglTestCase_012086_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012086_2 "nary_operator.not_equal.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012086, VkglTestCase_012086_1, VkglTestCase_012086_2);

#define VkglTestCase_012087_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012087_2 "ary_operator.not_equal.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012087, VkglTestCase_012087_1, VkglTestCase_012087_2);

#define VkglTestCase_012088_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012088_2 "inary_operator.not_equal.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012088, VkglTestCase_012088_1, VkglTestCase_012088_2);

#define VkglTestCase_012089_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012089_2 "nary_operator.not_equal.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012089, VkglTestCase_012089_1, VkglTestCase_012089_2);

#define VkglTestCase_012090_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012090_2 "nary_operator.not_equal.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012090, VkglTestCase_012090_1, VkglTestCase_012090_2);

#define VkglTestCase_012091_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012091_2 "ary_operator.not_equal.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012091, VkglTestCase_012091_1, VkglTestCase_012091_2);

#define VkglTestCase_012092_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012092_2 "inary_operator.not_equal.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012092, VkglTestCase_012092_1, VkglTestCase_012092_2);

#define VkglTestCase_012093_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012093_2 "nary_operator.not_equal.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012093, VkglTestCase_012093_1, VkglTestCase_012093_2);

#define VkglTestCase_012094_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012094_2 "nary_operator.not_equal.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012094, VkglTestCase_012094_1, VkglTestCase_012094_2);

#define VkglTestCase_012095_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012095_2 "ary_operator.not_equal.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012095, VkglTestCase_012095_1, VkglTestCase_012095_2);

#define VkglTestCase_012096_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012096_2 "ary_operator.not_equal.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012096, VkglTestCase_012096_1, VkglTestCase_012096_2);

#define VkglTestCase_012097_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012097_2 "ry_operator.not_equal.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012097, VkglTestCase_012097_1, VkglTestCase_012097_2);

#define VkglTestCase_012098_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012098_2 "nary_operator.not_equal.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012098, VkglTestCase_012098_1, VkglTestCase_012098_2);

#define VkglTestCase_012099_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012099_2 "ary_operator.not_equal.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012099, VkglTestCase_012099_1, VkglTestCase_012099_2);

#define VkglTestCase_012100_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012100_2 "nary_operator.not_equal.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012100, VkglTestCase_012100_1, VkglTestCase_012100_2);

#define VkglTestCase_012101_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012101_2 "ary_operator.not_equal.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012101, VkglTestCase_012101_1, VkglTestCase_012101_2);

#define VkglTestCase_012102_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012102_2 "ary_operator.not_equal.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012102, VkglTestCase_012102_1, VkglTestCase_012102_2);

#define VkglTestCase_012103_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012103_2 "ry_operator.not_equal.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012103, VkglTestCase_012103_1, VkglTestCase_012103_2);

#define VkglTestCase_012104_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012104_2 "nary_operator.not_equal.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012104, VkglTestCase_012104_1, VkglTestCase_012104_2);

#define VkglTestCase_012105_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012105_2 "ary_operator.not_equal.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012105, VkglTestCase_012105_1, VkglTestCase_012105_2);

#define VkglTestCase_012106_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012106_2 "nary_operator.not_equal.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012106, VkglTestCase_012106_1, VkglTestCase_012106_2);

#define VkglTestCase_012107_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012107_2 "ary_operator.not_equal.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012107, VkglTestCase_012107_1, VkglTestCase_012107_2);

#define VkglTestCase_012108_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012108_2 "ary_operator.not_equal.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012108, VkglTestCase_012108_1, VkglTestCase_012108_2);

#define VkglTestCase_012109_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012109_2 "ry_operator.not_equal.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012109, VkglTestCase_012109_1, VkglTestCase_012109_2);

#define VkglTestCase_012110_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012110_2 "nary_operator.not_equal.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012110, VkglTestCase_012110_1, VkglTestCase_012110_2);

#define VkglTestCase_012111_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012111_2 "ary_operator.not_equal.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012111, VkglTestCase_012111_1, VkglTestCase_012111_2);

#define VkglTestCase_012112_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_012112_2 "inary_operator.not_equal.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012112, VkglTestCase_012112_1, VkglTestCase_012112_2);

#define VkglTestCase_012113_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012113_2 "nary_operator.not_equal.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012113, VkglTestCase_012113_1, VkglTestCase_012113_2);

#define VkglTestCase_012114_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012114_2 "ary_operator.not_equal.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012114, VkglTestCase_012114_1, VkglTestCase_012114_2);

#define VkglTestCase_012115_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012115_2 "ry_operator.not_equal.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012115, VkglTestCase_012115_1, VkglTestCase_012115_2);

#define VkglTestCase_012116_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012116_2 "nary_operator.not_equal.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012116, VkglTestCase_012116_1, VkglTestCase_012116_2);

#define VkglTestCase_012117_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012117_2 "ary_operator.not_equal.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012117, VkglTestCase_012117_1, VkglTestCase_012117_2);

#define VkglTestCase_012118_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012118_2 "nary_operator.not_equal.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012118, VkglTestCase_012118_1, VkglTestCase_012118_2);

#define VkglTestCase_012119_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012119_2 "ary_operator.not_equal.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012119, VkglTestCase_012119_1, VkglTestCase_012119_2);

#define VkglTestCase_012120_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012120_2 "ary_operator.not_equal.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012120, VkglTestCase_012120_1, VkglTestCase_012120_2);

#define VkglTestCase_012121_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012121_2 "ry_operator.not_equal.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012121, VkglTestCase_012121_1, VkglTestCase_012121_2);

#define VkglTestCase_012122_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012122_2 "nary_operator.not_equal.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012122, VkglTestCase_012122_1, VkglTestCase_012122_2);

#define VkglTestCase_012123_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012123_2 "ary_operator.not_equal.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012123, VkglTestCase_012123_1, VkglTestCase_012123_2);

#define VkglTestCase_012124_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012124_2 "nary_operator.not_equal.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012124, VkglTestCase_012124_1, VkglTestCase_012124_2);

#define VkglTestCase_012125_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012125_2 "ary_operator.not_equal.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012125, VkglTestCase_012125_1, VkglTestCase_012125_2);

#define VkglTestCase_012126_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012126_2 "ary_operator.not_equal.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012126, VkglTestCase_012126_1, VkglTestCase_012126_2);

#define VkglTestCase_012127_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012127_2 "ry_operator.not_equal.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012127, VkglTestCase_012127_1, VkglTestCase_012127_2);

#define VkglTestCase_012128_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012128_2 "nary_operator.not_equal.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012128, VkglTestCase_012128_1, VkglTestCase_012128_2);

#define VkglTestCase_012129_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012129_2 "ary_operator.not_equal.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012129, VkglTestCase_012129_1, VkglTestCase_012129_2);

#define VkglTestCase_012130_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012130_2 "nary_operator.not_equal.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012130, VkglTestCase_012130_1, VkglTestCase_012130_2);

#define VkglTestCase_012131_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012131_2 "ary_operator.not_equal.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012131, VkglTestCase_012131_1, VkglTestCase_012131_2);

#define VkglTestCase_012132_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012132_2 "ary_operator.not_equal.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012132, VkglTestCase_012132_1, VkglTestCase_012132_2);

#define VkglTestCase_012133_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_012133_2 "ry_operator.not_equal.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012133, VkglTestCase_012133_1, VkglTestCase_012133_2);

#define VkglTestCase_012134_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_012134_2 "nary_operator.not_equal.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012134, VkglTestCase_012134_1, VkglTestCase_012134_2);

#define VkglTestCase_012135_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_012135_2 "ary_operator.not_equal.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012135, VkglTestCase_012135_1, VkglTestCase_012135_2);

#define VkglTestCase_012136_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012136_2 ".binary_operator.not_equal.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012136, VkglTestCase_012136_1, VkglTestCase_012136_2);

#define VkglTestCase_012137_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012137_2 "binary_operator.not_equal.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012137, VkglTestCase_012137_1, VkglTestCase_012137_2);

#define VkglTestCase_012138_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012138_2 ".binary_operator.not_equal.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012138, VkglTestCase_012138_1, VkglTestCase_012138_2);

#define VkglTestCase_012139_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012139_2 "binary_operator.not_equal.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012139, VkglTestCase_012139_1, VkglTestCase_012139_2);

#define VkglTestCase_012140_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012140_2 ".binary_operator.not_equal.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012140, VkglTestCase_012140_1, VkglTestCase_012140_2);

#define VkglTestCase_012141_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012141_2 "binary_operator.not_equal.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012141, VkglTestCase_012141_1, VkglTestCase_012141_2);

#define VkglTestCase_012142_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012142_2 ".binary_operator.not_equal.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012142, VkglTestCase_012142_1, VkglTestCase_012142_2);

#define VkglTestCase_012143_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012143_2 "binary_operator.not_equal.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012143, VkglTestCase_012143_1, VkglTestCase_012143_2);
