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

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000071, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000072, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000073, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000074, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000075, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000076, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000077, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000078, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000079, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000080, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000081, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000082, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000083, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000084, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000085, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000086, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000087, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000088, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000089, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000090, "dEQP-VK.binding_model.descriptor_copy.compute.inline_uniform_block_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000091, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000092, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000093, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000094, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000095, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000096, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000097, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000098, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000099, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000100, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000101, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000102, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000103, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000104, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000105, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000106, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000107, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000108, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000109, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000110, "dEQP-VK.binding_model.descriptor_copy.compute.combined_image_sampler_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000111, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000112, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000113, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000114, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000115, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000116, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000117, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000118, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000119, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000120, "dEQP-VK.binding_model.descriptor_copy.compute.storage_image_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000121, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000122, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000123, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000124, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000125, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000126, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000127, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000128, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000129, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000130, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_texel_buffer_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000131, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000132, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000133, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000134, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000135, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000136, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000137, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000138, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000139, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000140, "dEQP-VK.binding_model.descriptor_copy.compute.storage_texel_buffer_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000141, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000142, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000143, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000144, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000145, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000146, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000147, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000148, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000149, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000150, "dEQP-VK.binding_model.descriptor_copy.compute.uniform_buffer_dynamic_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000151, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000152, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000153, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000154, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000155, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000156, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000157, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000158, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000159, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000160, "dEQP-VK.binding_model.descriptor_copy.compute.storage_buffer_dynamic_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000161, "dEQP-VK.binding_model.descriptor_copy.compute.sampler_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000162, "dEQP-VK.binding_model.descriptor_copy.compute.sampler_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000163, "dEQP-VK.binding_model.descriptor_copy.compute.sampler_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000164, "dEQP-VK.binding_model.descriptor_copy.compute.sampled_image_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000165, "dEQP-VK.binding_model.descriptor_copy.compute.sampled_image_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000166, "dEQP-VK.binding_model.descriptor_copy.compute.mix_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000167, "dEQP-VK.binding_model.descriptor_copy.compute.mix_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000168, "dEQP-VK.binding_model.descriptor_copy.compute.mix_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000169, "dEQP-VK.binding_model.descriptor_copy.compute.mix_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000170, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000171, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000172, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000173, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000174, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000175, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000176, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000177, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000178, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000179, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000180, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000181, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000182, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000183, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000184, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000185, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000186, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000187, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000188, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000189, "dEQP-VK.binding_model.descriptor_copy.graphics.inline_uniform_block_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000190, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000191, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000192, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000193, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000194, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000195, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000196, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000197, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000198, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000199, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000200, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000201, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000202, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000203, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000204, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000205, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000206, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000207, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000208, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000209, "dEQP-VK.binding_model.descriptor_copy.graphics.combined_image_sampler_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000210, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000211, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000212, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000213, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000214, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000215, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000216, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000217, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000218, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000219, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_image_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000220, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000221, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000222, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000223, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000224, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000225, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000226, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000227, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000228, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000229, "dEQP-VK.binding_model.descriptor_copy.graphics.input_attachment_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000230, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000231, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000232, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000233, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000234, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000235, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000236, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000237, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000238, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000239, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_texel_buffer_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000240, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000241, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000242, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000243, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000244, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000245, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000246, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000247, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000248, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000249, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_texel_buffer_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000250, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000251, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000252, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000253, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000254, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000255, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000256, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000257, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000258, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000259, "dEQP-VK.binding_model.descriptor_copy.graphics.uniform_buffer_dynamic_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000260, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000261, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000262, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000263, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000264, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_4.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000265, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_5.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000266, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_6.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000267, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000268, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000269, "dEQP-VK.binding_model.descriptor_copy.graphics.storage_buffer_dynamic_array2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000270, "dEQP-VK.binding_model.descriptor_copy.graphics.sampler_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000271, "dEQP-VK.binding_model.descriptor_copy.graphics.sampler_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000272, "dEQP-VK.binding_model.descriptor_copy.graphics.sampler_array1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000273, "dEQP-VK.binding_model.descriptor_copy.graphics.sampled_image_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000274, "dEQP-VK.binding_model.descriptor_copy.graphics.sampled_image_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000275, "dEQP-VK.binding_model.descriptor_copy.graphics.mix_0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000276, "dEQP-VK.binding_model.descriptor_copy.graphics.mix_1.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000277, "dEQP-VK.binding_model.descriptor_copy.graphics.mix_2.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000278, "dEQP-VK.binding_model.descriptor_copy.graphics.mix_3.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000279, "dEQP-VK.binding_model.descriptor_copy.graphics.mix_array0.*");

static SHRINK_HWTEST_F(ActsBinding-model0001TS, TC000280, "dEQP-VK.binding_model.descriptor_copy.graphics.mix_array1.*");
