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

#define VkglTestCase_021330_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021330_2 "renced_by_shader.vertex_tess_geo_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021330, VkglTestCase_021330_1, VkglTestCase_021330_2);

#define VkglTestCase_021331_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021331_2 "ced_by_shader.vertex_tess_geo_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021331, VkglTestCase_021331_1, VkglTestCase_021331_2);

#define VkglTestCase_021332_1 "dEQP-GLES31.functional.program_interface_query.uniform.referen"
#define VkglTestCase_021332_2 "ced_by_shader.vertex_tess_geo_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021332, VkglTestCase_021332_1, VkglTestCase_021332_2);

#define VkglTestCase_024360_1 "dEQP-GLES31.functional.program_interface_query.buffer_varia"
#define VkglTestCase_024360_2 "ble.referenced_by.vertex_tess_geo_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024360, VkglTestCase_024360_1, VkglTestCase_024360_2);

#define VkglTestCase_024361_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable"
#define VkglTestCase_024361_2 ".referenced_by.vertex_tess_geo_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024361, VkglTestCase_024361_1, VkglTestCase_024361_2);

#define VkglTestCase_024362_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024362_2 "referenced_by.vertex_tess_geo_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024362, VkglTestCase_024362_1, VkglTestCase_024362_2);
