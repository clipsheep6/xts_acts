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

#define VkglTestCase_008291_1 "dEQP-GLES31.functional.tessellation.user_defined_io.pe"
#define VkglTestCase_008291_2 "r_vertex.vertex_io_array_size_shader_builtin.triangles"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008291, VkglTestCase_008291_1, VkglTestCase_008291_2);

#define VkglTestCase_008292_1 "dEQP-GLES31.functional.tessellation.user_defined_io."
#define VkglTestCase_008292_2 "per_vertex.vertex_io_array_size_shader_builtin.quads"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008292, VkglTestCase_008292_1, VkglTestCase_008292_2);

#define VkglTestCase_008293_1 "dEQP-GLES31.functional.tessellation.user_defined_io.p"
#define VkglTestCase_008293_2 "er_vertex.vertex_io_array_size_shader_builtin.isolines"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008293, VkglTestCase_008293_1, VkglTestCase_008293_2);

#define VkglTestCase_008294_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex.ve"
#define VkglTestCase_008294_2 "rtex_io_array_size_shader_builtin.triangles_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008294, VkglTestCase_008294_1, VkglTestCase_008294_2);

#define VkglTestCase_008295_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex."
#define VkglTestCase_008295_2 "vertex_io_array_size_shader_builtin.quads_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008295, VkglTestCase_008295_1, VkglTestCase_008295_2);

#define VkglTestCase_008296_1 "dEQP-GLES31.functional.tessellation.user_defined_io.per_vertex.v"
#define VkglTestCase_008296_2 "ertex_io_array_size_shader_builtin.isolines_explicit_tcs_out_size"
SHRINK_HWTEST_F(ActsDeqpgles310009TestSuite, TestCase_008296, VkglTestCase_008296_1, VkglTestCase_008296_2);
