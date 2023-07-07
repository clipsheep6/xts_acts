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
#include "../Binding-modelBaseFunc.h"
#include "../ActsBinding-model0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000029, "dEQP-VK.binding_model.descriptor_update.empty_descriptor.uniform_buffer.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000030, "dEQP-VK.binding_model.descriptor_update.samplerless.sampled_img_sampler_zero.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000031, "dEQP-VK.binding_model.descriptor_update.samplerless.sampled_img_sampler_zero_set_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000032, "dEQP-VK.binding_model.descriptor_update.samplerless.sampled_img_sampler_one.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000033, "dEQP-VK.binding_model.descriptor_update.samplerless.sampled_img_sampler_one_set_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000034, "dEQP-VK.binding_model.descriptor_update.samplerless.sampled_img_sampler_destroyed.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000035, "dEQP-VK.binding_model.descriptor_update.samplerless.sampled_img_sampler_destroyed_set_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000036, "dEQP-VK.binding_model.descriptor_update.samplerless.storage_img_sampler_zero.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000037, "dEQP-VK.binding_model.descriptor_update.samplerless.storage_img_sampler_zero_set_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000038, "dEQP-VK.binding_model.descriptor_update.samplerless.storage_img_sampler_one.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000039, "dEQP-VK.binding_model.descriptor_update.samplerless.storage_img_sampler_one_set_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000040, "dEQP-VK.binding_model.descriptor_update.samplerless.storage_img_sampler_destroyed.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000041, "dEQP-VK.binding_model.descriptor_update.samplerless.storage_img_sampler_destroyed_set_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000042, "dEQP-VK.binding_model.descriptor_update.samplerless.input_attachment_sampler_zero.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000043, "dEQP-VK.binding_model.descriptor_update.samplerless.input_attachment_sampler_zero_set_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000044, "dEQP-VK.binding_model.descriptor_update.samplerless.input_attachment_sampler_one.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000045, "dEQP-VK.binding_model.descriptor_update.samplerless.input_attachment_sampler_one_set_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000046, "dEQP-VK.binding_model.descriptor_update.samplerless.input_attachment_sampler_destroyed.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000047, "dEQP-VK.binding_model.descriptor_update.samplerless.input_attachment_sampler_destroyed_set_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000048, "dEQP-VK.binding_model.descriptor_update.random.uniform_buffer.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000049, "dEQP-VK.binding_model.descriptor_update.acceleration_structure.ray_query.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000050, "dEQP-VK.binding_model.descriptor_update.acceleration_structure.ray_tracing.*");
