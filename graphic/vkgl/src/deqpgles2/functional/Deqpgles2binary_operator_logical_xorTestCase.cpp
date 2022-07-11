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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005730_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_005730_2 "binary_operator.logical_xor.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005730, VkglTestCase_005730_1, VkglTestCase_005730_2);

#define VkglTestCase_005731_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_005731_2 "inary_operator.logical_xor.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20006TestSuite, TestCase_005731, VkglTestCase_005731_1, VkglTestCase_005731_2);
