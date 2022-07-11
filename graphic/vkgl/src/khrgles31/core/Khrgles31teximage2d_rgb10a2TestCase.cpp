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

#define VkglTestCase_002935_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002935_2 "modes.teximage2d.rgb10a2.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002935, VkglTestCase_002935_1, VkglTestCase_002935_2);

#define VkglTestCase_002936_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002936_2 "modes.teximage2d.rgb10a2.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002936, VkglTestCase_002936_1, VkglTestCase_002936_2);

#define VkglTestCase_002937_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002937_2 "modes.teximage2d.rgb10a2.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002937, VkglTestCase_002937_1, VkglTestCase_002937_2);

#define VkglTestCase_002938_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002938_2 "modes.teximage2d.rgb10a2.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002938, VkglTestCase_002938_1, VkglTestCase_002938_2);

#define VkglTestCase_002939_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002939_2 "modes.teximage2d.rgb10a2.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002939, VkglTestCase_002939_1, VkglTestCase_002939_2);

#define VkglTestCase_002940_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002940_2 "odes.teximage2d.rgb10a2.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002940, VkglTestCase_002940_1, VkglTestCase_002940_2);
