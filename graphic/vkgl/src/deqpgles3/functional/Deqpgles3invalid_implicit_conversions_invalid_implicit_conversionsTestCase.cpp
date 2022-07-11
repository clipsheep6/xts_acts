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

<<<<<<< HEAD
#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30006TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30006TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_005158_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005158_2 "s.invalid_implicit_conversions.add_float_int_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005158, VkglTestCase_005158_1, VkglTestCase_005158_2);

#define VkglTestCase_005159_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005159_2 ".invalid_implicit_conversions.add_float_int_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005159, VkglTestCase_005159_1, VkglTestCase_005159_2);

#define VkglTestCase_005160_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005160_2 "ns.invalid_implicit_conversions.add_float_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005160, VkglTestCase_005160_1, VkglTestCase_005160_2);

#define VkglTestCase_005161_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005161_2 "s.invalid_implicit_conversions.add_float_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005161, VkglTestCase_005161_1, VkglTestCase_005161_2);

#define VkglTestCase_005162_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005162_2 ".invalid_implicit_conversions.add_float_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005162, VkglTestCase_005162_1, VkglTestCase_005162_2);

#define VkglTestCase_005163_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005163_2 "invalid_implicit_conversions.add_float_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005163, VkglTestCase_005163_1, VkglTestCase_005163_2);

#define VkglTestCase_005164_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005164_2 ".invalid_implicit_conversions.add_float_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005164, VkglTestCase_005164_1, VkglTestCase_005164_2);

#define VkglTestCase_005165_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005165_2 "invalid_implicit_conversions.add_float_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005165, VkglTestCase_005165_1, VkglTestCase_005165_2);

#define VkglTestCase_005166_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005166_2 ".invalid_implicit_conversions.add_float_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005166, VkglTestCase_005166_1, VkglTestCase_005166_2);

#define VkglTestCase_005167_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005167_2 "invalid_implicit_conversions.add_float_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005167, VkglTestCase_005167_1, VkglTestCase_005167_2);

#define VkglTestCase_005168_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005168_2 ".invalid_implicit_conversions.add_float_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005168, VkglTestCase_005168_1, VkglTestCase_005168_2);

#define VkglTestCase_005169_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005169_2 "invalid_implicit_conversions.add_float_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005169, VkglTestCase_005169_1, VkglTestCase_005169_2);

#define VkglTestCase_005170_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005170_2 ".invalid_implicit_conversions.add_float_ivec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005170, VkglTestCase_005170_1, VkglTestCase_005170_2);

#define VkglTestCase_005171_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005171_2 "invalid_implicit_conversions.add_float_ivec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005171, VkglTestCase_005171_1, VkglTestCase_005171_2);

#define VkglTestCase_005172_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005172_2 ".invalid_implicit_conversions.add_float_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005172, VkglTestCase_005172_1, VkglTestCase_005172_2);

#define VkglTestCase_005173_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005173_2 "invalid_implicit_conversions.add_float_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005173, VkglTestCase_005173_1, VkglTestCase_005173_2);

#define VkglTestCase_005174_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005174_2 "ns.invalid_implicit_conversions.add_vec2_int_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005174, VkglTestCase_005174_1, VkglTestCase_005174_2);

#define VkglTestCase_005175_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005175_2 "s.invalid_implicit_conversions.add_vec2_int_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005175, VkglTestCase_005175_1, VkglTestCase_005175_2);

#define VkglTestCase_005176_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005176_2 "ons.invalid_implicit_conversions.add_vec2_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005176, VkglTestCase_005176_1, VkglTestCase_005176_2);

#define VkglTestCase_005177_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005177_2 "ns.invalid_implicit_conversions.add_vec2_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005177, VkglTestCase_005177_1, VkglTestCase_005177_2);

#define VkglTestCase_005178_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005178_2 "s.invalid_implicit_conversions.add_vec2_ivec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005178, VkglTestCase_005178_1, VkglTestCase_005178_2);

#define VkglTestCase_005179_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005179_2 ".invalid_implicit_conversions.add_vec2_ivec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005179, VkglTestCase_005179_1, VkglTestCase_005179_2);

#define VkglTestCase_005180_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005180_2 "s.invalid_implicit_conversions.add_vec2_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005180, VkglTestCase_005180_1, VkglTestCase_005180_2);

#define VkglTestCase_005181_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005181_2 ".invalid_implicit_conversions.add_vec2_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005181, VkglTestCase_005181_1, VkglTestCase_005181_2);

#define VkglTestCase_005182_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005182_2 "s.invalid_implicit_conversions.add_vec2_ivec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005182, VkglTestCase_005182_1, VkglTestCase_005182_2);

#define VkglTestCase_005183_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005183_2 ".invalid_implicit_conversions.add_vec2_ivec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005183, VkglTestCase_005183_1, VkglTestCase_005183_2);

#define VkglTestCase_005184_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005184_2 "s.invalid_implicit_conversions.add_vec2_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005184, VkglTestCase_005184_1, VkglTestCase_005184_2);

#define VkglTestCase_005185_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005185_2 ".invalid_implicit_conversions.add_vec2_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005185, VkglTestCase_005185_1, VkglTestCase_005185_2);

#define VkglTestCase_005186_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005186_2 "s.invalid_implicit_conversions.add_vec2_ivec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005186, VkglTestCase_005186_1, VkglTestCase_005186_2);

#define VkglTestCase_005187_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005187_2 ".invalid_implicit_conversions.add_vec2_ivec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005187, VkglTestCase_005187_1, VkglTestCase_005187_2);

#define VkglTestCase_005188_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005188_2 "s.invalid_implicit_conversions.add_vec2_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005188, VkglTestCase_005188_1, VkglTestCase_005188_2);

#define VkglTestCase_005189_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005189_2 ".invalid_implicit_conversions.add_vec2_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005189, VkglTestCase_005189_1, VkglTestCase_005189_2);

#define VkglTestCase_005190_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005190_2 "ns.invalid_implicit_conversions.add_vec3_int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005190, VkglTestCase_005190_1, VkglTestCase_005190_2);

#define VkglTestCase_005191_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005191_2 "s.invalid_implicit_conversions.add_vec3_int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005191, VkglTestCase_005191_1, VkglTestCase_005191_2);

#define VkglTestCase_005192_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005192_2 "ons.invalid_implicit_conversions.add_vec3_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005192, VkglTestCase_005192_1, VkglTestCase_005192_2);

#define VkglTestCase_005193_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005193_2 "ns.invalid_implicit_conversions.add_vec3_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005193, VkglTestCase_005193_1, VkglTestCase_005193_2);

#define VkglTestCase_005194_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005194_2 "s.invalid_implicit_conversions.add_vec3_ivec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005194, VkglTestCase_005194_1, VkglTestCase_005194_2);

#define VkglTestCase_005195_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005195_2 ".invalid_implicit_conversions.add_vec3_ivec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005195, VkglTestCase_005195_1, VkglTestCase_005195_2);

#define VkglTestCase_005196_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005196_2 "s.invalid_implicit_conversions.add_vec3_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005196, VkglTestCase_005196_1, VkglTestCase_005196_2);

#define VkglTestCase_005197_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005197_2 ".invalid_implicit_conversions.add_vec3_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005197, VkglTestCase_005197_1, VkglTestCase_005197_2);

#define VkglTestCase_005198_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005198_2 "s.invalid_implicit_conversions.add_vec3_ivec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005198, VkglTestCase_005198_1, VkglTestCase_005198_2);

#define VkglTestCase_005199_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005199_2 ".invalid_implicit_conversions.add_vec3_ivec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005199, VkglTestCase_005199_1, VkglTestCase_005199_2);

#define VkglTestCase_005200_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005200_2 "s.invalid_implicit_conversions.add_vec3_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005200, VkglTestCase_005200_1, VkglTestCase_005200_2);

#define VkglTestCase_005201_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005201_2 ".invalid_implicit_conversions.add_vec3_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005201, VkglTestCase_005201_1, VkglTestCase_005201_2);

#define VkglTestCase_005202_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005202_2 "s.invalid_implicit_conversions.add_vec3_ivec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005202, VkglTestCase_005202_1, VkglTestCase_005202_2);

#define VkglTestCase_005203_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005203_2 ".invalid_implicit_conversions.add_vec3_ivec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005203, VkglTestCase_005203_1, VkglTestCase_005203_2);

#define VkglTestCase_005204_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005204_2 "s.invalid_implicit_conversions.add_vec3_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005204, VkglTestCase_005204_1, VkglTestCase_005204_2);

#define VkglTestCase_005205_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005205_2 ".invalid_implicit_conversions.add_vec3_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005205, VkglTestCase_005205_1, VkglTestCase_005205_2);

#define VkglTestCase_005206_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005206_2 "ns.invalid_implicit_conversions.add_vec4_int_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005206, VkglTestCase_005206_1, VkglTestCase_005206_2);

#define VkglTestCase_005207_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005207_2 "s.invalid_implicit_conversions.add_vec4_int_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005207, VkglTestCase_005207_1, VkglTestCase_005207_2);

#define VkglTestCase_005208_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005208_2 "ons.invalid_implicit_conversions.add_vec4_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005208, VkglTestCase_005208_1, VkglTestCase_005208_2);

#define VkglTestCase_005209_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005209_2 "ns.invalid_implicit_conversions.add_vec4_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005209, VkglTestCase_005209_1, VkglTestCase_005209_2);

#define VkglTestCase_005210_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005210_2 "s.invalid_implicit_conversions.add_vec4_ivec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005210, VkglTestCase_005210_1, VkglTestCase_005210_2);

#define VkglTestCase_005211_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005211_2 ".invalid_implicit_conversions.add_vec4_ivec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005211, VkglTestCase_005211_1, VkglTestCase_005211_2);

#define VkglTestCase_005212_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005212_2 "s.invalid_implicit_conversions.add_vec4_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005212, VkglTestCase_005212_1, VkglTestCase_005212_2);

#define VkglTestCase_005213_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005213_2 ".invalid_implicit_conversions.add_vec4_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005213, VkglTestCase_005213_1, VkglTestCase_005213_2);

#define VkglTestCase_005214_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005214_2 "s.invalid_implicit_conversions.add_vec4_ivec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005214, VkglTestCase_005214_1, VkglTestCase_005214_2);

#define VkglTestCase_005215_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005215_2 ".invalid_implicit_conversions.add_vec4_ivec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005215, VkglTestCase_005215_1, VkglTestCase_005215_2);

#define VkglTestCase_005216_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005216_2 "s.invalid_implicit_conversions.add_vec4_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005216, VkglTestCase_005216_1, VkglTestCase_005216_2);

#define VkglTestCase_005217_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005217_2 ".invalid_implicit_conversions.add_vec4_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005217, VkglTestCase_005217_1, VkglTestCase_005217_2);

#define VkglTestCase_005218_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005218_2 "s.invalid_implicit_conversions.add_vec4_ivec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005218, VkglTestCase_005218_1, VkglTestCase_005218_2);

#define VkglTestCase_005219_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005219_2 ".invalid_implicit_conversions.add_vec4_ivec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005219, VkglTestCase_005219_1, VkglTestCase_005219_2);

#define VkglTestCase_005220_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005220_2 "s.invalid_implicit_conversions.add_vec4_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005220, VkglTestCase_005220_1, VkglTestCase_005220_2);

#define VkglTestCase_005221_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005221_2 ".invalid_implicit_conversions.add_vec4_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005221, VkglTestCase_005221_1, VkglTestCase_005221_2);

#define VkglTestCase_005222_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005222_2 "s.invalid_implicit_conversions.add_float_uint_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005222, VkglTestCase_005222_1, VkglTestCase_005222_2);

#define VkglTestCase_005223_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005223_2 ".invalid_implicit_conversions.add_float_uint_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005223, VkglTestCase_005223_1, VkglTestCase_005223_2);

#define VkglTestCase_005224_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005224_2 "s.invalid_implicit_conversions.add_float_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005224, VkglTestCase_005224_1, VkglTestCase_005224_2);

#define VkglTestCase_005225_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005225_2 ".invalid_implicit_conversions.add_float_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005225, VkglTestCase_005225_1, VkglTestCase_005225_2);

#define VkglTestCase_005226_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005226_2 ".invalid_implicit_conversions.add_float_uvec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005226, VkglTestCase_005226_1, VkglTestCase_005226_2);

#define VkglTestCase_005227_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005227_2 "invalid_implicit_conversions.add_float_uvec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005227, VkglTestCase_005227_1, VkglTestCase_005227_2);

#define VkglTestCase_005228_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005228_2 ".invalid_implicit_conversions.add_float_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005228, VkglTestCase_005228_1, VkglTestCase_005228_2);

#define VkglTestCase_005229_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005229_2 "invalid_implicit_conversions.add_float_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005229, VkglTestCase_005229_1, VkglTestCase_005229_2);

#define VkglTestCase_005230_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005230_2 ".invalid_implicit_conversions.add_float_uvec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005230, VkglTestCase_005230_1, VkglTestCase_005230_2);

#define VkglTestCase_005231_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005231_2 "invalid_implicit_conversions.add_float_uvec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005231, VkglTestCase_005231_1, VkglTestCase_005231_2);

#define VkglTestCase_005232_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005232_2 ".invalid_implicit_conversions.add_float_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005232, VkglTestCase_005232_1, VkglTestCase_005232_2);

#define VkglTestCase_005233_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005233_2 "invalid_implicit_conversions.add_float_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005233, VkglTestCase_005233_1, VkglTestCase_005233_2);

#define VkglTestCase_005234_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005234_2 ".invalid_implicit_conversions.add_float_uvec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005234, VkglTestCase_005234_1, VkglTestCase_005234_2);

#define VkglTestCase_005235_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005235_2 "invalid_implicit_conversions.add_float_uvec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005235, VkglTestCase_005235_1, VkglTestCase_005235_2);

#define VkglTestCase_005236_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005236_2 ".invalid_implicit_conversions.add_float_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005236, VkglTestCase_005236_1, VkglTestCase_005236_2);

#define VkglTestCase_005237_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005237_2 "invalid_implicit_conversions.add_float_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005237, VkglTestCase_005237_1, VkglTestCase_005237_2);

#define VkglTestCase_005238_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005238_2 "ns.invalid_implicit_conversions.add_vec2_uint_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005238, VkglTestCase_005238_1, VkglTestCase_005238_2);

#define VkglTestCase_005239_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005239_2 "s.invalid_implicit_conversions.add_vec2_uint_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005239, VkglTestCase_005239_1, VkglTestCase_005239_2);

#define VkglTestCase_005240_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005240_2 "ns.invalid_implicit_conversions.add_vec2_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005240, VkglTestCase_005240_1, VkglTestCase_005240_2);

#define VkglTestCase_005241_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005241_2 "s.invalid_implicit_conversions.add_vec2_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005241, VkglTestCase_005241_1, VkglTestCase_005241_2);

#define VkglTestCase_005242_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005242_2 "s.invalid_implicit_conversions.add_vec2_uvec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005242, VkglTestCase_005242_1, VkglTestCase_005242_2);

#define VkglTestCase_005243_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005243_2 ".invalid_implicit_conversions.add_vec2_uvec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005243, VkglTestCase_005243_1, VkglTestCase_005243_2);

#define VkglTestCase_005244_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005244_2 "s.invalid_implicit_conversions.add_vec2_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005244, VkglTestCase_005244_1, VkglTestCase_005244_2);

#define VkglTestCase_005245_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005245_2 ".invalid_implicit_conversions.add_vec2_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005245, VkglTestCase_005245_1, VkglTestCase_005245_2);

#define VkglTestCase_005246_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005246_2 "s.invalid_implicit_conversions.add_vec2_uvec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005246, VkglTestCase_005246_1, VkglTestCase_005246_2);

#define VkglTestCase_005247_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005247_2 ".invalid_implicit_conversions.add_vec2_uvec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005247, VkglTestCase_005247_1, VkglTestCase_005247_2);

#define VkglTestCase_005248_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005248_2 "s.invalid_implicit_conversions.add_vec2_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005248, VkglTestCase_005248_1, VkglTestCase_005248_2);

#define VkglTestCase_005249_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005249_2 ".invalid_implicit_conversions.add_vec2_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005249, VkglTestCase_005249_1, VkglTestCase_005249_2);

#define VkglTestCase_005250_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005250_2 "s.invalid_implicit_conversions.add_vec2_uvec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005250, VkglTestCase_005250_1, VkglTestCase_005250_2);

#define VkglTestCase_005251_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005251_2 ".invalid_implicit_conversions.add_vec2_uvec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005251, VkglTestCase_005251_1, VkglTestCase_005251_2);

#define VkglTestCase_005252_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005252_2 "s.invalid_implicit_conversions.add_vec2_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005252, VkglTestCase_005252_1, VkglTestCase_005252_2);

#define VkglTestCase_005253_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005253_2 ".invalid_implicit_conversions.add_vec2_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005253, VkglTestCase_005253_1, VkglTestCase_005253_2);

#define VkglTestCase_005254_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005254_2 "ns.invalid_implicit_conversions.add_vec3_uint_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005254, VkglTestCase_005254_1, VkglTestCase_005254_2);

