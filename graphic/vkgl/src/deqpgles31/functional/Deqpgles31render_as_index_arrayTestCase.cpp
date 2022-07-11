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

#define VkglTestCase_013911_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_013911_2 "ffer.render.as_index_array.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013911, VkglTestCase_013911_1, VkglTestCase_013911_2);

#define VkglTestCase_013912_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_013912_2 "ffer.render.as_index_array.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013912, VkglTestCase_013912_1, VkglTestCase_013912_2);

#define VkglTestCase_013913_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013913_2 "fer.render.as_index_array.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013913, VkglTestCase_013913_1, VkglTestCase_013913_2);

#define VkglTestCase_013914_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013914_2 "fer.render.as_index_array.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013914, VkglTestCase_013914_1, VkglTestCase_013914_2);

#define VkglTestCase_013915_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013915_2 "er.render.as_index_array.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013915, VkglTestCase_013915_1, VkglTestCase_013915_2);

#define VkglTestCase_013916_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_013916_2 "ffer.render.as_index_array.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013916, VkglTestCase_013916_1, VkglTestCase_013916_2);

#define VkglTestCase_013917_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_013917_2 "ffer.render.as_index_array.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013917, VkglTestCase_013917_1, VkglTestCase_013917_2);

#define VkglTestCase_013918_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013918_2 "fer.render.as_index_array.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013918, VkglTestCase_013918_1, VkglTestCase_013918_2);

#define VkglTestCase_013919_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013919_2 "fer.render.as_index_array.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013919, VkglTestCase_013919_1, VkglTestCase_013919_2);

#define VkglTestCase_013920_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013920_2 "er.render.as_index_array.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013920, VkglTestCase_013920_1, VkglTestCase_013920_2);

#define VkglTestCase_013921_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013921_2 "er.render.as_index_array.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013921, VkglTestCase_013921_1, VkglTestCase_013921_2);
