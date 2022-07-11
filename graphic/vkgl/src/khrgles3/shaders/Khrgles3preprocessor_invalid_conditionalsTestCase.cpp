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
#include "../ActsKhrgles30002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001106_1 "KHR-GLES3.shaders.preprocessor.in"
#define VkglTestCase_001106_2 "valid_conditionals.empty_if_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001106, VkglTestCase_001106_1, VkglTestCase_001106_2);

#define VkglTestCase_001107_1 "KHR-GLES3.shaders.preprocessor.inv"
#define VkglTestCase_001107_2 "alid_conditionals.empty_if_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001107, VkglTestCase_001107_1, VkglTestCase_001107_2);

#define VkglTestCase_001108_1 "KHR-GLES3.shaders.preprocessor.inva"
#define VkglTestCase_001108_2 "lid_conditionals.empty_ifdef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001108, VkglTestCase_001108_1, VkglTestCase_001108_2);

#define VkglTestCase_001109_1 "KHR-GLES3.shaders.preprocessor.inval"
#define VkglTestCase_001109_2 "id_conditionals.empty_ifdef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001109, VkglTestCase_001109_1, VkglTestCase_001109_2);

#define VkglTestCase_001110_1 "KHR-GLES3.shaders.preprocessor.inva"
#define VkglTestCase_001110_2 "lid_conditionals.empty_ifndef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001110, VkglTestCase_001110_1, VkglTestCase_001110_2);

#define VkglTestCase_001111_1 "KHR-GLES3.shaders.preprocessor.inval"
#define VkglTestCase_001111_2 "id_conditionals.empty_ifndef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001111, VkglTestCase_001111_1, VkglTestCase_001111_2);

#define VkglTestCase_001112_1 "KHR-GLES3.shaders.preprocessor.inval"
#define VkglTestCase_001112_2 "id_conditionals.invalid_ifdef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001112, VkglTestCase_001112_1, VkglTestCase_001112_2);

#define VkglTestCase_001113_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001113_2 "d_conditionals.invalid_ifdef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001113, VkglTestCase_001113_1, VkglTestCase_001113_2);

#define VkglTestCase_001114_1 "KHR-GLES3.shaders.preprocessor.inval"
#define VkglTestCase_001114_2 "id_conditionals.invalid_ifndef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001114, VkglTestCase_001114_1, VkglTestCase_001114_2);

#define VkglTestCase_001115_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001115_2 "d_conditionals.invalid_ifndef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001115, VkglTestCase_001115_1, VkglTestCase_001115_2);

#define VkglTestCase_001116_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001116_2 "d_conditionals.empty_if_defined_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001116, VkglTestCase_001116_1, VkglTestCase_001116_2);

#define VkglTestCase_001117_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001117_2 "_conditionals.empty_if_defined_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001117, VkglTestCase_001117_1, VkglTestCase_001117_2);

#define VkglTestCase_001118_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001118_2 "_conditionals.unterminated_if_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001118, VkglTestCase_001118_1, VkglTestCase_001118_2);

#define VkglTestCase_001119_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001119_2 "conditionals.unterminated_if_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001119, VkglTestCase_001119_1, VkglTestCase_001119_2);

#define VkglTestCase_001120_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001120_2 "_conditionals.unterminated_if_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001120, VkglTestCase_001120_1, VkglTestCase_001120_2);

#define VkglTestCase_001121_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001121_2 "conditionals.unterminated_if_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001121, VkglTestCase_001121_1, VkglTestCase_001121_2);

#define VkglTestCase_001122_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001122_2 "_conditionals.unterminated_ifdef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001122, VkglTestCase_001122_1, VkglTestCase_001122_2);

#define VkglTestCase_001123_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001123_2 "conditionals.unterminated_ifdef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001123, VkglTestCase_001123_1, VkglTestCase_001123_2);

#define VkglTestCase_001124_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001124_2 "conditionals.unterminated_ifndef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001124, VkglTestCase_001124_1, VkglTestCase_001124_2);

