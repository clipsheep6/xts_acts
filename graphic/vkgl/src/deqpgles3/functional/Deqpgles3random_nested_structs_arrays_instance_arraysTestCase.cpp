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

#define VkglTestCase_036116_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036116_2 "ted_structs_arrays_instance_arrays.0"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036116, VkglTestCase_036116_1, VkglTestCase_036116_2);

#define VkglTestCase_036117_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036117_2 "ted_structs_arrays_instance_arrays.1"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036117, VkglTestCase_036117_1, VkglTestCase_036117_2);

#define VkglTestCase_036118_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036118_2 "ted_structs_arrays_instance_arrays.2"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036118, VkglTestCase_036118_1, VkglTestCase_036118_2);

#define VkglTestCase_036119_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036119_2 "ted_structs_arrays_instance_arrays.3"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036119, VkglTestCase_036119_1, VkglTestCase_036119_2);

#define VkglTestCase_036120_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036120_2 "ted_structs_arrays_instance_arrays.4"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036120, VkglTestCase_036120_1, VkglTestCase_036120_2);

#define VkglTestCase_036121_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036121_2 "ted_structs_arrays_instance_arrays.5"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036121, VkglTestCase_036121_1, VkglTestCase_036121_2);

#define VkglTestCase_036122_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036122_2 "ted_structs_arrays_instance_arrays.6"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036122, VkglTestCase_036122_1, VkglTestCase_036122_2);

#define VkglTestCase_036123_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036123_2 "ted_structs_arrays_instance_arrays.7"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036123, VkglTestCase_036123_1, VkglTestCase_036123_2);

#define VkglTestCase_036124_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036124_2 "ted_structs_arrays_instance_arrays.8"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036124, VkglTestCase_036124_1, VkglTestCase_036124_2);

#define VkglTestCase_036125_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036125_2 "ted_structs_arrays_instance_arrays.9"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036125, VkglTestCase_036125_1, VkglTestCase_036125_2);

#define VkglTestCase_036126_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036126_2 "ted_structs_arrays_instance_arrays.10"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036126, VkglTestCase_036126_1, VkglTestCase_036126_2);

#define VkglTestCase_036127_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036127_2 "ted_structs_arrays_instance_arrays.11"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036127, VkglTestCase_036127_1, VkglTestCase_036127_2);

#define VkglTestCase_036128_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036128_2 "ted_structs_arrays_instance_arrays.12"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036128, VkglTestCase_036128_1, VkglTestCase_036128_2);

#define VkglTestCase_036129_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036129_2 "ted_structs_arrays_instance_arrays.13"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036129, VkglTestCase_036129_1, VkglTestCase_036129_2);

#define VkglTestCase_036130_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036130_2 "ted_structs_arrays_instance_arrays.14"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036130, VkglTestCase_036130_1, VkglTestCase_036130_2);

#define VkglTestCase_036131_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036131_2 "ted_structs_arrays_instance_arrays.15"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036131, VkglTestCase_036131_1, VkglTestCase_036131_2);

#define VkglTestCase_036132_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036132_2 "ted_structs_arrays_instance_arrays.16"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036132, VkglTestCase_036132_1, VkglTestCase_036132_2);

#define VkglTestCase_036133_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036133_2 "ted_structs_arrays_instance_arrays.17"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036133, VkglTestCase_036133_1, VkglTestCase_036133_2);

#define VkglTestCase_036134_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036134_2 "ted_structs_arrays_instance_arrays.18"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036134, VkglTestCase_036134_1, VkglTestCase_036134_2);

#define VkglTestCase_036135_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036135_2 "ted_structs_arrays_instance_arrays.19"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036135, VkglTestCase_036135_1, VkglTestCase_036135_2);

#define VkglTestCase_036136_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036136_2 "ted_structs_arrays_instance_arrays.20"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036136, VkglTestCase_036136_1, VkglTestCase_036136_2);

#define VkglTestCase_036137_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036137_2 "ted_structs_arrays_instance_arrays.21"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036137, VkglTestCase_036137_1, VkglTestCase_036137_2);

#define VkglTestCase_036138_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036138_2 "ted_structs_arrays_instance_arrays.22"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036138, VkglTestCase_036138_1, VkglTestCase_036138_2);

#define VkglTestCase_036139_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036139_2 "ted_structs_arrays_instance_arrays.23"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036139, VkglTestCase_036139_1, VkglTestCase_036139_2);

#define VkglTestCase_036140_1 "dEQP-GLES3.functional.ubo.random.nes"
#define VkglTestCase_036140_2 "ted_structs_arrays_instance_arrays.24"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036140, VkglTestCase_036140_1, VkglTestCase_036140_2);
