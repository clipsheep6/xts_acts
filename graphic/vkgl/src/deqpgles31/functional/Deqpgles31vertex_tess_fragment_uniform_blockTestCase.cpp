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

#define VkglTestCase_021171_1 "dEQP-GLES31.functional.program_interface_query.uniform.ref"
#define VkglTestCase_021171_2 "erenced_by_shader.vertex_tess_fragment.uniform_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021171, VkglTestCase_021171_1, VkglTestCase_021171_2);

#define VkglTestCase_021172_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021172_2 "nced_by_shader.vertex_tess_fragment.uniform_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021172, VkglTestCase_021172_1, VkglTestCase_021172_2);

#define VkglTestCase_021173_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021173_2 "nced_by_shader.vertex_tess_fragment.uniform_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021173, VkglTestCase_021173_1, VkglTestCase_021173_2);
