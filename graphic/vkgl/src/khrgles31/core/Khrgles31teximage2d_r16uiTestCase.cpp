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

#define VkglTestCase_002755_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002755_2 "emodes.teximage2d.r16ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002755, VkglTestCase_002755_1, VkglTestCase_002755_2);

#define VkglTestCase_002756_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002756_2 "emodes.teximage2d.r16ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002756, VkglTestCase_002756_1, VkglTestCase_002756_2);

#define VkglTestCase_002757_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002757_2 "emodes.teximage2d.r16ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002757, VkglTestCase_002757_1, VkglTestCase_002757_2);

#define VkglTestCase_002758_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002758_2 "emodes.teximage2d.r16ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002758, VkglTestCase_002758_1, VkglTestCase_002758_2);

#define VkglTestCase_002759_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002759_2 "emodes.teximage2d.r16ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002759, VkglTestCase_002759_1, VkglTestCase_002759_2);

#define VkglTestCase_002760_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002760_2 "modes.teximage2d.r16ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002760, VkglTestCase_002760_1, VkglTestCase_002760_2);
