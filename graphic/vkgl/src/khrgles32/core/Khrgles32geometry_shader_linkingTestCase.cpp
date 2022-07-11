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

#define VkglTestCase_000127_1 "KHR-GLES32.core.geometry_shader.l"
#define VkglTestCase_000127_2 "inking.incomplete_program_objects"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000127, VkglTestCase_000127_1, VkglTestCase_000127_2);

#define VkglTestCase_000128_1 "KHR-GLES32.core.geometry_s"
#define VkglTestCase_000128_2 "hader.linking.incomplete_gs"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000128, VkglTestCase_000128_1, VkglTestCase_000128_2);

#define VkglTestCase_000129_1 "KHR-GLES32.core.geometry_shader.lin"
#define VkglTestCase_000129_2 "king.invalid_arrayed_input_variables"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000129, VkglTestCase_000129_1, VkglTestCase_000129_2);

#define VkglTestCase_000130_1 "KHR-GLES32.core.geometry_shader.li"
#define VkglTestCase_000130_2 "nking.vs_gs_variable_type_mismatch"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000130, VkglTestCase_000130_1, VkglTestCase_000130_2);

#define VkglTestCase_000131_1 "KHR-GLES32.core.geometry_shader.link"
#define VkglTestCase_000131_2 "ing.vs_gs_variable_qualifier_mismatch"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000131, VkglTestCase_000131_1, VkglTestCase_000131_2);

#define VkglTestCase_000132_1 "KHR-GLES32.core.geometry_shader.linkin"
#define VkglTestCase_000132_2 "g.vs_gs_arrayed_variable_size_mismatch"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000132, VkglTestCase_000132_1, VkglTestCase_000132_2);

#define VkglTestCase_000133_1 "KHR-GLES32.core.geometry_shader"
#define VkglTestCase_000133_2 ".linking.fragcoord_redeclaration"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000133, VkglTestCase_000133_1, VkglTestCase_000133_2);

#define VkglTestCase_000134_1 "KHR-GLES32.core.geometry_sha"
#define VkglTestCase_000134_2 "der.linking.location_aliasing"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000134, VkglTestCase_000134_1, VkglTestCase_000134_2);

#define VkglTestCase_000135_1 "KHR-GLES32.core.geometry_shader.li"
#define VkglTestCase_000135_2 "nking.more_ACs_in_GS_than_supported"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000135, VkglTestCase_000135_1, VkglTestCase_000135_2);

#define VkglTestCase_000136_1 "KHR-GLES32.core.geometry_shader.lin"
#define VkglTestCase_000136_2 "king.more_ACBs_in_GS_than_supported"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000136, VkglTestCase_000136_1, VkglTestCase_000136_2);

#define VkglTestCase_000137_1 "KHR-GLES32.core.geometry_shader.link"
#define VkglTestCase_000137_2 "ing.geometry_shader_compilation_fail"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000137, VkglTestCase_000137_1, VkglTestCase_000137_2);

#define VkglTestCase_000138_1 "KHR-GLES32.core.geometry_shader.linking."
#define VkglTestCase_000138_2 "more_input_vertices_in_GS_than_available"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000138, VkglTestCase_000138_1, VkglTestCase_000138_2);

#define VkglTestCase_000139_1 "KHR-GLES32.core.geometry_shader.linki"
#define VkglTestCase_000139_2 "ng.tf_capture_from_gs_and_vs_variables"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000139, VkglTestCase_000139_1, VkglTestCase_000139_2);
