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

#define VkglTestCase_013969_1 "dEQP-GLES2.functional.attribute"
#define VkglTestCase_013969_2 "_location.bind_relink_hole.float"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013969, VkglTestCase_013969_1, VkglTestCase_013969_2);

#define VkglTestCase_013970_1 "dEQP-GLES2.functional.attribute"
#define VkglTestCase_013970_2 "_location.bind_relink_hole.vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013970, VkglTestCase_013970_1, VkglTestCase_013970_2);

#define VkglTestCase_013971_1 "dEQP-GLES2.functional.attribute"
#define VkglTestCase_013971_2 "_location.bind_relink_hole.vec3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013971, VkglTestCase_013971_1, VkglTestCase_013971_2);

#define VkglTestCase_013972_1 "dEQP-GLES2.functional.attribute"
#define VkglTestCase_013972_2 "_location.bind_relink_hole.vec4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013972, VkglTestCase_013972_1, VkglTestCase_013972_2);

#define VkglTestCase_013973_1 "dEQP-GLES2.functional.attribute"
#define VkglTestCase_013973_2 "_location.bind_relink_hole.mat2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013973, VkglTestCase_013973_1, VkglTestCase_013973_2);

#define VkglTestCase_013974_1 "dEQP-GLES2.functional.attribute"
#define VkglTestCase_013974_2 "_location.bind_relink_hole.mat3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013974, VkglTestCase_013974_1, VkglTestCase_013974_2);

#define VkglTestCase_013975_1 "dEQP-GLES2.functional.attribute"
#define VkglTestCase_013975_2 "_location.bind_relink_hole.mat4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013975, VkglTestCase_013975_1, VkglTestCase_013975_2);