#define VkglTestCase_001125_1 "KHR-GLES3.shaders.preprocessor.invalid_c"
#define VkglTestCase_001125_2 "onditionals.unterminated_ifndef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001125, VkglTestCase_001125_1, VkglTestCase_001125_2);

#define VkglTestCase_001126_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001126_2 "conditionals.unterminated_else_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001126, VkglTestCase_001126_1, VkglTestCase_001126_2);

#define VkglTestCase_001127_1 "KHR-GLES3.shaders.preprocessor.invalid_c"
#define VkglTestCase_001127_2 "onditionals.unterminated_else_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001127, VkglTestCase_001127_1, VkglTestCase_001127_2);

#define VkglTestCase_001128_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001128_2 "conditionals.unterminated_else_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001128, VkglTestCase_001128_1, VkglTestCase_001128_2);

#define VkglTestCase_001129_1 "KHR-GLES3.shaders.preprocessor.invalid_c"
#define VkglTestCase_001129_2 "onditionals.unterminated_else_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001129, VkglTestCase_001129_1, VkglTestCase_001129_2);

#define VkglTestCase_001130_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001130_2 "conditionals.unterminated_elif_1_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001130, VkglTestCase_001130_1, VkglTestCase_001130_2);

#define VkglTestCase_001131_1 "KHR-GLES3.shaders.preprocessor.invalid_c"
#define VkglTestCase_001131_2 "onditionals.unterminated_elif_1_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001131, VkglTestCase_001131_1, VkglTestCase_001131_2);

#define VkglTestCase_001132_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001132_2 "conditionals.unterminated_elif_2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001132, VkglTestCase_001132_1, VkglTestCase_001132_2);

#define VkglTestCase_001133_1 "KHR-GLES3.shaders.preprocessor.invalid_c"
#define VkglTestCase_001133_2 "onditionals.unterminated_elif_2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001133, VkglTestCase_001133_1, VkglTestCase_001133_2);

#define VkglTestCase_001134_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001134_2 "conditionals.unterminated_elif_3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001134, VkglTestCase_001134_1, VkglTestCase_001134_2);

#define VkglTestCase_001135_1 "KHR-GLES3.shaders.preprocessor.invalid_c"
#define VkglTestCase_001135_2 "onditionals.unterminated_elif_3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001135, VkglTestCase_001135_1, VkglTestCase_001135_2);

#define VkglTestCase_001136_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001136_2 "d_conditionals.elif_after_else_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001136, VkglTestCase_001136_1, VkglTestCase_001136_2);

#define VkglTestCase_001137_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001137_2 "_conditionals.elif_after_else_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001137, VkglTestCase_001137_1, VkglTestCase_001137_2);

#define VkglTestCase_001138_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001138_2 "d_conditionals.else_without_if_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001138, VkglTestCase_001138_1, VkglTestCase_001138_2);

#define VkglTestCase_001139_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001139_2 "_conditionals.else_without_if_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001139, VkglTestCase_001139_1, VkglTestCase_001139_2);

#define VkglTestCase_001140_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001140_2 "d_conditionals.elif_without_if_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001140, VkglTestCase_001140_1, VkglTestCase_001140_2);

#define VkglTestCase_001141_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001141_2 "_conditionals.elif_without_if_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001141, VkglTestCase_001141_1, VkglTestCase_001141_2);

#define VkglTestCase_001142_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001142_2 "d_conditionals.endif_without_if_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001142, VkglTestCase_001142_1, VkglTestCase_001142_2);

#define VkglTestCase_001143_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001143_2 "_conditionals.endif_without_if_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001143, VkglTestCase_001143_1, VkglTestCase_001143_2);

#define VkglTestCase_001144_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001144_2 "d_conditionals.else_after_else_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001144, VkglTestCase_001144_1, VkglTestCase_001144_2);

#define VkglTestCase_001145_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001145_2 "_conditionals.else_after_else_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001145, VkglTestCase_001145_1, VkglTestCase_001145_2);

