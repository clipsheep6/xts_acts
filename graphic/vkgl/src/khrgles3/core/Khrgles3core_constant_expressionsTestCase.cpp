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
#include "../ActsKhrgles30004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003139_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003139_2 "ions.basic_radians_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003139, VkglTestCase_003139_1, VkglTestCase_003139_2);

#define VkglTestCase_003140_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003140_2 "ons.basic_radians_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003140, VkglTestCase_003140_1, VkglTestCase_003140_2);

#define VkglTestCase_003141_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003141_2 "sions.basic_radians_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003141, VkglTestCase_003141_1, VkglTestCase_003141_2);

#define VkglTestCase_003142_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003142_2 "ions.basic_radians_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003142, VkglTestCase_003142_1, VkglTestCase_003142_2);

#define VkglTestCase_003143_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003143_2 "sions.basic_radians_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003143, VkglTestCase_003143_1, VkglTestCase_003143_2);

#define VkglTestCase_003144_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003144_2 "ions.basic_radians_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003144, VkglTestCase_003144_1, VkglTestCase_003144_2);

#define VkglTestCase_003145_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003145_2 "sions.basic_radians_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003145, VkglTestCase_003145_1, VkglTestCase_003145_2);

#define VkglTestCase_003146_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003146_2 "ions.basic_radians_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003146, VkglTestCase_003146_1, VkglTestCase_003146_2);

#define VkglTestCase_003147_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003147_2 "ions.basic_degrees_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003147, VkglTestCase_003147_1, VkglTestCase_003147_2);

#define VkglTestCase_003148_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003148_2 "ons.basic_degrees_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003148, VkglTestCase_003148_1, VkglTestCase_003148_2);

#define VkglTestCase_003149_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003149_2 "sions.basic_degrees_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003149, VkglTestCase_003149_1, VkglTestCase_003149_2);

#define VkglTestCase_003150_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003150_2 "ions.basic_degrees_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003150, VkglTestCase_003150_1, VkglTestCase_003150_2);

#define VkglTestCase_003151_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003151_2 "sions.basic_degrees_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003151, VkglTestCase_003151_1, VkglTestCase_003151_2);

#define VkglTestCase_003152_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003152_2 "ions.basic_degrees_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003152, VkglTestCase_003152_1, VkglTestCase_003152_2);

#define VkglTestCase_003153_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003153_2 "sions.basic_degrees_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003153, VkglTestCase_003153_1, VkglTestCase_003153_2);

#define VkglTestCase_003154_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003154_2 "ions.basic_degrees_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003154, VkglTestCase_003154_1, VkglTestCase_003154_2);

#define VkglTestCase_003155_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003155_2 "ssions.basic_sin_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003155, VkglTestCase_003155_1, VkglTestCase_003155_2);

#define VkglTestCase_003156_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003156_2 "sions.basic_sin_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003156, VkglTestCase_003156_1, VkglTestCase_003156_2);

#define VkglTestCase_003157_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003157_2 "essions.basic_sin_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003157, VkglTestCase_003157_1, VkglTestCase_003157_2);

#define VkglTestCase_003158_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003158_2 "ssions.basic_sin_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003158, VkglTestCase_003158_1, VkglTestCase_003158_2);

#define VkglTestCase_003159_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003159_2 "essions.basic_sin_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003159, VkglTestCase_003159_1, VkglTestCase_003159_2);

#define VkglTestCase_003160_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003160_2 "ssions.basic_sin_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003160, VkglTestCase_003160_1, VkglTestCase_003160_2);

#define VkglTestCase_003161_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003161_2 "essions.basic_sin_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003161, VkglTestCase_003161_1, VkglTestCase_003161_2);

#define VkglTestCase_003162_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003162_2 "ssions.basic_sin_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003162, VkglTestCase_003162_1, VkglTestCase_003162_2);

#define VkglTestCase_003163_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003163_2 "ssions.basic_cos_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003163, VkglTestCase_003163_1, VkglTestCase_003163_2);

#define VkglTestCase_003164_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003164_2 "sions.basic_cos_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003164, VkglTestCase_003164_1, VkglTestCase_003164_2);

#define VkglTestCase_003165_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003165_2 "essions.basic_cos_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003165, VkglTestCase_003165_1, VkglTestCase_003165_2);

#define VkglTestCase_003166_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003166_2 "ssions.basic_cos_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003166, VkglTestCase_003166_1, VkglTestCase_003166_2);

#define VkglTestCase_003167_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003167_2 "essions.basic_cos_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003167, VkglTestCase_003167_1, VkglTestCase_003167_2);

#define VkglTestCase_003168_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003168_2 "ssions.basic_cos_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003168, VkglTestCase_003168_1, VkglTestCase_003168_2);

#define VkglTestCase_003169_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003169_2 "essions.basic_cos_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003169, VkglTestCase_003169_1, VkglTestCase_003169_2);

#define VkglTestCase_003170_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003170_2 "ssions.basic_cos_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003170, VkglTestCase_003170_1, VkglTestCase_003170_2);

#define VkglTestCase_003171_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003171_2 "ssions.basic_asin_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003171, VkglTestCase_003171_1, VkglTestCase_003171_2);

#define VkglTestCase_003172_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003172_2 "sions.basic_asin_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003172, VkglTestCase_003172_1, VkglTestCase_003172_2);

#define VkglTestCase_003173_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003173_2 "ssions.basic_asin_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003173, VkglTestCase_003173_1, VkglTestCase_003173_2);

#define VkglTestCase_003174_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003174_2 "sions.basic_asin_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003174, VkglTestCase_003174_1, VkglTestCase_003174_2);

#define VkglTestCase_003175_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003175_2 "ssions.basic_asin_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003175, VkglTestCase_003175_1, VkglTestCase_003175_2);

#define VkglTestCase_003176_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003176_2 "sions.basic_asin_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003176, VkglTestCase_003176_1, VkglTestCase_003176_2);

#define VkglTestCase_003177_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003177_2 "ssions.basic_asin_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003177, VkglTestCase_003177_1, VkglTestCase_003177_2);

#define VkglTestCase_003178_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003178_2 "sions.basic_asin_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003178, VkglTestCase_003178_1, VkglTestCase_003178_2);

#define VkglTestCase_003179_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003179_2 "ssions.basic_acos_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003179, VkglTestCase_003179_1, VkglTestCase_003179_2);

#define VkglTestCase_003180_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003180_2 "sions.basic_acos_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003180, VkglTestCase_003180_1, VkglTestCase_003180_2);

#define VkglTestCase_003181_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003181_2 "ssions.basic_acos_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003181, VkglTestCase_003181_1, VkglTestCase_003181_2);

#define VkglTestCase_003182_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003182_2 "sions.basic_acos_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003182, VkglTestCase_003182_1, VkglTestCase_003182_2);

#define VkglTestCase_003183_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003183_2 "ssions.basic_acos_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003183, VkglTestCase_003183_1, VkglTestCase_003183_2);

#define VkglTestCase_003184_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003184_2 "sions.basic_acos_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003184, VkglTestCase_003184_1, VkglTestCase_003184_2);

#define VkglTestCase_003185_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003185_2 "ssions.basic_acos_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003185, VkglTestCase_003185_1, VkglTestCase_003185_2);

#define VkglTestCase_003186_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003186_2 "sions.basic_acos_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003186, VkglTestCase_003186_1, VkglTestCase_003186_2);

#define VkglTestCase_003187_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003187_2 "ssions.basic_pow_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003187, VkglTestCase_003187_1, VkglTestCase_003187_2);

#define VkglTestCase_003188_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003188_2 "sions.basic_pow_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003188, VkglTestCase_003188_1, VkglTestCase_003188_2);

#define VkglTestCase_003189_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003189_2 "essions.basic_pow_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003189, VkglTestCase_003189_1, VkglTestCase_003189_2);

#define VkglTestCase_003190_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003190_2 "ssions.basic_pow_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003190, VkglTestCase_003190_1, VkglTestCase_003190_2);

#define VkglTestCase_003191_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003191_2 "essions.basic_pow_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003191, VkglTestCase_003191_1, VkglTestCase_003191_2);

#define VkglTestCase_003192_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003192_2 "ssions.basic_pow_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003192, VkglTestCase_003192_1, VkglTestCase_003192_2);

#define VkglTestCase_003193_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003193_2 "essions.basic_pow_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003193, VkglTestCase_003193_1, VkglTestCase_003193_2);

#define VkglTestCase_003194_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003194_2 "ssions.basic_pow_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003194, VkglTestCase_003194_1, VkglTestCase_003194_2);

#define VkglTestCase_003195_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003195_2 "ssions.basic_exp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003195, VkglTestCase_003195_1, VkglTestCase_003195_2);

#define VkglTestCase_003196_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003196_2 "sions.basic_exp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003196, VkglTestCase_003196_1, VkglTestCase_003196_2);

