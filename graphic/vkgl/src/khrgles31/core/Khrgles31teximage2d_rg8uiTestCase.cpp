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

#define VkglTestCase_002803_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002803_2 "emodes.teximage2d.rg8ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002803, VkglTestCase_002803_1, VkglTestCase_002803_2);

#define VkglTestCase_002804_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002804_2 "emodes.teximage2d.rg8ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002804, VkglTestCase_002804_1, VkglTestCase_002804_2);

#define VkglTestCase_002805_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002805_2 "emodes.teximage2d.rg8ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002805, VkglTestCase_002805_1, VkglTestCase_002805_2);

#define VkglTestCase_002806_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002806_2 "emodes.teximage2d.rg8ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002806, VkglTestCase_002806_1, VkglTestCase_002806_2);

#define VkglTestCase_002807_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002807_2 "emodes.teximage2d.rg8ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002807, VkglTestCase_002807_1, VkglTestCase_002807_2);

#define VkglTestCase_002808_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002808_2 "modes.teximage2d.rg8ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002808, VkglTestCase_002808_1, VkglTestCase_002808_2);
