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

#define VkglTestCase_036424_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036424_2 "uery.active_uniform.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036424, VkglTestCase_036424_1, VkglTestCase_036424_2);

#define VkglTestCase_036425_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036425_2 "ery.active_uniform.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036425, VkglTestCase_036425_1, VkglTestCase_036425_2);

#define VkglTestCase_036426_1 "dEQP-GLES3.functional.uniform_api.info_"
#define VkglTestCase_036426_2 "query.active_uniform.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036426, VkglTestCase_036426_1, VkglTestCase_036426_2);
