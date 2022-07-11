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

#define VkglTestCase_038595_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038595_2 "ibute_location.mixed.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038595, VkglTestCase_038595_1, VkglTestCase_038595_2);

#define VkglTestCase_038596_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038596_2 "ribute_location.mixed.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038596, VkglTestCase_038596_1, VkglTestCase_038596_2);

#define VkglTestCase_038597_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038597_2 "ribute_location.mixed.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038597, VkglTestCase_038597_1, VkglTestCase_038597_2);

#define VkglTestCase_038598_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038598_2 "ribute_location.mixed.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038598, VkglTestCase_038598_1, VkglTestCase_038598_2);

#define VkglTestCase_038599_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038599_2 "ribute_location.mixed.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038599, VkglTestCase_038599_1, VkglTestCase_038599_2);

#define VkglTestCase_038600_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038600_2 "ribute_location.mixed.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038600, VkglTestCase_038600_1, VkglTestCase_038600_2);

#define VkglTestCase_038601_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038601_2 "ribute_location.mixed.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038601, VkglTestCase_038601_1, VkglTestCase_038601_2);

#define VkglTestCase_038602_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038602_2 "ribute_location.mixed.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038602, VkglTestCase_038602_1, VkglTestCase_038602_2);

#define VkglTestCase_038603_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038603_2 "ibute_location.mixed.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038603, VkglTestCase_038603_1, VkglTestCase_038603_2);

#define VkglTestCase_038604_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038604_2 "ibute_location.mixed.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038604, VkglTestCase_038604_1, VkglTestCase_038604_2);

#define VkglTestCase_038605_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038605_2 "ibute_location.mixed.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038605, VkglTestCase_038605_1, VkglTestCase_038605_2);

#define VkglTestCase_038606_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038606_2 "ribute_location.mixed.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038606, VkglTestCase_038606_1, VkglTestCase_038606_2);

#define VkglTestCase_038607_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038607_2 "ibute_location.mixed.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038607, VkglTestCase_038607_1, VkglTestCase_038607_2);

#define VkglTestCase_038608_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038608_2 "ibute_location.mixed.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038608, VkglTestCase_038608_1, VkglTestCase_038608_2);

#define VkglTestCase_038609_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038609_2 "ibute_location.mixed.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038609, VkglTestCase_038609_1, VkglTestCase_038609_2);

#define VkglTestCase_038610_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038610_2 "ibute_location.mixed.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038610, VkglTestCase_038610_1, VkglTestCase_038610_2);

#define VkglTestCase_038611_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038611_2 "ibute_location.mixed.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038611, VkglTestCase_038611_1, VkglTestCase_038611_2);

#define VkglTestCase_038612_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038612_2 "ibute_location.mixed.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038612, VkglTestCase_038612_1, VkglTestCase_038612_2);

#define VkglTestCase_038613_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038613_2 "ibute_location.mixed.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038613, VkglTestCase_038613_1, VkglTestCase_038613_2);

#define VkglTestCase_038614_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038614_2 "ibute_location.mixed.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038614, VkglTestCase_038614_1, VkglTestCase_038614_2);

#define VkglTestCase_038615_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038615_2 "ibute_location.mixed.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038615, VkglTestCase_038615_1, VkglTestCase_038615_2);

#define VkglTestCase_038616_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038616_2 "ibute_location.mixed.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038616, VkglTestCase_038616_1, VkglTestCase_038616_2);

#define VkglTestCase_038617_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038617_2 "ibute_location.mixed.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038617, VkglTestCase_038617_1, VkglTestCase_038617_2);

#define VkglTestCase_038618_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038618_2 "ibute_location.mixed.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038618, VkglTestCase_038618_1, VkglTestCase_038618_2);
