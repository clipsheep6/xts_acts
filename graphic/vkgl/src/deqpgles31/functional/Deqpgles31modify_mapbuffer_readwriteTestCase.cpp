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

#define VkglTestCase_014098_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014098_2 "r.modify.mapbuffer_readwrite.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014098, VkglTestCase_014098_1, VkglTestCase_014098_2);

#define VkglTestCase_014099_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014099_2 "r.modify.mapbuffer_readwrite.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014099, VkglTestCase_014099_1, VkglTestCase_014099_2);

#define VkglTestCase_014100_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_014100_2 ".modify.mapbuffer_readwrite.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014100, VkglTestCase_014100_1, VkglTestCase_014100_2);

#define VkglTestCase_014101_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_014101_2 ".modify.mapbuffer_readwrite.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014101, VkglTestCase_014101_1, VkglTestCase_014101_2);

#define VkglTestCase_014102_1 "dEQP-GLES31.functional.texture.texture_buffer"
#define VkglTestCase_014102_2 ".modify.mapbuffer_readwrite.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014102, VkglTestCase_014102_1, VkglTestCase_014102_2);

#define VkglTestCase_014103_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_014103_2 "er.modify.mapbuffer_readwrite.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014103, VkglTestCase_014103_1, VkglTestCase_014103_2);

#define VkglTestCase_014104_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_014104_2 "er.modify.mapbuffer_readwrite.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014104, VkglTestCase_014104_1, VkglTestCase_014104_2);

#define VkglTestCase_014105_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014105_2 "r.modify.mapbuffer_readwrite.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014105, VkglTestCase_014105_1, VkglTestCase_014105_2);

#define VkglTestCase_014106_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014106_2 "r.modify.mapbuffer_readwrite.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014106, VkglTestCase_014106_1, VkglTestCase_014106_2);

#define VkglTestCase_014107_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_014107_2 "modify.mapbuffer_readwrite.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014107, VkglTestCase_014107_1, VkglTestCase_014107_2);

#define VkglTestCase_014108_1 "dEQP-GLES31.functional.texture.texture_buffer."
#define VkglTestCase_014108_2 "modify.mapbuffer_readwrite.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014108, VkglTestCase_014108_1, VkglTestCase_014108_2);
