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

#define VkglTestCase_021412_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021412_2 "y_shader.vertex_tess_geo_fragment_only_tess_eval.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021412, VkglTestCase_021412_1, VkglTestCase_021412_2);

#define VkglTestCase_021413_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021413_2 "hader.vertex_tess_geo_fragment_only_tess_eval.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021413, VkglTestCase_021413_1, VkglTestCase_021413_2);

#define VkglTestCase_021414_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021414_2 "ader.vertex_tess_geo_fragment_only_tess_eval.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021414, VkglTestCase_021414_1, VkglTestCase_021414_2);

#define VkglTestCase_024402_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refer"
#define VkglTestCase_024402_2 "enced_by.vertex_tess_geo_fragment_only_tess_eval.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024402, VkglTestCase_024402_1, VkglTestCase_024402_2);

#define VkglTestCase_024403_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referenc"
#define VkglTestCase_024403_2 "ed_by.vertex_tess_geo_fragment_only_tess_eval.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024403, VkglTestCase_024403_1, VkglTestCase_024403_2);

#define VkglTestCase_024404_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referenc"
#define VkglTestCase_024404_2 "ed_by.vertex_tess_geo_fragment_only_tess_eval.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024404, VkglTestCase_024404_1, VkglTestCase_024404_2);
