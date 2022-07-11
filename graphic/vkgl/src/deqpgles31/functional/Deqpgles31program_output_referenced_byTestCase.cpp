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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022554_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022554_2 "am_output.referenced_by.referenced_by_vertex_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022554, VkglTestCase_022554_1, VkglTestCase_022554_2);

#define VkglTestCase_022555_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022555_2 "output.referenced_by.referenced_by_vertex_tess_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022555, VkglTestCase_022555_1, VkglTestCase_022555_2);

#define VkglTestCase_022556_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022556_2 "_output.referenced_by.referenced_by_vertex_geo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022556, VkglTestCase_022556_1, VkglTestCase_022556_2);

#define VkglTestCase_022557_1 "dEQP-GLES31.functional.program_interface_query.program_ou"
#define VkglTestCase_022557_2 "tput.referenced_by.referenced_by_vertex_tess_geo_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022557, VkglTestCase_022557_1, VkglTestCase_022557_2);

#define VkglTestCase_022558_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022558_2 "m_output.referenced_by.referenced_by_separable_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022558, VkglTestCase_022558_1, VkglTestCase_022558_2);

#define VkglTestCase_022559_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022559_2 "_output.referenced_by.referenced_by_separable_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022559, VkglTestCase_022559_1, VkglTestCase_022559_2);

#define VkglTestCase_022560_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022560_2 "_output.referenced_by.referenced_by_separable_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022560, VkglTestCase_022560_1, VkglTestCase_022560_2);

#define VkglTestCase_022561_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022561_2 "_output.referenced_by.referenced_by_separable_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022561, VkglTestCase_022561_1, VkglTestCase_022561_2);

#define VkglTestCase_022562_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022562_2 "_output.referenced_by.referenced_by_separable_tess_ctrl"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022562, VkglTestCase_022562_1, VkglTestCase_022562_2);

#define VkglTestCase_022563_1 "dEQP-GLES31.functional.program_interface_query.program_outp"
#define VkglTestCase_022563_2 "ut.referenced_by.referenced_by_separable_tess_ctrl_patch_out"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022563, VkglTestCase_022563_1, VkglTestCase_022563_2);
