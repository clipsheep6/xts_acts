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

#define VkglTestCase_021296_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021296_2 "ed_by_shader.vertex_geo_fragment_only_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021296, VkglTestCase_021296_1, VkglTestCase_021296_2);

#define VkglTestCase_021297_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021297_2 "by_shader.vertex_geo_fragment_only_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021297, VkglTestCase_021297_1, VkglTestCase_021297_2);

#define VkglTestCase_021298_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021298_2 "y_shader.vertex_geo_fragment_only_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021298, VkglTestCase_021298_1, VkglTestCase_021298_2);

#define VkglTestCase_024342_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024342_2 "eferenced_by.vertex_geo_fragment_only_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024342, VkglTestCase_024342_1, VkglTestCase_024342_2);

#define VkglTestCase_024343_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024343_2 "renced_by.vertex_geo_fragment_only_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024343, VkglTestCase_024343_1, VkglTestCase_024343_2);

#define VkglTestCase_024344_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024344_2 "renced_by.vertex_geo_fragment_only_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024344, VkglTestCase_024344_1, VkglTestCase_024344_2);
