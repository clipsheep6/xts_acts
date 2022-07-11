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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007278_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_007278_2 "oops.short_circuit.while_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007278, VkglTestCase_007278_1, VkglTestCase_007278_2);

#define VkglTestCase_007279_1 "dEQP-GLES3.functional.shaders.lo"
#define VkglTestCase_007279_2 "ops.short_circuit.while_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007279, VkglTestCase_007279_1, VkglTestCase_007279_2);

#define VkglTestCase_007280_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_007280_2 "loops.short_circuit.for_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007280, VkglTestCase_007280_1, VkglTestCase_007280_2);

#define VkglTestCase_007281_1 "dEQP-GLES3.functional.shaders.l"
#define VkglTestCase_007281_2 "oops.short_circuit.for_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007281, VkglTestCase_007281_1, VkglTestCase_007281_2);

#define VkglTestCase_007282_1 "dEQP-GLES3.functional.shaders.lo"
#define VkglTestCase_007282_2 "ops.short_circuit.do_while_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007282, VkglTestCase_007282_1, VkglTestCase_007282_2);

#define VkglTestCase_007283_1 "dEQP-GLES3.functional.shaders.loo"
#define VkglTestCase_007283_2 "ps.short_circuit.do_while_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007283, VkglTestCase_007283_1, VkglTestCase_007283_2);

#define VkglTestCase_007284_1 "dEQP-GLES3.functional.shaders.loops"
#define VkglTestCase_007284_2 ".short_circuit.while_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007284, VkglTestCase_007284_1, VkglTestCase_007284_2);

#define VkglTestCase_007285_1 "dEQP-GLES3.functional.shaders.loops."
#define VkglTestCase_007285_2 "short_circuit.while_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007285, VkglTestCase_007285_1, VkglTestCase_007285_2);
