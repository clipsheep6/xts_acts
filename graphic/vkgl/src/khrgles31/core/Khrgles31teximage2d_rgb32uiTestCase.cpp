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

#define VkglTestCase_002899_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002899_2 "modes.teximage2d.rgb32ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002899, VkglTestCase_002899_1, VkglTestCase_002899_2);

#define VkglTestCase_002900_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002900_2 "modes.teximage2d.rgb32ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002900, VkglTestCase_002900_1, VkglTestCase_002900_2);

#define VkglTestCase_002901_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002901_2 "modes.teximage2d.rgb32ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002901, VkglTestCase_002901_1, VkglTestCase_002901_2);

#define VkglTestCase_002902_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002902_2 "modes.teximage2d.rgb32ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002902, VkglTestCase_002902_1, VkglTestCase_002902_2);

#define VkglTestCase_002903_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002903_2 "modes.teximage2d.rgb32ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002903, VkglTestCase_002903_1, VkglTestCase_002903_2);

#define VkglTestCase_002904_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002904_2 "odes.teximage2d.rgb32ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002904, VkglTestCase_002904_1, VkglTestCase_002904_2);
