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

#define VkglTestCase_013977_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013977_2 "r.render.as_fragment_texture.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013977, VkglTestCase_013977_1, VkglTestCase_013977_2);

#define VkglTestCase_013978_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013978_2 "r.render.as_fragment_texture.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013978, VkglTestCase_013978_1, VkglTestCase_013978_2);

#define VkglTestCase_013979_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013979_2 ".render.as_fragment_texture.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013979, VkglTestCase_013979_1, VkglTestCase_013979_2);

#define VkglTestCase_013980_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013980_2 ".render.as_fragment_texture.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013980, VkglTestCase_013980_1, VkglTestCase_013980_2);

#define VkglTestCase_013981_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_013981_2 ".render.as_fragment_texture.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013981, VkglTestCase_013981_1, VkglTestCase_013981_2);

#define VkglTestCase_013982_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013982_2 "er.render.as_fragment_texture.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013982, VkglTestCase_013982_1, VkglTestCase_013982_2);

#define VkglTestCase_013983_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_013983_2 "er.render.as_fragment_texture.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013983, VkglTestCase_013983_1, VkglTestCase_013983_2);

#define VkglTestCase_013984_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013984_2 "r.render.as_fragment_texture.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013984, VkglTestCase_013984_1, VkglTestCase_013984_2);

#define VkglTestCase_013985_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_013985_2 "r.render.as_fragment_texture.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013985, VkglTestCase_013985_1, VkglTestCase_013985_2);

#define VkglTestCase_013986_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_013986_2 "render.as_fragment_texture.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013986, VkglTestCase_013986_1, VkglTestCase_013986_2);

#define VkglTestCase_013987_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_013987_2 "render.as_fragment_texture.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013987, VkglTestCase_013987_1, VkglTestCase_013987_2);