#define VkglTestCase_003197_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003197_2 "essions.basic_exp_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003197, VkglTestCase_003197_1, VkglTestCase_003197_2);

#define VkglTestCase_003198_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003198_2 "ssions.basic_exp_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003198, VkglTestCase_003198_1, VkglTestCase_003198_2);

#define VkglTestCase_003199_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003199_2 "essions.basic_exp_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003199, VkglTestCase_003199_1, VkglTestCase_003199_2);

#define VkglTestCase_003200_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003200_2 "ssions.basic_exp_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003200, VkglTestCase_003200_1, VkglTestCase_003200_2);

#define VkglTestCase_003201_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003201_2 "essions.basic_exp_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003201, VkglTestCase_003201_1, VkglTestCase_003201_2);

#define VkglTestCase_003202_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003202_2 "ssions.basic_exp_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003202, VkglTestCase_003202_1, VkglTestCase_003202_2);

#define VkglTestCase_003203_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003203_2 "ssions.basic_log_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003203, VkglTestCase_003203_1, VkglTestCase_003203_2);

#define VkglTestCase_003204_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003204_2 "sions.basic_log_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003204, VkglTestCase_003204_1, VkglTestCase_003204_2);

#define VkglTestCase_003205_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003205_2 "essions.basic_log_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003205, VkglTestCase_003205_1, VkglTestCase_003205_2);

#define VkglTestCase_003206_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003206_2 "ssions.basic_log_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003206, VkglTestCase_003206_1, VkglTestCase_003206_2);

#define VkglTestCase_003207_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003207_2 "essions.basic_log_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003207, VkglTestCase_003207_1, VkglTestCase_003207_2);

#define VkglTestCase_003208_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003208_2 "ssions.basic_log_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003208, VkglTestCase_003208_1, VkglTestCase_003208_2);

#define VkglTestCase_003209_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003209_2 "essions.basic_log_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003209, VkglTestCase_003209_1, VkglTestCase_003209_2);

#define VkglTestCase_003210_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003210_2 "ssions.basic_log_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003210, VkglTestCase_003210_1, VkglTestCase_003210_2);

#define VkglTestCase_003211_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003211_2 "ssions.basic_exp2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003211, VkglTestCase_003211_1, VkglTestCase_003211_2);

#define VkglTestCase_003212_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003212_2 "sions.basic_exp2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003212, VkglTestCase_003212_1, VkglTestCase_003212_2);

#define VkglTestCase_003213_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003213_2 "ssions.basic_exp2_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003213, VkglTestCase_003213_1, VkglTestCase_003213_2);

#define VkglTestCase_003214_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003214_2 "sions.basic_exp2_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003214, VkglTestCase_003214_1, VkglTestCase_003214_2);

#define VkglTestCase_003215_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003215_2 "ssions.basic_exp2_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003215, VkglTestCase_003215_1, VkglTestCase_003215_2);

#define VkglTestCase_003216_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003216_2 "sions.basic_exp2_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003216, VkglTestCase_003216_1, VkglTestCase_003216_2);

#define VkglTestCase_003217_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003217_2 "ssions.basic_exp2_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003217, VkglTestCase_003217_1, VkglTestCase_003217_2);

#define VkglTestCase_003218_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003218_2 "sions.basic_exp2_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003218, VkglTestCase_003218_1, VkglTestCase_003218_2);

#define VkglTestCase_003219_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003219_2 "ssions.basic_log2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003219, VkglTestCase_003219_1, VkglTestCase_003219_2);

#define VkglTestCase_003220_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003220_2 "sions.basic_log2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003220, VkglTestCase_003220_1, VkglTestCase_003220_2);

#define VkglTestCase_003221_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003221_2 "ssions.basic_log2_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003221, VkglTestCase_003221_1, VkglTestCase_003221_2);

#define VkglTestCase_003222_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003222_2 "sions.basic_log2_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003222, VkglTestCase_003222_1, VkglTestCase_003222_2);

#define VkglTestCase_003223_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003223_2 "ssions.basic_log2_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003223, VkglTestCase_003223_1, VkglTestCase_003223_2);

#define VkglTestCase_003224_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003224_2 "sions.basic_log2_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003224, VkglTestCase_003224_1, VkglTestCase_003224_2);

#define VkglTestCase_003225_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003225_2 "ssions.basic_log2_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003225, VkglTestCase_003225_1, VkglTestCase_003225_2);

#define VkglTestCase_003226_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003226_2 "sions.basic_log2_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003226, VkglTestCase_003226_1, VkglTestCase_003226_2);

#define VkglTestCase_003227_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003227_2 "ssions.basic_sqrt_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003227, VkglTestCase_003227_1, VkglTestCase_003227_2);

#define VkglTestCase_003228_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003228_2 "sions.basic_sqrt_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003228, VkglTestCase_003228_1, VkglTestCase_003228_2);

#define VkglTestCase_003229_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003229_2 "ssions.basic_sqrt_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003229, VkglTestCase_003229_1, VkglTestCase_003229_2);

#define VkglTestCase_003230_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003230_2 "sions.basic_sqrt_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003230, VkglTestCase_003230_1, VkglTestCase_003230_2);

#define VkglTestCase_003231_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003231_2 "ssions.basic_sqrt_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003231, VkglTestCase_003231_1, VkglTestCase_003231_2);

#define VkglTestCase_003232_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003232_2 "sions.basic_sqrt_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003232, VkglTestCase_003232_1, VkglTestCase_003232_2);

#define VkglTestCase_003233_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003233_2 "ssions.basic_sqrt_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003233, VkglTestCase_003233_1, VkglTestCase_003233_2);

#define VkglTestCase_003234_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003234_2 "sions.basic_sqrt_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003234, VkglTestCase_003234_1, VkglTestCase_003234_2);

#define VkglTestCase_003235_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003235_2 "ns.basic_inversesqrt_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003235, VkglTestCase_003235_1, VkglTestCase_003235_2);

#define VkglTestCase_003236_1 "KHR-GLES3.core.constant_expression"
#define VkglTestCase_003236_2 "s.basic_inversesqrt_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003236, VkglTestCase_003236_1, VkglTestCase_003236_2);

#define VkglTestCase_003237_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003237_2 "ons.basic_inversesqrt_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003237, VkglTestCase_003237_1, VkglTestCase_003237_2);

#define VkglTestCase_003238_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003238_2 "ns.basic_inversesqrt_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003238, VkglTestCase_003238_1, VkglTestCase_003238_2);

#define VkglTestCase_003239_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003239_2 "ons.basic_inversesqrt_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003239, VkglTestCase_003239_1, VkglTestCase_003239_2);

#define VkglTestCase_003240_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003240_2 "ns.basic_inversesqrt_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003240, VkglTestCase_003240_1, VkglTestCase_003240_2);

#define VkglTestCase_003241_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003241_2 "ons.basic_inversesqrt_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003241, VkglTestCase_003241_1, VkglTestCase_003241_2);

#define VkglTestCase_003242_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003242_2 "ns.basic_inversesqrt_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003242, VkglTestCase_003242_1, VkglTestCase_003242_2);

#define VkglTestCase_003243_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003243_2 "essions.basic_abs_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003243, VkglTestCase_003243_1, VkglTestCase_003243_2);

#define VkglTestCase_003244_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003244_2 "ssions.basic_abs_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003244, VkglTestCase_003244_1, VkglTestCase_003244_2);

#define VkglTestCase_003245_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003245_2 "ssions.basic_abs_ivec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003245, VkglTestCase_003245_1, VkglTestCase_003245_2);

#define VkglTestCase_003246_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003246_2 "sions.basic_abs_ivec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003246, VkglTestCase_003246_1, VkglTestCase_003246_2);

#define VkglTestCase_003247_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003247_2 "ssions.basic_abs_ivec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003247, VkglTestCase_003247_1, VkglTestCase_003247_2);

#define VkglTestCase_003248_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003248_2 "sions.basic_abs_ivec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003248, VkglTestCase_003248_1, VkglTestCase_003248_2);

#define VkglTestCase_003249_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003249_2 "ssions.basic_abs_ivec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003249, VkglTestCase_003249_1, VkglTestCase_003249_2);

#define VkglTestCase_003250_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003250_2 "sions.basic_abs_ivec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003250, VkglTestCase_003250_1, VkglTestCase_003250_2);

#define VkglTestCase_003251_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003251_2 "ssions.basic_sign_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003251, VkglTestCase_003251_1, VkglTestCase_003251_2);

#define VkglTestCase_003252_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003252_2 "sions.basic_sign_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003252, VkglTestCase_003252_1, VkglTestCase_003252_2);

#define VkglTestCase_003253_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003253_2 "ssions.basic_sign_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003253, VkglTestCase_003253_1, VkglTestCase_003253_2);

