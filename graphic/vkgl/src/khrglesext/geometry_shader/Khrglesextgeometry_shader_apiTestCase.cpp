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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000112_1 "KHR-GLESEXT.geometry_shade"
#define VkglTestCase_000112_2 "r.api.createShaderProgramv"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000112, VkglTestCase_000112_1, VkglTestCase_000112_2);

#define VkglTestCase_000113_1 "KHR-GLESEXT.geometry_"
#define VkglTestCase_000113_2 "shader.api.shader_type"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000113, VkglTestCase_000113_1, VkglTestCase_000113_2);

#define VkglTestCase_000114_1 "KHR-GLESEXT.geometry_s"
#define VkglTestCase_000114_2 "hader.api.getProgramiv"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000114, VkglTestCase_000114_1, VkglTestCase_000114_2);

#define VkglTestCase_000115_1 "KHR-GLESEXT.geometry_s"
#define VkglTestCase_000115_2 "hader.api.getProgramiv2"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000115, VkglTestCase_000115_1, VkglTestCase_000115_2);

#define VkglTestCase_000116_1 "KHR-GLESEXT.geometry_s"
#define VkglTestCase_000116_2 "hader.api.getProgramiv3"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000116, VkglTestCase_000116_1, VkglTestCase_000116_2);

#define VkglTestCase_000117_1 "KHR-GLESEXT.geometry_sh"
#define VkglTestCase_000117_2 "ader.api.fs_gs_draw_call"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000117, VkglTestCase_000117_1, VkglTestCase_000117_2);

#define VkglTestCase_000118_1 "KHR-GLESEXT.geometry_shad"
#define VkglTestCase_000118_2 "er.api.max_image_uniforms"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000118, VkglTestCase_000118_1, VkglTestCase_000118_2);

#define VkglTestCase_000119_1 "KHR-GLESEXT.geometry_shader."
#define VkglTestCase_000119_2 "api.max_shader_storage_blocks"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000119, VkglTestCase_000119_1, VkglTestCase_000119_2);

#define VkglTestCase_000120_1 "KHR-GLESEXT.geometry_shad"
#define VkglTestCase_000120_2 "er.api.max_atomic_counters"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000120, VkglTestCase_000120_1, VkglTestCase_000120_2);

#define VkglTestCase_000121_1 "KHR-GLESEXT.geometry_shader.a"
#define VkglTestCase_000121_2 "pi.max_atomic_counter_buffers"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000121, VkglTestCase_000121_1, VkglTestCase_000121_2);

#define VkglTestCase_000122_1 "KHR-GLESEXT.geometry_shader.api.p"
#define VkglTestCase_000122_2 "ipeline_program_without_active_vs"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000122, VkglTestCase_000122_1, VkglTestCase_000122_2);

#define VkglTestCase_000123_1 "KHR-GLESEXT.geometry_shader.a"
#define VkglTestCase_000123_2 "pi.incompatible_draw_call_mode"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000123, VkglTestCase_000123_1, VkglTestCase_000123_2);

#define VkglTestCase_000124_1 "KHR-GLESEXT.geometry_shader.ap"
#define VkglTestCase_000124_2 "i.insufficient_emitted_vertices"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000124, VkglTestCase_000124_1, VkglTestCase_000124_2);

#define VkglTestCase_000125_1 "KHR-GLESEXT.geometry_shader.api"
#define VkglTestCase_000125_2 ".program_pipeline_vs_gs_capture"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000125, VkglTestCase_000125_1, VkglTestCase_000125_2);

#define VkglTestCase_000126_1 "KHR-GLESEXT.geometry_shader.api.draw_pr"
#define VkglTestCase_000126_2 "imitives_do_not_match_output_primitives"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000126, VkglTestCase_000126_1, VkglTestCase_000126_2);

#define VkglTestCase_000127_1 "KHR-GLESEXT.geometry_shader.ap"
#define VkglTestCase_000127_2 "i.draw_calls_while_tf_is_paused"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000127, VkglTestCase_000127_1, VkglTestCase_000127_2);
