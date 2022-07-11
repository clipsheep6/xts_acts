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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006679_1 "dEQP-GLES3.functional.shaders.index"
#define VkglTestCase_006679_2 "ing.moredynamic.matrix_twice_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006679, VkglTestCase_006679_1, VkglTestCase_006679_2);

#define VkglTestCase_006680_1 "dEQP-GLES3.functional.shaders.indexi"
#define VkglTestCase_006680_2 "ng.moredynamic.matrix_twice_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006680, VkglTestCase_006680_1, VkglTestCase_006680_2);

#define VkglTestCase_006681_1 "dEQP-GLES3.functional.shaders.indexing.moredyn"
#define VkglTestCase_006681_2 "amic.with_value_from_indexing_expression_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006681, VkglTestCase_006681_1, VkglTestCase_006681_2);

#define VkglTestCase_006682_1 "dEQP-GLES3.functional.shaders.indexing.moredyna"
#define VkglTestCase_006682_2 "mic.with_value_from_indexing_expression_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006682, VkglTestCase_006682_1, VkglTestCase_006682_2);

#define VkglTestCase_006683_1 "dEQP-GLES3.functional.shaders.in"
#define VkglTestCase_006683_2 "dexing.moredynamic.lvalue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006683, VkglTestCase_006683_1, VkglTestCase_006683_2);

#define VkglTestCase_006684_1 "dEQP-GLES3.functional.shaders.ind"
#define VkglTestCase_006684_2 "exing.moredynamic.lvalue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006684, VkglTestCase_006684_1, VkglTestCase_006684_2);

#define VkglTestCase_006685_1 "dEQP-GLES3.functional.shaders.indexing.moredynamic"
#define VkglTestCase_006685_2 ".lvalue_with_value_from_indexing_expression_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006685, VkglTestCase_006685_1, VkglTestCase_006685_2);

#define VkglTestCase_006686_1 "dEQP-GLES3.functional.shaders.indexing.moredynamic."
#define VkglTestCase_006686_2 "lvalue_with_value_from_indexing_expression_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006686, VkglTestCase_006686_1, VkglTestCase_006686_2);

#define VkglTestCase_006687_1 "dEQP-GLES3.functional.shaders.indexing.more"
#define VkglTestCase_006687_2 "dynamic.builtin_fncall_out_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006687, VkglTestCase_006687_1, VkglTestCase_006687_2);

#define VkglTestCase_006688_1 "dEQP-GLES3.functional.shaders.indexing.mored"
#define VkglTestCase_006688_2 "ynamic.builtin_fncall_out_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006688, VkglTestCase_006688_1, VkglTestCase_006688_2);

#define VkglTestCase_006689_1 "dEQP-GLES3.functional.shaders.indexing.moredy"
#define VkglTestCase_006689_2 "namic.user_defined_fncall_out_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006689, VkglTestCase_006689_1, VkglTestCase_006689_2);

#define VkglTestCase_006690_1 "dEQP-GLES3.functional.shaders.indexing.moredyn"
#define VkglTestCase_006690_2 "amic.user_defined_fncall_out_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006690, VkglTestCase_006690_1, VkglTestCase_006690_2);

#define VkglTestCase_006691_1 "dEQP-GLES3.functional.shaders.indexing.moredyn"
#define VkglTestCase_006691_2 "amic.user_defined_fncall_inout_parameter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006691, VkglTestCase_006691_1, VkglTestCase_006691_2);

#define VkglTestCase_006692_1 "dEQP-GLES3.functional.shaders.indexing.moredyna"
#define VkglTestCase_006692_2 "mic.user_defined_fncall_inout_parameter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006692, VkglTestCase_006692_1, VkglTestCase_006692_2);

#define VkglTestCase_006693_1 "dEQP-GLES3.functional.shaders.indexin"
#define VkglTestCase_006693_2 "g.moredynamic.with_side_effects_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006693, VkglTestCase_006693_1, VkglTestCase_006693_2);

#define VkglTestCase_006694_1 "dEQP-GLES3.functional.shaders.indexing"
#define VkglTestCase_006694_2 ".moredynamic.with_side_effects_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006694, VkglTestCase_006694_1, VkglTestCase_006694_2);

#define VkglTestCase_006695_1 "dEQP-GLES3.functional.shaders.indexing.m"
#define VkglTestCase_006695_2 "oredynamic.inout_with_side_effects_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006695, VkglTestCase_006695_1, VkglTestCase_006695_2);

#define VkglTestCase_006696_1 "dEQP-GLES3.functional.shaders.indexing.mo"
#define VkglTestCase_006696_2 "redynamic.inout_with_side_effects_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006696, VkglTestCase_006696_1, VkglTestCase_006696_2);

#define VkglTestCase_006697_1 "dEQP-GLES3.functional.shaders.indexing.moredynamic.user_defin"
#define VkglTestCase_006697_2 "ed_fncall_inout_parameter_with_index_with_side_effects_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006697, VkglTestCase_006697_1, VkglTestCase_006697_2);

#define VkglTestCase_006698_1 "dEQP-GLES3.functional.shaders.indexing.moredynamic.user_define"
#define VkglTestCase_006698_2 "d_fncall_inout_parameter_with_index_with_side_effects_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006698, VkglTestCase_006698_1, VkglTestCase_006698_2);

#define VkglTestCase_006699_1 "dEQP-GLES3.functional.shaders.indexin"
#define VkglTestCase_006699_2 "g.moredynamic.lvalue_with_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006699, VkglTestCase_006699_1, VkglTestCase_006699_2);

#define VkglTestCase_006700_1 "dEQP-GLES3.functional.shaders.indexing"
#define VkglTestCase_006700_2 ".moredynamic.lvalue_with_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006700, VkglTestCase_006700_1, VkglTestCase_006700_2);

#define VkglTestCase_006701_1 "dEQP-GLES3.functional.shaders.in"
#define VkglTestCase_006701_2 "dexing.moredynamic.uniform_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006701, VkglTestCase_006701_1, VkglTestCase_006701_2);

#define VkglTestCase_006702_1 "dEQP-GLES3.functional.shaders.ind"
#define VkglTestCase_006702_2 "exing.moredynamic.uniform_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006702, VkglTestCase_006702_1, VkglTestCase_006702_2);

#define VkglTestCase_006703_1 "dEQP-GLES3.functional.shaders.indexing.m"
#define VkglTestCase_006703_2 "oredynamic.sequence_vector_lvalue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006703, VkglTestCase_006703_1, VkglTestCase_006703_2);

#define VkglTestCase_006704_1 "dEQP-GLES3.functional.shaders.indexing.mo"
#define VkglTestCase_006704_2 "redynamic.sequence_vector_lvalue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006704, VkglTestCase_006704_1, VkglTestCase_006704_2);

#define VkglTestCase_006705_1 "dEQP-GLES3.functional.shaders.indexing.m"
#define VkglTestCase_006705_2 "oredynamic.matrix_twice_in_lvalue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006705, VkglTestCase_006705_1, VkglTestCase_006705_2);

#define VkglTestCase_006706_1 "dEQP-GLES3.functional.shaders.indexing.mo"
#define VkglTestCase_006706_2 "redynamic.matrix_twice_in_lvalue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006706, VkglTestCase_006706_1, VkglTestCase_006706_2);
