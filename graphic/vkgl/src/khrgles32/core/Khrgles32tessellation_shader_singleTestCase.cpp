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

#define VkglTestCase_000188_1 "KHR-GLES32.core.tessellation_shader.single"
#define VkglTestCase_000188_2 ".default_values_of_context_wide_properties"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000188, VkglTestCase_000188_1, VkglTestCase_000188_2);

#define VkglTestCase_000189_1 "KHR-GLES32.core.tessellation_sha"
#define VkglTestCase_000189_2 "der.single.isolines_tessellation"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000189, VkglTestCase_000189_1, VkglTestCase_000189_2);

#define VkglTestCase_000190_1 "KHR-GLES32.core.tessellation_shader.sing"
#define VkglTestCase_000190_2 "le.ext_program_interface_query_dependency"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000190, VkglTestCase_000190_1, VkglTestCase_000190_2);

#define VkglTestCase_000191_1 "KHR-GLES32.core.tessellation_shade"
#define VkglTestCase_000191_2 "r.single.program_object_properties"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000191, VkglTestCase_000191_1, VkglTestCase_000191_2);

#define VkglTestCase_000192_1 "KHR-GLES32.core.tessellation_shader.sin"
#define VkglTestCase_000192_2 "gle.xfb_captures_data_from_correct_stage"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000192, VkglTestCase_000192_1, VkglTestCase_000192_2);

#define VkglTestCase_000193_1 "KHR-GLES32.core.tessellation_s"
#define VkglTestCase_000193_2 "hader.single.max_patch_vertices"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000193, VkglTestCase_000193_1, VkglTestCase_000193_2);

#define VkglTestCase_000194_1 "KHR-GLES32.core.tessellation_s"
#define VkglTestCase_000194_2 "hader.single.primitive_coverage"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000194, VkglTestCase_000194_1, VkglTestCase_000194_2);
