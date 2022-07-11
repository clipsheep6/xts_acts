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

#define VkglTestCase_013900_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013900_2 "fer.render.as_vertex_array.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013900, VkglTestCase_013900_1, VkglTestCase_013900_2);

#define VkglTestCase_013901_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013901_2 "fer.render.as_vertex_array.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013901, VkglTestCase_013901_1, VkglTestCase_013901_2);

#define VkglTestCase_013902_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013902_2 "er.render.as_vertex_array.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013902, VkglTestCase_013902_1, VkglTestCase_013902_2);

#define VkglTestCase_013903_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013903_2 "er.render.as_vertex_array.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013903, VkglTestCase_013903_1, VkglTestCase_013903_2);

#define VkglTestCase_013904_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013904_2 "er.render.as_vertex_array.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013904, VkglTestCase_013904_1, VkglTestCase_013904_2);

#define VkglTestCase_013905_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_013905_2 "ffer.render.as_vertex_array.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013905, VkglTestCase_013905_1, VkglTestCase_013905_2);

#define VkglTestCase_013906_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_013906_2 "ffer.render.as_vertex_array.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013906, VkglTestCase_013906_1, VkglTestCase_013906_2);

#define VkglTestCase_013907_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013907_2 "fer.render.as_vertex_array.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013907, VkglTestCase_013907_1, VkglTestCase_013907_2);

#define VkglTestCase_013908_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013908_2 "fer.render.as_vertex_array.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013908, VkglTestCase_013908_1, VkglTestCase_013908_2);

#define VkglTestCase_013909_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013909_2 "r.render.as_vertex_array.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013909, VkglTestCase_013909_1, VkglTestCase_013909_2);

#define VkglTestCase_013910_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013910_2 "r.render.as_vertex_array.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013910, VkglTestCase_013910_1, VkglTestCase_013910_2);
