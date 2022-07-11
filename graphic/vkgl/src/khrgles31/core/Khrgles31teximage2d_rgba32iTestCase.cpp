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

#define VkglTestCase_002983_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002983_2 "modes.teximage2d.rgba32i.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002983, VkglTestCase_002983_1, VkglTestCase_002983_2);

#define VkglTestCase_002984_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002984_2 "modes.teximage2d.rgba32i.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002984, VkglTestCase_002984_1, VkglTestCase_002984_2);

#define VkglTestCase_002985_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002985_2 "modes.teximage2d.rgba32i.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002985, VkglTestCase_002985_1, VkglTestCase_002985_2);

#define VkglTestCase_002986_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002986_2 "modes.teximage2d.rgba32i.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002986, VkglTestCase_002986_1, VkglTestCase_002986_2);

#define VkglTestCase_002987_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002987_2 "modes.teximage2d.rgba32i.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002987, VkglTestCase_002987_1, VkglTestCase_002987_2);

#define VkglTestCase_002988_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002988_2 "odes.teximage2d.rgba32i.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002988, VkglTestCase_002988_1, VkglTestCase_002988_2);
