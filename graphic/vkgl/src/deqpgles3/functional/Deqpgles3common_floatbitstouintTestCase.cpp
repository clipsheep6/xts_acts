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

#define VkglTestCase_018303_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018303_2 "ons.common.floatbitstouint.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018303, VkglTestCase_018303_1, VkglTestCase_018303_2);

#define VkglTestCase_018304_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018304_2 "ns.common.floatbitstouint.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018304, VkglTestCase_018304_1, VkglTestCase_018304_2);

#define VkglTestCase_018305_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018305_2 "ns.common.floatbitstouint.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018305, VkglTestCase_018305_1, VkglTestCase_018305_2);

#define VkglTestCase_018306_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_018306_2 "s.common.floatbitstouint.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018306, VkglTestCase_018306_1, VkglTestCase_018306_2);

#define VkglTestCase_018307_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018307_2 "ons.common.floatbitstouint.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018307, VkglTestCase_018307_1, VkglTestCase_018307_2);

#define VkglTestCase_018308_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018308_2 "ns.common.floatbitstouint.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018308, VkglTestCase_018308_1, VkglTestCase_018308_2);

#define VkglTestCase_018309_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018309_2 "ions.common.floatbitstouint.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018309, VkglTestCase_018309_1, VkglTestCase_018309_2);

#define VkglTestCase_018310_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018310_2 "ons.common.floatbitstouint.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018310, VkglTestCase_018310_1, VkglTestCase_018310_2);

#define VkglTestCase_018311_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018311_2 "ns.common.floatbitstouint.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018311, VkglTestCase_018311_1, VkglTestCase_018311_2);

#define VkglTestCase_018312_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_018312_2 "s.common.floatbitstouint.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018312, VkglTestCase_018312_1, VkglTestCase_018312_2);

#define VkglTestCase_018313_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018313_2 "ons.common.floatbitstouint.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018313, VkglTestCase_018313_1, VkglTestCase_018313_2);

#define VkglTestCase_018314_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018314_2 "ns.common.floatbitstouint.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018314, VkglTestCase_018314_1, VkglTestCase_018314_2);

#define VkglTestCase_018315_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018315_2 "ions.common.floatbitstouint.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018315, VkglTestCase_018315_1, VkglTestCase_018315_2);

#define VkglTestCase_018316_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018316_2 "ons.common.floatbitstouint.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018316, VkglTestCase_018316_1, VkglTestCase_018316_2);

#define VkglTestCase_018317_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018317_2 "ns.common.floatbitstouint.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018317, VkglTestCase_018317_1, VkglTestCase_018317_2);

#define VkglTestCase_018318_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_018318_2 "s.common.floatbitstouint.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018318, VkglTestCase_018318_1, VkglTestCase_018318_2);

#define VkglTestCase_018319_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018319_2 "ons.common.floatbitstouint.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018319, VkglTestCase_018319_1, VkglTestCase_018319_2);

#define VkglTestCase_018320_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018320_2 "ns.common.floatbitstouint.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018320, VkglTestCase_018320_1, VkglTestCase_018320_2);

#define VkglTestCase_018321_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018321_2 "ions.common.floatbitstouint.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018321, VkglTestCase_018321_1, VkglTestCase_018321_2);

#define VkglTestCase_018322_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018322_2 "ons.common.floatbitstouint.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018322, VkglTestCase_018322_1, VkglTestCase_018322_2);

#define VkglTestCase_018323_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018323_2 "ns.common.floatbitstouint.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018323, VkglTestCase_018323_1, VkglTestCase_018323_2);

#define VkglTestCase_018324_1 "dEQP-GLES3.functional.shaders.builtin_function"
#define VkglTestCase_018324_2 "s.common.floatbitstouint.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018324, VkglTestCase_018324_1, VkglTestCase_018324_2);

#define VkglTestCase_018325_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018325_2 "ons.common.floatbitstouint.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018325, VkglTestCase_018325_1, VkglTestCase_018325_2);

#define VkglTestCase_018326_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018326_2 "ns.common.floatbitstouint.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018326, VkglTestCase_018326_1, VkglTestCase_018326_2);
