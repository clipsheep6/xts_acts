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

#define VkglTestCase_003932_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003932_2 ".unary_operator.plus.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003932, VkglTestCase_003932_1, VkglTestCase_003932_2);

#define VkglTestCase_003933_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003933_2 "unary_operator.plus.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003933, VkglTestCase_003933_1, VkglTestCase_003933_2);

#define VkglTestCase_003934_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003934_2 "unary_operator.plus.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003934, VkglTestCase_003934_1, VkglTestCase_003934_2);

#define VkglTestCase_003935_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003935_2 "nary_operator.plus.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003935, VkglTestCase_003935_1, VkglTestCase_003935_2);

#define VkglTestCase_003936_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003936_2 ".unary_operator.plus.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003936, VkglTestCase_003936_1, VkglTestCase_003936_2);

#define VkglTestCase_003937_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003937_2 "unary_operator.plus.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003937, VkglTestCase_003937_1, VkglTestCase_003937_2);

#define VkglTestCase_003938_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_003938_2 "r.unary_operator.plus.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003938, VkglTestCase_003938_1, VkglTestCase_003938_2);

#define VkglTestCase_003939_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003939_2 ".unary_operator.plus.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003939, VkglTestCase_003939_1, VkglTestCase_003939_2);

#define VkglTestCase_003940_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003940_2 "unary_operator.plus.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003940, VkglTestCase_003940_1, VkglTestCase_003940_2);

#define VkglTestCase_003941_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003941_2 "nary_operator.plus.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003941, VkglTestCase_003941_1, VkglTestCase_003941_2);

#define VkglTestCase_003942_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003942_2 ".unary_operator.plus.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003942, VkglTestCase_003942_1, VkglTestCase_003942_2);

#define VkglTestCase_003943_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003943_2 "unary_operator.plus.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003943, VkglTestCase_003943_1, VkglTestCase_003943_2);

#define VkglTestCase_003944_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_003944_2 "r.unary_operator.plus.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003944, VkglTestCase_003944_1, VkglTestCase_003944_2);

#define VkglTestCase_003945_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003945_2 ".unary_operator.plus.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003945, VkglTestCase_003945_1, VkglTestCase_003945_2);

#define VkglTestCase_003946_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003946_2 "unary_operator.plus.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003946, VkglTestCase_003946_1, VkglTestCase_003946_2);

#define VkglTestCase_003947_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003947_2 "nary_operator.plus.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003947, VkglTestCase_003947_1, VkglTestCase_003947_2);

#define VkglTestCase_003948_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003948_2 ".unary_operator.plus.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003948, VkglTestCase_003948_1, VkglTestCase_003948_2);

#define VkglTestCase_003949_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003949_2 "unary_operator.plus.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003949, VkglTestCase_003949_1, VkglTestCase_003949_2);

#define VkglTestCase_003950_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_003950_2 "r.unary_operator.plus.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003950, VkglTestCase_003950_1, VkglTestCase_003950_2);

#define VkglTestCase_003951_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003951_2 ".unary_operator.plus.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003951, VkglTestCase_003951_1, VkglTestCase_003951_2);

#define VkglTestCase_003952_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003952_2 "unary_operator.plus.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003952, VkglTestCase_003952_1, VkglTestCase_003952_2);

#define VkglTestCase_003953_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003953_2 "nary_operator.plus.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003953, VkglTestCase_003953_1, VkglTestCase_003953_2);

#define VkglTestCase_003954_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003954_2 ".unary_operator.plus.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003954, VkglTestCase_003954_1, VkglTestCase_003954_2);

#define VkglTestCase_003955_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003955_2 "unary_operator.plus.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003955, VkglTestCase_003955_1, VkglTestCase_003955_2);

#define VkglTestCase_003956_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_003956_2 "r.unary_operator.plus.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003956, VkglTestCase_003956_1, VkglTestCase_003956_2);

#define VkglTestCase_003957_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003957_2 ".unary_operator.plus.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003957, VkglTestCase_003957_1, VkglTestCase_003957_2);

#define VkglTestCase_003958_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003958_2 ".unary_operator.plus.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003958, VkglTestCase_003958_1, VkglTestCase_003958_2);

#define VkglTestCase_003959_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003959_2 "unary_operator.plus.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003959, VkglTestCase_003959_1, VkglTestCase_003959_2);

#define VkglTestCase_003960_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_003960_2 "r.unary_operator.plus.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003960, VkglTestCase_003960_1, VkglTestCase_003960_2);

#define VkglTestCase_003961_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003961_2 ".unary_operator.plus.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003961, VkglTestCase_003961_1, VkglTestCase_003961_2);

#define VkglTestCase_003962_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003962_2 ".unary_operator.plus.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003962, VkglTestCase_003962_1, VkglTestCase_003962_2);

#define VkglTestCase_003963_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003963_2 "unary_operator.plus.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003963, VkglTestCase_003963_1, VkglTestCase_003963_2);

#define VkglTestCase_003964_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003964_2 "unary_operator.plus.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003964, VkglTestCase_003964_1, VkglTestCase_003964_2);

#define VkglTestCase_003965_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003965_2 "nary_operator.plus.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003965, VkglTestCase_003965_1, VkglTestCase_003965_2);

#define VkglTestCase_003966_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003966_2 ".unary_operator.plus.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003966, VkglTestCase_003966_1, VkglTestCase_003966_2);

#define VkglTestCase_003967_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003967_2 "unary_operator.plus.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003967, VkglTestCase_003967_1, VkglTestCase_003967_2);

#define VkglTestCase_003968_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003968_2 ".unary_operator.plus.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003968, VkglTestCase_003968_1, VkglTestCase_003968_2);

#define VkglTestCase_003969_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003969_2 "unary_operator.plus.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003969, VkglTestCase_003969_1, VkglTestCase_003969_2);

#define VkglTestCase_003970_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003970_2 "unary_operator.plus.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003970, VkglTestCase_003970_1, VkglTestCase_003970_2);

#define VkglTestCase_003971_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003971_2 "nary_operator.plus.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003971, VkglTestCase_003971_1, VkglTestCase_003971_2);

#define VkglTestCase_003972_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003972_2 ".unary_operator.plus.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003972, VkglTestCase_003972_1, VkglTestCase_003972_2);

#define VkglTestCase_003973_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003973_2 "unary_operator.plus.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003973, VkglTestCase_003973_1, VkglTestCase_003973_2);

#define VkglTestCase_003974_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003974_2 ".unary_operator.plus.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003974, VkglTestCase_003974_1, VkglTestCase_003974_2);

#define VkglTestCase_003975_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003975_2 "unary_operator.plus.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003975, VkglTestCase_003975_1, VkglTestCase_003975_2);

#define VkglTestCase_003976_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003976_2 "unary_operator.plus.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003976, VkglTestCase_003976_1, VkglTestCase_003976_2);

#define VkglTestCase_003977_1 "dEQP-GLES2.functional.shaders.operator.u"
#define VkglTestCase_003977_2 "nary_operator.plus.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003977, VkglTestCase_003977_1, VkglTestCase_003977_2);

#define VkglTestCase_003978_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_003978_2 ".unary_operator.plus.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003978, VkglTestCase_003978_1, VkglTestCase_003978_2);

#define VkglTestCase_003979_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_003979_2 "unary_operator.plus.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20004TestSuite, TestCase_003979, VkglTestCase_003979_1, VkglTestCase_003979_2);
