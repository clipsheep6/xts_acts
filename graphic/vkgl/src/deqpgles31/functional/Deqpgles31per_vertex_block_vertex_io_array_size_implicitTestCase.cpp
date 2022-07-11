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

#define VkglTestCase_008303_1 "dEQP-GLES31.functional.tessellation.user_defined_io.pe"
#define VkglTestCase_008303_2 "r_vertex_block.vertex_io_array_size_implicit.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008303, VkglTestCase_008303_1, VkglTestCase_008303_2);

#define VkglTestCase_008304_1 "dEQP-GLES31.functional.tessellation.user_defined_io."
#define VkglTestCase_008304_2 "per_vertex_block.vertex_io_array_size_implicit.quads"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008304, VkglTestCase_008304_1, VkglTestCase_008304_2);

#define VkglTestCase_008305_1 "dEQP-GLES31.functional.tessellation.user_defined_io.p"
#define VkglTestCase_008305_2 "er_vertex_block.vertex_io_array_size_implicit.isolines"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008305, VkglTestCase_008305_1, VkglTestCase_008305_2);

#define VkglTestCase_008306_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex_bl"
#define VkglTestCase_008306_2 "ock.vertex_io_array_size_implicit.triangles_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008306, VkglTestCase_008306_1, VkglTestCase_008306_2);

#define VkglTestCase_008307_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex_"
#define VkglTestCase_008307_2 "block.vertex_io_array_size_implicit.quads_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008307, VkglTestCase_008307_1, VkglTestCase_008307_2);

#define VkglTestCase_008308_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex_b"
#define VkglTestCase_008308_2 "lock.vertex_io_array_size_implicit.isolines_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008308, VkglTestCase_008308_1, VkglTestCase_008308_2);
