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

#define VkglTestCase_002971_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002971_2 "modes.teximage2d.rgba16ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002971, VkglTestCase_002971_1, VkglTestCase_002971_2);

#define VkglTestCase_002972_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002972_2 "modes.teximage2d.rgba16ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002972, VkglTestCase_002972_1, VkglTestCase_002972_2);

#define VkglTestCase_002973_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002973_2 "odes.teximage2d.rgba16ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002973, VkglTestCase_002973_1, VkglTestCase_002973_2);

#define VkglTestCase_002974_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002974_2 "modes.teximage2d.rgba16ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002974, VkglTestCase_002974_1, VkglTestCase_002974_2);

#define VkglTestCase_002975_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002975_2 "odes.teximage2d.rgba16ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002975, VkglTestCase_002975_1, VkglTestCase_002975_2);

#define VkglTestCase_002976_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002976_2 "odes.teximage2d.rgba16ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002976, VkglTestCase_002976_1, VkglTestCase_002976_2);
