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
#include "../ActsDeqpgles20016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015305_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015305_2 "ery.boolean.cull_face_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015305, VkglTestCase_015305_1, VkglTestCase_015305_2);

#define VkglTestCase_015306_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015306_2 "ry.boolean.cull_face_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015306, VkglTestCase_015306_1, VkglTestCase_015306_2);

#define VkglTestCase_015307_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015307_2 "ry.boolean.cull_face_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015307, VkglTestCase_015307_1, VkglTestCase_015307_2);

#define VkglTestCase_015308_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015308_2 "ery.boolean.cull_face_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015308, VkglTestCase_015308_1, VkglTestCase_015308_2);

#define VkglTestCase_015309_1 "dEQP-GLES2.functional.state_query.b"
#define VkglTestCase_015309_2 "oolean.polygon_offset_fill_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015309, VkglTestCase_015309_1, VkglTestCase_015309_2);

#define VkglTestCase_015310_1 "dEQP-GLES2.functional.state_query.bo"
#define VkglTestCase_015310_2 "olean.polygon_offset_fill_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015310, VkglTestCase_015310_1, VkglTestCase_015310_2);

#define VkglTestCase_015311_1 "dEQP-GLES2.functional.state_query.bo"
#define VkglTestCase_015311_2 "olean.polygon_offset_fill_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015311, VkglTestCase_015311_1, VkglTestCase_015311_2);

#define VkglTestCase_015312_1 "dEQP-GLES2.functional.state_query.b"
#define VkglTestCase_015312_2 "oolean.polygon_offset_fill_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015312, VkglTestCase_015312_1, VkglTestCase_015312_2);

#define VkglTestCase_015313_1 "dEQP-GLES2.functional.state_query.bool"
#define VkglTestCase_015313_2 "ean.sample_alpha_to_coverage_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015313, VkglTestCase_015313_1, VkglTestCase_015313_2);

#define VkglTestCase_015314_1 "dEQP-GLES2.functional.state_query.bool"
#define VkglTestCase_015314_2 "ean.sample_alpha_to_coverage_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015314, VkglTestCase_015314_1, VkglTestCase_015314_2);

#define VkglTestCase_015315_1 "dEQP-GLES2.functional.state_query.bool"
#define VkglTestCase_015315_2 "ean.sample_alpha_to_coverage_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015315, VkglTestCase_015315_1, VkglTestCase_015315_2);

#define VkglTestCase_015316_1 "dEQP-GLES2.functional.state_query.boo"
#define VkglTestCase_015316_2 "lean.sample_alpha_to_coverage_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015316, VkglTestCase_015316_1, VkglTestCase_015316_2);

#define VkglTestCase_015317_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015317_2 ".boolean.sample_coverage_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015317, VkglTestCase_015317_1, VkglTestCase_015317_2);

#define VkglTestCase_015318_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015318_2 "boolean.sample_coverage_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015318, VkglTestCase_015318_1, VkglTestCase_015318_2);

#define VkglTestCase_015319_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015319_2 "boolean.sample_coverage_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015319, VkglTestCase_015319_1, VkglTestCase_015319_2);

#define VkglTestCase_015320_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015320_2 ".boolean.sample_coverage_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015320, VkglTestCase_015320_1, VkglTestCase_015320_2);

#define VkglTestCase_015321_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015321_2 "y.boolean.scissor_test_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015321, VkglTestCase_015321_1, VkglTestCase_015321_2);

#define VkglTestCase_015322_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015322_2 "y.boolean.scissor_test_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015322, VkglTestCase_015322_1, VkglTestCase_015322_2);

#define VkglTestCase_015323_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015323_2 "y.boolean.scissor_test_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015323, VkglTestCase_015323_1, VkglTestCase_015323_2);

#define VkglTestCase_015324_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015324_2 "ry.boolean.scissor_test_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015324, VkglTestCase_015324_1, VkglTestCase_015324_2);

#define VkglTestCase_015325_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015325_2 "y.boolean.stencil_test_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015325, VkglTestCase_015325_1, VkglTestCase_015325_2);

#define VkglTestCase_015326_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015326_2 "y.boolean.stencil_test_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015326, VkglTestCase_015326_1, VkglTestCase_015326_2);

#define VkglTestCase_015327_1 "dEQP-GLES2.functional.state_quer"
#define VkglTestCase_015327_2 "y.boolean.stencil_test_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015327, VkglTestCase_015327_1, VkglTestCase_015327_2);

#define VkglTestCase_015328_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015328_2 "ry.boolean.stencil_test_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015328, VkglTestCase_015328_1, VkglTestCase_015328_2);

