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
#include "../ActsDeqpgles30034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033589_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033589_2 "ttribute.offset.float.offset4_stride8_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033589, VkglTestCase_033589_1, VkglTestCase_033589_2);

#define VkglTestCase_033590_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033590_2 "ttribute.offset.float.offset4_stride32_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033590, VkglTestCase_033590_1, VkglTestCase_033590_2);

#define VkglTestCase_033591_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033591_2 "tribute.offset.float.offset4_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033591, VkglTestCase_033591_1, VkglTestCase_033591_2);

#define VkglTestCase_033592_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033592_2 "tribute.offset.float.offset4_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033592, VkglTestCase_033592_1, VkglTestCase_033592_2);

#define VkglTestCase_033593_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033593_2 "ttribute.offset.float.offset32_stride8_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033593, VkglTestCase_033593_1, VkglTestCase_033593_2);

#define VkglTestCase_033594_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033594_2 "tribute.offset.float.offset32_stride32_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033594, VkglTestCase_033594_1, VkglTestCase_033594_2);

#define VkglTestCase_033595_1 "dEQP-GLES3.functional.vertex_arrays.single_at"
#define VkglTestCase_033595_2 "tribute.offset.float.offset32_stride8_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033595, VkglTestCase_033595_1, VkglTestCase_033595_2);

#define VkglTestCase_033596_1 "dEQP-GLES3.functional.vertex_arrays.single_att"
#define VkglTestCase_033596_2 "ribute.offset.float.offset32_stride32_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033596, VkglTestCase_033596_1, VkglTestCase_033596_2);
