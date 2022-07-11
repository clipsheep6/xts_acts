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

#define VkglTestCase_003025_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003025_2 "emodes.teximage3d.r32f.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003025, VkglTestCase_003025_1, VkglTestCase_003025_2);

#define VkglTestCase_003026_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003026_2 "emodes.teximage3d.r32f.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003026, VkglTestCase_003026_1, VkglTestCase_003026_2);

#define VkglTestCase_003027_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003027_2 "modes.teximage3d.r32f.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003027, VkglTestCase_003027_1, VkglTestCase_003027_2);

#define VkglTestCase_003028_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003028_2 "emodes.teximage3d.r32f.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003028, VkglTestCase_003028_1, VkglTestCase_003028_2);

#define VkglTestCase_003029_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003029_2 "modes.teximage3d.r32f.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003029, VkglTestCase_003029_1, VkglTestCase_003029_2);

#define VkglTestCase_003030_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003030_2 "modes.teximage3d.r32f.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003030, VkglTestCase_003030_1, VkglTestCase_003030_2);

#define VkglTestCase_003031_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003031_2 "emodes.teximage3d.r32f.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003031, VkglTestCase_003031_1, VkglTestCase_003031_2);

#define VkglTestCase_003032_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003032_2 "modes.teximage3d.r32f.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003032, VkglTestCase_003032_1, VkglTestCase_003032_2);

#define VkglTestCase_003033_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003033_2 "modes.teximage3d.r32f.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003033, VkglTestCase_003033_1, VkglTestCase_003033_2);

#define VkglTestCase_003034_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003034_2 "modes.teximage3d.r32f.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003034, VkglTestCase_003034_1, VkglTestCase_003034_2);
