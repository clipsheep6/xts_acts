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

#define VkglTestCase_020542_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020542_2 "uniform.location.default_block.array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020542, VkglTestCase_020542_1, VkglTestCase_020542_2);

#define VkglTestCase_020543_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_020543_2 ".uniform.location.default_block.array.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020543, VkglTestCase_020543_1, VkglTestCase_020543_2);

#define VkglTestCase_020544_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020544_2 "uniform.location.default_block.array.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020544, VkglTestCase_020544_1, VkglTestCase_020544_2);

#define VkglTestCase_020545_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020545_2 "uniform.location.default_block.array.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020545, VkglTestCase_020545_1, VkglTestCase_020545_2);

#define VkglTestCase_020546_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020546_2 "uniform.location.default_block.array.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020546, VkglTestCase_020546_1, VkglTestCase_020546_2);

#define VkglTestCase_020547_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020547_2 "uniform.location.default_block.array.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020547, VkglTestCase_020547_1, VkglTestCase_020547_2);

#define VkglTestCase_020548_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020548_2 "form.location.default_block.array.array.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020548, VkglTestCase_020548_1, VkglTestCase_020548_2);

#define VkglTestCase_020549_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020549_2 "m.location.default_block.array.array.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020549, VkglTestCase_020549_1, VkglTestCase_020549_2);

#define VkglTestCase_020550_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020550_2 "form.location.default_block.array.array.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020550, VkglTestCase_020550_1, VkglTestCase_020550_2);

#define VkglTestCase_020551_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020551_2 "form.location.default_block.array.array.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020551, VkglTestCase_020551_1, VkglTestCase_020551_2);

#define VkglTestCase_020552_1 "dEQP-GLES31.functional.program_interface_query.un"
#define VkglTestCase_020552_2 "iform.location.default_block.array.array.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020552, VkglTestCase_020552_1, VkglTestCase_020552_2);

#define VkglTestCase_020553_1 "dEQP-GLES31.functional.program_interface_query.unifo"
#define VkglTestCase_020553_2 "rm.location.default_block.array.array.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020553, VkglTestCase_020553_1, VkglTestCase_020553_2);

#define VkglTestCase_020554_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020554_2 "form.location.default_block.array.array.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020554, VkglTestCase_020554_1, VkglTestCase_020554_2);

#define VkglTestCase_024585_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_024585_2 "y.buffer_variable.type.array.array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024585, VkglTestCase_024585_1, VkglTestCase_024585_2);

#define VkglTestCase_024615_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024615_2 ".buffer_variable.type.struct.array.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024615, VkglTestCase_024615_1, VkglTestCase_024615_2);