#define VkglTestCase_005255_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005255_2 "s.invalid_implicit_conversions.add_vec3_uint_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005255, VkglTestCase_005255_1, VkglTestCase_005255_2);

#define VkglTestCase_005256_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005256_2 "ns.invalid_implicit_conversions.add_vec3_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005256, VkglTestCase_005256_1, VkglTestCase_005256_2);

#define VkglTestCase_005257_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005257_2 "s.invalid_implicit_conversions.add_vec3_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005257, VkglTestCase_005257_1, VkglTestCase_005257_2);

#define VkglTestCase_005258_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005258_2 "s.invalid_implicit_conversions.add_vec3_uvec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005258, VkglTestCase_005258_1, VkglTestCase_005258_2);

#define VkglTestCase_005259_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005259_2 ".invalid_implicit_conversions.add_vec3_uvec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005259, VkglTestCase_005259_1, VkglTestCase_005259_2);

#define VkglTestCase_005260_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005260_2 "s.invalid_implicit_conversions.add_vec3_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005260, VkglTestCase_005260_1, VkglTestCase_005260_2);

#define VkglTestCase_005261_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005261_2 ".invalid_implicit_conversions.add_vec3_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005261, VkglTestCase_005261_1, VkglTestCase_005261_2);

#define VkglTestCase_005262_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005262_2 "s.invalid_implicit_conversions.add_vec3_uvec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005262, VkglTestCase_005262_1, VkglTestCase_005262_2);

#define VkglTestCase_005263_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005263_2 ".invalid_implicit_conversions.add_vec3_uvec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005263, VkglTestCase_005263_1, VkglTestCase_005263_2);

#define VkglTestCase_005264_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005264_2 "s.invalid_implicit_conversions.add_vec3_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005264, VkglTestCase_005264_1, VkglTestCase_005264_2);

#define VkglTestCase_005265_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005265_2 ".invalid_implicit_conversions.add_vec3_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005265, VkglTestCase_005265_1, VkglTestCase_005265_2);

#define VkglTestCase_005266_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005266_2 "s.invalid_implicit_conversions.add_vec3_uvec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005266, VkglTestCase_005266_1, VkglTestCase_005266_2);

#define VkglTestCase_005267_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005267_2 ".invalid_implicit_conversions.add_vec3_uvec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005267, VkglTestCase_005267_1, VkglTestCase_005267_2);

#define VkglTestCase_005268_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005268_2 "s.invalid_implicit_conversions.add_vec3_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005268, VkglTestCase_005268_1, VkglTestCase_005268_2);

#define VkglTestCase_005269_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005269_2 ".invalid_implicit_conversions.add_vec3_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005269, VkglTestCase_005269_1, VkglTestCase_005269_2);

#define VkglTestCase_005270_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005270_2 "ns.invalid_implicit_conversions.add_vec4_uint_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005270, VkglTestCase_005270_1, VkglTestCase_005270_2);

#define VkglTestCase_005271_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005271_2 "s.invalid_implicit_conversions.add_vec4_uint_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005271, VkglTestCase_005271_1, VkglTestCase_005271_2);

#define VkglTestCase_005272_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005272_2 "ns.invalid_implicit_conversions.add_vec4_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005272, VkglTestCase_005272_1, VkglTestCase_005272_2);

#define VkglTestCase_005273_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005273_2 "s.invalid_implicit_conversions.add_vec4_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005273, VkglTestCase_005273_1, VkglTestCase_005273_2);

#define VkglTestCase_005274_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005274_2 "s.invalid_implicit_conversions.add_vec4_uvec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005274, VkglTestCase_005274_1, VkglTestCase_005274_2);

#define VkglTestCase_005275_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005275_2 ".invalid_implicit_conversions.add_vec4_uvec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005275, VkglTestCase_005275_1, VkglTestCase_005275_2);

#define VkglTestCase_005276_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005276_2 "s.invalid_implicit_conversions.add_vec4_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005276, VkglTestCase_005276_1, VkglTestCase_005276_2);

#define VkglTestCase_005277_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005277_2 ".invalid_implicit_conversions.add_vec4_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005277, VkglTestCase_005277_1, VkglTestCase_005277_2);

#define VkglTestCase_005278_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005278_2 "s.invalid_implicit_conversions.add_vec4_uvec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005278, VkglTestCase_005278_1, VkglTestCase_005278_2);

#define VkglTestCase_005279_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005279_2 ".invalid_implicit_conversions.add_vec4_uvec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005279, VkglTestCase_005279_1, VkglTestCase_005279_2);

#define VkglTestCase_005280_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005280_2 "s.invalid_implicit_conversions.add_vec4_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005280, VkglTestCase_005280_1, VkglTestCase_005280_2);

#define VkglTestCase_005281_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005281_2 ".invalid_implicit_conversions.add_vec4_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005281, VkglTestCase_005281_1, VkglTestCase_005281_2);

#define VkglTestCase_005282_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005282_2 "s.invalid_implicit_conversions.add_vec4_uvec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005282, VkglTestCase_005282_1, VkglTestCase_005282_2);

#define VkglTestCase_005283_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005283_2 ".invalid_implicit_conversions.add_vec4_uvec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005283, VkglTestCase_005283_1, VkglTestCase_005283_2);

#define VkglTestCase_005284_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005284_2 "s.invalid_implicit_conversions.add_vec4_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005284, VkglTestCase_005284_1, VkglTestCase_005284_2);

#define VkglTestCase_005285_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005285_2 ".invalid_implicit_conversions.add_vec4_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005285, VkglTestCase_005285_1, VkglTestCase_005285_2);

#define VkglTestCase_005286_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005286_2 "ons.invalid_implicit_conversions.add_int_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005286, VkglTestCase_005286_1, VkglTestCase_005286_2);

#define VkglTestCase_005287_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005287_2 "ns.invalid_implicit_conversions.add_int_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005287, VkglTestCase_005287_1, VkglTestCase_005287_2);

#define VkglTestCase_005288_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005288_2 "ns.invalid_implicit_conversions.add_int_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005288, VkglTestCase_005288_1, VkglTestCase_005288_2);

#define VkglTestCase_005289_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005289_2 "s.invalid_implicit_conversions.add_int_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005289, VkglTestCase_005289_1, VkglTestCase_005289_2);

#define VkglTestCase_005290_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005290_2 "ns.invalid_implicit_conversions.add_int_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005290, VkglTestCase_005290_1, VkglTestCase_005290_2);

#define VkglTestCase_005291_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005291_2 "s.invalid_implicit_conversions.add_int_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005291, VkglTestCase_005291_1, VkglTestCase_005291_2);

#define VkglTestCase_005292_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005292_2 "s.invalid_implicit_conversions.add_int_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005292, VkglTestCase_005292_1, VkglTestCase_005292_2);

#define VkglTestCase_005293_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005293_2 ".invalid_implicit_conversions.add_int_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005293, VkglTestCase_005293_1, VkglTestCase_005293_2);

#define VkglTestCase_005294_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005294_2 "ns.invalid_implicit_conversions.add_int_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005294, VkglTestCase_005294_1, VkglTestCase_005294_2);

#define VkglTestCase_005295_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005295_2 "s.invalid_implicit_conversions.add_int_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005295, VkglTestCase_005295_1, VkglTestCase_005295_2);

#define VkglTestCase_005296_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005296_2 "s.invalid_implicit_conversions.add_int_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005296, VkglTestCase_005296_1, VkglTestCase_005296_2);

#define VkglTestCase_005297_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005297_2 ".invalid_implicit_conversions.add_int_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005297, VkglTestCase_005297_1, VkglTestCase_005297_2);

#define VkglTestCase_005298_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005298_2 "ns.invalid_implicit_conversions.add_int_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005298, VkglTestCase_005298_1, VkglTestCase_005298_2);

#define VkglTestCase_005299_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005299_2 "s.invalid_implicit_conversions.add_int_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005299, VkglTestCase_005299_1, VkglTestCase_005299_2);

#define VkglTestCase_005300_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005300_2 "s.invalid_implicit_conversions.add_int_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005300, VkglTestCase_005300_1, VkglTestCase_005300_2);

#define VkglTestCase_005301_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005301_2 ".invalid_implicit_conversions.add_int_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005301, VkglTestCase_005301_1, VkglTestCase_005301_2);

#define VkglTestCase_005302_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005302_2 "s.invalid_implicit_conversions.add_ivec2_uint_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005302, VkglTestCase_005302_1, VkglTestCase_005302_2);

#define VkglTestCase_005303_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005303_2 ".invalid_implicit_conversions.add_ivec2_uint_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005303, VkglTestCase_005303_1, VkglTestCase_005303_2);

#define VkglTestCase_005304_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005304_2 "s.invalid_implicit_conversions.add_ivec2_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005304, VkglTestCase_005304_1, VkglTestCase_005304_2);

#define VkglTestCase_005305_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005305_2 ".invalid_implicit_conversions.add_ivec2_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005305, VkglTestCase_005305_1, VkglTestCase_005305_2);

#define VkglTestCase_005306_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005306_2 ".invalid_implicit_conversions.add_ivec2_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005306, VkglTestCase_005306_1, VkglTestCase_005306_2);

#define VkglTestCase_005307_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005307_2 "invalid_implicit_conversions.add_ivec2_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005307, VkglTestCase_005307_1, VkglTestCase_005307_2);

#define VkglTestCase_005308_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005308_2 ".invalid_implicit_conversions.add_ivec2_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005308, VkglTestCase_005308_1, VkglTestCase_005308_2);

#define VkglTestCase_005309_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005309_2 "invalid_implicit_conversions.add_ivec2_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005309, VkglTestCase_005309_1, VkglTestCase_005309_2);

#define VkglTestCase_005310_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005310_2 ".invalid_implicit_conversions.add_ivec2_uvec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005310, VkglTestCase_005310_1, VkglTestCase_005310_2);

#define VkglTestCase_005311_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005311_2 "invalid_implicit_conversions.add_ivec2_uvec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005311, VkglTestCase_005311_1, VkglTestCase_005311_2);

#define VkglTestCase_005312_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005312_2 ".invalid_implicit_conversions.add_ivec2_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005312, VkglTestCase_005312_1, VkglTestCase_005312_2);

#define VkglTestCase_005313_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005313_2 "invalid_implicit_conversions.add_ivec2_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005313, VkglTestCase_005313_1, VkglTestCase_005313_2);

#define VkglTestCase_005314_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005314_2 ".invalid_implicit_conversions.add_ivec2_uvec4_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005314, VkglTestCase_005314_1, VkglTestCase_005314_2);

#define VkglTestCase_005315_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005315_2 "invalid_implicit_conversions.add_ivec2_uvec4_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005315, VkglTestCase_005315_1, VkglTestCase_005315_2);

#define VkglTestCase_005316_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005316_2 ".invalid_implicit_conversions.add_ivec2_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005316, VkglTestCase_005316_1, VkglTestCase_005316_2);

#define VkglTestCase_005317_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005317_2 "invalid_implicit_conversions.add_ivec2_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005317, VkglTestCase_005317_1, VkglTestCase_005317_2);

#define VkglTestCase_005318_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005318_2 "s.invalid_implicit_conversions.add_ivec3_uint_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005318, VkglTestCase_005318_1, VkglTestCase_005318_2);

#define VkglTestCase_005319_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005319_2 ".invalid_implicit_conversions.add_ivec3_uint_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005319, VkglTestCase_005319_1, VkglTestCase_005319_2);

#define VkglTestCase_005320_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005320_2 "s.invalid_implicit_conversions.add_ivec3_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005320, VkglTestCase_005320_1, VkglTestCase_005320_2);

#define VkglTestCase_005321_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005321_2 ".invalid_implicit_conversions.add_ivec3_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005321, VkglTestCase_005321_1, VkglTestCase_005321_2);

#define VkglTestCase_005322_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005322_2 ".invalid_implicit_conversions.add_ivec3_uvec2_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005322, VkglTestCase_005322_1, VkglTestCase_005322_2);

#define VkglTestCase_005323_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005323_2 "invalid_implicit_conversions.add_ivec3_uvec2_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005323, VkglTestCase_005323_1, VkglTestCase_005323_2);

#define VkglTestCase_005324_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005324_2 ".invalid_implicit_conversions.add_ivec3_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005324, VkglTestCase_005324_1, VkglTestCase_005324_2);

#define VkglTestCase_005325_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005325_2 "invalid_implicit_conversions.add_ivec3_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005325, VkglTestCase_005325_1, VkglTestCase_005325_2);

#define VkglTestCase_005326_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005326_2 ".invalid_implicit_conversions.add_ivec3_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005326, VkglTestCase_005326_1, VkglTestCase_005326_2);

#define VkglTestCase_005327_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005327_2 "invalid_implicit_conversions.add_ivec3_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005327, VkglTestCase_005327_1, VkglTestCase_005327_2);

#define VkglTestCase_005328_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005328_2 ".invalid_implicit_conversions.add_ivec3_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005328, VkglTestCase_005328_1, VkglTestCase_005328_2);

#define VkglTestCase_005329_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005329_2 "invalid_implicit_conversions.add_ivec3_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005329, VkglTestCase_005329_1, VkglTestCase_005329_2);

#define VkglTestCase_005330_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005330_2 ".invalid_implicit_conversions.add_ivec3_uvec4_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005330, VkglTestCase_005330_1, VkglTestCase_005330_2);

#define VkglTestCase_005331_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005331_2 "invalid_implicit_conversions.add_ivec3_uvec4_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005331, VkglTestCase_005331_1, VkglTestCase_005331_2);

#define VkglTestCase_005332_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005332_2 ".invalid_implicit_conversions.add_ivec3_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005332, VkglTestCase_005332_1, VkglTestCase_005332_2);

#define VkglTestCase_005333_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005333_2 "invalid_implicit_conversions.add_ivec3_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005333, VkglTestCase_005333_1, VkglTestCase_005333_2);

#define VkglTestCase_005334_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005334_2 "s.invalid_implicit_conversions.add_ivec4_uint_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005334, VkglTestCase_005334_1, VkglTestCase_005334_2);

#define VkglTestCase_005335_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005335_2 ".invalid_implicit_conversions.add_ivec4_uint_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005335, VkglTestCase_005335_1, VkglTestCase_005335_2);

#define VkglTestCase_005336_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005336_2 "s.invalid_implicit_conversions.add_ivec4_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005336, VkglTestCase_005336_1, VkglTestCase_005336_2);

#define VkglTestCase_005337_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005337_2 ".invalid_implicit_conversions.add_ivec4_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005337, VkglTestCase_005337_1, VkglTestCase_005337_2);

#define VkglTestCase_005338_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005338_2 ".invalid_implicit_conversions.add_ivec4_uvec2_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005338, VkglTestCase_005338_1, VkglTestCase_005338_2);

#define VkglTestCase_005339_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005339_2 "invalid_implicit_conversions.add_ivec4_uvec2_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005339, VkglTestCase_005339_1, VkglTestCase_005339_2);

#define VkglTestCase_005340_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005340_2 ".invalid_implicit_conversions.add_ivec4_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005340, VkglTestCase_005340_1, VkglTestCase_005340_2);

#define VkglTestCase_005341_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005341_2 "invalid_implicit_conversions.add_ivec4_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005341, VkglTestCase_005341_1, VkglTestCase_005341_2);

#define VkglTestCase_005342_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005342_2 ".invalid_implicit_conversions.add_ivec4_uvec3_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005342, VkglTestCase_005342_1, VkglTestCase_005342_2);

#define VkglTestCase_005343_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005343_2 "invalid_implicit_conversions.add_ivec4_uvec3_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005343, VkglTestCase_005343_1, VkglTestCase_005343_2);

#define VkglTestCase_005344_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005344_2 ".invalid_implicit_conversions.add_ivec4_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005344, VkglTestCase_005344_1, VkglTestCase_005344_2);

#define VkglTestCase_005345_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005345_2 "invalid_implicit_conversions.add_ivec4_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005345, VkglTestCase_005345_1, VkglTestCase_005345_2);

#define VkglTestCase_005346_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005346_2 ".invalid_implicit_conversions.add_ivec4_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005346, VkglTestCase_005346_1, VkglTestCase_005346_2);

#define VkglTestCase_005347_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005347_2 "invalid_implicit_conversions.add_ivec4_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005347, VkglTestCase_005347_1, VkglTestCase_005347_2);

#define VkglTestCase_005348_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005348_2 ".invalid_implicit_conversions.add_ivec4_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005348, VkglTestCase_005348_1, VkglTestCase_005348_2);

#define VkglTestCase_005349_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005349_2 "invalid_implicit_conversions.add_ivec4_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005349, VkglTestCase_005349_1, VkglTestCase_005349_2);

#define VkglTestCase_005350_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005350_2 "s.invalid_implicit_conversions.mul_float_int_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005350, VkglTestCase_005350_1, VkglTestCase_005350_2);

#define VkglTestCase_005351_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005351_2 ".invalid_implicit_conversions.mul_float_int_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005351, VkglTestCase_005351_1, VkglTestCase_005351_2);

#define VkglTestCase_005352_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005352_2 "ns.invalid_implicit_conversions.mul_float_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005352, VkglTestCase_005352_1, VkglTestCase_005352_2);

#define VkglTestCase_005353_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005353_2 "s.invalid_implicit_conversions.mul_float_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005353, VkglTestCase_005353_1, VkglTestCase_005353_2);