#define VkglTestCase_003254_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003254_2 "sions.basic_sign_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003254, VkglTestCase_003254_1, VkglTestCase_003254_2);

#define VkglTestCase_003255_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003255_2 "ssions.basic_sign_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003255, VkglTestCase_003255_1, VkglTestCase_003255_2);

#define VkglTestCase_003256_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003256_2 "sions.basic_sign_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003256, VkglTestCase_003256_1, VkglTestCase_003256_2);

#define VkglTestCase_003257_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003257_2 "ssions.basic_sign_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003257, VkglTestCase_003257_1, VkglTestCase_003257_2);

#define VkglTestCase_003258_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003258_2 "sions.basic_sign_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003258, VkglTestCase_003258_1, VkglTestCase_003258_2);

#define VkglTestCase_003259_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003259_2 "sions.basic_floor_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003259, VkglTestCase_003259_1, VkglTestCase_003259_2);

#define VkglTestCase_003260_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003260_2 "ions.basic_floor_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003260, VkglTestCase_003260_1, VkglTestCase_003260_2);

#define VkglTestCase_003261_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003261_2 "ssions.basic_floor_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003261, VkglTestCase_003261_1, VkglTestCase_003261_2);

#define VkglTestCase_003262_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003262_2 "sions.basic_floor_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003262, VkglTestCase_003262_1, VkglTestCase_003262_2);

#define VkglTestCase_003263_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003263_2 "ssions.basic_floor_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003263, VkglTestCase_003263_1, VkglTestCase_003263_2);

#define VkglTestCase_003264_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003264_2 "sions.basic_floor_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003264, VkglTestCase_003264_1, VkglTestCase_003264_2);

#define VkglTestCase_003265_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003265_2 "ssions.basic_floor_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003265, VkglTestCase_003265_1, VkglTestCase_003265_2);

#define VkglTestCase_003266_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003266_2 "sions.basic_floor_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003266, VkglTestCase_003266_1, VkglTestCase_003266_2);

#define VkglTestCase_003267_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003267_2 "sions.basic_trunc_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003267, VkglTestCase_003267_1, VkglTestCase_003267_2);

#define VkglTestCase_003268_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003268_2 "ions.basic_trunc_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003268, VkglTestCase_003268_1, VkglTestCase_003268_2);

#define VkglTestCase_003269_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003269_2 "ssions.basic_trunc_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003269, VkglTestCase_003269_1, VkglTestCase_003269_2);

#define VkglTestCase_003270_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003270_2 "sions.basic_trunc_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003270, VkglTestCase_003270_1, VkglTestCase_003270_2);

#define VkglTestCase_003271_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003271_2 "ssions.basic_trunc_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003271, VkglTestCase_003271_1, VkglTestCase_003271_2);

#define VkglTestCase_003272_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003272_2 "sions.basic_trunc_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003272, VkglTestCase_003272_1, VkglTestCase_003272_2);

#define VkglTestCase_003273_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003273_2 "ssions.basic_trunc_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003273, VkglTestCase_003273_1, VkglTestCase_003273_2);

#define VkglTestCase_003274_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003274_2 "sions.basic_trunc_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003274, VkglTestCase_003274_1, VkglTestCase_003274_2);

#define VkglTestCase_003275_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003275_2 "sions.basic_round_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003275, VkglTestCase_003275_1, VkglTestCase_003275_2);

#define VkglTestCase_003276_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003276_2 "ions.basic_round_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003276, VkglTestCase_003276_1, VkglTestCase_003276_2);

#define VkglTestCase_003277_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003277_2 "ssions.basic_round_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003277, VkglTestCase_003277_1, VkglTestCase_003277_2);

#define VkglTestCase_003278_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003278_2 "sions.basic_round_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003278, VkglTestCase_003278_1, VkglTestCase_003278_2);

#define VkglTestCase_003279_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003279_2 "ssions.basic_round_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003279, VkglTestCase_003279_1, VkglTestCase_003279_2);

#define VkglTestCase_003280_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003280_2 "sions.basic_round_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003280, VkglTestCase_003280_1, VkglTestCase_003280_2);

#define VkglTestCase_003281_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003281_2 "ssions.basic_round_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003281, VkglTestCase_003281_1, VkglTestCase_003281_2);

#define VkglTestCase_003282_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003282_2 "sions.basic_round_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003282, VkglTestCase_003282_1, VkglTestCase_003282_2);

#define VkglTestCase_003283_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003283_2 "ssions.basic_ceil_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003283, VkglTestCase_003283_1, VkglTestCase_003283_2);

#define VkglTestCase_003284_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003284_2 "sions.basic_ceil_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003284, VkglTestCase_003284_1, VkglTestCase_003284_2);

#define VkglTestCase_003285_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003285_2 "ssions.basic_ceil_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003285, VkglTestCase_003285_1, VkglTestCase_003285_2);

#define VkglTestCase_003286_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003286_2 "sions.basic_ceil_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003286, VkglTestCase_003286_1, VkglTestCase_003286_2);

#define VkglTestCase_003287_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003287_2 "ssions.basic_ceil_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003287, VkglTestCase_003287_1, VkglTestCase_003287_2);

#define VkglTestCase_003288_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003288_2 "sions.basic_ceil_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003288, VkglTestCase_003288_1, VkglTestCase_003288_2);

#define VkglTestCase_003289_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003289_2 "ssions.basic_ceil_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003289, VkglTestCase_003289_1, VkglTestCase_003289_2);

#define VkglTestCase_003290_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003290_2 "sions.basic_ceil_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003290, VkglTestCase_003290_1, VkglTestCase_003290_2);

#define VkglTestCase_003291_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003291_2 "ssions.basic_mod_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003291, VkglTestCase_003291_1, VkglTestCase_003291_2);

#define VkglTestCase_003292_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003292_2 "sions.basic_mod_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003292, VkglTestCase_003292_1, VkglTestCase_003292_2);

#define VkglTestCase_003293_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003293_2 "essions.basic_mod_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003293, VkglTestCase_003293_1, VkglTestCase_003293_2);

#define VkglTestCase_003294_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003294_2 "ssions.basic_mod_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003294, VkglTestCase_003294_1, VkglTestCase_003294_2);

#define VkglTestCase_003295_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003295_2 "ions.basic_mod_vec2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003295, VkglTestCase_003295_1, VkglTestCase_003295_2);

#define VkglTestCase_003296_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003296_2 "ons.basic_mod_vec2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003296, VkglTestCase_003296_1, VkglTestCase_003296_2);

#define VkglTestCase_003297_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003297_2 "essions.basic_mod_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003297, VkglTestCase_003297_1, VkglTestCase_003297_2);

#define VkglTestCase_003298_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003298_2 "ssions.basic_mod_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003298, VkglTestCase_003298_1, VkglTestCase_003298_2);

#define VkglTestCase_003299_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003299_2 "ions.basic_mod_vec3_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003299, VkglTestCase_003299_1, VkglTestCase_003299_2);

#define VkglTestCase_003300_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003300_2 "ons.basic_mod_vec3_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003300, VkglTestCase_003300_1, VkglTestCase_003300_2);

#define VkglTestCase_003301_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003301_2 "essions.basic_mod_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003301, VkglTestCase_003301_1, VkglTestCase_003301_2);

#define VkglTestCase_003302_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003302_2 "ssions.basic_mod_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003302, VkglTestCase_003302_1, VkglTestCase_003302_2);

#define VkglTestCase_003303_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003303_2 "ions.basic_mod_vec4_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003303, VkglTestCase_003303_1, VkglTestCase_003303_2);

#define VkglTestCase_003304_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003304_2 "ons.basic_mod_vec4_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003304, VkglTestCase_003304_1, VkglTestCase_003304_2);

#define VkglTestCase_003305_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003305_2 "ssions.basic_min_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003305, VkglTestCase_003305_1, VkglTestCase_003305_2);

#define VkglTestCase_003306_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003306_2 "sions.basic_min_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003306, VkglTestCase_003306_1, VkglTestCase_003306_2);

#define VkglTestCase_003307_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003307_2 "essions.basic_min_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003307, VkglTestCase_003307_1, VkglTestCase_003307_2);

#define VkglTestCase_003308_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003308_2 "ssions.basic_min_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003308, VkglTestCase_003308_1, VkglTestCase_003308_2);

#define VkglTestCase_003309_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003309_2 "ions.basic_min_vec2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003309, VkglTestCase_003309_1, VkglTestCase_003309_2);

#define VkglTestCase_003310_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003310_2 "ons.basic_min_vec2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003310, VkglTestCase_003310_1, VkglTestCase_003310_2);

#define VkglTestCase_003311_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003311_2 "essions.basic_min_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003311, VkglTestCase_003311_1, VkglTestCase_003311_2);

