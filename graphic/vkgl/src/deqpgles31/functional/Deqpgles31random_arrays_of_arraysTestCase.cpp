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

#define VkglTestCase_010089_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010089_2 "yout.random.arrays_of_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010089, VkglTestCase_010089_1, VkglTestCase_010089_2);

#define VkglTestCase_010090_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010090_2 "yout.random.arrays_of_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010090, VkglTestCase_010090_1, VkglTestCase_010090_2);

#define VkglTestCase_010091_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010091_2 "yout.random.arrays_of_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010091, VkglTestCase_010091_1, VkglTestCase_010091_2);

#define VkglTestCase_010092_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010092_2 "yout.random.arrays_of_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010092, VkglTestCase_010092_1, VkglTestCase_010092_2);

#define VkglTestCase_010093_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010093_2 "yout.random.arrays_of_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010093, VkglTestCase_010093_1, VkglTestCase_010093_2);

#define VkglTestCase_010094_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010094_2 "yout.random.arrays_of_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010094, VkglTestCase_010094_1, VkglTestCase_010094_2);

#define VkglTestCase_010095_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010095_2 "yout.random.arrays_of_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010095, VkglTestCase_010095_1, VkglTestCase_010095_2);

#define VkglTestCase_010096_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010096_2 "yout.random.arrays_of_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010096, VkglTestCase_010096_1, VkglTestCase_010096_2);

#define VkglTestCase_010097_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010097_2 "yout.random.arrays_of_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010097, VkglTestCase_010097_1, VkglTestCase_010097_2);

#define VkglTestCase_010098_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010098_2 "yout.random.arrays_of_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010098, VkglTestCase_010098_1, VkglTestCase_010098_2);

#define VkglTestCase_010099_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010099_2 "yout.random.arrays_of_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010099, VkglTestCase_010099_1, VkglTestCase_010099_2);

#define VkglTestCase_010100_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010100_2 "yout.random.arrays_of_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010100, VkglTestCase_010100_1, VkglTestCase_010100_2);

#define VkglTestCase_010101_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010101_2 "yout.random.arrays_of_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010101, VkglTestCase_010101_1, VkglTestCase_010101_2);

#define VkglTestCase_010102_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010102_2 "yout.random.arrays_of_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010102, VkglTestCase_010102_1, VkglTestCase_010102_2);

#define VkglTestCase_010103_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010103_2 "yout.random.arrays_of_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010103, VkglTestCase_010103_1, VkglTestCase_010103_2);

#define VkglTestCase_010104_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010104_2 "yout.random.arrays_of_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010104, VkglTestCase_010104_1, VkglTestCase_010104_2);

#define VkglTestCase_010105_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010105_2 "yout.random.arrays_of_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010105, VkglTestCase_010105_1, VkglTestCase_010105_2);

#define VkglTestCase_010106_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010106_2 "yout.random.arrays_of_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010106, VkglTestCase_010106_1, VkglTestCase_010106_2);

#define VkglTestCase_010107_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010107_2 "yout.random.arrays_of_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010107, VkglTestCase_010107_1, VkglTestCase_010107_2);

#define VkglTestCase_010108_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010108_2 "yout.random.arrays_of_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010108, VkglTestCase_010108_1, VkglTestCase_010108_2);

#define VkglTestCase_010109_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010109_2 "yout.random.arrays_of_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010109, VkglTestCase_010109_1, VkglTestCase_010109_2);

#define VkglTestCase_010110_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010110_2 "yout.random.arrays_of_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010110, VkglTestCase_010110_1, VkglTestCase_010110_2);

#define VkglTestCase_010111_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010111_2 "yout.random.arrays_of_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010111, VkglTestCase_010111_1, VkglTestCase_010111_2);

#define VkglTestCase_010112_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010112_2 "yout.random.arrays_of_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010112, VkglTestCase_010112_1, VkglTestCase_010112_2);

#define VkglTestCase_010113_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_010113_2 "yout.random.arrays_of_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010113, VkglTestCase_010113_1, VkglTestCase_010113_2);
