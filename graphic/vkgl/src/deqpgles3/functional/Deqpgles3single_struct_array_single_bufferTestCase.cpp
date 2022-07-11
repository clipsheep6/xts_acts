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

#define VkglTestCase_035236_1 "dEQP-GLES3.functional.ubo.single_struct_arra"
#define VkglTestCase_035236_2 "y.single_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035236, VkglTestCase_035236_1, VkglTestCase_035236_2);

#define VkglTestCase_035237_1 "dEQP-GLES3.functional.ubo.single_struct_array"
#define VkglTestCase_035237_2 ".single_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035237, VkglTestCase_035237_1, VkglTestCase_035237_2);

#define VkglTestCase_035238_1 "dEQP-GLES3.functional.ubo.single_struct_arr"
#define VkglTestCase_035238_2 "ay.single_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035238, VkglTestCase_035238_1, VkglTestCase_035238_2);

#define VkglTestCase_035239_1 "dEQP-GLES3.functional.ubo.single_struct_arra"
#define VkglTestCase_035239_2 "y.single_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035239, VkglTestCase_035239_1, VkglTestCase_035239_2);

#define VkglTestCase_035240_1 "dEQP-GLES3.functional.ubo.single_struct_array"
#define VkglTestCase_035240_2 ".single_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035240, VkglTestCase_035240_1, VkglTestCase_035240_2);

#define VkglTestCase_035241_1 "dEQP-GLES3.functional.ubo.single_struct_arra"
#define VkglTestCase_035241_2 "y.single_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035241, VkglTestCase_035241_1, VkglTestCase_035241_2);

#define VkglTestCase_035242_1 "dEQP-GLES3.functional.ubo.single_struct_array"
#define VkglTestCase_035242_2 ".single_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035242, VkglTestCase_035242_1, VkglTestCase_035242_2);

#define VkglTestCase_035243_1 "dEQP-GLES3.functional.ubo.single_struct_arr"
#define VkglTestCase_035243_2 "ay.single_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035243, VkglTestCase_035243_1, VkglTestCase_035243_2);
