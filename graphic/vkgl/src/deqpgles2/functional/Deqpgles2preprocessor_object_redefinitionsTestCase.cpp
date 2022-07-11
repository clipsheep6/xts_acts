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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000165_1 "dEQP-GLES2.functional.shaders.preprocessor.ob"
#define VkglTestCase_000165_2 "ject_redefinitions.invalid_object_ident_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000165, VkglTestCase_000165_1, VkglTestCase_000165_2);

#define VkglTestCase_000166_1 "dEQP-GLES2.functional.shaders.preprocessor.obj"
#define VkglTestCase_000166_2 "ect_redefinitions.invalid_object_ident_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000166, VkglTestCase_000166_1, VkglTestCase_000166_2);

#define VkglTestCase_000167_1 "dEQP-GLES2.functional.shaders.preprocessor.objec"
#define VkglTestCase_000167_2 "t_redefinitions.invalid_object_whitespace_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000167, VkglTestCase_000167_1, VkglTestCase_000167_2);

#define VkglTestCase_000168_1 "dEQP-GLES2.functional.shaders.preprocessor.object"
#define VkglTestCase_000168_2 "_redefinitions.invalid_object_whitespace_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000168, VkglTestCase_000168_1, VkglTestCase_000168_2);

#define VkglTestCase_000169_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000169_2 "bject_redefinitions.invalid_object_op_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000169, VkglTestCase_000169_1, VkglTestCase_000169_2);

#define VkglTestCase_000170_1 "dEQP-GLES2.functional.shaders.preprocessor.ob"
#define VkglTestCase_000170_2 "ject_redefinitions.invalid_object_op_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000170, VkglTestCase_000170_1, VkglTestCase_000170_2);

#define VkglTestCase_000171_1 "dEQP-GLES2.functional.shaders.preprocessor.objec"
#define VkglTestCase_000171_2 "t_redefinitions.invalid_object_floatval_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000171, VkglTestCase_000171_1, VkglTestCase_000171_2);

#define VkglTestCase_000172_1 "dEQP-GLES2.functional.shaders.preprocessor.object"
#define VkglTestCase_000172_2 "_redefinitions.invalid_object_floatval_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000172, VkglTestCase_000172_1, VkglTestCase_000172_2);

#define VkglTestCase_000173_1 "dEQP-GLES2.functional.shaders.preprocessor.objec"
#define VkglTestCase_000173_2 "t_redefinitions.invalid_object_floatval_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000173, VkglTestCase_000173_1, VkglTestCase_000173_2);

#define VkglTestCase_000174_1 "dEQP-GLES2.functional.shaders.preprocessor.object"
#define VkglTestCase_000174_2 "_redefinitions.invalid_object_floatval_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000174, VkglTestCase_000174_1, VkglTestCase_000174_2);

#define VkglTestCase_000175_1 "dEQP-GLES2.functional.shaders.preprocessor.obje"
#define VkglTestCase_000175_2 "ct_redefinitions.invalid_object_intval_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000175, VkglTestCase_000175_1, VkglTestCase_000175_2);

#define VkglTestCase_000176_1 "dEQP-GLES2.functional.shaders.preprocessor.objec"
#define VkglTestCase_000176_2 "t_redefinitions.invalid_object_intval_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000176, VkglTestCase_000176_1, VkglTestCase_000176_2);

#define VkglTestCase_000177_1 "dEQP-GLES2.functional.shaders.preprocessor.obje"
#define VkglTestCase_000177_2 "ct_redefinitions.invalid_object_intval_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000177, VkglTestCase_000177_1, VkglTestCase_000177_2);

#define VkglTestCase_000178_1 "dEQP-GLES2.functional.shaders.preprocessor.objec"
#define VkglTestCase_000178_2 "t_redefinitions.invalid_object_intval_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000178, VkglTestCase_000178_1, VkglTestCase_000178_2);

#define VkglTestCase_000179_1 "dEQP-GLES2.functional.shaders.preprocessor.o"
#define VkglTestCase_000179_2 "bject_redefinitions.redefine_object_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000179, VkglTestCase_000179_1, VkglTestCase_000179_2);

