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
#include "../Khrgles2BaseFunc.h"
#include "../ActsKhrgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000463_1 "KHR-GLES2.core.internalf"
#define VkglTestCase_000463_2 "ormat.renderbuffer.rgba8"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000463, VkglTestCase_000463_1, VkglTestCase_000463_2);

#define VkglTestCase_000464_1 "KHR-GLES2.core.internal"
#define VkglTestCase_000464_2 "format.renderbuffer.rgb8"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000464, VkglTestCase_000464_1, VkglTestCase_000464_2);

#define VkglTestCase_000465_1 "KHR-GLES2.core.internalformat."
#define VkglTestCase_000465_2 "renderbuffer.stencil_index1_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000465, VkglTestCase_000465_1, VkglTestCase_000465_2);

#define VkglTestCase_000466_1 "KHR-GLES2.core.internalformat."
#define VkglTestCase_000466_2 "renderbuffer.stencil_index4_oes"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000466, VkglTestCase_000466_1, VkglTestCase_000466_2);

#define VkglTestCase_000467_1 "KHR-GLES2.core.internalforma"
#define VkglTestCase_000467_2 "t.renderbuffer.stencil_index8"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000467, VkglTestCase_000467_1, VkglTestCase_000467_2);

#define VkglTestCase_000468_1 "KHR-GLES2.core.internalformat."
#define VkglTestCase_000468_2 "renderbuffer.depth_component16"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000468, VkglTestCase_000468_1, VkglTestCase_000468_2);

#define VkglTestCase_000469_1 "KHR-GLES2.core.internalformat."
#define VkglTestCase_000469_2 "renderbuffer.depth_component24"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000469, VkglTestCase_000469_1, VkglTestCase_000469_2);

#define VkglTestCase_000470_1 "KHR-GLES2.core.internalformat."
#define VkglTestCase_000470_2 "renderbuffer.depth_component32"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000470, VkglTestCase_000470_1, VkglTestCase_000470_2);

#define VkglTestCase_000471_1 "KHR-GLES2.core.internalformat"
#define VkglTestCase_000471_2 ".renderbuffer.depth24_stencil8"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000471, VkglTestCase_000471_1, VkglTestCase_000471_2);

#define VkglTestCase_000472_1 "KHR-GLES2.core.internalfo"
#define VkglTestCase_000472_2 "rmat.renderbuffer.rgb5_a1"
SHRINK_HWTEST_F(ActsKhrgles20001TestSuite, TestCase_000472, VkglTestCase_000472_1, VkglTestCase_000472_2);
