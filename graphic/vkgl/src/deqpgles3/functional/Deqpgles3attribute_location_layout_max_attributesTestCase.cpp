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

#define VkglTestCase_038547_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038547_2 "cation.layout_max_attributes.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038547, VkglTestCase_038547_1, VkglTestCase_038547_2);

#define VkglTestCase_038548_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038548_2 "ocation.layout_max_attributes.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038548, VkglTestCase_038548_1, VkglTestCase_038548_2);

#define VkglTestCase_038549_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038549_2 "ocation.layout_max_attributes.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038549, VkglTestCase_038549_1, VkglTestCase_038549_2);

#define VkglTestCase_038550_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038550_2 "ocation.layout_max_attributes.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038550, VkglTestCase_038550_1, VkglTestCase_038550_2);

#define VkglTestCase_038551_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038551_2 "ocation.layout_max_attributes.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038551, VkglTestCase_038551_1, VkglTestCase_038551_2);

#define VkglTestCase_038552_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038552_2 "ocation.layout_max_attributes.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038552, VkglTestCase_038552_1, VkglTestCase_038552_2);

#define VkglTestCase_038553_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038553_2 "ocation.layout_max_attributes.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038553, VkglTestCase_038553_1, VkglTestCase_038553_2);

#define VkglTestCase_038554_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038554_2 "ocation.layout_max_attributes.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038554, VkglTestCase_038554_1, VkglTestCase_038554_2);

#define VkglTestCase_038555_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038555_2 "cation.layout_max_attributes.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038555, VkglTestCase_038555_1, VkglTestCase_038555_2);

#define VkglTestCase_038556_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038556_2 "cation.layout_max_attributes.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038556, VkglTestCase_038556_1, VkglTestCase_038556_2);

#define VkglTestCase_038557_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038557_2 "cation.layout_max_attributes.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038557, VkglTestCase_038557_1, VkglTestCase_038557_2);

#define VkglTestCase_038558_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038558_2 "ocation.layout_max_attributes.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038558, VkglTestCase_038558_1, VkglTestCase_038558_2);

#define VkglTestCase_038559_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038559_2 "cation.layout_max_attributes.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038559, VkglTestCase_038559_1, VkglTestCase_038559_2);

#define VkglTestCase_038560_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038560_2 "cation.layout_max_attributes.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038560, VkglTestCase_038560_1, VkglTestCase_038560_2);

#define VkglTestCase_038561_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038561_2 "cation.layout_max_attributes.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038561, VkglTestCase_038561_1, VkglTestCase_038561_2);

#define VkglTestCase_038562_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038562_2 "cation.layout_max_attributes.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038562, VkglTestCase_038562_1, VkglTestCase_038562_2);

#define VkglTestCase_038563_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038563_2 "cation.layout_max_attributes.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038563, VkglTestCase_038563_1, VkglTestCase_038563_2);

#define VkglTestCase_038564_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038564_2 "cation.layout_max_attributes.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038564, VkglTestCase_038564_1, VkglTestCase_038564_2);

#define VkglTestCase_038565_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038565_2 "cation.layout_max_attributes.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038565, VkglTestCase_038565_1, VkglTestCase_038565_2);

#define VkglTestCase_038566_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038566_2 "cation.layout_max_attributes.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038566, VkglTestCase_038566_1, VkglTestCase_038566_2);

#define VkglTestCase_038567_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038567_2 "cation.layout_max_attributes.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038567, VkglTestCase_038567_1, VkglTestCase_038567_2);

#define VkglTestCase_038568_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038568_2 "cation.layout_max_attributes.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038568, VkglTestCase_038568_1, VkglTestCase_038568_2);

#define VkglTestCase_038569_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038569_2 "cation.layout_max_attributes.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038569, VkglTestCase_038569_1, VkglTestCase_038569_2);

#define VkglTestCase_038570_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038570_2 "cation.layout_max_attributes.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038570, VkglTestCase_038570_1, VkglTestCase_038570_2);
