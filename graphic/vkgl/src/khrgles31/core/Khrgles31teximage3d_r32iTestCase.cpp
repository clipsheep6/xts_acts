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

#define VkglTestCase_003085_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003085_2 "emodes.teximage3d.r32i.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003085, VkglTestCase_003085_1, VkglTestCase_003085_2);

#define VkglTestCase_003086_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003086_2 "emodes.teximage3d.r32i.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003086, VkglTestCase_003086_1, VkglTestCase_003086_2);

#define VkglTestCase_003087_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003087_2 "modes.teximage3d.r32i.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003087, VkglTestCase_003087_1, VkglTestCase_003087_2);

#define VkglTestCase_003088_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003088_2 "emodes.teximage3d.r32i.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003088, VkglTestCase_003088_1, VkglTestCase_003088_2);

#define VkglTestCase_003089_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003089_2 "modes.teximage3d.r32i.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003089, VkglTestCase_003089_1, VkglTestCase_003089_2);

#define VkglTestCase_003090_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003090_2 "modes.teximage3d.r32i.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003090, VkglTestCase_003090_1, VkglTestCase_003090_2);

#define VkglTestCase_003091_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003091_2 "emodes.teximage3d.r32i.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003091, VkglTestCase_003091_1, VkglTestCase_003091_2);

#define VkglTestCase_003092_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003092_2 "modes.teximage3d.r32i.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003092, VkglTestCase_003092_1, VkglTestCase_003092_2);

#define VkglTestCase_003093_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003093_2 "modes.teximage3d.r32i.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003093, VkglTestCase_003093_1, VkglTestCase_003093_2);

#define VkglTestCase_003094_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003094_2 "modes.teximage3d.r32i.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003094, VkglTestCase_003094_1, VkglTestCase_003094_2);
