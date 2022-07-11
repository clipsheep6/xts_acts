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

#define VkglTestCase_002797_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002797_2 "emodes.teximage2d.rg32f.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002797, VkglTestCase_002797_1, VkglTestCase_002797_2);

#define VkglTestCase_002798_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002798_2 "emodes.teximage2d.rg32f.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002798, VkglTestCase_002798_1, VkglTestCase_002798_2);

#define VkglTestCase_002799_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002799_2 "emodes.teximage2d.rg32f.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002799, VkglTestCase_002799_1, VkglTestCase_002799_2);

#define VkglTestCase_002800_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002800_2 "emodes.teximage2d.rg32f.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002800, VkglTestCase_002800_1, VkglTestCase_002800_2);

#define VkglTestCase_002801_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002801_2 "emodes.teximage2d.rg32f.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002801, VkglTestCase_002801_1, VkglTestCase_002801_2);

#define VkglTestCase_002802_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002802_2 "modes.teximage2d.rg32f.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002802, VkglTestCase_002802_1, VkglTestCase_002802_2);
