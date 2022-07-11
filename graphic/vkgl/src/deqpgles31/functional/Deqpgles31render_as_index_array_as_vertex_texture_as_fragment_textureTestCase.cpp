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

#define VkglTestCase_014043_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_inde"
#define VkglTestCase_014043_2 "x_array_as_vertex_texture_as_fragment_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014043, VkglTestCase_014043_1, VkglTestCase_014043_2);

#define VkglTestCase_014044_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_inde"
#define VkglTestCase_014044_2 "x_array_as_vertex_texture_as_fragment_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014044, VkglTestCase_014044_1, VkglTestCase_014044_2);

#define VkglTestCase_014045_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_index"
#define VkglTestCase_014045_2 "_array_as_vertex_texture_as_fragment_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014045, VkglTestCase_014045_1, VkglTestCase_014045_2);

#define VkglTestCase_014046_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_index"
#define VkglTestCase_014046_2 "_array_as_vertex_texture_as_fragment_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014046, VkglTestCase_014046_1, VkglTestCase_014046_2);

#define VkglTestCase_014047_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_index_"
#define VkglTestCase_014047_2 "array_as_vertex_texture_as_fragment_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014047, VkglTestCase_014047_1, VkglTestCase_014047_2);

#define VkglTestCase_014048_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_inde"
#define VkglTestCase_014048_2 "x_array_as_vertex_texture_as_fragment_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014048, VkglTestCase_014048_1, VkglTestCase_014048_2);

#define VkglTestCase_014049_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_inde"
#define VkglTestCase_014049_2 "x_array_as_vertex_texture_as_fragment_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014049, VkglTestCase_014049_1, VkglTestCase_014049_2);

#define VkglTestCase_014050_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_index"
#define VkglTestCase_014050_2 "_array_as_vertex_texture_as_fragment_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014050, VkglTestCase_014050_1, VkglTestCase_014050_2);

#define VkglTestCase_014051_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_index"
#define VkglTestCase_014051_2 "_array_as_vertex_texture_as_fragment_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014051, VkglTestCase_014051_1, VkglTestCase_014051_2);

#define VkglTestCase_014052_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_index_"
#define VkglTestCase_014052_2 "array_as_vertex_texture_as_fragment_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014052, VkglTestCase_014052_1, VkglTestCase_014052_2);

#define VkglTestCase_014053_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_index_"
#define VkglTestCase_014053_2 "array_as_vertex_texture_as_fragment_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014053, VkglTestCase_014053_1, VkglTestCase_014053_2);
