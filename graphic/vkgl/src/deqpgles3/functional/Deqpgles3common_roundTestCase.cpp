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

#define VkglTestCase_018111_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018111_2 "unctions.common.round.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018111, VkglTestCase_018111_1, VkglTestCase_018111_2);

#define VkglTestCase_018112_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018112_2 "nctions.common.round.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018112, VkglTestCase_018112_1, VkglTestCase_018112_2);

#define VkglTestCase_018113_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018113_2 "nctions.common.round.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018113, VkglTestCase_018113_1, VkglTestCase_018113_2);

#define VkglTestCase_018114_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018114_2 "ctions.common.round.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018114, VkglTestCase_018114_1, VkglTestCase_018114_2);

#define VkglTestCase_018115_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018115_2 "unctions.common.round.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018115, VkglTestCase_018115_1, VkglTestCase_018115_2);

#define VkglTestCase_018116_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018116_2 "nctions.common.round.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018116, VkglTestCase_018116_1, VkglTestCase_018116_2);

#define VkglTestCase_018117_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018117_2 "functions.common.round.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018117, VkglTestCase_018117_1, VkglTestCase_018117_2);

#define VkglTestCase_018118_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018118_2 "unctions.common.round.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018118, VkglTestCase_018118_1, VkglTestCase_018118_2);

#define VkglTestCase_018119_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018119_2 "nctions.common.round.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018119, VkglTestCase_018119_1, VkglTestCase_018119_2);

#define VkglTestCase_018120_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018120_2 "ctions.common.round.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018120, VkglTestCase_018120_1, VkglTestCase_018120_2);

#define VkglTestCase_018121_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018121_2 "unctions.common.round.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018121, VkglTestCase_018121_1, VkglTestCase_018121_2);

#define VkglTestCase_018122_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018122_2 "nctions.common.round.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018122, VkglTestCase_018122_1, VkglTestCase_018122_2);

#define VkglTestCase_018123_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018123_2 "functions.common.round.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018123, VkglTestCase_018123_1, VkglTestCase_018123_2);

#define VkglTestCase_018124_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018124_2 "unctions.common.round.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018124, VkglTestCase_018124_1, VkglTestCase_018124_2);

#define VkglTestCase_018125_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018125_2 "nctions.common.round.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018125, VkglTestCase_018125_1, VkglTestCase_018125_2);

#define VkglTestCase_018126_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018126_2 "ctions.common.round.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018126, VkglTestCase_018126_1, VkglTestCase_018126_2);

#define VkglTestCase_018127_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018127_2 "unctions.common.round.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018127, VkglTestCase_018127_1, VkglTestCase_018127_2);

#define VkglTestCase_018128_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018128_2 "nctions.common.round.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018128, VkglTestCase_018128_1, VkglTestCase_018128_2);

#define VkglTestCase_018129_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018129_2 "functions.common.round.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018129, VkglTestCase_018129_1, VkglTestCase_018129_2);

#define VkglTestCase_018130_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018130_2 "unctions.common.round.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018130, VkglTestCase_018130_1, VkglTestCase_018130_2);

#define VkglTestCase_018131_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018131_2 "nctions.common.round.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018131, VkglTestCase_018131_1, VkglTestCase_018131_2);

#define VkglTestCase_018132_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018132_2 "ctions.common.round.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018132, VkglTestCase_018132_1, VkglTestCase_018132_2);

#define VkglTestCase_018133_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018133_2 "unctions.common.round.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018133, VkglTestCase_018133_1, VkglTestCase_018133_2);

#define VkglTestCase_018134_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018134_2 "nctions.common.round.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018134, VkglTestCase_018134_1, VkglTestCase_018134_2);
