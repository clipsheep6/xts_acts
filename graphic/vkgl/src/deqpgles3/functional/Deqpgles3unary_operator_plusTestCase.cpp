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
#include "../ActsDeqpgles30008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007286_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007286_2 ".unary_operator.plus.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007286, VkglTestCase_007286_1, VkglTestCase_007286_2);

#define VkglTestCase_007287_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007287_2 "unary_operator.plus.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007287, VkglTestCase_007287_1, VkglTestCase_007287_2);

#define VkglTestCase_007288_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007288_2 "unary_operator.plus.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007288, VkglTestCase_007288_1, VkglTestCase_007288_2);

#define VkglTestCase_007289_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007289_2 "nary_operator.plus.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007289, VkglTestCase_007289_1, VkglTestCase_007289_2);

#define VkglTestCase_007290_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007290_2 ".unary_operator.plus.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007290, VkglTestCase_007290_1, VkglTestCase_007290_2);

#define VkglTestCase_007291_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007291_2 "unary_operator.plus.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007291, VkglTestCase_007291_1, VkglTestCase_007291_2);

#define VkglTestCase_007292_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_007292_2 "r.unary_operator.plus.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007292, VkglTestCase_007292_1, VkglTestCase_007292_2);

#define VkglTestCase_007293_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007293_2 ".unary_operator.plus.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007293, VkglTestCase_007293_1, VkglTestCase_007293_2);

#define VkglTestCase_007294_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007294_2 "unary_operator.plus.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007294, VkglTestCase_007294_1, VkglTestCase_007294_2);

#define VkglTestCase_007295_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007295_2 "nary_operator.plus.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007295, VkglTestCase_007295_1, VkglTestCase_007295_2);

#define VkglTestCase_007296_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007296_2 ".unary_operator.plus.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007296, VkglTestCase_007296_1, VkglTestCase_007296_2);

#define VkglTestCase_007297_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007297_2 "unary_operator.plus.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007297, VkglTestCase_007297_1, VkglTestCase_007297_2);

#define VkglTestCase_007298_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_007298_2 "r.unary_operator.plus.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007298, VkglTestCase_007298_1, VkglTestCase_007298_2);

#define VkglTestCase_007299_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007299_2 ".unary_operator.plus.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007299, VkglTestCase_007299_1, VkglTestCase_007299_2);

#define VkglTestCase_007300_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007300_2 "unary_operator.plus.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007300, VkglTestCase_007300_1, VkglTestCase_007300_2);

#define VkglTestCase_007301_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007301_2 "nary_operator.plus.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007301, VkglTestCase_007301_1, VkglTestCase_007301_2);

#define VkglTestCase_007302_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007302_2 ".unary_operator.plus.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007302, VkglTestCase_007302_1, VkglTestCase_007302_2);

#define VkglTestCase_007303_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007303_2 "unary_operator.plus.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007303, VkglTestCase_007303_1, VkglTestCase_007303_2);

#define VkglTestCase_007304_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_007304_2 "r.unary_operator.plus.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007304, VkglTestCase_007304_1, VkglTestCase_007304_2);

#define VkglTestCase_007305_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007305_2 ".unary_operator.plus.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007305, VkglTestCase_007305_1, VkglTestCase_007305_2);

#define VkglTestCase_007306_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007306_2 "unary_operator.plus.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007306, VkglTestCase_007306_1, VkglTestCase_007306_2);

#define VkglTestCase_007307_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007307_2 "nary_operator.plus.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007307, VkglTestCase_007307_1, VkglTestCase_007307_2);

#define VkglTestCase_007308_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007308_2 ".unary_operator.plus.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007308, VkglTestCase_007308_1, VkglTestCase_007308_2);

#define VkglTestCase_007309_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007309_2 "unary_operator.plus.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007309, VkglTestCase_007309_1, VkglTestCase_007309_2);

#define VkglTestCase_007310_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_007310_2 "r.unary_operator.plus.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007310, VkglTestCase_007310_1, VkglTestCase_007310_2);

#define VkglTestCase_007311_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007311_2 ".unary_operator.plus.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007311, VkglTestCase_007311_1, VkglTestCase_007311_2);

#define VkglTestCase_007312_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007312_2 ".unary_operator.plus.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007312, VkglTestCase_007312_1, VkglTestCase_007312_2);

#define VkglTestCase_007313_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007313_2 "unary_operator.plus.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007313, VkglTestCase_007313_1, VkglTestCase_007313_2);

#define VkglTestCase_007314_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_007314_2 "r.unary_operator.plus.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007314, VkglTestCase_007314_1, VkglTestCase_007314_2);

#define VkglTestCase_007315_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007315_2 ".unary_operator.plus.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007315, VkglTestCase_007315_1, VkglTestCase_007315_2);

#define VkglTestCase_007316_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007316_2 ".unary_operator.plus.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007316, VkglTestCase_007316_1, VkglTestCase_007316_2);

#define VkglTestCase_007317_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007317_2 "unary_operator.plus.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007317, VkglTestCase_007317_1, VkglTestCase_007317_2);

#define VkglTestCase_007318_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007318_2 "unary_operator.plus.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007318, VkglTestCase_007318_1, VkglTestCase_007318_2);

#define VkglTestCase_007319_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007319_2 "nary_operator.plus.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007319, VkglTestCase_007319_1, VkglTestCase_007319_2);

#define VkglTestCase_007320_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007320_2 ".unary_operator.plus.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007320, VkglTestCase_007320_1, VkglTestCase_007320_2);

#define VkglTestCase_007321_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007321_2 "unary_operator.plus.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007321, VkglTestCase_007321_1, VkglTestCase_007321_2);

