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

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001204, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001205, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001206, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001207, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001208, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001209, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001210, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001211, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001212, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001213, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001214, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001215, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001216, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001217, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001218, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001219, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std140_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001220, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001221, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001222, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001223, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001224, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001225, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001226, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001227, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001228, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001229, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001230, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001231, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001232, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001233, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001234, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001235, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.std430_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001236, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001237, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001238, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001239, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001240, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001241, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001242, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001243, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001244, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001245, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001246, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001247, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001248, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001249, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001250, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001251, "dEQP-VK.ubo.multi_nested_struct.per_block_buffer.scalar_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001252, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001253, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001254, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001255, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001256, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001257, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001258, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001259, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001260, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001261, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001262, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001263, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001264, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001265, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001266, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001267, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std140_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001268, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001269, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001270, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001271, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001272, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001273, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001274, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001275, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001276, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001277, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001278, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001279, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001280, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001281, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001282, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001283, "dEQP-VK.ubo.multi_nested_struct.single_buffer.std430_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001284, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001285, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001286, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001287, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001288, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001289, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001290, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001291, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001292, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001293, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001294, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001295, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001296, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001297, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001298, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001299, "dEQP-VK.ubo.multi_nested_struct.single_buffer.scalar_instance_array_mixed_comp_access.*");
