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

#define VkglTestCase_013148_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013148_2 ".common_functions.mix.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013148, VkglTestCase_013148_1, VkglTestCase_013148_2);

#define VkglTestCase_013149_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013149_2 "common_functions.mix.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013149, VkglTestCase_013149_1, VkglTestCase_013149_2);

#define VkglTestCase_013150_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013150_2 "ommon_functions.mix.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013150, VkglTestCase_013150_1, VkglTestCase_013150_2);

#define VkglTestCase_013151_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013151_2 "mmon_functions.mix.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013151, VkglTestCase_013151_1, VkglTestCase_013151_2);

#define VkglTestCase_013152_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013152_2 "common_functions.mix.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013152, VkglTestCase_013152_1, VkglTestCase_013152_2);

#define VkglTestCase_013153_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013153_2 "ommon_functions.mix.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013153, VkglTestCase_013153_1, VkglTestCase_013153_2);

#define VkglTestCase_013154_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013154_2 ".common_functions.mix.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013154, VkglTestCase_013154_1, VkglTestCase_013154_2);

#define VkglTestCase_013155_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013155_2 "common_functions.mix.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013155, VkglTestCase_013155_1, VkglTestCase_013155_2);

#define VkglTestCase_013156_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013156_2 "common_functions.mix.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013156, VkglTestCase_013156_1, VkglTestCase_013156_2);

#define VkglTestCase_013157_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013157_2 "ommon_functions.mix.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013157, VkglTestCase_013157_1, VkglTestCase_013157_2);

#define VkglTestCase_013158_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013158_2 ".common_functions.mix.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013158, VkglTestCase_013158_1, VkglTestCase_013158_2);

#define VkglTestCase_013159_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013159_2 "common_functions.mix.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013159, VkglTestCase_013159_1, VkglTestCase_013159_2);

#define VkglTestCase_013160_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013160_2 ".common_functions.mix.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013160, VkglTestCase_013160_1, VkglTestCase_013160_2);

#define VkglTestCase_013161_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013161_2 "common_functions.mix.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013161, VkglTestCase_013161_1, VkglTestCase_013161_2);

#define VkglTestCase_013162_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013162_2 "common_functions.mix.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013162, VkglTestCase_013162_1, VkglTestCase_013162_2);

#define VkglTestCase_013163_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013163_2 "ommon_functions.mix.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013163, VkglTestCase_013163_1, VkglTestCase_013163_2);

#define VkglTestCase_013164_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013164_2 ".common_functions.mix.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013164, VkglTestCase_013164_1, VkglTestCase_013164_2);

#define VkglTestCase_013165_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013165_2 "common_functions.mix.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013165, VkglTestCase_013165_1, VkglTestCase_013165_2);

#define VkglTestCase_013166_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013166_2 ".common_functions.mix.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013166, VkglTestCase_013166_1, VkglTestCase_013166_2);

#define VkglTestCase_013167_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013167_2 "common_functions.mix.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013167, VkglTestCase_013167_1, VkglTestCase_013167_2);

#define VkglTestCase_013168_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013168_2 "common_functions.mix.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013168, VkglTestCase_013168_1, VkglTestCase_013168_2);

#define VkglTestCase_013169_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013169_2 "ommon_functions.mix.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013169, VkglTestCase_013169_1, VkglTestCase_013169_2);

#define VkglTestCase_013170_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013170_2 ".common_functions.mix.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013170, VkglTestCase_013170_1, VkglTestCase_013170_2);

#define VkglTestCase_013171_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013171_2 "common_functions.mix.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013171, VkglTestCase_013171_1, VkglTestCase_013171_2);

#define VkglTestCase_013172_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013172_2 "mmon_functions.mix.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013172, VkglTestCase_013172_1, VkglTestCase_013172_2);

#define VkglTestCase_013173_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013173_2 "mon_functions.mix.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013173, VkglTestCase_013173_1, VkglTestCase_013173_2);

#define VkglTestCase_013174_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013174_2 "mon_functions.mix.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013174, VkglTestCase_013174_1, VkglTestCase_013174_2);

#define VkglTestCase_013175_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013175_2 "on_functions.mix.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013175, VkglTestCase_013175_1, VkglTestCase_013175_2);

#define VkglTestCase_013176_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013176_2 "mmon_functions.mix.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013176, VkglTestCase_013176_1, VkglTestCase_013176_2);

#define VkglTestCase_013177_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013177_2 "mon_functions.mix.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013177, VkglTestCase_013177_1, VkglTestCase_013177_2);

#define VkglTestCase_013178_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013178_2 "mmon_functions.mix.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013178, VkglTestCase_013178_1, VkglTestCase_013178_2);

#define VkglTestCase_013179_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013179_2 "mon_functions.mix.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013179, VkglTestCase_013179_1, VkglTestCase_013179_2);

#define VkglTestCase_013180_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013180_2 "mon_functions.mix.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013180, VkglTestCase_013180_1, VkglTestCase_013180_2);

#define VkglTestCase_013181_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013181_2 "on_functions.mix.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013181, VkglTestCase_013181_1, VkglTestCase_013181_2);

#define VkglTestCase_013182_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013182_2 "mmon_functions.mix.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013182, VkglTestCase_013182_1, VkglTestCase_013182_2);

#define VkglTestCase_013183_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013183_2 "mon_functions.mix.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013183, VkglTestCase_013183_1, VkglTestCase_013183_2);

#define VkglTestCase_013184_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013184_2 "mmon_functions.mix.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013184, VkglTestCase_013184_1, VkglTestCase_013184_2);

#define VkglTestCase_013185_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013185_2 "mon_functions.mix.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013185, VkglTestCase_013185_1, VkglTestCase_013185_2);

#define VkglTestCase_013186_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013186_2 "mon_functions.mix.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013186, VkglTestCase_013186_1, VkglTestCase_013186_2);

#define VkglTestCase_013187_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013187_2 "on_functions.mix.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013187, VkglTestCase_013187_1, VkglTestCase_013187_2);

#define VkglTestCase_013188_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013188_2 "mmon_functions.mix.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013188, VkglTestCase_013188_1, VkglTestCase_013188_2);

#define VkglTestCase_013189_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013189_2 "mon_functions.mix.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013189, VkglTestCase_013189_1, VkglTestCase_013189_2);
