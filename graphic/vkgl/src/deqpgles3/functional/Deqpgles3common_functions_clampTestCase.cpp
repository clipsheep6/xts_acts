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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013022_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013022_2 "common_functions.clamp.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013022, VkglTestCase_013022_1, VkglTestCase_013022_2);

#define VkglTestCase_013023_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013023_2 "ommon_functions.clamp.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013023, VkglTestCase_013023_1, VkglTestCase_013023_2);

#define VkglTestCase_013024_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013024_2 "mmon_functions.clamp.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013024, VkglTestCase_013024_1, VkglTestCase_013024_2);

#define VkglTestCase_013025_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013025_2 "mon_functions.clamp.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013025, VkglTestCase_013025_1, VkglTestCase_013025_2);

#define VkglTestCase_013026_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013026_2 "ommon_functions.clamp.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013026, VkglTestCase_013026_1, VkglTestCase_013026_2);

#define VkglTestCase_013027_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013027_2 "mmon_functions.clamp.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013027, VkglTestCase_013027_1, VkglTestCase_013027_2);

#define VkglTestCase_013028_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013028_2 "common_functions.clamp.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013028, VkglTestCase_013028_1, VkglTestCase_013028_2);

#define VkglTestCase_013029_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013029_2 "ommon_functions.clamp.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013029, VkglTestCase_013029_1, VkglTestCase_013029_2);

#define VkglTestCase_013030_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013030_2 "ommon_functions.clamp.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013030, VkglTestCase_013030_1, VkglTestCase_013030_2);

#define VkglTestCase_013031_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013031_2 "mmon_functions.clamp.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013031, VkglTestCase_013031_1, VkglTestCase_013031_2);

#define VkglTestCase_013032_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013032_2 "common_functions.clamp.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013032, VkglTestCase_013032_1, VkglTestCase_013032_2);

#define VkglTestCase_013033_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013033_2 "ommon_functions.clamp.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013033, VkglTestCase_013033_1, VkglTestCase_013033_2);

#define VkglTestCase_013034_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013034_2 "common_functions.clamp.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013034, VkglTestCase_013034_1, VkglTestCase_013034_2);

#define VkglTestCase_013035_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013035_2 "ommon_functions.clamp.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013035, VkglTestCase_013035_1, VkglTestCase_013035_2);

#define VkglTestCase_013036_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013036_2 "ommon_functions.clamp.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013036, VkglTestCase_013036_1, VkglTestCase_013036_2);

#define VkglTestCase_013037_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013037_2 "mmon_functions.clamp.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013037, VkglTestCase_013037_1, VkglTestCase_013037_2);

#define VkglTestCase_013038_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013038_2 "common_functions.clamp.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013038, VkglTestCase_013038_1, VkglTestCase_013038_2);

#define VkglTestCase_013039_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013039_2 "ommon_functions.clamp.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013039, VkglTestCase_013039_1, VkglTestCase_013039_2);

#define VkglTestCase_013040_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013040_2 "common_functions.clamp.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013040, VkglTestCase_013040_1, VkglTestCase_013040_2);

#define VkglTestCase_013041_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013041_2 "ommon_functions.clamp.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013041, VkglTestCase_013041_1, VkglTestCase_013041_2);

#define VkglTestCase_013042_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013042_2 "ommon_functions.clamp.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013042, VkglTestCase_013042_1, VkglTestCase_013042_2);

#define VkglTestCase_013043_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013043_2 "mmon_functions.clamp.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013043, VkglTestCase_013043_1, VkglTestCase_013043_2);

#define VkglTestCase_013044_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013044_2 "common_functions.clamp.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013044, VkglTestCase_013044_1, VkglTestCase_013044_2);

#define VkglTestCase_013045_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013045_2 "ommon_functions.clamp.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013045, VkglTestCase_013045_1, VkglTestCase_013045_2);

