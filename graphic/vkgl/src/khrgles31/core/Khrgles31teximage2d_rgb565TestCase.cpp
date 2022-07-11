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

#define VkglTestCase_002845_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002845_2 "emodes.teximage2d.rgb565.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002845, VkglTestCase_002845_1, VkglTestCase_002845_2);

#define VkglTestCase_002846_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002846_2 "emodes.teximage2d.rgb565.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002846, VkglTestCase_002846_1, VkglTestCase_002846_2);

#define VkglTestCase_002847_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002847_2 "modes.teximage2d.rgb565.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002847, VkglTestCase_002847_1, VkglTestCase_002847_2);

#define VkglTestCase_002848_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002848_2 "emodes.teximage2d.rgb565.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002848, VkglTestCase_002848_1, VkglTestCase_002848_2);

#define VkglTestCase_002849_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002849_2 "modes.teximage2d.rgb565.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002849, VkglTestCase_002849_1, VkglTestCase_002849_2);

#define VkglTestCase_002850_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002850_2 "modes.teximage2d.rgb565.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002850, VkglTestCase_002850_1, VkglTestCase_002850_2);
