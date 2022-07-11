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

#define VkglTestCase_038696_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038696_2 "location.mixed_relink_hole.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038696, VkglTestCase_038696_1, VkglTestCase_038696_2);

#define VkglTestCase_038697_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038697_2 "_location.mixed_relink_hole.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038697, VkglTestCase_038697_1, VkglTestCase_038697_2);

#define VkglTestCase_038698_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038698_2 "_location.mixed_relink_hole.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038698, VkglTestCase_038698_1, VkglTestCase_038698_2);

#define VkglTestCase_038699_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038699_2 "_location.mixed_relink_hole.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038699, VkglTestCase_038699_1, VkglTestCase_038699_2);

#define VkglTestCase_038700_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038700_2 "_location.mixed_relink_hole.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038700, VkglTestCase_038700_1, VkglTestCase_038700_2);

#define VkglTestCase_038701_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038701_2 "_location.mixed_relink_hole.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038701, VkglTestCase_038701_1, VkglTestCase_038701_2);

#define VkglTestCase_038702_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038702_2 "_location.mixed_relink_hole.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038702, VkglTestCase_038702_1, VkglTestCase_038702_2);

#define VkglTestCase_038703_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038703_2 "_location.mixed_relink_hole.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038703, VkglTestCase_038703_1, VkglTestCase_038703_2);

#define VkglTestCase_038704_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038704_2 "location.mixed_relink_hole.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038704, VkglTestCase_038704_1, VkglTestCase_038704_2);

#define VkglTestCase_038705_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038705_2 "location.mixed_relink_hole.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038705, VkglTestCase_038705_1, VkglTestCase_038705_2);

#define VkglTestCase_038706_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038706_2 "location.mixed_relink_hole.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038706, VkglTestCase_038706_1, VkglTestCase_038706_2);

#define VkglTestCase_038707_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038707_2 "_location.mixed_relink_hole.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038707, VkglTestCase_038707_1, VkglTestCase_038707_2);

#define VkglTestCase_038708_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038708_2 "location.mixed_relink_hole.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038708, VkglTestCase_038708_1, VkglTestCase_038708_2);

#define VkglTestCase_038709_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038709_2 "location.mixed_relink_hole.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038709, VkglTestCase_038709_1, VkglTestCase_038709_2);

#define VkglTestCase_038710_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038710_2 "location.mixed_relink_hole.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038710, VkglTestCase_038710_1, VkglTestCase_038710_2);

#define VkglTestCase_038711_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038711_2 "location.mixed_relink_hole.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038711, VkglTestCase_038711_1, VkglTestCase_038711_2);

#define VkglTestCase_038712_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038712_2 "location.mixed_relink_hole.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038712, VkglTestCase_038712_1, VkglTestCase_038712_2);

#define VkglTestCase_038713_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038713_2 "location.mixed_relink_hole.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038713, VkglTestCase_038713_1, VkglTestCase_038713_2);

#define VkglTestCase_038714_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038714_2 "location.mixed_relink_hole.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038714, VkglTestCase_038714_1, VkglTestCase_038714_2);

#define VkglTestCase_038715_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038715_2 "location.mixed_relink_hole.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038715, VkglTestCase_038715_1, VkglTestCase_038715_2);

#define VkglTestCase_038716_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038716_2 "location.mixed_relink_hole.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038716, VkglTestCase_038716_1, VkglTestCase_038716_2);

#define VkglTestCase_038717_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038717_2 "location.mixed_relink_hole.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038717, VkglTestCase_038717_1, VkglTestCase_038717_2);

#define VkglTestCase_038718_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038718_2 "location.mixed_relink_hole.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038718, VkglTestCase_038718_1, VkglTestCase_038718_2);

#define VkglTestCase_038719_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038719_2 "location.mixed_relink_hole.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038719, VkglTestCase_038719_1, VkglTestCase_038719_2);