#define VkglTestCase_013046_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013046_2 "mon_functions.clamp.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013046, VkglTestCase_013046_1, VkglTestCase_013046_2);

#define VkglTestCase_013047_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013047_2 "on_functions.clamp.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013047, VkglTestCase_013047_1, VkglTestCase_013047_2);

#define VkglTestCase_013048_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013048_2 "on_functions.clamp.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013048, VkglTestCase_013048_1, VkglTestCase_013048_2);

#define VkglTestCase_013049_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013049_2 "n_functions.clamp.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013049, VkglTestCase_013049_1, VkglTestCase_013049_2);

#define VkglTestCase_013050_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013050_2 "mon_functions.clamp.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013050, VkglTestCase_013050_1, VkglTestCase_013050_2);

#define VkglTestCase_013051_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013051_2 "on_functions.clamp.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013051, VkglTestCase_013051_1, VkglTestCase_013051_2);

#define VkglTestCase_013052_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013052_2 "mon_functions.clamp.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013052, VkglTestCase_013052_1, VkglTestCase_013052_2);

#define VkglTestCase_013053_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013053_2 "on_functions.clamp.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013053, VkglTestCase_013053_1, VkglTestCase_013053_2);

#define VkglTestCase_013054_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013054_2 "on_functions.clamp.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013054, VkglTestCase_013054_1, VkglTestCase_013054_2);

#define VkglTestCase_013055_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013055_2 "n_functions.clamp.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013055, VkglTestCase_013055_1, VkglTestCase_013055_2);

#define VkglTestCase_013056_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013056_2 "mon_functions.clamp.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013056, VkglTestCase_013056_1, VkglTestCase_013056_2);

#define VkglTestCase_013057_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013057_2 "on_functions.clamp.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013057, VkglTestCase_013057_1, VkglTestCase_013057_2);

#define VkglTestCase_013058_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013058_2 "mon_functions.clamp.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013058, VkglTestCase_013058_1, VkglTestCase_013058_2);

#define VkglTestCase_013059_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013059_2 "on_functions.clamp.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013059, VkglTestCase_013059_1, VkglTestCase_013059_2);

#define VkglTestCase_013060_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013060_2 "on_functions.clamp.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013060, VkglTestCase_013060_1, VkglTestCase_013060_2);

#define VkglTestCase_013061_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013061_2 "n_functions.clamp.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013061, VkglTestCase_013061_1, VkglTestCase_013061_2);

#define VkglTestCase_013062_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013062_2 "mon_functions.clamp.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013062, VkglTestCase_013062_1, VkglTestCase_013062_2);

#define VkglTestCase_013063_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013063_2 "on_functions.clamp.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013063, VkglTestCase_013063_1, VkglTestCase_013063_2);

#define VkglTestCase_013064_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013064_2 ".common_functions.clamp.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013064, VkglTestCase_013064_1, VkglTestCase_013064_2);

#define VkglTestCase_013065_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013065_2 "common_functions.clamp.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013065, VkglTestCase_013065_1, VkglTestCase_013065_2);

#define VkglTestCase_013066_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013066_2 "ommon_functions.clamp.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013066, VkglTestCase_013066_1, VkglTestCase_013066_2);

#define VkglTestCase_013067_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013067_2 "mmon_functions.clamp.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013067, VkglTestCase_013067_1, VkglTestCase_013067_2);

#define VkglTestCase_013068_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013068_2 "common_functions.clamp.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013068, VkglTestCase_013068_1, VkglTestCase_013068_2);

#define VkglTestCase_013069_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013069_2 "ommon_functions.clamp.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013069, VkglTestCase_013069_1, VkglTestCase_013069_2);

#define VkglTestCase_013070_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013070_2 "common_functions.clamp.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013070, VkglTestCase_013070_1, VkglTestCase_013070_2);

#define VkglTestCase_013071_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013071_2 "ommon_functions.clamp.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013071, VkglTestCase_013071_1, VkglTestCase_013071_2);

