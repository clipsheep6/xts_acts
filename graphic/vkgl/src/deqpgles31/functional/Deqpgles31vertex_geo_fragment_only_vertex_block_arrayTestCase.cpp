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

#define VkglTestCase_021279_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021279_2 "ced_by_shader.vertex_geo_fragment_only_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021279, VkglTestCase_021279_1, VkglTestCase_021279_2);

#define VkglTestCase_021280_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced"
#define VkglTestCase_021280_2 "_by_shader.vertex_geo_fragment_only_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021280, VkglTestCase_021280_1, VkglTestCase_021280_2);

#define VkglTestCase_021281_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021281_2 "by_shader.vertex_geo_fragment_only_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021281, VkglTestCase_021281_1, VkglTestCase_021281_2);

#define VkglTestCase_024333_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024333_2 "referenced_by.vertex_geo_fragment_only_vertex.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024333, VkglTestCase_024333_1, VkglTestCase_024333_2);

#define VkglTestCase_024334_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024334_2 "erenced_by.vertex_geo_fragment_only_vertex.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024334, VkglTestCase_024334_1, VkglTestCase_024334_2);

#define VkglTestCase_024335_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.ref"
#define VkglTestCase_024335_2 "erenced_by.vertex_geo_fragment_only_vertex.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024335, VkglTestCase_024335_1, VkglTestCase_024335_2);
