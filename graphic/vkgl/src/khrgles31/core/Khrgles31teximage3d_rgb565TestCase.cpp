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
#include "../ActsKhrgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003205_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003205_2 "modes.teximage3d.rgb565.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003205, VkglTestCase_003205_1, VkglTestCase_003205_2);

#define VkglTestCase_003206_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003206_2 "modes.teximage3d.rgb565.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003206, VkglTestCase_003206_1, VkglTestCase_003206_2);

#define VkglTestCase_003207_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003207_2 "odes.teximage3d.rgb565.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003207, VkglTestCase_003207_1, VkglTestCase_003207_2);

#define VkglTestCase_003208_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003208_2 "modes.teximage3d.rgb565.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003208, VkglTestCase_003208_1, VkglTestCase_003208_2);

#define VkglTestCase_003209_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003209_2 "odes.teximage3d.rgb565.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003209, VkglTestCase_003209_1, VkglTestCase_003209_2);

#define VkglTestCase_003210_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003210_2 "odes.teximage3d.rgb565.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003210, VkglTestCase_003210_1, VkglTestCase_003210_2);

#define VkglTestCase_003211_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003211_2 "modes.teximage3d.rgb565.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003211, VkglTestCase_003211_1, VkglTestCase_003211_2);

#define VkglTestCase_003212_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003212_2 "odes.teximage3d.rgb565.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003212, VkglTestCase_003212_1, VkglTestCase_003212_2);

#define VkglTestCase_003213_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003213_2 "odes.teximage3d.rgb565.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003213, VkglTestCase_003213_1, VkglTestCase_003213_2);

#define VkglTestCase_003214_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003214_2 "odes.teximage3d.rgb565.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003214, VkglTestCase_003214_1, VkglTestCase_003214_2);
