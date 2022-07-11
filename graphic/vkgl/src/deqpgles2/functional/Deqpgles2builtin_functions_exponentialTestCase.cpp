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
#include "../ActsDeqpgles20008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007974_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007974_2 "ns.builtin_functions.exponential.pow_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007974, VkglTestCase_007974_1, VkglTestCase_007974_2);

#define VkglTestCase_007975_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007975_2 "s.builtin_functions.exponential.pow_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007975, VkglTestCase_007975_1, VkglTestCase_007975_2);

#define VkglTestCase_007976_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007976_2 "ns.builtin_functions.exponential.pow_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007976, VkglTestCase_007976_1, VkglTestCase_007976_2);

#define VkglTestCase_007977_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007977_2 "s.builtin_functions.exponential.pow_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007977, VkglTestCase_007977_1, VkglTestCase_007977_2);

#define VkglTestCase_007978_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007978_2 "ns.builtin_functions.exponential.pow_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007978, VkglTestCase_007978_1, VkglTestCase_007978_2);

#define VkglTestCase_007979_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007979_2 "s.builtin_functions.exponential.pow_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007979, VkglTestCase_007979_1, VkglTestCase_007979_2);

#define VkglTestCase_007980_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007980_2 "ns.builtin_functions.exponential.pow_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007980, VkglTestCase_007980_1, VkglTestCase_007980_2);

#define VkglTestCase_007981_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007981_2 "s.builtin_functions.exponential.pow_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007981, VkglTestCase_007981_1, VkglTestCase_007981_2);

#define VkglTestCase_007982_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007982_2 "ns.builtin_functions.exponential.exp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007982, VkglTestCase_007982_1, VkglTestCase_007982_2);

#define VkglTestCase_007983_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007983_2 "s.builtin_functions.exponential.exp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007983, VkglTestCase_007983_1, VkglTestCase_007983_2);

#define VkglTestCase_007984_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007984_2 "ns.builtin_functions.exponential.exp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007984, VkglTestCase_007984_1, VkglTestCase_007984_2);

#define VkglTestCase_007985_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007985_2 "s.builtin_functions.exponential.exp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007985, VkglTestCase_007985_1, VkglTestCase_007985_2);

#define VkglTestCase_007986_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007986_2 "ns.builtin_functions.exponential.exp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007986, VkglTestCase_007986_1, VkglTestCase_007986_2);

#define VkglTestCase_007987_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007987_2 "s.builtin_functions.exponential.exp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007987, VkglTestCase_007987_1, VkglTestCase_007987_2);

#define VkglTestCase_007988_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007988_2 "ns.builtin_functions.exponential.exp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007988, VkglTestCase_007988_1, VkglTestCase_007988_2);

#define VkglTestCase_007989_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007989_2 "s.builtin_functions.exponential.exp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007989, VkglTestCase_007989_1, VkglTestCase_007989_2);

#define VkglTestCase_007990_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007990_2 "ns.builtin_functions.exponential.log_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007990, VkglTestCase_007990_1, VkglTestCase_007990_2);

#define VkglTestCase_007991_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007991_2 "s.builtin_functions.exponential.log_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007991, VkglTestCase_007991_1, VkglTestCase_007991_2);

#define VkglTestCase_007992_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007992_2 "ns.builtin_functions.exponential.log_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007992, VkglTestCase_007992_1, VkglTestCase_007992_2);

#define VkglTestCase_007993_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007993_2 "s.builtin_functions.exponential.log_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007993, VkglTestCase_007993_1, VkglTestCase_007993_2);

#define VkglTestCase_007994_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007994_2 "ns.builtin_functions.exponential.log_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007994, VkglTestCase_007994_1, VkglTestCase_007994_2);

#define VkglTestCase_007995_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007995_2 "s.builtin_functions.exponential.log_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007995, VkglTestCase_007995_1, VkglTestCase_007995_2);

#define VkglTestCase_007996_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_007996_2 "ns.builtin_functions.exponential.log_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007996, VkglTestCase_007996_1, VkglTestCase_007996_2);

#define VkglTestCase_007997_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007997_2 "s.builtin_functions.exponential.log_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007997, VkglTestCase_007997_1, VkglTestCase_007997_2);

#define VkglTestCase_007998_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_007998_2 "s.builtin_functions.exponential.exp2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007998, VkglTestCase_007998_1, VkglTestCase_007998_2);

#define VkglTestCase_007999_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_007999_2 ".builtin_functions.exponential.exp2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_007999, VkglTestCase_007999_1, VkglTestCase_007999_2);

#define VkglTestCase_008000_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008000_2 "ns.builtin_functions.exponential.exp2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008000, VkglTestCase_008000_1, VkglTestCase_008000_2);

#define VkglTestCase_008001_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008001_2 "s.builtin_functions.exponential.exp2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008001, VkglTestCase_008001_1, VkglTestCase_008001_2);

#define VkglTestCase_008002_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008002_2 "ns.builtin_functions.exponential.exp2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008002, VkglTestCase_008002_1, VkglTestCase_008002_2);

