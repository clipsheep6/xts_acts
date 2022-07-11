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
#include "../ActsDeqpgles310009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008297_1 "dEQP-GLES31.functional.tessellation.user_defined_"
#define VkglTestCase_008297_2 "io.per_vertex.vertex_io_array_size_query.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008297, VkglTestCase_008297_1, VkglTestCase_008297_2);

#define VkglTestCase_008298_1 "dEQP-GLES31.functional.tessellation.user_define"
#define VkglTestCase_008298_2 "d_io.per_vertex.vertex_io_array_size_query.quads"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008298, VkglTestCase_008298_1, VkglTestCase_008298_2);

#define VkglTestCase_008299_1 "dEQP-GLES31.functional.tessellation.user_defined_"
#define VkglTestCase_008299_2 "io.per_vertex.vertex_io_array_size_query.isolines"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008299, VkglTestCase_008299_1, VkglTestCase_008299_2);

#define VkglTestCase_008300_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vert"
#define VkglTestCase_008300_2 "ex.vertex_io_array_size_query.triangles_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008300, VkglTestCase_008300_1, VkglTestCase_008300_2);

#define VkglTestCase_008301_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_ve"
#define VkglTestCase_008301_2 "rtex.vertex_io_array_size_query.quads_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008301, VkglTestCase_008301_1, VkglTestCase_008301_2);

#define VkglTestCase_008302_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vert"
#define VkglTestCase_008302_2 "ex.vertex_io_array_size_query.isolines_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008302, VkglTestCase_008302_1, VkglTestCase_008302_2);
