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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001126_1 "KHR-GLES32.core.internal"
#define VkglTestCase_001126_2 "format.renderbuffer.rgba8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001126, VkglTestCase_001126_1, VkglTestCase_001126_2);

#define VkglTestCase_001127_1 "KHR-GLES32.core.internal"
#define VkglTestCase_001127_2 "format.renderbuffer.rgb8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001127, VkglTestCase_001127_1, VkglTestCase_001127_2);

#define VkglTestCase_001128_1 "KHR-GLES32.core.internalf"
#define VkglTestCase_001128_2 "ormat.renderbuffer.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001128, VkglTestCase_001128_1, VkglTestCase_001128_2);

#define VkglTestCase_001129_1 "KHR-GLES32.core.internalform"
#define VkglTestCase_001129_2 "at.renderbuffer.srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001129, VkglTestCase_001129_1, VkglTestCase_001129_2);

#define VkglTestCase_001130_1 "KHR-GLES32.core.internalformat."
#define VkglTestCase_001130_2 "renderbuffer.depth_component32f"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001130, VkglTestCase_001130_1, VkglTestCase_001130_2);

#define VkglTestCase_001131_1 "KHR-GLES32.core.internalformat"
#define VkglTestCase_001131_2 ".renderbuffer.depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001131, VkglTestCase_001131_1, VkglTestCase_001131_2);
