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
#include "../UboBaseFunc.h"
#include "../ActsUbo0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000865, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000866, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000867, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000868, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000869, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000870, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000871, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000872, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000873, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000874, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000875, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000876, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000877, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000878, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000879, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000880, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000881, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000882, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000883, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000884, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000885, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000886, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000887, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000888, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000889, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000890, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000891, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000892, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000893, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000894, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000895, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000896, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000897, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000898, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000899, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000900, "dEQP-VK.ubo.single_nested_struct_array.per_block_buffer.scalar_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000901, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000902, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000903, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000904, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000905, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000906, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000907, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000908, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000909, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000910, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000911, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000912, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000913, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000914, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000915, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000916, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000917, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000918, "dEQP-VK.ubo.single_nested_struct_array.single_buffer.scalar_instance_array_both_comp_access.*");
