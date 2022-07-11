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

#define VkglTestCase_003015_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003015_2 "emodes.teximage3d.r16f.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003015, VkglTestCase_003015_1, VkglTestCase_003015_2);

#define VkglTestCase_003016_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003016_2 "emodes.teximage3d.r16f.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003016, VkglTestCase_003016_1, VkglTestCase_003016_2);

#define VkglTestCase_003017_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003017_2 "modes.teximage3d.r16f.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003017, VkglTestCase_003017_1, VkglTestCase_003017_2);

#define VkglTestCase_003018_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003018_2 "emodes.teximage3d.r16f.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003018, VkglTestCase_003018_1, VkglTestCase_003018_2);

#define VkglTestCase_003019_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003019_2 "modes.teximage3d.r16f.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003019, VkglTestCase_003019_1, VkglTestCase_003019_2);

#define VkglTestCase_003020_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003020_2 "modes.teximage3d.r16f.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003020, VkglTestCase_003020_1, VkglTestCase_003020_2);

#define VkglTestCase_003021_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003021_2 "emodes.teximage3d.r16f.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003021, VkglTestCase_003021_1, VkglTestCase_003021_2);

#define VkglTestCase_003022_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003022_2 "modes.teximage3d.r16f.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003022, VkglTestCase_003022_1, VkglTestCase_003022_2);

#define VkglTestCase_003023_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003023_2 "modes.teximage3d.r16f.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003023, VkglTestCase_003023_1, VkglTestCase_003023_2);

#define VkglTestCase_003024_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003024_2 "modes.teximage3d.r16f.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003024, VkglTestCase_003024_1, VkglTestCase_003024_2);
