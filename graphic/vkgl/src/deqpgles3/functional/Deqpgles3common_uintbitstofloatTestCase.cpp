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

#define VkglTestCase_018333_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018333_2 "ons.common.uintbitstofloat.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018333, VkglTestCase_018333_1, VkglTestCase_018333_2);

#define VkglTestCase_018334_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018334_2 "ns.common.uintbitstofloat.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018334, VkglTestCase_018334_1, VkglTestCase_018334_2);

#define VkglTestCase_018335_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018335_2 "ons.common.uintbitstofloat.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018335, VkglTestCase_018335_1, VkglTestCase_018335_2);

#define VkglTestCase_018336_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018336_2 "ns.common.uintbitstofloat.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018336, VkglTestCase_018336_1, VkglTestCase_018336_2);

#define VkglTestCase_018337_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018337_2 "ons.common.uintbitstofloat.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018337, VkglTestCase_018337_1, VkglTestCase_018337_2);

#define VkglTestCase_018338_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018338_2 "ns.common.uintbitstofloat.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018338, VkglTestCase_018338_1, VkglTestCase_018338_2);
