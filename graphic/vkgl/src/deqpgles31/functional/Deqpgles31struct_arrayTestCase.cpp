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

#define VkglTestCase_020588_1 "dEQP-GLES31.functional.program_interface_query.u"
#define VkglTestCase_020588_2 "niform.location.default_block.struct.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020588, VkglTestCase_020588_1, VkglTestCase_020588_2);

#define VkglTestCase_020589_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020589_2 "uniform.location.default_block.struct.array.int"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020589, VkglTestCase_020589_1, VkglTestCase_020589_2);

#define VkglTestCase_020590_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020590_2 "uniform.location.default_block.struct.array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020590, VkglTestCase_020590_1, VkglTestCase_020590_2);

#define VkglTestCase_020591_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020591_2 "uniform.location.default_block.struct.array.bool"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020591, VkglTestCase_020591_1, VkglTestCase_020591_2);

#define VkglTestCase_020592_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020592_2 "uniform.location.default_block.struct.array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020592, VkglTestCase_020592_1, VkglTestCase_020592_2);

#define VkglTestCase_020593_1 "dEQP-GLES31.functional.program_interface_query."
#define VkglTestCase_020593_2 "uniform.location.default_block.struct.array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020593, VkglTestCase_020593_1, VkglTestCase_020593_2);

#define VkglTestCase_020594_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020594_2 "form.location.default_block.struct.array.sampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020594, VkglTestCase_020594_1, VkglTestCase_020594_2);

#define VkglTestCase_020595_1 "dEQP-GLES31.functional.program_interface_query.unifor"
#define VkglTestCase_020595_2 "m.location.default_block.struct.array.sampler_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020595, VkglTestCase_020595_1, VkglTestCase_020595_2);

#define VkglTestCase_020596_1 "dEQP-GLES31.functional.program_interface_query.uni"
#define VkglTestCase_020596_2 "form.location.default_block.struct.array.sampler_3d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020596, VkglTestCase_020596_1, VkglTestCase_020596_2);

#define VkglTestCase_020597_1 "dEQP-GLES31.functional.program_interface_query.unif"
#define VkglTestCase_020597_2 "orm.location.default_block.struct.array.isampler_2d"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_020597, VkglTestCase_020597_1, VkglTestCase_020597_2);

#define VkglTestCase_024593_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024593_2 ".buffer_variable.type.array.struct.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024593, VkglTestCase_024593_1, VkglTestCase_024593_2);

#define VkglTestCase_024623_1 "dEQP-GLES31.functional.program_interface_query"
#define VkglTestCase_024623_2 ".buffer_variable.type.struct.struct.array.float"
SHRINK_HWTEST_F(ActsDeqpgles310021TestSuite, TestCase_024623, VkglTestCase_024623_1, VkglTestCase_024623_2);
