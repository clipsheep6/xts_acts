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

#define VkglTestCase_002618_1 "KHR-GLES31.core.tessellation"
#define VkglTestCase_002618_2 "_shader.winding.triangles_ccw"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002618, VkglTestCase_002618_1, VkglTestCase_002618_2);

#define VkglTestCase_002619_1 "KHR-GLES31.core.tessellation"
#define VkglTestCase_002619_2 "_shader.winding.triangles_cw"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002619, VkglTestCase_002619_1, VkglTestCase_002619_2);

#define VkglTestCase_002620_1 "KHR-GLES31.core.tessellati"
#define VkglTestCase_002620_2 "on_shader.winding.quads_ccw"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002620, VkglTestCase_002620_1, VkglTestCase_002620_2);

#define VkglTestCase_002621_1 "KHR-GLES31.core.tessellati"
#define VkglTestCase_002621_2 "on_shader.winding.quads_cw"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002621, VkglTestCase_002621_1, VkglTestCase_002621_2);
