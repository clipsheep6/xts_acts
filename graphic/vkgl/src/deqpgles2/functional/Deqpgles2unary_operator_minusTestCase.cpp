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
#include "../ActsDeqpgles20004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003980_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003980_2 ".unary_operator.minus.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003980, VkglTestCase_003980_1, VkglTestCase_003980_2);

#define VkglTestCase_003981_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003981_2 "unary_operator.minus.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003981, VkglTestCase_003981_1, VkglTestCase_003981_2);

#define VkglTestCase_003982_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003982_2 "nary_operator.minus.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003982, VkglTestCase_003982_1, VkglTestCase_003982_2);

#define VkglTestCase_003983_1 "dEQP-GLES2.functional.shaders.operator.un"
#define VkglTestCase_003983_2 "ary_operator.minus.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003983, VkglTestCase_003983_1, VkglTestCase_003983_2);

#define VkglTestCase_003984_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003984_2 "unary_operator.minus.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003984, VkglTestCase_003984_1, VkglTestCase_003984_2);

#define VkglTestCase_003985_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003985_2 "nary_operator.minus.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003985, VkglTestCase_003985_1, VkglTestCase_003985_2);

#define VkglTestCase_003986_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003986_2 ".unary_operator.minus.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003986, VkglTestCase_003986_1, VkglTestCase_003986_2);

#define VkglTestCase_003987_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003987_2 "unary_operator.minus.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003987, VkglTestCase_003987_1, VkglTestCase_003987_2);

#define VkglTestCase_003988_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003988_2 "unary_operator.minus.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003988, VkglTestCase_003988_1, VkglTestCase_003988_2);

#define VkglTestCase_003989_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003989_2 "nary_operator.minus.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003989, VkglTestCase_003989_1, VkglTestCase_003989_2);

#define VkglTestCase_003990_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003990_2 ".unary_operator.minus.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003990, VkglTestCase_003990_1, VkglTestCase_003990_2);

#define VkglTestCase_003991_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003991_2 "unary_operator.minus.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003991, VkglTestCase_003991_1, VkglTestCase_003991_2);

#define VkglTestCase_003992_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003992_2 ".unary_operator.minus.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003992, VkglTestCase_003992_1, VkglTestCase_003992_2);

#define VkglTestCase_003993_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003993_2 "unary_operator.minus.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003993, VkglTestCase_003993_1, VkglTestCase_003993_2);

#define VkglTestCase_003994_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003994_2 "unary_operator.minus.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003994, VkglTestCase_003994_1, VkglTestCase_003994_2);

#define VkglTestCase_003995_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003995_2 "nary_operator.minus.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003995, VkglTestCase_003995_1, VkglTestCase_003995_2);

#define VkglTestCase_003996_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003996_2 ".unary_operator.minus.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003996, VkglTestCase_003996_1, VkglTestCase_003996_2);

#define VkglTestCase_003997_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003997_2 "unary_operator.minus.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003997, VkglTestCase_003997_1, VkglTestCase_003997_2);

#define VkglTestCase_003998_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003998_2 ".unary_operator.minus.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003998, VkglTestCase_003998_1, VkglTestCase_003998_2);

#define VkglTestCase_003999_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003999_2 "unary_operator.minus.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003999, VkglTestCase_003999_1, VkglTestCase_003999_2);

#define VkglTestCase_004000_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004000_2 "unary_operator.minus.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004000, VkglTestCase_004000_1, VkglTestCase_004000_2);

#define VkglTestCase_004001_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_004001_2 "nary_operator.minus.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004001, VkglTestCase_004001_1, VkglTestCase_004001_2);

#define VkglTestCase_004002_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004002_2 ".unary_operator.minus.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004002, VkglTestCase_004002_1, VkglTestCase_004002_2);

#define VkglTestCase_004003_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004003_2 "unary_operator.minus.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004003, VkglTestCase_004003_1, VkglTestCase_004003_2);

