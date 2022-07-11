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
#include "../ActsDeqpgles30003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002792_1 "dEQP-GLES3.functional.shaders.declaratio"
#define VkglTestCase_002792_2 "ns.invalid_declarations.in_in_vertex_main"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002792, VkglTestCase_002792_1, VkglTestCase_002792_2);

#define VkglTestCase_002793_1 "dEQP-GLES3.functional.shaders.declaration"
#define VkglTestCase_002793_2 "s.invalid_declarations.out_in_vertex_main"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002793, VkglTestCase_002793_1, VkglTestCase_002793_2);

#define VkglTestCase_002794_1 "dEQP-GLES3.functional.shaders.declaration"
#define VkglTestCase_002794_2 "s.invalid_declarations.in_in_fragment_main"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002794, VkglTestCase_002794_1, VkglTestCase_002794_2);

#define VkglTestCase_002795_1 "dEQP-GLES3.functional.shaders.declarations"
#define VkglTestCase_002795_2 ".invalid_declarations.out_in_fragment_main"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002795, VkglTestCase_002795_1, VkglTestCase_002795_2);

#define VkglTestCase_002796_1 "dEQP-GLES3.functional.shaders.declarations."
#define VkglTestCase_002796_2 "invalid_declarations.uniform_in_vertex_main"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002796, VkglTestCase_002796_1, VkglTestCase_002796_2);

#define VkglTestCase_002797_1 "dEQP-GLES3.functional.shaders.declarations.i"
#define VkglTestCase_002797_2 "nvalid_declarations.uniform_in_fragment_main"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002797, VkglTestCase_002797_1, VkglTestCase_002797_2);

#define VkglTestCase_002798_1 "dEQP-GLES3.functional.shaders.declarations.inv"
#define VkglTestCase_002798_2 "alid_declarations.uniform_block_in_main_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002798, VkglTestCase_002798_1, VkglTestCase_002798_2);

#define VkglTestCase_002799_1 "dEQP-GLES3.functional.shaders.declarations.inva"
#define VkglTestCase_002799_2 "lid_declarations.uniform_block_in_main_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002799, VkglTestCase_002799_1, VkglTestCase_002799_2);

#define VkglTestCase_002800_1 "dEQP-GLES3.functional.shaders.declaration"
#define VkglTestCase_002800_2 "s.invalid_declarations.invariant_attribute"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002800, VkglTestCase_002800_1, VkglTestCase_002800_2);

#define VkglTestCase_002801_1 "dEQP-GLES3.functional.shaders.declaratio"
#define VkglTestCase_002801_2 "ns.invalid_declarations.invariant_uniform"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002801, VkglTestCase_002801_1, VkglTestCase_002801_2);

#define VkglTestCase_002802_1 "dEQP-GLES3.functional.shaders.declarations.inval"
#define VkglTestCase_002802_2 "id_declarations.invariant_uniform_block_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002802, VkglTestCase_002802_1, VkglTestCase_002802_2);

#define VkglTestCase_002803_1 "dEQP-GLES3.functional.shaders.declarations.invali"
#define VkglTestCase_002803_2 "d_declarations.invariant_uniform_block_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002803, VkglTestCase_002803_1, VkglTestCase_002803_2);

#define VkglTestCase_002804_1 "dEQP-GLES3.functional.shaders.declarations.inval"
#define VkglTestCase_002804_2 "id_declarations.invariant_uniform_block_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002804, VkglTestCase_002804_1, VkglTestCase_002804_2);

#define VkglTestCase_002805_1 "dEQP-GLES3.functional.shaders.declarations.invali"
#define VkglTestCase_002805_2 "d_declarations.invariant_uniform_block_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002805, VkglTestCase_002805_1, VkglTestCase_002805_2);

#define VkglTestCase_002806_1 "dEQP-GLES3.functional.shaders.declarations.invalid"
#define VkglTestCase_002806_2 "_declarations.uniform_block_layout_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002806, VkglTestCase_002806_1, VkglTestCase_002806_2);

#define VkglTestCase_002807_1 "dEQP-GLES3.functional.shaders.declarations.invalid_"
#define VkglTestCase_002807_2 "declarations.uniform_block_layout_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002807, VkglTestCase_002807_1, VkglTestCase_002807_2);

#define VkglTestCase_002808_1 "dEQP-GLES3.functional.shaders.declarations.invalid_dec"
#define VkglTestCase_002808_2 "larations.uniform_block_member_layout_qualifier_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002808, VkglTestCase_002808_1, VkglTestCase_002808_2);

