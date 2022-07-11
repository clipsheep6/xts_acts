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

#define VkglTestCase_002725_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002725_2 "modes.teximage2d.r8snorm.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002725, VkglTestCase_002725_1, VkglTestCase_002725_2);

#define VkglTestCase_002726_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002726_2 "modes.teximage2d.r8snorm.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002726, VkglTestCase_002726_1, VkglTestCase_002726_2);

#define VkglTestCase_002727_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002727_2 "modes.teximage2d.r8snorm.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002727, VkglTestCase_002727_1, VkglTestCase_002727_2);

#define VkglTestCase_002728_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002728_2 "modes.teximage2d.r8snorm.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002728, VkglTestCase_002728_1, VkglTestCase_002728_2);

#define VkglTestCase_002729_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002729_2 "modes.teximage2d.r8snorm.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002729, VkglTestCase_002729_1, VkglTestCase_002729_2);

#define VkglTestCase_002730_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002730_2 "odes.teximage2d.r8snorm.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002730, VkglTestCase_002730_1, VkglTestCase_002730_2);
