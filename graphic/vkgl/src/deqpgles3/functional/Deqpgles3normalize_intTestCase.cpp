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

#define VkglTestCase_033057_1 "dEQP-GLES3.functional.vertex_arrays.single"
#define VkglTestCase_033057_2 "_attribute.normalize.int.components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033057, VkglTestCase_033057_1, VkglTestCase_033057_2);

#define VkglTestCase_033058_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033058_2 "attribute.normalize.int.components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033058, VkglTestCase_033058_1, VkglTestCase_033058_2);

#define VkglTestCase_033059_1 "dEQP-GLES3.functional.vertex_arrays.single"
#define VkglTestCase_033059_2 "_attribute.normalize.int.components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033059, VkglTestCase_033059_1, VkglTestCase_033059_2);

#define VkglTestCase_033060_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033060_2 "attribute.normalize.int.components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033060, VkglTestCase_033060_1, VkglTestCase_033060_2);

#define VkglTestCase_033061_1 "dEQP-GLES3.functional.vertex_arrays.single"
#define VkglTestCase_033061_2 "_attribute.normalize.int.components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033061, VkglTestCase_033061_1, VkglTestCase_033061_2);

#define VkglTestCase_033062_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033062_2 "attribute.normalize.int.components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033062, VkglTestCase_033062_1, VkglTestCase_033062_2);
