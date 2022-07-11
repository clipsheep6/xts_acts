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

#define VkglTestCase_003325_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003325_2 "des.teximage3d.rgba8snorm.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003325, VkglTestCase_003325_1, VkglTestCase_003325_2);

#define VkglTestCase_003326_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003326_2 "des.teximage3d.rgba8snorm.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003326, VkglTestCase_003326_1, VkglTestCase_003326_2);

#define VkglTestCase_003327_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003327_2 "es.teximage3d.rgba8snorm.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003327, VkglTestCase_003327_1, VkglTestCase_003327_2);

#define VkglTestCase_003328_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003328_2 "des.teximage3d.rgba8snorm.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003328, VkglTestCase_003328_1, VkglTestCase_003328_2);

#define VkglTestCase_003329_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003329_2 "es.teximage3d.rgba8snorm.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003329, VkglTestCase_003329_1, VkglTestCase_003329_2);

#define VkglTestCase_003330_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003330_2 "es.teximage3d.rgba8snorm.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003330, VkglTestCase_003330_1, VkglTestCase_003330_2);

#define VkglTestCase_003331_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003331_2 "des.teximage3d.rgba8snorm.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003331, VkglTestCase_003331_1, VkglTestCase_003331_2);

#define VkglTestCase_003332_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003332_2 "es.teximage3d.rgba8snorm.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003332, VkglTestCase_003332_1, VkglTestCase_003332_2);

#define VkglTestCase_003333_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003333_2 "es.teximage3d.rgba8snorm.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003333, VkglTestCase_003333_1, VkglTestCase_003333_2);

#define VkglTestCase_003334_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003334_2 "es.teximage3d.rgba8snorm.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003334, VkglTestCase_003334_1, VkglTestCase_003334_2);
