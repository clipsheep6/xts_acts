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

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000811, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000812, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000813, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000814, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000815, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000816, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000817, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000818, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000819, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000820, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000821, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000822, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000823, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000824, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000825, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000826, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000827, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000828, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000829, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000830, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000831, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000832, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000833, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000834, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000835, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000836, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000837, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000838, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000839, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000840, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000841, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000842, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000843, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000844, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000845, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000846, "dEQP-VK.ubo.single_nested_struct.per_block_buffer.scalar_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000847, "dEQP-VK.ubo.single_nested_struct.single_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000848, "dEQP-VK.ubo.single_nested_struct.single_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000849, "dEQP-VK.ubo.single_nested_struct.single_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000850, "dEQP-VK.ubo.single_nested_struct.single_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000851, "dEQP-VK.ubo.single_nested_struct.single_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000852, "dEQP-VK.ubo.single_nested_struct.single_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000853, "dEQP-VK.ubo.single_nested_struct.single_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000854, "dEQP-VK.ubo.single_nested_struct.single_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000855, "dEQP-VK.ubo.single_nested_struct.single_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000856, "dEQP-VK.ubo.single_nested_struct.single_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000857, "dEQP-VK.ubo.single_nested_struct.single_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000858, "dEQP-VK.ubo.single_nested_struct.single_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000859, "dEQP-VK.ubo.single_nested_struct.single_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000860, "dEQP-VK.ubo.single_nested_struct.single_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000861, "dEQP-VK.ubo.single_nested_struct.single_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000862, "dEQP-VK.ubo.single_nested_struct.single_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000863, "dEQP-VK.ubo.single_nested_struct.single_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000864, "dEQP-VK.ubo.single_nested_struct.single_buffer.scalar_instance_array_both_comp_access.*");
