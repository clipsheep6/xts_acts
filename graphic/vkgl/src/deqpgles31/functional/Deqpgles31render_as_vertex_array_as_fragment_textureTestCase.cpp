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

#define VkglTestCase_013988_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013988_2 ".as_vertex_array_as_fragment_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013988, VkglTestCase_013988_1, VkglTestCase_013988_2);

#define VkglTestCase_013989_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013989_2 ".as_vertex_array_as_fragment_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013989, VkglTestCase_013989_1, VkglTestCase_013989_2);

#define VkglTestCase_013990_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_013990_2 "as_vertex_array_as_fragment_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013990, VkglTestCase_013990_1, VkglTestCase_013990_2);

#define VkglTestCase_013991_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_013991_2 "as_vertex_array_as_fragment_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013991, VkglTestCase_013991_1, VkglTestCase_013991_2);

#define VkglTestCase_013992_1 "dEQP-GLES31.functional.texture.texture_buffer.render."
#define VkglTestCase_013992_2 "as_vertex_array_as_fragment_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013992, VkglTestCase_013992_1, VkglTestCase_013992_2);

#define VkglTestCase_013993_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013993_2 "r.as_vertex_array_as_fragment_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013993, VkglTestCase_013993_1, VkglTestCase_013993_2);

#define VkglTestCase_013994_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013994_2 "r.as_vertex_array_as_fragment_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013994, VkglTestCase_013994_1, VkglTestCase_013994_2);

#define VkglTestCase_013995_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013995_2 ".as_vertex_array_as_fragment_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013995, VkglTestCase_013995_1, VkglTestCase_013995_2);

#define VkglTestCase_013996_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013996_2 ".as_vertex_array_as_fragment_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013996, VkglTestCase_013996_1, VkglTestCase_013996_2);

#define VkglTestCase_013997_1 "dEQP-GLES31.functional.texture.texture_buffer.render.a"
#define VkglTestCase_013997_2 "s_vertex_array_as_fragment_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013997, VkglTestCase_013997_1, VkglTestCase_013997_2);

#define VkglTestCase_013998_1 "dEQP-GLES31.functional.texture.texture_buffer.render.a"
#define VkglTestCase_013998_2 "s_vertex_array_as_fragment_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013998, VkglTestCase_013998_1, VkglTestCase_013998_2);
