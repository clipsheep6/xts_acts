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
#include "../ActsDeqpgles30037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036322_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036322_2 "ry.active_uniform.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036322, VkglTestCase_036322_1, VkglTestCase_036322_2);

#define VkglTestCase_036323_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036323_2 "y.active_uniform.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036323, VkglTestCase_036323_1, VkglTestCase_036323_2);

#define VkglTestCase_036324_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036324_2 "ery.active_uniform.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036324, VkglTestCase_036324_1, VkglTestCase_036324_2);

#define VkglTestCase_036325_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036325_2 "ery.active_uniform.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036325, VkglTestCase_036325_1, VkglTestCase_036325_2);

#define VkglTestCase_036326_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036326_2 "ry.active_uniform.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036326, VkglTestCase_036326_1, VkglTestCase_036326_2);

#define VkglTestCase_036327_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036327_2 "uery.active_uniform.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036327, VkglTestCase_036327_1, VkglTestCase_036327_2);

#define VkglTestCase_036328_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036328_2 "ery.active_uniform.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036328, VkglTestCase_036328_1, VkglTestCase_036328_2);

#define VkglTestCase_036329_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036329_2 "ry.active_uniform.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036329, VkglTestCase_036329_1, VkglTestCase_036329_2);

#define VkglTestCase_036330_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036330_2 "uery.active_uniform.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036330, VkglTestCase_036330_1, VkglTestCase_036330_2);

#define VkglTestCase_036331_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036331_2 "ery.active_uniform.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036331, VkglTestCase_036331_1, VkglTestCase_036331_2);

#define VkglTestCase_036332_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036332_2 "ry.active_uniform.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036332, VkglTestCase_036332_1, VkglTestCase_036332_2);

#define VkglTestCase_036333_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036333_2 "uery.active_uniform.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036333, VkglTestCase_036333_1, VkglTestCase_036333_2);

#define VkglTestCase_036334_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036334_2 "ry.active_uniform.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036334, VkglTestCase_036334_1, VkglTestCase_036334_2);

#define VkglTestCase_036335_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036335_2 "y.active_uniform.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036335, VkglTestCase_036335_1, VkglTestCase_036335_2);

#define VkglTestCase_036336_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036336_2 "ery.active_uniform.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036336, VkglTestCase_036336_1, VkglTestCase_036336_2);

#define VkglTestCase_036337_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036337_2 "ery.active_uniform.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036337, VkglTestCase_036337_1, VkglTestCase_036337_2);

#define VkglTestCase_036338_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036338_2 "ry.active_uniform.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036338, VkglTestCase_036338_1, VkglTestCase_036338_2);

#define VkglTestCase_036339_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036339_2 "uery.active_uniform.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036339, VkglTestCase_036339_1, VkglTestCase_036339_2);

#define VkglTestCase_036340_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036340_2 "ry.active_uniform.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036340, VkglTestCase_036340_1, VkglTestCase_036340_2);

#define VkglTestCase_036341_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036341_2 "y.active_uniform.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036341, VkglTestCase_036341_1, VkglTestCase_036341_2);

#define VkglTestCase_036342_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036342_2 "ery.active_uniform.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036342, VkglTestCase_036342_1, VkglTestCase_036342_2);

#define VkglTestCase_036343_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036343_2 "ery.active_uniform.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036343, VkglTestCase_036343_1, VkglTestCase_036343_2);

#define VkglTestCase_036344_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036344_2 "ry.active_uniform.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036344, VkglTestCase_036344_1, VkglTestCase_036344_2);

#define VkglTestCase_036345_1 "dEQP-GLES3.functional.uniform_api.info_q"
#define VkglTestCase_036345_2 "uery.active_uniform.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036345, VkglTestCase_036345_1, VkglTestCase_036345_2);

#define VkglTestCase_036346_1 "dEQP-GLES3.functional.uniform_api.info_que"
#define VkglTestCase_036346_2 "ry.active_uniform.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036346, VkglTestCase_036346_1, VkglTestCase_036346_2);

#define VkglTestCase_036347_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036347_2 "y.active_uniform.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036347, VkglTestCase_036347_1, VkglTestCase_036347_2);

#define VkglTestCase_036348_1 "dEQP-GLES3.functional.uniform_api.info_qu"
#define VkglTestCase_036348_2 "ery.active_uniform.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036348, VkglTestCase_036348_1, VkglTestCase_036348_2);

#define VkglTestCase_036349_1 "dEQP-GLES3.functional.uniform_api.info_query"
#define VkglTestCase_036349_2 ".active_uniform.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036349, VkglTestCase_036349_1, VkglTestCase_036349_2);

#define VkglTestCase_036350_1 "dEQP-GLES3.functional.uniform_api.info_query."
#define VkglTestCase_036350_2 "active_uniform.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036350, VkglTestCase_036350_1, VkglTestCase_036350_2);

#define VkglTestCase_036351_1 "dEQP-GLES3.functional.uniform_api.info_quer"
#define VkglTestCase_036351_2 "y.active_uniform.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30037TestSuite, TestCase_036351, VkglTestCase_036351_1, VkglTestCase_036351_2);
