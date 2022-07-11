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

#define VkglTestCase_014087_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_014087_2 "fer.modify.mapbuffer_write.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014087, VkglTestCase_014087_1, VkglTestCase_014087_2);

#define VkglTestCase_014088_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_014088_2 "fer.modify.mapbuffer_write.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014088, VkglTestCase_014088_1, VkglTestCase_014088_2);

#define VkglTestCase_014089_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_014089_2 "er.modify.mapbuffer_write.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014089, VkglTestCase_014089_1, VkglTestCase_014089_2);

#define VkglTestCase_014090_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_014090_2 "er.modify.mapbuffer_write.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014090, VkglTestCase_014090_1, VkglTestCase_014090_2);

#define VkglTestCase_014091_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_014091_2 "er.modify.mapbuffer_write.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014091, VkglTestCase_014091_1, VkglTestCase_014091_2);

#define VkglTestCase_014092_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_014092_2 "ffer.modify.mapbuffer_write.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014092, VkglTestCase_014092_1, VkglTestCase_014092_2);

#define VkglTestCase_014093_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_014093_2 "ffer.modify.mapbuffer_write.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014093, VkglTestCase_014093_1, VkglTestCase_014093_2);

#define VkglTestCase_014094_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_014094_2 "fer.modify.mapbuffer_write.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014094, VkglTestCase_014094_1, VkglTestCase_014094_2);

#define VkglTestCase_014095_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_014095_2 "fer.modify.mapbuffer_write.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014095, VkglTestCase_014095_1, VkglTestCase_014095_2);

#define VkglTestCase_014096_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014096_2 "r.modify.mapbuffer_write.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014096, VkglTestCase_014096_1, VkglTestCase_014096_2);

#define VkglTestCase_014097_1 "dEQP-GLES31.functional.texture.texture_buffe"
#define VkglTestCase_014097_2 "r.modify.mapbuffer_write.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014097, VkglTestCase_014097_1, VkglTestCase_014097_2);
