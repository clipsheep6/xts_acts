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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013616_1 "dEQP-GLES2.functional.shader_api."
#define VkglTestCase_013616_2 "program_state.detach_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013616, VkglTestCase_013616_1, VkglTestCase_013616_2);

#define VkglTestCase_013617_1 "dEQP-GLES2.functional.shader_api.p"
#define VkglTestCase_013617_2 "rogram_state.detach_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013617, VkglTestCase_013617_1, VkglTestCase_013617_2);

#define VkglTestCase_013618_1 "dEQP-GLES2.functional.shader_api.p"
#define VkglTestCase_013618_2 "rogram_state.reattach_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013618, VkglTestCase_013618_1, VkglTestCase_013618_2);

#define VkglTestCase_013619_1 "dEQP-GLES2.functional.shader_api.pr"
#define VkglTestCase_013619_2 "ogram_state.reattach_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013619, VkglTestCase_013619_1, VkglTestCase_013619_2);

#define VkglTestCase_013620_1 "dEQP-GLES2.functional.shader_api."
#define VkglTestCase_013620_2 "program_state.delete_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013620, VkglTestCase_013620_1, VkglTestCase_013620_2);

#define VkglTestCase_013621_1 "dEQP-GLES2.functional.shader_api.p"
#define VkglTestCase_013621_2 "rogram_state.delete_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013621, VkglTestCase_013621_1, VkglTestCase_013621_2);

#define VkglTestCase_013622_1 "dEQP-GLES2.functional.shader_api.p"
#define VkglTestCase_013622_2 "rogram_state.replace_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013622, VkglTestCase_013622_1, VkglTestCase_013622_2);

#define VkglTestCase_013623_1 "dEQP-GLES2.functional.shader_api.pr"
#define VkglTestCase_013623_2 "ogram_state.replace_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013623, VkglTestCase_013623_1, VkglTestCase_013623_2);

#define VkglTestCase_013624_1 "dEQP-GLES2.functional.shader_api.pr"
#define VkglTestCase_013624_2 "ogram_state.recompile_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013624, VkglTestCase_013624_1, VkglTestCase_013624_2);

#define VkglTestCase_013625_1 "dEQP-GLES2.functional.shader_api.pro"
#define VkglTestCase_013625_2 "gram_state.recompile_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013625, VkglTestCase_013625_1, VkglTestCase_013625_2);

#define VkglTestCase_013626_1 "dEQP-GLES2.functional.shader_api.p"
#define VkglTestCase_013626_2 "rogram_state.replace_source_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013626, VkglTestCase_013626_1, VkglTestCase_013626_2);

#define VkglTestCase_013627_1 "dEQP-GLES2.functional.shader_api.pr"
#define VkglTestCase_013627_2 "ogram_state.replace_source_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20014TestSuite, TestCase_013627, VkglTestCase_013627_1, VkglTestCase_013627_2);
