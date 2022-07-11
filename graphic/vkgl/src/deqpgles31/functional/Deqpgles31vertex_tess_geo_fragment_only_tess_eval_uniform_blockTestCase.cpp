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

#define VkglTestCase_021409_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_b"
#define VkglTestCase_021409_2 "y_shader.vertex_tess_geo_fragment_only_tess_eval.uniform_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021409, VkglTestCase_021409_1, VkglTestCase_021409_2);

#define VkglTestCase_021410_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_s"
#define VkglTestCase_021410_2 "hader.vertex_tess_geo_fragment_only_tess_eval.uniform_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021410, VkglTestCase_021410_1, VkglTestCase_021410_2);

#define VkglTestCase_021411_1 "dEQP-GLES31.functional.program_interface_query.uniform.referenced_by_sh"
#define VkglTestCase_021411_2 "ader.vertex_tess_geo_fragment_only_tess_eval.uniform_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021411, VkglTestCase_021411_1, VkglTestCase_021411_2);
