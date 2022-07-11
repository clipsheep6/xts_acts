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

#define VkglTestCase_014076_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_014076_2 "ffer.modify.buffersubdata.buffer_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014076, VkglTestCase_014076_1, VkglTestCase_014076_2);

#define VkglTestCase_014077_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_014077_2 "ffer.modify.buffersubdata.buffer_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014077, VkglTestCase_014077_1, VkglTestCase_014077_2);

#define VkglTestCase_014078_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_014078_2 "fer.modify.buffersubdata.buffer_size_65536"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014078, VkglTestCase_014078_1, VkglTestCase_014078_2);

#define VkglTestCase_014079_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_014079_2 "fer.modify.buffersubdata.buffer_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014079, VkglTestCase_014079_1, VkglTestCase_014079_2);

#define VkglTestCase_014080_1 "dEQP-GLES31.functional.texture.texture_buf"
#define VkglTestCase_014080_2 "fer.modify.buffersubdata.buffer_size_131071"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014080, VkglTestCase_014080_1, VkglTestCase_014080_2);

#define VkglTestCase_014081_1 "dEQP-GLES31.functional.texture.texture_b"
#define VkglTestCase_014081_2 "uffer.modify.buffersubdata.range_size_512"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014081, VkglTestCase_014081_1, VkglTestCase_014081_2);

#define VkglTestCase_014082_1 "dEQP-GLES31.functional.texture.texture_b"
#define VkglTestCase_014082_2 "uffer.modify.buffersubdata.range_size_513"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014082, VkglTestCase_014082_1, VkglTestCase_014082_2);

#define VkglTestCase_014083_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_014083_2 "ffer.modify.buffersubdata.range_size_65537"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014083, VkglTestCase_014083_1, VkglTestCase_014083_2);

#define VkglTestCase_014084_1 "dEQP-GLES31.functional.texture.texture_bu"
#define VkglTestCase_014084_2 "ffer.modify.buffersubdata.range_size_98304"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014084, VkglTestCase_014084_1, VkglTestCase_014084_2);

#define VkglTestCase_014085_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_014085_2 "er.modify.buffersubdata.offset_1_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014085, VkglTestCase_014085_1, VkglTestCase_014085_2);

#define VkglTestCase_014086_1 "dEQP-GLES31.functional.texture.texture_buff"
#define VkglTestCase_014086_2 "er.modify.buffersubdata.offset_7_alignments"
SHRINK_HWTEST_F(ActsDeqpgles310015TestSuite, TestCase_014086, VkglTestCase_014086_1, VkglTestCase_014086_2);