#define VkglTestCase_004004_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004004_2 "r.unary_operator.minus.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004004, VkglTestCase_004004_1, VkglTestCase_004004_2);

#define VkglTestCase_004005_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004005_2 ".unary_operator.minus.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004005, VkglTestCase_004005_1, VkglTestCase_004005_2);

#define VkglTestCase_004006_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004006_2 "unary_operator.minus.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004006, VkglTestCase_004006_1, VkglTestCase_004006_2);

#define VkglTestCase_004007_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_004007_2 "nary_operator.minus.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004007, VkglTestCase_004007_1, VkglTestCase_004007_2);

#define VkglTestCase_004008_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004008_2 ".unary_operator.minus.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004008, VkglTestCase_004008_1, VkglTestCase_004008_2);

#define VkglTestCase_004009_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004009_2 "unary_operator.minus.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004009, VkglTestCase_004009_1, VkglTestCase_004009_2);

#define VkglTestCase_004010_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004010_2 ".unary_operator.minus.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004010, VkglTestCase_004010_1, VkglTestCase_004010_2);

#define VkglTestCase_004011_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004011_2 "unary_operator.minus.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004011, VkglTestCase_004011_1, VkglTestCase_004011_2);

#define VkglTestCase_004012_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_004012_2 "nary_operator.minus.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004012, VkglTestCase_004012_1, VkglTestCase_004012_2);

#define VkglTestCase_004013_1 "dEQP-GLES2.functional.shaders.operator.un"
#define VkglTestCase_004013_2 "ary_operator.minus.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004013, VkglTestCase_004013_1, VkglTestCase_004013_2);

#define VkglTestCase_004014_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004014_2 "unary_operator.minus.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004014, VkglTestCase_004014_1, VkglTestCase_004014_2);

#define VkglTestCase_004015_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_004015_2 "nary_operator.minus.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004015, VkglTestCase_004015_1, VkglTestCase_004015_2);

#define VkglTestCase_004016_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004016_2 ".unary_operator.minus.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004016, VkglTestCase_004016_1, VkglTestCase_004016_2);

#define VkglTestCase_004017_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004017_2 "unary_operator.minus.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004017, VkglTestCase_004017_1, VkglTestCase_004017_2);

#define VkglTestCase_004018_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_004018_2 "nary_operator.minus.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004018, VkglTestCase_004018_1, VkglTestCase_004018_2);

#define VkglTestCase_004019_1 "dEQP-GLES2.functional.shaders.operator.un"
#define VkglTestCase_004019_2 "ary_operator.minus.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004019, VkglTestCase_004019_1, VkglTestCase_004019_2);

#define VkglTestCase_004020_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004020_2 "unary_operator.minus.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004020, VkglTestCase_004020_1, VkglTestCase_004020_2);

#define VkglTestCase_004021_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_004021_2 "nary_operator.minus.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004021, VkglTestCase_004021_1, VkglTestCase_004021_2);

#define VkglTestCase_004022_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004022_2 ".unary_operator.minus.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004022, VkglTestCase_004022_1, VkglTestCase_004022_2);

#define VkglTestCase_004023_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004023_2 "unary_operator.minus.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004023, VkglTestCase_004023_1, VkglTestCase_004023_2);

#define VkglTestCase_004024_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_004024_2 "nary_operator.minus.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004024, VkglTestCase_004024_1, VkglTestCase_004024_2);

#define VkglTestCase_004025_1 "dEQP-GLES2.functional.shaders.operator.un"
#define VkglTestCase_004025_2 "ary_operator.minus.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004025, VkglTestCase_004025_1, VkglTestCase_004025_2);

#define VkglTestCase_004026_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004026_2 "unary_operator.minus.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004026, VkglTestCase_004026_1, VkglTestCase_004026_2);

#define VkglTestCase_004027_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_004027_2 "nary_operator.minus.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_004027, VkglTestCase_004027_1, VkglTestCase_004027_2);