#define VkglTestCase_007322_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007322_2 ".unary_operator.plus.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007322, VkglTestCase_007322_1, VkglTestCase_007322_2);

#define VkglTestCase_007323_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007323_2 "unary_operator.plus.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007323, VkglTestCase_007323_1, VkglTestCase_007323_2);

#define VkglTestCase_007324_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007324_2 "unary_operator.plus.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007324, VkglTestCase_007324_1, VkglTestCase_007324_2);

#define VkglTestCase_007325_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007325_2 "nary_operator.plus.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007325, VkglTestCase_007325_1, VkglTestCase_007325_2);

#define VkglTestCase_007326_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007326_2 ".unary_operator.plus.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007326, VkglTestCase_007326_1, VkglTestCase_007326_2);

#define VkglTestCase_007327_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007327_2 "unary_operator.plus.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007327, VkglTestCase_007327_1, VkglTestCase_007327_2);

#define VkglTestCase_007328_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007328_2 ".unary_operator.plus.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007328, VkglTestCase_007328_1, VkglTestCase_007328_2);

#define VkglTestCase_007329_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007329_2 "unary_operator.plus.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007329, VkglTestCase_007329_1, VkglTestCase_007329_2);

#define VkglTestCase_007330_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007330_2 "unary_operator.plus.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007330, VkglTestCase_007330_1, VkglTestCase_007330_2);

#define VkglTestCase_007331_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007331_2 "nary_operator.plus.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007331, VkglTestCase_007331_1, VkglTestCase_007331_2);

#define VkglTestCase_007332_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007332_2 ".unary_operator.plus.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007332, VkglTestCase_007332_1, VkglTestCase_007332_2);

#define VkglTestCase_007333_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007333_2 "unary_operator.plus.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007333, VkglTestCase_007333_1, VkglTestCase_007333_2);

#define VkglTestCase_007334_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_007334_2 "r.unary_operator.plus.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007334, VkglTestCase_007334_1, VkglTestCase_007334_2);

#define VkglTestCase_007335_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007335_2 ".unary_operator.plus.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007335, VkglTestCase_007335_1, VkglTestCase_007335_2);

#define VkglTestCase_007336_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007336_2 "unary_operator.plus.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007336, VkglTestCase_007336_1, VkglTestCase_007336_2);

#define VkglTestCase_007337_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007337_2 "nary_operator.plus.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007337, VkglTestCase_007337_1, VkglTestCase_007337_2);

#define VkglTestCase_007338_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007338_2 ".unary_operator.plus.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007338, VkglTestCase_007338_1, VkglTestCase_007338_2);

#define VkglTestCase_007339_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007339_2 "unary_operator.plus.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007339, VkglTestCase_007339_1, VkglTestCase_007339_2);

#define VkglTestCase_007340_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007340_2 ".unary_operator.plus.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007340, VkglTestCase_007340_1, VkglTestCase_007340_2);

#define VkglTestCase_007341_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007341_2 "unary_operator.plus.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007341, VkglTestCase_007341_1, VkglTestCase_007341_2);

#define VkglTestCase_007342_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007342_2 "unary_operator.plus.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007342, VkglTestCase_007342_1, VkglTestCase_007342_2);

#define VkglTestCase_007343_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007343_2 "nary_operator.plus.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007343, VkglTestCase_007343_1, VkglTestCase_007343_2);

#define VkglTestCase_007344_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007344_2 ".unary_operator.plus.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007344, VkglTestCase_007344_1, VkglTestCase_007344_2);

#define VkglTestCase_007345_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007345_2 "unary_operator.plus.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007345, VkglTestCase_007345_1, VkglTestCase_007345_2);

#define VkglTestCase_007346_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007346_2 ".unary_operator.plus.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007346, VkglTestCase_007346_1, VkglTestCase_007346_2);

#define VkglTestCase_007347_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007347_2 "unary_operator.plus.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007347, VkglTestCase_007347_1, VkglTestCase_007347_2);

#define VkglTestCase_007348_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007348_2 "unary_operator.plus.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007348, VkglTestCase_007348_1, VkglTestCase_007348_2);

#define VkglTestCase_007349_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007349_2 "nary_operator.plus.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007349, VkglTestCase_007349_1, VkglTestCase_007349_2);

#define VkglTestCase_007350_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007350_2 ".unary_operator.plus.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007350, VkglTestCase_007350_1, VkglTestCase_007350_2);

#define VkglTestCase_007351_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007351_2 "unary_operator.plus.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007351, VkglTestCase_007351_1, VkglTestCase_007351_2);

#define VkglTestCase_007352_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007352_2 ".unary_operator.plus.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007352, VkglTestCase_007352_1, VkglTestCase_007352_2);

#define VkglTestCase_007353_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007353_2 "unary_operator.plus.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007353, VkglTestCase_007353_1, VkglTestCase_007353_2);

#define VkglTestCase_007354_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007354_2 "unary_operator.plus.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007354, VkglTestCase_007354_1, VkglTestCase_007354_2);

#define VkglTestCase_007355_1 "dEQP-GLES3.functional.shaders.operator.u"
#define VkglTestCase_007355_2 "nary_operator.plus.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007355, VkglTestCase_007355_1, VkglTestCase_007355_2);

#define VkglTestCase_007356_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_007356_2 ".unary_operator.plus.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007356, VkglTestCase_007356_1, VkglTestCase_007356_2);

#define VkglTestCase_007357_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_007357_2 "unary_operator.plus.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30008TestSuite, TestCase_007357, VkglTestCase_007357_1, VkglTestCase_007357_2);
