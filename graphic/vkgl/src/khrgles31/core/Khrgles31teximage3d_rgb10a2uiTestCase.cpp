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
#include "../ActsKhrgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003405_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003405_2 "des.teximage3d.rgb10a2ui.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003405, VkglTestCase_003405_1, VkglTestCase_003405_2);

#define VkglTestCase_003406_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003406_2 "des.teximage3d.rgb10a2ui.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003406, VkglTestCase_003406_1, VkglTestCase_003406_2);

#define VkglTestCase_003407_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003407_2 "des.teximage3d.rgb10a2ui.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003407, VkglTestCase_003407_1, VkglTestCase_003407_2);

#define VkglTestCase_003408_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003408_2 "des.teximage3d.rgb10a2ui.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003408, VkglTestCase_003408_1, VkglTestCase_003408_2);

#define VkglTestCase_003409_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003409_2 "des.teximage3d.rgb10a2ui.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003409, VkglTestCase_003409_1, VkglTestCase_003409_2);

#define VkglTestCase_003410_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003410_2 "es.teximage3d.rgb10a2ui.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003410, VkglTestCase_003410_1, VkglTestCase_003410_2);

#define VkglTestCase_003411_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003411_2 "des.teximage3d.rgb10a2ui.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003411, VkglTestCase_003411_1, VkglTestCase_003411_2);

#define VkglTestCase_003412_1 "KHR-GLES31.core.pixelstoragemo"
#define VkglTestCase_003412_2 "des.teximage3d.rgb10a2ui.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003412, VkglTestCase_003412_1, VkglTestCase_003412_2);

#define VkglTestCase_003413_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003413_2 "es.teximage3d.rgb10a2ui.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003413, VkglTestCase_003413_1, VkglTestCase_003413_2);

#define VkglTestCase_003414_1 "KHR-GLES31.core.pixelstoragemod"
#define VkglTestCase_003414_2 "es.teximage3d.rgb10a2ui.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003414, VkglTestCase_003414_1, VkglTestCase_003414_2);
