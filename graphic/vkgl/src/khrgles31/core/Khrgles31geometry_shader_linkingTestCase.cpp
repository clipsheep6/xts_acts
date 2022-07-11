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

#define VkglTestCase_002505_1 "KHR-GLES31.core.geometry_shader.l"
#define VkglTestCase_002505_2 "inking.incomplete_program_objects"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002505, VkglTestCase_002505_1, VkglTestCase_002505_2);

#define VkglTestCase_002506_1 "KHR-GLES31.core.geometry_s"
#define VkglTestCase_002506_2 "hader.linking.incomplete_gs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002506, VkglTestCase_002506_1, VkglTestCase_002506_2);

#define VkglTestCase_002507_1 "KHR-GLES31.core.geometry_shader.lin"
#define VkglTestCase_002507_2 "king.invalid_arrayed_input_variables"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002507, VkglTestCase_002507_1, VkglTestCase_002507_2);

#define VkglTestCase_002508_1 "KHR-GLES31.core.geometry_shader.li"
#define VkglTestCase_002508_2 "nking.vs_gs_variable_type_mismatch"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002508, VkglTestCase_002508_1, VkglTestCase_002508_2);

#define VkglTestCase_002509_1 "KHR-GLES31.core.geometry_shader.link"
#define VkglTestCase_002509_2 "ing.vs_gs_variable_qualifier_mismatch"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002509, VkglTestCase_002509_1, VkglTestCase_002509_2);

#define VkglTestCase_002510_1 "KHR-GLES31.core.geometry_shader.linkin"
#define VkglTestCase_002510_2 "g.vs_gs_arrayed_variable_size_mismatch"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002510, VkglTestCase_002510_1, VkglTestCase_002510_2);

#define VkglTestCase_002511_1 "KHR-GLES31.core.geometry_shader"
#define VkglTestCase_002511_2 ".linking.fragcoord_redeclaration"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002511, VkglTestCase_002511_1, VkglTestCase_002511_2);

#define VkglTestCase_002512_1 "KHR-GLES31.core.geometry_sha"
#define VkglTestCase_002512_2 "der.linking.location_aliasing"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002512, VkglTestCase_002512_1, VkglTestCase_002512_2);

#define VkglTestCase_002513_1 "KHR-GLES31.core.geometry_shader.li"
#define VkglTestCase_002513_2 "nking.more_ACs_in_GS_than_supported"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002513, VkglTestCase_002513_1, VkglTestCase_002513_2);

#define VkglTestCase_002514_1 "KHR-GLES31.core.geometry_shader.lin"
#define VkglTestCase_002514_2 "king.more_ACBs_in_GS_than_supported"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002514, VkglTestCase_002514_1, VkglTestCase_002514_2);

#define VkglTestCase_002515_1 "KHR-GLES31.core.geometry_shader.link"
#define VkglTestCase_002515_2 "ing.geometry_shader_compilation_fail"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002515, VkglTestCase_002515_1, VkglTestCase_002515_2);

#define VkglTestCase_002516_1 "KHR-GLES31.core.geometry_shader.linking."
#define VkglTestCase_002516_2 "more_input_vertices_in_GS_than_available"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002516, VkglTestCase_002516_1, VkglTestCase_002516_2);

#define VkglTestCase_002517_1 "KHR-GLES31.core.geometry_shader.linki"
#define VkglTestCase_002517_2 "ng.tf_capture_from_gs_and_vs_variables"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002517, VkglTestCase_002517_1, VkglTestCase_002517_2);
