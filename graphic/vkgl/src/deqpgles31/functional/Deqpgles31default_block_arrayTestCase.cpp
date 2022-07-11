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

#define VkglTestCase_020447_1 "dEQP-GLES31.functional.program_interface_query.uniform.a"
#define VkglTestCase_020447_2 "tomic_counter_buffer_index.default_block.array.var_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020447, VkglTestCase_020447_1, VkglTestCase_020447_2);

#define VkglTestCase_020448_1 "dEQP-GLES31.functional.program_interface_query.uniform.atom"
#define VkglTestCase_020448_2 "ic_counter_buffer_index.default_block.array.var_array_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020448, VkglTestCase_020448_1, VkglTestCase_020448_2);

#define VkglTestCase_021474_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021474_2 "uery.uniform.type.default_block.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021474, VkglTestCase_021474_1, VkglTestCase_021474_2);

#define VkglTestCase_021475_1 "dEQP-GLES31.functional.program_interface_"
#define VkglTestCase_021475_2 "query.uniform.type.default_block.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021475, VkglTestCase_021475_1, VkglTestCase_021475_2);

#define VkglTestCase_021476_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021476_2 "uery.uniform.type.default_block.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021476, VkglTestCase_021476_1, VkglTestCase_021476_2);

#define VkglTestCase_021477_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021477_2 "uery.uniform.type.default_block.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021477, VkglTestCase_021477_1, VkglTestCase_021477_2);

#define VkglTestCase_021478_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021478_2 "uery.uniform.type.default_block.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021478, VkglTestCase_021478_1, VkglTestCase_021478_2);

#define VkglTestCase_021479_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021479_2 "uery.uniform.type.default_block.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021479, VkglTestCase_021479_1, VkglTestCase_021479_2);

#define VkglTestCase_021480_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021480_2 "y.uniform.type.default_block.array.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021480, VkglTestCase_021480_1, VkglTestCase_021480_2);

#define VkglTestCase_021481_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_021481_2 "niform.type.default_block.array.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021481, VkglTestCase_021481_1, VkglTestCase_021481_2);

#define VkglTestCase_021482_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021482_2 "y.uniform.type.default_block.array.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021482, VkglTestCase_021482_1, VkglTestCase_021482_2);

#define VkglTestCase_021483_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021483_2 "y.uniform.type.default_block.array.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021483, VkglTestCase_021483_1, VkglTestCase_021483_2);

#define VkglTestCase_021484_1 "dEQP-GLES31.functional.program_interface_que"
#define VkglTestCase_021484_2 "ry.uniform.type.default_block.array.image_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021484, VkglTestCase_021484_1, VkglTestCase_021484_2);

#define VkglTestCase_021485_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_021485_2 "uniform.type.default_block.array.iimage_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021485, VkglTestCase_021485_1, VkglTestCase_021485_2);

#define VkglTestCase_021486_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021486_2 "y.uniform.type.default_block.array.atomic_uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_021486, VkglTestCase_021486_1, VkglTestCase_021486_2);
