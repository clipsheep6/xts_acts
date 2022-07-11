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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004466_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004466_2 "ge.es31.geometry.varying.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004466, VkglTestCase_004466_1, VkglTestCase_004466_2);

#define VkglTestCase_004467_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004467_2 "age.es31.geometry.varying.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004467, VkglTestCase_004467_1, VkglTestCase_004467_2);

#define VkglTestCase_004468_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004468_2 "age.es31.geometry.varying.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004468, VkglTestCase_004468_1, VkglTestCase_004468_2);

#define VkglTestCase_004469_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004469_2 "age.es31.geometry.varying.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004469, VkglTestCase_004469_1, VkglTestCase_004469_2);

#define VkglTestCase_004470_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004470_2 "age.es31.geometry.varying.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004470, VkglTestCase_004470_1, VkglTestCase_004470_2);

#define VkglTestCase_004471_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004471_2 "ge.es31.geometry.varying.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004471, VkglTestCase_004471_1, VkglTestCase_004471_2);

#define VkglTestCase_004472_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004472_2 "ge.es31.geometry.varying.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004472, VkglTestCase_004472_1, VkglTestCase_004472_2);

#define VkglTestCase_004473_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004473_2 "ge.es31.geometry.varying.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004473, VkglTestCase_004473_1, VkglTestCase_004473_2);

#define VkglTestCase_004474_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004474_2 "age.es31.geometry.varying.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004474, VkglTestCase_004474_1, VkglTestCase_004474_2);

#define VkglTestCase_004475_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004475_2 "ge.es31.geometry.varying.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004475, VkglTestCase_004475_1, VkglTestCase_004475_2);

#define VkglTestCase_004476_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004476_2 "ge.es31.geometry.varying.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004476, VkglTestCase_004476_1, VkglTestCase_004476_2);

#define VkglTestCase_004477_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004477_2 "ge.es31.geometry.varying.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004477, VkglTestCase_004477_1, VkglTestCase_004477_2);

#define VkglTestCase_004478_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004478_2 "age.es31.geometry.varying.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004478, VkglTestCase_004478_1, VkglTestCase_004478_2);

#define VkglTestCase_004479_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004479_2 "age.es31.geometry.varying.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004479, VkglTestCase_004479_1, VkglTestCase_004479_2);

#define VkglTestCase_004480_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004480_2 "ge.es31.geometry.varying.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004480, VkglTestCase_004480_1, VkglTestCase_004480_2);

#define VkglTestCase_004481_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004481_2 "ge.es31.geometry.varying.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004481, VkglTestCase_004481_1, VkglTestCase_004481_2);

#define VkglTestCase_004482_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004482_2 "ge.es31.geometry.varying.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004482, VkglTestCase_004482_1, VkglTestCase_004482_2);

#define VkglTestCase_004483_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004483_2 "age.es31.geometry.varying.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004483, VkglTestCase_004483_1, VkglTestCase_004483_2);

#define VkglTestCase_004484_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004484_2 "ge.es31.geometry.varying.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004484, VkglTestCase_004484_1, VkglTestCase_004484_2);

#define VkglTestCase_004485_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004485_2 "ge.es31.geometry.varying.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004485, VkglTestCase_004485_1, VkglTestCase_004485_2);

#define VkglTestCase_004486_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004486_2 "ge.es31.geometry.varying.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004486, VkglTestCase_004486_1, VkglTestCase_004486_2);

#define VkglTestCase_004487_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004487_2 "es31.geometry.varying.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004487, VkglTestCase_004487_1, VkglTestCase_004487_2);

#define VkglTestCase_004488_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004488_2 "es31.geometry.varying.types.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004488, VkglTestCase_004488_1, VkglTestCase_004488_2);

#define VkglTestCase_004557_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004557_2 ".es31.tessellation.varying.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004557, VkglTestCase_004557_1, VkglTestCase_004557_2);

