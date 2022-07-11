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

#define VkglTestCase_013940_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013940_2 "location.bind_aliasing.cond_float"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013940, VkglTestCase_013940_1, VkglTestCase_013940_2);

#define VkglTestCase_013941_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013941_2 "tion.bind_aliasing.max_inactive_float"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013941, VkglTestCase_013941_1, VkglTestCase_013941_2);

#define VkglTestCase_013942_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013942_2 "location.bind_aliasing.cond_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013942, VkglTestCase_013942_1, VkglTestCase_013942_2);

#define VkglTestCase_013943_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013943_2 "tion.bind_aliasing.max_inactive_vec2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013943, VkglTestCase_013943_1, VkglTestCase_013943_2);

#define VkglTestCase_013944_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013944_2 "location.bind_aliasing.cond_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013944, VkglTestCase_013944_1, VkglTestCase_013944_2);

#define VkglTestCase_013945_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013945_2 "tion.bind_aliasing.max_inactive_vec3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013945, VkglTestCase_013945_1, VkglTestCase_013945_2);

#define VkglTestCase_013946_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013946_2 "location.bind_aliasing.cond_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013946, VkglTestCase_013946_1, VkglTestCase_013946_2);

#define VkglTestCase_013947_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013947_2 "tion.bind_aliasing.max_inactive_vec4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013947, VkglTestCase_013947_1, VkglTestCase_013947_2);

#define VkglTestCase_013948_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013948_2 "location.bind_aliasing.cond_mat2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013948, VkglTestCase_013948_1, VkglTestCase_013948_2);

#define VkglTestCase_013949_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013949_2 "tion.bind_aliasing.cond_mat2_offset_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013949, VkglTestCase_013949_1, VkglTestCase_013949_2);

#define VkglTestCase_013950_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013950_2 "tion.bind_aliasing.max_inactive_mat2"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013950, VkglTestCase_013950_1, VkglTestCase_013950_2);

#define VkglTestCase_013951_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013951_2 "location.bind_aliasing.cond_mat3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013951, VkglTestCase_013951_1, VkglTestCase_013951_2);

#define VkglTestCase_013952_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013952_2 "tion.bind_aliasing.cond_mat3_offset_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013952, VkglTestCase_013952_1, VkglTestCase_013952_2);

#define VkglTestCase_013953_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013953_2 "tion.bind_aliasing.max_inactive_mat3"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013953, VkglTestCase_013953_1, VkglTestCase_013953_2);

#define VkglTestCase_013954_1 "dEQP-GLES2.functional.attribute_"
#define VkglTestCase_013954_2 "location.bind_aliasing.cond_mat4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013954, VkglTestCase_013954_1, VkglTestCase_013954_2);

#define VkglTestCase_013955_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013955_2 "tion.bind_aliasing.cond_mat4_offset_1"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013955, VkglTestCase_013955_1, VkglTestCase_013955_2);

#define VkglTestCase_013956_1 "dEQP-GLES2.functional.attribute_loca"
#define VkglTestCase_013956_2 "tion.bind_aliasing.max_inactive_mat4"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013956, VkglTestCase_013956_1, VkglTestCase_013956_2);
