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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021487_1 "dEQP-GLES31.functional.program_interface_qu"
#define VkglTestCase_021487_2 "ery.uniform.type.default_block.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021487, VkglTestCase_021487_1, VkglTestCase_021487_2);

#define VkglTestCase_021488_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021488_2 "uery.uniform.type.default_block.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021488, VkglTestCase_021488_1, VkglTestCase_021488_2);

#define VkglTestCase_021489_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021489_2 "uery.uniform.type.default_block.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021489, VkglTestCase_021489_1, VkglTestCase_021489_2);

#define VkglTestCase_021490_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021490_2 "uery.uniform.type.default_block.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021490, VkglTestCase_021490_1, VkglTestCase_021490_2);

#define VkglTestCase_021491_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021491_2 "uery.uniform.type.default_block.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021491, VkglTestCase_021491_1, VkglTestCase_021491_2);

#define VkglTestCase_021492_1 "dEQP-GLES31.functional.program_interface_q"
#define VkglTestCase_021492_2 "uery.uniform.type.default_block.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021492, VkglTestCase_021492_1, VkglTestCase_021492_2);

#define VkglTestCase_021493_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021493_2 "y.uniform.type.default_block.struct.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021493, VkglTestCase_021493_1, VkglTestCase_021493_2);

#define VkglTestCase_021494_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_021494_2 "niform.type.default_block.struct.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021494, VkglTestCase_021494_1, VkglTestCase_021494_2);

#define VkglTestCase_021495_1 "dEQP-GLES31.functional.program_interface_quer"
#define VkglTestCase_021495_2 "y.uniform.type.default_block.struct.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021495, VkglTestCase_021495_1, VkglTestCase_021495_2);

#define VkglTestCase_021496_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_021496_2 ".uniform.type.default_block.struct.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021496, VkglTestCase_021496_1, VkglTestCase_021496_2);
