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
#include "../ActsDeqpgles20006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005964_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005964_2 ".exponential.log2.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005964, VkglTestCase_005964_1, VkglTestCase_005964_2);

#define VkglTestCase_005965_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005965_2 "exponential.log2.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005965, VkglTestCase_005965_1, VkglTestCase_005965_2);

#define VkglTestCase_005966_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005966_2 "r.exponential.log2.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005966, VkglTestCase_005966_1, VkglTestCase_005966_2);

#define VkglTestCase_005967_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005967_2 ".exponential.log2.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005967, VkglTestCase_005967_1, VkglTestCase_005967_2);

#define VkglTestCase_005968_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005968_2 "r.exponential.log2.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005968, VkglTestCase_005968_1, VkglTestCase_005968_2);

#define VkglTestCase_005969_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005969_2 ".exponential.log2.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005969, VkglTestCase_005969_1, VkglTestCase_005969_2);

#define VkglTestCase_005970_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005970_2 "or.exponential.log2.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005970, VkglTestCase_005970_1, VkglTestCase_005970_2);

#define VkglTestCase_005971_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005971_2 "r.exponential.log2.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005971, VkglTestCase_005971_1, VkglTestCase_005971_2);

#define VkglTestCase_005972_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005972_2 "r.exponential.log2.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005972, VkglTestCase_005972_1, VkglTestCase_005972_2);

#define VkglTestCase_005973_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005973_2 ".exponential.log2.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005973, VkglTestCase_005973_1, VkglTestCase_005973_2);

#define VkglTestCase_005974_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005974_2 "or.exponential.log2.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005974, VkglTestCase_005974_1, VkglTestCase_005974_2);

#define VkglTestCase_005975_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005975_2 "r.exponential.log2.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005975, VkglTestCase_005975_1, VkglTestCase_005975_2);

#define VkglTestCase_005976_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005976_2 "r.exponential.log2.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005976, VkglTestCase_005976_1, VkglTestCase_005976_2);

#define VkglTestCase_005977_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_005977_2 ".exponential.log2.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005977, VkglTestCase_005977_1, VkglTestCase_005977_2);

#define VkglTestCase_005978_1 "dEQP-GLES2.functional.shaders.operat"
#define VkglTestCase_005978_2 "or.exponential.log2.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005978, VkglTestCase_005978_1, VkglTestCase_005978_2);

#define VkglTestCase_005979_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_005979_2 "r.exponential.log2.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005979, VkglTestCase_005979_1, VkglTestCase_005979_2);
