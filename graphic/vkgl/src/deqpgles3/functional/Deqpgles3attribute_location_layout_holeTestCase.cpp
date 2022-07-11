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

#define VkglTestCase_038571_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038571_2 "te_location.layout_hole.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038571, VkglTestCase_038571_1, VkglTestCase_038571_2);

#define VkglTestCase_038572_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038572_2 "ute_location.layout_hole.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038572, VkglTestCase_038572_1, VkglTestCase_038572_2);

#define VkglTestCase_038573_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038573_2 "ute_location.layout_hole.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038573, VkglTestCase_038573_1, VkglTestCase_038573_2);

#define VkglTestCase_038574_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038574_2 "ute_location.layout_hole.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038574, VkglTestCase_038574_1, VkglTestCase_038574_2);

#define VkglTestCase_038575_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038575_2 "ute_location.layout_hole.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038575, VkglTestCase_038575_1, VkglTestCase_038575_2);

#define VkglTestCase_038576_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038576_2 "ute_location.layout_hole.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038576, VkglTestCase_038576_1, VkglTestCase_038576_2);

#define VkglTestCase_038577_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038577_2 "ute_location.layout_hole.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038577, VkglTestCase_038577_1, VkglTestCase_038577_2);

#define VkglTestCase_038578_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038578_2 "ute_location.layout_hole.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038578, VkglTestCase_038578_1, VkglTestCase_038578_2);

#define VkglTestCase_038579_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038579_2 "te_location.layout_hole.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038579, VkglTestCase_038579_1, VkglTestCase_038579_2);

#define VkglTestCase_038580_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038580_2 "te_location.layout_hole.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038580, VkglTestCase_038580_1, VkglTestCase_038580_2);

#define VkglTestCase_038581_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038581_2 "te_location.layout_hole.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038581, VkglTestCase_038581_1, VkglTestCase_038581_2);

#define VkglTestCase_038582_1 "dEQP-GLES3.functional.attrib"
#define VkglTestCase_038582_2 "ute_location.layout_hole.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038582, VkglTestCase_038582_1, VkglTestCase_038582_2);

#define VkglTestCase_038583_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038583_2 "te_location.layout_hole.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038583, VkglTestCase_038583_1, VkglTestCase_038583_2);

#define VkglTestCase_038584_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038584_2 "te_location.layout_hole.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038584, VkglTestCase_038584_1, VkglTestCase_038584_2);

#define VkglTestCase_038585_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038585_2 "te_location.layout_hole.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038585, VkglTestCase_038585_1, VkglTestCase_038585_2);

#define VkglTestCase_038586_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038586_2 "te_location.layout_hole.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038586, VkglTestCase_038586_1, VkglTestCase_038586_2);

#define VkglTestCase_038587_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038587_2 "te_location.layout_hole.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038587, VkglTestCase_038587_1, VkglTestCase_038587_2);

#define VkglTestCase_038588_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038588_2 "te_location.layout_hole.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038588, VkglTestCase_038588_1, VkglTestCase_038588_2);

#define VkglTestCase_038589_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038589_2 "te_location.layout_hole.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038589, VkglTestCase_038589_1, VkglTestCase_038589_2);

#define VkglTestCase_038590_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038590_2 "te_location.layout_hole.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038590, VkglTestCase_038590_1, VkglTestCase_038590_2);

#define VkglTestCase_038591_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038591_2 "te_location.layout_hole.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038591, VkglTestCase_038591_1, VkglTestCase_038591_2);

#define VkglTestCase_038592_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038592_2 "te_location.layout_hole.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038592, VkglTestCase_038592_1, VkglTestCase_038592_2);

#define VkglTestCase_038593_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038593_2 "te_location.layout_hole.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038593, VkglTestCase_038593_1, VkglTestCase_038593_2);

#define VkglTestCase_038594_1 "dEQP-GLES3.functional.attribu"
#define VkglTestCase_038594_2 "te_location.layout_hole.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038594, VkglTestCase_038594_1, VkglTestCase_038594_2);
