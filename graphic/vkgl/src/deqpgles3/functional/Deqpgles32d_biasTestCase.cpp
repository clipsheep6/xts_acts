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

#define VkglTestCase_025023_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025023_2 "mipmap.2d.bias.nearest_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025023, VkglTestCase_025023_1, VkglTestCase_025023_2);

#define VkglTestCase_025024_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025024_2 ".mipmap.2d.bias.linear_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025024, VkglTestCase_025024_1, VkglTestCase_025024_2);

#define VkglTestCase_025025_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025025_2 ".mipmap.2d.bias.nearest_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025025, VkglTestCase_025025_1, VkglTestCase_025025_2);

#define VkglTestCase_025026_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025026_2 ".mipmap.2d.bias.linear_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025026, VkglTestCase_025026_1, VkglTestCase_025026_2);
