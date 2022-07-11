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

#define VkglTestCase_017411_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_017411_2 ".derivate.dfdx.constant.float"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017411, VkglTestCase_017411_1, VkglTestCase_017411_2);

#define VkglTestCase_017412_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_017412_2 "s.derivate.dfdx.constant.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017412, VkglTestCase_017412_1, VkglTestCase_017412_2);

#define VkglTestCase_017413_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_017413_2 "s.derivate.dfdx.constant.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017413, VkglTestCase_017413_1, VkglTestCase_017413_2);

#define VkglTestCase_017414_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_017414_2 "s.derivate.dfdx.constant.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017414, VkglTestCase_017414_1, VkglTestCase_017414_2);
