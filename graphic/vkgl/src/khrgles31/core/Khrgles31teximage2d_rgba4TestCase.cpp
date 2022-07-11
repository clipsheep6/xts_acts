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

#define VkglTestCase_002929_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002929_2 "emodes.teximage2d.rgba4.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002929, VkglTestCase_002929_1, VkglTestCase_002929_2);

#define VkglTestCase_002930_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002930_2 "emodes.teximage2d.rgba4.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002930, VkglTestCase_002930_1, VkglTestCase_002930_2);

#define VkglTestCase_002931_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002931_2 "emodes.teximage2d.rgba4.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002931, VkglTestCase_002931_1, VkglTestCase_002931_2);

#define VkglTestCase_002932_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002932_2 "emodes.teximage2d.rgba4.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002932, VkglTestCase_002932_1, VkglTestCase_002932_2);

#define VkglTestCase_002933_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002933_2 "emodes.teximage2d.rgba4.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002933, VkglTestCase_002933_1, VkglTestCase_002933_2);

#define VkglTestCase_002934_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002934_2 "modes.teximage2d.rgba4.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002934, VkglTestCase_002934_1, VkglTestCase_002934_2);