#define VkglTestCase_005354_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005354_2 ".invalid_implicit_conversions.mul_float_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005354, VkglTestCase_005354_1, VkglTestCase_005354_2);

#define VkglTestCase_005355_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005355_2 "invalid_implicit_conversions.mul_float_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005355, VkglTestCase_005355_1, VkglTestCase_005355_2);

#define VkglTestCase_005356_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005356_2 ".invalid_implicit_conversions.mul_float_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005356, VkglTestCase_005356_1, VkglTestCase_005356_2);

#define VkglTestCase_005357_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005357_2 "invalid_implicit_conversions.mul_float_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005357, VkglTestCase_005357_1, VkglTestCase_005357_2);

#define VkglTestCase_005358_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005358_2 ".invalid_implicit_conversions.mul_float_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005358, VkglTestCase_005358_1, VkglTestCase_005358_2);

#define VkglTestCase_005359_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005359_2 "invalid_implicit_conversions.mul_float_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005359, VkglTestCase_005359_1, VkglTestCase_005359_2);

#define VkglTestCase_005360_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005360_2 ".invalid_implicit_conversions.mul_float_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005360, VkglTestCase_005360_1, VkglTestCase_005360_2);

#define VkglTestCase_005361_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005361_2 "invalid_implicit_conversions.mul_float_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005361, VkglTestCase_005361_1, VkglTestCase_005361_2);

#define VkglTestCase_005362_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005362_2 ".invalid_implicit_conversions.mul_float_ivec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005362, VkglTestCase_005362_1, VkglTestCase_005362_2);

#define VkglTestCase_005363_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005363_2 "invalid_implicit_conversions.mul_float_ivec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005363, VkglTestCase_005363_1, VkglTestCase_005363_2);

#define VkglTestCase_005364_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005364_2 ".invalid_implicit_conversions.mul_float_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005364, VkglTestCase_005364_1, VkglTestCase_005364_2);

#define VkglTestCase_005365_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005365_2 "invalid_implicit_conversions.mul_float_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005365, VkglTestCase_005365_1, VkglTestCase_005365_2);

#define VkglTestCase_005366_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005366_2 "ns.invalid_implicit_conversions.mul_vec2_int_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005366, VkglTestCase_005366_1, VkglTestCase_005366_2);

#define VkglTestCase_005367_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005367_2 "s.invalid_implicit_conversions.mul_vec2_int_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005367, VkglTestCase_005367_1, VkglTestCase_005367_2);

#define VkglTestCase_005368_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005368_2 "ons.invalid_implicit_conversions.mul_vec2_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005368, VkglTestCase_005368_1, VkglTestCase_005368_2);

#define VkglTestCase_005369_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005369_2 "ns.invalid_implicit_conversions.mul_vec2_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005369, VkglTestCase_005369_1, VkglTestCase_005369_2);

#define VkglTestCase_005370_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005370_2 "s.invalid_implicit_conversions.mul_vec2_ivec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005370, VkglTestCase_005370_1, VkglTestCase_005370_2);

#define VkglTestCase_005371_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005371_2 ".invalid_implicit_conversions.mul_vec2_ivec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005371, VkglTestCase_005371_1, VkglTestCase_005371_2);

#define VkglTestCase_005372_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005372_2 "s.invalid_implicit_conversions.mul_vec2_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005372, VkglTestCase_005372_1, VkglTestCase_005372_2);

#define VkglTestCase_005373_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005373_2 ".invalid_implicit_conversions.mul_vec2_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005373, VkglTestCase_005373_1, VkglTestCase_005373_2);

#define VkglTestCase_005374_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005374_2 "s.invalid_implicit_conversions.mul_vec2_ivec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005374, VkglTestCase_005374_1, VkglTestCase_005374_2);

#define VkglTestCase_005375_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005375_2 ".invalid_implicit_conversions.mul_vec2_ivec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005375, VkglTestCase_005375_1, VkglTestCase_005375_2);

#define VkglTestCase_005376_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005376_2 "s.invalid_implicit_conversions.mul_vec2_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005376, VkglTestCase_005376_1, VkglTestCase_005376_2);

#define VkglTestCase_005377_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005377_2 ".invalid_implicit_conversions.mul_vec2_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005377, VkglTestCase_005377_1, VkglTestCase_005377_2);

#define VkglTestCase_005378_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005378_2 "s.invalid_implicit_conversions.mul_vec2_ivec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005378, VkglTestCase_005378_1, VkglTestCase_005378_2);

#define VkglTestCase_005379_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005379_2 ".invalid_implicit_conversions.mul_vec2_ivec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005379, VkglTestCase_005379_1, VkglTestCase_005379_2);

#define VkglTestCase_005380_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005380_2 "s.invalid_implicit_conversions.mul_vec2_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005380, VkglTestCase_005380_1, VkglTestCase_005380_2);

#define VkglTestCase_005381_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005381_2 ".invalid_implicit_conversions.mul_vec2_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005381, VkglTestCase_005381_1, VkglTestCase_005381_2);

#define VkglTestCase_005382_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005382_2 "ns.invalid_implicit_conversions.mul_vec3_int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005382, VkglTestCase_005382_1, VkglTestCase_005382_2);

#define VkglTestCase_005383_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005383_2 "s.invalid_implicit_conversions.mul_vec3_int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005383, VkglTestCase_005383_1, VkglTestCase_005383_2);

#define VkglTestCase_005384_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005384_2 "ons.invalid_implicit_conversions.mul_vec3_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005384, VkglTestCase_005384_1, VkglTestCase_005384_2);

#define VkglTestCase_005385_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005385_2 "ns.invalid_implicit_conversions.mul_vec3_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005385, VkglTestCase_005385_1, VkglTestCase_005385_2);

#define VkglTestCase_005386_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005386_2 "s.invalid_implicit_conversions.mul_vec3_ivec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005386, VkglTestCase_005386_1, VkglTestCase_005386_2);

#define VkglTestCase_005387_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005387_2 ".invalid_implicit_conversions.mul_vec3_ivec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005387, VkglTestCase_005387_1, VkglTestCase_005387_2);

#define VkglTestCase_005388_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005388_2 "s.invalid_implicit_conversions.mul_vec3_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005388, VkglTestCase_005388_1, VkglTestCase_005388_2);

#define VkglTestCase_005389_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005389_2 ".invalid_implicit_conversions.mul_vec3_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005389, VkglTestCase_005389_1, VkglTestCase_005389_2);

#define VkglTestCase_005390_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005390_2 "s.invalid_implicit_conversions.mul_vec3_ivec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005390, VkglTestCase_005390_1, VkglTestCase_005390_2);

#define VkglTestCase_005391_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005391_2 ".invalid_implicit_conversions.mul_vec3_ivec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005391, VkglTestCase_005391_1, VkglTestCase_005391_2);

#define VkglTestCase_005392_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005392_2 "s.invalid_implicit_conversions.mul_vec3_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005392, VkglTestCase_005392_1, VkglTestCase_005392_2);

#define VkglTestCase_005393_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005393_2 ".invalid_implicit_conversions.mul_vec3_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005393, VkglTestCase_005393_1, VkglTestCase_005393_2);

#define VkglTestCase_005394_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005394_2 "s.invalid_implicit_conversions.mul_vec3_ivec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005394, VkglTestCase_005394_1, VkglTestCase_005394_2);

#define VkglTestCase_005395_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005395_2 ".invalid_implicit_conversions.mul_vec3_ivec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005395, VkglTestCase_005395_1, VkglTestCase_005395_2);

#define VkglTestCase_005396_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005396_2 "s.invalid_implicit_conversions.mul_vec3_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005396, VkglTestCase_005396_1, VkglTestCase_005396_2);

#define VkglTestCase_005397_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005397_2 ".invalid_implicit_conversions.mul_vec3_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005397, VkglTestCase_005397_1, VkglTestCase_005397_2);

#define VkglTestCase_005398_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005398_2 "ns.invalid_implicit_conversions.mul_vec4_int_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005398, VkglTestCase_005398_1, VkglTestCase_005398_2);

#define VkglTestCase_005399_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005399_2 "s.invalid_implicit_conversions.mul_vec4_int_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005399, VkglTestCase_005399_1, VkglTestCase_005399_2);

#define VkglTestCase_005400_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005400_2 "ons.invalid_implicit_conversions.mul_vec4_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005400, VkglTestCase_005400_1, VkglTestCase_005400_2);

#define VkglTestCase_005401_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005401_2 "ns.invalid_implicit_conversions.mul_vec4_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005401, VkglTestCase_005401_1, VkglTestCase_005401_2);

#define VkglTestCase_005402_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005402_2 "s.invalid_implicit_conversions.mul_vec4_ivec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005402, VkglTestCase_005402_1, VkglTestCase_005402_2);

#define VkglTestCase_005403_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005403_2 ".invalid_implicit_conversions.mul_vec4_ivec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005403, VkglTestCase_005403_1, VkglTestCase_005403_2);

#define VkglTestCase_005404_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005404_2 "s.invalid_implicit_conversions.mul_vec4_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005404, VkglTestCase_005404_1, VkglTestCase_005404_2);

#define VkglTestCase_005405_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005405_2 ".invalid_implicit_conversions.mul_vec4_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005405, VkglTestCase_005405_1, VkglTestCase_005405_2);

#define VkglTestCase_005406_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005406_2 "s.invalid_implicit_conversions.mul_vec4_ivec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005406, VkglTestCase_005406_1, VkglTestCase_005406_2);

#define VkglTestCase_005407_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005407_2 ".invalid_implicit_conversions.mul_vec4_ivec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005407, VkglTestCase_005407_1, VkglTestCase_005407_2);

#define VkglTestCase_005408_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005408_2 "s.invalid_implicit_conversions.mul_vec4_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005408, VkglTestCase_005408_1, VkglTestCase_005408_2);

#define VkglTestCase_005409_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005409_2 ".invalid_implicit_conversions.mul_vec4_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005409, VkglTestCase_005409_1, VkglTestCase_005409_2);

#define VkglTestCase_005410_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005410_2 "s.invalid_implicit_conversions.mul_vec4_ivec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005410, VkglTestCase_005410_1, VkglTestCase_005410_2);

#define VkglTestCase_005411_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005411_2 ".invalid_implicit_conversions.mul_vec4_ivec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005411, VkglTestCase_005411_1, VkglTestCase_005411_2);

#define VkglTestCase_005412_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005412_2 "s.invalid_implicit_conversions.mul_vec4_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005412, VkglTestCase_005412_1, VkglTestCase_005412_2);

#define VkglTestCase_005413_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005413_2 ".invalid_implicit_conversions.mul_vec4_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005413, VkglTestCase_005413_1, VkglTestCase_005413_2);

#define VkglTestCase_005414_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005414_2 "s.invalid_implicit_conversions.mul_float_uint_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005414, VkglTestCase_005414_1, VkglTestCase_005414_2);

#define VkglTestCase_005415_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005415_2 ".invalid_implicit_conversions.mul_float_uint_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005415, VkglTestCase_005415_1, VkglTestCase_005415_2);

#define VkglTestCase_005416_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005416_2 "s.invalid_implicit_conversions.mul_float_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005416, VkglTestCase_005416_1, VkglTestCase_005416_2);

#define VkglTestCase_005417_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005417_2 ".invalid_implicit_conversions.mul_float_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005417, VkglTestCase_005417_1, VkglTestCase_005417_2);

#define VkglTestCase_005418_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005418_2 ".invalid_implicit_conversions.mul_float_uvec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005418, VkglTestCase_005418_1, VkglTestCase_005418_2);

#define VkglTestCase_005419_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005419_2 "invalid_implicit_conversions.mul_float_uvec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005419, VkglTestCase_005419_1, VkglTestCase_005419_2);

#define VkglTestCase_005420_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005420_2 ".invalid_implicit_conversions.mul_float_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005420, VkglTestCase_005420_1, VkglTestCase_005420_2);

#define VkglTestCase_005421_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005421_2 "invalid_implicit_conversions.mul_float_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005421, VkglTestCase_005421_1, VkglTestCase_005421_2);

#define VkglTestCase_005422_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005422_2 ".invalid_implicit_conversions.mul_float_uvec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005422, VkglTestCase_005422_1, VkglTestCase_005422_2);

#define VkglTestCase_005423_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005423_2 "invalid_implicit_conversions.mul_float_uvec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005423, VkglTestCase_005423_1, VkglTestCase_005423_2);

#define VkglTestCase_005424_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005424_2 ".invalid_implicit_conversions.mul_float_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005424, VkglTestCase_005424_1, VkglTestCase_005424_2);

#define VkglTestCase_005425_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005425_2 "invalid_implicit_conversions.mul_float_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005425, VkglTestCase_005425_1, VkglTestCase_005425_2);

#define VkglTestCase_005426_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005426_2 ".invalid_implicit_conversions.mul_float_uvec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005426, VkglTestCase_005426_1, VkglTestCase_005426_2);

#define VkglTestCase_005427_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005427_2 "invalid_implicit_conversions.mul_float_uvec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005427, VkglTestCase_005427_1, VkglTestCase_005427_2);

#define VkglTestCase_005428_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005428_2 ".invalid_implicit_conversions.mul_float_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005428, VkglTestCase_005428_1, VkglTestCase_005428_2);

#define VkglTestCase_005429_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005429_2 "invalid_implicit_conversions.mul_float_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005429, VkglTestCase_005429_1, VkglTestCase_005429_2);

#define VkglTestCase_005430_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005430_2 "ns.invalid_implicit_conversions.mul_vec2_uint_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005430, VkglTestCase_005430_1, VkglTestCase_005430_2);

#define VkglTestCase_005431_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005431_2 "s.invalid_implicit_conversions.mul_vec2_uint_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005431, VkglTestCase_005431_1, VkglTestCase_005431_2);

#define VkglTestCase_005432_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005432_2 "ns.invalid_implicit_conversions.mul_vec2_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005432, VkglTestCase_005432_1, VkglTestCase_005432_2);

#define VkglTestCase_005433_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005433_2 "s.invalid_implicit_conversions.mul_vec2_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005433, VkglTestCase_005433_1, VkglTestCase_005433_2);

#define VkglTestCase_005434_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005434_2 "s.invalid_implicit_conversions.mul_vec2_uvec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005434, VkglTestCase_005434_1, VkglTestCase_005434_2);

#define VkglTestCase_005435_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005435_2 ".invalid_implicit_conversions.mul_vec2_uvec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005435, VkglTestCase_005435_1, VkglTestCase_005435_2);

#define VkglTestCase_005436_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005436_2 "s.invalid_implicit_conversions.mul_vec2_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005436, VkglTestCase_005436_1, VkglTestCase_005436_2);

#define VkglTestCase_005437_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005437_2 ".invalid_implicit_conversions.mul_vec2_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005437, VkglTestCase_005437_1, VkglTestCase_005437_2);

#define VkglTestCase_005438_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005438_2 "s.invalid_implicit_conversions.mul_vec2_uvec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005438, VkglTestCase_005438_1, VkglTestCase_005438_2);

#define VkglTestCase_005439_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005439_2 ".invalid_implicit_conversions.mul_vec2_uvec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005439, VkglTestCase_005439_1, VkglTestCase_005439_2);

#define VkglTestCase_005440_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005440_2 "s.invalid_implicit_conversions.mul_vec2_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005440, VkglTestCase_005440_1, VkglTestCase_005440_2);

#define VkglTestCase_005441_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005441_2 ".invalid_implicit_conversions.mul_vec2_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005441, VkglTestCase_005441_1, VkglTestCase_005441_2);

#define VkglTestCase_005442_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005442_2 "s.invalid_implicit_conversions.mul_vec2_uvec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005442, VkglTestCase_005442_1, VkglTestCase_005442_2);

#define VkglTestCase_005443_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005443_2 ".invalid_implicit_conversions.mul_vec2_uvec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005443, VkglTestCase_005443_1, VkglTestCase_005443_2);

#define VkglTestCase_005444_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005444_2 "s.invalid_implicit_conversions.mul_vec2_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005444, VkglTestCase_005444_1, VkglTestCase_005444_2);

#define VkglTestCase_005445_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005445_2 ".invalid_implicit_conversions.mul_vec2_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005445, VkglTestCase_005445_1, VkglTestCase_005445_2);

#define VkglTestCase_005446_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005446_2 "ns.invalid_implicit_conversions.mul_vec3_uint_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005446, VkglTestCase_005446_1, VkglTestCase_005446_2);

#define VkglTestCase_005447_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005447_2 "s.invalid_implicit_conversions.mul_vec3_uint_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005447, VkglTestCase_005447_1, VkglTestCase_005447_2);

#define VkglTestCase_005448_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005448_2 "ns.invalid_implicit_conversions.mul_vec3_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005448, VkglTestCase_005448_1, VkglTestCase_005448_2);

#define VkglTestCase_005449_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005449_2 "s.invalid_implicit_conversions.mul_vec3_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005449, VkglTestCase_005449_1, VkglTestCase_005449_2);

#define VkglTestCase_005450_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005450_2 "s.invalid_implicit_conversions.mul_vec3_uvec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005450, VkglTestCase_005450_1, VkglTestCase_005450_2);