#define VkglTestCase_003312_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003312_2 "ssions.basic_min_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003312, VkglTestCase_003312_1, VkglTestCase_003312_2);

#define VkglTestCase_003313_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003313_2 "ions.basic_min_vec3_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003313, VkglTestCase_003313_1, VkglTestCase_003313_2);

#define VkglTestCase_003314_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003314_2 "ons.basic_min_vec3_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003314, VkglTestCase_003314_1, VkglTestCase_003314_2);

#define VkglTestCase_003315_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003315_2 "essions.basic_min_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003315, VkglTestCase_003315_1, VkglTestCase_003315_2);

#define VkglTestCase_003316_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003316_2 "ssions.basic_min_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003316, VkglTestCase_003316_1, VkglTestCase_003316_2);

#define VkglTestCase_003317_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003317_2 "ions.basic_min_vec4_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003317, VkglTestCase_003317_1, VkglTestCase_003317_2);

#define VkglTestCase_003318_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003318_2 "ons.basic_min_vec4_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003318, VkglTestCase_003318_1, VkglTestCase_003318_2);

#define VkglTestCase_003319_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003319_2 "ssions.basic_max_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003319, VkglTestCase_003319_1, VkglTestCase_003319_2);

#define VkglTestCase_003320_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003320_2 "sions.basic_max_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003320, VkglTestCase_003320_1, VkglTestCase_003320_2);

#define VkglTestCase_003321_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003321_2 "essions.basic_max_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003321, VkglTestCase_003321_1, VkglTestCase_003321_2);

#define VkglTestCase_003322_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003322_2 "ssions.basic_max_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003322, VkglTestCase_003322_1, VkglTestCase_003322_2);

#define VkglTestCase_003323_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003323_2 "ions.basic_max_vec2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003323, VkglTestCase_003323_1, VkglTestCase_003323_2);

#define VkglTestCase_003324_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003324_2 "ons.basic_max_vec2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003324, VkglTestCase_003324_1, VkglTestCase_003324_2);

#define VkglTestCase_003325_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003325_2 "essions.basic_max_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003325, VkglTestCase_003325_1, VkglTestCase_003325_2);

#define VkglTestCase_003326_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003326_2 "ssions.basic_max_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003326, VkglTestCase_003326_1, VkglTestCase_003326_2);

#define VkglTestCase_003327_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003327_2 "ions.basic_max_vec3_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003327, VkglTestCase_003327_1, VkglTestCase_003327_2);

#define VkglTestCase_003328_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003328_2 "ons.basic_max_vec3_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003328, VkglTestCase_003328_1, VkglTestCase_003328_2);

#define VkglTestCase_003329_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003329_2 "essions.basic_max_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003329, VkglTestCase_003329_1, VkglTestCase_003329_2);

#define VkglTestCase_003330_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003330_2 "ssions.basic_max_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003330, VkglTestCase_003330_1, VkglTestCase_003330_2);

#define VkglTestCase_003331_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003331_2 "ions.basic_max_vec4_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003331, VkglTestCase_003331_1, VkglTestCase_003331_2);

#define VkglTestCase_003332_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003332_2 "ons.basic_max_vec4_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003332, VkglTestCase_003332_1, VkglTestCase_003332_2);

#define VkglTestCase_003333_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003333_2 "sions.basic_clamp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003333, VkglTestCase_003333_1, VkglTestCase_003333_2);

#define VkglTestCase_003334_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003334_2 "ions.basic_clamp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003334, VkglTestCase_003334_1, VkglTestCase_003334_2);

#define VkglTestCase_003335_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003335_2 "ssions.basic_clamp_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003335, VkglTestCase_003335_1, VkglTestCase_003335_2);

#define VkglTestCase_003336_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003336_2 "sions.basic_clamp_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003336, VkglTestCase_003336_1, VkglTestCase_003336_2);

#define VkglTestCase_003337_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003337_2 "ons.basic_clamp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003337, VkglTestCase_003337_1, VkglTestCase_003337_2);

#define VkglTestCase_003338_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003338_2 "ns.basic_clamp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003338, VkglTestCase_003338_1, VkglTestCase_003338_2);

#define VkglTestCase_003339_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003339_2 "ssions.basic_clamp_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003339, VkglTestCase_003339_1, VkglTestCase_003339_2);

#define VkglTestCase_003340_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003340_2 "sions.basic_clamp_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003340, VkglTestCase_003340_1, VkglTestCase_003340_2);

#define VkglTestCase_003341_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003341_2 "ons.basic_clamp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003341, VkglTestCase_003341_1, VkglTestCase_003341_2);

#define VkglTestCase_003342_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003342_2 "ns.basic_clamp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003342, VkglTestCase_003342_1, VkglTestCase_003342_2);

#define VkglTestCase_003343_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003343_2 "ssions.basic_clamp_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003343, VkglTestCase_003343_1, VkglTestCase_003343_2);

#define VkglTestCase_003344_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003344_2 "sions.basic_clamp_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003344, VkglTestCase_003344_1, VkglTestCase_003344_2);

#define VkglTestCase_003345_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003345_2 "ons.basic_clamp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003345, VkglTestCase_003345_1, VkglTestCase_003345_2);

#define VkglTestCase_003346_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003346_2 "ns.basic_clamp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003346, VkglTestCase_003346_1, VkglTestCase_003346_2);

#define VkglTestCase_003347_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003347_2 "sions.basic_length_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003347, VkglTestCase_003347_1, VkglTestCase_003347_2);

#define VkglTestCase_003348_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003348_2 "ions.basic_length_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003348, VkglTestCase_003348_1, VkglTestCase_003348_2);

#define VkglTestCase_003349_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003349_2 "sions.basic_length_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003349, VkglTestCase_003349_1, VkglTestCase_003349_2);

#define VkglTestCase_003350_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003350_2 "ions.basic_length_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003350, VkglTestCase_003350_1, VkglTestCase_003350_2);

#define VkglTestCase_003351_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003351_2 "sions.basic_length_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003351, VkglTestCase_003351_1, VkglTestCase_003351_2);

#define VkglTestCase_003352_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003352_2 "ions.basic_length_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003352, VkglTestCase_003352_1, VkglTestCase_003352_2);

#define VkglTestCase_003353_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003353_2 "sions.basic_length_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003353, VkglTestCase_003353_1, VkglTestCase_003353_2);

#define VkglTestCase_003354_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003354_2 "ions.basic_length_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003354, VkglTestCase_003354_1, VkglTestCase_003354_2);

#define VkglTestCase_003355_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003355_2 "ssions.basic_dot_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003355, VkglTestCase_003355_1, VkglTestCase_003355_2);

#define VkglTestCase_003356_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003356_2 "sions.basic_dot_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003356, VkglTestCase_003356_1, VkglTestCase_003356_2);

#define VkglTestCase_003357_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003357_2 "essions.basic_dot_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003357, VkglTestCase_003357_1, VkglTestCase_003357_2);

#define VkglTestCase_003358_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003358_2 "ssions.basic_dot_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003358, VkglTestCase_003358_1, VkglTestCase_003358_2);

#define VkglTestCase_003359_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003359_2 "essions.basic_dot_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003359, VkglTestCase_003359_1, VkglTestCase_003359_2);

#define VkglTestCase_003360_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003360_2 "ssions.basic_dot_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003360, VkglTestCase_003360_1, VkglTestCase_003360_2);

#define VkglTestCase_003361_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003361_2 "essions.basic_dot_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003361, VkglTestCase_003361_1, VkglTestCase_003361_2);

#define VkglTestCase_003362_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003362_2 "ssions.basic_dot_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003362, VkglTestCase_003362_1, VkglTestCase_003362_2);

#define VkglTestCase_003363_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003363_2 "ons.basic_normalize_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003363, VkglTestCase_003363_1, VkglTestCase_003363_2);

#define VkglTestCase_003364_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003364_2 "ns.basic_normalize_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003364, VkglTestCase_003364_1, VkglTestCase_003364_2);

#define VkglTestCase_003365_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003365_2 "ions.basic_normalize_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003365, VkglTestCase_003365_1, VkglTestCase_003365_2);

#define VkglTestCase_003366_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003366_2 "ons.basic_normalize_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003366, VkglTestCase_003366_1, VkglTestCase_003366_2);

#define VkglTestCase_003367_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003367_2 "ions.basic_normalize_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003367, VkglTestCase_003367_1, VkglTestCase_003367_2);

#define VkglTestCase_003368_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003368_2 "ons.basic_normalize_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003368, VkglTestCase_003368_1, VkglTestCase_003368_2);

#define VkglTestCase_003369_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003369_2 "ions.basic_normalize_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003369, VkglTestCase_003369_1, VkglTestCase_003369_2);

#define VkglTestCase_003370_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003370_2 "ons.basic_normalize_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003370, VkglTestCase_003370_1, VkglTestCase_003370_2);

