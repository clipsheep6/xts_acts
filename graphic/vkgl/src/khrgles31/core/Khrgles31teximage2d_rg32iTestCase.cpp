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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002833_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002833_2 "emodes.teximage2d.rg32i.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002833, VkglTestCase_002833_1, VkglTestCase_002833_2);

#define VkglTestCase_002834_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002834_2 "emodes.teximage2d.rg32i.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002834, VkglTestCase_002834_1, VkglTestCase_002834_2);

#define VkglTestCase_002835_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002835_2 "emodes.teximage2d.rg32i.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002835, VkglTestCase_002835_1, VkglTestCase_002835_2);

#define VkglTestCase_002836_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002836_2 "emodes.teximage2d.rg32i.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002836, VkglTestCase_002836_1, VkglTestCase_002836_2);

#define VkglTestCase_002837_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002837_2 "emodes.teximage2d.rg32i.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002837, VkglTestCase_002837_1, VkglTestCase_002837_2);

#define VkglTestCase_002838_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002838_2 "modes.teximage2d.rg32i.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002838, VkglTestCase_002838_1, VkglTestCase_002838_2);
