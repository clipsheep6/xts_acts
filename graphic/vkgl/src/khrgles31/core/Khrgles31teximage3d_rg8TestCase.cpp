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

#define VkglTestCase_003095_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003095_2 "emodes.teximage3d.rg8.0_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003095, VkglTestCase_003095_1, VkglTestCase_003095_2);

#define VkglTestCase_003096_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003096_2 "emodes.teximage3d.rg8.1_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003096, VkglTestCase_003096_1, VkglTestCase_003096_2);

#define VkglTestCase_003097_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003097_2 "emodes.teximage3d.rg8.16_0_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003097, VkglTestCase_003097_1, VkglTestCase_003097_2);

#define VkglTestCase_003098_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003098_2 "emodes.teximage3d.rg8.1_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003098, VkglTestCase_003098_1, VkglTestCase_003098_2);

#define VkglTestCase_003099_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003099_2 "emodes.teximage3d.rg8.16_1_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003099, VkglTestCase_003099_1, VkglTestCase_003099_2);

#define VkglTestCase_003100_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003100_2 "modes.teximage3d.rg8.16_16_0"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003100, VkglTestCase_003100_1, VkglTestCase_003100_2);

#define VkglTestCase_003101_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003101_2 "emodes.teximage3d.rg8.1_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003101, VkglTestCase_003101_1, VkglTestCase_003101_2);

#define VkglTestCase_003102_1 "KHR-GLES31.core.pixelstorag"
#define VkglTestCase_003102_2 "emodes.teximage3d.rg8.16_1_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003102, VkglTestCase_003102_1, VkglTestCase_003102_2);

#define VkglTestCase_003103_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003103_2 "modes.teximage3d.rg8.16_16_1"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003103, VkglTestCase_003103_1, VkglTestCase_003103_2);

#define VkglTestCase_003104_1 "KHR-GLES31.core.pixelstorage"
#define VkglTestCase_003104_2 "modes.teximage3d.rg8.16_16_4"
SHRINK_HWTEST_F(ActsKhrgles310004TestSuite, TestCase_003104, VkglTestCase_003104_1, VkglTestCase_003104_2);
