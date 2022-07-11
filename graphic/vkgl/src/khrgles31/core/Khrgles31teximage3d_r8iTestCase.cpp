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

#define VkglTestCase_003045_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003045_2 "emodes.teximage3d.r8i.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003045, VkglTestCase_003045_1, VkglTestCase_003045_2);

#define VkglTestCase_003046_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003046_2 "emodes.teximage3d.r8i.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003046, VkglTestCase_003046_1, VkglTestCase_003046_2);

#define VkglTestCase_003047_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003047_2 "emodes.teximage3d.r8i.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003047, VkglTestCase_003047_1, VkglTestCase_003047_2);

#define VkglTestCase_003048_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003048_2 "emodes.teximage3d.r8i.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003048, VkglTestCase_003048_1, VkglTestCase_003048_2);

#define VkglTestCase_003049_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003049_2 "emodes.teximage3d.r8i.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003049, VkglTestCase_003049_1, VkglTestCase_003049_2);

#define VkglTestCase_003050_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003050_2 "modes.teximage3d.r8i.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003050, VkglTestCase_003050_1, VkglTestCase_003050_2);

#define VkglTestCase_003051_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003051_2 "emodes.teximage3d.r8i.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003051, VkglTestCase_003051_1, VkglTestCase_003051_2);

#define VkglTestCase_003052_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003052_2 "emodes.teximage3d.r8i.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003052, VkglTestCase_003052_1, VkglTestCase_003052_2);

#define VkglTestCase_003053_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003053_2 "modes.teximage3d.r8i.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003053, VkglTestCase_003053_1, VkglTestCase_003053_2);

#define VkglTestCase_003054_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003054_2 "modes.teximage3d.r8i.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003054, VkglTestCase_003054_1, VkglTestCase_003054_2);
