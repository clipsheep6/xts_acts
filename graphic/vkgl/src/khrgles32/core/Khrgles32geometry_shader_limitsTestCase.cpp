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

#define VkglTestCase_000118_1 "KHR-GLES32.core.geometry_shade"
#define VkglTestCase_000118_2 "r.limits.max_uniform_components"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000118, VkglTestCase_000118_1, VkglTestCase_000118_2);

#define VkglTestCase_000119_1 "KHR-GLES32.core.geometry_sha"
#define VkglTestCase_000119_2 "der.limits.max_uniform_blocks"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000119, VkglTestCase_000119_1, VkglTestCase_000119_2);

#define VkglTestCase_000120_1 "KHR-GLES32.core.geometry_shad"
#define VkglTestCase_000120_2 "er.limits.max_input_components"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000120, VkglTestCase_000120_1, VkglTestCase_000120_2);

#define VkglTestCase_000121_1 "KHR-GLES32.core.geometry_shade"
#define VkglTestCase_000121_2 "r.limits.max_output_components"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000121, VkglTestCase_000121_1, VkglTestCase_000121_2);

#define VkglTestCase_000122_1 "KHR-GLES32.core.geometry_shad"
#define VkglTestCase_000122_2 "er.limits.max_output_vertices"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000122, VkglTestCase_000122_1, VkglTestCase_000122_2);

#define VkglTestCase_000123_1 "KHR-GLES32.core.geometry_shader.limi"
#define VkglTestCase_000123_2 "ts.max_output_components_single_point"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000123, VkglTestCase_000123_1, VkglTestCase_000123_2);

#define VkglTestCase_000124_1 "KHR-GLES32.core.geometry_sha"
#define VkglTestCase_000124_2 "der.limits.max_texture_units"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000124, VkglTestCase_000124_1, VkglTestCase_000124_2);

#define VkglTestCase_000125_1 "KHR-GLES32.core.geometry_sh"
#define VkglTestCase_000125_2 "ader.limits.max_invocations"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000125, VkglTestCase_000125_1, VkglTestCase_000125_2);

#define VkglTestCase_000126_1 "KHR-GLES32.core.geometry_shader."
#define VkglTestCase_000126_2 "limits.max_combined_texture_units"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000126, VkglTestCase_000126_1, VkglTestCase_000126_2);
