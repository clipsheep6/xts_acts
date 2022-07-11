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

#define VkglTestCase_033039_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033039_2 "ibute.normalize.unsigned_byte.components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033039, VkglTestCase_033039_1, VkglTestCase_033039_2);

#define VkglTestCase_033040_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033040_2 "bute.normalize.unsigned_byte.components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033040, VkglTestCase_033040_1, VkglTestCase_033040_2);

#define VkglTestCase_033041_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033041_2 "ibute.normalize.unsigned_byte.components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033041, VkglTestCase_033041_1, VkglTestCase_033041_2);

#define VkglTestCase_033042_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033042_2 "bute.normalize.unsigned_byte.components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033042, VkglTestCase_033042_1, VkglTestCase_033042_2);

#define VkglTestCase_033043_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033043_2 "ibute.normalize.unsigned_byte.components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033043, VkglTestCase_033043_1, VkglTestCase_033043_2);

#define VkglTestCase_033044_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033044_2 "bute.normalize.unsigned_byte.components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033044, VkglTestCase_033044_1, VkglTestCase_033044_2);
