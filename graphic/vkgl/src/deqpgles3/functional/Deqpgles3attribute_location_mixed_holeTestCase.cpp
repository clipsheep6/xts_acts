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

#define VkglTestCase_038648_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038648_2 "ute_location.mixed_hole.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038648, VkglTestCase_038648_1, VkglTestCase_038648_2);

#define VkglTestCase_038649_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038649_2 "ute_location.mixed_hole.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038649, VkglTestCase_038649_1, VkglTestCase_038649_2);

#define VkglTestCase_038650_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038650_2 "ute_location.mixed_hole.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038650, VkglTestCase_038650_1, VkglTestCase_038650_2);

#define VkglTestCase_038651_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038651_2 "ute_location.mixed_hole.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038651, VkglTestCase_038651_1, VkglTestCase_038651_2);

#define VkglTestCase_038652_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038652_2 "ute_location.mixed_hole.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038652, VkglTestCase_038652_1, VkglTestCase_038652_2);

#define VkglTestCase_038653_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038653_2 "ute_location.mixed_hole.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038653, VkglTestCase_038653_1, VkglTestCase_038653_2);

#define VkglTestCase_038654_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038654_2 "ute_location.mixed_hole.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038654, VkglTestCase_038654_1, VkglTestCase_038654_2);

#define VkglTestCase_038655_1 "dEQP-GLES3.functional.attri"
#define VkglTestCase_038655_2 "bute_location.mixed_hole.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038655, VkglTestCase_038655_1, VkglTestCase_038655_2);

#define VkglTestCase_038656_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038656_2 "ute_location.mixed_hole.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038656, VkglTestCase_038656_1, VkglTestCase_038656_2);

#define VkglTestCase_038657_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038657_2 "ute_location.mixed_hole.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038657, VkglTestCase_038657_1, VkglTestCase_038657_2);

#define VkglTestCase_038658_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038658_2 "ute_location.mixed_hole.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038658, VkglTestCase_038658_1, VkglTestCase_038658_2);

#define VkglTestCase_038659_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038659_2 "ute_location.mixed_hole.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038659, VkglTestCase_038659_1, VkglTestCase_038659_2);

#define VkglTestCase_038660_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038660_2 "ute_location.mixed_hole.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038660, VkglTestCase_038660_1, VkglTestCase_038660_2);

#define VkglTestCase_038661_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038661_2 "ute_location.mixed_hole.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038661, VkglTestCase_038661_1, VkglTestCase_038661_2);

#define VkglTestCase_038662_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038662_2 "ute_location.mixed_hole.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038662, VkglTestCase_038662_1, VkglTestCase_038662_2);

#define VkglTestCase_038663_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038663_2 "te_location.mixed_hole.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038663, VkglTestCase_038663_1, VkglTestCase_038663_2);

#define VkglTestCase_038664_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038664_2 "te_location.mixed_hole.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038664, VkglTestCase_038664_1, VkglTestCase_038664_2);

#define VkglTestCase_038665_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038665_2 "te_location.mixed_hole.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038665, VkglTestCase_038665_1, VkglTestCase_038665_2);

#define VkglTestCase_038666_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038666_2 "te_location.mixed_hole.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038666, VkglTestCase_038666_1, VkglTestCase_038666_2);

#define VkglTestCase_038667_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038667_2 "te_location.mixed_hole.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038667, VkglTestCase_038667_1, VkglTestCase_038667_2);

#define VkglTestCase_038668_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038668_2 "te_location.mixed_hole.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038668, VkglTestCase_038668_1, VkglTestCase_038668_2);

#define VkglTestCase_038669_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038669_2 "te_location.mixed_hole.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038669, VkglTestCase_038669_1, VkglTestCase_038669_2);

#define VkglTestCase_038670_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038670_2 "te_location.mixed_hole.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038670, VkglTestCase_038670_1, VkglTestCase_038670_2);

#define VkglTestCase_038671_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038671_2 "te_location.mixed_hole.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038671, VkglTestCase_038671_1, VkglTestCase_038671_2);
