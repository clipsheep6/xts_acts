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

#define VkglTestCase_021946_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_021946_2 "am_input.referenced_by.referenced_by_vertex_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021946, VkglTestCase_021946_1, VkglTestCase_021946_2);

#define VkglTestCase_021947_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021947_2 "_input.referenced_by.referenced_by_vertex_tess_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021947, VkglTestCase_021947_1, VkglTestCase_021947_2);

#define VkglTestCase_021948_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021948_2 "_input.referenced_by.referenced_by_vertex_geo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021948, VkglTestCase_021948_1, VkglTestCase_021948_2);

#define VkglTestCase_021949_1 "dEQP-GLES31.functional.program_interface_query.program_i"
#define VkglTestCase_021949_2 "nput.referenced_by.referenced_by_vertex_tess_geo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021949, VkglTestCase_021949_1, VkglTestCase_021949_2);

#define VkglTestCase_021950_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_021950_2 "am_input.referenced_by.referenced_by_separable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021950, VkglTestCase_021950_1, VkglTestCase_021950_2);

#define VkglTestCase_021951_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_021951_2 "m_input.referenced_by.referenced_by_separable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021951, VkglTestCase_021951_1, VkglTestCase_021951_2);

#define VkglTestCase_021952_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_021952_2 "m_input.referenced_by.referenced_by_separable_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021952, VkglTestCase_021952_1, VkglTestCase_021952_2);

#define VkglTestCase_021953_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021953_2 "_input.referenced_by.referenced_by_separable_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021953, VkglTestCase_021953_1, VkglTestCase_021953_2);

#define VkglTestCase_021954_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_021954_2 "_input.referenced_by.referenced_by_separable_tess_ctrl"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021954, VkglTestCase_021954_1, VkglTestCase_021954_2);

#define VkglTestCase_021955_1 "dEQP-GLES31.functional.program_interface_query.program_inp"
#define VkglTestCase_021955_2 "ut.referenced_by.referenced_by_separable_tess_eval_patch_in"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021955, VkglTestCase_021955_1, VkglTestCase_021955_2);
