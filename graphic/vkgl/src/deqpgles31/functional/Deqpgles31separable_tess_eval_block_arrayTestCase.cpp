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

#define VkglTestCase_021084_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_021084_2 "eferenced_by_shader.separable_tess_eval.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021084, VkglTestCase_021084_1, VkglTestCase_021084_2);

#define VkglTestCase_021085_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021085_2 "renced_by_shader.separable_tess_eval.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021085, VkglTestCase_021085_1, VkglTestCase_021085_2);

#define VkglTestCase_021086_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021086_2 "enced_by_shader.separable_tess_eval.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021086, VkglTestCase_021086_1, VkglTestCase_021086_2);

#define VkglTestCase_024228_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024228_2 "iable.referenced_by.separable_tess_eval.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024228, VkglTestCase_024228_1, VkglTestCase_024228_2);

#define VkglTestCase_024229_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024229_2 "le.referenced_by.separable_tess_eval.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024229, VkglTestCase_024229_1, VkglTestCase_024229_2);

#define VkglTestCase_024230_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024230_2 "le.referenced_by.separable_tess_eval.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024230, VkglTestCase_024230_1, VkglTestCase_024230_2);
