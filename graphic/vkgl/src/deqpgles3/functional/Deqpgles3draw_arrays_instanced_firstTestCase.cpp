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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_043990_1 "dEQP-GLES3.functional.draw.draw"
#define VkglTestCase_043990_2 "_arrays_instanced.first.first_1"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043990, VkglTestCase_043990_1, VkglTestCase_043990_2);

#define VkglTestCase_043991_1 "dEQP-GLES3.functional.draw.draw"
#define VkglTestCase_043991_2 "_arrays_instanced.first.first_3"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043991, VkglTestCase_043991_1, VkglTestCase_043991_2);

#define VkglTestCase_043992_1 "dEQP-GLES3.functional.draw.draw"
#define VkglTestCase_043992_2 "_arrays_instanced.first.first_17"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043992, VkglTestCase_043992_1, VkglTestCase_043992_2);
