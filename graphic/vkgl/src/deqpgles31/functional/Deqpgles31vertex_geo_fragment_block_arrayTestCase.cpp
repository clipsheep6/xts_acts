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

#define VkglTestCase_021262_1 "dEQP-GLES31.functional.program_interface_query.uniform.r"
#define VkglTestCase_021262_2 "eferenced_by_shader.vertex_geo_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021262, VkglTestCase_021262_1, VkglTestCase_021262_2);

#define VkglTestCase_021263_1 "dEQP-GLES31.functional.program_interface_query.uniform.refe"
#define VkglTestCase_021263_2 "renced_by_shader.vertex_geo_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021263, VkglTestCase_021263_1, VkglTestCase_021263_2);

#define VkglTestCase_021264_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021264_2 "enced_by_shader.vertex_geo_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021264, VkglTestCase_021264_1, VkglTestCase_021264_2);

#define VkglTestCase_024324_1 "dEQP-GLES31.functional.program_interface_query.buffer_var"
#define VkglTestCase_024324_2 "iable.referenced_by.vertex_geo_fragment.block_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024324, VkglTestCase_024324_1, VkglTestCase_024324_2);

#define VkglTestCase_024325_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024325_2 "le.referenced_by.vertex_geo_fragment.block_array.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024325, VkglTestCase_024325_1, VkglTestCase_024325_2);

#define VkglTestCase_024326_1 "dEQP-GLES31.functional.program_interface_query.buffer_variab"
#define VkglTestCase_024326_2 "le.referenced_by.vertex_geo_fragment.block_array.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024326, VkglTestCase_024326_1, VkglTestCase_024326_2);
