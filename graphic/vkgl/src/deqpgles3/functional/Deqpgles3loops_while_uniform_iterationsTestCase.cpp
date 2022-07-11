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
#include "../ActsDeqpgles30007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006963_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006963_2 "_uniform_iterations.basic_lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006963, VkglTestCase_006963_1, VkglTestCase_006963_2);

#define VkglTestCase_006964_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006964_2 "uniform_iterations.basic_lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006964, VkglTestCase_006964_1, VkglTestCase_006964_2);

#define VkglTestCase_006965_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006965_2 "uniform_iterations.basic_lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006965, VkglTestCase_006965_1, VkglTestCase_006965_2);

#define VkglTestCase_006966_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_006966_2 "niform_iterations.basic_lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006966, VkglTestCase_006966_1, VkglTestCase_006966_2);

#define VkglTestCase_006967_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006967_2 "uniform_iterations.basic_mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006967, VkglTestCase_006967_1, VkglTestCase_006967_2);

#define VkglTestCase_006968_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_006968_2 "niform_iterations.basic_mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006968, VkglTestCase_006968_1, VkglTestCase_006968_2);

#define VkglTestCase_006969_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_006969_2 "niform_iterations.basic_mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006969, VkglTestCase_006969_1, VkglTestCase_006969_2);

#define VkglTestCase_006970_1 "dEQP-GLES3.functional.shaders.loops.while_un"
#define VkglTestCase_006970_2 "iform_iterations.basic_mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006970, VkglTestCase_006970_1, VkglTestCase_006970_2);

#define VkglTestCase_006971_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006971_2 "_uniform_iterations.basic_highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006971, VkglTestCase_006971_1, VkglTestCase_006971_2);

#define VkglTestCase_006972_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006972_2 "uniform_iterations.basic_highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006972, VkglTestCase_006972_1, VkglTestCase_006972_2);

#define VkglTestCase_006973_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006973_2 "uniform_iterations.basic_highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006973, VkglTestCase_006973_1, VkglTestCase_006973_2);

#define VkglTestCase_006974_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_006974_2 "niform_iterations.basic_highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006974, VkglTestCase_006974_1, VkglTestCase_006974_2);

#define VkglTestCase_006975_1 "dEQP-GLES3.functional.shaders.loops.whi"
#define VkglTestCase_006975_2 "le_uniform_iterations.empty_body_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006975, VkglTestCase_006975_1, VkglTestCase_006975_2);

#define VkglTestCase_006976_1 "dEQP-GLES3.functional.shaders.loops.whil"
#define VkglTestCase_006976_2 "e_uniform_iterations.empty_body_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006976, VkglTestCase_006976_1, VkglTestCase_006976_2);

#define VkglTestCase_006977_1 "dEQP-GLES3.functional.shaders.loops.while_uniform_ite"
#define VkglTestCase_006977_2 "rations.infinite_with_unconditional_break_first_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006977, VkglTestCase_006977_1, VkglTestCase_006977_2);

#define VkglTestCase_006978_1 "dEQP-GLES3.functional.shaders.loops.while_uniform_iter"
#define VkglTestCase_006978_2 "ations.infinite_with_unconditional_break_first_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006978, VkglTestCase_006978_1, VkglTestCase_006978_2);

#define VkglTestCase_006979_1 "dEQP-GLES3.functional.shaders.loops.while_uniform_ite"
#define VkglTestCase_006979_2 "rations.infinite_with_unconditional_break_last_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006979, VkglTestCase_006979_1, VkglTestCase_006979_2);

#define VkglTestCase_006980_1 "dEQP-GLES3.functional.shaders.loops.while_uniform_iter"
#define VkglTestCase_006980_2 "ations.infinite_with_unconditional_break_last_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006980, VkglTestCase_006980_1, VkglTestCase_006980_2);

#define VkglTestCase_006981_1 "dEQP-GLES3.functional.shaders.loops.while_uniform"
#define VkglTestCase_006981_2 "_iterations.infinite_with_conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006981, VkglTestCase_006981_1, VkglTestCase_006981_2);

#define VkglTestCase_006982_1 "dEQP-GLES3.functional.shaders.loops.while_uniform_"
#define VkglTestCase_006982_2 "iterations.infinite_with_conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006982, VkglTestCase_006982_1, VkglTestCase_006982_2);

#define VkglTestCase_006983_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006983_2 "uniform_iterations.single_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006983, VkglTestCase_006983_1, VkglTestCase_006983_2);

#define VkglTestCase_006984_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_006984_2 "niform_iterations.single_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006984, VkglTestCase_006984_1, VkglTestCase_006984_2);