#define VkglTestCase_013072_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013072_2 "mmon_functions.clamp.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013072, VkglTestCase_013072_1, VkglTestCase_013072_2);

#define VkglTestCase_013073_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013073_2 "mon_functions.clamp.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013073, VkglTestCase_013073_1, VkglTestCase_013073_2);

#define VkglTestCase_013074_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013074_2 "ommon_functions.clamp.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013074, VkglTestCase_013074_1, VkglTestCase_013074_2);

#define VkglTestCase_013075_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013075_2 "mmon_functions.clamp.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013075, VkglTestCase_013075_1, VkglTestCase_013075_2);

#define VkglTestCase_013076_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013076_2 "common_functions.clamp.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013076, VkglTestCase_013076_1, VkglTestCase_013076_2);

#define VkglTestCase_013077_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013077_2 "ommon_functions.clamp.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013077, VkglTestCase_013077_1, VkglTestCase_013077_2);

#define VkglTestCase_013078_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013078_2 "mmon_functions.clamp.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013078, VkglTestCase_013078_1, VkglTestCase_013078_2);

#define VkglTestCase_013079_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013079_2 "mon_functions.clamp.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013079, VkglTestCase_013079_1, VkglTestCase_013079_2);

#define VkglTestCase_013080_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013080_2 "ommon_functions.clamp.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013080, VkglTestCase_013080_1, VkglTestCase_013080_2);

#define VkglTestCase_013081_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013081_2 "mmon_functions.clamp.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013081, VkglTestCase_013081_1, VkglTestCase_013081_2);

#define VkglTestCase_013082_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013082_2 "common_functions.clamp.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013082, VkglTestCase_013082_1, VkglTestCase_013082_2);

#define VkglTestCase_013083_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013083_2 "ommon_functions.clamp.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013083, VkglTestCase_013083_1, VkglTestCase_013083_2);

#define VkglTestCase_013084_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013084_2 "mmon_functions.clamp.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013084, VkglTestCase_013084_1, VkglTestCase_013084_2);

#define VkglTestCase_013085_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013085_2 "mon_functions.clamp.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013085, VkglTestCase_013085_1, VkglTestCase_013085_2);

#define VkglTestCase_013086_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013086_2 "ommon_functions.clamp.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013086, VkglTestCase_013086_1, VkglTestCase_013086_2);

#define VkglTestCase_013087_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013087_2 "mmon_functions.clamp.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013087, VkglTestCase_013087_1, VkglTestCase_013087_2);

#define VkglTestCase_013088_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013088_2 "mmon_functions.clamp.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013088, VkglTestCase_013088_1, VkglTestCase_013088_2);

#define VkglTestCase_013089_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013089_2 "mon_functions.clamp.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013089, VkglTestCase_013089_1, VkglTestCase_013089_2);

#define VkglTestCase_013090_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013090_2 "on_functions.clamp.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013090, VkglTestCase_013090_1, VkglTestCase_013090_2);

#define VkglTestCase_013091_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013091_2 "n_functions.clamp.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013091, VkglTestCase_013091_1, VkglTestCase_013091_2);

#define VkglTestCase_013092_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013092_2 "mon_functions.clamp.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013092, VkglTestCase_013092_1, VkglTestCase_013092_2);

#define VkglTestCase_013093_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013093_2 "on_functions.clamp.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013093, VkglTestCase_013093_1, VkglTestCase_013093_2);

#define VkglTestCase_013094_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013094_2 "mmon_functions.clamp.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013094, VkglTestCase_013094_1, VkglTestCase_013094_2);

#define VkglTestCase_013095_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013095_2 "mon_functions.clamp.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013095, VkglTestCase_013095_1, VkglTestCase_013095_2);

#define VkglTestCase_013096_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013096_2 "on_functions.clamp.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013096, VkglTestCase_013096_1, VkglTestCase_013096_2);

