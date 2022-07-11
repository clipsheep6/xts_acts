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
#include "../ActsDeqpgles310005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004976_1 "dEQP-GLES31.functional.shaders.built"
#define VkglTestCase_004976_2 "in_constants.core.max_vertex_attribs"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004976, VkglTestCase_004976_1, VkglTestCase_004976_2);

#define VkglTestCase_004977_1 "dEQP-GLES31.functional.shaders.builtin_c"
#define VkglTestCase_004977_2 "onstants.core.max_vertex_uniform_vectors"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004977, VkglTestCase_004977_1, VkglTestCase_004977_2);

#define VkglTestCase_004978_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_004978_2 "constants.core.max_vertex_output_vectors"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004978, VkglTestCase_004978_1, VkglTestCase_004978_2);

#define VkglTestCase_004979_1 "dEQP-GLES31.functional.shaders.builtin_c"
#define VkglTestCase_004979_2 "onstants.core.max_fragment_input_vectors"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004979, VkglTestCase_004979_1, VkglTestCase_004979_2);

#define VkglTestCase_004980_1 "dEQP-GLES31.functional.shaders.builtin_co"
#define VkglTestCase_004980_2 "nstants.core.max_fragment_uniform_vectors"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004980, VkglTestCase_004980_1, VkglTestCase_004980_2);

#define VkglTestCase_004981_1 "dEQP-GLES31.functional.shaders.buil"
#define VkglTestCase_004981_2 "tin_constants.core.max_draw_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004981, VkglTestCase_004981_1, VkglTestCase_004981_2);

#define VkglTestCase_004982_1 "dEQP-GLES31.functional.shaders.builtin_con"
#define VkglTestCase_004982_2 "stants.core.max_vertex_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004982, VkglTestCase_004982_1, VkglTestCase_004982_2);

#define VkglTestCase_004983_1 "dEQP-GLES31.functional.shaders.builtin_cons"
#define VkglTestCase_004983_2 "tants.core.max_combined_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004983, VkglTestCase_004983_1, VkglTestCase_004983_2);

#define VkglTestCase_004984_1 "dEQP-GLES31.functional.shaders.builtin"
#define VkglTestCase_004984_2 "_constants.core.max_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004984, VkglTestCase_004984_1, VkglTestCase_004984_2);

#define VkglTestCase_004985_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_004985_2 "constants.core.min_program_texel_offset"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004985, VkglTestCase_004985_1, VkglTestCase_004985_2);

#define VkglTestCase_004986_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_004986_2 "constants.core.max_program_texel_offset"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004986, VkglTestCase_004986_1, VkglTestCase_004986_2);

#define VkglTestCase_004987_1 "dEQP-GLES31.functional.shaders.bui"
#define VkglTestCase_004987_2 "ltin_constants.core.max_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004987, VkglTestCase_004987_1, VkglTestCase_004987_2);

#define VkglTestCase_004988_1 "dEQP-GLES31.functional.shaders.builtin_"
#define VkglTestCase_004988_2 "constants.core.max_vertex_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004988, VkglTestCase_004988_1, VkglTestCase_004988_2);

#define VkglTestCase_004989_1 "dEQP-GLES31.functional.shaders.builtin_c"
#define VkglTestCase_004989_2 "onstants.core.max_fragment_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004989, VkglTestCase_004989_1, VkglTestCase_004989_2);

#define VkglTestCase_004990_1 "dEQP-GLES31.functional.shaders.builtin_c"
#define VkglTestCase_004990_2 "onstants.core.max_compute_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004990, VkglTestCase_004990_1, VkglTestCase_004990_2);

#define VkglTestCase_004991_1 "dEQP-GLES31.functional.shaders.builtin_c"
#define VkglTestCase_004991_2 "onstants.core.max_combined_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004991, VkglTestCase_004991_1, VkglTestCase_004991_2);

