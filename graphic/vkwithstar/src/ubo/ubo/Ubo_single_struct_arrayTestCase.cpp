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

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000757, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000758, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000759, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000760, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000761, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000762, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000763, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000764, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000765, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000766, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000767, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000768, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000769, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000770, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000771, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000772, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000773, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000774, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000775, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000776, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000777, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000778, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000779, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000780, "dEQP-VK.ubo.single_struct_array.per_block_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000781, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000782, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000783, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000784, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000785, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000786, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000787, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000788, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000789, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000790, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000791, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000792, "dEQP-VK.ubo.single_struct_array.per_block_buffer.scalar_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000793, "dEQP-VK.ubo.single_struct_array.single_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000794, "dEQP-VK.ubo.single_struct_array.single_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000795, "dEQP-VK.ubo.single_struct_array.single_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000796, "dEQP-VK.ubo.single_struct_array.single_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000797, "dEQP-VK.ubo.single_struct_array.single_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000798, "dEQP-VK.ubo.single_struct_array.single_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000799, "dEQP-VK.ubo.single_struct_array.single_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000800, "dEQP-VK.ubo.single_struct_array.single_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000801, "dEQP-VK.ubo.single_struct_array.single_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000802, "dEQP-VK.ubo.single_struct_array.single_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000803, "dEQP-VK.ubo.single_struct_array.single_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000804, "dEQP-VK.ubo.single_struct_array.single_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000805, "dEQP-VK.ubo.single_struct_array.single_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000806, "dEQP-VK.ubo.single_struct_array.single_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000807, "dEQP-VK.ubo.single_struct_array.single_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000808, "dEQP-VK.ubo.single_struct_array.single_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000809, "dEQP-VK.ubo.single_struct_array.single_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000810, "dEQP-VK.ubo.single_struct_array.single_buffer.scalar_instance_array_both_comp_access.*");
