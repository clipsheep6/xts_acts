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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016954_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016954_2 "y_pointer.render.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016954, VkglTestCase_016954_1, VkglTestCase_016954_2);

#define VkglTestCase_016955_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016955_2 "_pointer.render.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016955, VkglTestCase_016955_1, VkglTestCase_016955_2);

#define VkglTestCase_016956_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016956_2 "by_pointer.render.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016956, VkglTestCase_016956_1, VkglTestCase_016956_2);

#define VkglTestCase_016957_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016957_2 "y_pointer.render.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016957, VkglTestCase_016957_1, VkglTestCase_016957_2);

#define VkglTestCase_016958_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016958_2 "_pointer.render.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016958, VkglTestCase_016958_1, VkglTestCase_016958_2);

#define VkglTestCase_016959_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016959_2 "by_pointer.render.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016959, VkglTestCase_016959_1, VkglTestCase_016959_2);

#define VkglTestCase_016960_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016960_2 "y_pointer.render.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016960, VkglTestCase_016960_1, VkglTestCase_016960_2);

#define VkglTestCase_016961_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016961_2 "_pointer.render.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016961, VkglTestCase_016961_1, VkglTestCase_016961_2);

#define VkglTestCase_016962_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016962_2 "by_pointer.render.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016962, VkglTestCase_016962_1, VkglTestCase_016962_2);

#define VkglTestCase_016963_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016963_2 "nter.render.basic_array.mat4_row_major_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016963, VkglTestCase_016963_1, VkglTestCase_016963_2);

#define VkglTestCase_016964_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016964_2 "ter.render.basic_array.mat4_row_major_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016964, VkglTestCase_016964_1, VkglTestCase_016964_2);

#define VkglTestCase_016965_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016965_2 "inter.render.basic_array.mat4_row_major_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016965, VkglTestCase_016965_1, VkglTestCase_016965_2);

#define VkglTestCase_016966_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016966_2 "by_pointer.render.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016966, VkglTestCase_016966_1, VkglTestCase_016966_2);

#define VkglTestCase_016967_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016967_2 "y_pointer.render.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016967, VkglTestCase_016967_1, VkglTestCase_016967_2);

#define VkglTestCase_016968_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_016968_2 ".by_pointer.render.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016968, VkglTestCase_016968_1, VkglTestCase_016968_2);

#define VkglTestCase_016969_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016969_2 "y_pointer.render.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016969, VkglTestCase_016969_1, VkglTestCase_016969_2);

#define VkglTestCase_016970_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016970_2 "_pointer.render.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016970, VkglTestCase_016970_1, VkglTestCase_016970_2);

#define VkglTestCase_016971_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016971_2 "by_pointer.render.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016971, VkglTestCase_016971_1, VkglTestCase_016971_2);

#define VkglTestCase_016972_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016972_2 "y_pointer.render.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016972, VkglTestCase_016972_1, VkglTestCase_016972_2);

#define VkglTestCase_016973_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016973_2 "_pointer.render.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016973, VkglTestCase_016973_1, VkglTestCase_016973_2);

#define VkglTestCase_016974_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016974_2 "by_pointer.render.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016974, VkglTestCase_016974_1, VkglTestCase_016974_2);

#define VkglTestCase_016975_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016975_2 "y_pointer.render.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016975, VkglTestCase_016975_1, VkglTestCase_016975_2);

#define VkglTestCase_016976_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016976_2 "_pointer.render.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016976, VkglTestCase_016976_1, VkglTestCase_016976_2);

#define VkglTestCase_016977_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016977_2 "by_pointer.render.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016977, VkglTestCase_016977_1, VkglTestCase_016977_2);

#define VkglTestCase_016978_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016978_2 "y_pointer.render.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016978, VkglTestCase_016978_1, VkglTestCase_016978_2);

#define VkglTestCase_016979_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016979_2 "_pointer.render.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016979, VkglTestCase_016979_1, VkglTestCase_016979_2);

#define VkglTestCase_016980_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016980_2 "by_pointer.render.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016980, VkglTestCase_016980_1, VkglTestCase_016980_2);

#define VkglTestCase_016981_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_016981_2 "y_pointer.render.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016981, VkglTestCase_016981_1, VkglTestCase_016981_2);

#define VkglTestCase_016982_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016982_2 "_pointer.render.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016982, VkglTestCase_016982_1, VkglTestCase_016982_2);

#define VkglTestCase_016983_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_016983_2 "by_pointer.render.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016983, VkglTestCase_016983_1, VkglTestCase_016983_2);

