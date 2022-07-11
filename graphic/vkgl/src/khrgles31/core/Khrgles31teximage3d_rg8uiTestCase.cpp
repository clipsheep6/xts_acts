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

#define VkglTestCase_003135_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003135_2 "modes.teximage3d.rg8ui.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003135, VkglTestCase_003135_1, VkglTestCase_003135_2);

#define VkglTestCase_003136_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003136_2 "modes.teximage3d.rg8ui.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003136, VkglTestCase_003136_1, VkglTestCase_003136_2);

#define VkglTestCase_003137_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003137_2 "modes.teximage3d.rg8ui.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003137, VkglTestCase_003137_1, VkglTestCase_003137_2);

#define VkglTestCase_003138_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003138_2 "modes.teximage3d.rg8ui.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003138, VkglTestCase_003138_1, VkglTestCase_003138_2);

#define VkglTestCase_003139_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003139_2 "modes.teximage3d.rg8ui.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003139, VkglTestCase_003139_1, VkglTestCase_003139_2);

#define VkglTestCase_003140_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003140_2 "odes.teximage3d.rg8ui.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003140, VkglTestCase_003140_1, VkglTestCase_003140_2);

#define VkglTestCase_003141_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003141_2 "modes.teximage3d.rg8ui.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003141, VkglTestCase_003141_1, VkglTestCase_003141_2);

#define VkglTestCase_003142_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003142_2 "modes.teximage3d.rg8ui.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003142, VkglTestCase_003142_1, VkglTestCase_003142_2);

#define VkglTestCase_003143_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003143_2 "odes.teximage3d.rg8ui.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003143, VkglTestCase_003143_1, VkglTestCase_003143_2);

#define VkglTestCase_003144_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003144_2 "odes.teximage3d.rg8ui.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003144, VkglTestCase_003144_1, VkglTestCase_003144_2);
