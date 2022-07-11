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

#define VkglTestCase_021381_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenc"
#define VkglTestCase_021381_2 "ed_by_shader.vertex_tess_geo_fragment_only_geo.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021381, VkglTestCase_021381_1, VkglTestCase_021381_2);

#define VkglTestCase_021382_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_"
#define VkglTestCase_021382_2 "by_shader.vertex_tess_geo_fragment_only_geo.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021382, VkglTestCase_021382_1, VkglTestCase_021382_2);

#define VkglTestCase_021383_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021383_2 "y_shader.vertex_tess_geo_fragment_only_geo.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021383, VkglTestCase_021383_1, VkglTestCase_021383_2);

#define VkglTestCase_024387_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.r"
#define VkglTestCase_024387_2 "eferenced_by.vertex_tess_geo_fragment_only_geo.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024387, VkglTestCase_024387_1, VkglTestCase_024387_2);

#define VkglTestCase_024388_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024388_2 "renced_by.vertex_tess_geo_fragment_only_geo.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024388, VkglTestCase_024388_1, VkglTestCase_024388_2);

#define VkglTestCase_024389_1 "dEQP-GLES31.functional.program_interface_query.buffer_variable.refe"
#define VkglTestCase_024389_2 "renced_by.vertex_tess_geo_fragment_only_geo.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024389, VkglTestCase_024389_1, VkglTestCase_024389_2);
