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

#define VkglTestCase_002911_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002911_2 "emodes.teximage2d.rgba8.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002911, VkglTestCase_002911_1, VkglTestCase_002911_2);

#define VkglTestCase_002912_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002912_2 "emodes.teximage2d.rgba8.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002912, VkglTestCase_002912_1, VkglTestCase_002912_2);

#define VkglTestCase_002913_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002913_2 "emodes.teximage2d.rgba8.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002913, VkglTestCase_002913_1, VkglTestCase_002913_2);

#define VkglTestCase_002914_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002914_2 "emodes.teximage2d.rgba8.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002914, VkglTestCase_002914_1, VkglTestCase_002914_2);

#define VkglTestCase_002915_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002915_2 "emodes.teximage2d.rgba8.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002915, VkglTestCase_002915_1, VkglTestCase_002915_2);

#define VkglTestCase_002916_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002916_2 "modes.teximage2d.rgba8.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002916, VkglTestCase_002916_1, VkglTestCase_002916_2);
