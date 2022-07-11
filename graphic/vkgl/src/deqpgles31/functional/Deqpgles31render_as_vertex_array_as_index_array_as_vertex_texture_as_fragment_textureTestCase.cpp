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

#define VkglTestCase_014054_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array"
#define VkglTestCase_014054_2 "_as_index_array_as_vertex_texture_as_fragment_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014054, VkglTestCase_014054_1, VkglTestCase_014054_2);

#define VkglTestCase_014055_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array"
#define VkglTestCase_014055_2 "_as_index_array_as_vertex_texture_as_fragment_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014055, VkglTestCase_014055_1, VkglTestCase_014055_2);

#define VkglTestCase_014056_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array_"
#define VkglTestCase_014056_2 "as_index_array_as_vertex_texture_as_fragment_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014056, VkglTestCase_014056_1, VkglTestCase_014056_2);

#define VkglTestCase_014057_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array_"
#define VkglTestCase_014057_2 "as_index_array_as_vertex_texture_as_fragment_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014057, VkglTestCase_014057_1, VkglTestCase_014057_2);

#define VkglTestCase_014058_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array_a"
#define VkglTestCase_014058_2 "s_index_array_as_vertex_texture_as_fragment_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014058, VkglTestCase_014058_1, VkglTestCase_014058_2);

#define VkglTestCase_014059_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array"
#define VkglTestCase_014059_2 "_as_index_array_as_vertex_texture_as_fragment_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014059, VkglTestCase_014059_1, VkglTestCase_014059_2);

#define VkglTestCase_014060_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array"
#define VkglTestCase_014060_2 "_as_index_array_as_vertex_texture_as_fragment_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014060, VkglTestCase_014060_1, VkglTestCase_014060_2);

#define VkglTestCase_014061_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array_"
#define VkglTestCase_014061_2 "as_index_array_as_vertex_texture_as_fragment_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014061, VkglTestCase_014061_1, VkglTestCase_014061_2);

#define VkglTestCase_014062_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array_"
#define VkglTestCase_014062_2 "as_index_array_as_vertex_texture_as_fragment_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014062, VkglTestCase_014062_1, VkglTestCase_014062_2);

#define VkglTestCase_014063_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array_a"
#define VkglTestCase_014063_2 "s_index_array_as_vertex_texture_as_fragment_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014063, VkglTestCase_014063_1, VkglTestCase_014063_2);

#define VkglTestCase_014064_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vertex_array_a"
#define VkglTestCase_014064_2 "s_index_array_as_vertex_texture_as_fragment_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014064, VkglTestCase_014064_1, VkglTestCase_014064_2);
