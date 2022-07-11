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

#define VkglTestCase_002773_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002773_2 "gemodes.teximage2d.r32i.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002773, VkglTestCase_002773_1, VkglTestCase_002773_2);

#define VkglTestCase_002774_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002774_2 "gemodes.teximage2d.r32i.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002774, VkglTestCase_002774_1, VkglTestCase_002774_2);

#define VkglTestCase_002775_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002775_2 "emodes.teximage2d.r32i.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002775, VkglTestCase_002775_1, VkglTestCase_002775_2);

#define VkglTestCase_002776_1 "KHR-GLES31.core.pixelstora"
#define VkglTestCase_002776_2 "gemodes.teximage2d.r32i.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002776, VkglTestCase_002776_1, VkglTestCase_002776_2);

#define VkglTestCase_002777_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002777_2 "emodes.teximage2d.r32i.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002777, VkglTestCase_002777_1, VkglTestCase_002777_2);

#define VkglTestCase_002778_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002778_2 "emodes.teximage2d.r32i.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002778, VkglTestCase_002778_1, VkglTestCase_002778_2);
