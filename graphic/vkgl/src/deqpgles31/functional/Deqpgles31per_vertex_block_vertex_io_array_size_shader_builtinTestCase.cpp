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

#define VkglTestCase_008309_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_v"
#define VkglTestCase_008309_2 "ertex_block.vertex_io_array_size_shader_builtin.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008309, VkglTestCase_008309_1, VkglTestCase_008309_2);

#define VkglTestCase_008310_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per"
#define VkglTestCase_008310_2 "_vertex_block.vertex_io_array_size_shader_builtin.quads"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008310, VkglTestCase_008310_1, VkglTestCase_008310_2);

#define VkglTestCase_008311_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_"
#define VkglTestCase_008311_2 "vertex_block.vertex_io_array_size_shader_builtin.isolines"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008311, VkglTestCase_008311_1, VkglTestCase_008311_2);

#define VkglTestCase_008312_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex_block"
#define VkglTestCase_008312_2 ".vertex_io_array_size_shader_builtin.triangles_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008312, VkglTestCase_008312_1, VkglTestCase_008312_2);

#define VkglTestCase_008313_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex_blo"
#define VkglTestCase_008313_2 "ck.vertex_io_array_size_shader_builtin.quads_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008313, VkglTestCase_008313_1, VkglTestCase_008313_2);

#define VkglTestCase_008314_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex_bloc"
#define VkglTestCase_008314_2 "k.vertex_io_array_size_shader_builtin.isolines_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008314, VkglTestCase_008314_1, VkglTestCase_008314_2);
