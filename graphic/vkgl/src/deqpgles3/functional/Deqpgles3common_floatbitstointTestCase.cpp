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

#define VkglTestCase_018279_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018279_2 "ions.common.floatbitstoint.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018279, VkglTestCase_018279_1, VkglTestCase_018279_2);

#define VkglTestCase_018280_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018280_2 "ons.common.floatbitstoint.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018280, VkglTestCase_018280_1, VkglTestCase_018280_2);

#define VkglTestCase_018281_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018281_2 "ns.common.floatbitstoint.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018281, VkglTestCase_018281_1, VkglTestCase_018281_2);

#define VkglTestCase_018282_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_018282_2 "s.common.floatbitstoint.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018282, VkglTestCase_018282_1, VkglTestCase_018282_2);

#define VkglTestCase_018283_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018283_2 "ons.common.floatbitstoint.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018283, VkglTestCase_018283_1, VkglTestCase_018283_2);

#define VkglTestCase_018284_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018284_2 "ns.common.floatbitstoint.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018284, VkglTestCase_018284_1, VkglTestCase_018284_2);

#define VkglTestCase_018285_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018285_2 "ions.common.floatbitstoint.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018285, VkglTestCase_018285_1, VkglTestCase_018285_2);

#define VkglTestCase_018286_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018286_2 "ons.common.floatbitstoint.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018286, VkglTestCase_018286_1, VkglTestCase_018286_2);

#define VkglTestCase_018287_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018287_2 "ons.common.floatbitstoint.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018287, VkglTestCase_018287_1, VkglTestCase_018287_2);

#define VkglTestCase_018288_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018288_2 "ns.common.floatbitstoint.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018288, VkglTestCase_018288_1, VkglTestCase_018288_2);

#define VkglTestCase_018289_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018289_2 "ions.common.floatbitstoint.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018289, VkglTestCase_018289_1, VkglTestCase_018289_2);

#define VkglTestCase_018290_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018290_2 "ons.common.floatbitstoint.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018290, VkglTestCase_018290_1, VkglTestCase_018290_2);

#define VkglTestCase_018291_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018291_2 "ions.common.floatbitstoint.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018291, VkglTestCase_018291_1, VkglTestCase_018291_2);

#define VkglTestCase_018292_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018292_2 "ons.common.floatbitstoint.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018292, VkglTestCase_018292_1, VkglTestCase_018292_2);

#define VkglTestCase_018293_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018293_2 "ons.common.floatbitstoint.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018293, VkglTestCase_018293_1, VkglTestCase_018293_2);

#define VkglTestCase_018294_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018294_2 "ns.common.floatbitstoint.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018294, VkglTestCase_018294_1, VkglTestCase_018294_2);

#define VkglTestCase_018295_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018295_2 "ions.common.floatbitstoint.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018295, VkglTestCase_018295_1, VkglTestCase_018295_2);

#define VkglTestCase_018296_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018296_2 "ons.common.floatbitstoint.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018296, VkglTestCase_018296_1, VkglTestCase_018296_2);

#define VkglTestCase_018297_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018297_2 "ions.common.floatbitstoint.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018297, VkglTestCase_018297_1, VkglTestCase_018297_2);

#define VkglTestCase_018298_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018298_2 "ons.common.floatbitstoint.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018298, VkglTestCase_018298_1, VkglTestCase_018298_2);

#define VkglTestCase_018299_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018299_2 "ons.common.floatbitstoint.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018299, VkglTestCase_018299_1, VkglTestCase_018299_2);

#define VkglTestCase_018300_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018300_2 "ns.common.floatbitstoint.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018300, VkglTestCase_018300_1, VkglTestCase_018300_2);

#define VkglTestCase_018301_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018301_2 "ions.common.floatbitstoint.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018301, VkglTestCase_018301_1, VkglTestCase_018301_2);

#define VkglTestCase_018302_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018302_2 "ons.common.floatbitstoint.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018302, VkglTestCase_018302_1, VkglTestCase_018302_2);
