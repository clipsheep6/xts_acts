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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000140_1 "KHR-GLES32.core.geometry_sha"
#define VkglTestCase_000140_2 "der.api.createShaderProgramv"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000140, VkglTestCase_000140_1, VkglTestCase_000140_2);

#define VkglTestCase_000141_1 "KHR-GLES32.core.geometr"
#define VkglTestCase_000141_2 "y_shader.api.shader_type"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000141, VkglTestCase_000141_1, VkglTestCase_000141_2);

#define VkglTestCase_000142_1 "KHR-GLES32.core.geometry"
#define VkglTestCase_000142_2 "_shader.api.getProgramiv"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000142, VkglTestCase_000142_1, VkglTestCase_000142_2);

#define VkglTestCase_000143_1 "KHR-GLES32.core.geometry"
#define VkglTestCase_000143_2 "_shader.api.getProgramiv2"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000143, VkglTestCase_000143_1, VkglTestCase_000143_2);

#define VkglTestCase_000144_1 "KHR-GLES32.core.geometry"
#define VkglTestCase_000144_2 "_shader.api.getProgramiv3"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000144, VkglTestCase_000144_1, VkglTestCase_000144_2);

#define VkglTestCase_000145_1 "KHR-GLES32.core.geometry_"
#define VkglTestCase_000145_2 "shader.api.fs_gs_draw_call"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000145, VkglTestCase_000145_1, VkglTestCase_000145_2);

#define VkglTestCase_000146_1 "KHR-GLES32.core.geometry_sh"
#define VkglTestCase_000146_2 "ader.api.max_image_uniforms"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000146, VkglTestCase_000146_1, VkglTestCase_000146_2);

#define VkglTestCase_000147_1 "KHR-GLES32.core.geometry_shade"
#define VkglTestCase_000147_2 "r.api.max_shader_storage_blocks"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000147, VkglTestCase_000147_1, VkglTestCase_000147_2);

#define VkglTestCase_000148_1 "KHR-GLES32.core.geometry_sh"
#define VkglTestCase_000148_2 "ader.api.max_atomic_counters"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000148, VkglTestCase_000148_1, VkglTestCase_000148_2);

#define VkglTestCase_000149_1 "KHR-GLES32.core.geometry_shader"
#define VkglTestCase_000149_2 ".api.max_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000149, VkglTestCase_000149_1, VkglTestCase_000149_2);

#define VkglTestCase_000150_1 "KHR-GLES32.core.geometry_shader.api"
#define VkglTestCase_000150_2 ".pipeline_program_without_active_vs"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000150, VkglTestCase_000150_1, VkglTestCase_000150_2);

#define VkglTestCase_000151_1 "KHR-GLES32.core.geometry_shader"
#define VkglTestCase_000151_2 ".api.incompatible_draw_call_mode"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000151, VkglTestCase_000151_1, VkglTestCase_000151_2);

#define VkglTestCase_000152_1 "KHR-GLES32.core.geometry_shader."
#define VkglTestCase_000152_2 "api.insufficient_emitted_vertices"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000152, VkglTestCase_000152_1, VkglTestCase_000152_2);

#define VkglTestCase_000153_1 "KHR-GLES32.core.geometry_shader.a"
#define VkglTestCase_000153_2 "pi.program_pipeline_vs_gs_capture"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000153, VkglTestCase_000153_1, VkglTestCase_000153_2);

#define VkglTestCase_000154_1 "KHR-GLES32.core.geometry_shader.api.draw_"
#define VkglTestCase_000154_2 "primitives_do_not_match_output_primitives"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000154, VkglTestCase_000154_1, VkglTestCase_000154_2);

#define VkglTestCase_000155_1 "KHR-GLES32.core.geometry_shader."
#define VkglTestCase_000155_2 "api.draw_calls_while_tf_is_paused"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000155, VkglTestCase_000155_1, VkglTestCase_000155_2);