#define VkglTestCase_004558_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004558_2 "e.es31.tessellation.varying.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004558, VkglTestCase_004558_1, VkglTestCase_004558_2);

#define VkglTestCase_004559_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004559_2 "e.es31.tessellation.varying.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004559, VkglTestCase_004559_1, VkglTestCase_004559_2);

#define VkglTestCase_004560_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004560_2 "e.es31.tessellation.varying.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004560, VkglTestCase_004560_1, VkglTestCase_004560_2);

#define VkglTestCase_004561_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004561_2 "e.es31.tessellation.varying.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004561, VkglTestCase_004561_1, VkglTestCase_004561_2);

#define VkglTestCase_004562_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004562_2 ".es31.tessellation.varying.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004562, VkglTestCase_004562_1, VkglTestCase_004562_2);

#define VkglTestCase_004563_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004563_2 ".es31.tessellation.varying.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004563, VkglTestCase_004563_1, VkglTestCase_004563_2);

#define VkglTestCase_004564_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004564_2 ".es31.tessellation.varying.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004564, VkglTestCase_004564_1, VkglTestCase_004564_2);

#define VkglTestCase_004565_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004565_2 "e.es31.tessellation.varying.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004565, VkglTestCase_004565_1, VkglTestCase_004565_2);

#define VkglTestCase_004566_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004566_2 ".es31.tessellation.varying.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004566, VkglTestCase_004566_1, VkglTestCase_004566_2);

#define VkglTestCase_004567_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004567_2 ".es31.tessellation.varying.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004567, VkglTestCase_004567_1, VkglTestCase_004567_2);

#define VkglTestCase_004568_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004568_2 ".es31.tessellation.varying.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004568, VkglTestCase_004568_1, VkglTestCase_004568_2);

#define VkglTestCase_004569_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004569_2 "e.es31.tessellation.varying.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004569, VkglTestCase_004569_1, VkglTestCase_004569_2);

#define VkglTestCase_004570_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004570_2 "e.es31.tessellation.varying.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004570, VkglTestCase_004570_1, VkglTestCase_004570_2);

#define VkglTestCase_004571_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004571_2 ".es31.tessellation.varying.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004571, VkglTestCase_004571_1, VkglTestCase_004571_2);

#define VkglTestCase_004572_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004572_2 ".es31.tessellation.varying.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004572, VkglTestCase_004572_1, VkglTestCase_004572_2);

#define VkglTestCase_004573_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004573_2 ".es31.tessellation.varying.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004573, VkglTestCase_004573_1, VkglTestCase_004573_2);

#define VkglTestCase_004574_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004574_2 "e.es31.tessellation.varying.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004574, VkglTestCase_004574_1, VkglTestCase_004574_2);

#define VkglTestCase_004575_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004575_2 ".es31.tessellation.varying.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004575, VkglTestCase_004575_1, VkglTestCase_004575_2);

#define VkglTestCase_004576_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004576_2 ".es31.tessellation.varying.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004576, VkglTestCase_004576_1, VkglTestCase_004576_2);

#define VkglTestCase_004577_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004577_2 ".es31.tessellation.varying.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004577, VkglTestCase_004577_1, VkglTestCase_004577_2);

#define VkglTestCase_004578_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004578_2 "31.tessellation.varying.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004578, VkglTestCase_004578_1, VkglTestCase_004578_2);

#define VkglTestCase_004579_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004579_2 "31.tessellation.varying.types.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004579, VkglTestCase_004579_1, VkglTestCase_004579_2);

#define VkglTestCase_004624_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004624_2 "1.tessellation_geometry.varying.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004624, VkglTestCase_004624_1, VkglTestCase_004624_2);

#define VkglTestCase_004625_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004625_2 "1.tessellation_geometry.varying.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004625, VkglTestCase_004625_1, VkglTestCase_004625_2);

#define VkglTestCase_004626_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004626_2 "1.tessellation_geometry.varying.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004626, VkglTestCase_004626_1, VkglTestCase_004626_2);

