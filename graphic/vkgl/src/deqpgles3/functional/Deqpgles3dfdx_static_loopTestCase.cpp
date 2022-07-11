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

#define VkglTestCase_017439_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017439_2 "vate.dfdx.static_loop.float_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017439, VkglTestCase_017439_1, VkglTestCase_017439_2);

#define VkglTestCase_017440_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017440_2 "ivate.dfdx.static_loop.float_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017440, VkglTestCase_017440_1, VkglTestCase_017440_2);

#define VkglTestCase_017441_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017441_2 "vate.dfdx.static_loop.vec2_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017441, VkglTestCase_017441_1, VkglTestCase_017441_2);

#define VkglTestCase_017442_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017442_2 "ivate.dfdx.static_loop.vec2_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017442, VkglTestCase_017442_1, VkglTestCase_017442_2);

#define VkglTestCase_017443_1 "dEQP-GLES3.functional.shaders.deri"
#define VkglTestCase_017443_2 "vate.dfdx.static_loop.vec3_mediump"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017443, VkglTestCase_017443_1, VkglTestCase_017443_2);

#define VkglTestCase_017444_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017444_2 "ivate.dfdx.static_loop.vec3_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017444, VkglTestCase_017444_1, VkglTestCase_017444_2);

#define VkglTestCase_017445_1 "dEQP-GLES3.functional.shaders.der"
#define VkglTestCase_017445_2 "ivate.dfdx.static_loop.vec4_highp"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017445, VkglTestCase_017445_1, VkglTestCase_017445_2);
