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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013933_1 "dEQP-GLES2.functional.attribute_l"
#define VkglTestCase_013933_2 "ocation.bind_max_attributes.float"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013933, VkglTestCase_013933_1, VkglTestCase_013933_2);

#define VkglTestCase_013934_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013934_2 "location.bind_max_attributes.vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013934, VkglTestCase_013934_1, VkglTestCase_013934_2);

#define VkglTestCase_013935_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013935_2 "location.bind_max_attributes.vec3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013935, VkglTestCase_013935_1, VkglTestCase_013935_2);

#define VkglTestCase_013936_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013936_2 "location.bind_max_attributes.vec4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013936, VkglTestCase_013936_1, VkglTestCase_013936_2);

#define VkglTestCase_013937_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013937_2 "location.bind_max_attributes.mat2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013937, VkglTestCase_013937_1, VkglTestCase_013937_2);

#define VkglTestCase_013938_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013938_2 "location.bind_max_attributes.mat3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013938, VkglTestCase_013938_1, VkglTestCase_013938_2);

#define VkglTestCase_013939_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013939_2 "location.bind_max_attributes.mat4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013939, VkglTestCase_013939_1, VkglTestCase_013939_2);
