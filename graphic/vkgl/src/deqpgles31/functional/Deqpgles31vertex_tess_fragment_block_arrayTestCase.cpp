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

#define VkglTestCase_021177_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021177_2 "ferenced_by_shader.vertex_tess_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021177, VkglTestCase_021177_1, VkglTestCase_021177_2);

#define VkglTestCase_021178_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021178_2 "enced_by_shader.vertex_tess_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021178, VkglTestCase_021178_1, VkglTestCase_021178_2);

#define VkglTestCase_021179_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021179_2 "enced_by_shader.vertex_tess_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021179, VkglTestCase_021179_1, VkglTestCase_021179_2);

#define VkglTestCase_024279_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024279_2 "iable.referenced_by.vertex_tess_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024279, VkglTestCase_024279_1, VkglTestCase_024279_2);

#define VkglTestCase_024280_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024280_2 "le.referenced_by.vertex_tess_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024280, VkglTestCase_024280_1, VkglTestCase_024280_2);

#define VkglTestCase_024281_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024281_2 "e.referenced_by.vertex_tess_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024281, VkglTestCase_024281_1, VkglTestCase_024281_2);
