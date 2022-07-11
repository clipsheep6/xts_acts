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
#include "../ActsDeqpgles310011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010164_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010164_2 "ut.random.nested_structs_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010164, VkglTestCase_010164_1, VkglTestCase_010164_2);

#define VkglTestCase_010165_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010165_2 "ut.random.nested_structs_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010165, VkglTestCase_010165_1, VkglTestCase_010165_2);

#define VkglTestCase_010166_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010166_2 "ut.random.nested_structs_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010166, VkglTestCase_010166_1, VkglTestCase_010166_2);

#define VkglTestCase_010167_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010167_2 "ut.random.nested_structs_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010167, VkglTestCase_010167_1, VkglTestCase_010167_2);

#define VkglTestCase_010168_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010168_2 "ut.random.nested_structs_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010168, VkglTestCase_010168_1, VkglTestCase_010168_2);

#define VkglTestCase_010169_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010169_2 "ut.random.nested_structs_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010169, VkglTestCase_010169_1, VkglTestCase_010169_2);

#define VkglTestCase_010170_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010170_2 "ut.random.nested_structs_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010170, VkglTestCase_010170_1, VkglTestCase_010170_2);

#define VkglTestCase_010171_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010171_2 "ut.random.nested_structs_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010171, VkglTestCase_010171_1, VkglTestCase_010171_2);

#define VkglTestCase_010172_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010172_2 "ut.random.nested_structs_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010172, VkglTestCase_010172_1, VkglTestCase_010172_2);

#define VkglTestCase_010173_1 "dEQP-GLES31.functional.ssbo.layo"
#define VkglTestCase_010173_2 "ut.random.nested_structs_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010173, VkglTestCase_010173_1, VkglTestCase_010173_2);

#define VkglTestCase_010174_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010174_2 "t.random.nested_structs_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010174, VkglTestCase_010174_1, VkglTestCase_010174_2);

#define VkglTestCase_010175_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010175_2 "t.random.nested_structs_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010175, VkglTestCase_010175_1, VkglTestCase_010175_2);

#define VkglTestCase_010176_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010176_2 "t.random.nested_structs_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010176, VkglTestCase_010176_1, VkglTestCase_010176_2);

#define VkglTestCase_010177_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010177_2 "t.random.nested_structs_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010177, VkglTestCase_010177_1, VkglTestCase_010177_2);

#define VkglTestCase_010178_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010178_2 "t.random.nested_structs_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010178, VkglTestCase_010178_1, VkglTestCase_010178_2);

#define VkglTestCase_010179_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010179_2 "t.random.nested_structs_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010179, VkglTestCase_010179_1, VkglTestCase_010179_2);

#define VkglTestCase_010180_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010180_2 "t.random.nested_structs_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010180, VkglTestCase_010180_1, VkglTestCase_010180_2);

#define VkglTestCase_010181_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010181_2 "t.random.nested_structs_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010181, VkglTestCase_010181_1, VkglTestCase_010181_2);

#define VkglTestCase_010182_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010182_2 "t.random.nested_structs_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010182, VkglTestCase_010182_1, VkglTestCase_010182_2);

#define VkglTestCase_010183_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010183_2 "t.random.nested_structs_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010183, VkglTestCase_010183_1, VkglTestCase_010183_2);

#define VkglTestCase_010184_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010184_2 "t.random.nested_structs_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010184, VkglTestCase_010184_1, VkglTestCase_010184_2);

#define VkglTestCase_010185_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010185_2 "t.random.nested_structs_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010185, VkglTestCase_010185_1, VkglTestCase_010185_2);

#define VkglTestCase_010186_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010186_2 "t.random.nested_structs_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010186, VkglTestCase_010186_1, VkglTestCase_010186_2);

#define VkglTestCase_010187_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010187_2 "t.random.nested_structs_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010187, VkglTestCase_010187_1, VkglTestCase_010187_2);

#define VkglTestCase_010188_1 "dEQP-GLES31.functional.ssbo.layou"
#define VkglTestCase_010188_2 "t.random.nested_structs_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010188, VkglTestCase_010188_1, VkglTestCase_010188_2);