#define VkglTestCase_003371_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003371_2 "ions.array_radians_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003371, VkglTestCase_003371_1, VkglTestCase_003371_2);

#define VkglTestCase_003372_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003372_2 "ons.array_radians_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003372, VkglTestCase_003372_1, VkglTestCase_003372_2);

#define VkglTestCase_003373_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003373_2 "sions.array_radians_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003373, VkglTestCase_003373_1, VkglTestCase_003373_2);

#define VkglTestCase_003374_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003374_2 "ions.array_radians_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003374, VkglTestCase_003374_1, VkglTestCase_003374_2);

#define VkglTestCase_003375_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003375_2 "sions.array_radians_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003375, VkglTestCase_003375_1, VkglTestCase_003375_2);

#define VkglTestCase_003376_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003376_2 "ions.array_radians_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003376, VkglTestCase_003376_1, VkglTestCase_003376_2);

#define VkglTestCase_003377_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003377_2 "sions.array_radians_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003377, VkglTestCase_003377_1, VkglTestCase_003377_2);

#define VkglTestCase_003378_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003378_2 "ions.array_radians_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003378, VkglTestCase_003378_1, VkglTestCase_003378_2);

#define VkglTestCase_003379_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003379_2 "ions.array_degrees_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003379, VkglTestCase_003379_1, VkglTestCase_003379_2);

#define VkglTestCase_003380_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003380_2 "ons.array_degrees_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003380, VkglTestCase_003380_1, VkglTestCase_003380_2);

#define VkglTestCase_003381_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003381_2 "sions.array_degrees_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003381, VkglTestCase_003381_1, VkglTestCase_003381_2);

#define VkglTestCase_003382_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003382_2 "ions.array_degrees_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003382, VkglTestCase_003382_1, VkglTestCase_003382_2);

#define VkglTestCase_003383_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003383_2 "sions.array_degrees_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003383, VkglTestCase_003383_1, VkglTestCase_003383_2);

#define VkglTestCase_003384_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003384_2 "ions.array_degrees_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003384, VkglTestCase_003384_1, VkglTestCase_003384_2);

#define VkglTestCase_003385_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003385_2 "sions.array_degrees_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003385, VkglTestCase_003385_1, VkglTestCase_003385_2);

#define VkglTestCase_003386_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003386_2 "ions.array_degrees_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003386, VkglTestCase_003386_1, VkglTestCase_003386_2);

#define VkglTestCase_003387_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003387_2 "ssions.array_sin_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003387, VkglTestCase_003387_1, VkglTestCase_003387_2);

#define VkglTestCase_003388_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003388_2 "sions.array_sin_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003388, VkglTestCase_003388_1, VkglTestCase_003388_2);

#define VkglTestCase_003389_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003389_2 "essions.array_sin_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003389, VkglTestCase_003389_1, VkglTestCase_003389_2);

#define VkglTestCase_003390_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003390_2 "ssions.array_sin_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003390, VkglTestCase_003390_1, VkglTestCase_003390_2);

#define VkglTestCase_003391_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003391_2 "essions.array_sin_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003391, VkglTestCase_003391_1, VkglTestCase_003391_2);

#define VkglTestCase_003392_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003392_2 "ssions.array_sin_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003392, VkglTestCase_003392_1, VkglTestCase_003392_2);

#define VkglTestCase_003393_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003393_2 "essions.array_sin_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003393, VkglTestCase_003393_1, VkglTestCase_003393_2);

#define VkglTestCase_003394_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003394_2 "ssions.array_sin_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003394, VkglTestCase_003394_1, VkglTestCase_003394_2);

#define VkglTestCase_003395_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003395_2 "ssions.array_cos_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003395, VkglTestCase_003395_1, VkglTestCase_003395_2);

#define VkglTestCase_003396_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003396_2 "sions.array_cos_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003396, VkglTestCase_003396_1, VkglTestCase_003396_2);

#define VkglTestCase_003397_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003397_2 "essions.array_cos_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003397, VkglTestCase_003397_1, VkglTestCase_003397_2);

#define VkglTestCase_003398_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003398_2 "ssions.array_cos_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003398, VkglTestCase_003398_1, VkglTestCase_003398_2);

#define VkglTestCase_003399_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003399_2 "essions.array_cos_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003399, VkglTestCase_003399_1, VkglTestCase_003399_2);

#define VkglTestCase_003400_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003400_2 "ssions.array_cos_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003400, VkglTestCase_003400_1, VkglTestCase_003400_2);

#define VkglTestCase_003401_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003401_2 "essions.array_cos_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003401, VkglTestCase_003401_1, VkglTestCase_003401_2);

#define VkglTestCase_003402_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003402_2 "ssions.array_cos_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003402, VkglTestCase_003402_1, VkglTestCase_003402_2);

#define VkglTestCase_003403_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003403_2 "ssions.array_asin_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003403, VkglTestCase_003403_1, VkglTestCase_003403_2);

#define VkglTestCase_003404_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003404_2 "sions.array_asin_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003404, VkglTestCase_003404_1, VkglTestCase_003404_2);

#define VkglTestCase_003405_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003405_2 "ssions.array_asin_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003405, VkglTestCase_003405_1, VkglTestCase_003405_2);

#define VkglTestCase_003406_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003406_2 "sions.array_asin_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003406, VkglTestCase_003406_1, VkglTestCase_003406_2);

#define VkglTestCase_003407_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003407_2 "ssions.array_asin_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003407, VkglTestCase_003407_1, VkglTestCase_003407_2);

#define VkglTestCase_003408_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003408_2 "sions.array_asin_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003408, VkglTestCase_003408_1, VkglTestCase_003408_2);

#define VkglTestCase_003409_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003409_2 "ssions.array_asin_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003409, VkglTestCase_003409_1, VkglTestCase_003409_2);

#define VkglTestCase_003410_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003410_2 "sions.array_asin_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003410, VkglTestCase_003410_1, VkglTestCase_003410_2);

#define VkglTestCase_003411_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003411_2 "ssions.array_acos_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003411, VkglTestCase_003411_1, VkglTestCase_003411_2);

#define VkglTestCase_003412_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003412_2 "sions.array_acos_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003412, VkglTestCase_003412_1, VkglTestCase_003412_2);

#define VkglTestCase_003413_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003413_2 "ssions.array_acos_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003413, VkglTestCase_003413_1, VkglTestCase_003413_2);

#define VkglTestCase_003414_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003414_2 "sions.array_acos_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003414, VkglTestCase_003414_1, VkglTestCase_003414_2);

#define VkglTestCase_003415_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003415_2 "ssions.array_acos_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003415, VkglTestCase_003415_1, VkglTestCase_003415_2);

#define VkglTestCase_003416_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003416_2 "sions.array_acos_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003416, VkglTestCase_003416_1, VkglTestCase_003416_2);

#define VkglTestCase_003417_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003417_2 "ssions.array_acos_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003417, VkglTestCase_003417_1, VkglTestCase_003417_2);

#define VkglTestCase_003418_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003418_2 "sions.array_acos_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003418, VkglTestCase_003418_1, VkglTestCase_003418_2);

#define VkglTestCase_003419_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003419_2 "ssions.array_pow_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003419, VkglTestCase_003419_1, VkglTestCase_003419_2);

#define VkglTestCase_003420_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003420_2 "sions.array_pow_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003420, VkglTestCase_003420_1, VkglTestCase_003420_2);

#define VkglTestCase_003421_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003421_2 "essions.array_pow_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003421, VkglTestCase_003421_1, VkglTestCase_003421_2);

#define VkglTestCase_003422_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003422_2 "ssions.array_pow_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003422, VkglTestCase_003422_1, VkglTestCase_003422_2);

#define VkglTestCase_003423_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003423_2 "essions.array_pow_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003423, VkglTestCase_003423_1, VkglTestCase_003423_2);

#define VkglTestCase_003424_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003424_2 "ssions.array_pow_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003424, VkglTestCase_003424_1, VkglTestCase_003424_2);

#define VkglTestCase_003425_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003425_2 "essions.array_pow_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003425, VkglTestCase_003425_1, VkglTestCase_003425_2);

#define VkglTestCase_003426_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003426_2 "ssions.array_pow_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003426, VkglTestCase_003426_1, VkglTestCase_003426_2);

#define VkglTestCase_003427_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003427_2 "ssions.array_exp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003427, VkglTestCase_003427_1, VkglTestCase_003427_2);

#define VkglTestCase_003428_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003428_2 "sions.array_exp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003428, VkglTestCase_003428_1, VkglTestCase_003428_2);

#define VkglTestCase_003429_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003429_2 "essions.array_exp_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003429, VkglTestCase_003429_1, VkglTestCase_003429_2);

