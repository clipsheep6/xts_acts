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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019964_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019964_2 "s.builtin_functions.geometric.length_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019964, VkglTestCase_019964_1, VkglTestCase_019964_2);

#define VkglTestCase_019965_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019965_2 ".builtin_functions.geometric.length_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019965, VkglTestCase_019965_1, VkglTestCase_019965_2);

#define VkglTestCase_019966_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019966_2 "ns.builtin_functions.geometric.length_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019966, VkglTestCase_019966_1, VkglTestCase_019966_2);

#define VkglTestCase_019967_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019967_2 "s.builtin_functions.geometric.length_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019967, VkglTestCase_019967_1, VkglTestCase_019967_2);

#define VkglTestCase_019968_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019968_2 "ns.builtin_functions.geometric.length_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019968, VkglTestCase_019968_1, VkglTestCase_019968_2);

#define VkglTestCase_019969_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019969_2 "s.builtin_functions.geometric.length_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019969, VkglTestCase_019969_1, VkglTestCase_019969_2);

#define VkglTestCase_019970_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019970_2 "ns.builtin_functions.geometric.length_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019970, VkglTestCase_019970_1, VkglTestCase_019970_2);

#define VkglTestCase_019971_1 "dEQP-GLES3.functional.shaders.constant_expression"
#define VkglTestCase_019971_2 "s.builtin_functions.geometric.length_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019971, VkglTestCase_019971_1, VkglTestCase_019971_2);

#define VkglTestCase_019972_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019972_2 "ons.builtin_functions.geometric.dot_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019972, VkglTestCase_019972_1, VkglTestCase_019972_2);

#define VkglTestCase_019973_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019973_2 "ns.builtin_functions.geometric.dot_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019973, VkglTestCase_019973_1, VkglTestCase_019973_2);

#define VkglTestCase_019974_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019974_2 "ons.builtin_functions.geometric.dot_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019974, VkglTestCase_019974_1, VkglTestCase_019974_2);

#define VkglTestCase_019975_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019975_2 "ns.builtin_functions.geometric.dot_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019975, VkglTestCase_019975_1, VkglTestCase_019975_2);

#define VkglTestCase_019976_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019976_2 "ons.builtin_functions.geometric.dot_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019976, VkglTestCase_019976_1, VkglTestCase_019976_2);

#define VkglTestCase_019977_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019977_2 "ns.builtin_functions.geometric.dot_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019977, VkglTestCase_019977_1, VkglTestCase_019977_2);

#define VkglTestCase_019978_1 "dEQP-GLES3.functional.shaders.constant_expressi"
#define VkglTestCase_019978_2 "ons.builtin_functions.geometric.dot_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019978, VkglTestCase_019978_1, VkglTestCase_019978_2);

#define VkglTestCase_019979_1 "dEQP-GLES3.functional.shaders.constant_expressio"
#define VkglTestCase_019979_2 "ns.builtin_functions.geometric.dot_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019979, VkglTestCase_019979_1, VkglTestCase_019979_2);

#define VkglTestCase_019980_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019980_2 ".builtin_functions.geometric.normalize_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019980, VkglTestCase_019980_1, VkglTestCase_019980_2);

#define VkglTestCase_019981_1 "dEQP-GLES3.functional.shaders.constant_expressions."
#define VkglTestCase_019981_2 "builtin_functions.geometric.normalize_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019981, VkglTestCase_019981_1, VkglTestCase_019981_2);

#define VkglTestCase_019982_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019982_2 ".builtin_functions.geometric.normalize_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019982, VkglTestCase_019982_1, VkglTestCase_019982_2);

#define VkglTestCase_019983_1 "dEQP-GLES3.functional.shaders.constant_expressions."
#define VkglTestCase_019983_2 "builtin_functions.geometric.normalize_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019983, VkglTestCase_019983_1, VkglTestCase_019983_2);

#define VkglTestCase_019984_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019984_2 ".builtin_functions.geometric.normalize_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019984, VkglTestCase_019984_1, VkglTestCase_019984_2);

#define VkglTestCase_019985_1 "dEQP-GLES3.functional.shaders.constant_expressions."
#define VkglTestCase_019985_2 "builtin_functions.geometric.normalize_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019985, VkglTestCase_019985_1, VkglTestCase_019985_2);

#define VkglTestCase_019986_1 "dEQP-GLES3.functional.shaders.constant_expressions"
#define VkglTestCase_019986_2 ".builtin_functions.geometric.normalize_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019986, VkglTestCase_019986_1, VkglTestCase_019986_2);

#define VkglTestCase_019987_1 "dEQP-GLES3.functional.shaders.constant_expressions."
#define VkglTestCase_019987_2 "builtin_functions.geometric.normalize_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019987, VkglTestCase_019987_1, VkglTestCase_019987_2);
