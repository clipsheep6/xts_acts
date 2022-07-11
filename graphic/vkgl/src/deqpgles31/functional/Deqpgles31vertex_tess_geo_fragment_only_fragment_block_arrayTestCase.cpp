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

#define VkglTestCase_021364_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021364_2 "by_shader.vertex_tess_geo_fragment_only_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021364, VkglTestCase_021364_1, VkglTestCase_021364_2);

#define VkglTestCase_021365_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021365_2 "shader.vertex_tess_geo_fragment_only_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021365, VkglTestCase_021365_1, VkglTestCase_021365_2);

#define VkglTestCase_021366_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021366_2 "shader.vertex_tess_geo_fragment_only_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021366, VkglTestCase_021366_1, VkglTestCase_021366_2);

#define VkglTestCase_024378_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024378_2 "erenced_by.vertex_tess_geo_fragment_only_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024378, VkglTestCase_024378_1, VkglTestCase_024378_2);

#define VkglTestCase_024379_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refere"
#define VkglTestCase_024379_2 "nced_by.vertex_tess_geo_fragment_only_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024379, VkglTestCase_024379_1, VkglTestCase_024379_2);

#define VkglTestCase_024380_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referen"
#define VkglTestCase_024380_2 "ced_by.vertex_tess_geo_fragment_only_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024380, VkglTestCase_024380_1, VkglTestCase_024380_2);
