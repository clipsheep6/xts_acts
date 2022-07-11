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
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005017_1 "dEQP-GLES31.functional.shaders.builtin_constants.te"
#define VkglTestCase_005017_2 "ssellation_shader.max_tess_control_input_components"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005017, VkglTestCase_005017_1, VkglTestCase_005017_2);

#define VkglTestCase_005018_1 "dEQP-GLES31.functional.shaders.builtin_constants.te"
#define VkglTestCase_005018_2 "ssellation_shader.max_tess_control_output_components"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005018, VkglTestCase_005018_1, VkglTestCase_005018_2);

#define VkglTestCase_005019_1 "dEQP-GLES31.functional.shaders.builtin_constants.tes"
#define VkglTestCase_005019_2 "sellation_shader.max_tess_control_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005019, VkglTestCase_005019_1, VkglTestCase_005019_2);

#define VkglTestCase_005020_1 "dEQP-GLES31.functional.shaders.builtin_constants.tes"
#define VkglTestCase_005020_2 "sellation_shader.max_tess_control_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005020, VkglTestCase_005020_1, VkglTestCase_005020_2);

#define VkglTestCase_005021_1 "dEQP-GLES31.functional.shaders.builtin_constants.tesse"
#define VkglTestCase_005021_2 "llation_shader.max_tess_control_total_output_components"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005021, VkglTestCase_005021_1, VkglTestCase_005021_2);

#define VkglTestCase_005022_1 "dEQP-GLES31.functional.shaders.builtin_constants.t"
#define VkglTestCase_005022_2 "essellation_shader.max_tess_control_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005022, VkglTestCase_005022_1, VkglTestCase_005022_2);

#define VkglTestCase_005023_1 "dEQP-GLES31.functional.shaders.builtin_constants.te"
#define VkglTestCase_005023_2 "ssellation_shader.max_tess_evaluation_image_uniforms"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005023, VkglTestCase_005023_1, VkglTestCase_005023_2);

#define VkglTestCase_005024_1 "dEQP-GLES31.functional.shaders.builtin_constants.t"
#define VkglTestCase_005024_2 "essellation_shader.max_tess_control_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005024, VkglTestCase_005024_1, VkglTestCase_005024_2);

#define VkglTestCase_005025_1 "dEQP-GLES31.functional.shaders.builtin_constants.tes"
#define VkglTestCase_005025_2 "sellation_shader.max_tess_evaluation_atomic_counters"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005025, VkglTestCase_005025_1, VkglTestCase_005025_2);

#define VkglTestCase_005026_1 "dEQP-GLES31.functional.shaders.builtin_constants.tesse"
#define VkglTestCase_005026_2 "llation_shader.max_tess_control_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005026, VkglTestCase_005026_1, VkglTestCase_005026_2);

#define VkglTestCase_005027_1 "dEQP-GLES31.functional.shaders.builtin_constants.tessel"
#define VkglTestCase_005027_2 "lation_shader.max_tess_evaluation_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005027, VkglTestCase_005027_1, VkglTestCase_005027_2);

#define VkglTestCase_005028_1 "dEQP-GLES31.functional.shaders.builtin_constants.tes"
#define VkglTestCase_005028_2 "sellation_shader.max_tess_evaluation_input_components"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005028, VkglTestCase_005028_1, VkglTestCase_005028_2);

#define VkglTestCase_005029_1 "dEQP-GLES31.functional.shaders.builtin_constants.tess"
#define VkglTestCase_005029_2 "ellation_shader.max_tess_evaluation_output_components"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005029, VkglTestCase_005029_1, VkglTestCase_005029_2);

#define VkglTestCase_005030_1 "dEQP-GLES31.functional.shaders.builtin_constants.tesse"
#define VkglTestCase_005030_2 "llation_shader.max_tess_evaluation_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005030, VkglTestCase_005030_1, VkglTestCase_005030_2);

#define VkglTestCase_005031_1 "dEQP-GLES31.functional.shaders.builtin_constants.tess"
#define VkglTestCase_005031_2 "ellation_shader.max_tess_evaluation_uniform_components"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005031, VkglTestCase_005031_1, VkglTestCase_005031_2);

#define VkglTestCase_005032_1 "dEQP-GLES31.functional.shaders.builtin_constant"
#define VkglTestCase_005032_2 "s.tessellation_shader.max_tess_patch_components"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005032, VkglTestCase_005032_1, VkglTestCase_005032_2);

#define VkglTestCase_005033_1 "dEQP-GLES31.functional.shaders.builtin_cons"
#define VkglTestCase_005033_2 "tants.tessellation_shader.max_patch_vertices"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005033, VkglTestCase_005033_1, VkglTestCase_005033_2);

#define VkglTestCase_005034_1 "dEQP-GLES31.functional.shaders.builtin_cons"
#define VkglTestCase_005034_2 "tants.tessellation_shader.max_tess_gen_level"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005034, VkglTestCase_005034_1, VkglTestCase_005034_2);