#define VkglTestCase_006985_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_006985_2 "niform_iterations.compound_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006985, VkglTestCase_006985_1, VkglTestCase_006985_2);

#define VkglTestCase_006986_1 "dEQP-GLES3.functional.shaders.loops.while_un"
#define VkglTestCase_006986_2 "iform_iterations.compound_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006986, VkglTestCase_006986_1, VkglTestCase_006986_2);

#define VkglTestCase_006987_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_006987_2 "niform_iterations.sequence_statement_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006987, VkglTestCase_006987_1, VkglTestCase_006987_2);

#define VkglTestCase_006988_1 "dEQP-GLES3.functional.shaders.loops.while_un"
#define VkglTestCase_006988_2 "iform_iterations.sequence_statement_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006988, VkglTestCase_006988_1, VkglTestCase_006988_2);

#define VkglTestCase_006989_1 "dEQP-GLES3.functional.shaders.loops.whil"
#define VkglTestCase_006989_2 "e_uniform_iterations.no_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006989, VkglTestCase_006989_1, VkglTestCase_006989_2);

#define VkglTestCase_006990_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_006990_2 "_uniform_iterations.no_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006990, VkglTestCase_006990_1, VkglTestCase_006990_2);

#define VkglTestCase_006991_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_006991_2 "uniform_iterations.single_iteration_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006991, VkglTestCase_006991_1, VkglTestCase_006991_2);

#define VkglTestCase_006992_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_006992_2 "niform_iterations.single_iteration_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006992, VkglTestCase_006992_1, VkglTestCase_006992_2);

#define VkglTestCase_006993_1 "dEQP-GLES3.functional.shaders.loops.while_uni"
#define VkglTestCase_006993_2 "form_iterations.select_iteration_count_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006993, VkglTestCase_006993_1, VkglTestCase_006993_2);

#define VkglTestCase_006994_1 "dEQP-GLES3.functional.shaders.loops.while_unif"
#define VkglTestCase_006994_2 "orm_iterations.select_iteration_count_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006994, VkglTestCase_006994_1, VkglTestCase_006994_2);

#define VkglTestCase_006995_1 "dEQP-GLES3.functional.shaders.loops.while_un"
#define VkglTestCase_006995_2 "iform_iterations.conditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006995, VkglTestCase_006995_1, VkglTestCase_006995_2);

#define VkglTestCase_006996_1 "dEQP-GLES3.functional.shaders.loops.while_uni"
#define VkglTestCase_006996_2 "form_iterations.conditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006996, VkglTestCase_006996_1, VkglTestCase_006996_2);

#define VkglTestCase_006997_1 "dEQP-GLES3.functional.shaders.loops.while_uni"
#define VkglTestCase_006997_2 "form_iterations.unconditional_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006997, VkglTestCase_006997_1, VkglTestCase_006997_2);

#define VkglTestCase_006998_1 "dEQP-GLES3.functional.shaders.loops.while_unif"
#define VkglTestCase_006998_2 "orm_iterations.unconditional_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006998, VkglTestCase_006998_1, VkglTestCase_006998_2);

#define VkglTestCase_006999_1 "dEQP-GLES3.functional.shaders.loops.whil"
#define VkglTestCase_006999_2 "e_uniform_iterations.only_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_006999, VkglTestCase_006999_1, VkglTestCase_006999_2);

#define VkglTestCase_007000_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007000_2 "_uniform_iterations.only_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007000, VkglTestCase_007000_1, VkglTestCase_007000_2);

#define VkglTestCase_007001_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007001_2 "_uniform_iterations.double_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007001, VkglTestCase_007001_1, VkglTestCase_007001_2);

#define VkglTestCase_007002_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007002_2 "uniform_iterations.double_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007002, VkglTestCase_007002_1, VkglTestCase_007002_2);

#define VkglTestCase_007003_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007003_2 "uniform_iterations.conditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007003, VkglTestCase_007003_1, VkglTestCase_007003_2);

#define VkglTestCase_007004_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_007004_2 "niform_iterations.conditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007004, VkglTestCase_007004_1, VkglTestCase_007004_2);

#define VkglTestCase_007005_1 "dEQP-GLES3.functional.shaders.loops.while_u"
#define VkglTestCase_007005_2 "niform_iterations.unconditional_break_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007005, VkglTestCase_007005_1, VkglTestCase_007005_2);

#define VkglTestCase_007006_1 "dEQP-GLES3.functional.shaders.loops.while_un"
#define VkglTestCase_007006_2 "iform_iterations.unconditional_break_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007006, VkglTestCase_007006_1, VkglTestCase_007006_2);