#define VkglTestCase_000180_1 "dEQP-GLES2.functional.shaders.preprocessor.ob"
#define VkglTestCase_000180_2 "ject_redefinitions.redefine_object_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000180, VkglTestCase_000180_1, VkglTestCase_000180_2);

#define VkglTestCase_000181_1 "dEQP-GLES2.functional.shaders.preprocessor.obj"
#define VkglTestCase_000181_2 "ect_redefinitions.redefine_object_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000181, VkglTestCase_000181_1, VkglTestCase_000181_2);

#define VkglTestCase_000182_1 "dEQP-GLES2.functional.shaders.preprocessor.obje"
#define VkglTestCase_000182_2 "ct_redefinitions.redefine_object_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000182, VkglTestCase_000182_1, VkglTestCase_000182_2);

#define VkglTestCase_000183_1 "dEQP-GLES2.functional.shaders.preprocessor.object"
#define VkglTestCase_000183_2 "_redefinitions.redefine_object_undef_ifdef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000183, VkglTestCase_000183_1, VkglTestCase_000183_2);

#define VkglTestCase_000184_1 "dEQP-GLES2.functional.shaders.preprocessor.object_"
#define VkglTestCase_000184_2 "redefinitions.redefine_object_undef_ifdef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000184, VkglTestCase_000184_1, VkglTestCase_000184_2);

#define VkglTestCase_000185_1 "dEQP-GLES2.functional.shaders.preprocessor.obj"
#define VkglTestCase_000185_2 "ect_redefinitions.redefine_object_ifndef_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000185, VkglTestCase_000185_1, VkglTestCase_000185_2);

#define VkglTestCase_000186_1 "dEQP-GLES2.functional.shaders.preprocessor.obje"
#define VkglTestCase_000186_2 "ct_redefinitions.redefine_object_ifndef_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000186, VkglTestCase_000186_1, VkglTestCase_000186_2);

#define VkglTestCase_000187_1 "dEQP-GLES2.functional.shaders.preprocessor.objec"
#define VkglTestCase_000187_2 "t_redefinitions.redefine_object_defined_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000187, VkglTestCase_000187_1, VkglTestCase_000187_2);

#define VkglTestCase_000188_1 "dEQP-GLES2.functional.shaders.preprocessor.object"
#define VkglTestCase_000188_2 "_redefinitions.redefine_object_defined_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000188, VkglTestCase_000188_1, VkglTestCase_000188_2);

#define VkglTestCase_000189_1 "dEQP-GLES2.functional.shaders.preprocessor.objec"
#define VkglTestCase_000189_2 "t_redefinitions.redefine_object_defined_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000189, VkglTestCase_000189_1, VkglTestCase_000189_2);

#define VkglTestCase_000190_1 "dEQP-GLES2.functional.shaders.preprocessor.object"
#define VkglTestCase_000190_2 "_redefinitions.redefine_object_defined_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000190, VkglTestCase_000190_1, VkglTestCase_000190_2);

#define VkglTestCase_000191_1 "dEQP-GLES2.functional.shaders.preprocessor.obje"
#define VkglTestCase_000191_2 "ct_redefinitions.redefine_object_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000191, VkglTestCase_000191_1, VkglTestCase_000191_2);

#define VkglTestCase_000192_1 "dEQP-GLES2.functional.shaders.preprocessor.objec"
#define VkglTestCase_000192_2 "t_redefinitions.redefine_object_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000192, VkglTestCase_000192_1, VkglTestCase_000192_2);

#define VkglTestCase_000193_1 "dEQP-GLES2.functional.shaders.preprocessor.object_re"
#define VkglTestCase_000193_2 "definitions.redefine_object_multiline_comment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000193, VkglTestCase_000193_1, VkglTestCase_000193_2);

#define VkglTestCase_000194_1 "dEQP-GLES2.functional.shaders.preprocessor.object_red"
#define VkglTestCase_000194_2 "efinitions.redefine_object_multiline_comment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000194, VkglTestCase_000194_1, VkglTestCase_000194_2);
