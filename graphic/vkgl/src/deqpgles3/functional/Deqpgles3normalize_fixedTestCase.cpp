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

#define VkglTestCase_033045_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033045_2 "attribute.normalize.fixed.components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033045, VkglTestCase_033045_1, VkglTestCase_033045_2);

#define VkglTestCase_033046_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033046_2 "ttribute.normalize.fixed.components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033046, VkglTestCase_033046_1, VkglTestCase_033046_2);

#define VkglTestCase_033047_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033047_2 "attribute.normalize.fixed.components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033047, VkglTestCase_033047_1, VkglTestCase_033047_2);

#define VkglTestCase_033048_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033048_2 "ttribute.normalize.fixed.components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033048, VkglTestCase_033048_1, VkglTestCase_033048_2);

#define VkglTestCase_033049_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033049_2 "attribute.normalize.fixed.components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033049, VkglTestCase_033049_1, VkglTestCase_033049_2);

#define VkglTestCase_033050_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033050_2 "ttribute.normalize.fixed.components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033050, VkglTestCase_033050_1, VkglTestCase_033050_2);
