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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036877_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036877_2 "ry.consistency.multiple_basic_array.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036877, VkglTestCase_036877_1, VkglTestCase_036877_2);

#define VkglTestCase_036878_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036878_2 "y.consistency.multiple_basic_array.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036878, VkglTestCase_036878_1, VkglTestCase_036878_2);

#define VkglTestCase_036879_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036879_2 "ery.consistency.multiple_basic_array.both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036879, VkglTestCase_036879_1, VkglTestCase_036879_2);