#define VkglTestCase_005451_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005451_2 ".invalid_implicit_conversions.mul_vec3_uvec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005451, VkglTestCase_005451_1, VkglTestCase_005451_2);

#define VkglTestCase_005452_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005452_2 "s.invalid_implicit_conversions.mul_vec3_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005452, VkglTestCase_005452_1, VkglTestCase_005452_2);

#define VkglTestCase_005453_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005453_2 ".invalid_implicit_conversions.mul_vec3_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005453, VkglTestCase_005453_1, VkglTestCase_005453_2);

#define VkglTestCase_005454_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005454_2 "s.invalid_implicit_conversions.mul_vec3_uvec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005454, VkglTestCase_005454_1, VkglTestCase_005454_2);

#define VkglTestCase_005455_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005455_2 ".invalid_implicit_conversions.mul_vec3_uvec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005455, VkglTestCase_005455_1, VkglTestCase_005455_2);

#define VkglTestCase_005456_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005456_2 "s.invalid_implicit_conversions.mul_vec3_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005456, VkglTestCase_005456_1, VkglTestCase_005456_2);

#define VkglTestCase_005457_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005457_2 ".invalid_implicit_conversions.mul_vec3_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005457, VkglTestCase_005457_1, VkglTestCase_005457_2);

#define VkglTestCase_005458_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005458_2 "s.invalid_implicit_conversions.mul_vec3_uvec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005458, VkglTestCase_005458_1, VkglTestCase_005458_2);

#define VkglTestCase_005459_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005459_2 ".invalid_implicit_conversions.mul_vec3_uvec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005459, VkglTestCase_005459_1, VkglTestCase_005459_2);

#define VkglTestCase_005460_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005460_2 "s.invalid_implicit_conversions.mul_vec3_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005460, VkglTestCase_005460_1, VkglTestCase_005460_2);

#define VkglTestCase_005461_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005461_2 ".invalid_implicit_conversions.mul_vec3_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005461, VkglTestCase_005461_1, VkglTestCase_005461_2);

#define VkglTestCase_005462_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005462_2 "ns.invalid_implicit_conversions.mul_vec4_uint_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005462, VkglTestCase_005462_1, VkglTestCase_005462_2);

#define VkglTestCase_005463_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005463_2 "s.invalid_implicit_conversions.mul_vec4_uint_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005463, VkglTestCase_005463_1, VkglTestCase_005463_2);

#define VkglTestCase_005464_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005464_2 "ns.invalid_implicit_conversions.mul_vec4_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005464, VkglTestCase_005464_1, VkglTestCase_005464_2);

#define VkglTestCase_005465_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005465_2 "s.invalid_implicit_conversions.mul_vec4_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005465, VkglTestCase_005465_1, VkglTestCase_005465_2);

#define VkglTestCase_005466_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005466_2 "s.invalid_implicit_conversions.mul_vec4_uvec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005466, VkglTestCase_005466_1, VkglTestCase_005466_2);

#define VkglTestCase_005467_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005467_2 ".invalid_implicit_conversions.mul_vec4_uvec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005467, VkglTestCase_005467_1, VkglTestCase_005467_2);

#define VkglTestCase_005468_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005468_2 "s.invalid_implicit_conversions.mul_vec4_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005468, VkglTestCase_005468_1, VkglTestCase_005468_2);

#define VkglTestCase_005469_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005469_2 ".invalid_implicit_conversions.mul_vec4_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005469, VkglTestCase_005469_1, VkglTestCase_005469_2);

#define VkglTestCase_005470_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005470_2 "s.invalid_implicit_conversions.mul_vec4_uvec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005470, VkglTestCase_005470_1, VkglTestCase_005470_2);

#define VkglTestCase_005471_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005471_2 ".invalid_implicit_conversions.mul_vec4_uvec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005471, VkglTestCase_005471_1, VkglTestCase_005471_2);

#define VkglTestCase_005472_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005472_2 "s.invalid_implicit_conversions.mul_vec4_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005472, VkglTestCase_005472_1, VkglTestCase_005472_2);

#define VkglTestCase_005473_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005473_2 ".invalid_implicit_conversions.mul_vec4_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005473, VkglTestCase_005473_1, VkglTestCase_005473_2);

#define VkglTestCase_005474_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005474_2 "s.invalid_implicit_conversions.mul_vec4_uvec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005474, VkglTestCase_005474_1, VkglTestCase_005474_2);

#define VkglTestCase_005475_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005475_2 ".invalid_implicit_conversions.mul_vec4_uvec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005475, VkglTestCase_005475_1, VkglTestCase_005475_2);

#define VkglTestCase_005476_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005476_2 "s.invalid_implicit_conversions.mul_vec4_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005476, VkglTestCase_005476_1, VkglTestCase_005476_2);

#define VkglTestCase_005477_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005477_2 ".invalid_implicit_conversions.mul_vec4_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005477, VkglTestCase_005477_1, VkglTestCase_005477_2);

#define VkglTestCase_005478_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005478_2 "ons.invalid_implicit_conversions.mul_int_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005478, VkglTestCase_005478_1, VkglTestCase_005478_2);

#define VkglTestCase_005479_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005479_2 "ns.invalid_implicit_conversions.mul_int_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005479, VkglTestCase_005479_1, VkglTestCase_005479_2);

#define VkglTestCase_005480_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005480_2 "ns.invalid_implicit_conversions.mul_int_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005480, VkglTestCase_005480_1, VkglTestCase_005480_2);

#define VkglTestCase_005481_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005481_2 "s.invalid_implicit_conversions.mul_int_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005481, VkglTestCase_005481_1, VkglTestCase_005481_2);

#define VkglTestCase_005482_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005482_2 "ns.invalid_implicit_conversions.mul_int_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005482, VkglTestCase_005482_1, VkglTestCase_005482_2);

#define VkglTestCase_005483_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005483_2 "s.invalid_implicit_conversions.mul_int_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005483, VkglTestCase_005483_1, VkglTestCase_005483_2);

#define VkglTestCase_005484_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005484_2 "s.invalid_implicit_conversions.mul_int_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005484, VkglTestCase_005484_1, VkglTestCase_005484_2);

#define VkglTestCase_005485_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005485_2 ".invalid_implicit_conversions.mul_int_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005485, VkglTestCase_005485_1, VkglTestCase_005485_2);

#define VkglTestCase_005486_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005486_2 "ns.invalid_implicit_conversions.mul_int_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005486, VkglTestCase_005486_1, VkglTestCase_005486_2);

#define VkglTestCase_005487_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005487_2 "s.invalid_implicit_conversions.mul_int_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005487, VkglTestCase_005487_1, VkglTestCase_005487_2);

#define VkglTestCase_005488_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005488_2 "s.invalid_implicit_conversions.mul_int_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005488, VkglTestCase_005488_1, VkglTestCase_005488_2);

#define VkglTestCase_005489_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005489_2 ".invalid_implicit_conversions.mul_int_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005489, VkglTestCase_005489_1, VkglTestCase_005489_2);

#define VkglTestCase_005490_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005490_2 "ns.invalid_implicit_conversions.mul_int_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005490, VkglTestCase_005490_1, VkglTestCase_005490_2);

#define VkglTestCase_005491_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005491_2 "s.invalid_implicit_conversions.mul_int_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005491, VkglTestCase_005491_1, VkglTestCase_005491_2);

#define VkglTestCase_005492_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005492_2 "s.invalid_implicit_conversions.mul_int_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005492, VkglTestCase_005492_1, VkglTestCase_005492_2);

#define VkglTestCase_005493_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005493_2 ".invalid_implicit_conversions.mul_int_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005493, VkglTestCase_005493_1, VkglTestCase_005493_2);

#define VkglTestCase_005494_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005494_2 "s.invalid_implicit_conversions.mul_ivec2_uint_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005494, VkglTestCase_005494_1, VkglTestCase_005494_2);

#define VkglTestCase_005495_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005495_2 ".invalid_implicit_conversions.mul_ivec2_uint_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005495, VkglTestCase_005495_1, VkglTestCase_005495_2);

#define VkglTestCase_005496_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005496_2 "s.invalid_implicit_conversions.mul_ivec2_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005496, VkglTestCase_005496_1, VkglTestCase_005496_2);

#define VkglTestCase_005497_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005497_2 ".invalid_implicit_conversions.mul_ivec2_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005497, VkglTestCase_005497_1, VkglTestCase_005497_2);

#define VkglTestCase_005498_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005498_2 ".invalid_implicit_conversions.mul_ivec2_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005498, VkglTestCase_005498_1, VkglTestCase_005498_2);

#define VkglTestCase_005499_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005499_2 "invalid_implicit_conversions.mul_ivec2_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005499, VkglTestCase_005499_1, VkglTestCase_005499_2);

#define VkglTestCase_005500_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005500_2 ".invalid_implicit_conversions.mul_ivec2_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005500, VkglTestCase_005500_1, VkglTestCase_005500_2);

#define VkglTestCase_005501_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005501_2 "invalid_implicit_conversions.mul_ivec2_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005501, VkglTestCase_005501_1, VkglTestCase_005501_2);

#define VkglTestCase_005502_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005502_2 ".invalid_implicit_conversions.mul_ivec2_uvec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005502, VkglTestCase_005502_1, VkglTestCase_005502_2);

#define VkglTestCase_005503_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005503_2 "invalid_implicit_conversions.mul_ivec2_uvec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005503, VkglTestCase_005503_1, VkglTestCase_005503_2);

#define VkglTestCase_005504_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005504_2 ".invalid_implicit_conversions.mul_ivec2_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005504, VkglTestCase_005504_1, VkglTestCase_005504_2);

#define VkglTestCase_005505_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005505_2 "invalid_implicit_conversions.mul_ivec2_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005505, VkglTestCase_005505_1, VkglTestCase_005505_2);

#define VkglTestCase_005506_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005506_2 ".invalid_implicit_conversions.mul_ivec2_uvec4_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005506, VkglTestCase_005506_1, VkglTestCase_005506_2);

#define VkglTestCase_005507_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005507_2 "invalid_implicit_conversions.mul_ivec2_uvec4_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005507, VkglTestCase_005507_1, VkglTestCase_005507_2);

#define VkglTestCase_005508_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005508_2 ".invalid_implicit_conversions.mul_ivec2_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005508, VkglTestCase_005508_1, VkglTestCase_005508_2);

#define VkglTestCase_005509_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005509_2 "invalid_implicit_conversions.mul_ivec2_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005509, VkglTestCase_005509_1, VkglTestCase_005509_2);

#define VkglTestCase_005510_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005510_2 "s.invalid_implicit_conversions.mul_ivec3_uint_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005510, VkglTestCase_005510_1, VkglTestCase_005510_2);

#define VkglTestCase_005511_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005511_2 ".invalid_implicit_conversions.mul_ivec3_uint_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005511, VkglTestCase_005511_1, VkglTestCase_005511_2);

#define VkglTestCase_005512_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005512_2 "s.invalid_implicit_conversions.mul_ivec3_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005512, VkglTestCase_005512_1, VkglTestCase_005512_2);

#define VkglTestCase_005513_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005513_2 ".invalid_implicit_conversions.mul_ivec3_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005513, VkglTestCase_005513_1, VkglTestCase_005513_2);

#define VkglTestCase_005514_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005514_2 ".invalid_implicit_conversions.mul_ivec3_uvec2_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005514, VkglTestCase_005514_1, VkglTestCase_005514_2);

#define VkglTestCase_005515_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005515_2 "invalid_implicit_conversions.mul_ivec3_uvec2_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005515, VkglTestCase_005515_1, VkglTestCase_005515_2);

#define VkglTestCase_005516_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005516_2 ".invalid_implicit_conversions.mul_ivec3_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005516, VkglTestCase_005516_1, VkglTestCase_005516_2);

#define VkglTestCase_005517_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005517_2 "invalid_implicit_conversions.mul_ivec3_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005517, VkglTestCase_005517_1, VkglTestCase_005517_2);

#define VkglTestCase_005518_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005518_2 ".invalid_implicit_conversions.mul_ivec3_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005518, VkglTestCase_005518_1, VkglTestCase_005518_2);

#define VkglTestCase_005519_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005519_2 "invalid_implicit_conversions.mul_ivec3_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005519, VkglTestCase_005519_1, VkglTestCase_005519_2);

#define VkglTestCase_005520_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005520_2 ".invalid_implicit_conversions.mul_ivec3_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005520, VkglTestCase_005520_1, VkglTestCase_005520_2);

#define VkglTestCase_005521_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005521_2 "invalid_implicit_conversions.mul_ivec3_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005521, VkglTestCase_005521_1, VkglTestCase_005521_2);

#define VkglTestCase_005522_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005522_2 ".invalid_implicit_conversions.mul_ivec3_uvec4_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005522, VkglTestCase_005522_1, VkglTestCase_005522_2);

#define VkglTestCase_005523_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005523_2 "invalid_implicit_conversions.mul_ivec3_uvec4_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005523, VkglTestCase_005523_1, VkglTestCase_005523_2);

#define VkglTestCase_005524_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005524_2 ".invalid_implicit_conversions.mul_ivec3_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005524, VkglTestCase_005524_1, VkglTestCase_005524_2);

#define VkglTestCase_005525_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005525_2 "invalid_implicit_conversions.mul_ivec3_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005525, VkglTestCase_005525_1, VkglTestCase_005525_2);

#define VkglTestCase_005526_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005526_2 "s.invalid_implicit_conversions.mul_ivec4_uint_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005526, VkglTestCase_005526_1, VkglTestCase_005526_2);

#define VkglTestCase_005527_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005527_2 ".invalid_implicit_conversions.mul_ivec4_uint_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005527, VkglTestCase_005527_1, VkglTestCase_005527_2);

#define VkglTestCase_005528_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005528_2 "s.invalid_implicit_conversions.mul_ivec4_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005528, VkglTestCase_005528_1, VkglTestCase_005528_2);

#define VkglTestCase_005529_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005529_2 ".invalid_implicit_conversions.mul_ivec4_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005529, VkglTestCase_005529_1, VkglTestCase_005529_2);

#define VkglTestCase_005530_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005530_2 ".invalid_implicit_conversions.mul_ivec4_uvec2_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005530, VkglTestCase_005530_1, VkglTestCase_005530_2);

#define VkglTestCase_005531_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005531_2 "invalid_implicit_conversions.mul_ivec4_uvec2_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005531, VkglTestCase_005531_1, VkglTestCase_005531_2);

#define VkglTestCase_005532_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005532_2 ".invalid_implicit_conversions.mul_ivec4_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005532, VkglTestCase_005532_1, VkglTestCase_005532_2);

#define VkglTestCase_005533_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005533_2 "invalid_implicit_conversions.mul_ivec4_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005533, VkglTestCase_005533_1, VkglTestCase_005533_2);

#define VkglTestCase_005534_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005534_2 ".invalid_implicit_conversions.mul_ivec4_uvec3_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005534, VkglTestCase_005534_1, VkglTestCase_005534_2);

#define VkglTestCase_005535_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005535_2 "invalid_implicit_conversions.mul_ivec4_uvec3_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005535, VkglTestCase_005535_1, VkglTestCase_005535_2);

#define VkglTestCase_005536_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005536_2 ".invalid_implicit_conversions.mul_ivec4_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005536, VkglTestCase_005536_1, VkglTestCase_005536_2);

#define VkglTestCase_005537_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005537_2 "invalid_implicit_conversions.mul_ivec4_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005537, VkglTestCase_005537_1, VkglTestCase_005537_2);

#define VkglTestCase_005538_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005538_2 ".invalid_implicit_conversions.mul_ivec4_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005538, VkglTestCase_005538_1, VkglTestCase_005538_2);

#define VkglTestCase_005539_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005539_2 "invalid_implicit_conversions.mul_ivec4_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005539, VkglTestCase_005539_1, VkglTestCase_005539_2);

#define VkglTestCase_005540_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005540_2 ".invalid_implicit_conversions.mul_ivec4_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005540, VkglTestCase_005540_1, VkglTestCase_005540_2);

#define VkglTestCase_005541_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005541_2 "invalid_implicit_conversions.mul_ivec4_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005541, VkglTestCase_005541_1, VkglTestCase_005541_2);

#define VkglTestCase_005542_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005542_2 "s.invalid_implicit_conversions.sub_float_int_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005542, VkglTestCase_005542_1, VkglTestCase_005542_2);

#define VkglTestCase_005543_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005543_2 ".invalid_implicit_conversions.sub_float_int_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005543, VkglTestCase_005543_1, VkglTestCase_005543_2);

#define VkglTestCase_005544_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005544_2 "ns.invalid_implicit_conversions.sub_float_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005544, VkglTestCase_005544_1, VkglTestCase_005544_2);

#define VkglTestCase_005545_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005545_2 "s.invalid_implicit_conversions.sub_float_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005545, VkglTestCase_005545_1, VkglTestCase_005545_2);

#define VkglTestCase_005546_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005546_2 ".invalid_implicit_conversions.sub_float_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005546, VkglTestCase_005546_1, VkglTestCase_005546_2);

#define VkglTestCase_005547_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005547_2 "invalid_implicit_conversions.sub_float_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005547, VkglTestCase_005547_1, VkglTestCase_005547_2);