#define VkglTestCase_004627_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004627_2 "1.tessellation_geometry.varying.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004627, VkglTestCase_004627_1, VkglTestCase_004627_2);

#define VkglTestCase_004628_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004628_2 "1.tessellation_geometry.varying.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004628, VkglTestCase_004628_1, VkglTestCase_004628_2);

#define VkglTestCase_004629_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004629_2 ".tessellation_geometry.varying.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004629, VkglTestCase_004629_1, VkglTestCase_004629_2);

#define VkglTestCase_004630_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004630_2 ".tessellation_geometry.varying.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004630, VkglTestCase_004630_1, VkglTestCase_004630_2);

#define VkglTestCase_004631_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004631_2 ".tessellation_geometry.varying.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004631, VkglTestCase_004631_1, VkglTestCase_004631_2);

#define VkglTestCase_004632_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004632_2 "1.tessellation_geometry.varying.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004632, VkglTestCase_004632_1, VkglTestCase_004632_2);

#define VkglTestCase_004633_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004633_2 ".tessellation_geometry.varying.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004633, VkglTestCase_004633_1, VkglTestCase_004633_2);

#define VkglTestCase_004634_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004634_2 ".tessellation_geometry.varying.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004634, VkglTestCase_004634_1, VkglTestCase_004634_2);

#define VkglTestCase_004635_1 "dEQP-GLES31.functional.shaders.linkage.es31"
#define VkglTestCase_004635_2 ".tessellation_geometry.varying.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004635, VkglTestCase_004635_1, VkglTestCase_004635_2);

#define VkglTestCase_004636_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004636_2 "1.tessellation_geometry.varying.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004636, VkglTestCase_004636_1, VkglTestCase_004636_2);

#define VkglTestCase_004637_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004637_2 "31.tessellation_geometry.varying.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004637, VkglTestCase_004637_1, VkglTestCase_004637_2);

#define VkglTestCase_004638_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004638_2 "1.tessellation_geometry.varying.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004638, VkglTestCase_004638_1, VkglTestCase_004638_2);

#define VkglTestCase_004639_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004639_2 "1.tessellation_geometry.varying.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004639, VkglTestCase_004639_1, VkglTestCase_004639_2);

#define VkglTestCase_004640_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004640_2 "1.tessellation_geometry.varying.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004640, VkglTestCase_004640_1, VkglTestCase_004640_2);

#define VkglTestCase_004641_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004641_2 "1.tessellation_geometry.varying.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004641, VkglTestCase_004641_1, VkglTestCase_004641_2);

#define VkglTestCase_004642_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004642_2 "1.tessellation_geometry.varying.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004642, VkglTestCase_004642_1, VkglTestCase_004642_2);

#define VkglTestCase_004643_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004643_2 "1.tessellation_geometry.varying.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004643, VkglTestCase_004643_1, VkglTestCase_004643_2);

#define VkglTestCase_004644_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004644_2 "1.tessellation_geometry.varying.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004644, VkglTestCase_004644_1, VkglTestCase_004644_2);

#define VkglTestCase_004645_1 "dEQP-GLES31.functional.shaders.linkage.es31.te"
#define VkglTestCase_004645_2 "ssellation_geometry.varying.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004645, VkglTestCase_004645_1, VkglTestCase_004645_2);

#define VkglTestCase_004646_1 "dEQP-GLES31.functional.shaders.linkage.es31.t"
#define VkglTestCase_004646_2 "essellation_geometry.varying.types.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004646, VkglTestCase_004646_1, VkglTestCase_004646_2);

#define VkglTestCase_004737_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004737_2 "ge.es32.geometry.varying.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004737, VkglTestCase_004737_1, VkglTestCase_004737_2);

#define VkglTestCase_004738_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004738_2 "age.es32.geometry.varying.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004738, VkglTestCase_004738_1, VkglTestCase_004738_2);

