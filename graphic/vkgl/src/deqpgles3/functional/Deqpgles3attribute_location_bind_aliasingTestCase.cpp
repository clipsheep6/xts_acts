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
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038470_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038470_2 "location.bind_aliasing.cond_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038470, VkglTestCase_038470_1, VkglTestCase_038470_2);

#define VkglTestCase_038471_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038471_2 "cation.bind_aliasing.max_cond_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038471, VkglTestCase_038471_1, VkglTestCase_038471_2);

#define VkglTestCase_038472_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038472_2 "tion.bind_aliasing.max_inactive_float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038472, VkglTestCase_038472_1, VkglTestCase_038472_2);

#define VkglTestCase_038473_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038473_2 "location.bind_aliasing.cond_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038473, VkglTestCase_038473_1, VkglTestCase_038473_2);

#define VkglTestCase_038474_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038474_2 "cation.bind_aliasing.max_cond_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038474, VkglTestCase_038474_1, VkglTestCase_038474_2);

#define VkglTestCase_038475_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038475_2 "tion.bind_aliasing.max_inactive_vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038475, VkglTestCase_038475_1, VkglTestCase_038475_2);

#define VkglTestCase_038476_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038476_2 "location.bind_aliasing.cond_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038476, VkglTestCase_038476_1, VkglTestCase_038476_2);

#define VkglTestCase_038477_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038477_2 "cation.bind_aliasing.max_cond_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038477, VkglTestCase_038477_1, VkglTestCase_038477_2);

#define VkglTestCase_038478_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038478_2 "tion.bind_aliasing.max_inactive_vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038478, VkglTestCase_038478_1, VkglTestCase_038478_2);

#define VkglTestCase_038479_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038479_2 "location.bind_aliasing.cond_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038479, VkglTestCase_038479_1, VkglTestCase_038479_2);

#define VkglTestCase_038480_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038480_2 "cation.bind_aliasing.max_cond_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038480, VkglTestCase_038480_1, VkglTestCase_038480_2);

#define VkglTestCase_038481_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038481_2 "tion.bind_aliasing.max_inactive_vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038481, VkglTestCase_038481_1, VkglTestCase_038481_2);

#define VkglTestCase_038482_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038482_2 "location.bind_aliasing.cond_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038482, VkglTestCase_038482_1, VkglTestCase_038482_2);

#define VkglTestCase_038483_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038483_2 "tion.bind_aliasing.cond_mat2_offset_1"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038483, VkglTestCase_038483_1, VkglTestCase_038483_2);

#define VkglTestCase_038484_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038484_2 "cation.bind_aliasing.max_cond_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038484, VkglTestCase_038484_1, VkglTestCase_038484_2);

#define VkglTestCase_038485_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038485_2 "tion.bind_aliasing.max_inactive_mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038485, VkglTestCase_038485_1, VkglTestCase_038485_2);

#define VkglTestCase_038486_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038486_2 "location.bind_aliasing.cond_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038486, VkglTestCase_038486_1, VkglTestCase_038486_2);

#define VkglTestCase_038487_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038487_2 "tion.bind_aliasing.cond_mat3_offset_1"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038487, VkglTestCase_038487_1, VkglTestCase_038487_2);

#define VkglTestCase_038488_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038488_2 "cation.bind_aliasing.max_cond_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038488, VkglTestCase_038488_1, VkglTestCase_038488_2);

#define VkglTestCase_038489_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038489_2 "tion.bind_aliasing.max_inactive_mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038489, VkglTestCase_038489_1, VkglTestCase_038489_2);

#define VkglTestCase_038490_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038490_2 "location.bind_aliasing.cond_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038490, VkglTestCase_038490_1, VkglTestCase_038490_2);

#define VkglTestCase_038491_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038491_2 "tion.bind_aliasing.cond_mat4_offset_1"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038491, VkglTestCase_038491_1, VkglTestCase_038491_2);

#define VkglTestCase_038492_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038492_2 "cation.bind_aliasing.max_cond_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038492, VkglTestCase_038492_1, VkglTestCase_038492_2);

#define VkglTestCase_038493_1 "dEQP-GLES3.functional.attribute_loca"
#define VkglTestCase_038493_2 "tion.bind_aliasing.max_inactive_mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038493, VkglTestCase_038493_1, VkglTestCase_038493_2);
