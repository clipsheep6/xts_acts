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
#include "../ActsDeqpgles310015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014032_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_verte"
#define VkglTestCase_014032_2 "x_array_as_vertex_texture_as_fragment_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014032, VkglTestCase_014032_1, VkglTestCase_014032_2);

#define VkglTestCase_014033_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_verte"
#define VkglTestCase_014033_2 "x_array_as_vertex_texture_as_fragment_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014033, VkglTestCase_014033_1, VkglTestCase_014033_2);

#define VkglTestCase_014034_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex"
#define VkglTestCase_014034_2 "_array_as_vertex_texture_as_fragment_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014034, VkglTestCase_014034_1, VkglTestCase_014034_2);

#define VkglTestCase_014035_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex"
#define VkglTestCase_014035_2 "_array_as_vertex_texture_as_fragment_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014035, VkglTestCase_014035_1, VkglTestCase_014035_2);

#define VkglTestCase_014036_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex"
#define VkglTestCase_014036_2 "_array_as_vertex_texture_as_fragment_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014036, VkglTestCase_014036_1, VkglTestCase_014036_2);

#define VkglTestCase_014037_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vert"
#define VkglTestCase_014037_2 "ex_array_as_vertex_texture_as_fragment_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014037, VkglTestCase_014037_1, VkglTestCase_014037_2);

#define VkglTestCase_014038_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vert"
#define VkglTestCase_014038_2 "ex_array_as_vertex_texture_as_fragment_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014038, VkglTestCase_014038_1, VkglTestCase_014038_2);

#define VkglTestCase_014039_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_verte"
#define VkglTestCase_014039_2 "x_array_as_vertex_texture_as_fragment_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014039, VkglTestCase_014039_1, VkglTestCase_014039_2);

#define VkglTestCase_014040_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_verte"
#define VkglTestCase_014040_2 "x_array_as_vertex_texture_as_fragment_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014040, VkglTestCase_014040_1, VkglTestCase_014040_2);

#define VkglTestCase_014041_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_"
#define VkglTestCase_014041_2 "array_as_vertex_texture_as_fragment_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014041, VkglTestCase_014041_1, VkglTestCase_014041_2);

#define VkglTestCase_014042_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_"
#define VkglTestCase_014042_2 "array_as_vertex_texture_as_fragment_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014042, VkglTestCase_014042_1, VkglTestCase_014042_2);
