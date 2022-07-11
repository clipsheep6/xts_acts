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

#define VkglTestCase_008285_1 "dEQP-GLES31.functional.tessellation.user_defined_io"
#define VkglTestCase_008285_2 ".per_vertex.vertex_io_array_size_implicit.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008285, VkglTestCase_008285_1, VkglTestCase_008285_2);

#define VkglTestCase_008286_1 "dEQP-GLES31.functional.tessellation.user_defined_"
#define VkglTestCase_008286_2 "io.per_vertex.vertex_io_array_size_implicit.quads"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008286, VkglTestCase_008286_1, VkglTestCase_008286_2);

#define VkglTestCase_008287_1 "dEQP-GLES31.functional.tessellation.user_defined_i"
#define VkglTestCase_008287_2 "o.per_vertex.vertex_io_array_size_implicit.isolines"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008287, VkglTestCase_008287_1, VkglTestCase_008287_2);

#define VkglTestCase_008288_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex"
#define VkglTestCase_008288_2 ".vertex_io_array_size_implicit.triangles_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008288, VkglTestCase_008288_1, VkglTestCase_008288_2);

#define VkglTestCase_008289_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vert"
#define VkglTestCase_008289_2 "ex.vertex_io_array_size_implicit.quads_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008289, VkglTestCase_008289_1, VkglTestCase_008289_2);

#define VkglTestCase_008290_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_verte"
#define VkglTestCase_008290_2 "x.vertex_io_array_size_implicit.isolines_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008290, VkglTestCase_008290_1, VkglTestCase_008290_2);
