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

#define VkglTestCase_013955_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013955_2 "er.as_index_array_as_vertex_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013955, VkglTestCase_013955_1, VkglTestCase_013955_2);

#define VkglTestCase_013956_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013956_2 "er.as_index_array_as_vertex_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013956, VkglTestCase_013956_1, VkglTestCase_013956_2);

#define VkglTestCase_013957_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013957_2 "r.as_index_array_as_vertex_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013957, VkglTestCase_013957_1, VkglTestCase_013957_2);

#define VkglTestCase_013958_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013958_2 "r.as_index_array_as_vertex_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013958, VkglTestCase_013958_1, VkglTestCase_013958_2);

#define VkglTestCase_013959_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013959_2 ".as_index_array_as_vertex_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013959, VkglTestCase_013959_1, VkglTestCase_013959_2);

#define VkglTestCase_013960_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013960_2 "er.as_index_array_as_vertex_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013960, VkglTestCase_013960_1, VkglTestCase_013960_2);

#define VkglTestCase_013961_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013961_2 "er.as_index_array_as_vertex_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013961, VkglTestCase_013961_1, VkglTestCase_013961_2);

#define VkglTestCase_013962_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013962_2 "r.as_index_array_as_vertex_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013962, VkglTestCase_013962_1, VkglTestCase_013962_2);

#define VkglTestCase_013963_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013963_2 "r.as_index_array_as_vertex_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013963, VkglTestCase_013963_1, VkglTestCase_013963_2);

#define VkglTestCase_013964_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013964_2 ".as_index_array_as_vertex_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013964, VkglTestCase_013964_1, VkglTestCase_013964_2);

#define VkglTestCase_013965_1 "dEQP-GLES31.functional.texture.texture_buffer.render"
#define VkglTestCase_013965_2 ".as_index_array_as_vertex_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013965, VkglTestCase_013965_1, VkglTestCase_013965_2);
