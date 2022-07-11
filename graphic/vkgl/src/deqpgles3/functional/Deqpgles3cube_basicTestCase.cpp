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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025091_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025091_2 "ipmap.cube.basic.nearest_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025091, VkglTestCase_025091_1, VkglTestCase_025091_2);

#define VkglTestCase_025092_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025092_2 "ipmap.cube.basic.linear_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025092, VkglTestCase_025092_1, VkglTestCase_025092_2);

#define VkglTestCase_025093_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025093_2 "ipmap.cube.basic.nearest_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025093, VkglTestCase_025093_1, VkglTestCase_025093_2);

#define VkglTestCase_025094_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025094_2 "mipmap.cube.basic.linear_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025094, VkglTestCase_025094_1, VkglTestCase_025094_2);
