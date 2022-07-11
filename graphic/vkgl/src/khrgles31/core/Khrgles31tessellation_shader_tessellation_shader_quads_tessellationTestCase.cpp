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

#define VkglTestCase_002573_1 "KHR-GLES31.core.tessellation_shader.tessellat"
#define VkglTestCase_002573_2 "ion_shader_quads_tessellation.degenerate_case"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002573, VkglTestCase_002573_1, VkglTestCase_002573_2);

#define VkglTestCase_002574_1 "KHR-GLES31.core.tessellation_shader.tessellation_shade"
#define VkglTestCase_002574_2 "r_quads_tessellation.inner_tessellation_level_rounding"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002574, VkglTestCase_002574_1, VkglTestCase_002574_2);
