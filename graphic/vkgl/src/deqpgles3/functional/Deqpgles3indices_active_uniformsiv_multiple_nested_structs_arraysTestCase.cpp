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

#define VkglTestCase_036670_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_a"
#define VkglTestCase_036670_2 "ctive_uniformsiv.multiple_nested_structs_arrays.vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036670, VkglTestCase_036670_1, VkglTestCase_036670_2);

#define VkglTestCase_036671_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_ac"
#define VkglTestCase_036671_2 "tive_uniformsiv.multiple_nested_structs_arrays.fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036671, VkglTestCase_036671_1, VkglTestCase_036671_2);

#define VkglTestCase_036672_1 "dEQP-GLES3.functional.uniform_api.info_query.indices_"
#define VkglTestCase_036672_2 "active_uniformsiv.multiple_nested_structs_arrays.both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036672, VkglTestCase_036672_1, VkglTestCase_036672_2);
