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
#include "../ActsDeqpgles30019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018183_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018183_2 "unctions.common.fract.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018183, VkglTestCase_018183_1, VkglTestCase_018183_2);

#define VkglTestCase_018184_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018184_2 "nctions.common.fract.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018184, VkglTestCase_018184_1, VkglTestCase_018184_2);

#define VkglTestCase_018185_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018185_2 "nctions.common.fract.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018185, VkglTestCase_018185_1, VkglTestCase_018185_2);

#define VkglTestCase_018186_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018186_2 "ctions.common.fract.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018186, VkglTestCase_018186_1, VkglTestCase_018186_2);

#define VkglTestCase_018187_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018187_2 "unctions.common.fract.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018187, VkglTestCase_018187_1, VkglTestCase_018187_2);

#define VkglTestCase_018188_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018188_2 "nctions.common.fract.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018188, VkglTestCase_018188_1, VkglTestCase_018188_2);

#define VkglTestCase_018189_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018189_2 "functions.common.fract.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018189, VkglTestCase_018189_1, VkglTestCase_018189_2);

#define VkglTestCase_018190_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018190_2 "unctions.common.fract.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018190, VkglTestCase_018190_1, VkglTestCase_018190_2);

#define VkglTestCase_018191_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018191_2 "nctions.common.fract.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018191, VkglTestCase_018191_1, VkglTestCase_018191_2);

#define VkglTestCase_018192_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018192_2 "ctions.common.fract.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018192, VkglTestCase_018192_1, VkglTestCase_018192_2);

#define VkglTestCase_018193_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018193_2 "unctions.common.fract.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018193, VkglTestCase_018193_1, VkglTestCase_018193_2);

#define VkglTestCase_018194_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018194_2 "nctions.common.fract.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018194, VkglTestCase_018194_1, VkglTestCase_018194_2);

#define VkglTestCase_018195_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018195_2 "functions.common.fract.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018195, VkglTestCase_018195_1, VkglTestCase_018195_2);

#define VkglTestCase_018196_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018196_2 "unctions.common.fract.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018196, VkglTestCase_018196_1, VkglTestCase_018196_2);

#define VkglTestCase_018197_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018197_2 "nctions.common.fract.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018197, VkglTestCase_018197_1, VkglTestCase_018197_2);

#define VkglTestCase_018198_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018198_2 "ctions.common.fract.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018198, VkglTestCase_018198_1, VkglTestCase_018198_2);

#define VkglTestCase_018199_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018199_2 "unctions.common.fract.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018199, VkglTestCase_018199_1, VkglTestCase_018199_2);

#define VkglTestCase_018200_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018200_2 "nctions.common.fract.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018200, VkglTestCase_018200_1, VkglTestCase_018200_2);

#define VkglTestCase_018201_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018201_2 "functions.common.fract.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018201, VkglTestCase_018201_1, VkglTestCase_018201_2);

#define VkglTestCase_018202_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018202_2 "unctions.common.fract.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018202, VkglTestCase_018202_1, VkglTestCase_018202_2);

#define VkglTestCase_018203_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018203_2 "nctions.common.fract.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018203, VkglTestCase_018203_1, VkglTestCase_018203_2);

#define VkglTestCase_018204_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018204_2 "ctions.common.fract.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018204, VkglTestCase_018204_1, VkglTestCase_018204_2);

#define VkglTestCase_018205_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018205_2 "unctions.common.fract.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018205, VkglTestCase_018205_1, VkglTestCase_018205_2);

#define VkglTestCase_018206_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018206_2 "nctions.common.fract.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018206, VkglTestCase_018206_1, VkglTestCase_018206_2);
