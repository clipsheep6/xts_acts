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
#include "../Khrgles3BaseFunc.h"
#include "../ActsKhrgles30001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000914_1 "KHR-GLES3.shaders.preprocessor.object_r"
#define VkglTestCase_000914_2 "edefinitions.invalid_object_ident_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000914, VkglTestCase_000914_1, VkglTestCase_000914_2);

#define VkglTestCase_000915_1 "KHR-GLES3.shaders.preprocessor.object_re"
#define VkglTestCase_000915_2 "definitions.invalid_object_ident_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000915, VkglTestCase_000915_1, VkglTestCase_000915_2);

#define VkglTestCase_000916_1 "KHR-GLES3.shaders.preprocessor.object_rede"
#define VkglTestCase_000916_2 "finitions.invalid_object_whitespace_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000916, VkglTestCase_000916_1, VkglTestCase_000916_2);

#define VkglTestCase_000917_1 "KHR-GLES3.shaders.preprocessor.object_redef"
#define VkglTestCase_000917_2 "initions.invalid_object_whitespace_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000917, VkglTestCase_000917_1, VkglTestCase_000917_2);

#define VkglTestCase_000918_1 "KHR-GLES3.shaders.preprocessor.object_"
#define VkglTestCase_000918_2 "redefinitions.invalid_object_op_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000918, VkglTestCase_000918_1, VkglTestCase_000918_2);

#define VkglTestCase_000919_1 "KHR-GLES3.shaders.preprocessor.object_r"
#define VkglTestCase_000919_2 "edefinitions.invalid_object_op_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000919, VkglTestCase_000919_1, VkglTestCase_000919_2);

#define VkglTestCase_000920_1 "KHR-GLES3.shaders.preprocessor.object_rede"
#define VkglTestCase_000920_2 "finitions.invalid_object_floatval_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000920, VkglTestCase_000920_1, VkglTestCase_000920_2);

#define VkglTestCase_000921_1 "KHR-GLES3.shaders.preprocessor.object_redef"
#define VkglTestCase_000921_2 "initions.invalid_object_floatval_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000921, VkglTestCase_000921_1, VkglTestCase_000921_2);

#define VkglTestCase_000922_1 "KHR-GLES3.shaders.preprocessor.object_rede"
#define VkglTestCase_000922_2 "finitions.invalid_object_floatval_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000922, VkglTestCase_000922_1, VkglTestCase_000922_2);

#define VkglTestCase_000923_1 "KHR-GLES3.shaders.preprocessor.object_redef"
#define VkglTestCase_000923_2 "initions.invalid_object_floatval_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000923, VkglTestCase_000923_1, VkglTestCase_000923_2);

#define VkglTestCase_000924_1 "KHR-GLES3.shaders.preprocessor.object_red"
#define VkglTestCase_000924_2 "efinitions.invalid_object_intval_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000924, VkglTestCase_000924_1, VkglTestCase_000924_2);

#define VkglTestCase_000925_1 "KHR-GLES3.shaders.preprocessor.object_rede"
#define VkglTestCase_000925_2 "finitions.invalid_object_intval_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000925, VkglTestCase_000925_1, VkglTestCase_000925_2);

#define VkglTestCase_000926_1 "KHR-GLES3.shaders.preprocessor.object_red"
#define VkglTestCase_000926_2 "efinitions.invalid_object_intval_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000926, VkglTestCase_000926_1, VkglTestCase_000926_2);

#define VkglTestCase_000927_1 "KHR-GLES3.shaders.preprocessor.object_rede"
#define VkglTestCase_000927_2 "finitions.invalid_object_intval_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000927, VkglTestCase_000927_1, VkglTestCase_000927_2);

#define VkglTestCase_000928_1 "KHR-GLES3.shaders.preprocessor.object_"
#define VkglTestCase_000928_2 "redefinitions.redefine_object_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000928, VkglTestCase_000928_1, VkglTestCase_000928_2);

