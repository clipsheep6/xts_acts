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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022110_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022110_2 "_input.type.separable_tess_eval.patch_var_struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022110, VkglTestCase_022110_1, VkglTestCase_022110_2);

#define VkglTestCase_022111_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022111_2 "m_input.type.separable_tess_eval.patch_var_struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022111, VkglTestCase_022111_1, VkglTestCase_022111_2);

#define VkglTestCase_022112_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022112_2 "m_input.type.separable_tess_eval.patch_var_struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022112, VkglTestCase_022112_1, VkglTestCase_022112_2);

#define VkglTestCase_022113_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022113_2 "m_input.type.separable_tess_eval.patch_var_struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022113, VkglTestCase_022113_1, VkglTestCase_022113_2);

#define VkglTestCase_022114_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022114_2 "_input.type.separable_tess_eval.patch_var_struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022114, VkglTestCase_022114_1, VkglTestCase_022114_2);

#define VkglTestCase_022115_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022115_2 "_input.type.separable_tess_eval.patch_var_struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022115, VkglTestCase_022115_1, VkglTestCase_022115_2);

#define VkglTestCase_022116_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022116_2 "_input.type.separable_tess_eval.patch_var_struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022116, VkglTestCase_022116_1, VkglTestCase_022116_2);