#define VkglTestCase_004739_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004739_2 "age.es32.geometry.varying.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004739, VkglTestCase_004739_1, VkglTestCase_004739_2);

#define VkglTestCase_004740_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004740_2 "age.es32.geometry.varying.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004740, VkglTestCase_004740_1, VkglTestCase_004740_2);

#define VkglTestCase_004741_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004741_2 "age.es32.geometry.varying.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004741, VkglTestCase_004741_1, VkglTestCase_004741_2);

#define VkglTestCase_004742_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004742_2 "ge.es32.geometry.varying.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004742, VkglTestCase_004742_1, VkglTestCase_004742_2);

#define VkglTestCase_004743_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004743_2 "ge.es32.geometry.varying.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004743, VkglTestCase_004743_1, VkglTestCase_004743_2);

#define VkglTestCase_004744_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004744_2 "ge.es32.geometry.varying.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004744, VkglTestCase_004744_1, VkglTestCase_004744_2);

#define VkglTestCase_004745_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004745_2 "age.es32.geometry.varying.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004745, VkglTestCase_004745_1, VkglTestCase_004745_2);

#define VkglTestCase_004746_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004746_2 "ge.es32.geometry.varying.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004746, VkglTestCase_004746_1, VkglTestCase_004746_2);

#define VkglTestCase_004747_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004747_2 "ge.es32.geometry.varying.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004747, VkglTestCase_004747_1, VkglTestCase_004747_2);

#define VkglTestCase_004748_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004748_2 "ge.es32.geometry.varying.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004748, VkglTestCase_004748_1, VkglTestCase_004748_2);

#define VkglTestCase_004749_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004749_2 "age.es32.geometry.varying.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004749, VkglTestCase_004749_1, VkglTestCase_004749_2);

#define VkglTestCase_004750_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004750_2 "age.es32.geometry.varying.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004750, VkglTestCase_004750_1, VkglTestCase_004750_2);

#define VkglTestCase_004751_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004751_2 "ge.es32.geometry.varying.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004751, VkglTestCase_004751_1, VkglTestCase_004751_2);

#define VkglTestCase_004752_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004752_2 "ge.es32.geometry.varying.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004752, VkglTestCase_004752_1, VkglTestCase_004752_2);

#define VkglTestCase_004753_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004753_2 "ge.es32.geometry.varying.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004753, VkglTestCase_004753_1, VkglTestCase_004753_2);

#define VkglTestCase_004754_1 "dEQP-GLES31.functional.shaders.link"
#define VkglTestCase_004754_2 "age.es32.geometry.varying.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004754, VkglTestCase_004754_1, VkglTestCase_004754_2);

#define VkglTestCase_004755_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004755_2 "ge.es32.geometry.varying.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004755, VkglTestCase_004755_1, VkglTestCase_004755_2);

#define VkglTestCase_004756_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004756_2 "ge.es32.geometry.varying.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004756, VkglTestCase_004756_1, VkglTestCase_004756_2);

#define VkglTestCase_004757_1 "dEQP-GLES31.functional.shaders.linka"
#define VkglTestCase_004757_2 "ge.es32.geometry.varying.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004757, VkglTestCase_004757_1, VkglTestCase_004757_2);

#define VkglTestCase_004758_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004758_2 "es32.geometry.varying.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004758, VkglTestCase_004758_1, VkglTestCase_004758_2);

#define VkglTestCase_004759_1 "dEQP-GLES31.functional.shaders.linkage."
#define VkglTestCase_004759_2 "es32.geometry.varying.types.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004759, VkglTestCase_004759_1, VkglTestCase_004759_2);

#define VkglTestCase_004823_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004823_2 ".es32.tessellation.varying.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004823, VkglTestCase_004823_1, VkglTestCase_004823_2);

#define VkglTestCase_004824_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004824_2 "e.es32.tessellation.varying.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004824, VkglTestCase_004824_1, VkglTestCase_004824_2);