#define VkglTestCase_005548_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005548_2 ".invalid_implicit_conversions.sub_float_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005548, VkglTestCase_005548_1, VkglTestCase_005548_2);

#define VkglTestCase_005549_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005549_2 "invalid_implicit_conversions.sub_float_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005549, VkglTestCase_005549_1, VkglTestCase_005549_2);

#define VkglTestCase_005550_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005550_2 ".invalid_implicit_conversions.sub_float_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005550, VkglTestCase_005550_1, VkglTestCase_005550_2);

#define VkglTestCase_005551_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005551_2 "invalid_implicit_conversions.sub_float_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005551, VkglTestCase_005551_1, VkglTestCase_005551_2);

#define VkglTestCase_005552_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005552_2 ".invalid_implicit_conversions.sub_float_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005552, VkglTestCase_005552_1, VkglTestCase_005552_2);

#define VkglTestCase_005553_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005553_2 "invalid_implicit_conversions.sub_float_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005553, VkglTestCase_005553_1, VkglTestCase_005553_2);

#define VkglTestCase_005554_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005554_2 ".invalid_implicit_conversions.sub_float_ivec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005554, VkglTestCase_005554_1, VkglTestCase_005554_2);

#define VkglTestCase_005555_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005555_2 "invalid_implicit_conversions.sub_float_ivec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005555, VkglTestCase_005555_1, VkglTestCase_005555_2);

#define VkglTestCase_005556_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005556_2 ".invalid_implicit_conversions.sub_float_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005556, VkglTestCase_005556_1, VkglTestCase_005556_2);

#define VkglTestCase_005557_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005557_2 "invalid_implicit_conversions.sub_float_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005557, VkglTestCase_005557_1, VkglTestCase_005557_2);

#define VkglTestCase_005558_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005558_2 "ns.invalid_implicit_conversions.sub_vec2_int_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005558, VkglTestCase_005558_1, VkglTestCase_005558_2);

#define VkglTestCase_005559_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005559_2 "s.invalid_implicit_conversions.sub_vec2_int_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005559, VkglTestCase_005559_1, VkglTestCase_005559_2);

#define VkglTestCase_005560_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005560_2 "ons.invalid_implicit_conversions.sub_vec2_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005560, VkglTestCase_005560_1, VkglTestCase_005560_2);

#define VkglTestCase_005561_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005561_2 "ns.invalid_implicit_conversions.sub_vec2_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005561, VkglTestCase_005561_1, VkglTestCase_005561_2);

#define VkglTestCase_005562_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005562_2 "s.invalid_implicit_conversions.sub_vec2_ivec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005562, VkglTestCase_005562_1, VkglTestCase_005562_2);

#define VkglTestCase_005563_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005563_2 ".invalid_implicit_conversions.sub_vec2_ivec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005563, VkglTestCase_005563_1, VkglTestCase_005563_2);

#define VkglTestCase_005564_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005564_2 "s.invalid_implicit_conversions.sub_vec2_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005564, VkglTestCase_005564_1, VkglTestCase_005564_2);

#define VkglTestCase_005565_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005565_2 ".invalid_implicit_conversions.sub_vec2_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005565, VkglTestCase_005565_1, VkglTestCase_005565_2);

#define VkglTestCase_005566_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005566_2 "s.invalid_implicit_conversions.sub_vec2_ivec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005566, VkglTestCase_005566_1, VkglTestCase_005566_2);

#define VkglTestCase_005567_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005567_2 ".invalid_implicit_conversions.sub_vec2_ivec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005567, VkglTestCase_005567_1, VkglTestCase_005567_2);

#define VkglTestCase_005568_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005568_2 "s.invalid_implicit_conversions.sub_vec2_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005568, VkglTestCase_005568_1, VkglTestCase_005568_2);

#define VkglTestCase_005569_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005569_2 ".invalid_implicit_conversions.sub_vec2_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005569, VkglTestCase_005569_1, VkglTestCase_005569_2);

#define VkglTestCase_005570_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005570_2 "s.invalid_implicit_conversions.sub_vec2_ivec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005570, VkglTestCase_005570_1, VkglTestCase_005570_2);

#define VkglTestCase_005571_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005571_2 ".invalid_implicit_conversions.sub_vec2_ivec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005571, VkglTestCase_005571_1, VkglTestCase_005571_2);

#define VkglTestCase_005572_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005572_2 "s.invalid_implicit_conversions.sub_vec2_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005572, VkglTestCase_005572_1, VkglTestCase_005572_2);

#define VkglTestCase_005573_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005573_2 ".invalid_implicit_conversions.sub_vec2_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005573, VkglTestCase_005573_1, VkglTestCase_005573_2);

#define VkglTestCase_005574_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005574_2 "ns.invalid_implicit_conversions.sub_vec3_int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005574, VkglTestCase_005574_1, VkglTestCase_005574_2);

#define VkglTestCase_005575_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005575_2 "s.invalid_implicit_conversions.sub_vec3_int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005575, VkglTestCase_005575_1, VkglTestCase_005575_2);

#define VkglTestCase_005576_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005576_2 "ons.invalid_implicit_conversions.sub_vec3_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005576, VkglTestCase_005576_1, VkglTestCase_005576_2);

#define VkglTestCase_005577_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005577_2 "ns.invalid_implicit_conversions.sub_vec3_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005577, VkglTestCase_005577_1, VkglTestCase_005577_2);

#define VkglTestCase_005578_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005578_2 "s.invalid_implicit_conversions.sub_vec3_ivec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005578, VkglTestCase_005578_1, VkglTestCase_005578_2);

#define VkglTestCase_005579_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005579_2 ".invalid_implicit_conversions.sub_vec3_ivec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005579, VkglTestCase_005579_1, VkglTestCase_005579_2);

#define VkglTestCase_005580_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005580_2 "s.invalid_implicit_conversions.sub_vec3_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005580, VkglTestCase_005580_1, VkglTestCase_005580_2);

#define VkglTestCase_005581_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005581_2 ".invalid_implicit_conversions.sub_vec3_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005581, VkglTestCase_005581_1, VkglTestCase_005581_2);

#define VkglTestCase_005582_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005582_2 "s.invalid_implicit_conversions.sub_vec3_ivec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005582, VkglTestCase_005582_1, VkglTestCase_005582_2);

#define VkglTestCase_005583_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005583_2 ".invalid_implicit_conversions.sub_vec3_ivec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005583, VkglTestCase_005583_1, VkglTestCase_005583_2);

#define VkglTestCase_005584_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005584_2 "s.invalid_implicit_conversions.sub_vec3_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005584, VkglTestCase_005584_1, VkglTestCase_005584_2);

#define VkglTestCase_005585_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005585_2 ".invalid_implicit_conversions.sub_vec3_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005585, VkglTestCase_005585_1, VkglTestCase_005585_2);

#define VkglTestCase_005586_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005586_2 "s.invalid_implicit_conversions.sub_vec3_ivec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005586, VkglTestCase_005586_1, VkglTestCase_005586_2);

#define VkglTestCase_005587_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005587_2 ".invalid_implicit_conversions.sub_vec3_ivec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005587, VkglTestCase_005587_1, VkglTestCase_005587_2);

#define VkglTestCase_005588_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005588_2 "s.invalid_implicit_conversions.sub_vec3_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005588, VkglTestCase_005588_1, VkglTestCase_005588_2);

#define VkglTestCase_005589_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005589_2 ".invalid_implicit_conversions.sub_vec3_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005589, VkglTestCase_005589_1, VkglTestCase_005589_2);

#define VkglTestCase_005590_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005590_2 "ns.invalid_implicit_conversions.sub_vec4_int_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005590, VkglTestCase_005590_1, VkglTestCase_005590_2);

#define VkglTestCase_005591_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005591_2 "s.invalid_implicit_conversions.sub_vec4_int_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005591, VkglTestCase_005591_1, VkglTestCase_005591_2);

#define VkglTestCase_005592_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005592_2 "ons.invalid_implicit_conversions.sub_vec4_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005592, VkglTestCase_005592_1, VkglTestCase_005592_2);

#define VkglTestCase_005593_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005593_2 "ns.invalid_implicit_conversions.sub_vec4_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005593, VkglTestCase_005593_1, VkglTestCase_005593_2);

#define VkglTestCase_005594_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005594_2 "s.invalid_implicit_conversions.sub_vec4_ivec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005594, VkglTestCase_005594_1, VkglTestCase_005594_2);

#define VkglTestCase_005595_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005595_2 ".invalid_implicit_conversions.sub_vec4_ivec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005595, VkglTestCase_005595_1, VkglTestCase_005595_2);

#define VkglTestCase_005596_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005596_2 "s.invalid_implicit_conversions.sub_vec4_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005596, VkglTestCase_005596_1, VkglTestCase_005596_2);

#define VkglTestCase_005597_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005597_2 ".invalid_implicit_conversions.sub_vec4_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005597, VkglTestCase_005597_1, VkglTestCase_005597_2);

#define VkglTestCase_005598_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005598_2 "s.invalid_implicit_conversions.sub_vec4_ivec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005598, VkglTestCase_005598_1, VkglTestCase_005598_2);

#define VkglTestCase_005599_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005599_2 ".invalid_implicit_conversions.sub_vec4_ivec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005599, VkglTestCase_005599_1, VkglTestCase_005599_2);

#define VkglTestCase_005600_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005600_2 "s.invalid_implicit_conversions.sub_vec4_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005600, VkglTestCase_005600_1, VkglTestCase_005600_2);

#define VkglTestCase_005601_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005601_2 ".invalid_implicit_conversions.sub_vec4_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005601, VkglTestCase_005601_1, VkglTestCase_005601_2);

#define VkglTestCase_005602_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005602_2 "s.invalid_implicit_conversions.sub_vec4_ivec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005602, VkglTestCase_005602_1, VkglTestCase_005602_2);

#define VkglTestCase_005603_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005603_2 ".invalid_implicit_conversions.sub_vec4_ivec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005603, VkglTestCase_005603_1, VkglTestCase_005603_2);

#define VkglTestCase_005604_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005604_2 "s.invalid_implicit_conversions.sub_vec4_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005604, VkglTestCase_005604_1, VkglTestCase_005604_2);

#define VkglTestCase_005605_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005605_2 ".invalid_implicit_conversions.sub_vec4_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005605, VkglTestCase_005605_1, VkglTestCase_005605_2);

#define VkglTestCase_005606_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005606_2 "s.invalid_implicit_conversions.sub_float_uint_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005606, VkglTestCase_005606_1, VkglTestCase_005606_2);

#define VkglTestCase_005607_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005607_2 ".invalid_implicit_conversions.sub_float_uint_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005607, VkglTestCase_005607_1, VkglTestCase_005607_2);

#define VkglTestCase_005608_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005608_2 "s.invalid_implicit_conversions.sub_float_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005608, VkglTestCase_005608_1, VkglTestCase_005608_2);

#define VkglTestCase_005609_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005609_2 ".invalid_implicit_conversions.sub_float_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005609, VkglTestCase_005609_1, VkglTestCase_005609_2);

#define VkglTestCase_005610_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005610_2 ".invalid_implicit_conversions.sub_float_uvec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005610, VkglTestCase_005610_1, VkglTestCase_005610_2);

#define VkglTestCase_005611_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005611_2 "invalid_implicit_conversions.sub_float_uvec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005611, VkglTestCase_005611_1, VkglTestCase_005611_2);

#define VkglTestCase_005612_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005612_2 ".invalid_implicit_conversions.sub_float_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005612, VkglTestCase_005612_1, VkglTestCase_005612_2);

#define VkglTestCase_005613_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005613_2 "invalid_implicit_conversions.sub_float_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005613, VkglTestCase_005613_1, VkglTestCase_005613_2);

#define VkglTestCase_005614_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005614_2 ".invalid_implicit_conversions.sub_float_uvec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005614, VkglTestCase_005614_1, VkglTestCase_005614_2);

#define VkglTestCase_005615_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005615_2 "invalid_implicit_conversions.sub_float_uvec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005615, VkglTestCase_005615_1, VkglTestCase_005615_2);

#define VkglTestCase_005616_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005616_2 ".invalid_implicit_conversions.sub_float_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005616, VkglTestCase_005616_1, VkglTestCase_005616_2);

#define VkglTestCase_005617_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005617_2 "invalid_implicit_conversions.sub_float_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005617, VkglTestCase_005617_1, VkglTestCase_005617_2);

#define VkglTestCase_005618_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005618_2 ".invalid_implicit_conversions.sub_float_uvec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005618, VkglTestCase_005618_1, VkglTestCase_005618_2);

#define VkglTestCase_005619_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005619_2 "invalid_implicit_conversions.sub_float_uvec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005619, VkglTestCase_005619_1, VkglTestCase_005619_2);

#define VkglTestCase_005620_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005620_2 ".invalid_implicit_conversions.sub_float_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005620, VkglTestCase_005620_1, VkglTestCase_005620_2);

#define VkglTestCase_005621_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005621_2 "invalid_implicit_conversions.sub_float_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005621, VkglTestCase_005621_1, VkglTestCase_005621_2);

#define VkglTestCase_005622_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005622_2 "ns.invalid_implicit_conversions.sub_vec2_uint_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005622, VkglTestCase_005622_1, VkglTestCase_005622_2);

#define VkglTestCase_005623_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005623_2 "s.invalid_implicit_conversions.sub_vec2_uint_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005623, VkglTestCase_005623_1, VkglTestCase_005623_2);

#define VkglTestCase_005624_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005624_2 "ns.invalid_implicit_conversions.sub_vec2_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005624, VkglTestCase_005624_1, VkglTestCase_005624_2);

#define VkglTestCase_005625_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005625_2 "s.invalid_implicit_conversions.sub_vec2_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005625, VkglTestCase_005625_1, VkglTestCase_005625_2);

#define VkglTestCase_005626_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005626_2 "s.invalid_implicit_conversions.sub_vec2_uvec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005626, VkglTestCase_005626_1, VkglTestCase_005626_2);

#define VkglTestCase_005627_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005627_2 ".invalid_implicit_conversions.sub_vec2_uvec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005627, VkglTestCase_005627_1, VkglTestCase_005627_2);

#define VkglTestCase_005628_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005628_2 "s.invalid_implicit_conversions.sub_vec2_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005628, VkglTestCase_005628_1, VkglTestCase_005628_2);

#define VkglTestCase_005629_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005629_2 ".invalid_implicit_conversions.sub_vec2_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005629, VkglTestCase_005629_1, VkglTestCase_005629_2);

#define VkglTestCase_005630_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005630_2 "s.invalid_implicit_conversions.sub_vec2_uvec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005630, VkglTestCase_005630_1, VkglTestCase_005630_2);

#define VkglTestCase_005631_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005631_2 ".invalid_implicit_conversions.sub_vec2_uvec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005631, VkglTestCase_005631_1, VkglTestCase_005631_2);

#define VkglTestCase_005632_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005632_2 "s.invalid_implicit_conversions.sub_vec2_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005632, VkglTestCase_005632_1, VkglTestCase_005632_2);

#define VkglTestCase_005633_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005633_2 ".invalid_implicit_conversions.sub_vec2_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005633, VkglTestCase_005633_1, VkglTestCase_005633_2);

#define VkglTestCase_005634_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005634_2 "s.invalid_implicit_conversions.sub_vec2_uvec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005634, VkglTestCase_005634_1, VkglTestCase_005634_2);

#define VkglTestCase_005635_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005635_2 ".invalid_implicit_conversions.sub_vec2_uvec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005635, VkglTestCase_005635_1, VkglTestCase_005635_2);

#define VkglTestCase_005636_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005636_2 "s.invalid_implicit_conversions.sub_vec2_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005636, VkglTestCase_005636_1, VkglTestCase_005636_2);

#define VkglTestCase_005637_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005637_2 ".invalid_implicit_conversions.sub_vec2_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005637, VkglTestCase_005637_1, VkglTestCase_005637_2);

#define VkglTestCase_005638_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005638_2 "ns.invalid_implicit_conversions.sub_vec3_uint_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005638, VkglTestCase_005638_1, VkglTestCase_005638_2);

#define VkglTestCase_005639_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005639_2 "s.invalid_implicit_conversions.sub_vec3_uint_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005639, VkglTestCase_005639_1, VkglTestCase_005639_2);

#define VkglTestCase_005640_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005640_2 "ns.invalid_implicit_conversions.sub_vec3_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005640, VkglTestCase_005640_1, VkglTestCase_005640_2);

#define VkglTestCase_005641_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005641_2 "s.invalid_implicit_conversions.sub_vec3_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005641, VkglTestCase_005641_1, VkglTestCase_005641_2);

#define VkglTestCase_005642_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005642_2 "s.invalid_implicit_conversions.sub_vec3_uvec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005642, VkglTestCase_005642_1, VkglTestCase_005642_2);

#define VkglTestCase_005643_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005643_2 ".invalid_implicit_conversions.sub_vec3_uvec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005643, VkglTestCase_005643_1, VkglTestCase_005643_2);

#define VkglTestCase_005644_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005644_2 "s.invalid_implicit_conversions.sub_vec3_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005644, VkglTestCase_005644_1, VkglTestCase_005644_2);

