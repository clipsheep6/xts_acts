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

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000304, "dEQP-VK.binding_model.mutable_descriptor.single.sampler.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000305, "dEQP-VK.binding_model.mutable_descriptor.single.combined_image_sampler.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000306, "dEQP-VK.binding_model.mutable_descriptor.single.sampled_image.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000307, "dEQP-VK.binding_model.mutable_descriptor.single.storage_image.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000308, "dEQP-VK.binding_model.mutable_descriptor.single.uniform_texel_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000309, "dEQP-VK.binding_model.mutable_descriptor.single.storage_texel_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000310, "dEQP-VK.binding_model.mutable_descriptor.single.uniform_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000311, "dEQP-VK.binding_model.mutable_descriptor.single.storage_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000312, "dEQP-VK.binding_model.mutable_descriptor.single.input_attachment.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000313, "dEQP-VK.binding_model.mutable_descriptor.single.acceleration_structure_khr.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000314, "dEQP-VK.binding_model.mutable_descriptor.single.all_mandatory.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000315, "dEQP-VK.binding_model.mutable_descriptor.single.switches.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000316, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.sampler.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000317, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.combined_image_sampler.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000318, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.sampled_image.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000319, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.storage_image.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000320, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.uniform_texel_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000321, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.storage_texel_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000322, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.uniform_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000323, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.storage_buffer.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000324, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.input_attachment.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000325, "dEQP-VK.binding_model.mutable_descriptor.single_nonmutable.acceleration_structure_khr.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000326, "dEQP-VK.binding_model.mutable_descriptor.one_array.constant_size.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000327, "dEQP-VK.binding_model.mutable_descriptor.one_array.unbounded.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000328, "dEQP-VK.binding_model.mutable_descriptor.multiple_arrays.constant_size.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000329, "dEQP-VK.binding_model.mutable_descriptor.multiple_arrays.unbounded.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000330, "dEQP-VK.binding_model.mutable_descriptor.multiple_arrays_mixed.constant_size.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000331, "dEQP-VK.binding_model.mutable_descriptor.multiple_arrays_mixed.unbounded.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000332, "dEQP-VK.binding_model.mutable_descriptor.single_and_array.sampler.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000333, "dEQP-VK.binding_model.mutable_descriptor.single_and_array.combined_image_sampler.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000334, "dEQP-VK.binding_model.mutable_descriptor.single_and_array.acceleration_structure_khr.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000335, "dEQP-VK.binding_model.mutable_descriptor.multiple.mutable_only.*");

static SHRINK_HWTEST_F(ActsBinding_model0001TS, TC000336, "dEQP-VK.binding_model.mutable_descriptor.multiple.mixed.*");
