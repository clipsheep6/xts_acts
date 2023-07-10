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
#include "../Binding_modelBaseFunc.h"
#include "../ActsBinding_model0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000001, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.sampler_mutable.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000002, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.sampler_immutable.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000003, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.combined_image_sampler_mutable.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000004, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.combined_image_sampler_immutable.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000005, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.storage_image.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000006, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.uniform_texel_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000007, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.storage_texel_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000008, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.uniform_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000009, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.storage_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000010, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.uniform_buffer_dynamic.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000011, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.storage_buffer_dynamic.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000012, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.with_template.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000013, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.with_push.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000014, "dEQP-VK.binding_model.shader_access.primary_cmd_buf.with_push_template.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000015, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.sampler_mutable.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000016, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.sampler_immutable.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000017, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.combined_image_sampler_mutable.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000018, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.combined_image_sampler_immutable.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000019, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.storage_image.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000020, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.uniform_texel_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000021, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.storage_texel_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000022, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.uniform_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000023, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.storage_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000024, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.uniform_buffer_dynamic.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000025, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.storage_buffer_dynamic.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000026, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.with_template.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000027, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.with_push.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000028, "dEQP-VK.binding_model.shader_access.secondary_cmd_buf.with_push_template.*");