#define VkglTestCase_003430_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003430_2 "ssions.array_exp_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003430, VkglTestCase_003430_1, VkglTestCase_003430_2);

#define VkglTestCase_003431_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003431_2 "essions.array_exp_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003431, VkglTestCase_003431_1, VkglTestCase_003431_2);

#define VkglTestCase_003432_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003432_2 "ssions.array_exp_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003432, VkglTestCase_003432_1, VkglTestCase_003432_2);

#define VkglTestCase_003433_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003433_2 "essions.array_exp_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003433, VkglTestCase_003433_1, VkglTestCase_003433_2);

#define VkglTestCase_003434_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003434_2 "ssions.array_exp_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003434, VkglTestCase_003434_1, VkglTestCase_003434_2);

#define VkglTestCase_003435_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003435_2 "ssions.array_log_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003435, VkglTestCase_003435_1, VkglTestCase_003435_2);

#define VkglTestCase_003436_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003436_2 "sions.array_log_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003436, VkglTestCase_003436_1, VkglTestCase_003436_2);

#define VkglTestCase_003437_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003437_2 "essions.array_log_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003437, VkglTestCase_003437_1, VkglTestCase_003437_2);

#define VkglTestCase_003438_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003438_2 "ssions.array_log_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003438, VkglTestCase_003438_1, VkglTestCase_003438_2);

#define VkglTestCase_003439_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003439_2 "essions.array_log_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003439, VkglTestCase_003439_1, VkglTestCase_003439_2);

#define VkglTestCase_003440_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003440_2 "ssions.array_log_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003440, VkglTestCase_003440_1, VkglTestCase_003440_2);

#define VkglTestCase_003441_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003441_2 "essions.array_log_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003441, VkglTestCase_003441_1, VkglTestCase_003441_2);

#define VkglTestCase_003442_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003442_2 "ssions.array_log_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003442, VkglTestCase_003442_1, VkglTestCase_003442_2);

#define VkglTestCase_003443_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003443_2 "ssions.array_exp2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003443, VkglTestCase_003443_1, VkglTestCase_003443_2);

#define VkglTestCase_003444_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003444_2 "sions.array_exp2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003444, VkglTestCase_003444_1, VkglTestCase_003444_2);

#define VkglTestCase_003445_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003445_2 "ssions.array_exp2_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003445, VkglTestCase_003445_1, VkglTestCase_003445_2);

#define VkglTestCase_003446_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003446_2 "sions.array_exp2_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003446, VkglTestCase_003446_1, VkglTestCase_003446_2);

#define VkglTestCase_003447_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003447_2 "ssions.array_exp2_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003447, VkglTestCase_003447_1, VkglTestCase_003447_2);

#define VkglTestCase_003448_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003448_2 "sions.array_exp2_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003448, VkglTestCase_003448_1, VkglTestCase_003448_2);

#define VkglTestCase_003449_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003449_2 "ssions.array_exp2_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003449, VkglTestCase_003449_1, VkglTestCase_003449_2);

#define VkglTestCase_003450_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003450_2 "sions.array_exp2_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003450, VkglTestCase_003450_1, VkglTestCase_003450_2);

#define VkglTestCase_003451_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003451_2 "ssions.array_log2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003451, VkglTestCase_003451_1, VkglTestCase_003451_2);

#define VkglTestCase_003452_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003452_2 "sions.array_log2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003452, VkglTestCase_003452_1, VkglTestCase_003452_2);

#define VkglTestCase_003453_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003453_2 "ssions.array_log2_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003453, VkglTestCase_003453_1, VkglTestCase_003453_2);

#define VkglTestCase_003454_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003454_2 "sions.array_log2_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003454, VkglTestCase_003454_1, VkglTestCase_003454_2);

#define VkglTestCase_003455_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003455_2 "ssions.array_log2_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003455, VkglTestCase_003455_1, VkglTestCase_003455_2);

#define VkglTestCase_003456_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003456_2 "sions.array_log2_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003456, VkglTestCase_003456_1, VkglTestCase_003456_2);

#define VkglTestCase_003457_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003457_2 "ssions.array_log2_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003457, VkglTestCase_003457_1, VkglTestCase_003457_2);

#define VkglTestCase_003458_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003458_2 "sions.array_log2_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003458, VkglTestCase_003458_1, VkglTestCase_003458_2);

#define VkglTestCase_003459_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003459_2 "ssions.array_sqrt_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003459, VkglTestCase_003459_1, VkglTestCase_003459_2);

#define VkglTestCase_003460_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003460_2 "sions.array_sqrt_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003460, VkglTestCase_003460_1, VkglTestCase_003460_2);

#define VkglTestCase_003461_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003461_2 "ssions.array_sqrt_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003461, VkglTestCase_003461_1, VkglTestCase_003461_2);

#define VkglTestCase_003462_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003462_2 "sions.array_sqrt_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003462, VkglTestCase_003462_1, VkglTestCase_003462_2);

#define VkglTestCase_003463_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003463_2 "ssions.array_sqrt_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003463, VkglTestCase_003463_1, VkglTestCase_003463_2);

#define VkglTestCase_003464_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003464_2 "sions.array_sqrt_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003464, VkglTestCase_003464_1, VkglTestCase_003464_2);

#define VkglTestCase_003465_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003465_2 "ssions.array_sqrt_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003465, VkglTestCase_003465_1, VkglTestCase_003465_2);

#define VkglTestCase_003466_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003466_2 "sions.array_sqrt_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003466, VkglTestCase_003466_1, VkglTestCase_003466_2);

#define VkglTestCase_003467_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003467_2 "ns.array_inversesqrt_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003467, VkglTestCase_003467_1, VkglTestCase_003467_2);

#define VkglTestCase_003468_1 "KHR-GLES3.core.constant_expression"
#define VkglTestCase_003468_2 "s.array_inversesqrt_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003468, VkglTestCase_003468_1, VkglTestCase_003468_2);

#define VkglTestCase_003469_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003469_2 "ons.array_inversesqrt_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003469, VkglTestCase_003469_1, VkglTestCase_003469_2);

#define VkglTestCase_003470_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003470_2 "ns.array_inversesqrt_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003470, VkglTestCase_003470_1, VkglTestCase_003470_2);

#define VkglTestCase_003471_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003471_2 "ons.array_inversesqrt_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003471, VkglTestCase_003471_1, VkglTestCase_003471_2);

#define VkglTestCase_003472_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003472_2 "ns.array_inversesqrt_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003472, VkglTestCase_003472_1, VkglTestCase_003472_2);

#define VkglTestCase_003473_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003473_2 "ons.array_inversesqrt_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003473, VkglTestCase_003473_1, VkglTestCase_003473_2);

#define VkglTestCase_003474_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003474_2 "ns.array_inversesqrt_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003474, VkglTestCase_003474_1, VkglTestCase_003474_2);

#define VkglTestCase_003475_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003475_2 "essions.array_abs_int_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003475, VkglTestCase_003475_1, VkglTestCase_003475_2);

#define VkglTestCase_003476_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003476_2 "ssions.array_abs_int_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003476, VkglTestCase_003476_1, VkglTestCase_003476_2);

#define VkglTestCase_003477_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003477_2 "ssions.array_abs_ivec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003477, VkglTestCase_003477_1, VkglTestCase_003477_2);

#define VkglTestCase_003478_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003478_2 "sions.array_abs_ivec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003478, VkglTestCase_003478_1, VkglTestCase_003478_2);

#define VkglTestCase_003479_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003479_2 "ssions.array_abs_ivec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003479, VkglTestCase_003479_1, VkglTestCase_003479_2);

#define VkglTestCase_003480_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003480_2 "sions.array_abs_ivec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003480, VkglTestCase_003480_1, VkglTestCase_003480_2);

#define VkglTestCase_003481_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003481_2 "ssions.array_abs_ivec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003481, VkglTestCase_003481_1, VkglTestCase_003481_2);

#define VkglTestCase_003482_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003482_2 "sions.array_abs_ivec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003482, VkglTestCase_003482_1, VkglTestCase_003482_2);

#define VkglTestCase_003483_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003483_2 "ssions.array_sign_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003483, VkglTestCase_003483_1, VkglTestCase_003483_2);

#define VkglTestCase_003484_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003484_2 "sions.array_sign_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003484, VkglTestCase_003484_1, VkglTestCase_003484_2);

#define VkglTestCase_003485_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003485_2 "ssions.array_sign_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003485, VkglTestCase_003485_1, VkglTestCase_003485_2);

#define VkglTestCase_003486_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003486_2 "sions.array_sign_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003486, VkglTestCase_003486_1, VkglTestCase_003486_2);

#define VkglTestCase_003487_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003487_2 "ssions.array_sign_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003487, VkglTestCase_003487_1, VkglTestCase_003487_2);

