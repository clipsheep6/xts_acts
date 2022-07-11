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

#define VkglTestCase_003075_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003075_2 "modes.teximage3d.r32ui.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003075, VkglTestCase_003075_1, VkglTestCase_003075_2);

#define VkglTestCase_003076_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003076_2 "modes.teximage3d.r32ui.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003076, VkglTestCase_003076_1, VkglTestCase_003076_2);

#define VkglTestCase_003077_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003077_2 "modes.teximage3d.r32ui.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003077, VkglTestCase_003077_1, VkglTestCase_003077_2);

#define VkglTestCase_003078_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003078_2 "modes.teximage3d.r32ui.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003078, VkglTestCase_003078_1, VkglTestCase_003078_2);

#define VkglTestCase_003079_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003079_2 "modes.teximage3d.r32ui.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003079, VkglTestCase_003079_1, VkglTestCase_003079_2);

#define VkglTestCase_003080_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003080_2 "odes.teximage3d.r32ui.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003080, VkglTestCase_003080_1, VkglTestCase_003080_2);

#define VkglTestCase_003081_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003081_2 "modes.teximage3d.r32ui.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003081, VkglTestCase_003081_1, VkglTestCase_003081_2);

#define VkglTestCase_003082_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003082_2 "modes.teximage3d.r32ui.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003082, VkglTestCase_003082_1, VkglTestCase_003082_2);

#define VkglTestCase_003083_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003083_2 "odes.teximage3d.r32ui.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003083, VkglTestCase_003083_1, VkglTestCase_003083_2);

#define VkglTestCase_003084_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003084_2 "odes.teximage3d.r32ui.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003084, VkglTestCase_003084_1, VkglTestCase_003084_2);
