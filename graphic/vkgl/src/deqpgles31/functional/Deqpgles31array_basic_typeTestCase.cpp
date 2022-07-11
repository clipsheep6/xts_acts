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
#include "../ActsDeqpgles310021TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_020515_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020515_2 "form.location.default_block.array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020515, VkglTestCase_020515_1, VkglTestCase_020515_2);

#define VkglTestCase_020516_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020516_2 "iform.location.default_block.array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020516, VkglTestCase_020516_1, VkglTestCase_020516_2);

#define VkglTestCase_020517_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020517_2 "iform.location.default_block.array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020517, VkglTestCase_020517_1, VkglTestCase_020517_2);

#define VkglTestCase_020518_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020518_2 "iform.location.default_block.array.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020518, VkglTestCase_020518_1, VkglTestCase_020518_2);

#define VkglTestCase_020519_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020519_2 "iform.location.default_block.array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020519, VkglTestCase_020519_1, VkglTestCase_020519_2);

#define VkglTestCase_020520_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020520_2 "iform.location.default_block.array.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020520, VkglTestCase_020520_1, VkglTestCase_020520_2);

#define VkglTestCase_020521_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020521_2 "form.location.default_block.array.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020521, VkglTestCase_020521_1, VkglTestCase_020521_2);

#define VkglTestCase_020522_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020522_2 "form.location.default_block.array.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020522, VkglTestCase_020522_1, VkglTestCase_020522_2);

#define VkglTestCase_020523_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020523_2 "form.location.default_block.array.basic_type.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020523, VkglTestCase_020523_1, VkglTestCase_020523_2);

#define VkglTestCase_020524_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020524_2 "iform.location.default_block.array.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020524, VkglTestCase_020524_1, VkglTestCase_020524_2);

#define VkglTestCase_020525_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020525_2 "form.location.default_block.array.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020525, VkglTestCase_020525_1, VkglTestCase_020525_2);

#define VkglTestCase_020526_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020526_2 "iform.location.default_block.array.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020526, VkglTestCase_020526_1, VkglTestCase_020526_2);

#define VkglTestCase_020527_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020527_2 "form.location.default_block.array.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020527, VkglTestCase_020527_1, VkglTestCase_020527_2);

#define VkglTestCase_020528_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020528_2 "iform.location.default_block.array.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020528, VkglTestCase_020528_1, VkglTestCase_020528_2);

#define VkglTestCase_024565_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024565_2 "y.buffer_variable.type.array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024565, VkglTestCase_024565_1, VkglTestCase_024565_2);

#define VkglTestCase_024566_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_024566_2 "ry.buffer_variable.type.array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024566, VkglTestCase_024566_1, VkglTestCase_024566_2);

#define VkglTestCase_024567_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_024567_2 "ry.buffer_variable.type.array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024567, VkglTestCase_024567_1, VkglTestCase_024567_2);

#define VkglTestCase_024568_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_024568_2 "ry.buffer_variable.type.array.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024568, VkglTestCase_024568_1, VkglTestCase_024568_2);

#define VkglTestCase_024569_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_024569_2 "ry.buffer_variable.type.array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024569, VkglTestCase_024569_1, VkglTestCase_024569_2);

#define VkglTestCase_024570_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_024570_2 "ry.buffer_variable.type.array.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024570, VkglTestCase_024570_1, VkglTestCase_024570_2);

#define VkglTestCase_024571_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024571_2 "y.buffer_variable.type.array.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024571, VkglTestCase_024571_1, VkglTestCase_024571_2);

#define VkglTestCase_024572_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024572_2 "y.buffer_variable.type.array.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024572, VkglTestCase_024572_1, VkglTestCase_024572_2);

#define VkglTestCase_024573_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024573_2 "y.buffer_variable.type.array.basic_type.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024573, VkglTestCase_024573_1, VkglTestCase_024573_2);

#define VkglTestCase_024574_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_024574_2 "ry.buffer_variable.type.array.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024574, VkglTestCase_024574_1, VkglTestCase_024574_2);

#define VkglTestCase_024575_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024575_2 "y.buffer_variable.type.array.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024575, VkglTestCase_024575_1, VkglTestCase_024575_2);

#define VkglTestCase_024576_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_024576_2 "ry.buffer_variable.type.array.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024576, VkglTestCase_024576_1, VkglTestCase_024576_2);

#define VkglTestCase_024577_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024577_2 "y.buffer_variable.type.array.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024577, VkglTestCase_024577_1, VkglTestCase_024577_2);

#define VkglTestCase_024578_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_024578_2 "ry.buffer_variable.type.array.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024578, VkglTestCase_024578_1, VkglTestCase_024578_2);

#define VkglTestCase_024579_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024579_2 "uffer_variable.type.array.array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024579, VkglTestCase_024579_1, VkglTestCase_024579_2);

#define VkglTestCase_024580_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024580_2 "buffer_variable.type.array.array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024580, VkglTestCase_024580_1, VkglTestCase_024580_2);

#define VkglTestCase_024581_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024581_2 "buffer_variable.type.array.array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024581, VkglTestCase_024581_1, VkglTestCase_024581_2);

#define VkglTestCase_024582_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024582_2 "buffer_variable.type.array.array.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024582, VkglTestCase_024582_1, VkglTestCase_024582_2);

#define VkglTestCase_024583_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024583_2 "buffer_variable.type.array.array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024583, VkglTestCase_024583_1, VkglTestCase_024583_2);

#define VkglTestCase_024584_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024584_2 "buffer_variable.type.array.array.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024584, VkglTestCase_024584_1, VkglTestCase_024584_2);

#define VkglTestCase_024609_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024609_2 "uffer_variable.type.struct.array.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024609, VkglTestCase_024609_1, VkglTestCase_024609_2);

#define VkglTestCase_024610_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024610_2 "buffer_variable.type.struct.array.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024610, VkglTestCase_024610_1, VkglTestCase_024610_2);

#define VkglTestCase_024611_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024611_2 "uffer_variable.type.struct.array.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024611, VkglTestCase_024611_1, VkglTestCase_024611_2);

#define VkglTestCase_024612_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024612_2 "uffer_variable.type.struct.array.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024612, VkglTestCase_024612_1, VkglTestCase_024612_2);

#define VkglTestCase_024613_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024613_2 "uffer_variable.type.struct.array.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024613, VkglTestCase_024613_1, VkglTestCase_024613_2);

#define VkglTestCase_024614_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024614_2 "uffer_variable.type.struct.array.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024614, VkglTestCase_024614_1, VkglTestCase_024614_2);
