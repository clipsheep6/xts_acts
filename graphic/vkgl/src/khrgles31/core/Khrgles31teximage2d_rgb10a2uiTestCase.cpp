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

#define VkglTestCase_002965_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002965_2 "odes.teximage2d.rgb10a2ui.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002965, VkglTestCase_002965_1, VkglTestCase_002965_2);

#define VkglTestCase_002966_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002966_2 "odes.teximage2d.rgb10a2ui.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002966, VkglTestCase_002966_1, VkglTestCase_002966_2);

#define VkglTestCase_002967_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002967_2 "odes.teximage2d.rgb10a2ui.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002967, VkglTestCase_002967_1, VkglTestCase_002967_2);

#define VkglTestCase_002968_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002968_2 "odes.teximage2d.rgb10a2ui.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002968, VkglTestCase_002968_1, VkglTestCase_002968_2);

#define VkglTestCase_002969_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002969_2 "odes.teximage2d.rgb10a2ui.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002969, VkglTestCase_002969_1, VkglTestCase_002969_2);

#define VkglTestCase_002970_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_002970_2 "des.teximage2d.rgb10a2ui.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002970, VkglTestCase_002970_1, VkglTestCase_002970_2);
