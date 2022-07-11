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

#define VkglTestCase_002566_1 "KHR-GLES31.core.tessellation_shader.single"
#define VkglTestCase_002566_2 ".default_values_of_context_wide_properties"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002566, VkglTestCase_002566_1, VkglTestCase_002566_2);

#define VkglTestCase_002567_1 "KHR-GLES31.core.tessellation_sha"
#define VkglTestCase_002567_2 "der.single.isolines_tessellation"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002567, VkglTestCase_002567_1, VkglTestCase_002567_2);

#define VkglTestCase_002568_1 "KHR-GLES31.core.tessellation_shader.sing"
#define VkglTestCase_002568_2 "le.ext_program_interface_query_dependency"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002568, VkglTestCase_002568_1, VkglTestCase_002568_2);

#define VkglTestCase_002569_1 "KHR-GLES31.core.tessellation_shade"
#define VkglTestCase_002569_2 "r.single.program_object_properties"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002569, VkglTestCase_002569_1, VkglTestCase_002569_2);

#define VkglTestCase_002570_1 "KHR-GLES31.core.tessellation_shader.sin"
#define VkglTestCase_002570_2 "gle.xfb_captures_data_from_correct_stage"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002570, VkglTestCase_002570_1, VkglTestCase_002570_2);

#define VkglTestCase_002571_1 "KHR-GLES31.core.tessellation_s"
#define VkglTestCase_002571_2 "hader.single.max_patch_vertices"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002571, VkglTestCase_002571_1, VkglTestCase_002571_2);

#define VkglTestCase_002572_1 "KHR-GLES31.core.tessellation_s"
#define VkglTestCase_002572_2 "hader.single.primitive_coverage"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002572, VkglTestCase_002572_1, VkglTestCase_002572_2);
