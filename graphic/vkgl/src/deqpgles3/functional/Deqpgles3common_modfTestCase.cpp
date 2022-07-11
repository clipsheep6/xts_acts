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

#define VkglTestCase_018207_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018207_2 "functions.common.modf.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018207, VkglTestCase_018207_1, VkglTestCase_018207_2);

#define VkglTestCase_018208_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018208_2 "unctions.common.modf.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018208, VkglTestCase_018208_1, VkglTestCase_018208_2);

#define VkglTestCase_018209_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018209_2 "nctions.common.modf.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018209, VkglTestCase_018209_1, VkglTestCase_018209_2);

#define VkglTestCase_018210_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018210_2 "ctions.common.modf.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018210, VkglTestCase_018210_1, VkglTestCase_018210_2);

#define VkglTestCase_018211_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018211_2 "unctions.common.modf.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018211, VkglTestCase_018211_1, VkglTestCase_018211_2);

#define VkglTestCase_018212_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018212_2 "nctions.common.modf.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018212, VkglTestCase_018212_1, VkglTestCase_018212_2);

#define VkglTestCase_018213_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018213_2 "functions.common.modf.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018213, VkglTestCase_018213_1, VkglTestCase_018213_2);

#define VkglTestCase_018214_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018214_2 "unctions.common.modf.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018214, VkglTestCase_018214_1, VkglTestCase_018214_2);

#define VkglTestCase_018215_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018215_2 "unctions.common.modf.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018215, VkglTestCase_018215_1, VkglTestCase_018215_2);

#define VkglTestCase_018216_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018216_2 "nctions.common.modf.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018216, VkglTestCase_018216_1, VkglTestCase_018216_2);

#define VkglTestCase_018217_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018217_2 "functions.common.modf.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018217, VkglTestCase_018217_1, VkglTestCase_018217_2);

#define VkglTestCase_018218_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018218_2 "unctions.common.modf.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018218, VkglTestCase_018218_1, VkglTestCase_018218_2);

#define VkglTestCase_018219_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018219_2 "functions.common.modf.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018219, VkglTestCase_018219_1, VkglTestCase_018219_2);

#define VkglTestCase_018220_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018220_2 "unctions.common.modf.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018220, VkglTestCase_018220_1, VkglTestCase_018220_2);

#define VkglTestCase_018221_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018221_2 "unctions.common.modf.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018221, VkglTestCase_018221_1, VkglTestCase_018221_2);

#define VkglTestCase_018222_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018222_2 "nctions.common.modf.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018222, VkglTestCase_018222_1, VkglTestCase_018222_2);

#define VkglTestCase_018223_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018223_2 "functions.common.modf.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018223, VkglTestCase_018223_1, VkglTestCase_018223_2);

#define VkglTestCase_018224_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018224_2 "unctions.common.modf.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018224, VkglTestCase_018224_1, VkglTestCase_018224_2);

#define VkglTestCase_018225_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018225_2 "functions.common.modf.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018225, VkglTestCase_018225_1, VkglTestCase_018225_2);

#define VkglTestCase_018226_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018226_2 "unctions.common.modf.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018226, VkglTestCase_018226_1, VkglTestCase_018226_2);

#define VkglTestCase_018227_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018227_2 "unctions.common.modf.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018227, VkglTestCase_018227_1, VkglTestCase_018227_2);

#define VkglTestCase_018228_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018228_2 "nctions.common.modf.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018228, VkglTestCase_018228_1, VkglTestCase_018228_2);

#define VkglTestCase_018229_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018229_2 "functions.common.modf.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018229, VkglTestCase_018229_1, VkglTestCase_018229_2);

#define VkglTestCase_018230_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018230_2 "unctions.common.modf.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018230, VkglTestCase_018230_1, VkglTestCase_018230_2);
