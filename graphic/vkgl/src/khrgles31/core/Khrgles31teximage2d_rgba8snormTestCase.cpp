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

#define VkglTestCase_002917_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002917_2 "odes.teximage2d.rgba8snorm.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002917, VkglTestCase_002917_1, VkglTestCase_002917_2);

#define VkglTestCase_002918_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002918_2 "odes.teximage2d.rgba8snorm.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002918, VkglTestCase_002918_1, VkglTestCase_002918_2);

#define VkglTestCase_002919_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_002919_2 "des.teximage2d.rgba8snorm.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002919, VkglTestCase_002919_1, VkglTestCase_002919_2);

#define VkglTestCase_002920_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002920_2 "odes.teximage2d.rgba8snorm.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002920, VkglTestCase_002920_1, VkglTestCase_002920_2);

#define VkglTestCase_002921_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_002921_2 "des.teximage2d.rgba8snorm.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002921, VkglTestCase_002921_1, VkglTestCase_002921_2);

#define VkglTestCase_002922_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_002922_2 "des.teximage2d.rgba8snorm.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002922, VkglTestCase_002922_1, VkglTestCase_002922_2);
