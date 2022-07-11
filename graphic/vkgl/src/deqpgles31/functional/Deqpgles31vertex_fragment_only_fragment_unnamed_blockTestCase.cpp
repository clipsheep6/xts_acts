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

#define VkglTestCase_021157_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021157_2 "ced_by_shader.vertex_fragment_only_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021157, VkglTestCase_021157_1, VkglTestCase_021157_2);

#define VkglTestCase_021158_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021158_2 "_by_shader.vertex_fragment_only_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021158, VkglTestCase_021158_1, VkglTestCase_021158_2);

#define VkglTestCase_021159_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021159_2 "by_shader.vertex_fragment_only_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021159, VkglTestCase_021159_1, VkglTestCase_021159_2);

#define VkglTestCase_024267_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024267_2 "referenced_by.vertex_fragment_only_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024267, VkglTestCase_024267_1, VkglTestCase_024267_2);

#define VkglTestCase_024268_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024268_2 "erenced_by.vertex_fragment_only_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024268, VkglTestCase_024268_1, VkglTestCase_024268_2);

#define VkglTestCase_024269_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024269_2 "erenced_by.vertex_fragment_only_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024269, VkglTestCase_024269_1, VkglTestCase_024269_2);
