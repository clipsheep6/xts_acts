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

#define VkglTestCase_038494_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038494_2 "ute_location.bind_hole.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038494, VkglTestCase_038494_1, VkglTestCase_038494_2);

#define VkglTestCase_038495_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038495_2 "bute_location.bind_hole.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038495, VkglTestCase_038495_1, VkglTestCase_038495_2);

#define VkglTestCase_038496_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038496_2 "bute_location.bind_hole.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038496, VkglTestCase_038496_1, VkglTestCase_038496_2);

#define VkglTestCase_038497_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038497_2 "bute_location.bind_hole.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038497, VkglTestCase_038497_1, VkglTestCase_038497_2);

#define VkglTestCase_038498_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038498_2 "bute_location.bind_hole.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038498, VkglTestCase_038498_1, VkglTestCase_038498_2);

#define VkglTestCase_038499_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038499_2 "bute_location.bind_hole.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038499, VkglTestCase_038499_1, VkglTestCase_038499_2);

#define VkglTestCase_038500_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038500_2 "bute_location.bind_hole.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038500, VkglTestCase_038500_1, VkglTestCase_038500_2);

#define VkglTestCase_038501_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038501_2 "bute_location.bind_hole.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038501, VkglTestCase_038501_1, VkglTestCase_038501_2);

#define VkglTestCase_038502_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038502_2 "ute_location.bind_hole.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038502, VkglTestCase_038502_1, VkglTestCase_038502_2);

#define VkglTestCase_038503_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038503_2 "ute_location.bind_hole.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038503, VkglTestCase_038503_1, VkglTestCase_038503_2);

#define VkglTestCase_038504_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038504_2 "ute_location.bind_hole.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038504, VkglTestCase_038504_1, VkglTestCase_038504_2);

#define VkglTestCase_038505_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038505_2 "bute_location.bind_hole.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038505, VkglTestCase_038505_1, VkglTestCase_038505_2);

#define VkglTestCase_038506_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038506_2 "ute_location.bind_hole.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038506, VkglTestCase_038506_1, VkglTestCase_038506_2);

#define VkglTestCase_038507_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038507_2 "ute_location.bind_hole.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038507, VkglTestCase_038507_1, VkglTestCase_038507_2);

#define VkglTestCase_038508_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038508_2 "ute_location.bind_hole.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038508, VkglTestCase_038508_1, VkglTestCase_038508_2);

#define VkglTestCase_038509_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038509_2 "ute_location.bind_hole.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038509, VkglTestCase_038509_1, VkglTestCase_038509_2);

#define VkglTestCase_038510_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038510_2 "ute_location.bind_hole.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038510, VkglTestCase_038510_1, VkglTestCase_038510_2);

#define VkglTestCase_038511_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038511_2 "ute_location.bind_hole.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038511, VkglTestCase_038511_1, VkglTestCase_038511_2);

#define VkglTestCase_038512_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038512_2 "ute_location.bind_hole.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038512, VkglTestCase_038512_1, VkglTestCase_038512_2);

#define VkglTestCase_038513_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038513_2 "ute_location.bind_hole.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038513, VkglTestCase_038513_1, VkglTestCase_038513_2);

#define VkglTestCase_038514_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038514_2 "ute_location.bind_hole.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038514, VkglTestCase_038514_1, VkglTestCase_038514_2);

#define VkglTestCase_038515_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038515_2 "ute_location.bind_hole.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038515, VkglTestCase_038515_1, VkglTestCase_038515_2);

#define VkglTestCase_038516_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038516_2 "ute_location.bind_hole.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038516, VkglTestCase_038516_1, VkglTestCase_038516_2);

#define VkglTestCase_038517_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038517_2 "ute_location.bind_hole.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038517, VkglTestCase_038517_1, VkglTestCase_038517_2);
