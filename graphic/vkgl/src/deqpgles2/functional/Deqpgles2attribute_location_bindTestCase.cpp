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

#define VkglTestCase_013926_1 "dEQP-GLES2.functional.att"
#define VkglTestCase_013926_2 "ribute_location.bind.float"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013926, VkglTestCase_013926_1, VkglTestCase_013926_2);

#define VkglTestCase_013927_1 "dEQP-GLES2.functional.att"
#define VkglTestCase_013927_2 "ribute_location.bind.vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013927, VkglTestCase_013927_1, VkglTestCase_013927_2);

#define VkglTestCase_013928_1 "dEQP-GLES2.functional.att"
#define VkglTestCase_013928_2 "ribute_location.bind.vec3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013928, VkglTestCase_013928_1, VkglTestCase_013928_2);

#define VkglTestCase_013929_1 "dEQP-GLES2.functional.att"
#define VkglTestCase_013929_2 "ribute_location.bind.vec4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013929, VkglTestCase_013929_1, VkglTestCase_013929_2);

#define VkglTestCase_013930_1 "dEQP-GLES2.functional.att"
#define VkglTestCase_013930_2 "ribute_location.bind.mat2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013930, VkglTestCase_013930_1, VkglTestCase_013930_2);

#define VkglTestCase_013931_1 "dEQP-GLES2.functional.att"
#define VkglTestCase_013931_2 "ribute_location.bind.mat3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013931, VkglTestCase_013931_1, VkglTestCase_013931_2);

#define VkglTestCase_013932_1 "dEQP-GLES2.functional.att"
#define VkglTestCase_013932_2 "ribute_location.bind.mat4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013932, VkglTestCase_013932_1, VkglTestCase_013932_2);
