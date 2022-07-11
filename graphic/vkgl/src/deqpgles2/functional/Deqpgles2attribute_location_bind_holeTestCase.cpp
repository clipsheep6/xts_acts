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

#define VkglTestCase_013957_1 "dEQP-GLES2.functional.attrib"
#define VkglTestCase_013957_2 "ute_location.bind_hole.float"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013957, VkglTestCase_013957_1, VkglTestCase_013957_2);

#define VkglTestCase_013958_1 "dEQP-GLES2.functional.attri"
#define VkglTestCase_013958_2 "bute_location.bind_hole.vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013958, VkglTestCase_013958_1, VkglTestCase_013958_2);

#define VkglTestCase_013959_1 "dEQP-GLES2.functional.attri"
#define VkglTestCase_013959_2 "bute_location.bind_hole.vec3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013959, VkglTestCase_013959_1, VkglTestCase_013959_2);

#define VkglTestCase_013960_1 "dEQP-GLES2.functional.attri"
#define VkglTestCase_013960_2 "bute_location.bind_hole.vec4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013960, VkglTestCase_013960_1, VkglTestCase_013960_2);

#define VkglTestCase_013961_1 "dEQP-GLES2.functional.attri"
#define VkglTestCase_013961_2 "bute_location.bind_hole.mat2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013961, VkglTestCase_013961_1, VkglTestCase_013961_2);

#define VkglTestCase_013962_1 "dEQP-GLES2.functional.attri"
#define VkglTestCase_013962_2 "bute_location.bind_hole.mat3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013962, VkglTestCase_013962_1, VkglTestCase_013962_2);

#define VkglTestCase_013963_1 "dEQP-GLES2.functional.attri"
#define VkglTestCase_013963_2 "bute_location.bind_hole.mat4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013963, VkglTestCase_013963_1, VkglTestCase_013963_2);
