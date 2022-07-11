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

#define VkglTestCase_018255_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018255_2 "unctions.common.isinf.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018255, VkglTestCase_018255_1, VkglTestCase_018255_2);

#define VkglTestCase_018256_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018256_2 "nctions.common.isinf.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018256, VkglTestCase_018256_1, VkglTestCase_018256_2);

#define VkglTestCase_018257_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018257_2 "nctions.common.isinf.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018257, VkglTestCase_018257_1, VkglTestCase_018257_2);

#define VkglTestCase_018258_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018258_2 "ctions.common.isinf.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018258, VkglTestCase_018258_1, VkglTestCase_018258_2);

#define VkglTestCase_018259_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018259_2 "unctions.common.isinf.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018259, VkglTestCase_018259_1, VkglTestCase_018259_2);

#define VkglTestCase_018260_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018260_2 "nctions.common.isinf.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018260, VkglTestCase_018260_1, VkglTestCase_018260_2);

#define VkglTestCase_018261_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018261_2 "functions.common.isinf.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018261, VkglTestCase_018261_1, VkglTestCase_018261_2);

#define VkglTestCase_018262_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018262_2 "unctions.common.isinf.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018262, VkglTestCase_018262_1, VkglTestCase_018262_2);

#define VkglTestCase_018263_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018263_2 "nctions.common.isinf.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018263, VkglTestCase_018263_1, VkglTestCase_018263_2);

#define VkglTestCase_018264_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018264_2 "ctions.common.isinf.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018264, VkglTestCase_018264_1, VkglTestCase_018264_2);

#define VkglTestCase_018265_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018265_2 "unctions.common.isinf.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018265, VkglTestCase_018265_1, VkglTestCase_018265_2);

#define VkglTestCase_018266_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018266_2 "nctions.common.isinf.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018266, VkglTestCase_018266_1, VkglTestCase_018266_2);

#define VkglTestCase_018267_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018267_2 "functions.common.isinf.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018267, VkglTestCase_018267_1, VkglTestCase_018267_2);

#define VkglTestCase_018268_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018268_2 "unctions.common.isinf.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018268, VkglTestCase_018268_1, VkglTestCase_018268_2);

#define VkglTestCase_018269_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018269_2 "nctions.common.isinf.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018269, VkglTestCase_018269_1, VkglTestCase_018269_2);

#define VkglTestCase_018270_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018270_2 "ctions.common.isinf.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018270, VkglTestCase_018270_1, VkglTestCase_018270_2);

#define VkglTestCase_018271_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018271_2 "unctions.common.isinf.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018271, VkglTestCase_018271_1, VkglTestCase_018271_2);

#define VkglTestCase_018272_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018272_2 "nctions.common.isinf.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018272, VkglTestCase_018272_1, VkglTestCase_018272_2);

#define VkglTestCase_018273_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018273_2 "functions.common.isinf.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018273, VkglTestCase_018273_1, VkglTestCase_018273_2);

#define VkglTestCase_018274_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018274_2 "unctions.common.isinf.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018274, VkglTestCase_018274_1, VkglTestCase_018274_2);

#define VkglTestCase_018275_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018275_2 "nctions.common.isinf.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018275, VkglTestCase_018275_1, VkglTestCase_018275_2);

#define VkglTestCase_018276_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018276_2 "ctions.common.isinf.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018276, VkglTestCase_018276_1, VkglTestCase_018276_2);

#define VkglTestCase_018277_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018277_2 "unctions.common.isinf.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018277, VkglTestCase_018277_1, VkglTestCase_018277_2);

#define VkglTestCase_018278_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018278_2 "nctions.common.isinf.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018278, VkglTestCase_018278_1, VkglTestCase_018278_2);
