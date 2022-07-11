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

#define VkglTestCase_033033_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033033_2 "bute.normalize.unsigned_short.components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033033, VkglTestCase_033033_1, VkglTestCase_033033_2);

#define VkglTestCase_033034_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033034_2 "ute.normalize.unsigned_short.components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033034, VkglTestCase_033034_1, VkglTestCase_033034_2);

#define VkglTestCase_033035_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033035_2 "bute.normalize.unsigned_short.components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033035, VkglTestCase_033035_1, VkglTestCase_033035_2);

#define VkglTestCase_033036_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033036_2 "ute.normalize.unsigned_short.components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033036, VkglTestCase_033036_1, VkglTestCase_033036_2);

#define VkglTestCase_033037_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033037_2 "bute.normalize.unsigned_short.components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033037, VkglTestCase_033037_1, VkglTestCase_033037_2);

#define VkglTestCase_033038_1 "dEQP-GLES3.functional.vertex_arrays.single_attrib"
#define VkglTestCase_033038_2 "ute.normalize.unsigned_short.components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033038, VkglTestCase_033038_1, VkglTestCase_033038_2);
