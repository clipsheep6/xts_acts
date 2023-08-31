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

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000379, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000380, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000381, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000382, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000383, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000384, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000385, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000386, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000387, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000388, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000389, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000390, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000391, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000392, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000393, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000394, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000395, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000396, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000397, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000398, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000399, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000400, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000401, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000402, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000403, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000404, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000405, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000406, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000407, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000408, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000409, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000410, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000411, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000412, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000413, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000414, "dEQP-VK.ubo.2_level_struct_array.per_block_buffer.scalar_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000415, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000416, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000417, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000418, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000419, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000420, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000421, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000422, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000423, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000424, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000425, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000426, "dEQP-VK.ubo.2_level_struct_array.single_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000427, "dEQP-VK.ubo.2_level_struct_array.single_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000428, "dEQP-VK.ubo.2_level_struct_array.single_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000429, "dEQP-VK.ubo.2_level_struct_array.single_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000430, "dEQP-VK.ubo.2_level_struct_array.single_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000431, "dEQP-VK.ubo.2_level_struct_array.single_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000432, "dEQP-VK.ubo.2_level_struct_array.single_buffer.scalar_instance_array_both_comp_access.*");
