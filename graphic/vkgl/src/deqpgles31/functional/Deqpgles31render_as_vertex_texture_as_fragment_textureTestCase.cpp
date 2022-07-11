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

#define VkglTestCase_014021_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_014021_2 "as_vertex_texture_as_fragment_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014021, VkglTestCase_014021_1, VkglTestCase_014021_2);

#define VkglTestCase_014022_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_014022_2 "as_vertex_texture_as_fragment_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014022, VkglTestCase_014022_1, VkglTestCase_014022_2);

#define VkglTestCase_014023_1 "dEQP-GLES31.functional.texture.texture_buffer.render.a"
#define VkglTestCase_014023_2 "s_vertex_texture_as_fragment_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014023, VkglTestCase_014023_1, VkglTestCase_014023_2);

#define VkglTestCase_014024_1 "dEQP-GLES31.functional.texture.texture_buffer.render.a"
#define VkglTestCase_014024_2 "s_vertex_texture_as_fragment_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014024, VkglTestCase_014024_1, VkglTestCase_014024_2);

#define VkglTestCase_014025_1 "dEQP-GLES31.functional.texture.texture_buffer.render.a"
#define VkglTestCase_014025_2 "s_vertex_texture_as_fragment_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014025, VkglTestCase_014025_1, VkglTestCase_014025_2);

#define VkglTestCase_014026_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_014026_2 ".as_vertex_texture_as_fragment_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014026, VkglTestCase_014026_1, VkglTestCase_014026_2);

#define VkglTestCase_014027_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_014027_2 ".as_vertex_texture_as_fragment_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014027, VkglTestCase_014027_1, VkglTestCase_014027_2);

#define VkglTestCase_014028_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_014028_2 "as_vertex_texture_as_fragment_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014028, VkglTestCase_014028_1, VkglTestCase_014028_2);

#define VkglTestCase_014029_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_014029_2 "as_vertex_texture_as_fragment_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014029, VkglTestCase_014029_1, VkglTestCase_014029_2);

#define VkglTestCase_014030_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as"
#define VkglTestCase_014030_2 "_vertex_texture_as_fragment_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014030, VkglTestCase_014030_1, VkglTestCase_014030_2);

#define VkglTestCase_014031_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as"
#define VkglTestCase_014031_2 "_vertex_texture_as_fragment_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014031, VkglTestCase_014031_1, VkglTestCase_014031_2);
