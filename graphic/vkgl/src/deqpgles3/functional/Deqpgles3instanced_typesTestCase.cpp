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
#include "../ActsDeqpgles30041TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_040464_1 "dEQP-GLES3.functional"
#define VkglTestCase_040464_2 ".instanced.types.float"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040464, VkglTestCase_040464_1, VkglTestCase_040464_2);

#define VkglTestCase_040465_1 "dEQP-GLES3.functional"
#define VkglTestCase_040465_2 ".instanced.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040465, VkglTestCase_040465_1, VkglTestCase_040465_2);

#define VkglTestCase_040466_1 "dEQP-GLES3.functional"
#define VkglTestCase_040466_2 ".instanced.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040466, VkglTestCase_040466_1, VkglTestCase_040466_2);

#define VkglTestCase_040467_1 "dEQP-GLES3.functional"
#define VkglTestCase_040467_2 ".instanced.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040467, VkglTestCase_040467_1, VkglTestCase_040467_2);

#define VkglTestCase_040468_1 "dEQP-GLES3.functional"
#define VkglTestCase_040468_2 ".instanced.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040468, VkglTestCase_040468_1, VkglTestCase_040468_2);

#define VkglTestCase_040469_1 "dEQP-GLES3.functional."
#define VkglTestCase_040469_2 "instanced.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040469, VkglTestCase_040469_1, VkglTestCase_040469_2);

#define VkglTestCase_040470_1 "dEQP-GLES3.functional."
#define VkglTestCase_040470_2 "instanced.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040470, VkglTestCase_040470_1, VkglTestCase_040470_2);

#define VkglTestCase_040471_1 "dEQP-GLES3.functional."
#define VkglTestCase_040471_2 "instanced.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040471, VkglTestCase_040471_1, VkglTestCase_040471_2);

#define VkglTestCase_040472_1 "dEQP-GLES3.functional"
#define VkglTestCase_040472_2 ".instanced.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040472, VkglTestCase_040472_1, VkglTestCase_040472_2);

#define VkglTestCase_040473_1 "dEQP-GLES3.functional."
#define VkglTestCase_040473_2 "instanced.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040473, VkglTestCase_040473_1, VkglTestCase_040473_2);

#define VkglTestCase_040474_1 "dEQP-GLES3.functional."
#define VkglTestCase_040474_2 "instanced.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040474, VkglTestCase_040474_1, VkglTestCase_040474_2);

#define VkglTestCase_040475_1 "dEQP-GLES3.functional."
#define VkglTestCase_040475_2 "instanced.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040475, VkglTestCase_040475_1, VkglTestCase_040475_2);

#define VkglTestCase_040476_1 "dEQP-GLES3.functional"
#define VkglTestCase_040476_2 ".instanced.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040476, VkglTestCase_040476_1, VkglTestCase_040476_2);

#define VkglTestCase_040477_1 "dEQP-GLES3.functiona"
#define VkglTestCase_040477_2 "l.instanced.types.int"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040477, VkglTestCase_040477_1, VkglTestCase_040477_2);

#define VkglTestCase_040478_1 "dEQP-GLES3.functional"
#define VkglTestCase_040478_2 ".instanced.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040478, VkglTestCase_040478_1, VkglTestCase_040478_2);

#define VkglTestCase_040479_1 "dEQP-GLES3.functional"
#define VkglTestCase_040479_2 ".instanced.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040479, VkglTestCase_040479_1, VkglTestCase_040479_2);

#define VkglTestCase_040480_1 "dEQP-GLES3.functional"
#define VkglTestCase_040480_2 ".instanced.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040480, VkglTestCase_040480_1, VkglTestCase_040480_2);

#define VkglTestCase_040481_1 "dEQP-GLES3.functional"
#define VkglTestCase_040481_2 ".instanced.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040481, VkglTestCase_040481_1, VkglTestCase_040481_2);

#define VkglTestCase_040482_1 "dEQP-GLES3.functional"
#define VkglTestCase_040482_2 ".instanced.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040482, VkglTestCase_040482_1, VkglTestCase_040482_2);

#define VkglTestCase_040483_1 "dEQP-GLES3.functional"
#define VkglTestCase_040483_2 ".instanced.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040483, VkglTestCase_040483_1, VkglTestCase_040483_2);

#define VkglTestCase_040484_1 "dEQP-GLES3.functional"
#define VkglTestCase_040484_2 ".instanced.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040484, VkglTestCase_040484_1, VkglTestCase_040484_2);
