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

#define VkglTestCase_038523_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038523_2 "ibute_location.layout.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038523, VkglTestCase_038523_1, VkglTestCase_038523_2);

#define VkglTestCase_038524_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038524_2 "ibute_location.layout.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038524, VkglTestCase_038524_1, VkglTestCase_038524_2);

#define VkglTestCase_038525_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038525_2 "ibute_location.layout.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038525, VkglTestCase_038525_1, VkglTestCase_038525_2);

#define VkglTestCase_038526_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038526_2 "ibute_location.layout.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038526, VkglTestCase_038526_1, VkglTestCase_038526_2);

#define VkglTestCase_038527_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038527_2 "ibute_location.layout.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038527, VkglTestCase_038527_1, VkglTestCase_038527_2);

#define VkglTestCase_038528_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038528_2 "ibute_location.layout.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038528, VkglTestCase_038528_1, VkglTestCase_038528_2);

#define VkglTestCase_038529_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038529_2 "ibute_location.layout.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038529, VkglTestCase_038529_1, VkglTestCase_038529_2);

#define VkglTestCase_038530_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038530_2 "ribute_location.layout.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038530, VkglTestCase_038530_1, VkglTestCase_038530_2);

#define VkglTestCase_038531_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038531_2 "ibute_location.layout.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038531, VkglTestCase_038531_1, VkglTestCase_038531_2);

#define VkglTestCase_038532_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038532_2 "ibute_location.layout.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038532, VkglTestCase_038532_1, VkglTestCase_038532_2);

#define VkglTestCase_038533_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038533_2 "ibute_location.layout.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038533, VkglTestCase_038533_1, VkglTestCase_038533_2);

#define VkglTestCase_038534_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038534_2 "ibute_location.layout.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038534, VkglTestCase_038534_1, VkglTestCase_038534_2);

#define VkglTestCase_038535_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038535_2 "ibute_location.layout.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038535, VkglTestCase_038535_1, VkglTestCase_038535_2);

#define VkglTestCase_038536_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038536_2 "ibute_location.layout.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038536, VkglTestCase_038536_1, VkglTestCase_038536_2);

#define VkglTestCase_038537_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038537_2 "ibute_location.layout.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038537, VkglTestCase_038537_1, VkglTestCase_038537_2);

#define VkglTestCase_038538_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038538_2 "bute_location.layout.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038538, VkglTestCase_038538_1, VkglTestCase_038538_2);

#define VkglTestCase_038539_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038539_2 "bute_location.layout.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038539, VkglTestCase_038539_1, VkglTestCase_038539_2);

#define VkglTestCase_038540_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038540_2 "bute_location.layout.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038540, VkglTestCase_038540_1, VkglTestCase_038540_2);

#define VkglTestCase_038541_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038541_2 "bute_location.layout.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038541, VkglTestCase_038541_1, VkglTestCase_038541_2);

#define VkglTestCase_038542_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038542_2 "bute_location.layout.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038542, VkglTestCase_038542_1, VkglTestCase_038542_2);

#define VkglTestCase_038543_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038543_2 "bute_location.layout.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038543, VkglTestCase_038543_1, VkglTestCase_038543_2);

#define VkglTestCase_038544_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038544_2 "bute_location.layout.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038544, VkglTestCase_038544_1, VkglTestCase_038544_2);

#define VkglTestCase_038545_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038545_2 "bute_location.layout.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038545, VkglTestCase_038545_1, VkglTestCase_038545_2);

#define VkglTestCase_038546_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038546_2 "bute_location.layout.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038546, VkglTestCase_038546_1, VkglTestCase_038546_2);
