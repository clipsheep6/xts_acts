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

#define VkglTestCase_021327_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021327_2 "enced_by_shader.vertex_tess_geo_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021327, VkglTestCase_021327_1, VkglTestCase_021327_2);

#define VkglTestCase_021328_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021328_2 "ed_by_shader.vertex_tess_geo_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021328, VkglTestCase_021328_1, VkglTestCase_021328_2);

#define VkglTestCase_021329_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021329_2 "ed_by_shader.vertex_tess_geo_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021329, VkglTestCase_021329_1, VkglTestCase_021329_2);

#define VkglTestCase_024357_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024357_2 "le.referenced_by.vertex_tess_geo_fragment.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024357, VkglTestCase_024357_1, VkglTestCase_024357_2);

#define VkglTestCase_024358_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable."
#define VkglTestCase_024358_2 "referenced_by.vertex_tess_geo_fragment.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024358, VkglTestCase_024358_1, VkglTestCase_024358_2);

#define VkglTestCase_024359_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024359_2 "eferenced_by.vertex_tess_geo_fragment.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024359, VkglTestCase_024359_1, VkglTestCase_024359_2);