#define VkglTestCase_003488_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003488_2 "sions.array_sign_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003488, VkglTestCase_003488_1, VkglTestCase_003488_2);

#define VkglTestCase_003489_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003489_2 "ssions.array_sign_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003489, VkglTestCase_003489_1, VkglTestCase_003489_2);

#define VkglTestCase_003490_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003490_2 "sions.array_sign_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003490, VkglTestCase_003490_1, VkglTestCase_003490_2);

#define VkglTestCase_003491_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003491_2 "sions.array_floor_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003491, VkglTestCase_003491_1, VkglTestCase_003491_2);

#define VkglTestCase_003492_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003492_2 "ions.array_floor_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003492, VkglTestCase_003492_1, VkglTestCase_003492_2);

#define VkglTestCase_003493_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003493_2 "ssions.array_floor_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003493, VkglTestCase_003493_1, VkglTestCase_003493_2);

#define VkglTestCase_003494_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003494_2 "sions.array_floor_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003494, VkglTestCase_003494_1, VkglTestCase_003494_2);

#define VkglTestCase_003495_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003495_2 "ssions.array_floor_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003495, VkglTestCase_003495_1, VkglTestCase_003495_2);

#define VkglTestCase_003496_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003496_2 "sions.array_floor_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003496, VkglTestCase_003496_1, VkglTestCase_003496_2);

#define VkglTestCase_003497_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003497_2 "ssions.array_floor_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003497, VkglTestCase_003497_1, VkglTestCase_003497_2);

#define VkglTestCase_003498_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003498_2 "sions.array_floor_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003498, VkglTestCase_003498_1, VkglTestCase_003498_2);

#define VkglTestCase_003499_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003499_2 "sions.array_trunc_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003499, VkglTestCase_003499_1, VkglTestCase_003499_2);

#define VkglTestCase_003500_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003500_2 "ions.array_trunc_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003500, VkglTestCase_003500_1, VkglTestCase_003500_2);

#define VkglTestCase_003501_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003501_2 "ssions.array_trunc_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003501, VkglTestCase_003501_1, VkglTestCase_003501_2);

#define VkglTestCase_003502_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003502_2 "sions.array_trunc_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003502, VkglTestCase_003502_1, VkglTestCase_003502_2);

#define VkglTestCase_003503_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003503_2 "ssions.array_trunc_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003503, VkglTestCase_003503_1, VkglTestCase_003503_2);

#define VkglTestCase_003504_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003504_2 "sions.array_trunc_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003504, VkglTestCase_003504_1, VkglTestCase_003504_2);

#define VkglTestCase_003505_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003505_2 "ssions.array_trunc_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003505, VkglTestCase_003505_1, VkglTestCase_003505_2);

#define VkglTestCase_003506_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003506_2 "sions.array_trunc_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003506, VkglTestCase_003506_1, VkglTestCase_003506_2);

#define VkglTestCase_003507_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003507_2 "sions.array_round_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003507, VkglTestCase_003507_1, VkglTestCase_003507_2);

#define VkglTestCase_003508_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003508_2 "ions.array_round_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003508, VkglTestCase_003508_1, VkglTestCase_003508_2);

#define VkglTestCase_003509_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003509_2 "ssions.array_round_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003509, VkglTestCase_003509_1, VkglTestCase_003509_2);

#define VkglTestCase_003510_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003510_2 "sions.array_round_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003510, VkglTestCase_003510_1, VkglTestCase_003510_2);

#define VkglTestCase_003511_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003511_2 "ssions.array_round_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003511, VkglTestCase_003511_1, VkglTestCase_003511_2);

#define VkglTestCase_003512_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003512_2 "sions.array_round_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003512, VkglTestCase_003512_1, VkglTestCase_003512_2);

#define VkglTestCase_003513_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003513_2 "ssions.array_round_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003513, VkglTestCase_003513_1, VkglTestCase_003513_2);

#define VkglTestCase_003514_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003514_2 "sions.array_round_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003514, VkglTestCase_003514_1, VkglTestCase_003514_2);

#define VkglTestCase_003515_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003515_2 "ssions.array_ceil_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003515, VkglTestCase_003515_1, VkglTestCase_003515_2);

#define VkglTestCase_003516_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003516_2 "sions.array_ceil_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003516, VkglTestCase_003516_1, VkglTestCase_003516_2);

#define VkglTestCase_003517_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003517_2 "ssions.array_ceil_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003517, VkglTestCase_003517_1, VkglTestCase_003517_2);

#define VkglTestCase_003518_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003518_2 "sions.array_ceil_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003518, VkglTestCase_003518_1, VkglTestCase_003518_2);

#define VkglTestCase_003519_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003519_2 "ssions.array_ceil_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003519, VkglTestCase_003519_1, VkglTestCase_003519_2);

#define VkglTestCase_003520_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003520_2 "sions.array_ceil_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003520, VkglTestCase_003520_1, VkglTestCase_003520_2);

#define VkglTestCase_003521_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003521_2 "ssions.array_ceil_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003521, VkglTestCase_003521_1, VkglTestCase_003521_2);

#define VkglTestCase_003522_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003522_2 "sions.array_ceil_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003522, VkglTestCase_003522_1, VkglTestCase_003522_2);

#define VkglTestCase_003523_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003523_2 "ssions.array_mod_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003523, VkglTestCase_003523_1, VkglTestCase_003523_2);

#define VkglTestCase_003524_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003524_2 "sions.array_mod_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003524, VkglTestCase_003524_1, VkglTestCase_003524_2);

#define VkglTestCase_003525_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003525_2 "essions.array_mod_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003525, VkglTestCase_003525_1, VkglTestCase_003525_2);

#define VkglTestCase_003526_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003526_2 "ssions.array_mod_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003526, VkglTestCase_003526_1, VkglTestCase_003526_2);

#define VkglTestCase_003527_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003527_2 "ions.array_mod_vec2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003527, VkglTestCase_003527_1, VkglTestCase_003527_2);

#define VkglTestCase_003528_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003528_2 "ons.array_mod_vec2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003528, VkglTestCase_003528_1, VkglTestCase_003528_2);

#define VkglTestCase_003529_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003529_2 "essions.array_mod_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003529, VkglTestCase_003529_1, VkglTestCase_003529_2);

#define VkglTestCase_003530_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003530_2 "ssions.array_mod_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003530, VkglTestCase_003530_1, VkglTestCase_003530_2);

#define VkglTestCase_003531_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003531_2 "ions.array_mod_vec3_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003531, VkglTestCase_003531_1, VkglTestCase_003531_2);

#define VkglTestCase_003532_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003532_2 "ons.array_mod_vec3_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003532, VkglTestCase_003532_1, VkglTestCase_003532_2);

#define VkglTestCase_003533_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003533_2 "essions.array_mod_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003533, VkglTestCase_003533_1, VkglTestCase_003533_2);

#define VkglTestCase_003534_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003534_2 "ssions.array_mod_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003534, VkglTestCase_003534_1, VkglTestCase_003534_2);

#define VkglTestCase_003535_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003535_2 "ions.array_mod_vec4_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003535, VkglTestCase_003535_1, VkglTestCase_003535_2);

#define VkglTestCase_003536_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003536_2 "ons.array_mod_vec4_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003536, VkglTestCase_003536_1, VkglTestCase_003536_2);

#define VkglTestCase_003537_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003537_2 "ssions.array_min_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003537, VkglTestCase_003537_1, VkglTestCase_003537_2);

#define VkglTestCase_003538_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003538_2 "sions.array_min_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003538, VkglTestCase_003538_1, VkglTestCase_003538_2);

#define VkglTestCase_003539_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003539_2 "essions.array_min_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003539, VkglTestCase_003539_1, VkglTestCase_003539_2);

#define VkglTestCase_003540_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003540_2 "ssions.array_min_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003540, VkglTestCase_003540_1, VkglTestCase_003540_2);

#define VkglTestCase_003541_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003541_2 "ions.array_min_vec2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003541, VkglTestCase_003541_1, VkglTestCase_003541_2);

#define VkglTestCase_003542_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003542_2 "ons.array_min_vec2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003542, VkglTestCase_003542_1, VkglTestCase_003542_2);

#define VkglTestCase_003543_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003543_2 "essions.array_min_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003543, VkglTestCase_003543_1, VkglTestCase_003543_2);

#define VkglTestCase_003544_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003544_2 "ssions.array_min_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003544, VkglTestCase_003544_1, VkglTestCase_003544_2);

#define VkglTestCase_003545_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003545_2 "ions.array_min_vec3_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003545, VkglTestCase_003545_1, VkglTestCase_003545_2);

#define VkglTestCase_003546_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003546_2 "ons.array_min_vec3_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003546, VkglTestCase_003546_1, VkglTestCase_003546_2);

#define VkglTestCase_003547_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003547_2 "essions.array_min_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003547, VkglTestCase_003547_1, VkglTestCase_003547_2);

