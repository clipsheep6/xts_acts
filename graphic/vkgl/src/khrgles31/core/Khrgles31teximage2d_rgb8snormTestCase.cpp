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

#define VkglTestCase_002851_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002851_2 "odes.teximage2d.rgb8snorm.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002851, VkglTestCase_002851_1, VkglTestCase_002851_2);

#define VkglTestCase_002852_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002852_2 "odes.teximage2d.rgb8snorm.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002852, VkglTestCase_002852_1, VkglTestCase_002852_2);

#define VkglTestCase_002853_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002853_2 "odes.teximage2d.rgb8snorm.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002853, VkglTestCase_002853_1, VkglTestCase_002853_2);

#define VkglTestCase_002854_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002854_2 "odes.teximage2d.rgb8snorm.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002854, VkglTestCase_002854_1, VkglTestCase_002854_2);

#define VkglTestCase_002855_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002855_2 "odes.teximage2d.rgb8snorm.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002855, VkglTestCase_002855_1, VkglTestCase_002855_2);

#define VkglTestCase_002856_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_002856_2 "des.teximage2d.rgb8snorm.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002856, VkglTestCase_002856_1, VkglTestCase_002856_2);
