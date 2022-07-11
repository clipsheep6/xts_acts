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

#define VkglTestCase_020565_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020565_2 "form.location.default_block.struct.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020565, VkglTestCase_020565_1, VkglTestCase_020565_2);

#define VkglTestCase_020566_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020566_2 "iform.location.default_block.struct.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020566, VkglTestCase_020566_1, VkglTestCase_020566_2);

#define VkglTestCase_020567_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020567_2 "form.location.default_block.struct.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020567, VkglTestCase_020567_1, VkglTestCase_020567_2);

#define VkglTestCase_020568_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020568_2 "form.location.default_block.struct.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020568, VkglTestCase_020568_1, VkglTestCase_020568_2);

#define VkglTestCase_020569_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020569_2 "form.location.default_block.struct.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020569, VkglTestCase_020569_1, VkglTestCase_020569_2);

#define VkglTestCase_020570_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020570_2 "form.location.default_block.struct.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020570, VkglTestCase_020570_1, VkglTestCase_020570_2);

#define VkglTestCase_020571_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020571_2 "form.location.default_block.struct.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020571, VkglTestCase_020571_1, VkglTestCase_020571_2);

#define VkglTestCase_020572_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020572_2 "form.location.default_block.struct.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020572, VkglTestCase_020572_1, VkglTestCase_020572_2);

#define VkglTestCase_020573_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020573_2 "form.location.default_block.struct.basic_type.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020573, VkglTestCase_020573_1, VkglTestCase_020573_2);

#define VkglTestCase_020574_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020574_2 "form.location.default_block.struct.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020574, VkglTestCase_020574_1, VkglTestCase_020574_2);

#define VkglTestCase_020575_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020575_2 "orm.location.default_block.struct.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020575, VkglTestCase_020575_1, VkglTestCase_020575_2);

#define VkglTestCase_020576_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020576_2 "form.location.default_block.struct.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020576, VkglTestCase_020576_1, VkglTestCase_020576_2);

#define VkglTestCase_020577_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020577_2 "orm.location.default_block.struct.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020577, VkglTestCase_020577_1, VkglTestCase_020577_2);

#define VkglTestCase_020578_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020578_2 "form.location.default_block.struct.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020578, VkglTestCase_020578_1, VkglTestCase_020578_2);

#define VkglTestCase_024587_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024587_2 "uffer_variable.type.array.struct.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024587, VkglTestCase_024587_1, VkglTestCase_024587_2);

#define VkglTestCase_024588_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024588_2 "buffer_variable.type.array.struct.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024588, VkglTestCase_024588_1, VkglTestCase_024588_2);

#define VkglTestCase_024589_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024589_2 "uffer_variable.type.array.struct.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024589, VkglTestCase_024589_1, VkglTestCase_024589_2);

#define VkglTestCase_024590_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024590_2 "uffer_variable.type.array.struct.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024590, VkglTestCase_024590_1, VkglTestCase_024590_2);

#define VkglTestCase_024591_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024591_2 "uffer_variable.type.array.struct.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024591, VkglTestCase_024591_1, VkglTestCase_024591_2);

#define VkglTestCase_024592_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024592_2 "uffer_variable.type.array.struct.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024592, VkglTestCase_024592_1, VkglTestCase_024592_2);

#define VkglTestCase_024595_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024595_2 "y.buffer_variable.type.struct.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024595, VkglTestCase_024595_1, VkglTestCase_024595_2);

#define VkglTestCase_024596_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_024596_2 "ry.buffer_variable.type.struct.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024596, VkglTestCase_024596_1, VkglTestCase_024596_2);

#define VkglTestCase_024597_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024597_2 "y.buffer_variable.type.struct.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024597, VkglTestCase_024597_1, VkglTestCase_024597_2);

#define VkglTestCase_024598_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024598_2 "y.buffer_variable.type.struct.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024598, VkglTestCase_024598_1, VkglTestCase_024598_2);

#define VkglTestCase_024599_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024599_2 "y.buffer_variable.type.struct.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024599, VkglTestCase_024599_1, VkglTestCase_024599_2);

#define VkglTestCase_024600_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024600_2 "y.buffer_variable.type.struct.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024600, VkglTestCase_024600_1, VkglTestCase_024600_2);

#define VkglTestCase_024601_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024601_2 "y.buffer_variable.type.struct.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024601, VkglTestCase_024601_1, VkglTestCase_024601_2);

#define VkglTestCase_024602_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024602_2 "y.buffer_variable.type.struct.basic_type.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024602, VkglTestCase_024602_1, VkglTestCase_024602_2);

#define VkglTestCase_024603_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024603_2 "y.buffer_variable.type.struct.basic_type.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024603, VkglTestCase_024603_1, VkglTestCase_024603_2);

#define VkglTestCase_024604_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024604_2 "y.buffer_variable.type.struct.basic_type.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024604, VkglTestCase_024604_1, VkglTestCase_024604_2);

#define VkglTestCase_024605_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024605_2 ".buffer_variable.type.struct.basic_type.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024605, VkglTestCase_024605_1, VkglTestCase_024605_2);

#define VkglTestCase_024606_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024606_2 "y.buffer_variable.type.struct.basic_type.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024606, VkglTestCase_024606_1, VkglTestCase_024606_2);

#define VkglTestCase_024607_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024607_2 ".buffer_variable.type.struct.basic_type.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024607, VkglTestCase_024607_1, VkglTestCase_024607_2);

#define VkglTestCase_024608_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024608_2 "y.buffer_variable.type.struct.basic_type.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024608, VkglTestCase_024608_1, VkglTestCase_024608_2);

#define VkglTestCase_024617_1 "dEQP-GLES31.functional.program_interface_query.bu"
#define VkglTestCase_024617_2 "ffer_variable.type.struct.struct.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024617, VkglTestCase_024617_1, VkglTestCase_024617_2);

#define VkglTestCase_024618_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024618_2 "uffer_variable.type.struct.struct.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024618, VkglTestCase_024618_1, VkglTestCase_024618_2);

#define VkglTestCase_024619_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024619_2 "uffer_variable.type.struct.struct.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024619, VkglTestCase_024619_1, VkglTestCase_024619_2);

#define VkglTestCase_024620_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024620_2 "uffer_variable.type.struct.struct.basic_type.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024620, VkglTestCase_024620_1, VkglTestCase_024620_2);

#define VkglTestCase_024621_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024621_2 "uffer_variable.type.struct.struct.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024621, VkglTestCase_024621_1, VkglTestCase_024621_2);

#define VkglTestCase_024622_1 "dEQP-GLES31.functional.program_interface_query.b"
#define VkglTestCase_024622_2 "uffer_variable.type.struct.struct.basic_type.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024622, VkglTestCase_024622_1, VkglTestCase_024622_2);
