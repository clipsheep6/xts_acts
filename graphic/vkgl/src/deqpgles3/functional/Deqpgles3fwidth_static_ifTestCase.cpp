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
#include "../ActsDeqpgles30018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017787_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017787_2 "vate.fwidth.static_if.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017787, VkglTestCase_017787_1, VkglTestCase_017787_2);

#define VkglTestCase_017788_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017788_2 "ivate.fwidth.static_if.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017788, VkglTestCase_017788_1, VkglTestCase_017788_2);

#define VkglTestCase_017789_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017789_2 "vate.fwidth.static_if.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017789, VkglTestCase_017789_1, VkglTestCase_017789_2);

#define VkglTestCase_017790_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017790_2 "ivate.fwidth.static_if.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017790, VkglTestCase_017790_1, VkglTestCase_017790_2);

#define VkglTestCase_017791_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017791_2 "vate.fwidth.static_if.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017791, VkglTestCase_017791_1, VkglTestCase_017791_2);

#define VkglTestCase_017792_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017792_2 "ivate.fwidth.static_if.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017792, VkglTestCase_017792_1, VkglTestCase_017792_2);

#define VkglTestCase_017793_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017793_2 "vate.fwidth.static_if.vec4_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017793, VkglTestCase_017793_1, VkglTestCase_017793_2);

#define VkglTestCase_017794_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017794_2 "ivate.fwidth.static_if.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017794, VkglTestCase_017794_1, VkglTestCase_017794_2);
