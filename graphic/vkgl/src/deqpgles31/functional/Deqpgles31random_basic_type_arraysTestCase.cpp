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
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011105_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011105_2 ".random.basic_type_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011105, VkglTestCase_011105_1, VkglTestCase_011105_2);

#define VkglTestCase_011106_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011106_2 ".random.basic_type_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011106, VkglTestCase_011106_1, VkglTestCase_011106_2);

#define VkglTestCase_011107_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011107_2 ".random.basic_type_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011107, VkglTestCase_011107_1, VkglTestCase_011107_2);

#define VkglTestCase_011108_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011108_2 ".random.basic_type_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011108, VkglTestCase_011108_1, VkglTestCase_011108_2);

#define VkglTestCase_011109_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011109_2 ".random.basic_type_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011109, VkglTestCase_011109_1, VkglTestCase_011109_2);

#define VkglTestCase_011110_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011110_2 ".random.basic_type_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011110, VkglTestCase_011110_1, VkglTestCase_011110_2);

#define VkglTestCase_011111_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011111_2 ".random.basic_type_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011111, VkglTestCase_011111_1, VkglTestCase_011111_2);

#define VkglTestCase_011112_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011112_2 ".random.basic_type_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011112, VkglTestCase_011112_1, VkglTestCase_011112_2);

#define VkglTestCase_011113_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011113_2 ".random.basic_type_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011113, VkglTestCase_011113_1, VkglTestCase_011113_2);

#define VkglTestCase_011114_1 "dEQP-GLES31.functional.ubo"
#define VkglTestCase_011114_2 ".random.basic_type_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011114, VkglTestCase_011114_1, VkglTestCase_011114_2);

#define VkglTestCase_011115_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011115_2 "random.basic_type_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011115, VkglTestCase_011115_1, VkglTestCase_011115_2);

#define VkglTestCase_011116_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011116_2 "random.basic_type_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011116, VkglTestCase_011116_1, VkglTestCase_011116_2);

#define VkglTestCase_011117_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011117_2 "random.basic_type_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011117, VkglTestCase_011117_1, VkglTestCase_011117_2);

#define VkglTestCase_011118_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011118_2 "random.basic_type_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011118, VkglTestCase_011118_1, VkglTestCase_011118_2);

#define VkglTestCase_011119_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011119_2 "random.basic_type_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011119, VkglTestCase_011119_1, VkglTestCase_011119_2);

#define VkglTestCase_011120_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011120_2 "random.basic_type_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011120, VkglTestCase_011120_1, VkglTestCase_011120_2);

#define VkglTestCase_011121_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011121_2 "random.basic_type_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011121, VkglTestCase_011121_1, VkglTestCase_011121_2);

#define VkglTestCase_011122_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011122_2 "random.basic_type_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011122, VkglTestCase_011122_1, VkglTestCase_011122_2);

#define VkglTestCase_011123_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011123_2 "random.basic_type_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011123, VkglTestCase_011123_1, VkglTestCase_011123_2);

#define VkglTestCase_011124_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011124_2 "random.basic_type_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011124, VkglTestCase_011124_1, VkglTestCase_011124_2);

#define VkglTestCase_011125_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011125_2 "random.basic_type_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011125, VkglTestCase_011125_1, VkglTestCase_011125_2);

#define VkglTestCase_011126_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011126_2 "random.basic_type_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011126, VkglTestCase_011126_1, VkglTestCase_011126_2);

#define VkglTestCase_011127_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011127_2 "random.basic_type_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011127, VkglTestCase_011127_1, VkglTestCase_011127_2);

#define VkglTestCase_011128_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011128_2 "random.basic_type_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011128, VkglTestCase_011128_1, VkglTestCase_011128_2);

#define VkglTestCase_011129_1 "dEQP-GLES31.functional.ubo."
#define VkglTestCase_011129_2 "random.basic_type_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011129, VkglTestCase_011129_1, VkglTestCase_011129_2);
