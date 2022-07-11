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

#define VkglTestCase_033069_1 "dEQP-GLES3.functional.vertex_arrays.single_attribut"
#define VkglTestCase_033069_2 "e.normalize.usigned_int2_10_10_10.components4_quads1"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033069, VkglTestCase_033069_1, VkglTestCase_033069_2);

#define VkglTestCase_033070_1 "dEQP-GLES3.functional.vertex_arrays.single_attribute"
#define VkglTestCase_033070_2 ".normalize.usigned_int2_10_10_10.components4_quads256"
SHRINK_HWTEST_F(ActsDeqpgles30034TestSuite, TestCase_033070, VkglTestCase_033070_1, VkglTestCase_033070_2);
