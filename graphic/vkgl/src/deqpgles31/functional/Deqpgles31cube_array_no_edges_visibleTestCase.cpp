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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012489_1 "dEQP-GLES31.functional.texture.filteri"
#define VkglTestCase_012489_2 "ng.cube_array.no_edges_visible.nearest"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012489, VkglTestCase_012489_1, VkglTestCase_012489_2);

#define VkglTestCase_012490_1 "dEQP-GLES31.functional.texture.filter"
#define VkglTestCase_012490_2 "ing.cube_array.no_edges_visible.linear"
SHRINK_HWTEST_F(ActsDeqpgles310013TestSuite, TestCase_012490, VkglTestCase_012490_1, VkglTestCase_012490_2);
