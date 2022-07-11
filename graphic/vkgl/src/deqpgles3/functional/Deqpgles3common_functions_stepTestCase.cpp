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

#define VkglTestCase_013190_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013190_2 "common_functions.step.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013190, VkglTestCase_013190_1, VkglTestCase_013190_2);

#define VkglTestCase_013191_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013191_2 "ommon_functions.step.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013191, VkglTestCase_013191_1, VkglTestCase_013191_2);

#define VkglTestCase_013192_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013192_2 "ommon_functions.step.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013192, VkglTestCase_013192_1, VkglTestCase_013192_2);

#define VkglTestCase_013193_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013193_2 "mmon_functions.step.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013193, VkglTestCase_013193_1, VkglTestCase_013193_2);

#define VkglTestCase_013194_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013194_2 "common_functions.step.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013194, VkglTestCase_013194_1, VkglTestCase_013194_2);

#define VkglTestCase_013195_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013195_2 "ommon_functions.step.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013195, VkglTestCase_013195_1, VkglTestCase_013195_2);

#define VkglTestCase_013196_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013196_2 ".common_functions.step.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013196, VkglTestCase_013196_1, VkglTestCase_013196_2);

#define VkglTestCase_013197_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013197_2 "common_functions.step.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013197, VkglTestCase_013197_1, VkglTestCase_013197_2);

#define VkglTestCase_013198_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013198_2 "ommon_functions.step.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013198, VkglTestCase_013198_1, VkglTestCase_013198_2);

#define VkglTestCase_013199_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013199_2 "mmon_functions.step.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013199, VkglTestCase_013199_1, VkglTestCase_013199_2);

#define VkglTestCase_013200_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013200_2 "common_functions.step.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013200, VkglTestCase_013200_1, VkglTestCase_013200_2);

#define VkglTestCase_013201_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013201_2 "ommon_functions.step.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013201, VkglTestCase_013201_1, VkglTestCase_013201_2);

#define VkglTestCase_013202_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013202_2 ".common_functions.step.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013202, VkglTestCase_013202_1, VkglTestCase_013202_2);

#define VkglTestCase_013203_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013203_2 "common_functions.step.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013203, VkglTestCase_013203_1, VkglTestCase_013203_2);

#define VkglTestCase_013204_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013204_2 "ommon_functions.step.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013204, VkglTestCase_013204_1, VkglTestCase_013204_2);

#define VkglTestCase_013205_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013205_2 "mmon_functions.step.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013205, VkglTestCase_013205_1, VkglTestCase_013205_2);

#define VkglTestCase_013206_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013206_2 "common_functions.step.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013206, VkglTestCase_013206_1, VkglTestCase_013206_2);

#define VkglTestCase_013207_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013207_2 "ommon_functions.step.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013207, VkglTestCase_013207_1, VkglTestCase_013207_2);

#define VkglTestCase_013208_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_013208_2 ".common_functions.step.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013208, VkglTestCase_013208_1, VkglTestCase_013208_2);

#define VkglTestCase_013209_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013209_2 "common_functions.step.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013209, VkglTestCase_013209_1, VkglTestCase_013209_2);

#define VkglTestCase_013210_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013210_2 "ommon_functions.step.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013210, VkglTestCase_013210_1, VkglTestCase_013210_2);

#define VkglTestCase_013211_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013211_2 "mmon_functions.step.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013211, VkglTestCase_013211_1, VkglTestCase_013211_2);

#define VkglTestCase_013212_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013212_2 "common_functions.step.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013212, VkglTestCase_013212_1, VkglTestCase_013212_2);

#define VkglTestCase_013213_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_013213_2 "ommon_functions.step.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013213, VkglTestCase_013213_1, VkglTestCase_013213_2);

#define VkglTestCase_013214_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013214_2 "mmon_functions.step.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013214, VkglTestCase_013214_1, VkglTestCase_013214_2);

#define VkglTestCase_013215_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013215_2 "mon_functions.step.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013215, VkglTestCase_013215_1, VkglTestCase_013215_2);

#define VkglTestCase_013216_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013216_2 "on_functions.step.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013216, VkglTestCase_013216_1, VkglTestCase_013216_2);

#define VkglTestCase_013217_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013217_2 "n_functions.step.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013217, VkglTestCase_013217_1, VkglTestCase_013217_2);

#define VkglTestCase_013218_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013218_2 "mon_functions.step.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013218, VkglTestCase_013218_1, VkglTestCase_013218_2);

#define VkglTestCase_013219_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013219_2 "on_functions.step.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013219, VkglTestCase_013219_1, VkglTestCase_013219_2);

#define VkglTestCase_013220_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013220_2 "mmon_functions.step.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013220, VkglTestCase_013220_1, VkglTestCase_013220_2);

#define VkglTestCase_013221_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013221_2 "mon_functions.step.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013221, VkglTestCase_013221_1, VkglTestCase_013221_2);

#define VkglTestCase_013222_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013222_2 "on_functions.step.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013222, VkglTestCase_013222_1, VkglTestCase_013222_2);

#define VkglTestCase_013223_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013223_2 "n_functions.step.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013223, VkglTestCase_013223_1, VkglTestCase_013223_2);

#define VkglTestCase_013224_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013224_2 "mon_functions.step.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013224, VkglTestCase_013224_1, VkglTestCase_013224_2);

#define VkglTestCase_013225_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013225_2 "on_functions.step.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013225, VkglTestCase_013225_1, VkglTestCase_013225_2);

#define VkglTestCase_013226_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013226_2 "mmon_functions.step.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013226, VkglTestCase_013226_1, VkglTestCase_013226_2);

#define VkglTestCase_013227_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013227_2 "mon_functions.step.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013227, VkglTestCase_013227_1, VkglTestCase_013227_2);

#define VkglTestCase_013228_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013228_2 "on_functions.step.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013228, VkglTestCase_013228_1, VkglTestCase_013228_2);

#define VkglTestCase_013229_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013229_2 "n_functions.step.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013229, VkglTestCase_013229_1, VkglTestCase_013229_2);

#define VkglTestCase_013230_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013230_2 "mon_functions.step.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013230, VkglTestCase_013230_1, VkglTestCase_013230_2);

#define VkglTestCase_013231_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013231_2 "on_functions.step.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013231, VkglTestCase_013231_1, VkglTestCase_013231_2);
