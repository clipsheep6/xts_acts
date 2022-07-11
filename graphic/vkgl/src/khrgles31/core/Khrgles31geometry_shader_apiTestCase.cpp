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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002518_1 "KHR-GLES31.core.geometry_sha"
#define VkglTestCase_002518_2 "der.api.createShaderProgramv"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002518, VkglTestCase_002518_1, VkglTestCase_002518_2);

#define VkglTestCase_002519_1 "KHR-GLES31.core.geometr"
#define VkglTestCase_002519_2 "y_shader.api.shader_type"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002519, VkglTestCase_002519_1, VkglTestCase_002519_2);

#define VkglTestCase_002520_1 "KHR-GLES31.core.geometry"
#define VkglTestCase_002520_2 "_shader.api.getProgramiv"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002520, VkglTestCase_002520_1, VkglTestCase_002520_2);

#define VkglTestCase_002521_1 "KHR-GLES31.core.geometry"
#define VkglTestCase_002521_2 "_shader.api.getProgramiv2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002521, VkglTestCase_002521_1, VkglTestCase_002521_2);

#define VkglTestCase_002522_1 "KHR-GLES31.core.geometry"
#define VkglTestCase_002522_2 "_shader.api.getProgramiv3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002522, VkglTestCase_002522_1, VkglTestCase_002522_2);

#define VkglTestCase_002523_1 "KHR-GLES31.core.geometry_"
#define VkglTestCase_002523_2 "shader.api.fs_gs_draw_call"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002523, VkglTestCase_002523_1, VkglTestCase_002523_2);

#define VkglTestCase_002524_1 "KHR-GLES31.core.geometry_sh"
#define VkglTestCase_002524_2 "ader.api.max_image_uniforms"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002524, VkglTestCase_002524_1, VkglTestCase_002524_2);

#define VkglTestCase_002525_1 "KHR-GLES31.core.geometry_shade"
#define VkglTestCase_002525_2 "r.api.max_shader_storage_blocks"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002525, VkglTestCase_002525_1, VkglTestCase_002525_2);

#define VkglTestCase_002526_1 "KHR-GLES31.core.geometry_sh"
#define VkglTestCase_002526_2 "ader.api.max_atomic_counters"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002526, VkglTestCase_002526_1, VkglTestCase_002526_2);

#define VkglTestCase_002527_1 "KHR-GLES31.core.geometry_shader"
#define VkglTestCase_002527_2 ".api.max_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002527, VkglTestCase_002527_1, VkglTestCase_002527_2);

#define VkglTestCase_002528_1 "KHR-GLES31.core.geometry_shader.api"
#define VkglTestCase_002528_2 ".pipeline_program_without_active_vs"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002528, VkglTestCase_002528_1, VkglTestCase_002528_2);

#define VkglTestCase_002529_1 "KHR-GLES31.core.geometry_shader"
#define VkglTestCase_002529_2 ".api.incompatible_draw_call_mode"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002529, VkglTestCase_002529_1, VkglTestCase_002529_2);

#define VkglTestCase_002530_1 "KHR-GLES31.core.geometry_shader."
#define VkglTestCase_002530_2 "api.insufficient_emitted_vertices"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002530, VkglTestCase_002530_1, VkglTestCase_002530_2);

#define VkglTestCase_002531_1 "KHR-GLES31.core.geometry_shader.a"
#define VkglTestCase_002531_2 "pi.program_pipeline_vs_gs_capture"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002531, VkglTestCase_002531_1, VkglTestCase_002531_2);

#define VkglTestCase_002532_1 "KHR-GLES31.core.geometry_shader.api.draw_"
#define VkglTestCase_002532_2 "primitives_do_not_match_output_primitives"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002532, VkglTestCase_002532_1, VkglTestCase_002532_2);

#define VkglTestCase_002533_1 "KHR-GLES31.core.geometry_shader."
#define VkglTestCase_002533_2 "api.draw_calls_while_tf_is_paused"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002533, VkglTestCase_002533_1, VkglTestCase_002533_2);
