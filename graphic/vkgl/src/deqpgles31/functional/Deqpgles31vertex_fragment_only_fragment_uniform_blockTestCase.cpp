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

#define VkglTestCase_021154_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021154_2 "ced_by_shader.vertex_fragment_only_fragment.uniform_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021154, VkglTestCase_021154_1, VkglTestCase_021154_2);

#define VkglTestCase_021155_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021155_2 "_by_shader.vertex_fragment_only_fragment.uniform_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021155, VkglTestCase_021155_1, VkglTestCase_021155_2);

#define VkglTestCase_021156_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021156_2 "by_shader.vertex_fragment_only_fragment.uniform_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021156, VkglTestCase_021156_1, VkglTestCase_021156_2);
