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

#define VkglTestCase_003245_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003245_2 "modes.teximage3d.rgb32f.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003245, VkglTestCase_003245_1, VkglTestCase_003245_2);

#define VkglTestCase_003246_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003246_2 "modes.teximage3d.rgb32f.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003246, VkglTestCase_003246_1, VkglTestCase_003246_2);

#define VkglTestCase_003247_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003247_2 "odes.teximage3d.rgb32f.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003247, VkglTestCase_003247_1, VkglTestCase_003247_2);

#define VkglTestCase_003248_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003248_2 "modes.teximage3d.rgb32f.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003248, VkglTestCase_003248_1, VkglTestCase_003248_2);

#define VkglTestCase_003249_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003249_2 "odes.teximage3d.rgb32f.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003249, VkglTestCase_003249_1, VkglTestCase_003249_2);

#define VkglTestCase_003250_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003250_2 "odes.teximage3d.rgb32f.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003250, VkglTestCase_003250_1, VkglTestCase_003250_2);

#define VkglTestCase_003251_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003251_2 "modes.teximage3d.rgb32f.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003251, VkglTestCase_003251_1, VkglTestCase_003251_2);

#define VkglTestCase_003252_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003252_2 "odes.teximage3d.rgb32f.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003252, VkglTestCase_003252_1, VkglTestCase_003252_2);

#define VkglTestCase_003253_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003253_2 "odes.teximage3d.rgb32f.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003253, VkglTestCase_003253_1, VkglTestCase_003253_2);

#define VkglTestCase_003254_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003254_2 "odes.teximage3d.rgb32f.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003254, VkglTestCase_003254_1, VkglTestCase_003254_2);
