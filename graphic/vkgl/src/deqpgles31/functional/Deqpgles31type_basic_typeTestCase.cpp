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
#include "../ActsDeqpgles310025TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_024540_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024540_2 "uery.buffer_variable.type.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024540, VkglTestCase_024540_1, VkglTestCase_024540_2);

#define VkglTestCase_024541_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_024541_2 "query.buffer_variable.type.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024541, VkglTestCase_024541_1, VkglTestCase_024541_2);

#define VkglTestCase_024542_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_024542_2 "query.buffer_variable.type.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024542, VkglTestCase_024542_1, VkglTestCase_024542_2);

#define VkglTestCase_024543_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_024543_2 "query.buffer_variable.type.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024543, VkglTestCase_024543_1, VkglTestCase_024543_2);

#define VkglTestCase_024544_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_024544_2 "query.buffer_variable.type.basic_type.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024544, VkglTestCase_024544_1, VkglTestCase_024544_2);

#define VkglTestCase_024545_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_024545_2 "query.buffer_variable.type.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024545, VkglTestCase_024545_1, VkglTestCase_024545_2);

#define VkglTestCase_024546_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_024546_2 "query.buffer_variable.type.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024546, VkglTestCase_024546_1, VkglTestCase_024546_2);

#define VkglTestCase_024547_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024547_2 "uery.buffer_variable.type.basic_type.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024547, VkglTestCase_024547_1, VkglTestCase_024547_2);

#define VkglTestCase_024548_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024548_2 "uery.buffer_variable.type.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024548, VkglTestCase_024548_1, VkglTestCase_024548_2);

#define VkglTestCase_024549_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024549_2 "uery.buffer_variable.type.basic_type.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024549, VkglTestCase_024549_1, VkglTestCase_024549_2);

#define VkglTestCase_024550_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024550_2 "uery.buffer_variable.type.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024550, VkglTestCase_024550_1, VkglTestCase_024550_2);

#define VkglTestCase_024551_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024551_2 "uery.buffer_variable.type.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024551, VkglTestCase_024551_1, VkglTestCase_024551_2);

#define VkglTestCase_024552_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024552_2 "uery.buffer_variable.type.basic_type.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024552, VkglTestCase_024552_1, VkglTestCase_024552_2);

#define VkglTestCase_024553_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024553_2 "uery.buffer_variable.type.basic_type.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024553, VkglTestCase_024553_1, VkglTestCase_024553_2);

#define VkglTestCase_024554_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024554_2 "uery.buffer_variable.type.basic_type.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024554, VkglTestCase_024554_1, VkglTestCase_024554_2);

#define VkglTestCase_024555_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024555_2 "uery.buffer_variable.type.basic_type.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024555, VkglTestCase_024555_1, VkglTestCase_024555_2);

#define VkglTestCase_024556_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_024556_2 "query.buffer_variable.type.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024556, VkglTestCase_024556_1, VkglTestCase_024556_2);

#define VkglTestCase_024557_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024557_2 "uery.buffer_variable.type.basic_type.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024557, VkglTestCase_024557_1, VkglTestCase_024557_2);

#define VkglTestCase_024558_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024558_2 "uery.buffer_variable.type.basic_type.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024558, VkglTestCase_024558_1, VkglTestCase_024558_2);

#define VkglTestCase_024559_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024559_2 "uery.buffer_variable.type.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024559, VkglTestCase_024559_1, VkglTestCase_024559_2);

#define VkglTestCase_024560_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_024560_2 "query.buffer_variable.type.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024560, VkglTestCase_024560_1, VkglTestCase_024560_2);

#define VkglTestCase_024561_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024561_2 "uery.buffer_variable.type.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024561, VkglTestCase_024561_1, VkglTestCase_024561_2);

#define VkglTestCase_024562_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024562_2 "uery.buffer_variable.type.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024562, VkglTestCase_024562_1, VkglTestCase_024562_2);

#define VkglTestCase_024563_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_024563_2 "uery.buffer_variable.type.basic_type.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024563, VkglTestCase_024563_1, VkglTestCase_024563_2);

#define VkglTestCase_024564_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_024564_2 "query.buffer_variable.type.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310025TestSuite, TestCase_024564, VkglTestCase_024564_1, VkglTestCase_024564_2);
