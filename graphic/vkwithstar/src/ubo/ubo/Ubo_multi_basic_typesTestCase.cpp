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

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001108, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001109, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001110, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001111, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001112, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001113, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001114, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001115, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001116, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001117, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001118, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001119, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001120, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001121, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001122, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001123, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std140_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001124, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001125, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001126, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001127, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001128, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001129, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001130, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001131, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001132, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001133, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001134, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001135, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001136, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001137, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001138, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001139, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.std430_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001140, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001141, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001142, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001143, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001144, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001145, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001146, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001147, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001148, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001149, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001150, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001151, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001152, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001153, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001154, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001155, "dEQP-VK.ubo.multi_basic_types.per_block_buffer.scalar_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001156, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001157, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001158, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001159, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001160, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001161, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001162, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001163, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001164, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001165, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001166, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001167, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001168, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001169, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001170, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001171, "dEQP-VK.ubo.multi_basic_types.single_buffer.std140_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001172, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001173, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001174, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001175, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001176, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001177, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001178, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001179, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001180, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001181, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001182, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001183, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001184, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001185, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001186, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001187, "dEQP-VK.ubo.multi_basic_types.single_buffer.std430_instance_array_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001188, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001189, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001190, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001191, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001192, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001193, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001194, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001195, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_mixed_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001196, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_instance_array_vertex.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001197, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_instance_array_fragment.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001198, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_instance_array_both.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001199, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_instance_array_mixed.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001200, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_instance_array_vertex_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001201, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_instance_array_fragment_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001202, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_instance_array_both_comp_access.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001203, "dEQP-VK.ubo.multi_basic_types.single_buffer.scalar_instance_array_mixed_comp_access.*");