#define VkglTestCase_008003_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008003_2 "s.builtin_functions.exponential.exp2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008003, VkglTestCase_008003_1, VkglTestCase_008003_2);

#define VkglTestCase_008004_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008004_2 "ns.builtin_functions.exponential.exp2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008004, VkglTestCase_008004_1, VkglTestCase_008004_2);

#define VkglTestCase_008005_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008005_2 "s.builtin_functions.exponential.exp2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008005, VkglTestCase_008005_1, VkglTestCase_008005_2);

#define VkglTestCase_008006_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008006_2 "s.builtin_functions.exponential.log2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008006, VkglTestCase_008006_1, VkglTestCase_008006_2);

#define VkglTestCase_008007_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008007_2 ".builtin_functions.exponential.log2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008007, VkglTestCase_008007_1, VkglTestCase_008007_2);

#define VkglTestCase_008008_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008008_2 "ns.builtin_functions.exponential.log2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008008, VkglTestCase_008008_1, VkglTestCase_008008_2);

#define VkglTestCase_008009_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008009_2 "s.builtin_functions.exponential.log2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008009, VkglTestCase_008009_1, VkglTestCase_008009_2);

#define VkglTestCase_008010_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008010_2 "ns.builtin_functions.exponential.log2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008010, VkglTestCase_008010_1, VkglTestCase_008010_2);

#define VkglTestCase_008011_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008011_2 "s.builtin_functions.exponential.log2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008011, VkglTestCase_008011_1, VkglTestCase_008011_2);

#define VkglTestCase_008012_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008012_2 "ns.builtin_functions.exponential.log2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008012, VkglTestCase_008012_1, VkglTestCase_008012_2);

#define VkglTestCase_008013_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008013_2 "s.builtin_functions.exponential.log2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008013, VkglTestCase_008013_1, VkglTestCase_008013_2);

#define VkglTestCase_008014_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008014_2 "s.builtin_functions.exponential.sqrt_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008014, VkglTestCase_008014_1, VkglTestCase_008014_2);

#define VkglTestCase_008015_1 "dEQP-GLES2.functional.shaders.constant_expressions"
#define VkglTestCase_008015_2 ".builtin_functions.exponential.sqrt_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008015, VkglTestCase_008015_1, VkglTestCase_008015_2);

#define VkglTestCase_008016_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008016_2 "ns.builtin_functions.exponential.sqrt_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008016, VkglTestCase_008016_1, VkglTestCase_008016_2);

#define VkglTestCase_008017_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008017_2 "s.builtin_functions.exponential.sqrt_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008017, VkglTestCase_008017_1, VkglTestCase_008017_2);

#define VkglTestCase_008018_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008018_2 "ns.builtin_functions.exponential.sqrt_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008018, VkglTestCase_008018_1, VkglTestCase_008018_2);

#define VkglTestCase_008019_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008019_2 "s.builtin_functions.exponential.sqrt_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008019, VkglTestCase_008019_1, VkglTestCase_008019_2);

#define VkglTestCase_008020_1 "dEQP-GLES2.functional.shaders.constant_expressio"
#define VkglTestCase_008020_2 "ns.builtin_functions.exponential.sqrt_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008020, VkglTestCase_008020_1, VkglTestCase_008020_2);

#define VkglTestCase_008021_1 "dEQP-GLES2.functional.shaders.constant_expression"
#define VkglTestCase_008021_2 "s.builtin_functions.exponential.sqrt_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008021, VkglTestCase_008021_1, VkglTestCase_008021_2);

#define VkglTestCase_008022_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008022_2 "uiltin_functions.exponential.inversesqrt_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008022, VkglTestCase_008022_1, VkglTestCase_008022_2);

#define VkglTestCase_008023_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008023_2 "iltin_functions.exponential.inversesqrt_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008023, VkglTestCase_008023_1, VkglTestCase_008023_2);

#define VkglTestCase_008024_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008024_2 "uiltin_functions.exponential.inversesqrt_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008024, VkglTestCase_008024_1, VkglTestCase_008024_2);

#define VkglTestCase_008025_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008025_2 "iltin_functions.exponential.inversesqrt_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008025, VkglTestCase_008025_1, VkglTestCase_008025_2);

#define VkglTestCase_008026_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008026_2 "uiltin_functions.exponential.inversesqrt_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008026, VkglTestCase_008026_1, VkglTestCase_008026_2);

#define VkglTestCase_008027_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008027_2 "iltin_functions.exponential.inversesqrt_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008027, VkglTestCase_008027_1, VkglTestCase_008027_2);

#define VkglTestCase_008028_1 "dEQP-GLES2.functional.shaders.constant_expressions.b"
#define VkglTestCase_008028_2 "uiltin_functions.exponential.inversesqrt_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008028, VkglTestCase_008028_1, VkglTestCase_008028_2);

#define VkglTestCase_008029_1 "dEQP-GLES2.functional.shaders.constant_expressions.bu"
#define VkglTestCase_008029_2 "iltin_functions.exponential.inversesqrt_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20008TestSuite, TestCase_008029, VkglTestCase_008029_1, VkglTestCase_008029_2);
