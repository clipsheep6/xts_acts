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

#define VkglTestCase_003185_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003185_2 "modes.teximage3d.rg32i.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003185, VkglTestCase_003185_1, VkglTestCase_003185_2);

#define VkglTestCase_003186_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003186_2 "modes.teximage3d.rg32i.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003186, VkglTestCase_003186_1, VkglTestCase_003186_2);

#define VkglTestCase_003187_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003187_2 "modes.teximage3d.rg32i.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003187, VkglTestCase_003187_1, VkglTestCase_003187_2);

#define VkglTestCase_003188_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003188_2 "modes.teximage3d.rg32i.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003188, VkglTestCase_003188_1, VkglTestCase_003188_2);

#define VkglTestCase_003189_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003189_2 "modes.teximage3d.rg32i.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003189, VkglTestCase_003189_1, VkglTestCase_003189_2);

#define VkglTestCase_003190_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003190_2 "odes.teximage3d.rg32i.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003190, VkglTestCase_003190_1, VkglTestCase_003190_2);

#define VkglTestCase_003191_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003191_2 "modes.teximage3d.rg32i.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003191, VkglTestCase_003191_1, VkglTestCase_003191_2);

#define VkglTestCase_003192_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003192_2 "modes.teximage3d.rg32i.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003192, VkglTestCase_003192_1, VkglTestCase_003192_2);

#define VkglTestCase_003193_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003193_2 "odes.teximage3d.rg32i.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003193, VkglTestCase_003193_1, VkglTestCase_003193_2);

#define VkglTestCase_003194_1 "KHR-GLES31.core.pixelstoragem"
#define VkglTestCase_003194_2 "odes.teximage3d.rg32i.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003194, VkglTestCase_003194_1, VkglTestCase_003194_2);
