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

#define VkglTestCase_002815_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002815_2 "emodes.teximage2d.rg16ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002815, VkglTestCase_002815_1, VkglTestCase_002815_2);

#define VkglTestCase_002816_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002816_2 "emodes.teximage2d.rg16ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002816, VkglTestCase_002816_1, VkglTestCase_002816_2);

#define VkglTestCase_002817_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002817_2 "modes.teximage2d.rg16ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002817, VkglTestCase_002817_1, VkglTestCase_002817_2);

#define VkglTestCase_002818_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002818_2 "emodes.teximage2d.rg16ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002818, VkglTestCase_002818_1, VkglTestCase_002818_2);

#define VkglTestCase_002819_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002819_2 "modes.teximage2d.rg16ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002819, VkglTestCase_002819_1, VkglTestCase_002819_2);

#define VkglTestCase_002820_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002820_2 "modes.teximage2d.rg16ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002820, VkglTestCase_002820_1, VkglTestCase_002820_2);
