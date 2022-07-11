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

#define VkglTestCase_003125_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003125_2 "modes.teximage3d.rg32f.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003125, VkglTestCase_003125_1, VkglTestCase_003125_2);

#define VkglTestCase_003126_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003126_2 "modes.teximage3d.rg32f.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003126, VkglTestCase_003126_1, VkglTestCase_003126_2);

#define VkglTestCase_003127_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003127_2 "modes.teximage3d.rg32f.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003127, VkglTestCase_003127_1, VkglTestCase_003127_2);

#define VkglTestCase_003128_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003128_2 "modes.teximage3d.rg32f.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003128, VkglTestCase_003128_1, VkglTestCase_003128_2);

#define VkglTestCase_003129_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003129_2 "modes.teximage3d.rg32f.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003129, VkglTestCase_003129_1, VkglTestCase_003129_2);

#define VkglTestCase_003130_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003130_2 "odes.teximage3d.rg32f.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003130, VkglTestCase_003130_1, VkglTestCase_003130_2);

#define VkglTestCase_003131_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003131_2 "modes.teximage3d.rg32f.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003131, VkglTestCase_003131_1, VkglTestCase_003131_2);

#define VkglTestCase_003132_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003132_2 "modes.teximage3d.rg32f.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003132, VkglTestCase_003132_1, VkglTestCase_003132_2);

#define VkglTestCase_003133_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003133_2 "odes.teximage3d.rg32f.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003133, VkglTestCase_003133_1, VkglTestCase_003133_2);

#define VkglTestCase_003134_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003134_2 "odes.teximage3d.rg32f.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003134, VkglTestCase_003134_1, VkglTestCase_003134_2);