#define VkglTestCase_002809_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decl"
#define VkglTestCase_002809_2 "arations.uniform_block_member_layout_qualifier_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002809, VkglTestCase_002809_1, VkglTestCase_002809_2);

#define VkglTestCase_002810_1 "dEQP-GLES3.functional.shaders.declarations.invalid_dec"
#define VkglTestCase_002810_2 "larations.uniform_block_nested_struct_definition_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002810, VkglTestCase_002810_1, VkglTestCase_002810_2);

#define VkglTestCase_002811_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decl"
#define VkglTestCase_002811_2 "arations.uniform_block_nested_struct_definition_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002811, VkglTestCase_002811_1, VkglTestCase_002811_2);

#define VkglTestCase_002812_1 "dEQP-GLES3.functional.shaders.declarations.in"
#define VkglTestCase_002812_2 "valid_declarations.nested_uniform_block_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002812, VkglTestCase_002812_1, VkglTestCase_002812_2);

#define VkglTestCase_002813_1 "dEQP-GLES3.functional.shaders.declarations.inv"
#define VkglTestCase_002813_2 "alid_declarations.nested_uniform_block_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002813, VkglTestCase_002813_1, VkglTestCase_002813_2);

#define VkglTestCase_002814_1 "dEQP-GLES3.functional.shaders.declarations.inva"
#define VkglTestCase_002814_2 "lid_declarations.uniform_block_sampler_2d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002814, VkglTestCase_002814_1, VkglTestCase_002814_2);

#define VkglTestCase_002815_1 "dEQP-GLES3.functional.shaders.declarations.inval"
#define VkglTestCase_002815_2 "id_declarations.uniform_block_sampler_2d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002815, VkglTestCase_002815_1, VkglTestCase_002815_2);

#define VkglTestCase_002816_1 "dEQP-GLES3.functional.shaders.declarations.inval"
#define VkglTestCase_002816_2 "id_declarations.uniform_block_sampler_cube_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002816, VkglTestCase_002816_1, VkglTestCase_002816_2);

#define VkglTestCase_002817_1 "dEQP-GLES3.functional.shaders.declarations.invali"
#define VkglTestCase_002817_2 "d_declarations.uniform_block_sampler_cube_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002817, VkglTestCase_002817_1, VkglTestCase_002817_2);

#define VkglTestCase_002818_1 "dEQP-GLES3.functional.shaders.declarations.invalid_dec"
#define VkglTestCase_002818_2 "larations.uniform_block_missing_member_semicolon_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002818, VkglTestCase_002818_1, VkglTestCase_002818_2);

#define VkglTestCase_002819_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decl"
#define VkglTestCase_002819_2 "arations.uniform_block_missing_member_semicolon_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002819, VkglTestCase_002819_1, VkglTestCase_002819_2);

#define VkglTestCase_002820_1 "dEQP-GLES3.functional.shaders.declarations.invalid_de"
#define VkglTestCase_002820_2 "clarations.uniform_block_missing_end_semicolon_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002820, VkglTestCase_002820_1, VkglTestCase_002820_2);

#define VkglTestCase_002821_1 "dEQP-GLES3.functional.shaders.declarations.invalid_dec"
#define VkglTestCase_002821_2 "larations.uniform_block_missing_end_semicolon_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002821, VkglTestCase_002821_1, VkglTestCase_002821_2);

#define VkglTestCase_002822_1 "dEQP-GLES3.functional.shaders.declarations.invalid_dec"
#define VkglTestCase_002822_2 "larations.uniform_block_duplicate_member_name_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002822, VkglTestCase_002822_1, VkglTestCase_002822_2);

#define VkglTestCase_002823_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decl"
#define VkglTestCase_002823_2 "arations.uniform_block_duplicate_member_name_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002823, VkglTestCase_002823_1, VkglTestCase_002823_2);

#define VkglTestCase_002824_1 "dEQP-GLES3.functional.shaders.declarations.invalid_dec"
#define VkglTestCase_002824_2 "larations.uniform_block_duplicate_member_name_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002824, VkglTestCase_002824_1, VkglTestCase_002824_2);

#define VkglTestCase_002825_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decl"
#define VkglTestCase_002825_2 "arations.uniform_block_duplicate_member_name_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002825, VkglTestCase_002825_1, VkglTestCase_002825_2);

#define VkglTestCase_002826_1 "dEQP-GLES3.functional.shaders.declarations.invalid_dec"
#define VkglTestCase_002826_2 "larations.uniform_block_duplicate_member_name_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002826, VkglTestCase_002826_1, VkglTestCase_002826_2);

#define VkglTestCase_002827_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decl"
#define VkglTestCase_002827_2 "arations.uniform_block_duplicate_member_name_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002827, VkglTestCase_002827_1, VkglTestCase_002827_2);