#define VkglTestCase_016984_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016984_2 "pointer.render.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016984, VkglTestCase_016984_1, VkglTestCase_016984_2);

#define VkglTestCase_016985_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016985_2 "ointer.render.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016985, VkglTestCase_016985_1, VkglTestCase_016985_2);

#define VkglTestCase_016986_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_016986_2 "_pointer.render.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016986, VkglTestCase_016986_1, VkglTestCase_016986_2);

#define VkglTestCase_017344_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017344_2 "by_value.render.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017344, VkglTestCase_017344_1, VkglTestCase_017344_2);

#define VkglTestCase_017345_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017345_2 "y_value.render.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017345, VkglTestCase_017345_1, VkglTestCase_017345_2);

#define VkglTestCase_017346_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017346_2 ".by_value.render.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017346, VkglTestCase_017346_1, VkglTestCase_017346_2);

#define VkglTestCase_017347_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017347_2 "by_value.render.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017347, VkglTestCase_017347_1, VkglTestCase_017347_2);

#define VkglTestCase_017348_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017348_2 "y_value.render.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017348, VkglTestCase_017348_1, VkglTestCase_017348_2);

#define VkglTestCase_017349_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017349_2 ".by_value.render.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017349, VkglTestCase_017349_1, VkglTestCase_017349_2);

#define VkglTestCase_017350_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017350_2 ".by_value.render.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017350, VkglTestCase_017350_1, VkglTestCase_017350_2);

#define VkglTestCase_017351_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017351_2 "by_value.render.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017351, VkglTestCase_017351_1, VkglTestCase_017351_2);

#define VkglTestCase_017352_1 "dEQP-GLES31.functional.program_unifor"
#define VkglTestCase_017352_2 "m.by_value.render.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017352, VkglTestCase_017352_1, VkglTestCase_017352_2);

#define VkglTestCase_017353_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017353_2 "by_value.render.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017353, VkglTestCase_017353_1, VkglTestCase_017353_2);

#define VkglTestCase_017354_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017354_2 "y_value.render.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017354, VkglTestCase_017354_1, VkglTestCase_017354_2);

#define VkglTestCase_017355_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017355_2 ".by_value.render.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017355, VkglTestCase_017355_1, VkglTestCase_017355_2);

#define VkglTestCase_017356_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017356_2 "by_value.render.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017356, VkglTestCase_017356_1, VkglTestCase_017356_2);

#define VkglTestCase_017357_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017357_2 "y_value.render.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017357, VkglTestCase_017357_1, VkglTestCase_017357_2);

#define VkglTestCase_017358_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017358_2 ".by_value.render.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017358, VkglTestCase_017358_1, VkglTestCase_017358_2);

#define VkglTestCase_017359_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017359_2 "by_value.render.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017359, VkglTestCase_017359_1, VkglTestCase_017359_2);

#define VkglTestCase_017360_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017360_2 "y_value.render.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017360, VkglTestCase_017360_1, VkglTestCase_017360_2);

#define VkglTestCase_017361_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017361_2 ".by_value.render.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017361, VkglTestCase_017361_1, VkglTestCase_017361_2);

#define VkglTestCase_017362_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017362_2 "by_value.render.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017362, VkglTestCase_017362_1, VkglTestCase_017362_2);

#define VkglTestCase_017363_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017363_2 "y_value.render.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017363, VkglTestCase_017363_1, VkglTestCase_017363_2);

#define VkglTestCase_017364_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017364_2 ".by_value.render.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017364, VkglTestCase_017364_1, VkglTestCase_017364_2);

#define VkglTestCase_017365_1 "dEQP-GLES31.functional.program_uniform."
#define VkglTestCase_017365_2 "by_value.render.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017365, VkglTestCase_017365_1, VkglTestCase_017365_2);

#define VkglTestCase_017366_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017366_2 "y_value.render.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017366, VkglTestCase_017366_1, VkglTestCase_017366_2);

#define VkglTestCase_017367_1 "dEQP-GLES31.functional.program_uniform"
#define VkglTestCase_017367_2 ".by_value.render.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017367, VkglTestCase_017367_1, VkglTestCase_017367_2);

#define VkglTestCase_017368_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017368_2 "_value.render.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017368, VkglTestCase_017368_1, VkglTestCase_017368_2);

#define VkglTestCase_017369_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017369_2 "value.render.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017369, VkglTestCase_017369_1, VkglTestCase_017369_2);

#define VkglTestCase_017370_1 "dEQP-GLES31.functional.program_uniform.b"
#define VkglTestCase_017370_2 "y_value.render.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017370, VkglTestCase_017370_1, VkglTestCase_017370_2);
