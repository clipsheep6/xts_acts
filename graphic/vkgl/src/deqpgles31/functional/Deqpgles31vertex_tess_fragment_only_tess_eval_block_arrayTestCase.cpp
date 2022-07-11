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

#define VkglTestCase_021245_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021245_2 "d_by_shader.vertex_tess_fragment_only_tess_eval.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021245, VkglTestCase_021245_1, VkglTestCase_021245_2);

#define VkglTestCase_021246_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021246_2 "y_shader.vertex_tess_fragment_only_tess_eval.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021246, VkglTestCase_021246_1, VkglTestCase_021246_2);

#define VkglTestCase_021247_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021247_2 "_shader.vertex_tess_fragment_only_tess_eval.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021247, VkglTestCase_021247_1, VkglTestCase_021247_2);

#define VkglTestCase_024315_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
#define VkglTestCase_024315_2 "ferenced_by.vertex_tess_fragment_only_tess_eval.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024315, VkglTestCase_024315_1, VkglTestCase_024315_2);

#define VkglTestCase_024316_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024316_2 "enced_by.vertex_tess_fragment_only_tess_eval.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024316, VkglTestCase_024316_1, VkglTestCase_024316_2);

#define VkglTestCase_024317_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024317_2 "enced_by.vertex_tess_fragment_only_tess_eval.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024317, VkglTestCase_024317_1, VkglTestCase_024317_2);