#define VkglTestCase_013097_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013097_2 "n_functions.clamp.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013097, VkglTestCase_013097_1, VkglTestCase_013097_2);

#define VkglTestCase_013098_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013098_2 "mon_functions.clamp.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013098, VkglTestCase_013098_1, VkglTestCase_013098_2);

#define VkglTestCase_013099_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013099_2 "on_functions.clamp.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013099, VkglTestCase_013099_1, VkglTestCase_013099_2);

#define VkglTestCase_013100_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013100_2 "mmon_functions.clamp.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013100, VkglTestCase_013100_1, VkglTestCase_013100_2);

#define VkglTestCase_013101_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013101_2 "mon_functions.clamp.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013101, VkglTestCase_013101_1, VkglTestCase_013101_2);

#define VkglTestCase_013102_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013102_2 "on_functions.clamp.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013102, VkglTestCase_013102_1, VkglTestCase_013102_2);

#define VkglTestCase_013103_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013103_2 "n_functions.clamp.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013103, VkglTestCase_013103_1, VkglTestCase_013103_2);

#define VkglTestCase_013104_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013104_2 "mon_functions.clamp.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013104, VkglTestCase_013104_1, VkglTestCase_013104_2);

#define VkglTestCase_013105_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013105_2 "on_functions.clamp.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013105, VkglTestCase_013105_1, VkglTestCase_013105_2);

#define VkglTestCase_013106_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013106_2 "common_functions.clamp.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013106, VkglTestCase_013106_1, VkglTestCase_013106_2);

#define VkglTestCase_013107_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013107_2 "ommon_functions.clamp.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013107, VkglTestCase_013107_1, VkglTestCase_013107_2);

#define VkglTestCase_013108_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013108_2 "ommon_functions.clamp.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013108, VkglTestCase_013108_1, VkglTestCase_013108_2);

#define VkglTestCase_013109_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013109_2 "mmon_functions.clamp.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013109, VkglTestCase_013109_1, VkglTestCase_013109_2);

#define VkglTestCase_013110_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013110_2 "common_functions.clamp.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013110, VkglTestCase_013110_1, VkglTestCase_013110_2);

#define VkglTestCase_013111_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013111_2 "ommon_functions.clamp.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013111, VkglTestCase_013111_1, VkglTestCase_013111_2);

#define VkglTestCase_013112_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013112_2 "common_functions.clamp.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013112, VkglTestCase_013112_1, VkglTestCase_013112_2);

#define VkglTestCase_013113_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013113_2 "ommon_functions.clamp.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013113, VkglTestCase_013113_1, VkglTestCase_013113_2);

#define VkglTestCase_013114_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013114_2 "mmon_functions.clamp.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013114, VkglTestCase_013114_1, VkglTestCase_013114_2);

#define VkglTestCase_013115_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013115_2 "mon_functions.clamp.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013115, VkglTestCase_013115_1, VkglTestCase_013115_2);

#define VkglTestCase_013116_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013116_2 "ommon_functions.clamp.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013116, VkglTestCase_013116_1, VkglTestCase_013116_2);

#define VkglTestCase_013117_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013117_2 "mmon_functions.clamp.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013117, VkglTestCase_013117_1, VkglTestCase_013117_2);

#define VkglTestCase_013118_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013118_2 "common_functions.clamp.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013118, VkglTestCase_013118_1, VkglTestCase_013118_2);

#define VkglTestCase_013119_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013119_2 "ommon_functions.clamp.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013119, VkglTestCase_013119_1, VkglTestCase_013119_2);

#define VkglTestCase_013120_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013120_2 "mmon_functions.clamp.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013120, VkglTestCase_013120_1, VkglTestCase_013120_2);

#define VkglTestCase_013121_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013121_2 "mon_functions.clamp.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013121, VkglTestCase_013121_1, VkglTestCase_013121_2);