#define VkglTestCase_001146_1 "KHR-GLES3.shaders.preprocessor.invalid_c"
#define VkglTestCase_001146_2 "onditionals.nested_elif_without_if_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001146, VkglTestCase_001146_1, VkglTestCase_001146_2);

#define VkglTestCase_001147_1 "KHR-GLES3.shaders.preprocessor.invalid_co"
#define VkglTestCase_001147_2 "nditionals.nested_elif_without_if_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001147, VkglTestCase_001147_1, VkglTestCase_001147_2);

#define VkglTestCase_001148_1 "KHR-GLES3.shaders.preprocessor.in"
#define VkglTestCase_001148_2 "valid_conditionals.if_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001148, VkglTestCase_001148_1, VkglTestCase_001148_2);

#define VkglTestCase_001149_1 "KHR-GLES3.shaders.preprocessor.inv"
#define VkglTestCase_001149_2 "alid_conditionals.if_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001149, VkglTestCase_001149_1, VkglTestCase_001149_2);

#define VkglTestCase_001150_1 "KHR-GLES3.shaders.preprocessor.invali"
#define VkglTestCase_001150_2 "d_conditionals.tokens_after_if_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001150, VkglTestCase_001150_1, VkglTestCase_001150_2);

#define VkglTestCase_001151_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001151_2 "_conditionals.tokens_after_if_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001151, VkglTestCase_001151_1, VkglTestCase_001151_2);

#define VkglTestCase_001152_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001152_2 "_conditionals.tokens_after_elif_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001152, VkglTestCase_001152_1, VkglTestCase_001152_2);

#define VkglTestCase_001153_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001153_2 "conditionals.tokens_after_elif_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001153, VkglTestCase_001153_1, VkglTestCase_001153_2);

#define VkglTestCase_001154_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001154_2 "_conditionals.tokens_after_else_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001154, VkglTestCase_001154_1, VkglTestCase_001154_2);

#define VkglTestCase_001155_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001155_2 "conditionals.tokens_after_else_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001155, VkglTestCase_001155_1, VkglTestCase_001155_2);

#define VkglTestCase_001156_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001156_2 "_conditionals.tokens_after_endif_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001156, VkglTestCase_001156_1, VkglTestCase_001156_2);

#define VkglTestCase_001157_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001157_2 "conditionals.tokens_after_endif_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001157, VkglTestCase_001157_1, VkglTestCase_001157_2);

#define VkglTestCase_001158_1 "KHR-GLES3.shaders.preprocessor.invalid"
#define VkglTestCase_001158_2 "_conditionals.tokens_after_ifdef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001158, VkglTestCase_001158_1, VkglTestCase_001158_2);

#define VkglTestCase_001159_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001159_2 "conditionals.tokens_after_ifdef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001159, VkglTestCase_001159_1, VkglTestCase_001159_2);

#define VkglTestCase_001160_1 "KHR-GLES3.shaders.preprocessor.invalid_"
#define VkglTestCase_001160_2 "conditionals.tokens_after_ifndef_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001160, VkglTestCase_001160_1, VkglTestCase_001160_2);

#define VkglTestCase_001161_1 "KHR-GLES3.shaders.preprocessor.invalid_c"
#define VkglTestCase_001161_2 "onditionals.tokens_after_ifndef_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001161, VkglTestCase_001161_1, VkglTestCase_001161_2);

#define VkglTestCase_001162_1 "KHR-GLES3.shaders.preprocessor.invalid_con"
#define VkglTestCase_001162_2 "ditionals.unterminated_nested_blocks_vertex"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001162, VkglTestCase_001162_1, VkglTestCase_001162_2);

#define VkglTestCase_001163_1 "KHR-GLES3.shaders.preprocessor.invalid_cond"
#define VkglTestCase_001163_2 "itionals.unterminated_nested_blocks_fragment"
SHRINK_HWTEST_F(ActsKhrgles30002TestSuite, TestCase_001163, VkglTestCase_001163_1, VkglTestCase_001163_2);
