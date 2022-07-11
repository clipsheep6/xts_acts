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

#define VkglTestCase_021208_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021208_2 "_by_shader.vertex_tess_fragment_only_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021208, VkglTestCase_021208_1, VkglTestCase_021208_2);

#define VkglTestCase_021209_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021209_2 "_shader.vertex_tess_fragment_only_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021209, VkglTestCase_021209_1, VkglTestCase_021209_2);

#define VkglTestCase_021210_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021210_2 "_shader.vertex_tess_fragment_only_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021210, VkglTestCase_021210_1, VkglTestCase_021210_2);

#define VkglTestCase_024294_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.re"
#define VkglTestCase_024294_2 "ferenced_by.vertex_tess_fragment_only_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024294, VkglTestCase_024294_1, VkglTestCase_024294_2);

#define VkglTestCase_024295_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024295_2 "enced_by.vertex_tess_fragment_only_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024295, VkglTestCase_024295_1, VkglTestCase_024295_2);

#define VkglTestCase_024296_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
#define VkglTestCase_024296_2 "nced_by.vertex_tess_fragment_only_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024296, VkglTestCase_024296_1, VkglTestCase_024296_2);
