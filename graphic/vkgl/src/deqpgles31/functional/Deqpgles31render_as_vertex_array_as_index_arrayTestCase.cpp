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

#define VkglTestCase_013922_1 "dEQP-GLES31.functional.texture.texture_buffer.ren"
#define VkglTestCase_013922_2 "der.as_vertex_array_as_index_array.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013922, VkglTestCase_013922_1, VkglTestCase_013922_2);

#define VkglTestCase_013923_1 "dEQP-GLES31.functional.texture.texture_buffer.ren"
#define VkglTestCase_013923_2 "der.as_vertex_array_as_index_array.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013923, VkglTestCase_013923_1, VkglTestCase_013923_2);

#define VkglTestCase_013924_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013924_2 "er.as_vertex_array_as_index_array.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013924, VkglTestCase_013924_1, VkglTestCase_013924_2);

#define VkglTestCase_013925_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013925_2 "er.as_vertex_array_as_index_array.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013925, VkglTestCase_013925_1, VkglTestCase_013925_2);

#define VkglTestCase_013926_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013926_2 "r.as_vertex_array_as_index_array.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013926, VkglTestCase_013926_1, VkglTestCase_013926_2);

#define VkglTestCase_013927_1 "dEQP-GLES31.functional.texture.texture_buffer.ren"
#define VkglTestCase_013927_2 "der.as_vertex_array_as_index_array.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013927, VkglTestCase_013927_1, VkglTestCase_013927_2);

#define VkglTestCase_013928_1 "dEQP-GLES31.functional.texture.texture_buffer.ren"
#define VkglTestCase_013928_2 "der.as_vertex_array_as_index_array.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013928, VkglTestCase_013928_1, VkglTestCase_013928_2);

#define VkglTestCase_013929_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013929_2 "er.as_vertex_array_as_index_array.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013929, VkglTestCase_013929_1, VkglTestCase_013929_2);

#define VkglTestCase_013930_1 "dEQP-GLES31.functional.texture.texture_buffer.rend"
#define VkglTestCase_013930_2 "er.as_vertex_array_as_index_array.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013930, VkglTestCase_013930_1, VkglTestCase_013930_2);

#define VkglTestCase_013931_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013931_2 "r.as_vertex_array_as_index_array.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013931, VkglTestCase_013931_1, VkglTestCase_013931_2);

#define VkglTestCase_013932_1 "dEQP-GLES31.functional.texture.texture_buffer.rende"
#define VkglTestCase_013932_2 "r.as_vertex_array_as_index_array.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013932, VkglTestCase_013932_1, VkglTestCase_013932_2);
