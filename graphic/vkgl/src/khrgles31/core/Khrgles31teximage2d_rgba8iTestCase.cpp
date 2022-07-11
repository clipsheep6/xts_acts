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

#define VkglTestCase_002959_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002959_2 "emodes.teximage2d.rgba8i.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002959, VkglTestCase_002959_1, VkglTestCase_002959_2);

#define VkglTestCase_002960_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002960_2 "emodes.teximage2d.rgba8i.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002960, VkglTestCase_002960_1, VkglTestCase_002960_2);

#define VkglTestCase_002961_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002961_2 "modes.teximage2d.rgba8i.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002961, VkglTestCase_002961_1, VkglTestCase_002961_2);

#define VkglTestCase_002962_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_002962_2 "emodes.teximage2d.rgba8i.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002962, VkglTestCase_002962_1, VkglTestCase_002962_2);

#define VkglTestCase_002963_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002963_2 "modes.teximage2d.rgba8i.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002963, VkglTestCase_002963_1, VkglTestCase_002963_2);

#define VkglTestCase_002964_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002964_2 "modes.teximage2d.rgba8i.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002964, VkglTestCase_002964_1, VkglTestCase_002964_2);
