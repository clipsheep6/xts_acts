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

#define VkglTestCase_016277_1 "dEQP-GLES31.functional.geometry_shadi"
#define VkglTestCase_016277_2 "ng.query.max_geometry_input_components"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016277, VkglTestCase_016277_1, VkglTestCase_016277_2);

#define VkglTestCase_016278_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016278_2 "g.query.max_geometry_output_components"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016278, VkglTestCase_016278_1, VkglTestCase_016278_2);

#define VkglTestCase_016279_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016279_2 "ing.query.max_geometry_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016279, VkglTestCase_016279_1, VkglTestCase_016279_2);

#define VkglTestCase_016280_1 "dEQP-GLES31.functional.geometry_shading"
#define VkglTestCase_016280_2 ".query.max_geometry_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016280, VkglTestCase_016280_1, VkglTestCase_016280_2);

#define VkglTestCase_016281_1 "dEQP-GLES31.functional.geometry_shadi"
#define VkglTestCase_016281_2 "ng.query.max_geometry_output_vertices"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016281, VkglTestCase_016281_1, VkglTestCase_016281_2);

#define VkglTestCase_016282_1 "dEQP-GLES31.functional.geometry_shading.q"
#define VkglTestCase_016282_2 "uery.max_geometry_total_output_components"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016282, VkglTestCase_016282_1, VkglTestCase_016282_2);

#define VkglTestCase_016283_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016283_2 "g.query.max_geometry_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016283, VkglTestCase_016283_1, VkglTestCase_016283_2);

#define VkglTestCase_016284_1 "dEQP-GLES31.functional.geometry_shadi"
#define VkglTestCase_016284_2 "ng.query.max_geometry_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016284, VkglTestCase_016284_1, VkglTestCase_016284_2);

#define VkglTestCase_016285_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016285_2 "query.max_geometry_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016285, VkglTestCase_016285_1, VkglTestCase_016285_2);

#define VkglTestCase_016286_1 "dEQP-GLES31.functional.geometry_shadi"
#define VkglTestCase_016286_2 "ng.query.geometry_linked_vertices_out"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016286, VkglTestCase_016286_1, VkglTestCase_016286_2);

#define VkglTestCase_016287_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016287_2 "ing.query.geometry_linked_input_type"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016287, VkglTestCase_016287_1, VkglTestCase_016287_2);

#define VkglTestCase_016288_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016288_2 "ing.query.geometry_linked_output_type"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016288, VkglTestCase_016288_1, VkglTestCase_016288_2);

#define VkglTestCase_016289_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016289_2 "ing.query.geometry_shader_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016289, VkglTestCase_016289_1, VkglTestCase_016289_2);

#define VkglTestCase_016290_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016290_2 "g.query.max_geometry_shader_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016290, VkglTestCase_016290_1, VkglTestCase_016290_2);

#define VkglTestCase_016291_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016291_2 "ing.query.max_geometry_uniform_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016291, VkglTestCase_016291_1, VkglTestCase_016291_2);

#define VkglTestCase_016292_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016292_2 "query.max_geometry_shader_storage_blocks"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016292, VkglTestCase_016292_1, VkglTestCase_016292_2);

#define VkglTestCase_016293_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016293_2 "ading.query.layer_provoking_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016293, VkglTestCase_016293_1, VkglTestCase_016293_2);

#define VkglTestCase_016294_1 "dEQP-GLES31.functional.geometry_shading"
#define VkglTestCase_016294_2 ".query.primitives_generated_no_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016294, VkglTestCase_016294_1, VkglTestCase_016294_2);

#define VkglTestCase_016295_1 "dEQP-GLES31.functional.geometry_shading.q"
#define VkglTestCase_016295_2 "uery.primitives_generated_no_amplification"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016295, VkglTestCase_016295_1, VkglTestCase_016295_2);

#define VkglTestCase_016296_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016296_2 "query.primitives_generated_amplification"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016296, VkglTestCase_016296_1, VkglTestCase_016296_2);

#define VkglTestCase_016297_1 "dEQP-GLES31.functional.geometry_shading.qu"
#define VkglTestCase_016297_2 "ery.primitives_generated_partial_primitives"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016297, VkglTestCase_016297_1, VkglTestCase_016297_2);

#define VkglTestCase_016298_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016298_2 "g.query.primitives_generated_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016298, VkglTestCase_016298_1, VkglTestCase_016298_2);

#define VkglTestCase_016299_1 "dEQP-GLES31.functional.geometry_s"
#define VkglTestCase_016299_2 "hading.query.primitives_generated"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016299, VkglTestCase_016299_1, VkglTestCase_016299_2);

#define VkglTestCase_016300_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016300_2 "ading.query.max_framebuffer_layers"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016300, VkglTestCase_016300_1, VkglTestCase_016300_2);

#define VkglTestCase_016301_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016301_2 "ing.query.framebuffer_default_layers"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016301, VkglTestCase_016301_1, VkglTestCase_016301_2);

#define VkglTestCase_016302_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016302_2 "g.query.framebuffer_attachment_layered"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016302, VkglTestCase_016302_1, VkglTestCase_016302_2);

#define VkglTestCase_016303_1 "dEQP-GLES31.functional.geometry_shading.q"
#define VkglTestCase_016303_2 "uery.framebuffer_incomplete_layer_targets"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016303, VkglTestCase_016303_1, VkglTestCase_016303_2);

#define VkglTestCase_016304_1 "dEQP-GLES31.functional.geometry_shadi"
#define VkglTestCase_016304_2 "ng.query.referenced_by_geometry_shader"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016304, VkglTestCase_016304_1, VkglTestCase_016304_2);

#define VkglTestCase_016305_1 "dEQP-GLES31.functional.geometry_shading.que"
#define VkglTestCase_016305_2 "ry.max_combined_geometry_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016305, VkglTestCase_016305_1, VkglTestCase_016305_2);
