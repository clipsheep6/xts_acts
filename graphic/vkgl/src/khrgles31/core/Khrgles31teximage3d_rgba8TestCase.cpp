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

#define VkglTestCase_003315_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003315_2 "modes.teximage3d.rgba8.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003315, VkglTestCase_003315_1, VkglTestCase_003315_2);

#define VkglTestCase_003316_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003316_2 "modes.teximage3d.rgba8.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003316, VkglTestCase_003316_1, VkglTestCase_003316_2);

#define VkglTestCase_003317_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003317_2 "modes.teximage3d.rgba8.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003317, VkglTestCase_003317_1, VkglTestCase_003317_2);

#define VkglTestCase_003318_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003318_2 "modes.teximage3d.rgba8.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003318, VkglTestCase_003318_1, VkglTestCase_003318_2);

#define VkglTestCase_003319_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003319_2 "modes.teximage3d.rgba8.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003319, VkglTestCase_003319_1, VkglTestCase_003319_2);

#define VkglTestCase_003320_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003320_2 "odes.teximage3d.rgba8.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003320, VkglTestCase_003320_1, VkglTestCase_003320_2);

#define VkglTestCase_003321_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003321_2 "modes.teximage3d.rgba8.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003321, VkglTestCase_003321_1, VkglTestCase_003321_2);

#define VkglTestCase_003322_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003322_2 "modes.teximage3d.rgba8.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003322, VkglTestCase_003322_1, VkglTestCase_003322_2);

#define VkglTestCase_003323_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003323_2 "odes.teximage3d.rgba8.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003323, VkglTestCase_003323_1, VkglTestCase_003323_2);

#define VkglTestCase_003324_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003324_2 "odes.teximage3d.rgba8.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003324, VkglTestCase_003324_1, VkglTestCase_003324_2);
