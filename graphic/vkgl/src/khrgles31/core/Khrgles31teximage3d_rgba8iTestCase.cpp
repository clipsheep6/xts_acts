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

#define VkglTestCase_003395_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003395_2 "modes.teximage3d.rgba8i.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003395, VkglTestCase_003395_1, VkglTestCase_003395_2);

#define VkglTestCase_003396_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003396_2 "modes.teximage3d.rgba8i.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003396, VkglTestCase_003396_1, VkglTestCase_003396_2);

#define VkglTestCase_003397_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003397_2 "odes.teximage3d.rgba8i.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003397, VkglTestCase_003397_1, VkglTestCase_003397_2);

#define VkglTestCase_003398_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003398_2 "modes.teximage3d.rgba8i.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003398, VkglTestCase_003398_1, VkglTestCase_003398_2);

#define VkglTestCase_003399_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003399_2 "odes.teximage3d.rgba8i.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003399, VkglTestCase_003399_1, VkglTestCase_003399_2);

#define VkglTestCase_003400_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003400_2 "odes.teximage3d.rgba8i.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003400, VkglTestCase_003400_1, VkglTestCase_003400_2);

#define VkglTestCase_003401_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003401_2 "modes.teximage3d.rgba8i.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003401, VkglTestCase_003401_1, VkglTestCase_003401_2);

#define VkglTestCase_003402_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003402_2 "odes.teximage3d.rgba8i.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003402, VkglTestCase_003402_1, VkglTestCase_003402_2);

#define VkglTestCase_003403_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003403_2 "odes.teximage3d.rgba8i.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003403, VkglTestCase_003403_1, VkglTestCase_003403_2);

#define VkglTestCase_003404_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003404_2 "odes.teximage3d.rgba8i.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003404, VkglTestCase_003404_1, VkglTestCase_003404_2);
