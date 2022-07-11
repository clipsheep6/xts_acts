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

#define VkglTestCase_033015_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033015_2 "attribute.normalize.float.components2_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033015, VkglTestCase_033015_1, VkglTestCase_033015_2);

#define VkglTestCase_033016_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033016_2 "ttribute.normalize.float.components2_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033016, VkglTestCase_033016_1, VkglTestCase_033016_2);

#define VkglTestCase_033017_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033017_2 "attribute.normalize.float.components3_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033017, VkglTestCase_033017_1, VkglTestCase_033017_2);

#define VkglTestCase_033018_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033018_2 "ttribute.normalize.float.components3_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033018, VkglTestCase_033018_1, VkglTestCase_033018_2);

#define VkglTestCase_033019_1 "dEQP-GLES3.functional.vertex_arrays.single_"
#define VkglTestCase_033019_2 "attribute.normalize.float.components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033019, VkglTestCase_033019_1, VkglTestCase_033019_2);

#define VkglTestCase_033020_1 "dEQP-GLES3.functional.vertex_arrays.single_a"
#define VkglTestCase_033020_2 "ttribute.normalize.float.components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033020, VkglTestCase_033020_1, VkglTestCase_033020_2);
