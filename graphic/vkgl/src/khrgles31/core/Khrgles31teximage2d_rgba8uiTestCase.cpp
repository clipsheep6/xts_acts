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

#define VkglTestCase_002953_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002953_2 "modes.teximage2d.rgba8ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002953, VkglTestCase_002953_1, VkglTestCase_002953_2);

#define VkglTestCase_002954_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002954_2 "modes.teximage2d.rgba8ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002954, VkglTestCase_002954_1, VkglTestCase_002954_2);

#define VkglTestCase_002955_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002955_2 "modes.teximage2d.rgba8ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002955, VkglTestCase_002955_1, VkglTestCase_002955_2);

#define VkglTestCase_002956_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002956_2 "modes.teximage2d.rgba8ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002956, VkglTestCase_002956_1, VkglTestCase_002956_2);

#define VkglTestCase_002957_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002957_2 "modes.teximage2d.rgba8ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002957, VkglTestCase_002957_1, VkglTestCase_002957_2);

#define VkglTestCase_002958_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002958_2 "odes.teximage2d.rgba8ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002958, VkglTestCase_002958_1, VkglTestCase_002958_2);
