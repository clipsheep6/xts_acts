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

#define VkglTestCase_000160_1 "KHR-GLESEXT.tessellation_shader.single.d"
#define VkglTestCase_000160_2 "efault_values_of_context_wide_properties"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000160, VkglTestCase_000160_1, VkglTestCase_000160_2);

#define VkglTestCase_000161_1 "KHR-GLESEXT.tessellation_shade"
#define VkglTestCase_000161_2 "r.single.isolines_tessellation"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000161, VkglTestCase_000161_1, VkglTestCase_000161_2);

#define VkglTestCase_000162_1 "KHR-GLESEXT.tessellation_shader.single"
#define VkglTestCase_000162_2 ".ext_program_interface_query_dependency"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000162, VkglTestCase_000162_1, VkglTestCase_000162_2);

#define VkglTestCase_000163_1 "KHR-GLESEXT.tessellation_shader."
#define VkglTestCase_000163_2 "single.program_object_properties"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000163, VkglTestCase_000163_1, VkglTestCase_000163_2);

#define VkglTestCase_000164_1 "KHR-GLESEXT.tessellation_shader.singl"
#define VkglTestCase_000164_2 "e.xfb_captures_data_from_correct_stage"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000164, VkglTestCase_000164_1, VkglTestCase_000164_2);

#define VkglTestCase_000165_1 "KHR-GLESEXT.tessellation_sha"
#define VkglTestCase_000165_2 "der.single.max_patch_vertices"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000165, VkglTestCase_000165_1, VkglTestCase_000165_2);

#define VkglTestCase_000166_1 "KHR-GLESEXT.tessellation_sha"
#define VkglTestCase_000166_2 "der.single.primitive_coverage"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000166, VkglTestCase_000166_1, VkglTestCase_000166_2);
