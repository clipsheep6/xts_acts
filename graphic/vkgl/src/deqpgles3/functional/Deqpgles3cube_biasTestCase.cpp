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

#define VkglTestCase_025095_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025095_2 "ipmap.cube.bias.nearest_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025095, VkglTestCase_025095_1, VkglTestCase_025095_2);

#define VkglTestCase_025096_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025096_2 "mipmap.cube.bias.linear_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025096, VkglTestCase_025096_1, VkglTestCase_025096_2);

#define VkglTestCase_025097_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025097_2 "mipmap.cube.bias.nearest_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025097, VkglTestCase_025097_1, VkglTestCase_025097_2);

#define VkglTestCase_025098_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025098_2 "mipmap.cube.bias.linear_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025098, VkglTestCase_025098_1, VkglTestCase_025098_2);
