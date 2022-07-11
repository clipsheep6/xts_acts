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
#include "../ActsDeqpgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001503_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001503_2 "inkage.varying.basic_types.float"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001503, VkglTestCase_001503_1, VkglTestCase_001503_2);

#define VkglTestCase_001504_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001504_2 "inkage.varying.basic_types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001504, VkglTestCase_001504_1, VkglTestCase_001504_2);

#define VkglTestCase_001505_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001505_2 "inkage.varying.basic_types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001505, VkglTestCase_001505_1, VkglTestCase_001505_2);

#define VkglTestCase_001506_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001506_2 "inkage.varying.basic_types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001506, VkglTestCase_001506_1, VkglTestCase_001506_2);

#define VkglTestCase_001507_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001507_2 "inkage.varying.basic_types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001507, VkglTestCase_001507_1, VkglTestCase_001507_2);

#define VkglTestCase_001508_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001508_2 "nkage.varying.basic_types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001508, VkglTestCase_001508_1, VkglTestCase_001508_2);

#define VkglTestCase_001509_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001509_2 "nkage.varying.basic_types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001509, VkglTestCase_001509_1, VkglTestCase_001509_2);

#define VkglTestCase_001510_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001510_2 "nkage.varying.basic_types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001510, VkglTestCase_001510_1, VkglTestCase_001510_2);

#define VkglTestCase_001511_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001511_2 "inkage.varying.basic_types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001511, VkglTestCase_001511_1, VkglTestCase_001511_2);

#define VkglTestCase_001512_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001512_2 "nkage.varying.basic_types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001512, VkglTestCase_001512_1, VkglTestCase_001512_2);

#define VkglTestCase_001513_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001513_2 "nkage.varying.basic_types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001513, VkglTestCase_001513_1, VkglTestCase_001513_2);

#define VkglTestCase_001514_1 "dEQP-GLES3.functional.shaders.li"
#define VkglTestCase_001514_2 "nkage.varying.basic_types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001514, VkglTestCase_001514_1, VkglTestCase_001514_2);

#define VkglTestCase_001515_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001515_2 "inkage.varying.basic_types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001515, VkglTestCase_001515_1, VkglTestCase_001515_2);

#define VkglTestCase_001516_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_001516_2 "linkage.varying.basic_types.int"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001516, VkglTestCase_001516_1, VkglTestCase_001516_2);

#define VkglTestCase_001517_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001517_2 "inkage.varying.basic_types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001517, VkglTestCase_001517_1, VkglTestCase_001517_2);

#define VkglTestCase_001518_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001518_2 "inkage.varying.basic_types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001518, VkglTestCase_001518_1, VkglTestCase_001518_2);

#define VkglTestCase_001519_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001519_2 "inkage.varying.basic_types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001519, VkglTestCase_001519_1, VkglTestCase_001519_2);

#define VkglTestCase_001520_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001520_2 "inkage.varying.basic_types.uint"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001520, VkglTestCase_001520_1, VkglTestCase_001520_2);

#define VkglTestCase_001521_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001521_2 "inkage.varying.basic_types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001521, VkglTestCase_001521_1, VkglTestCase_001521_2);

#define VkglTestCase_001522_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001522_2 "inkage.varying.basic_types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001522, VkglTestCase_001522_1, VkglTestCase_001522_2);

#define VkglTestCase_001523_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_001523_2 "inkage.varying.basic_types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30002TestSuite, TestCase_001523, VkglTestCase_001523_1, VkglTestCase_001523_2);
