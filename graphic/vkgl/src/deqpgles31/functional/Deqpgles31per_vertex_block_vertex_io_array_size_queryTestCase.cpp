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

#define VkglTestCase_008315_1 "dEQP-GLES31.functional.tessellation.user_defined_io."
#define VkglTestCase_008315_2 "per_vertex_block.vertex_io_array_size_query.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008315, VkglTestCase_008315_1, VkglTestCase_008315_2);

#define VkglTestCase_008316_1 "dEQP-GLES31.functional.tessellation.user_defined_i"
#define VkglTestCase_008316_2 "o.per_vertex_block.vertex_io_array_size_query.quads"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008316, VkglTestCase_008316_1, VkglTestCase_008316_2);

#define VkglTestCase_008317_1 "dEQP-GLES31.functional.tessellation.user_defined_io."
#define VkglTestCase_008317_2 "per_vertex_block.vertex_io_array_size_query.isolines"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008317, VkglTestCase_008317_1, VkglTestCase_008317_2);

#define VkglTestCase_008318_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex_"
#define VkglTestCase_008318_2 "block.vertex_io_array_size_query.triangles_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008318, VkglTestCase_008318_1, VkglTestCase_008318_2);

#define VkglTestCase_008319_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_verte"
#define VkglTestCase_008319_2 "x_block.vertex_io_array_size_query.quads_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008319, VkglTestCase_008319_1, VkglTestCase_008319_2);

#define VkglTestCase_008320_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex_"
#define VkglTestCase_008320_2 "block.vertex_io_array_size_query.isolines_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008320, VkglTestCase_008320_1, VkglTestCase_008320_2);
