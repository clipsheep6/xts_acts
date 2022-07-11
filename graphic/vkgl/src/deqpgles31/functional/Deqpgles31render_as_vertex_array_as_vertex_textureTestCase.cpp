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

#define VkglTestCase_013944_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013944_2 "r.as_vertex_array_as_vertex_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013944, VkglTestCase_013944_1, VkglTestCase_013944_2);

#define VkglTestCase_013945_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013945_2 "r.as_vertex_array_as_vertex_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013945, VkglTestCase_013945_1, VkglTestCase_013945_2);

#define VkglTestCase_013946_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013946_2 ".as_vertex_array_as_vertex_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013946, VkglTestCase_013946_1, VkglTestCase_013946_2);

#define VkglTestCase_013947_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013947_2 ".as_vertex_array_as_vertex_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013947, VkglTestCase_013947_1, VkglTestCase_013947_2);

#define VkglTestCase_013948_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013948_2 ".as_vertex_array_as_vertex_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013948, VkglTestCase_013948_1, VkglTestCase_013948_2);

#define VkglTestCase_013949_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013949_2 "er.as_vertex_array_as_vertex_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013949, VkglTestCase_013949_1, VkglTestCase_013949_2);

#define VkglTestCase_013950_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013950_2 "er.as_vertex_array_as_vertex_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013950, VkglTestCase_013950_1, VkglTestCase_013950_2);

#define VkglTestCase_013951_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013951_2 "r.as_vertex_array_as_vertex_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013951, VkglTestCase_013951_1, VkglTestCase_013951_2);

#define VkglTestCase_013952_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013952_2 "r.as_vertex_array_as_vertex_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013952, VkglTestCase_013952_1, VkglTestCase_013952_2);

#define VkglTestCase_013953_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_013953_2 "as_vertex_array_as_vertex_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013953, VkglTestCase_013953_1, VkglTestCase_013953_2);

#define VkglTestCase_013954_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_013954_2 "as_vertex_array_as_vertex_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013954, VkglTestCase_013954_1, VkglTestCase_013954_2);
