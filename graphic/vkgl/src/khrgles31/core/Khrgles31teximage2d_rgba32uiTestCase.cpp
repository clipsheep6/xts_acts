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

#define VkglTestCase_002989_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002989_2 "modes.teximage2d.rgba32ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002989, VkglTestCase_002989_1, VkglTestCase_002989_2);

#define VkglTestCase_002990_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002990_2 "modes.teximage2d.rgba32ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002990, VkglTestCase_002990_1, VkglTestCase_002990_2);

#define VkglTestCase_002991_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002991_2 "odes.teximage2d.rgba32ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002991, VkglTestCase_002991_1, VkglTestCase_002991_2);

#define VkglTestCase_002992_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002992_2 "modes.teximage2d.rgba32ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002992, VkglTestCase_002992_1, VkglTestCase_002992_2);

#define VkglTestCase_002993_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002993_2 "odes.teximage2d.rgba32ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002993, VkglTestCase_002993_1, VkglTestCase_002993_2);

#define VkglTestCase_002994_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002994_2 "odes.teximage2d.rgba32ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002994, VkglTestCase_002994_1, VkglTestCase_002994_2);