#define VkglTestCase_004992_1 "dEQP-GLES31.functional.shaders.builtin_consta"
#define VkglTestCase_004992_2 "nts.core.max_combined_shader_output_resources"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004992, VkglTestCase_004992_1, VkglTestCase_004992_2);

#define VkglTestCase_004993_1 "dEQP-GLES31.functional.shaders.builtin_con"
#define VkglTestCase_004993_2 "stants.core.max_compute_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004993, VkglTestCase_004993_1, VkglTestCase_004993_2);

#define VkglTestCase_004994_1 "dEQP-GLES31.functional.shaders.builtin_con"
#define VkglTestCase_004994_2 "stants.core.max_compute_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004994, VkglTestCase_004994_1, VkglTestCase_004994_2);

#define VkglTestCase_004995_1 "dEQP-GLES31.functional.shaders.builtin_c"
#define VkglTestCase_004995_2 "onstants.core.max_compute_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004995, VkglTestCase_004995_1, VkglTestCase_004995_2);

#define VkglTestCase_004996_1 "dEQP-GLES31.functional.shaders.builtin_const"
#define VkglTestCase_004996_2 "ants.core.max_compute_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004996, VkglTestCase_004996_1, VkglTestCase_004996_2);

#define VkglTestCase_004997_1 "dEQP-GLES31.functional.shaders.builtin_c"
#define VkglTestCase_004997_2 "onstants.core.max_vertex_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004997, VkglTestCase_004997_1, VkglTestCase_004997_2);

#define VkglTestCase_004998_1 "dEQP-GLES31.functional.shaders.builtin_co"
#define VkglTestCase_004998_2 "nstants.core.max_fragment_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004998, VkglTestCase_004998_1, VkglTestCase_004998_2);

#define VkglTestCase_004999_1 "dEQP-GLES31.functional.shaders.builtin_co"
#define VkglTestCase_004999_2 "nstants.core.max_combined_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_004999, VkglTestCase_004999_1, VkglTestCase_004999_2);

#define VkglTestCase_005000_1 "dEQP-GLES31.functional.shaders.builtin_c"
#define VkglTestCase_005000_2 "onstants.core.max_atomic_counter_bindings"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_005000, VkglTestCase_005000_1, VkglTestCase_005000_2);

#define VkglTestCase_005001_1 "dEQP-GLES31.functional.shaders.builtin_cons"
#define VkglTestCase_005001_2 "tants.core.max_vertex_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_005001, VkglTestCase_005001_1, VkglTestCase_005001_2);

#define VkglTestCase_005002_1 "dEQP-GLES31.functional.shaders.builtin_const"
#define VkglTestCase_005002_2 "ants.core.max_fragment_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_005002, VkglTestCase_005002_1, VkglTestCase_005002_2);

#define VkglTestCase_005003_1 "dEQP-GLES31.functional.shaders.builtin_const"
#define VkglTestCase_005003_2 "ants.core.max_combined_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_005003, VkglTestCase_005003_1, VkglTestCase_005003_2);

#define VkglTestCase_005004_1 "dEQP-GLES31.functional.shaders.builtin_con"
#define VkglTestCase_005004_2 "stants.core.max_atomic_counter_buffer_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_005004, VkglTestCase_005004_1, VkglTestCase_005004_2);

#define VkglTestCase_005005_1 "dEQP-GLES31.functional.shaders.builtin_co"
#define VkglTestCase_005005_2 "nstants.core.max_compute_work_group_count"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_005005, VkglTestCase_005005_1, VkglTestCase_005005_2);

#define VkglTestCase_005006_1 "dEQP-GLES31.functional.shaders.builtin_c"
#define VkglTestCase_005006_2 "onstants.core.max_compute_work_group_size"
SHRINK_HWTEST_F(ActsDeqpgles310005TestSuite, TestCase_005006, VkglTestCase_005006_1, VkglTestCase_005006_2);
