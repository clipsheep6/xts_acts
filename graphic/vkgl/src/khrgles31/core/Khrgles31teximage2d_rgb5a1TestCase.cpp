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

#define VkglTestCase_002923_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002923_2 "emodes.teximage2d.rgb5a1.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002923, VkglTestCase_002923_1, VkglTestCase_002923_2);

#define VkglTestCase_002924_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002924_2 "emodes.teximage2d.rgb5a1.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002924, VkglTestCase_002924_1, VkglTestCase_002924_2);

#define VkglTestCase_002925_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002925_2 "modes.teximage2d.rgb5a1.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002925, VkglTestCase_002925_1, VkglTestCase_002925_2);

#define VkglTestCase_002926_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002926_2 "emodes.teximage2d.rgb5a1.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002926, VkglTestCase_002926_1, VkglTestCase_002926_2);

#define VkglTestCase_002927_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002927_2 "modes.teximage2d.rgb5a1.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002927, VkglTestCase_002927_1, VkglTestCase_002927_2);

#define VkglTestCase_002928_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002928_2 "modes.teximage2d.rgb5a1.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002928, VkglTestCase_002928_1, VkglTestCase_002928_2);
