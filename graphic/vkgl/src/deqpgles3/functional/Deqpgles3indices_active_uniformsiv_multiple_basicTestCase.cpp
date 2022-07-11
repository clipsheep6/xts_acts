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

#define VkglTestCase_036664_1 "dEQP-GLES3.functional.uniform_api.info_query.i"
#define VkglTestCase_036664_2 "ndices_active_uniformsiv.multiple_basic.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036664, VkglTestCase_036664_1, VkglTestCase_036664_2);

#define VkglTestCase_036665_1 "dEQP-GLES3.functional.uniform_api.info_query.in"
#define VkglTestCase_036665_2 "dices_active_uniformsiv.multiple_basic.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036665, VkglTestCase_036665_1, VkglTestCase_036665_2);

#define VkglTestCase_036666_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036666_2 "indices_active_uniformsiv.multiple_basic.both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036666, VkglTestCase_036666_1, VkglTestCase_036666_2);
