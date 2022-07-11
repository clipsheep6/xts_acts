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

#define VkglTestCase_002362_1 "KHR-GLES31.core.internal"
#define VkglTestCase_002362_2 "format.renderbuffer.rgba8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002362, VkglTestCase_002362_1, VkglTestCase_002362_2);

#define VkglTestCase_002363_1 "KHR-GLES31.core.internal"
#define VkglTestCase_002363_2 "format.renderbuffer.rgb8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002363, VkglTestCase_002363_1, VkglTestCase_002363_2);

#define VkglTestCase_002364_1 "KHR-GLES31.core.internalf"
#define VkglTestCase_002364_2 "ormat.renderbuffer.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002364, VkglTestCase_002364_1, VkglTestCase_002364_2);

#define VkglTestCase_002365_1 "KHR-GLES31.core.internalform"
#define VkglTestCase_002365_2 "at.renderbuffer.srgb8_alpha8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002365, VkglTestCase_002365_1, VkglTestCase_002365_2);

#define VkglTestCase_002366_1 "KHR-GLES31.core.internalformat."
#define VkglTestCase_002366_2 "renderbuffer.depth_component32f"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002366, VkglTestCase_002366_1, VkglTestCase_002366_2);

#define VkglTestCase_002367_1 "KHR-GLES31.core.internalformat"
#define VkglTestCase_002367_2 ".renderbuffer.depth32f_stencil8"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002367, VkglTestCase_002367_1, VkglTestCase_002367_2);
