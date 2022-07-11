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

#define VkglTestCase_003115_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003115_2 "modes.teximage3d.rg16f.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003115, VkglTestCase_003115_1, VkglTestCase_003115_2);

#define VkglTestCase_003116_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003116_2 "modes.teximage3d.rg16f.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003116, VkglTestCase_003116_1, VkglTestCase_003116_2);

#define VkglTestCase_003117_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003117_2 "modes.teximage3d.rg16f.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003117, VkglTestCase_003117_1, VkglTestCase_003117_2);

#define VkglTestCase_003118_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003118_2 "modes.teximage3d.rg16f.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003118, VkglTestCase_003118_1, VkglTestCase_003118_2);

#define VkglTestCase_003119_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003119_2 "modes.teximage3d.rg16f.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003119, VkglTestCase_003119_1, VkglTestCase_003119_2);

#define VkglTestCase_003120_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003120_2 "odes.teximage3d.rg16f.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003120, VkglTestCase_003120_1, VkglTestCase_003120_2);

#define VkglTestCase_003121_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003121_2 "modes.teximage3d.rg16f.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003121, VkglTestCase_003121_1, VkglTestCase_003121_2);

#define VkglTestCase_003122_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003122_2 "modes.teximage3d.rg16f.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003122, VkglTestCase_003122_1, VkglTestCase_003122_2);

#define VkglTestCase_003123_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003123_2 "odes.teximage3d.rg16f.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003123, VkglTestCase_003123_1, VkglTestCase_003123_2);

#define VkglTestCase_003124_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003124_2 "odes.teximage3d.rg16f.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003124, VkglTestCase_003124_1, VkglTestCase_003124_2);