#define VkglTestCase_015329_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015329_2 "ry.boolean.depth_test_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015329, VkglTestCase_015329_1, VkglTestCase_015329_2);

#define VkglTestCase_015330_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015330_2 "ry.boolean.depth_test_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015330, VkglTestCase_015330_1, VkglTestCase_015330_2);

#define VkglTestCase_015331_1 "dEQP-GLES2.functional.state_que"
#define VkglTestCase_015331_2 "ry.boolean.depth_test_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015331, VkglTestCase_015331_1, VkglTestCase_015331_2);

#define VkglTestCase_015332_1 "dEQP-GLES2.functional.state_qu"
#define VkglTestCase_015332_2 "ery.boolean.depth_test_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015332, VkglTestCase_015332_1, VkglTestCase_015332_2);

#define VkglTestCase_015333_1 "dEQP-GLES2.functional.state_"
#define VkglTestCase_015333_2 "query.boolean.blend_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015333, VkglTestCase_015333_1, VkglTestCase_015333_2);

#define VkglTestCase_015334_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015334_2 "uery.boolean.blend_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015334, VkglTestCase_015334_1, VkglTestCase_015334_2);

#define VkglTestCase_015335_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015335_2 "uery.boolean.blend_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015335, VkglTestCase_015335_1, VkglTestCase_015335_2);

#define VkglTestCase_015336_1 "dEQP-GLES2.functional.state_"
#define VkglTestCase_015336_2 "query.boolean.blend_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015336, VkglTestCase_015336_1, VkglTestCase_015336_2);

#define VkglTestCase_015337_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015337_2 "uery.boolean.dither_isenabled"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015337, VkglTestCase_015337_1, VkglTestCase_015337_2);

#define VkglTestCase_015338_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015338_2 "uery.boolean.dither_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015338, VkglTestCase_015338_1, VkglTestCase_015338_2);

#define VkglTestCase_015339_1 "dEQP-GLES2.functional.state_q"
#define VkglTestCase_015339_2 "uery.boolean.dither_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015339, VkglTestCase_015339_1, VkglTestCase_015339_2);

#define VkglTestCase_015340_1 "dEQP-GLES2.functional.state_"
#define VkglTestCase_015340_2 "query.boolean.dither_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015340, VkglTestCase_015340_1, VkglTestCase_015340_2);

#define VkglTestCase_015341_1 "dEQP-GLES2.functional.state_query.boo"
#define VkglTestCase_015341_2 "lean.sample_coverage_invert_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015341, VkglTestCase_015341_1, VkglTestCase_015341_2);

#define VkglTestCase_015342_1 "dEQP-GLES2.functional.state_query.boo"
#define VkglTestCase_015342_2 "lean.sample_coverage_invert_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015342, VkglTestCase_015342_1, VkglTestCase_015342_2);

#define VkglTestCase_015343_1 "dEQP-GLES2.functional.state_query.bo"
#define VkglTestCase_015343_2 "olean.sample_coverage_invert_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015343, VkglTestCase_015343_1, VkglTestCase_015343_2);

#define VkglTestCase_015344_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015344_2 "boolean.color_writemask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015344, VkglTestCase_015344_1, VkglTestCase_015344_2);

#define VkglTestCase_015345_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015345_2 "boolean.color_writemask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015345, VkglTestCase_015345_1, VkglTestCase_015345_2);

#define VkglTestCase_015346_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015346_2 ".boolean.color_writemask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015346, VkglTestCase_015346_1, VkglTestCase_015346_2);

#define VkglTestCase_015347_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015347_2 "boolean.depth_writemask_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015347, VkglTestCase_015347_1, VkglTestCase_015347_2);

#define VkglTestCase_015348_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015348_2 "boolean.depth_writemask_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015348, VkglTestCase_015348_1, VkglTestCase_015348_2);

#define VkglTestCase_015349_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015349_2 ".boolean.depth_writemask_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015349, VkglTestCase_015349_1, VkglTestCase_015349_2);

#define VkglTestCase_015350_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015350_2 "boolean.shader_compiler_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015350, VkglTestCase_015350_1, VkglTestCase_015350_2);

#define VkglTestCase_015351_1 "dEQP-GLES2.functional.state_query."
#define VkglTestCase_015351_2 "boolean.shader_compiler_getinteger"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015351, VkglTestCase_015351_1, VkglTestCase_015351_2);

#define VkglTestCase_015352_1 "dEQP-GLES2.functional.state_query"
#define VkglTestCase_015352_2 ".boolean.shader_compiler_getfloat"
SHRINK_HWTEST_F(ActsDeqpgles20016TestSuite, TestCase_015352, VkglTestCase_015352_1, VkglTestCase_015352_2);