#define VkglTestCase_005645_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005645_2 ".invalid_implicit_conversions.sub_vec3_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005645, VkglTestCase_005645_1, VkglTestCase_005645_2);

#define VkglTestCase_005646_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005646_2 "s.invalid_implicit_conversions.sub_vec3_uvec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005646, VkglTestCase_005646_1, VkglTestCase_005646_2);

#define VkglTestCase_005647_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005647_2 ".invalid_implicit_conversions.sub_vec3_uvec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005647, VkglTestCase_005647_1, VkglTestCase_005647_2);

#define VkglTestCase_005648_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005648_2 "s.invalid_implicit_conversions.sub_vec3_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005648, VkglTestCase_005648_1, VkglTestCase_005648_2);

#define VkglTestCase_005649_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005649_2 ".invalid_implicit_conversions.sub_vec3_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005649, VkglTestCase_005649_1, VkglTestCase_005649_2);

#define VkglTestCase_005650_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005650_2 "s.invalid_implicit_conversions.sub_vec3_uvec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005650, VkglTestCase_005650_1, VkglTestCase_005650_2);

#define VkglTestCase_005651_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005651_2 ".invalid_implicit_conversions.sub_vec3_uvec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005651, VkglTestCase_005651_1, VkglTestCase_005651_2);

#define VkglTestCase_005652_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005652_2 "s.invalid_implicit_conversions.sub_vec3_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005652, VkglTestCase_005652_1, VkglTestCase_005652_2);

#define VkglTestCase_005653_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005653_2 ".invalid_implicit_conversions.sub_vec3_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005653, VkglTestCase_005653_1, VkglTestCase_005653_2);

#define VkglTestCase_005654_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005654_2 "ns.invalid_implicit_conversions.sub_vec4_uint_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005654, VkglTestCase_005654_1, VkglTestCase_005654_2);

#define VkglTestCase_005655_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005655_2 "s.invalid_implicit_conversions.sub_vec4_uint_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005655, VkglTestCase_005655_1, VkglTestCase_005655_2);

#define VkglTestCase_005656_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005656_2 "ns.invalid_implicit_conversions.sub_vec4_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005656, VkglTestCase_005656_1, VkglTestCase_005656_2);

#define VkglTestCase_005657_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005657_2 "s.invalid_implicit_conversions.sub_vec4_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005657, VkglTestCase_005657_1, VkglTestCase_005657_2);

#define VkglTestCase_005658_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005658_2 "s.invalid_implicit_conversions.sub_vec4_uvec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005658, VkglTestCase_005658_1, VkglTestCase_005658_2);

#define VkglTestCase_005659_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005659_2 ".invalid_implicit_conversions.sub_vec4_uvec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005659, VkglTestCase_005659_1, VkglTestCase_005659_2);

#define VkglTestCase_005660_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005660_2 "s.invalid_implicit_conversions.sub_vec4_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005660, VkglTestCase_005660_1, VkglTestCase_005660_2);

#define VkglTestCase_005661_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005661_2 ".invalid_implicit_conversions.sub_vec4_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005661, VkglTestCase_005661_1, VkglTestCase_005661_2);

#define VkglTestCase_005662_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005662_2 "s.invalid_implicit_conversions.sub_vec4_uvec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005662, VkglTestCase_005662_1, VkglTestCase_005662_2);

#define VkglTestCase_005663_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005663_2 ".invalid_implicit_conversions.sub_vec4_uvec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005663, VkglTestCase_005663_1, VkglTestCase_005663_2);

#define VkglTestCase_005664_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005664_2 "s.invalid_implicit_conversions.sub_vec4_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005664, VkglTestCase_005664_1, VkglTestCase_005664_2);

#define VkglTestCase_005665_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005665_2 ".invalid_implicit_conversions.sub_vec4_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005665, VkglTestCase_005665_1, VkglTestCase_005665_2);

#define VkglTestCase_005666_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005666_2 "s.invalid_implicit_conversions.sub_vec4_uvec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005666, VkglTestCase_005666_1, VkglTestCase_005666_2);

#define VkglTestCase_005667_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005667_2 ".invalid_implicit_conversions.sub_vec4_uvec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005667, VkglTestCase_005667_1, VkglTestCase_005667_2);

#define VkglTestCase_005668_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005668_2 "s.invalid_implicit_conversions.sub_vec4_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005668, VkglTestCase_005668_1, VkglTestCase_005668_2);

#define VkglTestCase_005669_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005669_2 ".invalid_implicit_conversions.sub_vec4_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005669, VkglTestCase_005669_1, VkglTestCase_005669_2);

#define VkglTestCase_005670_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005670_2 "ons.invalid_implicit_conversions.sub_int_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005670, VkglTestCase_005670_1, VkglTestCase_005670_2);

#define VkglTestCase_005671_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005671_2 "ns.invalid_implicit_conversions.sub_int_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005671, VkglTestCase_005671_1, VkglTestCase_005671_2);

#define VkglTestCase_005672_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005672_2 "ns.invalid_implicit_conversions.sub_int_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005672, VkglTestCase_005672_1, VkglTestCase_005672_2);

#define VkglTestCase_005673_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005673_2 "s.invalid_implicit_conversions.sub_int_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005673, VkglTestCase_005673_1, VkglTestCase_005673_2);

#define VkglTestCase_005674_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005674_2 "ns.invalid_implicit_conversions.sub_int_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005674, VkglTestCase_005674_1, VkglTestCase_005674_2);

#define VkglTestCase_005675_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005675_2 "s.invalid_implicit_conversions.sub_int_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005675, VkglTestCase_005675_1, VkglTestCase_005675_2);

#define VkglTestCase_005676_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005676_2 "s.invalid_implicit_conversions.sub_int_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005676, VkglTestCase_005676_1, VkglTestCase_005676_2);

#define VkglTestCase_005677_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005677_2 ".invalid_implicit_conversions.sub_int_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005677, VkglTestCase_005677_1, VkglTestCase_005677_2);

#define VkglTestCase_005678_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005678_2 "ns.invalid_implicit_conversions.sub_int_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005678, VkglTestCase_005678_1, VkglTestCase_005678_2);

#define VkglTestCase_005679_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005679_2 "s.invalid_implicit_conversions.sub_int_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005679, VkglTestCase_005679_1, VkglTestCase_005679_2);

#define VkglTestCase_005680_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005680_2 "s.invalid_implicit_conversions.sub_int_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005680, VkglTestCase_005680_1, VkglTestCase_005680_2);

#define VkglTestCase_005681_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005681_2 ".invalid_implicit_conversions.sub_int_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005681, VkglTestCase_005681_1, VkglTestCase_005681_2);

#define VkglTestCase_005682_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005682_2 "ns.invalid_implicit_conversions.sub_int_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005682, VkglTestCase_005682_1, VkglTestCase_005682_2);

#define VkglTestCase_005683_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005683_2 "s.invalid_implicit_conversions.sub_int_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005683, VkglTestCase_005683_1, VkglTestCase_005683_2);

#define VkglTestCase_005684_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005684_2 "s.invalid_implicit_conversions.sub_int_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005684, VkglTestCase_005684_1, VkglTestCase_005684_2);

#define VkglTestCase_005685_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005685_2 ".invalid_implicit_conversions.sub_int_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005685, VkglTestCase_005685_1, VkglTestCase_005685_2);

#define VkglTestCase_005686_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005686_2 "s.invalid_implicit_conversions.sub_ivec2_uint_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005686, VkglTestCase_005686_1, VkglTestCase_005686_2);

#define VkglTestCase_005687_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005687_2 ".invalid_implicit_conversions.sub_ivec2_uint_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005687, VkglTestCase_005687_1, VkglTestCase_005687_2);

#define VkglTestCase_005688_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005688_2 "s.invalid_implicit_conversions.sub_ivec2_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005688, VkglTestCase_005688_1, VkglTestCase_005688_2);

#define VkglTestCase_005689_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005689_2 ".invalid_implicit_conversions.sub_ivec2_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005689, VkglTestCase_005689_1, VkglTestCase_005689_2);

#define VkglTestCase_005690_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005690_2 ".invalid_implicit_conversions.sub_ivec2_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005690, VkglTestCase_005690_1, VkglTestCase_005690_2);

#define VkglTestCase_005691_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005691_2 "invalid_implicit_conversions.sub_ivec2_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005691, VkglTestCase_005691_1, VkglTestCase_005691_2);

#define VkglTestCase_005692_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005692_2 ".invalid_implicit_conversions.sub_ivec2_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005692, VkglTestCase_005692_1, VkglTestCase_005692_2);

#define VkglTestCase_005693_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005693_2 "invalid_implicit_conversions.sub_ivec2_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005693, VkglTestCase_005693_1, VkglTestCase_005693_2);

#define VkglTestCase_005694_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005694_2 ".invalid_implicit_conversions.sub_ivec2_uvec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005694, VkglTestCase_005694_1, VkglTestCase_005694_2);

#define VkglTestCase_005695_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005695_2 "invalid_implicit_conversions.sub_ivec2_uvec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005695, VkglTestCase_005695_1, VkglTestCase_005695_2);

#define VkglTestCase_005696_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005696_2 ".invalid_implicit_conversions.sub_ivec2_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005696, VkglTestCase_005696_1, VkglTestCase_005696_2);

#define VkglTestCase_005697_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005697_2 "invalid_implicit_conversions.sub_ivec2_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005697, VkglTestCase_005697_1, VkglTestCase_005697_2);

#define VkglTestCase_005698_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005698_2 ".invalid_implicit_conversions.sub_ivec2_uvec4_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005698, VkglTestCase_005698_1, VkglTestCase_005698_2);

#define VkglTestCase_005699_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005699_2 "invalid_implicit_conversions.sub_ivec2_uvec4_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005699, VkglTestCase_005699_1, VkglTestCase_005699_2);

#define VkglTestCase_005700_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005700_2 ".invalid_implicit_conversions.sub_ivec2_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005700, VkglTestCase_005700_1, VkglTestCase_005700_2);

#define VkglTestCase_005701_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005701_2 "invalid_implicit_conversions.sub_ivec2_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005701, VkglTestCase_005701_1, VkglTestCase_005701_2);

#define VkglTestCase_005702_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005702_2 "s.invalid_implicit_conversions.sub_ivec3_uint_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005702, VkglTestCase_005702_1, VkglTestCase_005702_2);

#define VkglTestCase_005703_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005703_2 ".invalid_implicit_conversions.sub_ivec3_uint_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005703, VkglTestCase_005703_1, VkglTestCase_005703_2);

#define VkglTestCase_005704_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005704_2 "s.invalid_implicit_conversions.sub_ivec3_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005704, VkglTestCase_005704_1, VkglTestCase_005704_2);

#define VkglTestCase_005705_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005705_2 ".invalid_implicit_conversions.sub_ivec3_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005705, VkglTestCase_005705_1, VkglTestCase_005705_2);

#define VkglTestCase_005706_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005706_2 ".invalid_implicit_conversions.sub_ivec3_uvec2_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005706, VkglTestCase_005706_1, VkglTestCase_005706_2);

#define VkglTestCase_005707_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005707_2 "invalid_implicit_conversions.sub_ivec3_uvec2_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005707, VkglTestCase_005707_1, VkglTestCase_005707_2);

#define VkglTestCase_005708_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005708_2 ".invalid_implicit_conversions.sub_ivec3_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005708, VkglTestCase_005708_1, VkglTestCase_005708_2);

#define VkglTestCase_005709_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005709_2 "invalid_implicit_conversions.sub_ivec3_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005709, VkglTestCase_005709_1, VkglTestCase_005709_2);

#define VkglTestCase_005710_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005710_2 ".invalid_implicit_conversions.sub_ivec3_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005710, VkglTestCase_005710_1, VkglTestCase_005710_2);

#define VkglTestCase_005711_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005711_2 "invalid_implicit_conversions.sub_ivec3_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005711, VkglTestCase_005711_1, VkglTestCase_005711_2);

#define VkglTestCase_005712_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005712_2 ".invalid_implicit_conversions.sub_ivec3_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005712, VkglTestCase_005712_1, VkglTestCase_005712_2);

#define VkglTestCase_005713_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005713_2 "invalid_implicit_conversions.sub_ivec3_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005713, VkglTestCase_005713_1, VkglTestCase_005713_2);

#define VkglTestCase_005714_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005714_2 ".invalid_implicit_conversions.sub_ivec3_uvec4_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005714, VkglTestCase_005714_1, VkglTestCase_005714_2);

#define VkglTestCase_005715_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005715_2 "invalid_implicit_conversions.sub_ivec3_uvec4_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005715, VkglTestCase_005715_1, VkglTestCase_005715_2);

#define VkglTestCase_005716_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005716_2 ".invalid_implicit_conversions.sub_ivec3_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005716, VkglTestCase_005716_1, VkglTestCase_005716_2);

#define VkglTestCase_005717_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005717_2 "invalid_implicit_conversions.sub_ivec3_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005717, VkglTestCase_005717_1, VkglTestCase_005717_2);

#define VkglTestCase_005718_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005718_2 "s.invalid_implicit_conversions.sub_ivec4_uint_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005718, VkglTestCase_005718_1, VkglTestCase_005718_2);

#define VkglTestCase_005719_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005719_2 ".invalid_implicit_conversions.sub_ivec4_uint_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005719, VkglTestCase_005719_1, VkglTestCase_005719_2);

#define VkglTestCase_005720_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005720_2 "s.invalid_implicit_conversions.sub_ivec4_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005720, VkglTestCase_005720_1, VkglTestCase_005720_2);

#define VkglTestCase_005721_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005721_2 ".invalid_implicit_conversions.sub_ivec4_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005721, VkglTestCase_005721_1, VkglTestCase_005721_2);

#define VkglTestCase_005722_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005722_2 ".invalid_implicit_conversions.sub_ivec4_uvec2_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005722, VkglTestCase_005722_1, VkglTestCase_005722_2);

#define VkglTestCase_005723_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005723_2 "invalid_implicit_conversions.sub_ivec4_uvec2_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005723, VkglTestCase_005723_1, VkglTestCase_005723_2);

#define VkglTestCase_005724_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005724_2 ".invalid_implicit_conversions.sub_ivec4_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005724, VkglTestCase_005724_1, VkglTestCase_005724_2);

#define VkglTestCase_005725_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005725_2 "invalid_implicit_conversions.sub_ivec4_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005725, VkglTestCase_005725_1, VkglTestCase_005725_2);

#define VkglTestCase_005726_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005726_2 ".invalid_implicit_conversions.sub_ivec4_uvec3_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005726, VkglTestCase_005726_1, VkglTestCase_005726_2);

#define VkglTestCase_005727_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005727_2 "invalid_implicit_conversions.sub_ivec4_uvec3_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005727, VkglTestCase_005727_1, VkglTestCase_005727_2);

#define VkglTestCase_005728_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005728_2 ".invalid_implicit_conversions.sub_ivec4_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005728, VkglTestCase_005728_1, VkglTestCase_005728_2);

#define VkglTestCase_005729_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005729_2 "invalid_implicit_conversions.sub_ivec4_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005729, VkglTestCase_005729_1, VkglTestCase_005729_2);

#define VkglTestCase_005730_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005730_2 ".invalid_implicit_conversions.sub_ivec4_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005730, VkglTestCase_005730_1, VkglTestCase_005730_2);

#define VkglTestCase_005731_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005731_2 "invalid_implicit_conversions.sub_ivec4_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005731, VkglTestCase_005731_1, VkglTestCase_005731_2);

#define VkglTestCase_005732_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005732_2 ".invalid_implicit_conversions.sub_ivec4_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005732, VkglTestCase_005732_1, VkglTestCase_005732_2);

#define VkglTestCase_005733_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005733_2 "invalid_implicit_conversions.sub_ivec4_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005733, VkglTestCase_005733_1, VkglTestCase_005733_2);

#define VkglTestCase_005734_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005734_2 "s.invalid_implicit_conversions.div_float_int_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005734, VkglTestCase_005734_1, VkglTestCase_005734_2);

#define VkglTestCase_005735_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005735_2 ".invalid_implicit_conversions.div_float_int_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005735, VkglTestCase_005735_1, VkglTestCase_005735_2);

#define VkglTestCase_005736_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005736_2 "ns.invalid_implicit_conversions.div_float_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005736, VkglTestCase_005736_1, VkglTestCase_005736_2);

#define VkglTestCase_005737_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005737_2 "s.invalid_implicit_conversions.div_float_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005737, VkglTestCase_005737_1, VkglTestCase_005737_2);

#define VkglTestCase_005738_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005738_2 ".invalid_implicit_conversions.div_float_ivec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005738, VkglTestCase_005738_1, VkglTestCase_005738_2);

#define VkglTestCase_005739_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005739_2 "invalid_implicit_conversions.div_float_ivec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005739, VkglTestCase_005739_1, VkglTestCase_005739_2);

#define VkglTestCase_005740_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005740_2 ".invalid_implicit_conversions.div_float_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005740, VkglTestCase_005740_1, VkglTestCase_005740_2);

#define VkglTestCase_005741_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005741_2 "invalid_implicit_conversions.div_float_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005741, VkglTestCase_005741_1, VkglTestCase_005741_2);

