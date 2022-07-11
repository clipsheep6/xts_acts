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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035196_1 "dEQP-GLES3.functional.ubo.single_st"
#define VkglTestCase_035196_2 "ruct.per_block_buffer.shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035196, VkglTestCase_035196_1, VkglTestCase_035196_2);

#define VkglTestCase_035197_1 "dEQP-GLES3.functional.ubo.single_str"
#define VkglTestCase_035197_2 "uct.per_block_buffer.shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035197, VkglTestCase_035197_1, VkglTestCase_035197_2);

#define VkglTestCase_035198_1 "dEQP-GLES3.functional.ubo.single_s"
#define VkglTestCase_035198_2 "truct.per_block_buffer.shared_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035198, VkglTestCase_035198_1, VkglTestCase_035198_2);

#define VkglTestCase_035199_1 "dEQP-GLES3.functional.ubo.single_struct.pe"
#define VkglTestCase_035199_2 "r_block_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035199, VkglTestCase_035199_1, VkglTestCase_035199_2);

#define VkglTestCase_035200_1 "dEQP-GLES3.functional.ubo.single_struct.per"
#define VkglTestCase_035200_2 "_block_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035200, VkglTestCase_035200_1, VkglTestCase_035200_2);

#define VkglTestCase_035201_1 "dEQP-GLES3.functional.ubo.single_struct.p"
#define VkglTestCase_035201_2 "er_block_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035201, VkglTestCase_035201_1, VkglTestCase_035201_2);

#define VkglTestCase_035202_1 "dEQP-GLES3.functional.ubo.single_st"
#define VkglTestCase_035202_2 "ruct.per_block_buffer.packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035202, VkglTestCase_035202_1, VkglTestCase_035202_2);

#define VkglTestCase_035203_1 "dEQP-GLES3.functional.ubo.single_str"
#define VkglTestCase_035203_2 "uct.per_block_buffer.packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035203, VkglTestCase_035203_1, VkglTestCase_035203_2);

#define VkglTestCase_035204_1 "dEQP-GLES3.functional.ubo.single_struct.pe"
#define VkglTestCase_035204_2 "r_block_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035204, VkglTestCase_035204_1, VkglTestCase_035204_2);

#define VkglTestCase_035205_1 "dEQP-GLES3.functional.ubo.single_struct.per"
#define VkglTestCase_035205_2 "_block_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035205, VkglTestCase_035205_1, VkglTestCase_035205_2);

#define VkglTestCase_035206_1 "dEQP-GLES3.functional.ubo.single_st"
#define VkglTestCase_035206_2 "ruct.per_block_buffer.std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035206, VkglTestCase_035206_1, VkglTestCase_035206_2);

#define VkglTestCase_035207_1 "dEQP-GLES3.functional.ubo.single_str"
#define VkglTestCase_035207_2 "uct.per_block_buffer.std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035207, VkglTestCase_035207_1, VkglTestCase_035207_2);

#define VkglTestCase_035208_1 "dEQP-GLES3.functional.ubo.single_s"
#define VkglTestCase_035208_2 "truct.per_block_buffer.std140_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035208, VkglTestCase_035208_1, VkglTestCase_035208_2);

#define VkglTestCase_035209_1 "dEQP-GLES3.functional.ubo.single_struct.pe"
#define VkglTestCase_035209_2 "r_block_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035209, VkglTestCase_035209_1, VkglTestCase_035209_2);

#define VkglTestCase_035210_1 "dEQP-GLES3.functional.ubo.single_struct.per"
#define VkglTestCase_035210_2 "_block_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035210, VkglTestCase_035210_1, VkglTestCase_035210_2);

#define VkglTestCase_035211_1 "dEQP-GLES3.functional.ubo.single_struct.p"
#define VkglTestCase_035211_2 "er_block_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035211, VkglTestCase_035211_1, VkglTestCase_035211_2);