#define VkglTestCase_003548_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003548_2 "ssions.array_min_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003548, VkglTestCase_003548_1, VkglTestCase_003548_2);

#define VkglTestCase_003549_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003549_2 "ions.array_min_vec4_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003549, VkglTestCase_003549_1, VkglTestCase_003549_2);

#define VkglTestCase_003550_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003550_2 "ons.array_min_vec4_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003550, VkglTestCase_003550_1, VkglTestCase_003550_2);

#define VkglTestCase_003551_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003551_2 "ssions.array_max_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003551, VkglTestCase_003551_1, VkglTestCase_003551_2);

#define VkglTestCase_003552_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003552_2 "sions.array_max_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003552, VkglTestCase_003552_1, VkglTestCase_003552_2);

#define VkglTestCase_003553_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003553_2 "essions.array_max_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003553, VkglTestCase_003553_1, VkglTestCase_003553_2);

#define VkglTestCase_003554_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003554_2 "ssions.array_max_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003554, VkglTestCase_003554_1, VkglTestCase_003554_2);

#define VkglTestCase_003555_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003555_2 "ions.array_max_vec2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003555, VkglTestCase_003555_1, VkglTestCase_003555_2);

#define VkglTestCase_003556_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003556_2 "ons.array_max_vec2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003556, VkglTestCase_003556_1, VkglTestCase_003556_2);

#define VkglTestCase_003557_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003557_2 "essions.array_max_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003557, VkglTestCase_003557_1, VkglTestCase_003557_2);

#define VkglTestCase_003558_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003558_2 "ssions.array_max_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003558, VkglTestCase_003558_1, VkglTestCase_003558_2);

#define VkglTestCase_003559_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003559_2 "ions.array_max_vec3_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003559, VkglTestCase_003559_1, VkglTestCase_003559_2);

#define VkglTestCase_003560_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003560_2 "ons.array_max_vec3_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003560, VkglTestCase_003560_1, VkglTestCase_003560_2);

#define VkglTestCase_003561_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003561_2 "essions.array_max_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003561, VkglTestCase_003561_1, VkglTestCase_003561_2);

#define VkglTestCase_003562_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003562_2 "ssions.array_max_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003562, VkglTestCase_003562_1, VkglTestCase_003562_2);

#define VkglTestCase_003563_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003563_2 "ions.array_max_vec4_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003563, VkglTestCase_003563_1, VkglTestCase_003563_2);

#define VkglTestCase_003564_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003564_2 "ons.array_max_vec4_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003564, VkglTestCase_003564_1, VkglTestCase_003564_2);

#define VkglTestCase_003565_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003565_2 "sions.array_clamp_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003565, VkglTestCase_003565_1, VkglTestCase_003565_2);

#define VkglTestCase_003566_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003566_2 "ions.array_clamp_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003566, VkglTestCase_003566_1, VkglTestCase_003566_2);

#define VkglTestCase_003567_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003567_2 "ssions.array_clamp_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003567, VkglTestCase_003567_1, VkglTestCase_003567_2);

#define VkglTestCase_003568_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003568_2 "sions.array_clamp_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003568, VkglTestCase_003568_1, VkglTestCase_003568_2);

#define VkglTestCase_003569_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003569_2 "ons.array_clamp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003569, VkglTestCase_003569_1, VkglTestCase_003569_2);

#define VkglTestCase_003570_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003570_2 "ns.array_clamp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003570, VkglTestCase_003570_1, VkglTestCase_003570_2);

#define VkglTestCase_003571_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003571_2 "ssions.array_clamp_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003571, VkglTestCase_003571_1, VkglTestCase_003571_2);

#define VkglTestCase_003572_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003572_2 "sions.array_clamp_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003572, VkglTestCase_003572_1, VkglTestCase_003572_2);

#define VkglTestCase_003573_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003573_2 "ons.array_clamp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003573, VkglTestCase_003573_1, VkglTestCase_003573_2);

#define VkglTestCase_003574_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003574_2 "ns.array_clamp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003574, VkglTestCase_003574_1, VkglTestCase_003574_2);

#define VkglTestCase_003575_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003575_2 "ssions.array_clamp_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003575, VkglTestCase_003575_1, VkglTestCase_003575_2);

#define VkglTestCase_003576_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003576_2 "sions.array_clamp_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003576, VkglTestCase_003576_1, VkglTestCase_003576_2);

#define VkglTestCase_003577_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003577_2 "ons.array_clamp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003577, VkglTestCase_003577_1, VkglTestCase_003577_2);

#define VkglTestCase_003578_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003578_2 "ns.array_clamp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003578, VkglTestCase_003578_1, VkglTestCase_003578_2);

#define VkglTestCase_003579_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003579_2 "sions.array_length_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003579, VkglTestCase_003579_1, VkglTestCase_003579_2);

#define VkglTestCase_003580_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003580_2 "ions.array_length_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003580, VkglTestCase_003580_1, VkglTestCase_003580_2);

#define VkglTestCase_003581_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003581_2 "sions.array_length_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003581, VkglTestCase_003581_1, VkglTestCase_003581_2);

#define VkglTestCase_003582_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003582_2 "ions.array_length_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003582, VkglTestCase_003582_1, VkglTestCase_003582_2);

#define VkglTestCase_003583_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003583_2 "sions.array_length_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003583, VkglTestCase_003583_1, VkglTestCase_003583_2);

#define VkglTestCase_003584_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003584_2 "ions.array_length_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003584, VkglTestCase_003584_1, VkglTestCase_003584_2);

#define VkglTestCase_003585_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003585_2 "sions.array_length_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003585, VkglTestCase_003585_1, VkglTestCase_003585_2);

#define VkglTestCase_003586_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003586_2 "ions.array_length_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003586, VkglTestCase_003586_1, VkglTestCase_003586_2);

#define VkglTestCase_003587_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003587_2 "ssions.array_dot_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003587, VkglTestCase_003587_1, VkglTestCase_003587_2);

#define VkglTestCase_003588_1 "KHR-GLES3.core.constant_expres"
#define VkglTestCase_003588_2 "sions.array_dot_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003588, VkglTestCase_003588_1, VkglTestCase_003588_2);

#define VkglTestCase_003589_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003589_2 "essions.array_dot_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003589, VkglTestCase_003589_1, VkglTestCase_003589_2);

#define VkglTestCase_003590_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003590_2 "ssions.array_dot_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003590, VkglTestCase_003590_1, VkglTestCase_003590_2);

#define VkglTestCase_003591_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003591_2 "essions.array_dot_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003591, VkglTestCase_003591_1, VkglTestCase_003591_2);

#define VkglTestCase_003592_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003592_2 "ssions.array_dot_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003592, VkglTestCase_003592_1, VkglTestCase_003592_2);

#define VkglTestCase_003593_1 "KHR-GLES3.core.constant_expr"
#define VkglTestCase_003593_2 "essions.array_dot_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003593, VkglTestCase_003593_1, VkglTestCase_003593_2);

#define VkglTestCase_003594_1 "KHR-GLES3.core.constant_expre"
#define VkglTestCase_003594_2 "ssions.array_dot_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003594, VkglTestCase_003594_1, VkglTestCase_003594_2);

#define VkglTestCase_003595_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003595_2 "ons.array_normalize_float_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003595, VkglTestCase_003595_1, VkglTestCase_003595_2);

#define VkglTestCase_003596_1 "KHR-GLES3.core.constant_expressio"
#define VkglTestCase_003596_2 "ns.array_normalize_float_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003596, VkglTestCase_003596_1, VkglTestCase_003596_2);

#define VkglTestCase_003597_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003597_2 "ions.array_normalize_vec2_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003597, VkglTestCase_003597_1, VkglTestCase_003597_2);

#define VkglTestCase_003598_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003598_2 "ons.array_normalize_vec2_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003598, VkglTestCase_003598_1, VkglTestCase_003598_2);

#define VkglTestCase_003599_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003599_2 "ions.array_normalize_vec3_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003599, VkglTestCase_003599_1, VkglTestCase_003599_2);

#define VkglTestCase_003600_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003600_2 "ons.array_normalize_vec3_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003600, VkglTestCase_003600_1, VkglTestCase_003600_2);

#define VkglTestCase_003601_1 "KHR-GLES3.core.constant_express"
#define VkglTestCase_003601_2 "ions.array_normalize_vec4_vertex"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003601, VkglTestCase_003601_1, VkglTestCase_003601_2);

#define VkglTestCase_003602_1 "KHR-GLES3.core.constant_expressi"
#define VkglTestCase_003602_2 "ons.array_normalize_vec4_fragment"
SHRINK_HWTEST_F(ActsKhrgles30004TestSuite, TestCase_003602, VkglTestCase_003602_1, VkglTestCase_003602_2);
