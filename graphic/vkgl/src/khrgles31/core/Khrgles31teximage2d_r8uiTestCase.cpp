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

#define VkglTestCase_002743_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002743_2 "gemodes.teximage2d.r8ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002743, VkglTestCase_002743_1, VkglTestCase_002743_2);

#define VkglTestCase_002744_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002744_2 "gemodes.teximage2d.r8ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002744, VkglTestCase_002744_1, VkglTestCase_002744_2);

#define VkglTestCase_002745_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002745_2 "emodes.teximage2d.r8ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002745, VkglTestCase_002745_1, VkglTestCase_002745_2);

#define VkglTestCase_002746_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002746_2 "gemodes.teximage2d.r8ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002746, VkglTestCase_002746_1, VkglTestCase_002746_2);

#define VkglTestCase_002747_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002747_2 "emodes.teximage2d.r8ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002747, VkglTestCase_002747_1, VkglTestCase_002747_2);

#define VkglTestCase_002748_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002748_2 "emodes.teximage2d.r8ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002748, VkglTestCase_002748_1, VkglTestCase_002748_2);
