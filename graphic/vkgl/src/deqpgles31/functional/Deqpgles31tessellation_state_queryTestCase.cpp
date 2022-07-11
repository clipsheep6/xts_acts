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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007926_1 "dEQP-GLES31.functional.tessellati"
#define VkglTestCase_007926_2 "on.state_query.max_patch_vertices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007926, VkglTestCase_007926_1, VkglTestCase_007926_2);

#define VkglTestCase_007927_1 "dEQP-GLES31.functional.tessellati"
#define VkglTestCase_007927_2 "on.state_query.max_tess_gen_level"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007927, VkglTestCase_007927_1, VkglTestCase_007927_2);

#define VkglTestCase_007928_1 "dEQP-GLES31.functional.tessellation.state"
#define VkglTestCase_007928_2 "_query.max_tess_control_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007928, VkglTestCase_007928_1, VkglTestCase_007928_2);

#define VkglTestCase_007929_1 "dEQP-GLES31.functional.tessellation.state_q"
#define VkglTestCase_007929_2 "uery.max_tess_evaluation_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007929, VkglTestCase_007929_1, VkglTestCase_007929_2);

#define VkglTestCase_007930_1 "dEQP-GLES31.functional.tessellation.state_"
#define VkglTestCase_007930_2 "query.max_tess_control_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007930, VkglTestCase_007930_1, VkglTestCase_007930_2);

#define VkglTestCase_007931_1 "dEQP-GLES31.functional.tessellation.state_q"
#define VkglTestCase_007931_2 "uery.max_tess_evaluation_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007931, VkglTestCase_007931_1, VkglTestCase_007931_2);

#define VkglTestCase_007932_1 "dEQP-GLES31.functional.tessellation.state"
#define VkglTestCase_007932_2 "_query.max_tess_control_output_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007932, VkglTestCase_007932_1, VkglTestCase_007932_2);

#define VkglTestCase_007933_1 "dEQP-GLES31.functional.tessellation."
#define VkglTestCase_007933_2 "state_query.max_tess_patch_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007933, VkglTestCase_007933_1, VkglTestCase_007933_2);

#define VkglTestCase_007934_1 "dEQP-GLES31.functional.tessellation.state_qu"
#define VkglTestCase_007934_2 "ery.max_tess_control_total_output_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007934, VkglTestCase_007934_1, VkglTestCase_007934_2);

#define VkglTestCase_007935_1 "dEQP-GLES31.functional.tessellation.state_"
#define VkglTestCase_007935_2 "query.max_tess_evaluation_output_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007935, VkglTestCase_007935_1, VkglTestCase_007935_2);

#define VkglTestCase_007936_1 "dEQP-GLES31.functional.tessellation.sta"
#define VkglTestCase_007936_2 "te_query.max_tess_control_uniform_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007936, VkglTestCase_007936_1, VkglTestCase_007936_2);

#define VkglTestCase_007937_1 "dEQP-GLES31.functional.tessellation.state"
#define VkglTestCase_007937_2 "_query.max_tess_evaluation_uniform_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007937, VkglTestCase_007937_1, VkglTestCase_007937_2);

#define VkglTestCase_007938_1 "dEQP-GLES31.functional.tessellation.stat"
#define VkglTestCase_007938_2 "e_query.max_tess_control_input_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007938, VkglTestCase_007938_1, VkglTestCase_007938_2);

#define VkglTestCase_007939_1 "dEQP-GLES31.functional.tessellation.state_"
#define VkglTestCase_007939_2 "query.max_tess_evaluation_input_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007939, VkglTestCase_007939_1, VkglTestCase_007939_2);

#define VkglTestCase_007940_1 "dEQP-GLES31.functional.tessellation.state_q"
#define VkglTestCase_007940_2 "uery.max_tess_control_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007940, VkglTestCase_007940_1, VkglTestCase_007940_2);

#define VkglTestCase_007941_1 "dEQP-GLES31.functional.tessellation.state_que"
#define VkglTestCase_007941_2 "ry.max_tess_evaluation_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007941, VkglTestCase_007941_1, VkglTestCase_007941_2);

#define VkglTestCase_007942_1 "dEQP-GLES31.functional.tessellation.stat"
#define VkglTestCase_007942_2 "e_query.max_tess_control_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007942, VkglTestCase_007942_1, VkglTestCase_007942_2);

#define VkglTestCase_007943_1 "dEQP-GLES31.functional.tessellation.state"
#define VkglTestCase_007943_2 "_query.max_tess_evaluation_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007943, VkglTestCase_007943_1, VkglTestCase_007943_2);