#define VkglTestCase_004825_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004825_2 "e.es32.tessellation.varying.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004825, VkglTestCase_004825_1, VkglTestCase_004825_2);

#define VkglTestCase_004826_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004826_2 "e.es32.tessellation.varying.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004826, VkglTestCase_004826_1, VkglTestCase_004826_2);

#define VkglTestCase_004827_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004827_2 "e.es32.tessellation.varying.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004827, VkglTestCase_004827_1, VkglTestCase_004827_2);

#define VkglTestCase_004828_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004828_2 ".es32.tessellation.varying.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004828, VkglTestCase_004828_1, VkglTestCase_004828_2);

#define VkglTestCase_004829_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004829_2 ".es32.tessellation.varying.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004829, VkglTestCase_004829_1, VkglTestCase_004829_2);

#define VkglTestCase_004830_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004830_2 ".es32.tessellation.varying.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004830, VkglTestCase_004830_1, VkglTestCase_004830_2);

#define VkglTestCase_004831_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004831_2 "e.es32.tessellation.varying.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004831, VkglTestCase_004831_1, VkglTestCase_004831_2);

#define VkglTestCase_004832_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004832_2 ".es32.tessellation.varying.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004832, VkglTestCase_004832_1, VkglTestCase_004832_2);

#define VkglTestCase_004833_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004833_2 ".es32.tessellation.varying.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004833, VkglTestCase_004833_1, VkglTestCase_004833_2);

#define VkglTestCase_004834_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004834_2 ".es32.tessellation.varying.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004834, VkglTestCase_004834_1, VkglTestCase_004834_2);

#define VkglTestCase_004835_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004835_2 "e.es32.tessellation.varying.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004835, VkglTestCase_004835_1, VkglTestCase_004835_2);

#define VkglTestCase_004836_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004836_2 "e.es32.tessellation.varying.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004836, VkglTestCase_004836_1, VkglTestCase_004836_2);

#define VkglTestCase_004837_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004837_2 ".es32.tessellation.varying.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004837, VkglTestCase_004837_1, VkglTestCase_004837_2);

#define VkglTestCase_004838_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004838_2 ".es32.tessellation.varying.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004838, VkglTestCase_004838_1, VkglTestCase_004838_2);

#define VkglTestCase_004839_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004839_2 ".es32.tessellation.varying.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004839, VkglTestCase_004839_1, VkglTestCase_004839_2);

#define VkglTestCase_004840_1 "dEQP-GLES31.functional.shaders.linkag"
#define VkglTestCase_004840_2 "e.es32.tessellation.varying.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004840, VkglTestCase_004840_1, VkglTestCase_004840_2);

#define VkglTestCase_004841_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004841_2 ".es32.tessellation.varying.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004841, VkglTestCase_004841_1, VkglTestCase_004841_2);

#define VkglTestCase_004842_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004842_2 ".es32.tessellation.varying.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004842, VkglTestCase_004842_1, VkglTestCase_004842_2);

#define VkglTestCase_004843_1 "dEQP-GLES31.functional.shaders.linkage"
#define VkglTestCase_004843_2 ".es32.tessellation.varying.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004843, VkglTestCase_004843_1, VkglTestCase_004843_2);

#define VkglTestCase_004844_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004844_2 "32.tessellation.varying.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004844, VkglTestCase_004844_1, VkglTestCase_004844_2);

#define VkglTestCase_004845_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004845_2 "32.tessellation.varying.types.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004845, VkglTestCase_004845_1, VkglTestCase_004845_2);

#define VkglTestCase_004884_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004884_2 "2.tessellation_geometry.varying.types.float"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004884, VkglTestCase_004884_1, VkglTestCase_004884_2);

#define VkglTestCase_004885_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004885_2 "2.tessellation_geometry.varying.types.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004885, VkglTestCase_004885_1, VkglTestCase_004885_2);

