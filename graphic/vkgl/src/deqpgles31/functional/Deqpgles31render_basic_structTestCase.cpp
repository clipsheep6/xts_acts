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

#define VkglTestCase_016987_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016987_2 "ointer.render.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016987, VkglTestCase_016987_1, VkglTestCase_016987_2);

#define VkglTestCase_016988_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016988_2 "inter.render.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016988, VkglTestCase_016988_1, VkglTestCase_016988_2);

#define VkglTestCase_016989_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016989_2 "pointer.render.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016989, VkglTestCase_016989_1, VkglTestCase_016989_2);

#define VkglTestCase_016990_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016990_2 "ointer.render.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016990, VkglTestCase_016990_1, VkglTestCase_016990_2);

#define VkglTestCase_016991_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016991_2 "inter.render.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016991, VkglTestCase_016991_1, VkglTestCase_016991_2);

#define VkglTestCase_016992_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016992_2 "pointer.render.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016992, VkglTestCase_016992_1, VkglTestCase_016992_2);

#define VkglTestCase_016993_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016993_2 "ointer.render.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016993, VkglTestCase_016993_1, VkglTestCase_016993_2);

#define VkglTestCase_016994_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016994_2 "inter.render.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016994, VkglTestCase_016994_1, VkglTestCase_016994_2);

#define VkglTestCase_016995_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016995_2 "pointer.render.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016995, VkglTestCase_016995_1, VkglTestCase_016995_2);

#define VkglTestCase_016996_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016996_2 "ointer.render.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016996, VkglTestCase_016996_1, VkglTestCase_016996_2);

#define VkglTestCase_016997_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016997_2 "inter.render.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016997, VkglTestCase_016997_1, VkglTestCase_016997_2);

#define VkglTestCase_016998_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_016998_2 "pointer.render.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016998, VkglTestCase_016998_1, VkglTestCase_016998_2);

#define VkglTestCase_016999_1 "dEQP-GLES31.functional.program_uniform.by_p"
#define VkglTestCase_016999_2 "ointer.render.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016999, VkglTestCase_016999_1, VkglTestCase_016999_2);

#define VkglTestCase_017000_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_017000_2 "inter.render.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017000, VkglTestCase_017000_1, VkglTestCase_017000_2);

#define VkglTestCase_017001_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017001_2 "pointer.render.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017001, VkglTestCase_017001_1, VkglTestCase_017001_2);

#define VkglTestCase_017002_1 "dEQP-GLES31.functional.program_uniform.by_pointer"
#define VkglTestCase_017002_2 ".render.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017002, VkglTestCase_017002_1, VkglTestCase_017002_2);

#define VkglTestCase_017003_1 "dEQP-GLES31.functional.program_uniform.by_pointer."
#define VkglTestCase_017003_2 "render.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017003, VkglTestCase_017003_1, VkglTestCase_017003_2);

#define VkglTestCase_017004_1 "dEQP-GLES31.functional.program_uniform.by_pointe"
#define VkglTestCase_017004_2 "r.render.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017004, VkglTestCase_017004_1, VkglTestCase_017004_2);

#define VkglTestCase_017371_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017371_2 "value.render.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017371, VkglTestCase_017371_1, VkglTestCase_017371_2);

#define VkglTestCase_017372_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017372_2 "alue.render.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017372, VkglTestCase_017372_1, VkglTestCase_017372_2);

#define VkglTestCase_017373_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017373_2 "_value.render.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017373, VkglTestCase_017373_1, VkglTestCase_017373_2);

#define VkglTestCase_017374_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017374_2 "value.render.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017374, VkglTestCase_017374_1, VkglTestCase_017374_2);

#define VkglTestCase_017375_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017375_2 "alue.render.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017375, VkglTestCase_017375_1, VkglTestCase_017375_2);

#define VkglTestCase_017376_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017376_2 "_value.render.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017376, VkglTestCase_017376_1, VkglTestCase_017376_2);

#define VkglTestCase_017377_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017377_2 "value.render.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017377, VkglTestCase_017377_1, VkglTestCase_017377_2);

#define VkglTestCase_017378_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017378_2 "alue.render.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017378, VkglTestCase_017378_1, VkglTestCase_017378_2);

#define VkglTestCase_017379_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017379_2 "_value.render.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017379, VkglTestCase_017379_1, VkglTestCase_017379_2);

#define VkglTestCase_017380_1 "dEQP-GLES31.functional.program_uniform.by_"
#define VkglTestCase_017380_2 "value.render.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017380, VkglTestCase_017380_1, VkglTestCase_017380_2);

#define VkglTestCase_017381_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017381_2 "alue.render.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017381, VkglTestCase_017381_1, VkglTestCase_017381_2);

#define VkglTestCase_017382_1 "dEQP-GLES31.functional.program_uniform.by"
#define VkglTestCase_017382_2 "_value.render.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017382, VkglTestCase_017382_1, VkglTestCase_017382_2);

#define VkglTestCase_017383_1 "dEQP-GLES31.functional.program_uniform.by_value."
#define VkglTestCase_017383_2 "render.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017383, VkglTestCase_017383_1, VkglTestCase_017383_2);

#define VkglTestCase_017384_1 "dEQP-GLES31.functional.program_uniform.by_value.r"
#define VkglTestCase_017384_2 "ender.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017384, VkglTestCase_017384_1, VkglTestCase_017384_2);

#define VkglTestCase_017385_1 "dEQP-GLES31.functional.program_uniform.by_value"
#define VkglTestCase_017385_2 ".render.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017385, VkglTestCase_017385_1, VkglTestCase_017385_2);
