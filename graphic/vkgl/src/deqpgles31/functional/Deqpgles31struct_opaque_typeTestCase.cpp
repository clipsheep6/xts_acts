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

#define VkglTestCase_020579_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020579_2 "m.location.default_block.struct.opaque_type.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020579, VkglTestCase_020579_1, VkglTestCase_020579_2);

#define VkglTestCase_020580_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020580_2 ".location.default_block.struct.opaque_type.sampler_cube"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020580, VkglTestCase_020580_1, VkglTestCase_020580_2);

#define VkglTestCase_020581_1 "dEQP-GLES31.functional.program_interface_query.uniform.l"
#define VkglTestCase_020581_2 "ocation.default_block.struct.opaque_type.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020581, VkglTestCase_020581_1, VkglTestCase_020581_2);

#define VkglTestCase_020582_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020582_2 "m.location.default_block.struct.opaque_type.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020582, VkglTestCase_020582_1, VkglTestCase_020582_2);

#define VkglTestCase_020583_1 "dEQP-GLES31.functional.program_interface_query.uniform.lo"
#define VkglTestCase_020583_2 "cation.default_block.struct.opaque_type.sampler_2d_shadow"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020583, VkglTestCase_020583_1, VkglTestCase_020583_2);

#define VkglTestCase_020584_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020584_2 ".location.default_block.struct.opaque_type.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020584, VkglTestCase_020584_1, VkglTestCase_020584_2);

#define VkglTestCase_020585_1 "dEQP-GLES31.functional.program_interface_query.uniform"
#define VkglTestCase_020585_2 ".location.default_block.struct.opaque_type.usampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020585, VkglTestCase_020585_1, VkglTestCase_020585_2);

#define VkglTestCase_020586_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020586_2 "location.default_block.struct.opaque_type.sampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020586, VkglTestCase_020586_1, VkglTestCase_020586_2);

#define VkglTestCase_020587_1 "dEQP-GLES31.functional.program_interface_query.uniform."
#define VkglTestCase_020587_2 "location.default_block.struct.opaque_type.isampler_2d_ms"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020587, VkglTestCase_020587_1, VkglTestCase_020587_2);
