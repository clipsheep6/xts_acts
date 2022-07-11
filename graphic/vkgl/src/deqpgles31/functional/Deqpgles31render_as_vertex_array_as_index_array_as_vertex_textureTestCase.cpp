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
#include "../ActsDeqpgles310014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013966_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ve"
#define VkglTestCase_013966_2 "rtex_array_as_index_array_as_vertex_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013966, VkglTestCase_013966_1, VkglTestCase_013966_2);

#define VkglTestCase_013967_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ve"
#define VkglTestCase_013967_2 "rtex_array_as_index_array_as_vertex_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013967, VkglTestCase_013967_1, VkglTestCase_013967_2);

#define VkglTestCase_013968_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ver"
#define VkglTestCase_013968_2 "tex_array_as_index_array_as_vertex_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013968, VkglTestCase_013968_1, VkglTestCase_013968_2);

#define VkglTestCase_013969_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ver"
#define VkglTestCase_013969_2 "tex_array_as_index_array_as_vertex_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013969, VkglTestCase_013969_1, VkglTestCase_013969_2);

#define VkglTestCase_013970_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vert"
#define VkglTestCase_013970_2 "ex_array_as_index_array_as_vertex_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013970, VkglTestCase_013970_1, VkglTestCase_013970_2);

#define VkglTestCase_013971_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ve"
#define VkglTestCase_013971_2 "rtex_array_as_index_array_as_vertex_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013971, VkglTestCase_013971_1, VkglTestCase_013971_2);

#define VkglTestCase_013972_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ve"
#define VkglTestCase_013972_2 "rtex_array_as_index_array_as_vertex_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013972, VkglTestCase_013972_1, VkglTestCase_013972_2);

#define VkglTestCase_013973_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ver"
#define VkglTestCase_013973_2 "tex_array_as_index_array_as_vertex_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013973, VkglTestCase_013973_1, VkglTestCase_013973_2);

#define VkglTestCase_013974_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ver"
#define VkglTestCase_013974_2 "tex_array_as_index_array_as_vertex_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013974, VkglTestCase_013974_1, VkglTestCase_013974_2);

#define VkglTestCase_013975_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vert"
#define VkglTestCase_013975_2 "ex_array_as_index_array_as_vertex_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013975, VkglTestCase_013975_1, VkglTestCase_013975_2);

#define VkglTestCase_013976_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vert"
#define VkglTestCase_013976_2 "ex_array_as_index_array_as_vertex_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013976, VkglTestCase_013976_1, VkglTestCase_013976_2);
