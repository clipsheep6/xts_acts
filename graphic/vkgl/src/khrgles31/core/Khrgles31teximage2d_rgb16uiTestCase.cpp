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

#define VkglTestCase_002887_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002887_2 "modes.teximage2d.rgb16ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002887, VkglTestCase_002887_1, VkglTestCase_002887_2);

#define VkglTestCase_002888_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002888_2 "modes.teximage2d.rgb16ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002888, VkglTestCase_002888_1, VkglTestCase_002888_2);

#define VkglTestCase_002889_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002889_2 "modes.teximage2d.rgb16ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002889, VkglTestCase_002889_1, VkglTestCase_002889_2);

#define VkglTestCase_002890_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002890_2 "modes.teximage2d.rgb16ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002890, VkglTestCase_002890_1, VkglTestCase_002890_2);

#define VkglTestCase_002891_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002891_2 "modes.teximage2d.rgb16ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002891, VkglTestCase_002891_1, VkglTestCase_002891_2);

#define VkglTestCase_002892_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002892_2 "odes.teximage2d.rgb16ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002892, VkglTestCase_002892_1, VkglTestCase_002892_2);
