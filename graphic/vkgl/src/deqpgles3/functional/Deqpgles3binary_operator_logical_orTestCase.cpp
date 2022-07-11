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
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012146_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012146_2 ".binary_operator.logical_or.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012146, VkglTestCase_012146_1, VkglTestCase_012146_2);

#define VkglTestCase_012147_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012147_2 "binary_operator.logical_or.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012147, VkglTestCase_012147_1, VkglTestCase_012147_2);
