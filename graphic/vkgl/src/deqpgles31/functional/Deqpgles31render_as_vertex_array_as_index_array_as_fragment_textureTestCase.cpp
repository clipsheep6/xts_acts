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

#define VkglTestCase_014010_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ver"
#define VkglTestCase_014010_2 "tex_array_as_index_array_as_fragment_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014010, VkglTestCase_014010_1, VkglTestCase_014010_2);

#define VkglTestCase_014011_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ver"
#define VkglTestCase_014011_2 "tex_array_as_index_array_as_fragment_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014011, VkglTestCase_014011_1, VkglTestCase_014011_2);

#define VkglTestCase_014012_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vert"
#define VkglTestCase_014012_2 "ex_array_as_index_array_as_fragment_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014012, VkglTestCase_014012_1, VkglTestCase_014012_2);

#define VkglTestCase_014013_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vert"
#define VkglTestCase_014013_2 "ex_array_as_index_array_as_fragment_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014013, VkglTestCase_014013_1, VkglTestCase_014013_2);

#define VkglTestCase_014014_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_verte"
#define VkglTestCase_014014_2 "x_array_as_index_array_as_fragment_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014014, VkglTestCase_014014_1, VkglTestCase_014014_2);

#define VkglTestCase_014015_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ver"
#define VkglTestCase_014015_2 "tex_array_as_index_array_as_fragment_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014015, VkglTestCase_014015_1, VkglTestCase_014015_2);

#define VkglTestCase_014016_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_ver"
#define VkglTestCase_014016_2 "tex_array_as_index_array_as_fragment_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014016, VkglTestCase_014016_1, VkglTestCase_014016_2);

#define VkglTestCase_014017_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vert"
#define VkglTestCase_014017_2 "ex_array_as_index_array_as_fragment_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014017, VkglTestCase_014017_1, VkglTestCase_014017_2);

#define VkglTestCase_014018_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_vert"
#define VkglTestCase_014018_2 "ex_array_as_index_array_as_fragment_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014018, VkglTestCase_014018_1, VkglTestCase_014018_2);

#define VkglTestCase_014019_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_verte"
#define VkglTestCase_014019_2 "x_array_as_index_array_as_fragment_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014019, VkglTestCase_014019_1, VkglTestCase_014019_2);

#define VkglTestCase_014020_1 "dEQP-GLES31.functional.texture.texture_buffer.render.as_verte"
#define VkglTestCase_014020_2 "x_array_as_index_array_as_fragment_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014020, VkglTestCase_014020_1, VkglTestCase_014020_2);
