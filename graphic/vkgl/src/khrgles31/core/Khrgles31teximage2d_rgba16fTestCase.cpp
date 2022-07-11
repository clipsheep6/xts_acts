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

#define VkglTestCase_002941_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002941_2 "modes.teximage2d.rgba16f.0_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002941, VkglTestCase_002941_1, VkglTestCase_002941_2);

#define VkglTestCase_002942_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002942_2 "modes.teximage2d.rgba16f.1_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002942, VkglTestCase_002942_1, VkglTestCase_002942_2);

#define VkglTestCase_002943_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002943_2 "modes.teximage2d.rgba16f.16_0"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002943, VkglTestCase_002943_1, VkglTestCase_002943_2);

#define VkglTestCase_002944_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002944_2 "modes.teximage2d.rgba16f.1_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002944, VkglTestCase_002944_1, VkglTestCase_002944_2);

#define VkglTestCase_002945_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_002945_2 "modes.teximage2d.rgba16f.16_1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002945, VkglTestCase_002945_1, VkglTestCase_002945_2);

#define VkglTestCase_002946_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_002946_2 "odes.teximage2d.rgba16f.16_16"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002946, VkglTestCase_002946_1, VkglTestCase_002946_2);
