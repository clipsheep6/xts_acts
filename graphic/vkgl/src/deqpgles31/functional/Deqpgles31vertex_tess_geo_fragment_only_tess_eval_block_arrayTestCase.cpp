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

#define VkglTestCase_021415_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021415_2 "by_shader.vertex_tess_geo_fragment_only_tess_eval.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021415, VkglTestCase_021415_1, VkglTestCase_021415_2);

#define VkglTestCase_021416_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_"
#define VkglTestCase_021416_2 "shader.vertex_tess_geo_fragment_only_tess_eval.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021416, VkglTestCase_021416_1, VkglTestCase_021416_2);

#define VkglTestCase_021417_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021417_2 "hader.vertex_tess_geo_fragment_only_tess_eval.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021417, VkglTestCase_021417_1, VkglTestCase_021417_2);

#define VkglTestCase_024405_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024405_2 "renced_by.vertex_tess_geo_fragment_only_tess_eval.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024405, VkglTestCase_024405_1, VkglTestCase_024405_2);

#define VkglTestCase_024406_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referen"
#define VkglTestCase_024406_2 "ced_by.vertex_tess_geo_fragment_only_tess_eval.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024406, VkglTestCase_024406_1, VkglTestCase_024406_2);

#define VkglTestCase_024407_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.referen"
#define VkglTestCase_024407_2 "ced_by.vertex_tess_geo_fragment_only_tess_eval.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024407, VkglTestCase_024407_1, VkglTestCase_024407_2);
