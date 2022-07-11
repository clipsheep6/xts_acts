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
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000240_1 "KHR-GLES32.core.tessellation"
#define VkglTestCase_000240_2 "_shader.winding.triangles_ccw"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000240, VkglTestCase_000240_1, VkglTestCase_000240_2);

#define VkglTestCase_000241_1 "KHR-GLES32.core.tessellation"
#define VkglTestCase_000241_2 "_shader.winding.triangles_cw"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000241, VkglTestCase_000241_1, VkglTestCase_000241_2);

#define VkglTestCase_000242_1 "KHR-GLES32.core.tessellati"
#define VkglTestCase_000242_2 "on_shader.winding.quads_ccw"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000242, VkglTestCase_000242_1, VkglTestCase_000242_2);

#define VkglTestCase_000243_1 "KHR-GLES32.core.tessellati"
#define VkglTestCase_000243_2 "on_shader.winding.quads_cw"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000243, VkglTestCase_000243_1, VkglTestCase_000243_2);