#define VkglTestCase_002828_1 "dEQP-GLES3.functional.shaders.declarations.invalid_d"
#define VkglTestCase_002828_2 "eclarations.uniform_block_duplicate_block_name_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002828, VkglTestCase_002828_1, VkglTestCase_002828_2);

#define VkglTestCase_002829_1 "dEQP-GLES3.functional.shaders.declarations.invalid_de"
#define VkglTestCase_002829_2 "clarations.uniform_block_duplicate_block_name_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002829, VkglTestCase_002829_1, VkglTestCase_002829_2);

#define VkglTestCase_002830_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decl"
#define VkglTestCase_002830_2 "arations.uniform_block_duplicate_instance_name_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002830, VkglTestCase_002830_1, VkglTestCase_002830_2);

#define VkglTestCase_002831_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decla"
#define VkglTestCase_002831_2 "rations.uniform_block_duplicate_instance_name_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002831, VkglTestCase_002831_1, VkglTestCase_002831_2);

#define VkglTestCase_002832_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decl"
#define VkglTestCase_002832_2 "arations.uniform_block_duplicate_instance_name_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002832, VkglTestCase_002832_1, VkglTestCase_002832_2);

#define VkglTestCase_002833_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decla"
#define VkglTestCase_002833_2 "rations.uniform_block_duplicate_instance_name_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002833, VkglTestCase_002833_1, VkglTestCase_002833_2);

#define VkglTestCase_002834_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decl"
#define VkglTestCase_002834_2 "arations.uniform_block_duplicate_instance_name_3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002834, VkglTestCase_002834_1, VkglTestCase_002834_2);

#define VkglTestCase_002835_1 "dEQP-GLES3.functional.shaders.declarations.invalid_decla"
#define VkglTestCase_002835_2 "rations.uniform_block_duplicate_instance_name_3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002835, VkglTestCase_002835_1, VkglTestCase_002835_2);

#define VkglTestCase_002836_1 "dEQP-GLES3.functional.shaders.declarations.invalid_declar"
#define VkglTestCase_002836_2 "ations.uniform_block_array_without_instance_name_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002836, VkglTestCase_002836_1, VkglTestCase_002836_2);

#define VkglTestCase_002837_1 "dEQP-GLES3.functional.shaders.declarations.invalid_declara"
#define VkglTestCase_002837_2 "tions.uniform_block_array_without_instance_name_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002837, VkglTestCase_002837_1, VkglTestCase_002837_2);

#define VkglTestCase_002838_1 "dEQP-GLES3.functional.shaders.declarations.invalid_declar"
#define VkglTestCase_002838_2 "ations.uniform_block_array_without_instance_name_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002838, VkglTestCase_002838_1, VkglTestCase_002838_2);

#define VkglTestCase_002839_1 "dEQP-GLES3.functional.shaders.declarations.invalid_declara"
#define VkglTestCase_002839_2 "tions.uniform_block_array_without_instance_name_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002839, VkglTestCase_002839_1, VkglTestCase_002839_2);

#define VkglTestCase_002840_1 "dEQP-GLES3.functional.shaders.declarations."
#define VkglTestCase_002840_2 "invalid_declarations.uniform_block_in_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002840, VkglTestCase_002840_1, VkglTestCase_002840_2);

#define VkglTestCase_002841_1 "dEQP-GLES3.functional.shaders.declarations.i"
#define VkglTestCase_002841_2 "nvalid_declarations.uniform_block_in_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002841, VkglTestCase_002841_1, VkglTestCase_002841_2);

#define VkglTestCase_002842_1 "dEQP-GLES3.functional.shaders.declarations.i"
#define VkglTestCase_002842_2 "nvalid_declarations.uniform_block_out_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002842, VkglTestCase_002842_1, VkglTestCase_002842_2);

#define VkglTestCase_002843_1 "dEQP-GLES3.functional.shaders.declarations.in"
#define VkglTestCase_002843_2 "valid_declarations.uniform_block_out_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002843, VkglTestCase_002843_1, VkglTestCase_002843_2);

#define VkglTestCase_002844_1 "dEQP-GLES3.functional.shaders.declarations.in"
#define VkglTestCase_002844_2 "valid_declarations.uniform_block_const_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002844, VkglTestCase_002844_1, VkglTestCase_002844_2);

#define VkglTestCase_002845_1 "dEQP-GLES3.functional.shaders.declarations.inv"
#define VkglTestCase_002845_2 "alid_declarations.uniform_block_const_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30003TestSuite, TestCase_002845, VkglTestCase_002845_1, VkglTestCase_002845_2);
