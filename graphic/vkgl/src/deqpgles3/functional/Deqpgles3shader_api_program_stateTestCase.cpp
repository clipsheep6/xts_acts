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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30042TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_041892_1 "dEQP-GLES3.functional.shader_api."
#define VkglTestCase_041892_2 "program_state.detach_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041892, VkglTestCase_041892_1, VkglTestCase_041892_2);

#define VkglTestCase_041893_1 "dEQP-GLES3.functional.shader_api.p"
#define VkglTestCase_041893_2 "rogram_state.detach_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041893, VkglTestCase_041893_1, VkglTestCase_041893_2);

#define VkglTestCase_041894_1 "dEQP-GLES3.functional.shader_api.p"
#define VkglTestCase_041894_2 "rogram_state.reattach_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041894, VkglTestCase_041894_1, VkglTestCase_041894_2);

#define VkglTestCase_041895_1 "dEQP-GLES3.functional.shader_api.pr"
#define VkglTestCase_041895_2 "ogram_state.reattach_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041895, VkglTestCase_041895_1, VkglTestCase_041895_2);

#define VkglTestCase_041896_1 "dEQP-GLES3.functional.shader_api."
#define VkglTestCase_041896_2 "program_state.delete_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041896, VkglTestCase_041896_1, VkglTestCase_041896_2);

#define VkglTestCase_041897_1 "dEQP-GLES3.functional.shader_api.p"
#define VkglTestCase_041897_2 "rogram_state.delete_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041897, VkglTestCase_041897_1, VkglTestCase_041897_2);

#define VkglTestCase_041898_1 "dEQP-GLES3.functional.shader_api.p"
#define VkglTestCase_041898_2 "rogram_state.replace_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041898, VkglTestCase_041898_1, VkglTestCase_041898_2);

#define VkglTestCase_041899_1 "dEQP-GLES3.functional.shader_api.pr"
#define VkglTestCase_041899_2 "ogram_state.replace_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041899, VkglTestCase_041899_1, VkglTestCase_041899_2);

#define VkglTestCase_041900_1 "dEQP-GLES3.functional.shader_api.pr"
#define VkglTestCase_041900_2 "ogram_state.recompile_shader_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041900, VkglTestCase_041900_1, VkglTestCase_041900_2);

#define VkglTestCase_041901_1 "dEQP-GLES3.functional.shader_api.pro"
#define VkglTestCase_041901_2 "gram_state.recompile_shader_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041901, VkglTestCase_041901_1, VkglTestCase_041901_2);

#define VkglTestCase_041902_1 "dEQP-GLES3.functional.shader_api.p"
#define VkglTestCase_041902_2 "rogram_state.replace_source_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041902, VkglTestCase_041902_1, VkglTestCase_041902_2);

#define VkglTestCase_041903_1 "dEQP-GLES3.functional.shader_api.pr"
#define VkglTestCase_041903_2 "ogram_state.replace_source_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041903, VkglTestCase_041903_1, VkglTestCase_041903_2);