#define VkglTestCase_004886_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004886_2 "2.tessellation_geometry.varying.types.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004886, VkglTestCase_004886_1, VkglTestCase_004886_2);

#define VkglTestCase_004887_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004887_2 "2.tessellation_geometry.varying.types.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004887, VkglTestCase_004887_1, VkglTestCase_004887_2);

#define VkglTestCase_004888_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004888_2 "2.tessellation_geometry.varying.types.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004888, VkglTestCase_004888_1, VkglTestCase_004888_2);

#define VkglTestCase_004889_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004889_2 ".tessellation_geometry.varying.types.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004889, VkglTestCase_004889_1, VkglTestCase_004889_2);

#define VkglTestCase_004890_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004890_2 ".tessellation_geometry.varying.types.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004890, VkglTestCase_004890_1, VkglTestCase_004890_2);

#define VkglTestCase_004891_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004891_2 ".tessellation_geometry.varying.types.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004891, VkglTestCase_004891_1, VkglTestCase_004891_2);

#define VkglTestCase_004892_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004892_2 "2.tessellation_geometry.varying.types.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004892, VkglTestCase_004892_1, VkglTestCase_004892_2);

#define VkglTestCase_004893_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004893_2 ".tessellation_geometry.varying.types.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004893, VkglTestCase_004893_1, VkglTestCase_004893_2);

#define VkglTestCase_004894_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004894_2 ".tessellation_geometry.varying.types.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004894, VkglTestCase_004894_1, VkglTestCase_004894_2);

#define VkglTestCase_004895_1 "dEQP-GLES31.functional.shaders.linkage.es32"
#define VkglTestCase_004895_2 ".tessellation_geometry.varying.types.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004895, VkglTestCase_004895_1, VkglTestCase_004895_2);

#define VkglTestCase_004896_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004896_2 "2.tessellation_geometry.varying.types.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004896, VkglTestCase_004896_1, VkglTestCase_004896_2);

#define VkglTestCase_004897_1 "dEQP-GLES31.functional.shaders.linkage.es"
#define VkglTestCase_004897_2 "32.tessellation_geometry.varying.types.int"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004897, VkglTestCase_004897_1, VkglTestCase_004897_2);

#define VkglTestCase_004898_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004898_2 "2.tessellation_geometry.varying.types.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004898, VkglTestCase_004898_1, VkglTestCase_004898_2);

#define VkglTestCase_004899_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004899_2 "2.tessellation_geometry.varying.types.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004899, VkglTestCase_004899_1, VkglTestCase_004899_2);

#define VkglTestCase_004900_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004900_2 "2.tessellation_geometry.varying.types.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004900, VkglTestCase_004900_1, VkglTestCase_004900_2);

#define VkglTestCase_004901_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004901_2 "2.tessellation_geometry.varying.types.uint"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004901, VkglTestCase_004901_1, VkglTestCase_004901_2);

#define VkglTestCase_004902_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004902_2 "2.tessellation_geometry.varying.types.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004902, VkglTestCase_004902_1, VkglTestCase_004902_2);

#define VkglTestCase_004903_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004903_2 "2.tessellation_geometry.varying.types.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004903, VkglTestCase_004903_1, VkglTestCase_004903_2);

#define VkglTestCase_004904_1 "dEQP-GLES31.functional.shaders.linkage.es3"
#define VkglTestCase_004904_2 "2.tessellation_geometry.varying.types.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004904, VkglTestCase_004904_1, VkglTestCase_004904_2);

#define VkglTestCase_004905_1 "dEQP-GLES31.functional.shaders.linkage.es32.te"
#define VkglTestCase_004905_2 "ssellation_geometry.varying.types.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004905, VkglTestCase_004905_1, VkglTestCase_004905_2);

#define VkglTestCase_004906_1 "dEQP-GLES31.functional.shaders.linkage.es32.t"
#define VkglTestCase_004906_2 "essellation_geometry.varying.types.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004906, VkglTestCase_004906_1, VkglTestCase_004906_2);
