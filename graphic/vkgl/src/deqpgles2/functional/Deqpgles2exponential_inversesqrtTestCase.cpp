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

#define VkglTestCase_005996_1 "dEQP-GLES2.functional.shaders.operator.ex"
#define VkglTestCase_005996_2 "ponential.inversesqrt.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005996, VkglTestCase_005996_1, VkglTestCase_005996_2);

#define VkglTestCase_005997_1 "dEQP-GLES2.functional.shaders.operator.exp"
#define VkglTestCase_005997_2 "onential.inversesqrt.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005997, VkglTestCase_005997_1, VkglTestCase_005997_2);

#define VkglTestCase_005998_1 "dEQP-GLES2.functional.shaders.operator.e"
#define VkglTestCase_005998_2 "xponential.inversesqrt.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005998, VkglTestCase_005998_1, VkglTestCase_005998_2);

#define VkglTestCase_005999_1 "dEQP-GLES2.functional.shaders.operator.ex"
#define VkglTestCase_005999_2 "ponential.inversesqrt.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005999, VkglTestCase_005999_1, VkglTestCase_005999_2);

#define VkglTestCase_006000_1 "dEQP-GLES2.functional.shaders.operator.ex"
#define VkglTestCase_006000_2 "ponential.inversesqrt.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006000, VkglTestCase_006000_1, VkglTestCase_006000_2);

#define VkglTestCase_006001_1 "dEQP-GLES2.functional.shaders.operator.exp"
#define VkglTestCase_006001_2 "onential.inversesqrt.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006001, VkglTestCase_006001_1, VkglTestCase_006001_2);

#define VkglTestCase_006002_1 "dEQP-GLES2.functional.shaders.operator.e"
#define VkglTestCase_006002_2 "xponential.inversesqrt.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006002, VkglTestCase_006002_1, VkglTestCase_006002_2);

#define VkglTestCase_006003_1 "dEQP-GLES2.functional.shaders.operator.ex"
#define VkglTestCase_006003_2 "ponential.inversesqrt.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006003, VkglTestCase_006003_1, VkglTestCase_006003_2);

#define VkglTestCase_006004_1 "dEQP-GLES2.functional.shaders.operator.ex"
#define VkglTestCase_006004_2 "ponential.inversesqrt.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006004, VkglTestCase_006004_1, VkglTestCase_006004_2);

#define VkglTestCase_006005_1 "dEQP-GLES2.functional.shaders.operator.exp"
#define VkglTestCase_006005_2 "onential.inversesqrt.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006005, VkglTestCase_006005_1, VkglTestCase_006005_2);

#define VkglTestCase_006006_1 "dEQP-GLES2.functional.shaders.operator.e"
#define VkglTestCase_006006_2 "xponential.inversesqrt.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006006, VkglTestCase_006006_1, VkglTestCase_006006_2);

#define VkglTestCase_006007_1 "dEQP-GLES2.functional.shaders.operator.ex"
#define VkglTestCase_006007_2 "ponential.inversesqrt.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006007, VkglTestCase_006007_1, VkglTestCase_006007_2);

#define VkglTestCase_006008_1 "dEQP-GLES2.functional.shaders.operator.ex"
#define VkglTestCase_006008_2 "ponential.inversesqrt.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006008, VkglTestCase_006008_1, VkglTestCase_006008_2);

#define VkglTestCase_006009_1 "dEQP-GLES2.functional.shaders.operator.exp"
#define VkglTestCase_006009_2 "onential.inversesqrt.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006009, VkglTestCase_006009_1, VkglTestCase_006009_2);

#define VkglTestCase_006010_1 "dEQP-GLES2.functional.shaders.operator.e"
#define VkglTestCase_006010_2 "xponential.inversesqrt.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006010, VkglTestCase_006010_1, VkglTestCase_006010_2);

#define VkglTestCase_006011_1 "dEQP-GLES2.functional.shaders.operator.ex"
#define VkglTestCase_006011_2 "ponential.inversesqrt.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_006011, VkglTestCase_006011_1, VkglTestCase_006011_2);
