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

#define VkglTestCase_021398_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021398_2 "by_shader.vertex_tess_geo_fragment_only_tess_ctrl.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021398, VkglTestCase_021398_1, VkglTestCase_021398_2);

#define VkglTestCase_021399_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021399_2 "shader.vertex_tess_geo_fragment_only_tess_ctrl.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021399, VkglTestCase_021399_1, VkglTestCase_021399_2);

#define VkglTestCase_021400_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021400_2 "hader.vertex_tess_geo_fragment_only_tess_ctrl.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021400, VkglTestCase_021400_1, VkglTestCase_021400_2);

#define VkglTestCase_024396_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024396_2 "renced_by.vertex_tess_geo_fragment_only_tess_ctrl.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024396, VkglTestCase_024396_1, VkglTestCase_024396_2);

#define VkglTestCase_024397_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referen"
#define VkglTestCase_024397_2 "ced_by.vertex_tess_geo_fragment_only_tess_ctrl.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024397, VkglTestCase_024397_1, VkglTestCase_024397_2);

#define VkglTestCase_024398_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referen"
#define VkglTestCase_024398_2 "ced_by.vertex_tess_geo_fragment_only_tess_ctrl.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024398, VkglTestCase_024398_1, VkglTestCase_024398_2);
