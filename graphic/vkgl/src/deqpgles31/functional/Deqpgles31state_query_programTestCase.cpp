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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016150_1 "dEQP-GLES31.functional.state_query.pr"
#define VkglTestCase_016150_2 "ogram.program_separable_get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016150, VkglTestCase_016150_1, VkglTestCase_016150_2);

#define VkglTestCase_016151_1 "dEQP-GLES31.functional.state_query.progr"
#define VkglTestCase_016151_2 "am.compute_work_group_size_get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016151, VkglTestCase_016151_1, VkglTestCase_016151_2);

#define VkglTestCase_016152_1 "dEQP-GLES31.functional.state_query.program."
#define VkglTestCase_016152_2 "active_atomic_counter_buffers_get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016152, VkglTestCase_016152_1, VkglTestCase_016152_2);

#define VkglTestCase_016153_1 "dEQP-GLES31.functional.state_query.prog"
#define VkglTestCase_016153_2 "ram.geometry_shader_state_get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016153, VkglTestCase_016153_1, VkglTestCase_016153_2);

#define VkglTestCase_016154_1 "dEQP-GLES31.functional.state_query.progr"
#define VkglTestCase_016154_2 "am.tesselation_shader_state_get_programiv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016154, VkglTestCase_016154_1, VkglTestCase_016154_2);

#define VkglTestCase_016155_1 "dEQP-GLES31.functional.state_query.pro"
#define VkglTestCase_016155_2 "gram.info_log_vertex_fragment_link_fail"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016155, VkglTestCase_016155_1, VkglTestCase_016155_2);

#define VkglTestCase_016156_1 "dEQP-GLES31.functional.state_query"
#define VkglTestCase_016156_2 ".program.info_log_compute_link_fail"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016156, VkglTestCase_016156_1, VkglTestCase_016156_2);

#define VkglTestCase_016157_1 "dEQP-GLES31.functional.state_query."
#define VkglTestCase_016157_2 "program.info_log_geometry_link_fail"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016157, VkglTestCase_016157_1, VkglTestCase_016157_2);

#define VkglTestCase_016158_1 "dEQP-GLES31.functional.state_query.pr"
#define VkglTestCase_016158_2 "ogram.info_log_tessellation_link_fail"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016158, VkglTestCase_016158_1, VkglTestCase_016158_2);
