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

#define VkglTestCase_021290_1 "dEQP-GLES31.functional.program_interface_query.uniform.reference"
#define VkglTestCase_021290_2 "d_by_shader.vertex_geo_fragment_only_fragment.uniform_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021290, VkglTestCase_021290_1, VkglTestCase_021290_2);

#define VkglTestCase_021291_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021291_2 "y_shader.vertex_geo_fragment_only_fragment.uniform_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021291, VkglTestCase_021291_1, VkglTestCase_021291_2);

#define VkglTestCase_021292_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by"
#define VkglTestCase_021292_2 "_shader.vertex_geo_fragment_only_fragment.uniform_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021292, VkglTestCase_021292_1, VkglTestCase_021292_2);
