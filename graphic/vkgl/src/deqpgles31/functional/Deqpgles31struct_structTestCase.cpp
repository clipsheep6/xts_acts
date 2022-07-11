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

#define VkglTestCase_020598_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020598_2 "niform.location.default_block.struct.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020598, VkglTestCase_020598_1, VkglTestCase_020598_2);

#define VkglTestCase_020599_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020599_2 "uniform.location.default_block.struct.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020599, VkglTestCase_020599_1, VkglTestCase_020599_2);

#define VkglTestCase_020600_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020600_2 "niform.location.default_block.struct.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020600, VkglTestCase_020600_1, VkglTestCase_020600_2);

#define VkglTestCase_020601_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020601_2 "niform.location.default_block.struct.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020601, VkglTestCase_020601_1, VkglTestCase_020601_2);

#define VkglTestCase_020602_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020602_2 "niform.location.default_block.struct.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020602, VkglTestCase_020602_1, VkglTestCase_020602_2);

#define VkglTestCase_020603_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020603_2 "niform.location.default_block.struct.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020603, VkglTestCase_020603_1, VkglTestCase_020603_2);

#define VkglTestCase_020604_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020604_2 "orm.location.default_block.struct.struct.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020604, VkglTestCase_020604_1, VkglTestCase_020604_2);

#define VkglTestCase_020605_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020605_2 ".location.default_block.struct.struct.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020605, VkglTestCase_020605_1, VkglTestCase_020605_2);

#define VkglTestCase_020606_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020606_2 "orm.location.default_block.struct.struct.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020606, VkglTestCase_020606_1, VkglTestCase_020606_2);

#define VkglTestCase_020607_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020607_2 "orm.location.default_block.struct.struct.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020607, VkglTestCase_020607_1, VkglTestCase_020607_2);

#define VkglTestCase_024594_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024594_2 ".buffer_variable.type.array.struct.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024594, VkglTestCase_024594_1, VkglTestCase_024594_2);

#define VkglTestCase_024624_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_024624_2 "buffer_variable.type.struct.struct.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024624, VkglTestCase_024624_1, VkglTestCase_024624_2);