#define VkglTestCase_007007_1 "dEQP-GLES3.functional.shaders.loops.whil"
#define VkglTestCase_007007_2 "e_uniform_iterations.pre_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007007, VkglTestCase_007007_1, VkglTestCase_007007_2);

#define VkglTestCase_007008_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007008_2 "_uniform_iterations.pre_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007008, VkglTestCase_007008_1, VkglTestCase_007008_2);

#define VkglTestCase_007009_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007009_2 "_uniform_iterations.post_increment_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007009, VkglTestCase_007009_1, VkglTestCase_007009_2);

#define VkglTestCase_007010_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007010_2 "uniform_iterations.post_increment_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007010, VkglTestCase_007010_1, VkglTestCase_007010_2);

#define VkglTestCase_007011_1 "dEQP-GLES3.functional.shaders.loops.while_un"
#define VkglTestCase_007011_2 "iform_iterations.mixed_break_continue_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007011, VkglTestCase_007011_1, VkglTestCase_007011_2);

#define VkglTestCase_007012_1 "dEQP-GLES3.functional.shaders.loops.while_uni"
#define VkglTestCase_007012_2 "form_iterations.mixed_break_continue_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007012, VkglTestCase_007012_1, VkglTestCase_007012_2);

#define VkglTestCase_007013_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007013_2 "_uniform_iterations.vector_counter_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007013, VkglTestCase_007013_1, VkglTestCase_007013_2);

#define VkglTestCase_007014_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007014_2 "uniform_iterations.vector_counter_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007014, VkglTestCase_007014_1, VkglTestCase_007014_2);

#define VkglTestCase_007015_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007015_2 "_uniform_iterations.101_iterations_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007015, VkglTestCase_007015_1, VkglTestCase_007015_2);

#define VkglTestCase_007016_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007016_2 "uniform_iterations.101_iterations_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007016, VkglTestCase_007016_1, VkglTestCase_007016_2);

#define VkglTestCase_007017_1 "dEQP-GLES3.functional.shaders.loops.wh"
#define VkglTestCase_007017_2 "ile_uniform_iterations.sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007017, VkglTestCase_007017_1, VkglTestCase_007017_2);

#define VkglTestCase_007018_1 "dEQP-GLES3.functional.shaders.loops.whi"
#define VkglTestCase_007018_2 "le_uniform_iterations.sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007018, VkglTestCase_007018_1, VkglTestCase_007018_2);

#define VkglTestCase_007019_1 "dEQP-GLES3.functional.shaders.loops.w"
#define VkglTestCase_007019_2 "hile_uniform_iterations.nested_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007019, VkglTestCase_007019_1, VkglTestCase_007019_2);

#define VkglTestCase_007020_1 "dEQP-GLES3.functional.shaders.loops.wh"
#define VkglTestCase_007020_2 "ile_uniform_iterations.nested_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007020, VkglTestCase_007020_1, VkglTestCase_007020_2);

#define VkglTestCase_007021_1 "dEQP-GLES3.functional.shaders.loops.while"
#define VkglTestCase_007021_2 "_uniform_iterations.nested_sequence_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007021, VkglTestCase_007021_1, VkglTestCase_007021_2);

#define VkglTestCase_007022_1 "dEQP-GLES3.functional.shaders.loops.while_"
#define VkglTestCase_007022_2 "uniform_iterations.nested_sequence_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007022, VkglTestCase_007022_1, VkglTestCase_007022_2);

#define VkglTestCase_007023_1 "dEQP-GLES3.functional.shaders.loops.while_unif"
#define VkglTestCase_007023_2 "orm_iterations.nested_tricky_dataflow_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007023, VkglTestCase_007023_1, VkglTestCase_007023_2);

#define VkglTestCase_007024_1 "dEQP-GLES3.functional.shaders.loops.while_unifo"
#define VkglTestCase_007024_2 "rm_iterations.nested_tricky_dataflow_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007024, VkglTestCase_007024_1, VkglTestCase_007024_2);

#define VkglTestCase_007025_1 "dEQP-GLES3.functional.shaders.loops.while_unif"
#define VkglTestCase_007025_2 "orm_iterations.nested_tricky_dataflow_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007025, VkglTestCase_007025_1, VkglTestCase_007025_2);

#define VkglTestCase_007026_1 "dEQP-GLES3.functional.shaders.loops.while_unifo"
#define VkglTestCase_007026_2 "rm_iterations.nested_tricky_dataflow_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30007TestSuite, TestCase_007026, VkglTestCase_007026_1, VkglTestCase_007026_2);
