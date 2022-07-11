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

#define VkglTestCase_000099_1 "KHR-GLESEXT.geometry_shader.lin"
#define VkglTestCase_000099_2 "king.incomplete_program_objects"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000099, VkglTestCase_000099_1, VkglTestCase_000099_2);

#define VkglTestCase_000100_1 "KHR-GLESEXT.geometry_sha"
#define VkglTestCase_000100_2 "der.linking.incomplete_gs"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000100, VkglTestCase_000100_1, VkglTestCase_000100_2);

#define VkglTestCase_000101_1 "KHR-GLESEXT.geometry_shader.linki"
#define VkglTestCase_000101_2 "ng.invalid_arrayed_input_variables"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000101, VkglTestCase_000101_1, VkglTestCase_000101_2);

#define VkglTestCase_000102_1 "KHR-GLESEXT.geometry_shader.link"
#define VkglTestCase_000102_2 "ing.vs_gs_variable_type_mismatch"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000102, VkglTestCase_000102_1, VkglTestCase_000102_2);

#define VkglTestCase_000103_1 "KHR-GLESEXT.geometry_shader.linkin"
#define VkglTestCase_000103_2 "g.vs_gs_variable_qualifier_mismatch"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000103, VkglTestCase_000103_1, VkglTestCase_000103_2);

#define VkglTestCase_000104_1 "KHR-GLESEXT.geometry_shader.linking."
#define VkglTestCase_000104_2 "vs_gs_arrayed_variable_size_mismatch"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000104, VkglTestCase_000104_1, VkglTestCase_000104_2);

#define VkglTestCase_000105_1 "KHR-GLESEXT.geometry_shader.l"
#define VkglTestCase_000105_2 "inking.fragcoord_redeclaration"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000105, VkglTestCase_000105_1, VkglTestCase_000105_2);

#define VkglTestCase_000106_1 "KHR-GLESEXT.geometry_shade"
#define VkglTestCase_000106_2 "r.linking.location_aliasing"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000106, VkglTestCase_000106_1, VkglTestCase_000106_2);

#define VkglTestCase_000107_1 "KHR-GLESEXT.geometry_shader.link"
#define VkglTestCase_000107_2 "ing.more_ACs_in_GS_than_supported"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000107, VkglTestCase_000107_1, VkglTestCase_000107_2);

#define VkglTestCase_000108_1 "KHR-GLESEXT.geometry_shader.linki"
#define VkglTestCase_000108_2 "ng.more_ACBs_in_GS_than_supported"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000108, VkglTestCase_000108_1, VkglTestCase_000108_2);

#define VkglTestCase_000109_1 "KHR-GLESEXT.geometry_shader.linkin"
#define VkglTestCase_000109_2 "g.geometry_shader_compilation_fail"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000109, VkglTestCase_000109_1, VkglTestCase_000109_2);

#define VkglTestCase_000110_1 "KHR-GLESEXT.geometry_shader.linking.mo"
#define VkglTestCase_000110_2 "re_input_vertices_in_GS_than_available"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000110, VkglTestCase_000110_1, VkglTestCase_000110_2);

#define VkglTestCase_000111_1 "KHR-GLESEXT.geometry_shader.linking"
#define VkglTestCase_000111_2 ".tf_capture_from_gs_and_vs_variables"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000111, VkglTestCase_000111_1, VkglTestCase_000111_2);
