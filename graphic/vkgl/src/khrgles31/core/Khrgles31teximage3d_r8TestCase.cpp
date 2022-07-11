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
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002995_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002995_2 "gemodes.teximage3d.r8.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002995, VkglTestCase_002995_1, VkglTestCase_002995_2);

#define VkglTestCase_002996_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002996_2 "gemodes.teximage3d.r8.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002996, VkglTestCase_002996_1, VkglTestCase_002996_2);

#define VkglTestCase_002997_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002997_2 "emodes.teximage3d.r8.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002997, VkglTestCase_002997_1, VkglTestCase_002997_2);

#define VkglTestCase_002998_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002998_2 "gemodes.teximage3d.r8.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002998, VkglTestCase_002998_1, VkglTestCase_002998_2);

#define VkglTestCase_002999_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002999_2 "emodes.teximage3d.r8.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002999, VkglTestCase_002999_1, VkglTestCase_002999_2);

#define VkglTestCase_003000_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003000_2 "emodes.teximage3d.r8.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_003000, VkglTestCase_003000_1, VkglTestCase_003000_2);

#define VkglTestCase_003001_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_003001_2 "gemodes.teximage3d.r8.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_003001, VkglTestCase_003001_1, VkglTestCase_003001_2);

#define VkglTestCase_003002_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003002_2 "emodes.teximage3d.r8.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_003002, VkglTestCase_003002_1, VkglTestCase_003002_2);

#define VkglTestCase_003003_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003003_2 "emodes.teximage3d.r8.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_003003, VkglTestCase_003003_1, VkglTestCase_003003_2);

#define VkglTestCase_003004_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003004_2 "emodes.teximage3d.r8.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_003004, VkglTestCase_003004_1, VkglTestCase_003004_2);
