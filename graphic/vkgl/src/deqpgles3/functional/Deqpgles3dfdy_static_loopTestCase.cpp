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

#define VkglTestCase_017611_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017611_2 "vate.dfdy.static_loop.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017611, VkglTestCase_017611_1, VkglTestCase_017611_2);

#define VkglTestCase_017612_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017612_2 "ivate.dfdy.static_loop.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017612, VkglTestCase_017612_1, VkglTestCase_017612_2);

#define VkglTestCase_017613_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017613_2 "vate.dfdy.static_loop.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017613, VkglTestCase_017613_1, VkglTestCase_017613_2);

#define VkglTestCase_017614_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017614_2 "ivate.dfdy.static_loop.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017614, VkglTestCase_017614_1, VkglTestCase_017614_2);

#define VkglTestCase_017615_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017615_2 "vate.dfdy.static_loop.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017615, VkglTestCase_017615_1, VkglTestCase_017615_2);

#define VkglTestCase_017616_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017616_2 "ivate.dfdy.static_loop.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017616, VkglTestCase_017616_1, VkglTestCase_017616_2);

#define VkglTestCase_017617_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017617_2 "ivate.dfdy.static_loop.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017617, VkglTestCase_017617_1, VkglTestCase_017617_2);