#define VkglTestCase_013122_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013122_2 "ommon_functions.clamp.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013122, VkglTestCase_013122_1, VkglTestCase_013122_2);

#define VkglTestCase_013123_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013123_2 "mmon_functions.clamp.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013123, VkglTestCase_013123_1, VkglTestCase_013123_2);

#define VkglTestCase_013124_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013124_2 "common_functions.clamp.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013124, VkglTestCase_013124_1, VkglTestCase_013124_2);

#define VkglTestCase_013125_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013125_2 "ommon_functions.clamp.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013125, VkglTestCase_013125_1, VkglTestCase_013125_2);

#define VkglTestCase_013126_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013126_2 "mmon_functions.clamp.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013126, VkglTestCase_013126_1, VkglTestCase_013126_2);

#define VkglTestCase_013127_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013127_2 "mon_functions.clamp.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013127, VkglTestCase_013127_1, VkglTestCase_013127_2);

#define VkglTestCase_013128_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013128_2 "ommon_functions.clamp.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013128, VkglTestCase_013128_1, VkglTestCase_013128_2);

#define VkglTestCase_013129_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013129_2 "mmon_functions.clamp.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013129, VkglTestCase_013129_1, VkglTestCase_013129_2);

#define VkglTestCase_013130_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013130_2 "mon_functions.clamp.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013130, VkglTestCase_013130_1, VkglTestCase_013130_2);

#define VkglTestCase_013131_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013131_2 "on_functions.clamp.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013131, VkglTestCase_013131_1, VkglTestCase_013131_2);

#define VkglTestCase_013132_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013132_2 "on_functions.clamp.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013132, VkglTestCase_013132_1, VkglTestCase_013132_2);

#define VkglTestCase_013133_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013133_2 "n_functions.clamp.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013133, VkglTestCase_013133_1, VkglTestCase_013133_2);

#define VkglTestCase_013134_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013134_2 "mon_functions.clamp.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013134, VkglTestCase_013134_1, VkglTestCase_013134_2);

#define VkglTestCase_013135_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013135_2 "on_functions.clamp.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013135, VkglTestCase_013135_1, VkglTestCase_013135_2);

#define VkglTestCase_013136_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013136_2 "mon_functions.clamp.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013136, VkglTestCase_013136_1, VkglTestCase_013136_2);

#define VkglTestCase_013137_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013137_2 "on_functions.clamp.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013137, VkglTestCase_013137_1, VkglTestCase_013137_2);

#define VkglTestCase_013138_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013138_2 "on_functions.clamp.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013138, VkglTestCase_013138_1, VkglTestCase_013138_2);

#define VkglTestCase_013139_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013139_2 "n_functions.clamp.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013139, VkglTestCase_013139_1, VkglTestCase_013139_2);

#define VkglTestCase_013140_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013140_2 "mon_functions.clamp.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013140, VkglTestCase_013140_1, VkglTestCase_013140_2);

#define VkglTestCase_013141_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013141_2 "on_functions.clamp.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013141, VkglTestCase_013141_1, VkglTestCase_013141_2);

#define VkglTestCase_013142_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013142_2 "mon_functions.clamp.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013142, VkglTestCase_013142_1, VkglTestCase_013142_2);

#define VkglTestCase_013143_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013143_2 "on_functions.clamp.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013143, VkglTestCase_013143_1, VkglTestCase_013143_2);

#define VkglTestCase_013144_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013144_2 "on_functions.clamp.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013144, VkglTestCase_013144_1, VkglTestCase_013144_2);

#define VkglTestCase_013145_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013145_2 "n_functions.clamp.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013145, VkglTestCase_013145_1, VkglTestCase_013145_2);

#define VkglTestCase_013146_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013146_2 "mon_functions.clamp.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013146, VkglTestCase_013146_1, VkglTestCase_013146_2);

#define VkglTestCase_013147_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013147_2 "on_functions.clamp.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013147, VkglTestCase_013147_1, VkglTestCase_013147_2);
