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

#define VkglTestCase_002893_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002893_2 "emodes.teximage2d.rgb16i.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002893, VkglTestCase_002893_1, VkglTestCase_002893_2);

#define VkglTestCase_002894_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002894_2 "emodes.teximage2d.rgb16i.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002894, VkglTestCase_002894_1, VkglTestCase_002894_2);

#define VkglTestCase_002895_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002895_2 "modes.teximage2d.rgb16i.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002895, VkglTestCase_002895_1, VkglTestCase_002895_2);

#define VkglTestCase_002896_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002896_2 "emodes.teximage2d.rgb16i.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002896, VkglTestCase_002896_1, VkglTestCase_002896_2);

#define VkglTestCase_002897_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002897_2 "modes.teximage2d.rgb16i.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002897, VkglTestCase_002897_1, VkglTestCase_002897_2);

#define VkglTestCase_002898_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002898_2 "modes.teximage2d.rgb16i.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002898, VkglTestCase_002898_1, VkglTestCase_002898_2);