#define VkglTestCase_005742_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005742_2 ".invalid_implicit_conversions.div_float_ivec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005742, VkglTestCase_005742_1, VkglTestCase_005742_2);

#define VkglTestCase_005743_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005743_2 "invalid_implicit_conversions.div_float_ivec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005743, VkglTestCase_005743_1, VkglTestCase_005743_2);

#define VkglTestCase_005744_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005744_2 ".invalid_implicit_conversions.div_float_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005744, VkglTestCase_005744_1, VkglTestCase_005744_2);

#define VkglTestCase_005745_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005745_2 "invalid_implicit_conversions.div_float_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005745, VkglTestCase_005745_1, VkglTestCase_005745_2);

#define VkglTestCase_005746_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005746_2 ".invalid_implicit_conversions.div_float_ivec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005746, VkglTestCase_005746_1, VkglTestCase_005746_2);

#define VkglTestCase_005747_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005747_2 "invalid_implicit_conversions.div_float_ivec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005747, VkglTestCase_005747_1, VkglTestCase_005747_2);

#define VkglTestCase_005748_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005748_2 ".invalid_implicit_conversions.div_float_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005748, VkglTestCase_005748_1, VkglTestCase_005748_2);

#define VkglTestCase_005749_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005749_2 "invalid_implicit_conversions.div_float_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005749, VkglTestCase_005749_1, VkglTestCase_005749_2);

#define VkglTestCase_005750_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005750_2 "ns.invalid_implicit_conversions.div_vec2_int_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005750, VkglTestCase_005750_1, VkglTestCase_005750_2);

#define VkglTestCase_005751_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005751_2 "s.invalid_implicit_conversions.div_vec2_int_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005751, VkglTestCase_005751_1, VkglTestCase_005751_2);

#define VkglTestCase_005752_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005752_2 "ons.invalid_implicit_conversions.div_vec2_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005752, VkglTestCase_005752_1, VkglTestCase_005752_2);

#define VkglTestCase_005753_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005753_2 "ns.invalid_implicit_conversions.div_vec2_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005753, VkglTestCase_005753_1, VkglTestCase_005753_2);

#define VkglTestCase_005754_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005754_2 "s.invalid_implicit_conversions.div_vec2_ivec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005754, VkglTestCase_005754_1, VkglTestCase_005754_2);

#define VkglTestCase_005755_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005755_2 ".invalid_implicit_conversions.div_vec2_ivec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005755, VkglTestCase_005755_1, VkglTestCase_005755_2);

#define VkglTestCase_005756_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005756_2 "s.invalid_implicit_conversions.div_vec2_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005756, VkglTestCase_005756_1, VkglTestCase_005756_2);

#define VkglTestCase_005757_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005757_2 ".invalid_implicit_conversions.div_vec2_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005757, VkglTestCase_005757_1, VkglTestCase_005757_2);

#define VkglTestCase_005758_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005758_2 "s.invalid_implicit_conversions.div_vec2_ivec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005758, VkglTestCase_005758_1, VkglTestCase_005758_2);

#define VkglTestCase_005759_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005759_2 ".invalid_implicit_conversions.div_vec2_ivec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005759, VkglTestCase_005759_1, VkglTestCase_005759_2);

#define VkglTestCase_005760_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005760_2 "s.invalid_implicit_conversions.div_vec2_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005760, VkglTestCase_005760_1, VkglTestCase_005760_2);

#define VkglTestCase_005761_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005761_2 ".invalid_implicit_conversions.div_vec2_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005761, VkglTestCase_005761_1, VkglTestCase_005761_2);

#define VkglTestCase_005762_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005762_2 "s.invalid_implicit_conversions.div_vec2_ivec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005762, VkglTestCase_005762_1, VkglTestCase_005762_2);

#define VkglTestCase_005763_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005763_2 ".invalid_implicit_conversions.div_vec2_ivec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005763, VkglTestCase_005763_1, VkglTestCase_005763_2);

#define VkglTestCase_005764_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005764_2 "s.invalid_implicit_conversions.div_vec2_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005764, VkglTestCase_005764_1, VkglTestCase_005764_2);

#define VkglTestCase_005765_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005765_2 ".invalid_implicit_conversions.div_vec2_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005765, VkglTestCase_005765_1, VkglTestCase_005765_2);

#define VkglTestCase_005766_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005766_2 "ns.invalid_implicit_conversions.div_vec3_int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005766, VkglTestCase_005766_1, VkglTestCase_005766_2);

#define VkglTestCase_005767_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005767_2 "s.invalid_implicit_conversions.div_vec3_int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005767, VkglTestCase_005767_1, VkglTestCase_005767_2);

#define VkglTestCase_005768_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005768_2 "ons.invalid_implicit_conversions.div_vec3_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005768, VkglTestCase_005768_1, VkglTestCase_005768_2);

#define VkglTestCase_005769_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005769_2 "ns.invalid_implicit_conversions.div_vec3_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005769, VkglTestCase_005769_1, VkglTestCase_005769_2);

#define VkglTestCase_005770_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005770_2 "s.invalid_implicit_conversions.div_vec3_ivec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005770, VkglTestCase_005770_1, VkglTestCase_005770_2);

#define VkglTestCase_005771_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005771_2 ".invalid_implicit_conversions.div_vec3_ivec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005771, VkglTestCase_005771_1, VkglTestCase_005771_2);

#define VkglTestCase_005772_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005772_2 "s.invalid_implicit_conversions.div_vec3_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005772, VkglTestCase_005772_1, VkglTestCase_005772_2);

#define VkglTestCase_005773_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005773_2 ".invalid_implicit_conversions.div_vec3_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005773, VkglTestCase_005773_1, VkglTestCase_005773_2);

#define VkglTestCase_005774_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005774_2 "s.invalid_implicit_conversions.div_vec3_ivec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005774, VkglTestCase_005774_1, VkglTestCase_005774_2);

#define VkglTestCase_005775_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005775_2 ".invalid_implicit_conversions.div_vec3_ivec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005775, VkglTestCase_005775_1, VkglTestCase_005775_2);

#define VkglTestCase_005776_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005776_2 "s.invalid_implicit_conversions.div_vec3_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005776, VkglTestCase_005776_1, VkglTestCase_005776_2);

#define VkglTestCase_005777_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005777_2 ".invalid_implicit_conversions.div_vec3_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005777, VkglTestCase_005777_1, VkglTestCase_005777_2);

#define VkglTestCase_005778_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005778_2 "s.invalid_implicit_conversions.div_vec3_ivec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005778, VkglTestCase_005778_1, VkglTestCase_005778_2);

#define VkglTestCase_005779_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005779_2 ".invalid_implicit_conversions.div_vec3_ivec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005779, VkglTestCase_005779_1, VkglTestCase_005779_2);

#define VkglTestCase_005780_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005780_2 "s.invalid_implicit_conversions.div_vec3_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005780, VkglTestCase_005780_1, VkglTestCase_005780_2);

#define VkglTestCase_005781_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005781_2 ".invalid_implicit_conversions.div_vec3_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005781, VkglTestCase_005781_1, VkglTestCase_005781_2);

#define VkglTestCase_005782_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005782_2 "ns.invalid_implicit_conversions.div_vec4_int_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005782, VkglTestCase_005782_1, VkglTestCase_005782_2);

#define VkglTestCase_005783_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005783_2 "s.invalid_implicit_conversions.div_vec4_int_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005783, VkglTestCase_005783_1, VkglTestCase_005783_2);

#define VkglTestCase_005784_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005784_2 "ons.invalid_implicit_conversions.div_vec4_int_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005784, VkglTestCase_005784_1, VkglTestCase_005784_2);

#define VkglTestCase_005785_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005785_2 "ns.invalid_implicit_conversions.div_vec4_int_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005785, VkglTestCase_005785_1, VkglTestCase_005785_2);

#define VkglTestCase_005786_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005786_2 "s.invalid_implicit_conversions.div_vec4_ivec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005786, VkglTestCase_005786_1, VkglTestCase_005786_2);

#define VkglTestCase_005787_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005787_2 ".invalid_implicit_conversions.div_vec4_ivec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005787, VkglTestCase_005787_1, VkglTestCase_005787_2);

#define VkglTestCase_005788_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005788_2 "s.invalid_implicit_conversions.div_vec4_ivec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005788, VkglTestCase_005788_1, VkglTestCase_005788_2);

#define VkglTestCase_005789_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005789_2 ".invalid_implicit_conversions.div_vec4_ivec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005789, VkglTestCase_005789_1, VkglTestCase_005789_2);

#define VkglTestCase_005790_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005790_2 "s.invalid_implicit_conversions.div_vec4_ivec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005790, VkglTestCase_005790_1, VkglTestCase_005790_2);

#define VkglTestCase_005791_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005791_2 ".invalid_implicit_conversions.div_vec4_ivec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005791, VkglTestCase_005791_1, VkglTestCase_005791_2);

#define VkglTestCase_005792_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005792_2 "s.invalid_implicit_conversions.div_vec4_ivec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005792, VkglTestCase_005792_1, VkglTestCase_005792_2);

#define VkglTestCase_005793_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005793_2 ".invalid_implicit_conversions.div_vec4_ivec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005793, VkglTestCase_005793_1, VkglTestCase_005793_2);

#define VkglTestCase_005794_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005794_2 "s.invalid_implicit_conversions.div_vec4_ivec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005794, VkglTestCase_005794_1, VkglTestCase_005794_2);

#define VkglTestCase_005795_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005795_2 ".invalid_implicit_conversions.div_vec4_ivec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005795, VkglTestCase_005795_1, VkglTestCase_005795_2);

#define VkglTestCase_005796_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005796_2 "s.invalid_implicit_conversions.div_vec4_ivec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005796, VkglTestCase_005796_1, VkglTestCase_005796_2);

#define VkglTestCase_005797_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005797_2 ".invalid_implicit_conversions.div_vec4_ivec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005797, VkglTestCase_005797_1, VkglTestCase_005797_2);

#define VkglTestCase_005798_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005798_2 "s.invalid_implicit_conversions.div_float_uint_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005798, VkglTestCase_005798_1, VkglTestCase_005798_2);

#define VkglTestCase_005799_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005799_2 ".invalid_implicit_conversions.div_float_uint_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005799, VkglTestCase_005799_1, VkglTestCase_005799_2);

#define VkglTestCase_005800_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005800_2 "s.invalid_implicit_conversions.div_float_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005800, VkglTestCase_005800_1, VkglTestCase_005800_2);

#define VkglTestCase_005801_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005801_2 ".invalid_implicit_conversions.div_float_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005801, VkglTestCase_005801_1, VkglTestCase_005801_2);

#define VkglTestCase_005802_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005802_2 ".invalid_implicit_conversions.div_float_uvec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005802, VkglTestCase_005802_1, VkglTestCase_005802_2);

#define VkglTestCase_005803_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005803_2 "invalid_implicit_conversions.div_float_uvec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005803, VkglTestCase_005803_1, VkglTestCase_005803_2);

#define VkglTestCase_005804_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005804_2 ".invalid_implicit_conversions.div_float_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005804, VkglTestCase_005804_1, VkglTestCase_005804_2);

#define VkglTestCase_005805_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005805_2 "invalid_implicit_conversions.div_float_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005805, VkglTestCase_005805_1, VkglTestCase_005805_2);

#define VkglTestCase_005806_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005806_2 ".invalid_implicit_conversions.div_float_uvec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005806, VkglTestCase_005806_1, VkglTestCase_005806_2);

#define VkglTestCase_005807_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005807_2 "invalid_implicit_conversions.div_float_uvec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005807, VkglTestCase_005807_1, VkglTestCase_005807_2);

#define VkglTestCase_005808_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005808_2 ".invalid_implicit_conversions.div_float_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005808, VkglTestCase_005808_1, VkglTestCase_005808_2);

#define VkglTestCase_005809_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005809_2 "invalid_implicit_conversions.div_float_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005809, VkglTestCase_005809_1, VkglTestCase_005809_2);

#define VkglTestCase_005810_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005810_2 ".invalid_implicit_conversions.div_float_uvec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005810, VkglTestCase_005810_1, VkglTestCase_005810_2);

#define VkglTestCase_005811_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005811_2 "invalid_implicit_conversions.div_float_uvec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005811, VkglTestCase_005811_1, VkglTestCase_005811_2);

#define VkglTestCase_005812_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005812_2 ".invalid_implicit_conversions.div_float_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005812, VkglTestCase_005812_1, VkglTestCase_005812_2);

#define VkglTestCase_005813_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005813_2 "invalid_implicit_conversions.div_float_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005813, VkglTestCase_005813_1, VkglTestCase_005813_2);

#define VkglTestCase_005814_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005814_2 "ns.invalid_implicit_conversions.div_vec2_uint_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005814, VkglTestCase_005814_1, VkglTestCase_005814_2);

#define VkglTestCase_005815_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005815_2 "s.invalid_implicit_conversions.div_vec2_uint_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005815, VkglTestCase_005815_1, VkglTestCase_005815_2);

#define VkglTestCase_005816_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005816_2 "ns.invalid_implicit_conversions.div_vec2_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005816, VkglTestCase_005816_1, VkglTestCase_005816_2);

#define VkglTestCase_005817_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005817_2 "s.invalid_implicit_conversions.div_vec2_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005817, VkglTestCase_005817_1, VkglTestCase_005817_2);

#define VkglTestCase_005818_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005818_2 "s.invalid_implicit_conversions.div_vec2_uvec2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005818, VkglTestCase_005818_1, VkglTestCase_005818_2);

#define VkglTestCase_005819_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005819_2 ".invalid_implicit_conversions.div_vec2_uvec2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005819, VkglTestCase_005819_1, VkglTestCase_005819_2);

#define VkglTestCase_005820_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005820_2 "s.invalid_implicit_conversions.div_vec2_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005820, VkglTestCase_005820_1, VkglTestCase_005820_2);

#define VkglTestCase_005821_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005821_2 ".invalid_implicit_conversions.div_vec2_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005821, VkglTestCase_005821_1, VkglTestCase_005821_2);

#define VkglTestCase_005822_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005822_2 "s.invalid_implicit_conversions.div_vec2_uvec3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005822, VkglTestCase_005822_1, VkglTestCase_005822_2);

#define VkglTestCase_005823_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005823_2 ".invalid_implicit_conversions.div_vec2_uvec3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005823, VkglTestCase_005823_1, VkglTestCase_005823_2);

#define VkglTestCase_005824_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005824_2 "s.invalid_implicit_conversions.div_vec2_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005824, VkglTestCase_005824_1, VkglTestCase_005824_2);

#define VkglTestCase_005825_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005825_2 ".invalid_implicit_conversions.div_vec2_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005825, VkglTestCase_005825_1, VkglTestCase_005825_2);

#define VkglTestCase_005826_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005826_2 "s.invalid_implicit_conversions.div_vec2_uvec4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005826, VkglTestCase_005826_1, VkglTestCase_005826_2);

#define VkglTestCase_005827_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005827_2 ".invalid_implicit_conversions.div_vec2_uvec4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005827, VkglTestCase_005827_1, VkglTestCase_005827_2);

#define VkglTestCase_005828_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005828_2 "s.invalid_implicit_conversions.div_vec2_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005828, VkglTestCase_005828_1, VkglTestCase_005828_2);

#define VkglTestCase_005829_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005829_2 ".invalid_implicit_conversions.div_vec2_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005829, VkglTestCase_005829_1, VkglTestCase_005829_2);

#define VkglTestCase_005830_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005830_2 "ns.invalid_implicit_conversions.div_vec3_uint_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005830, VkglTestCase_005830_1, VkglTestCase_005830_2);

#define VkglTestCase_005831_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005831_2 "s.invalid_implicit_conversions.div_vec3_uint_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005831, VkglTestCase_005831_1, VkglTestCase_005831_2);

#define VkglTestCase_005832_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005832_2 "ns.invalid_implicit_conversions.div_vec3_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005832, VkglTestCase_005832_1, VkglTestCase_005832_2);

#define VkglTestCase_005833_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005833_2 "s.invalid_implicit_conversions.div_vec3_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005833, VkglTestCase_005833_1, VkglTestCase_005833_2);

#define VkglTestCase_005834_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005834_2 "s.invalid_implicit_conversions.div_vec3_uvec2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005834, VkglTestCase_005834_1, VkglTestCase_005834_2);

#define VkglTestCase_005835_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005835_2 ".invalid_implicit_conversions.div_vec3_uvec2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005835, VkglTestCase_005835_1, VkglTestCase_005835_2);

#define VkglTestCase_005836_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005836_2 "s.invalid_implicit_conversions.div_vec3_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005836, VkglTestCase_005836_1, VkglTestCase_005836_2);

#define VkglTestCase_005837_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005837_2 ".invalid_implicit_conversions.div_vec3_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005837, VkglTestCase_005837_1, VkglTestCase_005837_2);

#define VkglTestCase_005838_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005838_2 "s.invalid_implicit_conversions.div_vec3_uvec3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005838, VkglTestCase_005838_1, VkglTestCase_005838_2);

#define VkglTestCase_005839_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005839_2 ".invalid_implicit_conversions.div_vec3_uvec3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005839, VkglTestCase_005839_1, VkglTestCase_005839_2);

