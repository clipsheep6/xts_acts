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

#define VkglTestCase_020555_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020555_2 "niform.location.default_block.array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020555, VkglTestCase_020555_1, VkglTestCase_020555_2);

#define VkglTestCase_020556_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020556_2 "uniform.location.default_block.array.struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020556, VkglTestCase_020556_1, VkglTestCase_020556_2);

#define VkglTestCase_020557_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020557_2 "uniform.location.default_block.array.struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020557, VkglTestCase_020557_1, VkglTestCase_020557_2);

#define VkglTestCase_020558_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020558_2 "uniform.location.default_block.array.struct.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020558, VkglTestCase_020558_1, VkglTestCase_020558_2);

#define VkglTestCase_020559_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020559_2 "uniform.location.default_block.array.struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020559, VkglTestCase_020559_1, VkglTestCase_020559_2);

#define VkglTestCase_020560_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020560_2 "uniform.location.default_block.array.struct.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020560, VkglTestCase_020560_1, VkglTestCase_020560_2);

#define VkglTestCase_020561_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020561_2 "form.location.default_block.array.struct.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020561, VkglTestCase_020561_1, VkglTestCase_020561_2);

#define VkglTestCase_020562_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020562_2 "m.location.default_block.array.struct.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020562, VkglTestCase_020562_1, VkglTestCase_020562_2);

#define VkglTestCase_020563_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020563_2 "form.location.default_block.array.struct.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020563, VkglTestCase_020563_1, VkglTestCase_020563_2);

#define VkglTestCase_020564_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020564_2 "orm.location.default_block.array.struct.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020564, VkglTestCase_020564_1, VkglTestCase_020564_2);

#define VkglTestCase_024586_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024586_2 ".buffer_variable.type.array.array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024586, VkglTestCase_024586_1, VkglTestCase_024586_2);

#define VkglTestCase_024616_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024616_2 ".buffer_variable.type.struct.array.struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024616, VkglTestCase_024616_1, VkglTestCase_024616_2);
