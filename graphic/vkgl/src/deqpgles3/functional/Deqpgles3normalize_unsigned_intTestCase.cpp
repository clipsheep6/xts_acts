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

#define VkglTestCase_033051_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033051_2 "ibute.normalize.unsigned_int.components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033051, VkglTestCase_033051_1, VkglTestCase_033051_2);

#define VkglTestCase_033052_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033052_2 "bute.normalize.unsigned_int.components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033052, VkglTestCase_033052_1, VkglTestCase_033052_2);

#define VkglTestCase_033053_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033053_2 "ibute.normalize.unsigned_int.components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033053, VkglTestCase_033053_1, VkglTestCase_033053_2);

#define VkglTestCase_033054_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033054_2 "bute.normalize.unsigned_int.components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033054, VkglTestCase_033054_1, VkglTestCase_033054_2);

#define VkglTestCase_033055_1 "dEQP-GLES3.functional.vertex_arrays.single_attr"
#define VkglTestCase_033055_2 "ibute.normalize.unsigned_int.components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033055, VkglTestCase_033055_1, VkglTestCase_033055_2);

#define VkglTestCase_033056_1 "dEQP-GLES3.functional.vertex_arrays.single_attri"
#define VkglTestCase_033056_2 "bute.normalize.unsigned_int.components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033056, VkglTestCase_033056_1, VkglTestCase_033056_2);
