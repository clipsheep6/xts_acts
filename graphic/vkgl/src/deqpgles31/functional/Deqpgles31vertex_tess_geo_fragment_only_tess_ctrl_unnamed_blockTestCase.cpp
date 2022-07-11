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

#define VkglTestCase_021395_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021395_2 "y_shader.vertex_tess_geo_fragment_only_tess_ctrl.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021395, VkglTestCase_021395_1, VkglTestCase_021395_2);

#define VkglTestCase_021396_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021396_2 "hader.vertex_tess_geo_fragment_only_tess_ctrl.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021396, VkglTestCase_021396_1, VkglTestCase_021396_2);

#define VkglTestCase_021397_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021397_2 "ader.vertex_tess_geo_fragment_only_tess_ctrl.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021397, VkglTestCase_021397_1, VkglTestCase_021397_2);

#define VkglTestCase_024393_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024393_2 "enced_by.vertex_tess_geo_fragment_only_tess_ctrl.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024393, VkglTestCase_024393_1, VkglTestCase_024393_2);

#define VkglTestCase_024394_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referenc"
#define VkglTestCase_024394_2 "ed_by.vertex_tess_geo_fragment_only_tess_ctrl.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024394, VkglTestCase_024394_1, VkglTestCase_024394_2);

#define VkglTestCase_024395_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referenc"
#define VkglTestCase_024395_2 "ed_by.vertex_tess_geo_fragment_only_tess_ctrl.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024395, VkglTestCase_024395_1, VkglTestCase_024395_2);
