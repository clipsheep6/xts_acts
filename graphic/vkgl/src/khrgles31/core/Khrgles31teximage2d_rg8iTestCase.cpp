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

#define VkglTestCase_002809_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002809_2 "gemodes.teximage2d.rg8i.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002809, VkglTestCase_002809_1, VkglTestCase_002809_2);

#define VkglTestCase_002810_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002810_2 "gemodes.teximage2d.rg8i.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002810, VkglTestCase_002810_1, VkglTestCase_002810_2);

#define VkglTestCase_002811_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002811_2 "emodes.teximage2d.rg8i.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002811, VkglTestCase_002811_1, VkglTestCase_002811_2);

#define VkglTestCase_002812_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002812_2 "gemodes.teximage2d.rg8i.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002812, VkglTestCase_002812_1, VkglTestCase_002812_2);

#define VkglTestCase_002813_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002813_2 "emodes.teximage2d.rg8i.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002813, VkglTestCase_002813_1, VkglTestCase_002813_2);

#define VkglTestCase_002814_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002814_2 "emodes.teximage2d.rg8i.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002814, VkglTestCase_002814_1, VkglTestCase_002814_2);
