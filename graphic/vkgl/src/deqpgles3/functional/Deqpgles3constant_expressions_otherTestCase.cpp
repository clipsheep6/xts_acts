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
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019684_1 "dEQP-GLES3.functional.shaders.constan"
#define VkglTestCase_019684_2 "t_expressions.other.switch_case_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019684, VkglTestCase_019684_1, VkglTestCase_019684_2);

#define VkglTestCase_019685_1 "dEQP-GLES3.functional.shaders.constant"
#define VkglTestCase_019685_2 "_expressions.other.switch_case_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019685, VkglTestCase_019685_1, VkglTestCase_019685_2);
