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

#define VkglTestCase_018087_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018087_2 "unctions.common.trunc.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018087, VkglTestCase_018087_1, VkglTestCase_018087_2);

#define VkglTestCase_018088_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018088_2 "nctions.common.trunc.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018088, VkglTestCase_018088_1, VkglTestCase_018088_2);

#define VkglTestCase_018089_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018089_2 "nctions.common.trunc.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018089, VkglTestCase_018089_1, VkglTestCase_018089_2);

#define VkglTestCase_018090_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018090_2 "ctions.common.trunc.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018090, VkglTestCase_018090_1, VkglTestCase_018090_2);

#define VkglTestCase_018091_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018091_2 "unctions.common.trunc.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018091, VkglTestCase_018091_1, VkglTestCase_018091_2);

#define VkglTestCase_018092_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018092_2 "nctions.common.trunc.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018092, VkglTestCase_018092_1, VkglTestCase_018092_2);

#define VkglTestCase_018093_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018093_2 "functions.common.trunc.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018093, VkglTestCase_018093_1, VkglTestCase_018093_2);

#define VkglTestCase_018094_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018094_2 "unctions.common.trunc.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018094, VkglTestCase_018094_1, VkglTestCase_018094_2);

#define VkglTestCase_018095_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018095_2 "nctions.common.trunc.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018095, VkglTestCase_018095_1, VkglTestCase_018095_2);

#define VkglTestCase_018096_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018096_2 "ctions.common.trunc.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018096, VkglTestCase_018096_1, VkglTestCase_018096_2);

#define VkglTestCase_018097_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018097_2 "unctions.common.trunc.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018097, VkglTestCase_018097_1, VkglTestCase_018097_2);

#define VkglTestCase_018098_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018098_2 "nctions.common.trunc.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018098, VkglTestCase_018098_1, VkglTestCase_018098_2);

#define VkglTestCase_018099_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018099_2 "functions.common.trunc.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018099, VkglTestCase_018099_1, VkglTestCase_018099_2);

#define VkglTestCase_018100_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018100_2 "unctions.common.trunc.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018100, VkglTestCase_018100_1, VkglTestCase_018100_2);

#define VkglTestCase_018101_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018101_2 "nctions.common.trunc.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018101, VkglTestCase_018101_1, VkglTestCase_018101_2);

#define VkglTestCase_018102_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018102_2 "ctions.common.trunc.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018102, VkglTestCase_018102_1, VkglTestCase_018102_2);

#define VkglTestCase_018103_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018103_2 "unctions.common.trunc.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018103, VkglTestCase_018103_1, VkglTestCase_018103_2);

#define VkglTestCase_018104_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018104_2 "nctions.common.trunc.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018104, VkglTestCase_018104_1, VkglTestCase_018104_2);

#define VkglTestCase_018105_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018105_2 "functions.common.trunc.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018105, VkglTestCase_018105_1, VkglTestCase_018105_2);

#define VkglTestCase_018106_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018106_2 "unctions.common.trunc.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018106, VkglTestCase_018106_1, VkglTestCase_018106_2);

#define VkglTestCase_018107_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018107_2 "nctions.common.trunc.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018107, VkglTestCase_018107_1, VkglTestCase_018107_2);

#define VkglTestCase_018108_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018108_2 "ctions.common.trunc.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018108, VkglTestCase_018108_1, VkglTestCase_018108_2);

#define VkglTestCase_018109_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018109_2 "unctions.common.trunc.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018109, VkglTestCase_018109_1, VkglTestCase_018109_2);

#define VkglTestCase_018110_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018110_2 "nctions.common.trunc.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018110, VkglTestCase_018110_1, VkglTestCase_018110_2);
