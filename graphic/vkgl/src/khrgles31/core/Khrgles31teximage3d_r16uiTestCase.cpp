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

#define VkglTestCase_003055_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003055_2 "modes.teximage3d.r16ui.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003055, VkglTestCase_003055_1, VkglTestCase_003055_2);

#define VkglTestCase_003056_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003056_2 "modes.teximage3d.r16ui.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003056, VkglTestCase_003056_1, VkglTestCase_003056_2);

#define VkglTestCase_003057_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003057_2 "modes.teximage3d.r16ui.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003057, VkglTestCase_003057_1, VkglTestCase_003057_2);

#define VkglTestCase_003058_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003058_2 "modes.teximage3d.r16ui.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003058, VkglTestCase_003058_1, VkglTestCase_003058_2);

#define VkglTestCase_003059_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003059_2 "modes.teximage3d.r16ui.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003059, VkglTestCase_003059_1, VkglTestCase_003059_2);

#define VkglTestCase_003060_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003060_2 "odes.teximage3d.r16ui.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003060, VkglTestCase_003060_1, VkglTestCase_003060_2);

#define VkglTestCase_003061_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003061_2 "modes.teximage3d.r16ui.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003061, VkglTestCase_003061_1, VkglTestCase_003061_2);

#define VkglTestCase_003062_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003062_2 "modes.teximage3d.r16ui.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003062, VkglTestCase_003062_1, VkglTestCase_003062_2);

#define VkglTestCase_003063_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003063_2 "odes.teximage3d.r16ui.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003063, VkglTestCase_003063_1, VkglTestCase_003063_2);

#define VkglTestCase_003064_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003064_2 "odes.teximage3d.r16ui.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003064, VkglTestCase_003064_1, VkglTestCase_003064_2);
