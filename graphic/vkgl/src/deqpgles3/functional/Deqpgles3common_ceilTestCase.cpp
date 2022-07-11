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

#define VkglTestCase_018159_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018159_2 "functions.common.ceil.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018159, VkglTestCase_018159_1, VkglTestCase_018159_2);

#define VkglTestCase_018160_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018160_2 "unctions.common.ceil.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018160, VkglTestCase_018160_1, VkglTestCase_018160_2);

#define VkglTestCase_018161_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018161_2 "nctions.common.ceil.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018161, VkglTestCase_018161_1, VkglTestCase_018161_2);

#define VkglTestCase_018162_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018162_2 "ctions.common.ceil.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018162, VkglTestCase_018162_1, VkglTestCase_018162_2);

#define VkglTestCase_018163_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018163_2 "unctions.common.ceil.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018163, VkglTestCase_018163_1, VkglTestCase_018163_2);

#define VkglTestCase_018164_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018164_2 "nctions.common.ceil.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018164, VkglTestCase_018164_1, VkglTestCase_018164_2);

#define VkglTestCase_018165_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018165_2 "functions.common.ceil.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018165, VkglTestCase_018165_1, VkglTestCase_018165_2);

#define VkglTestCase_018166_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018166_2 "unctions.common.ceil.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018166, VkglTestCase_018166_1, VkglTestCase_018166_2);

#define VkglTestCase_018167_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018167_2 "unctions.common.ceil.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018167, VkglTestCase_018167_1, VkglTestCase_018167_2);

#define VkglTestCase_018168_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018168_2 "nctions.common.ceil.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018168, VkglTestCase_018168_1, VkglTestCase_018168_2);

#define VkglTestCase_018169_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018169_2 "functions.common.ceil.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018169, VkglTestCase_018169_1, VkglTestCase_018169_2);

#define VkglTestCase_018170_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018170_2 "unctions.common.ceil.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018170, VkglTestCase_018170_1, VkglTestCase_018170_2);

#define VkglTestCase_018171_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018171_2 "functions.common.ceil.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018171, VkglTestCase_018171_1, VkglTestCase_018171_2);

#define VkglTestCase_018172_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018172_2 "unctions.common.ceil.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018172, VkglTestCase_018172_1, VkglTestCase_018172_2);

#define VkglTestCase_018173_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018173_2 "unctions.common.ceil.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018173, VkglTestCase_018173_1, VkglTestCase_018173_2);

#define VkglTestCase_018174_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018174_2 "nctions.common.ceil.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018174, VkglTestCase_018174_1, VkglTestCase_018174_2);

#define VkglTestCase_018175_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018175_2 "functions.common.ceil.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018175, VkglTestCase_018175_1, VkglTestCase_018175_2);

#define VkglTestCase_018176_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018176_2 "unctions.common.ceil.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018176, VkglTestCase_018176_1, VkglTestCase_018176_2);

#define VkglTestCase_018177_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018177_2 "functions.common.ceil.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018177, VkglTestCase_018177_1, VkglTestCase_018177_2);

#define VkglTestCase_018178_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018178_2 "unctions.common.ceil.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018178, VkglTestCase_018178_1, VkglTestCase_018178_2);

#define VkglTestCase_018179_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018179_2 "unctions.common.ceil.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018179, VkglTestCase_018179_1, VkglTestCase_018179_2);

#define VkglTestCase_018180_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018180_2 "nctions.common.ceil.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018180, VkglTestCase_018180_1, VkglTestCase_018180_2);

#define VkglTestCase_018181_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018181_2 "functions.common.ceil.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018181, VkglTestCase_018181_1, VkglTestCase_018181_2);

#define VkglTestCase_018182_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018182_2 "unctions.common.ceil.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018182, VkglTestCase_018182_1, VkglTestCase_018182_2);
