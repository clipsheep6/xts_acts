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

#define VkglTestCase_035260_1 "dEQP-GLES3.functional.ubo.single_nested_stru"
#define VkglTestCase_035260_2 "ct.single_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035260, VkglTestCase_035260_1, VkglTestCase_035260_2);

#define VkglTestCase_035261_1 "dEQP-GLES3.functional.ubo.single_nested_struc"
#define VkglTestCase_035261_2 "t.single_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035261, VkglTestCase_035261_1, VkglTestCase_035261_2);

#define VkglTestCase_035262_1 "dEQP-GLES3.functional.ubo.single_nested_str"
#define VkglTestCase_035262_2 "uct.single_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035262, VkglTestCase_035262_1, VkglTestCase_035262_2);

#define VkglTestCase_035263_1 "dEQP-GLES3.functional.ubo.single_nested_stru"
#define VkglTestCase_035263_2 "ct.single_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035263, VkglTestCase_035263_1, VkglTestCase_035263_2);

#define VkglTestCase_035264_1 "dEQP-GLES3.functional.ubo.single_nested_struc"
#define VkglTestCase_035264_2 "t.single_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035264, VkglTestCase_035264_1, VkglTestCase_035264_2);

#define VkglTestCase_035265_1 "dEQP-GLES3.functional.ubo.single_nested_stru"
#define VkglTestCase_035265_2 "ct.single_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035265, VkglTestCase_035265_1, VkglTestCase_035265_2);

#define VkglTestCase_035266_1 "dEQP-GLES3.functional.ubo.single_nested_struc"
#define VkglTestCase_035266_2 "t.single_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035266, VkglTestCase_035266_1, VkglTestCase_035266_2);

#define VkglTestCase_035267_1 "dEQP-GLES3.functional.ubo.single_nested_str"
#define VkglTestCase_035267_2 "uct.single_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035267, VkglTestCase_035267_1, VkglTestCase_035267_2);
