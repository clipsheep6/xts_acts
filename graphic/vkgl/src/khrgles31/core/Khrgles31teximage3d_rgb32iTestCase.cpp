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

#define VkglTestCase_003305_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003305_2 "modes.teximage3d.rgb32i.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003305, VkglTestCase_003305_1, VkglTestCase_003305_2);

#define VkglTestCase_003306_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003306_2 "modes.teximage3d.rgb32i.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003306, VkglTestCase_003306_1, VkglTestCase_003306_2);

#define VkglTestCase_003307_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003307_2 "odes.teximage3d.rgb32i.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003307, VkglTestCase_003307_1, VkglTestCase_003307_2);

#define VkglTestCase_003308_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003308_2 "modes.teximage3d.rgb32i.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003308, VkglTestCase_003308_1, VkglTestCase_003308_2);

#define VkglTestCase_003309_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003309_2 "odes.teximage3d.rgb32i.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003309, VkglTestCase_003309_1, VkglTestCase_003309_2);

#define VkglTestCase_003310_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003310_2 "odes.teximage3d.rgb32i.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003310, VkglTestCase_003310_1, VkglTestCase_003310_2);

#define VkglTestCase_003311_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003311_2 "modes.teximage3d.rgb32i.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003311, VkglTestCase_003311_1, VkglTestCase_003311_2);

#define VkglTestCase_003312_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003312_2 "odes.teximage3d.rgb32i.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003312, VkglTestCase_003312_1, VkglTestCase_003312_2);

#define VkglTestCase_003313_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003313_2 "odes.teximage3d.rgb32i.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003313, VkglTestCase_003313_1, VkglTestCase_003313_2);

#define VkglTestCase_003314_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003314_2 "odes.teximage3d.rgb32i.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003314, VkglTestCase_003314_1, VkglTestCase_003314_2);
