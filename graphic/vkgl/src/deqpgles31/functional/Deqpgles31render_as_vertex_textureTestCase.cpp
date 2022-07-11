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

#define VkglTestCase_013933_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013933_2 "er.render.as_vertex_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013933, VkglTestCase_013933_1, VkglTestCase_013933_2);

#define VkglTestCase_013934_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013934_2 "er.render.as_vertex_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013934, VkglTestCase_013934_1, VkglTestCase_013934_2);

#define VkglTestCase_013935_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013935_2 "r.render.as_vertex_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013935, VkglTestCase_013935_1, VkglTestCase_013935_2);

#define VkglTestCase_013936_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013936_2 "r.render.as_vertex_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013936, VkglTestCase_013936_1, VkglTestCase_013936_2);

#define VkglTestCase_013937_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013937_2 "r.render.as_vertex_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013937, VkglTestCase_013937_1, VkglTestCase_013937_2);

#define VkglTestCase_013938_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013938_2 "fer.render.as_vertex_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013938, VkglTestCase_013938_1, VkglTestCase_013938_2);

#define VkglTestCase_013939_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_013939_2 "fer.render.as_vertex_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013939, VkglTestCase_013939_1, VkglTestCase_013939_2);

#define VkglTestCase_013940_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013940_2 "er.render.as_vertex_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013940, VkglTestCase_013940_1, VkglTestCase_013940_2);

#define VkglTestCase_013941_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013941_2 "er.render.as_vertex_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013941, VkglTestCase_013941_1, VkglTestCase_013941_2);

#define VkglTestCase_013942_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013942_2 ".render.as_vertex_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013942, VkglTestCase_013942_1, VkglTestCase_013942_2);

#define VkglTestCase_013943_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013943_2 ".render.as_vertex_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013943, VkglTestCase_013943_1, VkglTestCase_013943_2);
