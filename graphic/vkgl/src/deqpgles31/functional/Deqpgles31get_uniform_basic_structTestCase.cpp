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

#define VkglTestCase_016765_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016765_2 "ter.get_uniform.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016765, VkglTestCase_016765_1, VkglTestCase_016765_2);

#define VkglTestCase_016766_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016766_2 "er.get_uniform.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016766, VkglTestCase_016766_1, VkglTestCase_016766_2);

#define VkglTestCase_016767_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016767_2 "nter.get_uniform.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016767, VkglTestCase_016767_1, VkglTestCase_016767_2);

#define VkglTestCase_016768_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016768_2 "nter.get_uniform.basic_struct.mat4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016768, VkglTestCase_016768_1, VkglTestCase_016768_2);

#define VkglTestCase_016769_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016769_2 "ter.get_uniform.basic_struct.mat4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016769, VkglTestCase_016769_1, VkglTestCase_016769_2);

#define VkglTestCase_016770_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016770_2 "inter.get_uniform.basic_struct.mat4_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016770, VkglTestCase_016770_1, VkglTestCase_016770_2);

#define VkglTestCase_016771_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016771_2 "nter.get_uniform.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016771, VkglTestCase_016771_1, VkglTestCase_016771_2);

#define VkglTestCase_016772_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016772_2 "ter.get_uniform.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016772, VkglTestCase_016772_1, VkglTestCase_016772_2);

#define VkglTestCase_016773_1 "dEQP-GLES31.functional.program_uniform.by_po"
#define VkglTestCase_016773_2 "inter.get_uniform.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016773, VkglTestCase_016773_1, VkglTestCase_016773_2);

#define VkglTestCase_016774_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016774_2 "ter.get_uniform.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016774, VkglTestCase_016774_1, VkglTestCase_016774_2);

#define VkglTestCase_016775_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016775_2 "er.get_uniform.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016775, VkglTestCase_016775_1, VkglTestCase_016775_2);

#define VkglTestCase_016776_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016776_2 "nter.get_uniform.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016776, VkglTestCase_016776_1, VkglTestCase_016776_2);

#define VkglTestCase_016777_1 "dEQP-GLES31.functional.program_uniform.by_poin"
#define VkglTestCase_016777_2 "ter.get_uniform.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016777, VkglTestCase_016777_1, VkglTestCase_016777_2);

#define VkglTestCase_016778_1 "dEQP-GLES31.functional.program_uniform.by_point"
#define VkglTestCase_016778_2 "er.get_uniform.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016778, VkglTestCase_016778_1, VkglTestCase_016778_2);

#define VkglTestCase_016779_1 "dEQP-GLES31.functional.program_uniform.by_poi"
#define VkglTestCase_016779_2 "nter.get_uniform.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016779, VkglTestCase_016779_1, VkglTestCase_016779_2);

#define VkglTestCase_016780_1 "dEQP-GLES31.functional.program_uniform.by_pointer.g"
#define VkglTestCase_016780_2 "et_uniform.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016780, VkglTestCase_016780_1, VkglTestCase_016780_2);

#define VkglTestCase_016781_1 "dEQP-GLES31.functional.program_uniform.by_pointer.ge"
#define VkglTestCase_016781_2 "t_uniform.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016781, VkglTestCase_016781_1, VkglTestCase_016781_2);

#define VkglTestCase_016782_1 "dEQP-GLES31.functional.program_uniform.by_pointer."
#define VkglTestCase_016782_2 "get_uniform.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016782, VkglTestCase_016782_1, VkglTestCase_016782_2);

#define VkglTestCase_017224_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017224_2 "ue.get_uniform.basic_struct.float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017224, VkglTestCase_017224_1, VkglTestCase_017224_2);

#define VkglTestCase_017225_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017225_2 "e.get_uniform.basic_struct.float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017225, VkglTestCase_017225_1, VkglTestCase_017225_2);

#define VkglTestCase_017226_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017226_2 "lue.get_uniform.basic_struct.float_vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017226, VkglTestCase_017226_1, VkglTestCase_017226_2);

#define VkglTestCase_017227_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017227_2 "lue.get_uniform.basic_struct.int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017227, VkglTestCase_017227_1, VkglTestCase_017227_2);

#define VkglTestCase_017228_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017228_2 "ue.get_uniform.basic_struct.int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017228, VkglTestCase_017228_1, VkglTestCase_017228_2);

#define VkglTestCase_017229_1 "dEQP-GLES31.functional.program_uniform.by_v"
#define VkglTestCase_017229_2 "alue.get_uniform.basic_struct.int_ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017229, VkglTestCase_017229_1, VkglTestCase_017229_2);

#define VkglTestCase_017230_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017230_2 "ue.get_uniform.basic_struct.uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017230, VkglTestCase_017230_1, VkglTestCase_017230_2);

#define VkglTestCase_017231_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017231_2 "e.get_uniform.basic_struct.uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017231, VkglTestCase_017231_1, VkglTestCase_017231_2);

#define VkglTestCase_017232_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017232_2 "lue.get_uniform.basic_struct.uint_uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017232, VkglTestCase_017232_1, VkglTestCase_017232_2);

#define VkglTestCase_017233_1 "dEQP-GLES31.functional.program_uniform.by_val"
#define VkglTestCase_017233_2 "ue.get_uniform.basic_struct.bool_bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017233, VkglTestCase_017233_1, VkglTestCase_017233_2);

#define VkglTestCase_017234_1 "dEQP-GLES31.functional.program_uniform.by_valu"
#define VkglTestCase_017234_2 "e.get_uniform.basic_struct.bool_bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017234, VkglTestCase_017234_1, VkglTestCase_017234_2);

#define VkglTestCase_017235_1 "dEQP-GLES31.functional.program_uniform.by_va"
#define VkglTestCase_017235_2 "lue.get_uniform.basic_struct.bool_bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017235, VkglTestCase_017235_1, VkglTestCase_017235_2);

#define VkglTestCase_017236_1 "dEQP-GLES31.functional.program_uniform.by_value.ge"
#define VkglTestCase_017236_2 "t_uniform.basic_struct.sampler2D_samplerCube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017236, VkglTestCase_017236_1, VkglTestCase_017236_2);

#define VkglTestCase_017237_1 "dEQP-GLES31.functional.program_uniform.by_value.get"
#define VkglTestCase_017237_2 "_uniform.basic_struct.sampler2D_samplerCube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017237, VkglTestCase_017237_1, VkglTestCase_017237_2);

#define VkglTestCase_017238_1 "dEQP-GLES31.functional.program_uniform.by_value.g"
#define VkglTestCase_017238_2 "et_uniform.basic_struct.sampler2D_samplerCube_both"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_017238, VkglTestCase_017238_1, VkglTestCase_017238_2);
