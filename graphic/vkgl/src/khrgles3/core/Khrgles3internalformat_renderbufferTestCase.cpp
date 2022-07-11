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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003701_1 "KHR-GLES3.core.internalf"
#define VkglTestCase_003701_2 "ormat.renderbuffer.rgba8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003701, VkglTestCase_003701_1, VkglTestCase_003701_2);

#define VkglTestCase_003702_1 "KHR-GLES3.core.internal"
#define VkglTestCase_003702_2 "format.renderbuffer.rgb8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003702, VkglTestCase_003702_1, VkglTestCase_003702_2);

#define VkglTestCase_003703_1 "KHR-GLES3.core.internalfo"
#define VkglTestCase_003703_2 "rmat.renderbuffer.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003703, VkglTestCase_003703_1, VkglTestCase_003703_2);

#define VkglTestCase_003704_1 "KHR-GLES3.core.internalform"
#define VkglTestCase_003704_2 "at.renderbuffer.srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003704, VkglTestCase_003704_1, VkglTestCase_003704_2);

#define VkglTestCase_003705_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003705_2 "renderbuffer.depth_component32f"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003705, VkglTestCase_003705_1, VkglTestCase_003705_2);

#define VkglTestCase_003706_1 "KHR-GLES3.core.internalformat."
#define VkglTestCase_003706_2 "renderbuffer.depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003706, VkglTestCase_003706_1, VkglTestCase_003706_2);
