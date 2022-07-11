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

#define VkglTestCase_000207_1 "KHR-GLES32.core.tessellation_shader.tessellation_"
#define VkglTestCase_000207_2 "shader_triangles_tessellation.degenerate_triangle"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000207, VkglTestCase_000207_1, VkglTestCase_000207_2);

#define VkglTestCase_000208_1 "KHR-GLES32.core.tessellation_shader.tessellation_"
#define VkglTestCase_000208_2 "shader_triangles_tessellation.identical_triangles"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000208, VkglTestCase_000208_1, VkglTestCase_000208_2);

#define VkglTestCase_000209_1 "KHR-GLES32.core.tessellation_shader.tessellation_shader_"
#define VkglTestCase_000209_2 "triangles_tessellation.inner_tessellation_level_rounding"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000209, VkglTestCase_000209_1, VkglTestCase_000209_2);
