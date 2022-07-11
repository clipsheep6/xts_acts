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

#define VkglTestCase_003165_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003165_2 "modes.teximage3d.rg16i.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003165, VkglTestCase_003165_1, VkglTestCase_003165_2);

#define VkglTestCase_003166_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003166_2 "modes.teximage3d.rg16i.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003166, VkglTestCase_003166_1, VkglTestCase_003166_2);

#define VkglTestCase_003167_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003167_2 "modes.teximage3d.rg16i.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003167, VkglTestCase_003167_1, VkglTestCase_003167_2);

#define VkglTestCase_003168_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003168_2 "modes.teximage3d.rg16i.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003168, VkglTestCase_003168_1, VkglTestCase_003168_2);

#define VkglTestCase_003169_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003169_2 "modes.teximage3d.rg16i.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003169, VkglTestCase_003169_1, VkglTestCase_003169_2);

#define VkglTestCase_003170_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003170_2 "odes.teximage3d.rg16i.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003170, VkglTestCase_003170_1, VkglTestCase_003170_2);

#define VkglTestCase_003171_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003171_2 "modes.teximage3d.rg16i.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003171, VkglTestCase_003171_1, VkglTestCase_003171_2);

#define VkglTestCase_003172_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003172_2 "modes.teximage3d.rg16i.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003172, VkglTestCase_003172_1, VkglTestCase_003172_2);

#define VkglTestCase_003173_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003173_2 "odes.teximage3d.rg16i.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003173, VkglTestCase_003173_1, VkglTestCase_003173_2);

#define VkglTestCase_003174_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003174_2 "odes.teximage3d.rg16i.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003174, VkglTestCase_003174_1, VkglTestCase_003174_2);