#define VkglTestCase_007944_1 "dEQP-GLES31.functional.tessellation.sta"
#define VkglTestCase_007944_2 "te_query.max_tess_control_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007944, VkglTestCase_007944_1, VkglTestCase_007944_2);

#define VkglTestCase_007945_1 "dEQP-GLES31.functional.tessellation.state"
#define VkglTestCase_007945_2 "_query.max_tess_evaluation_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007945, VkglTestCase_007945_1, VkglTestCase_007945_2);

#define VkglTestCase_007946_1 "dEQP-GLES31.functional.tessellation.state_q"
#define VkglTestCase_007946_2 "uery.max_tess_control_shader_storage_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007946, VkglTestCase_007946_1, VkglTestCase_007946_2);

#define VkglTestCase_007947_1 "dEQP-GLES31.functional.tessellation.state_qu"
#define VkglTestCase_007947_2 "ery.max_tess_evaluation_shader_storage_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007947, VkglTestCase_007947_1, VkglTestCase_007947_2);

#define VkglTestCase_007948_1 "dEQP-GLES31.functional.tessellation.s"
#define VkglTestCase_007948_2 "tate_query.max_uniform_buffer_bindings"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007948, VkglTestCase_007948_1, VkglTestCase_007948_2);

#define VkglTestCase_007949_1 "dEQP-GLES31.functional.tessellation.s"
#define VkglTestCase_007949_2 "tate_query.max_combined_uniform_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007949, VkglTestCase_007949_1, VkglTestCase_007949_2);

#define VkglTestCase_007950_1 "dEQP-GLES31.functional.tessellation.stat"
#define VkglTestCase_007950_2 "e_query.max_combined_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007950, VkglTestCase_007950_1, VkglTestCase_007950_2);

#define VkglTestCase_007951_1 "dEQP-GLES31.functional.tessellation.state_quer"
#define VkglTestCase_007951_2 "y.max_combined_tess_control_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007951, VkglTestCase_007951_1, VkglTestCase_007951_2);

#define VkglTestCase_007952_1 "dEQP-GLES31.functional.tessellation.state_query"
#define VkglTestCase_007952_2 ".max_combined_tess_evaluation_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007952, VkglTestCase_007952_1, VkglTestCase_007952_2);

#define VkglTestCase_007953_1 "dEQP-GLES31.functional.tessellation.state_q"
#define VkglTestCase_007953_2 "uery.primitive_restart_for_patches_supported"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007953, VkglTestCase_007953_1, VkglTestCase_007953_2);

#define VkglTestCase_007954_1 "dEQP-GLES31.functional.tessella"
#define VkglTestCase_007954_2 "tion.state_query.patch_vertices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007954, VkglTestCase_007954_1, VkglTestCase_007954_2);

#define VkglTestCase_007955_1 "dEQP-GLES31.functional.tessellation.st"
#define VkglTestCase_007955_2 "ate_query.tess_control_output_vertices"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007955, VkglTestCase_007955_1, VkglTestCase_007955_2);

#define VkglTestCase_007956_1 "dEQP-GLES31.functional.tessell"
#define VkglTestCase_007956_2 "ation.state_query.tess_gen_mode"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007956, VkglTestCase_007956_1, VkglTestCase_007956_2);

#define VkglTestCase_007957_1 "dEQP-GLES31.functional.tessellat"
#define VkglTestCase_007957_2 "ion.state_query.tess_gen_spacing"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007957, VkglTestCase_007957_1, VkglTestCase_007957_2);

#define VkglTestCase_007958_1 "dEQP-GLES31.functional.tessellatio"
#define VkglTestCase_007958_2 "n.state_query.tess_gen_vertex_order"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007958, VkglTestCase_007958_1, VkglTestCase_007958_2);

#define VkglTestCase_007959_1 "dEQP-GLES31.functional.tessellati"
#define VkglTestCase_007959_2 "on.state_query.tess_gen_point_mode"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007959, VkglTestCase_007959_1, VkglTestCase_007959_2);

#define VkglTestCase_007960_1 "dEQP-GLES31.functional.tessellation.stat"
#define VkglTestCase_007960_2 "e_query.referenced_by_tess_control_shader"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007960, VkglTestCase_007960_1, VkglTestCase_007960_2);

#define VkglTestCase_007961_1 "dEQP-GLES31.functional.tessellation.state_"
#define VkglTestCase_007961_2 "query.referenced_by_tess_evaluation_shader"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007961, VkglTestCase_007961_1, VkglTestCase_007961_2);

#define VkglTestCase_007962_1 "dEQP-GLES31.functional.tessell"
#define VkglTestCase_007962_2 "ation.state_query.is_per_patch"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007962, VkglTestCase_007962_1, VkglTestCase_007962_2);
