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

#define VkglTestCase_033021_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033021_2 "attribute.normalize.short.components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033021, VkglTestCase_033021_1, VkglTestCase_033021_2);

#define VkglTestCase_033022_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033022_2 "ttribute.normalize.short.components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033022, VkglTestCase_033022_1, VkglTestCase_033022_2);

#define VkglTestCase_033023_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033023_2 "attribute.normalize.short.components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033023, VkglTestCase_033023_1, VkglTestCase_033023_2);

#define VkglTestCase_033024_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033024_2 "ttribute.normalize.short.components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033024, VkglTestCase_033024_1, VkglTestCase_033024_2);

#define VkglTestCase_033025_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033025_2 "attribute.normalize.short.components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033025, VkglTestCase_033025_1, VkglTestCase_033025_2);

#define VkglTestCase_033026_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033026_2 "ttribute.normalize.short.components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033026, VkglTestCase_033026_1, VkglTestCase_033026_2);
