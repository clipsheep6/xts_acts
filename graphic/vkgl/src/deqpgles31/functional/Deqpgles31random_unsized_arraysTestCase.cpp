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

#define VkglTestCase_010064_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010064_2 "ayout.random.unsized_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010064, VkglTestCase_010064_1, VkglTestCase_010064_2);

#define VkglTestCase_010065_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010065_2 "ayout.random.unsized_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010065, VkglTestCase_010065_1, VkglTestCase_010065_2);

#define VkglTestCase_010066_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010066_2 "ayout.random.unsized_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010066, VkglTestCase_010066_1, VkglTestCase_010066_2);

#define VkglTestCase_010067_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010067_2 "ayout.random.unsized_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010067, VkglTestCase_010067_1, VkglTestCase_010067_2);

#define VkglTestCase_010068_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010068_2 "ayout.random.unsized_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010068, VkglTestCase_010068_1, VkglTestCase_010068_2);

#define VkglTestCase_010069_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010069_2 "ayout.random.unsized_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010069, VkglTestCase_010069_1, VkglTestCase_010069_2);

#define VkglTestCase_010070_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010070_2 "ayout.random.unsized_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010070, VkglTestCase_010070_1, VkglTestCase_010070_2);

#define VkglTestCase_010071_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010071_2 "ayout.random.unsized_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010071, VkglTestCase_010071_1, VkglTestCase_010071_2);

#define VkglTestCase_010072_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010072_2 "ayout.random.unsized_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010072, VkglTestCase_010072_1, VkglTestCase_010072_2);

#define VkglTestCase_010073_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010073_2 "ayout.random.unsized_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010073, VkglTestCase_010073_1, VkglTestCase_010073_2);

#define VkglTestCase_010074_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010074_2 "ayout.random.unsized_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010074, VkglTestCase_010074_1, VkglTestCase_010074_2);

#define VkglTestCase_010075_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010075_2 "ayout.random.unsized_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010075, VkglTestCase_010075_1, VkglTestCase_010075_2);

#define VkglTestCase_010076_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010076_2 "ayout.random.unsized_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010076, VkglTestCase_010076_1, VkglTestCase_010076_2);

#define VkglTestCase_010077_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010077_2 "ayout.random.unsized_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010077, VkglTestCase_010077_1, VkglTestCase_010077_2);

#define VkglTestCase_010078_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010078_2 "ayout.random.unsized_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010078, VkglTestCase_010078_1, VkglTestCase_010078_2);

#define VkglTestCase_010079_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010079_2 "ayout.random.unsized_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010079, VkglTestCase_010079_1, VkglTestCase_010079_2);

#define VkglTestCase_010080_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010080_2 "ayout.random.unsized_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010080, VkglTestCase_010080_1, VkglTestCase_010080_2);

#define VkglTestCase_010081_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010081_2 "ayout.random.unsized_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010081, VkglTestCase_010081_1, VkglTestCase_010081_2);

#define VkglTestCase_010082_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010082_2 "ayout.random.unsized_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010082, VkglTestCase_010082_1, VkglTestCase_010082_2);

#define VkglTestCase_010083_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010083_2 "ayout.random.unsized_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010083, VkglTestCase_010083_1, VkglTestCase_010083_2);

#define VkglTestCase_010084_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010084_2 "ayout.random.unsized_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010084, VkglTestCase_010084_1, VkglTestCase_010084_2);

#define VkglTestCase_010085_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010085_2 "ayout.random.unsized_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010085, VkglTestCase_010085_1, VkglTestCase_010085_2);

#define VkglTestCase_010086_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010086_2 "ayout.random.unsized_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010086, VkglTestCase_010086_1, VkglTestCase_010086_2);

#define VkglTestCase_010087_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010087_2 "ayout.random.unsized_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010087, VkglTestCase_010087_1, VkglTestCase_010087_2);

#define VkglTestCase_010088_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_010088_2 "ayout.random.unsized_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles310011TestSuite, TestCase_010088, VkglTestCase_010088_1, VkglTestCase_010088_2);
