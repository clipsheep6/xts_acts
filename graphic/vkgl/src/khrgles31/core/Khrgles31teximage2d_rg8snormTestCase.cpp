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

#define VkglTestCase_002785_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002785_2 "modes.teximage2d.rg8snorm.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002785, VkglTestCase_002785_1, VkglTestCase_002785_2);

#define VkglTestCase_002786_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002786_2 "modes.teximage2d.rg8snorm.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002786, VkglTestCase_002786_1, VkglTestCase_002786_2);

#define VkglTestCase_002787_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002787_2 "odes.teximage2d.rg8snorm.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002787, VkglTestCase_002787_1, VkglTestCase_002787_2);

#define VkglTestCase_002788_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002788_2 "modes.teximage2d.rg8snorm.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002788, VkglTestCase_002788_1, VkglTestCase_002788_2);

#define VkglTestCase_002789_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002789_2 "odes.teximage2d.rg8snorm.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002789, VkglTestCase_002789_1, VkglTestCase_002789_2);

#define VkglTestCase_002790_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002790_2 "odes.teximage2d.rg8snorm.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002790, VkglTestCase_002790_1, VkglTestCase_002790_2);
