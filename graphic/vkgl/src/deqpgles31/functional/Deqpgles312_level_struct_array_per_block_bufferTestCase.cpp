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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011081_1 "dEQP-GLES31.functional.ubo.2_level_stru"
#define VkglTestCase_011081_2 "ct_array.per_block_buffer.shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011081, VkglTestCase_011081_1, VkglTestCase_011081_2);

#define VkglTestCase_011082_1 "dEQP-GLES31.functional.ubo.2_level_struc"
#define VkglTestCase_011082_2 "t_array.per_block_buffer.shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011082, VkglTestCase_011082_1, VkglTestCase_011082_2);

#define VkglTestCase_011083_1 "dEQP-GLES31.functional.ubo.2_level_str"
#define VkglTestCase_011083_2 "uct_array.per_block_buffer.shared_both"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011083, VkglTestCase_011083_1, VkglTestCase_011083_2);

#define VkglTestCase_011084_1 "dEQP-GLES31.functional.ubo.2_level_struct_arra"
#define VkglTestCase_011084_2 "y.per_block_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011084, VkglTestCase_011084_1, VkglTestCase_011084_2);

#define VkglTestCase_011085_1 "dEQP-GLES31.functional.ubo.2_level_struct_array"
#define VkglTestCase_011085_2 ".per_block_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011085, VkglTestCase_011085_1, VkglTestCase_011085_2);

#define VkglTestCase_011086_1 "dEQP-GLES31.functional.ubo.2_level_struct_arr"
#define VkglTestCase_011086_2 "ay.per_block_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011086, VkglTestCase_011086_1, VkglTestCase_011086_2);

#define VkglTestCase_011087_1 "dEQP-GLES31.functional.ubo.2_level_stru"
#define VkglTestCase_011087_2 "ct_array.per_block_buffer.packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011087, VkglTestCase_011087_1, VkglTestCase_011087_2);

#define VkglTestCase_011088_1 "dEQP-GLES31.functional.ubo.2_level_struc"
#define VkglTestCase_011088_2 "t_array.per_block_buffer.packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011088, VkglTestCase_011088_1, VkglTestCase_011088_2);

#define VkglTestCase_011089_1 "dEQP-GLES31.functional.ubo.2_level_struct_arra"
#define VkglTestCase_011089_2 "y.per_block_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011089, VkglTestCase_011089_1, VkglTestCase_011089_2);

#define VkglTestCase_011090_1 "dEQP-GLES31.functional.ubo.2_level_struct_array"
#define VkglTestCase_011090_2 ".per_block_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011090, VkglTestCase_011090_1, VkglTestCase_011090_2);

#define VkglTestCase_011091_1 "dEQP-GLES31.functional.ubo.2_level_stru"
#define VkglTestCase_011091_2 "ct_array.per_block_buffer.std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011091, VkglTestCase_011091_1, VkglTestCase_011091_2);

#define VkglTestCase_011092_1 "dEQP-GLES31.functional.ubo.2_level_struc"
#define VkglTestCase_011092_2 "t_array.per_block_buffer.std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011092, VkglTestCase_011092_1, VkglTestCase_011092_2);

#define VkglTestCase_011093_1 "dEQP-GLES31.functional.ubo.2_level_str"
#define VkglTestCase_011093_2 "uct_array.per_block_buffer.std140_both"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011093, VkglTestCase_011093_1, VkglTestCase_011093_2);

#define VkglTestCase_011094_1 "dEQP-GLES31.functional.ubo.2_level_struct_arra"
#define VkglTestCase_011094_2 "y.per_block_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011094, VkglTestCase_011094_1, VkglTestCase_011094_2);

#define VkglTestCase_011095_1 "dEQP-GLES31.functional.ubo.2_level_struct_array"
#define VkglTestCase_011095_2 ".per_block_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011095, VkglTestCase_011095_1, VkglTestCase_011095_2);

#define VkglTestCase_011096_1 "dEQP-GLES31.functional.ubo.2_level_struct_arr"
#define VkglTestCase_011096_2 "ay.per_block_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles310012TestSuite, TestCase_011096, VkglTestCase_011096_1, VkglTestCase_011096_2);
