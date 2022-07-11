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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000090_1 "KHR-GLESEXT.geometry_shader."
#define VkglTestCase_000090_2 "limits.max_uniform_components"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000090, VkglTestCase_000090_1, VkglTestCase_000090_2);

#define VkglTestCase_000091_1 "KHR-GLESEXT.geometry_shade"
#define VkglTestCase_000091_2 "r.limits.max_uniform_blocks"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000091, VkglTestCase_000091_1, VkglTestCase_000091_2);

#define VkglTestCase_000092_1 "KHR-GLESEXT.geometry_shader"
#define VkglTestCase_000092_2 ".limits.max_input_components"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000092, VkglTestCase_000092_1, VkglTestCase_000092_2);

#define VkglTestCase_000093_1 "KHR-GLESEXT.geometry_shader."
#define VkglTestCase_000093_2 "limits.max_output_components"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000093, VkglTestCase_000093_1, VkglTestCase_000093_2);

#define VkglTestCase_000094_1 "KHR-GLESEXT.geometry_shader"
#define VkglTestCase_000094_2 ".limits.max_output_vertices"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000094, VkglTestCase_000094_1, VkglTestCase_000094_2);

#define VkglTestCase_000095_1 "KHR-GLESEXT.geometry_shader.limits"
#define VkglTestCase_000095_2 ".max_output_components_single_point"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000095, VkglTestCase_000095_1, VkglTestCase_000095_2);

#define VkglTestCase_000096_1 "KHR-GLESEXT.geometry_shade"
#define VkglTestCase_000096_2 "r.limits.max_texture_units"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000096, VkglTestCase_000096_1, VkglTestCase_000096_2);

#define VkglTestCase_000097_1 "KHR-GLESEXT.geometry_shad"
#define VkglTestCase_000097_2 "er.limits.max_invocations"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000097, VkglTestCase_000097_1, VkglTestCase_000097_2);

#define VkglTestCase_000098_1 "KHR-GLESEXT.geometry_shader.li"
#define VkglTestCase_000098_2 "mits.max_combined_texture_units"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000098, VkglTestCase_000098_1, VkglTestCase_000098_2);
