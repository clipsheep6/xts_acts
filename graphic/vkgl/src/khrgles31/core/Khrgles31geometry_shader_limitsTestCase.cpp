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

#define VkglTestCase_002496_1 "KHR-GLES31.core.geometry_shade"
#define VkglTestCase_002496_2 "r.limits.max_uniform_components"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002496, VkglTestCase_002496_1, VkglTestCase_002496_2);

#define VkglTestCase_002497_1 "KHR-GLES31.core.geometry_sha"
#define VkglTestCase_002497_2 "der.limits.max_uniform_blocks"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002497, VkglTestCase_002497_1, VkglTestCase_002497_2);

#define VkglTestCase_002498_1 "KHR-GLES31.core.geometry_shad"
#define VkglTestCase_002498_2 "er.limits.max_input_components"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002498, VkglTestCase_002498_1, VkglTestCase_002498_2);

#define VkglTestCase_002499_1 "KHR-GLES31.core.geometry_shade"
#define VkglTestCase_002499_2 "r.limits.max_output_components"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002499, VkglTestCase_002499_1, VkglTestCase_002499_2);

#define VkglTestCase_002500_1 "KHR-GLES31.core.geometry_shad"
#define VkglTestCase_002500_2 "er.limits.max_output_vertices"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002500, VkglTestCase_002500_1, VkglTestCase_002500_2);

#define VkglTestCase_002501_1 "KHR-GLES31.core.geometry_shader.limi"
#define VkglTestCase_002501_2 "ts.max_output_components_single_point"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002501, VkglTestCase_002501_1, VkglTestCase_002501_2);

#define VkglTestCase_002502_1 "KHR-GLES31.core.geometry_sha"
#define VkglTestCase_002502_2 "der.limits.max_texture_units"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002502, VkglTestCase_002502_1, VkglTestCase_002502_2);

#define VkglTestCase_002503_1 "KHR-GLES31.core.geometry_sh"
#define VkglTestCase_002503_2 "ader.limits.max_invocations"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002503, VkglTestCase_002503_1, VkglTestCase_002503_2);

#define VkglTestCase_002504_1 "KHR-GLES31.core.geometry_shader."
#define VkglTestCase_002504_2 "limits.max_combined_texture_units"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002504, VkglTestCase_002504_1, VkglTestCase_002504_2);
