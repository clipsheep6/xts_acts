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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036066_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036066_2 "ndom.nested_structs_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036066, VkglTestCase_036066_1, VkglTestCase_036066_2);

#define VkglTestCase_036067_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036067_2 "ndom.nested_structs_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036067, VkglTestCase_036067_1, VkglTestCase_036067_2);

#define VkglTestCase_036068_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036068_2 "ndom.nested_structs_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036068, VkglTestCase_036068_1, VkglTestCase_036068_2);

#define VkglTestCase_036069_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036069_2 "ndom.nested_structs_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036069, VkglTestCase_036069_1, VkglTestCase_036069_2);

#define VkglTestCase_036070_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036070_2 "ndom.nested_structs_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036070, VkglTestCase_036070_1, VkglTestCase_036070_2);

#define VkglTestCase_036071_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036071_2 "ndom.nested_structs_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036071, VkglTestCase_036071_1, VkglTestCase_036071_2);

#define VkglTestCase_036072_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036072_2 "ndom.nested_structs_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036072, VkglTestCase_036072_1, VkglTestCase_036072_2);

#define VkglTestCase_036073_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036073_2 "ndom.nested_structs_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036073, VkglTestCase_036073_1, VkglTestCase_036073_2);

#define VkglTestCase_036074_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036074_2 "ndom.nested_structs_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036074, VkglTestCase_036074_1, VkglTestCase_036074_2);

#define VkglTestCase_036075_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036075_2 "ndom.nested_structs_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036075, VkglTestCase_036075_1, VkglTestCase_036075_2);

#define VkglTestCase_036076_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036076_2 "ndom.nested_structs_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036076, VkglTestCase_036076_1, VkglTestCase_036076_2);

#define VkglTestCase_036077_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036077_2 "ndom.nested_structs_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036077, VkglTestCase_036077_1, VkglTestCase_036077_2);

#define VkglTestCase_036078_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036078_2 "ndom.nested_structs_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036078, VkglTestCase_036078_1, VkglTestCase_036078_2);

#define VkglTestCase_036079_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036079_2 "ndom.nested_structs_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036079, VkglTestCase_036079_1, VkglTestCase_036079_2);

#define VkglTestCase_036080_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036080_2 "ndom.nested_structs_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036080, VkglTestCase_036080_1, VkglTestCase_036080_2);

#define VkglTestCase_036081_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036081_2 "ndom.nested_structs_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036081, VkglTestCase_036081_1, VkglTestCase_036081_2);

#define VkglTestCase_036082_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036082_2 "ndom.nested_structs_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036082, VkglTestCase_036082_1, VkglTestCase_036082_2);

#define VkglTestCase_036083_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036083_2 "ndom.nested_structs_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036083, VkglTestCase_036083_1, VkglTestCase_036083_2);

#define VkglTestCase_036084_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036084_2 "ndom.nested_structs_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036084, VkglTestCase_036084_1, VkglTestCase_036084_2);

#define VkglTestCase_036085_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036085_2 "ndom.nested_structs_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036085, VkglTestCase_036085_1, VkglTestCase_036085_2);

#define VkglTestCase_036086_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036086_2 "ndom.nested_structs_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036086, VkglTestCase_036086_1, VkglTestCase_036086_2);

#define VkglTestCase_036087_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036087_2 "ndom.nested_structs_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036087, VkglTestCase_036087_1, VkglTestCase_036087_2);

#define VkglTestCase_036088_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036088_2 "ndom.nested_structs_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036088, VkglTestCase_036088_1, VkglTestCase_036088_2);

#define VkglTestCase_036089_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036089_2 "ndom.nested_structs_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036089, VkglTestCase_036089_1, VkglTestCase_036089_2);

#define VkglTestCase_036090_1 "dEQP-GLES3.functional.ubo.ra"
#define VkglTestCase_036090_2 "ndom.nested_structs_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036090, VkglTestCase_036090_1, VkglTestCase_036090_2);
