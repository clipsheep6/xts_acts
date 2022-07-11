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

#define VkglTestCase_018231_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018231_2 "unctions.common.isnan.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018231, VkglTestCase_018231_1, VkglTestCase_018231_2);

#define VkglTestCase_018232_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018232_2 "nctions.common.isnan.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018232, VkglTestCase_018232_1, VkglTestCase_018232_2);

#define VkglTestCase_018233_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018233_2 "nctions.common.isnan.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018233, VkglTestCase_018233_1, VkglTestCase_018233_2);

#define VkglTestCase_018234_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018234_2 "ctions.common.isnan.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018234, VkglTestCase_018234_1, VkglTestCase_018234_2);

#define VkglTestCase_018235_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018235_2 "unctions.common.isnan.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018235, VkglTestCase_018235_1, VkglTestCase_018235_2);

#define VkglTestCase_018236_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018236_2 "nctions.common.isnan.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018236, VkglTestCase_018236_1, VkglTestCase_018236_2);

#define VkglTestCase_018237_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018237_2 "functions.common.isnan.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018237, VkglTestCase_018237_1, VkglTestCase_018237_2);

#define VkglTestCase_018238_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018238_2 "unctions.common.isnan.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018238, VkglTestCase_018238_1, VkglTestCase_018238_2);

#define VkglTestCase_018239_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018239_2 "nctions.common.isnan.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018239, VkglTestCase_018239_1, VkglTestCase_018239_2);

#define VkglTestCase_018240_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018240_2 "ctions.common.isnan.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018240, VkglTestCase_018240_1, VkglTestCase_018240_2);

#define VkglTestCase_018241_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018241_2 "unctions.common.isnan.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018241, VkglTestCase_018241_1, VkglTestCase_018241_2);

#define VkglTestCase_018242_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018242_2 "nctions.common.isnan.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018242, VkglTestCase_018242_1, VkglTestCase_018242_2);

#define VkglTestCase_018243_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018243_2 "functions.common.isnan.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018243, VkglTestCase_018243_1, VkglTestCase_018243_2);

#define VkglTestCase_018244_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018244_2 "unctions.common.isnan.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018244, VkglTestCase_018244_1, VkglTestCase_018244_2);

#define VkglTestCase_018245_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018245_2 "nctions.common.isnan.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018245, VkglTestCase_018245_1, VkglTestCase_018245_2);

#define VkglTestCase_018246_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018246_2 "ctions.common.isnan.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018246, VkglTestCase_018246_1, VkglTestCase_018246_2);

#define VkglTestCase_018247_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018247_2 "unctions.common.isnan.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018247, VkglTestCase_018247_1, VkglTestCase_018247_2);

#define VkglTestCase_018248_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018248_2 "nctions.common.isnan.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018248, VkglTestCase_018248_1, VkglTestCase_018248_2);

#define VkglTestCase_018249_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018249_2 "functions.common.isnan.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018249, VkglTestCase_018249_1, VkglTestCase_018249_2);

#define VkglTestCase_018250_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018250_2 "unctions.common.isnan.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018250, VkglTestCase_018250_1, VkglTestCase_018250_2);

#define VkglTestCase_018251_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018251_2 "nctions.common.isnan.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018251, VkglTestCase_018251_1, VkglTestCase_018251_2);

#define VkglTestCase_018252_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018252_2 "ctions.common.isnan.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018252, VkglTestCase_018252_1, VkglTestCase_018252_2);

#define VkglTestCase_018253_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018253_2 "unctions.common.isnan.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018253, VkglTestCase_018253_1, VkglTestCase_018253_2);

#define VkglTestCase_018254_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018254_2 "nctions.common.isnan.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018254, VkglTestCase_018254_1, VkglTestCase_018254_2);
