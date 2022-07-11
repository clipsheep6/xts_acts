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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007976_1 "dEQP-GLES31.functional.tessellation.shade"
#define VkglTestCase_007976_2 "r_input_output.patch_vertices_5_in_10_out"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007976, VkglTestCase_007976_1, VkglTestCase_007976_2);

#define VkglTestCase_007977_1 "dEQP-GLES31.functional.tessellation.shade"
#define VkglTestCase_007977_2 "r_input_output.patch_vertices_10_in_5_out"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007977, VkglTestCase_007977_1, VkglTestCase_007977_2);

#define VkglTestCase_007978_1 "dEQP-GLES31.functional.tessellation."
#define VkglTestCase_007978_2 "shader_input_output.primitive_id_tcs"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007978, VkglTestCase_007978_1, VkglTestCase_007978_2);

#define VkglTestCase_007979_1 "dEQP-GLES31.functional.tessellation."
#define VkglTestCase_007979_2 "shader_input_output.primitive_id_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007979, VkglTestCase_007979_1, VkglTestCase_007979_2);

#define VkglTestCase_007980_1 "dEQP-GLES31.functional.tessellation.sh"
#define VkglTestCase_007980_2 "ader_input_output.patch_vertices_in_tcs"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007980, VkglTestCase_007980_1, VkglTestCase_007980_2);

#define VkglTestCase_007981_1 "dEQP-GLES31.functional.tessellation.sh"
#define VkglTestCase_007981_2 "ader_input_output.patch_vertices_in_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007981, VkglTestCase_007981_1, VkglTestCase_007981_2);

#define VkglTestCase_007982_1 "dEQP-GLES31.functional.tessellation.sha"
#define VkglTestCase_007982_2 "der_input_output.tess_level_inner_0_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007982, VkglTestCase_007982_1, VkglTestCase_007982_2);

#define VkglTestCase_007983_1 "dEQP-GLES31.functional.tessellation.sha"
#define VkglTestCase_007983_2 "der_input_output.tess_level_inner_1_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007983, VkglTestCase_007983_1, VkglTestCase_007983_2);

#define VkglTestCase_007984_1 "dEQP-GLES31.functional.tessellation.sha"
#define VkglTestCase_007984_2 "der_input_output.tess_level_outer_0_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007984, VkglTestCase_007984_1, VkglTestCase_007984_2);

#define VkglTestCase_007985_1 "dEQP-GLES31.functional.tessellation.sha"
#define VkglTestCase_007985_2 "der_input_output.tess_level_outer_1_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007985, VkglTestCase_007985_1, VkglTestCase_007985_2);

#define VkglTestCase_007986_1 "dEQP-GLES31.functional.tessellation.sha"
#define VkglTestCase_007986_2 "der_input_output.tess_level_outer_2_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007986, VkglTestCase_007986_1, VkglTestCase_007986_2);

#define VkglTestCase_007987_1 "dEQP-GLES31.functional.tessellation.sha"
#define VkglTestCase_007987_2 "der_input_output.tess_level_outer_3_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007987, VkglTestCase_007987_1, VkglTestCase_007987_2);

#define VkglTestCase_007988_1 "dEQP-GLES31.functional.tessellation.sh"
#define VkglTestCase_007988_2 "ader_input_output.gl_position_vs_to_tcs"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007988, VkglTestCase_007988_1, VkglTestCase_007988_2);

#define VkglTestCase_007989_1 "dEQP-GLES31.functional.tessellation.sha"
#define VkglTestCase_007989_2 "der_input_output.gl_position_tcs_to_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007989, VkglTestCase_007989_1, VkglTestCase_007989_2);

#define VkglTestCase_007990_1 "dEQP-GLES31.functional.tessellation.shader"
#define VkglTestCase_007990_2 "_input_output.gl_position_vs_to_tcs_to_tes"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007990, VkglTestCase_007990_1, VkglTestCase_007990_2);

#define VkglTestCase_007991_1 "dEQP-GLES31.functional.tessella"
#define VkglTestCase_007991_2 "tion.shader_input_output.barrier"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007991, VkglTestCase_007991_1, VkglTestCase_007991_2);