#define VkglTestCase_005840_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005840_2 "s.invalid_implicit_conversions.div_vec3_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005840, VkglTestCase_005840_1, VkglTestCase_005840_2);

#define VkglTestCase_005841_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005841_2 ".invalid_implicit_conversions.div_vec3_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005841, VkglTestCase_005841_1, VkglTestCase_005841_2);

#define VkglTestCase_005842_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005842_2 "s.invalid_implicit_conversions.div_vec3_uvec4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005842, VkglTestCase_005842_1, VkglTestCase_005842_2);

#define VkglTestCase_005843_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005843_2 ".invalid_implicit_conversions.div_vec3_uvec4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005843, VkglTestCase_005843_1, VkglTestCase_005843_2);

#define VkglTestCase_005844_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005844_2 "s.invalid_implicit_conversions.div_vec3_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005844, VkglTestCase_005844_1, VkglTestCase_005844_2);

#define VkglTestCase_005845_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005845_2 ".invalid_implicit_conversions.div_vec3_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005845, VkglTestCase_005845_1, VkglTestCase_005845_2);

#define VkglTestCase_005846_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005846_2 "ns.invalid_implicit_conversions.div_vec4_uint_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005846, VkglTestCase_005846_1, VkglTestCase_005846_2);

#define VkglTestCase_005847_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005847_2 "s.invalid_implicit_conversions.div_vec4_uint_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005847, VkglTestCase_005847_1, VkglTestCase_005847_2);

#define VkglTestCase_005848_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005848_2 "ns.invalid_implicit_conversions.div_vec4_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005848, VkglTestCase_005848_1, VkglTestCase_005848_2);

#define VkglTestCase_005849_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005849_2 "s.invalid_implicit_conversions.div_vec4_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005849, VkglTestCase_005849_1, VkglTestCase_005849_2);

#define VkglTestCase_005850_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005850_2 "s.invalid_implicit_conversions.div_vec4_uvec2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005850, VkglTestCase_005850_1, VkglTestCase_005850_2);

#define VkglTestCase_005851_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005851_2 ".invalid_implicit_conversions.div_vec4_uvec2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005851, VkglTestCase_005851_1, VkglTestCase_005851_2);

#define VkglTestCase_005852_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005852_2 "s.invalid_implicit_conversions.div_vec4_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005852, VkglTestCase_005852_1, VkglTestCase_005852_2);

#define VkglTestCase_005853_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005853_2 ".invalid_implicit_conversions.div_vec4_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005853, VkglTestCase_005853_1, VkglTestCase_005853_2);

#define VkglTestCase_005854_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005854_2 "s.invalid_implicit_conversions.div_vec4_uvec3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005854, VkglTestCase_005854_1, VkglTestCase_005854_2);

#define VkglTestCase_005855_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005855_2 ".invalid_implicit_conversions.div_vec4_uvec3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005855, VkglTestCase_005855_1, VkglTestCase_005855_2);

#define VkglTestCase_005856_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005856_2 "s.invalid_implicit_conversions.div_vec4_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005856, VkglTestCase_005856_1, VkglTestCase_005856_2);

#define VkglTestCase_005857_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005857_2 ".invalid_implicit_conversions.div_vec4_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005857, VkglTestCase_005857_1, VkglTestCase_005857_2);

#define VkglTestCase_005858_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005858_2 "s.invalid_implicit_conversions.div_vec4_uvec4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005858, VkglTestCase_005858_1, VkglTestCase_005858_2);

#define VkglTestCase_005859_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005859_2 ".invalid_implicit_conversions.div_vec4_uvec4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005859, VkglTestCase_005859_1, VkglTestCase_005859_2);

#define VkglTestCase_005860_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005860_2 "s.invalid_implicit_conversions.div_vec4_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005860, VkglTestCase_005860_1, VkglTestCase_005860_2);

#define VkglTestCase_005861_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005861_2 ".invalid_implicit_conversions.div_vec4_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005861, VkglTestCase_005861_1, VkglTestCase_005861_2);

#define VkglTestCase_005862_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
#define VkglTestCase_005862_2 "ons.invalid_implicit_conversions.div_int_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005862, VkglTestCase_005862_1, VkglTestCase_005862_2);

#define VkglTestCase_005863_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005863_2 "ns.invalid_implicit_conversions.div_int_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005863, VkglTestCase_005863_1, VkglTestCase_005863_2);

#define VkglTestCase_005864_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005864_2 "ns.invalid_implicit_conversions.div_int_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005864, VkglTestCase_005864_1, VkglTestCase_005864_2);

#define VkglTestCase_005865_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005865_2 "s.invalid_implicit_conversions.div_int_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005865, VkglTestCase_005865_1, VkglTestCase_005865_2);

#define VkglTestCase_005866_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005866_2 "ns.invalid_implicit_conversions.div_int_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005866, VkglTestCase_005866_1, VkglTestCase_005866_2);

#define VkglTestCase_005867_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005867_2 "s.invalid_implicit_conversions.div_int_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005867, VkglTestCase_005867_1, VkglTestCase_005867_2);

#define VkglTestCase_005868_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005868_2 "s.invalid_implicit_conversions.div_int_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005868, VkglTestCase_005868_1, VkglTestCase_005868_2);

#define VkglTestCase_005869_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005869_2 ".invalid_implicit_conversions.div_int_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005869, VkglTestCase_005869_1, VkglTestCase_005869_2);

#define VkglTestCase_005870_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005870_2 "ns.invalid_implicit_conversions.div_int_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005870, VkglTestCase_005870_1, VkglTestCase_005870_2);

#define VkglTestCase_005871_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005871_2 "s.invalid_implicit_conversions.div_int_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005871, VkglTestCase_005871_1, VkglTestCase_005871_2);

#define VkglTestCase_005872_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005872_2 "s.invalid_implicit_conversions.div_int_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005872, VkglTestCase_005872_1, VkglTestCase_005872_2);

#define VkglTestCase_005873_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005873_2 ".invalid_implicit_conversions.div_int_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005873, VkglTestCase_005873_1, VkglTestCase_005873_2);

#define VkglTestCase_005874_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
#define VkglTestCase_005874_2 "ns.invalid_implicit_conversions.div_int_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005874, VkglTestCase_005874_1, VkglTestCase_005874_2);

#define VkglTestCase_005875_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005875_2 "s.invalid_implicit_conversions.div_int_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005875, VkglTestCase_005875_1, VkglTestCase_005875_2);

#define VkglTestCase_005876_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005876_2 "s.invalid_implicit_conversions.div_int_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005876, VkglTestCase_005876_1, VkglTestCase_005876_2);

#define VkglTestCase_005877_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005877_2 ".invalid_implicit_conversions.div_int_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005877, VkglTestCase_005877_1, VkglTestCase_005877_2);

#define VkglTestCase_005878_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005878_2 "s.invalid_implicit_conversions.div_ivec2_uint_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005878, VkglTestCase_005878_1, VkglTestCase_005878_2);

#define VkglTestCase_005879_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005879_2 ".invalid_implicit_conversions.div_ivec2_uint_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005879, VkglTestCase_005879_1, VkglTestCase_005879_2);

#define VkglTestCase_005880_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005880_2 "s.invalid_implicit_conversions.div_ivec2_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005880, VkglTestCase_005880_1, VkglTestCase_005880_2);

#define VkglTestCase_005881_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005881_2 ".invalid_implicit_conversions.div_ivec2_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005881, VkglTestCase_005881_1, VkglTestCase_005881_2);

#define VkglTestCase_005882_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005882_2 ".invalid_implicit_conversions.div_ivec2_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005882, VkglTestCase_005882_1, VkglTestCase_005882_2);

#define VkglTestCase_005883_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005883_2 "invalid_implicit_conversions.div_ivec2_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005883, VkglTestCase_005883_1, VkglTestCase_005883_2);

#define VkglTestCase_005884_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005884_2 ".invalid_implicit_conversions.div_ivec2_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005884, VkglTestCase_005884_1, VkglTestCase_005884_2);

#define VkglTestCase_005885_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005885_2 "invalid_implicit_conversions.div_ivec2_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005885, VkglTestCase_005885_1, VkglTestCase_005885_2);

#define VkglTestCase_005886_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005886_2 ".invalid_implicit_conversions.div_ivec2_uvec3_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005886, VkglTestCase_005886_1, VkglTestCase_005886_2);

#define VkglTestCase_005887_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005887_2 "invalid_implicit_conversions.div_ivec2_uvec3_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005887, VkglTestCase_005887_1, VkglTestCase_005887_2);

#define VkglTestCase_005888_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005888_2 ".invalid_implicit_conversions.div_ivec2_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005888, VkglTestCase_005888_1, VkglTestCase_005888_2);

#define VkglTestCase_005889_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005889_2 "invalid_implicit_conversions.div_ivec2_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005889, VkglTestCase_005889_1, VkglTestCase_005889_2);

#define VkglTestCase_005890_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005890_2 ".invalid_implicit_conversions.div_ivec2_uvec4_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005890, VkglTestCase_005890_1, VkglTestCase_005890_2);

#define VkglTestCase_005891_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005891_2 "invalid_implicit_conversions.div_ivec2_uvec4_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005891, VkglTestCase_005891_1, VkglTestCase_005891_2);

#define VkglTestCase_005892_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005892_2 ".invalid_implicit_conversions.div_ivec2_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005892, VkglTestCase_005892_1, VkglTestCase_005892_2);

#define VkglTestCase_005893_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005893_2 "invalid_implicit_conversions.div_ivec2_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005893, VkglTestCase_005893_1, VkglTestCase_005893_2);

#define VkglTestCase_005894_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005894_2 "s.invalid_implicit_conversions.div_ivec3_uint_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005894, VkglTestCase_005894_1, VkglTestCase_005894_2);

#define VkglTestCase_005895_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005895_2 ".invalid_implicit_conversions.div_ivec3_uint_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005895, VkglTestCase_005895_1, VkglTestCase_005895_2);

#define VkglTestCase_005896_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005896_2 "s.invalid_implicit_conversions.div_ivec3_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005896, VkglTestCase_005896_1, VkglTestCase_005896_2);

#define VkglTestCase_005897_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005897_2 ".invalid_implicit_conversions.div_ivec3_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005897, VkglTestCase_005897_1, VkglTestCase_005897_2);

#define VkglTestCase_005898_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005898_2 ".invalid_implicit_conversions.div_ivec3_uvec2_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005898, VkglTestCase_005898_1, VkglTestCase_005898_2);

#define VkglTestCase_005899_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005899_2 "invalid_implicit_conversions.div_ivec3_uvec2_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005899, VkglTestCase_005899_1, VkglTestCase_005899_2);

#define VkglTestCase_005900_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005900_2 ".invalid_implicit_conversions.div_ivec3_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005900, VkglTestCase_005900_1, VkglTestCase_005900_2);

#define VkglTestCase_005901_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005901_2 "invalid_implicit_conversions.div_ivec3_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005901, VkglTestCase_005901_1, VkglTestCase_005901_2);

#define VkglTestCase_005902_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005902_2 ".invalid_implicit_conversions.div_ivec3_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005902, VkglTestCase_005902_1, VkglTestCase_005902_2);

#define VkglTestCase_005903_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005903_2 "invalid_implicit_conversions.div_ivec3_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005903, VkglTestCase_005903_1, VkglTestCase_005903_2);

#define VkglTestCase_005904_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005904_2 ".invalid_implicit_conversions.div_ivec3_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005904, VkglTestCase_005904_1, VkglTestCase_005904_2);

#define VkglTestCase_005905_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005905_2 "invalid_implicit_conversions.div_ivec3_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005905, VkglTestCase_005905_1, VkglTestCase_005905_2);

#define VkglTestCase_005906_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005906_2 ".invalid_implicit_conversions.div_ivec3_uvec4_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005906, VkglTestCase_005906_1, VkglTestCase_005906_2);

#define VkglTestCase_005907_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005907_2 "invalid_implicit_conversions.div_ivec3_uvec4_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005907, VkglTestCase_005907_1, VkglTestCase_005907_2);

#define VkglTestCase_005908_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005908_2 ".invalid_implicit_conversions.div_ivec3_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005908, VkglTestCase_005908_1, VkglTestCase_005908_2);

#define VkglTestCase_005909_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005909_2 "invalid_implicit_conversions.div_ivec3_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005909, VkglTestCase_005909_1, VkglTestCase_005909_2);

#define VkglTestCase_005910_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005910_2 "s.invalid_implicit_conversions.div_ivec4_uint_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005910, VkglTestCase_005910_1, VkglTestCase_005910_2);

#define VkglTestCase_005911_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005911_2 ".invalid_implicit_conversions.div_ivec4_uint_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005911, VkglTestCase_005911_1, VkglTestCase_005911_2);

#define VkglTestCase_005912_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
#define VkglTestCase_005912_2 "s.invalid_implicit_conversions.div_ivec4_uint_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005912, VkglTestCase_005912_1, VkglTestCase_005912_2);

#define VkglTestCase_005913_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005913_2 ".invalid_implicit_conversions.div_ivec4_uint_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005913, VkglTestCase_005913_1, VkglTestCase_005913_2);

#define VkglTestCase_005914_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005914_2 ".invalid_implicit_conversions.div_ivec4_uvec2_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005914, VkglTestCase_005914_1, VkglTestCase_005914_2);

#define VkglTestCase_005915_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005915_2 "invalid_implicit_conversions.div_ivec4_uvec2_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005915, VkglTestCase_005915_1, VkglTestCase_005915_2);

#define VkglTestCase_005916_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005916_2 ".invalid_implicit_conversions.div_ivec4_uvec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005916, VkglTestCase_005916_1, VkglTestCase_005916_2);

#define VkglTestCase_005917_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005917_2 "invalid_implicit_conversions.div_ivec4_uvec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005917, VkglTestCase_005917_1, VkglTestCase_005917_2);

#define VkglTestCase_005918_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005918_2 ".invalid_implicit_conversions.div_ivec4_uvec3_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005918, VkglTestCase_005918_1, VkglTestCase_005918_2);

#define VkglTestCase_005919_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005919_2 "invalid_implicit_conversions.div_ivec4_uvec3_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005919, VkglTestCase_005919_1, VkglTestCase_005919_2);

#define VkglTestCase_005920_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005920_2 ".invalid_implicit_conversions.div_ivec4_uvec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005920, VkglTestCase_005920_1, VkglTestCase_005920_2);

#define VkglTestCase_005921_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005921_2 "invalid_implicit_conversions.div_ivec4_uvec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005921, VkglTestCase_005921_1, VkglTestCase_005921_2);

#define VkglTestCase_005922_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005922_2 ".invalid_implicit_conversions.div_ivec4_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005922, VkglTestCase_005922_1, VkglTestCase_005922_2);

#define VkglTestCase_005923_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005923_2 "invalid_implicit_conversions.div_ivec4_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005923, VkglTestCase_005923_1, VkglTestCase_005923_2);

#define VkglTestCase_005924_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
#define VkglTestCase_005924_2 ".invalid_implicit_conversions.div_ivec4_uvec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005924, VkglTestCase_005924_1, VkglTestCase_005924_2);

#define VkglTestCase_005925_1 "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
#define VkglTestCase_005925_2 "invalid_implicit_conversions.div_ivec4_uvec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005925, VkglTestCase_005925_1, VkglTestCase_005925_2);
=======
static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_float_int_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005158 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_int_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005159 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_float_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005160 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_float_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005161 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005162 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005163 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005164 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005165 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005166 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005167 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005168 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005169 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005170 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005171 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005172 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005173 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec2_int_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005174 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_int_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005175 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.add_vec2_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005176 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec2_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005177 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec2_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005178 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec2_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005179 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005180 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005181 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec3_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005182 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec3_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005183 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005184 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005185 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec4_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005186 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec4_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005187 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec2_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005188 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec2_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005189 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec3_int_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005190 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_int_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005191 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.add_vec3_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005192 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec3_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005193 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec2_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005194 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec2_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005195 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005196 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005197 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec3_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005198 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec3_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005199 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005200 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005201 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec4_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005202 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec4_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005203 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec3_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005204 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec3_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005205 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec4_int_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005206 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_int_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005207 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversi"
        "ons.invalid_implicit_conversions.add_vec4_int_int_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005208 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversio"
        "ns.invalid_implicit_conversions.add_vec4_int_int_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005209 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec2_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005210 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec2_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005211 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec2_ivec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005212 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec2_ivec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005213 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec3_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005214 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec3_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005215 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec3_ivec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005216 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec3_ivec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005217 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec4_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005218 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec4_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005219 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_vec4_ivec4_ivec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005220 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_vec4_ivec4_ivec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005221 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_float_uint_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005222 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uint_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005223 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversion"
        "s.invalid_implicit_conversions.add_float_uint_uint_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005224 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uint_uint_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005225 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uvec2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005226 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_uvec2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005227 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uvec2_uvec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005228 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions."
        "invalid_implicit_conversions.add_float_uvec2_uvec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005229 end";
}

static HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005230, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_005230 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.invalid_implicit_conversions"
        ".invalid_implicit_conversions.add_float_uvec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30006TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30006TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30006TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30006TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30006TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_005230 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_005230 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