#define VkglTestCase_000929_1 "KHR-GLES3.shaders.preprocessor.object_r"
#define VkglTestCase_000929_2 "edefinitions.redefine_object_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000929, VkglTestCase_000929_1, VkglTestCase_000929_2);

#define VkglTestCase_000930_1 "KHR-GLES3.shaders.preprocessor.object_re"
#define VkglTestCase_000930_2 "definitions.redefine_object_ifdef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000930, VkglTestCase_000930_1, VkglTestCase_000930_2);

#define VkglTestCase_000931_1 "KHR-GLES3.shaders.preprocessor.object_red"
#define VkglTestCase_000931_2 "efinitions.redefine_object_ifdef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000931, VkglTestCase_000931_1, VkglTestCase_000931_2);

#define VkglTestCase_000932_1 "KHR-GLES3.shaders.preprocessor.object_redef"
#define VkglTestCase_000932_2 "initions.redefine_object_undef_ifdef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000932, VkglTestCase_000932_1, VkglTestCase_000932_2);

#define VkglTestCase_000933_1 "KHR-GLES3.shaders.preprocessor.object_redefi"
#define VkglTestCase_000933_2 "nitions.redefine_object_undef_ifdef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000933, VkglTestCase_000933_1, VkglTestCase_000933_2);

#define VkglTestCase_000934_1 "KHR-GLES3.shaders.preprocessor.object_re"
#define VkglTestCase_000934_2 "definitions.redefine_object_ifndef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000934, VkglTestCase_000934_1, VkglTestCase_000934_2);

#define VkglTestCase_000935_1 "KHR-GLES3.shaders.preprocessor.object_red"
#define VkglTestCase_000935_2 "efinitions.redefine_object_ifndef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000935, VkglTestCase_000935_1, VkglTestCase_000935_2);

#define VkglTestCase_000936_1 "KHR-GLES3.shaders.preprocessor.object_rede"
#define VkglTestCase_000936_2 "finitions.redefine_object_defined_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000936, VkglTestCase_000936_1, VkglTestCase_000936_2);

#define VkglTestCase_000937_1 "KHR-GLES3.shaders.preprocessor.object_redef"
#define VkglTestCase_000937_2 "initions.redefine_object_defined_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000937, VkglTestCase_000937_1, VkglTestCase_000937_2);

#define VkglTestCase_000938_1 "KHR-GLES3.shaders.preprocessor.object_rede"
#define VkglTestCase_000938_2 "finitions.redefine_object_defined_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000938, VkglTestCase_000938_1, VkglTestCase_000938_2);

#define VkglTestCase_000939_1 "KHR-GLES3.shaders.preprocessor.object_redef"
#define VkglTestCase_000939_2 "initions.redefine_object_defined_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000939, VkglTestCase_000939_1, VkglTestCase_000939_2);

#define VkglTestCase_000940_1 "KHR-GLES3.shaders.preprocessor.object_red"
#define VkglTestCase_000940_2 "efinitions.redefine_object_comment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000940, VkglTestCase_000940_1, VkglTestCase_000940_2);

#define VkglTestCase_000941_1 "KHR-GLES3.shaders.preprocessor.object_rede"
#define VkglTestCase_000941_2 "finitions.redefine_object_comment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000941, VkglTestCase_000941_1, VkglTestCase_000941_2);

#define VkglTestCase_000942_1 "KHR-GLES3.shaders.preprocessor.object_redefini"
#define VkglTestCase_000942_2 "tions.redefine_object_multiline_comment_vertex"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000942, VkglTestCase_000942_1, VkglTestCase_000942_2);

#define VkglTestCase_000943_1 "KHR-GLES3.shaders.preprocessor.object_redefinit"
#define VkglTestCase_000943_2 "ions.redefine_object_multiline_comment_fragment"
SHRINK_HWTEST_F(ActsKhrgles30001TestSuite, TestCase_000943, VkglTestCase_000943_1, VkglTestCase_000943_2);
