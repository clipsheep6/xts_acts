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

#define VkglTestCase_003195_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003195_2 "emodes.teximage3d.rgb8.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003195, VkglTestCase_003195_1, VkglTestCase_003195_2);

#define VkglTestCase_003196_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003196_2 "emodes.teximage3d.rgb8.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003196, VkglTestCase_003196_1, VkglTestCase_003196_2);

#define VkglTestCase_003197_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003197_2 "modes.teximage3d.rgb8.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003197, VkglTestCase_003197_1, VkglTestCase_003197_2);

#define VkglTestCase_003198_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003198_2 "emodes.teximage3d.rgb8.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003198, VkglTestCase_003198_1, VkglTestCase_003198_2);

#define VkglTestCase_003199_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003199_2 "modes.teximage3d.rgb8.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003199, VkglTestCase_003199_1, VkglTestCase_003199_2);

#define VkglTestCase_003200_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003200_2 "modes.teximage3d.rgb8.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003200, VkglTestCase_003200_1, VkglTestCase_003200_2);

#define VkglTestCase_003201_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003201_2 "emodes.teximage3d.rgb8.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003201, VkglTestCase_003201_1, VkglTestCase_003201_2);

#define VkglTestCase_003202_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003202_2 "modes.teximage3d.rgb8.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003202, VkglTestCase_003202_1, VkglTestCase_003202_2);

#define VkglTestCase_003203_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003203_2 "modes.teximage3d.rgb8.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003203, VkglTestCase_003203_1, VkglTestCase_003203_2);

#define VkglTestCase_003204_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003204_2 "modes.teximage3d.rgb8.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003204, VkglTestCase_003204_1, VkglTestCase_003204_2);
