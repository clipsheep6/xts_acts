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

#define VkglTestCase_035894_1 "dEQP-GLES3.functional.ubo.multi_nest"
#define VkglTestCase_035894_2 "ed_struct.single_buffer.shared_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035894, VkglTestCase_035894_1, VkglTestCase_035894_2);

#define VkglTestCase_035895_1 "dEQP-GLES3.functional.ubo.multi_neste"
#define VkglTestCase_035895_2 "d_struct.single_buffer.shared_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035895, VkglTestCase_035895_1, VkglTestCase_035895_2);

#define VkglTestCase_035896_1 "dEQP-GLES3.functional.ubo.multi_nes"
#define VkglTestCase_035896_2 "ted_struct.single_buffer.shared_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035896, VkglTestCase_035896_1, VkglTestCase_035896_2);

#define VkglTestCase_035897_1 "dEQP-GLES3.functional.ubo.multi_nest"
#define VkglTestCase_035897_2 "ed_struct.single_buffer.shared_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035897, VkglTestCase_035897_1, VkglTestCase_035897_2);

#define VkglTestCase_035898_1 "dEQP-GLES3.functional.ubo.multi_nested_struc"
#define VkglTestCase_035898_2 "t.single_buffer.shared_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035898, VkglTestCase_035898_1, VkglTestCase_035898_2);

#define VkglTestCase_035899_1 "dEQP-GLES3.functional.ubo.multi_nested_struct"
#define VkglTestCase_035899_2 ".single_buffer.shared_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035899, VkglTestCase_035899_1, VkglTestCase_035899_2);

#define VkglTestCase_035900_1 "dEQP-GLES3.functional.ubo.multi_nested_stru"
#define VkglTestCase_035900_2 "ct.single_buffer.shared_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035900, VkglTestCase_035900_1, VkglTestCase_035900_2);

#define VkglTestCase_035901_1 "dEQP-GLES3.functional.ubo.multi_nested_stru"
#define VkglTestCase_035901_2 "ct.single_buffer.shared_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035901, VkglTestCase_035901_1, VkglTestCase_035901_2);

#define VkglTestCase_035902_1 "dEQP-GLES3.functional.ubo.multi_nest"
#define VkglTestCase_035902_2 "ed_struct.single_buffer.packed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035902, VkglTestCase_035902_1, VkglTestCase_035902_2);

#define VkglTestCase_035903_1 "dEQP-GLES3.functional.ubo.multi_neste"
#define VkglTestCase_035903_2 "d_struct.single_buffer.packed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035903, VkglTestCase_035903_1, VkglTestCase_035903_2);

#define VkglTestCase_035904_1 "dEQP-GLES3.functional.ubo.multi_nest"
#define VkglTestCase_035904_2 "ed_struct.single_buffer.packed_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035904, VkglTestCase_035904_1, VkglTestCase_035904_2);

#define VkglTestCase_035905_1 "dEQP-GLES3.functional.ubo.multi_nested_struc"
#define VkglTestCase_035905_2 "t.single_buffer.packed_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035905, VkglTestCase_035905_1, VkglTestCase_035905_2);

#define VkglTestCase_035906_1 "dEQP-GLES3.functional.ubo.multi_nested_struct"
#define VkglTestCase_035906_2 ".single_buffer.packed_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035906, VkglTestCase_035906_1, VkglTestCase_035906_2);

#define VkglTestCase_035907_1 "dEQP-GLES3.functional.ubo.multi_nested_stru"
#define VkglTestCase_035907_2 "ct.single_buffer.packed_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035907, VkglTestCase_035907_1, VkglTestCase_035907_2);

#define VkglTestCase_035908_1 "dEQP-GLES3.functional.ubo.multi_nest"
#define VkglTestCase_035908_2 "ed_struct.single_buffer.std140_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035908, VkglTestCase_035908_1, VkglTestCase_035908_2);

#define VkglTestCase_035909_1 "dEQP-GLES3.functional.ubo.multi_neste"
#define VkglTestCase_035909_2 "d_struct.single_buffer.std140_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035909, VkglTestCase_035909_1, VkglTestCase_035909_2);

#define VkglTestCase_035910_1 "dEQP-GLES3.functional.ubo.multi_nes"
#define VkglTestCase_035910_2 "ted_struct.single_buffer.std140_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035910, VkglTestCase_035910_1, VkglTestCase_035910_2);

#define VkglTestCase_035911_1 "dEQP-GLES3.functional.ubo.multi_nest"
#define VkglTestCase_035911_2 "ed_struct.single_buffer.std140_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035911, VkglTestCase_035911_1, VkglTestCase_035911_2);

#define VkglTestCase_035912_1 "dEQP-GLES3.functional.ubo.multi_nested_struc"
#define VkglTestCase_035912_2 "t.single_buffer.std140_instance_array_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035912, VkglTestCase_035912_1, VkglTestCase_035912_2);

#define VkglTestCase_035913_1 "dEQP-GLES3.functional.ubo.multi_nested_struct"
#define VkglTestCase_035913_2 ".single_buffer.std140_instance_array_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035913, VkglTestCase_035913_1, VkglTestCase_035913_2);

#define VkglTestCase_035914_1 "dEQP-GLES3.functional.ubo.multi_nested_stru"
#define VkglTestCase_035914_2 "ct.single_buffer.std140_instance_array_both"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035914, VkglTestCase_035914_1, VkglTestCase_035914_2);

#define VkglTestCase_035915_1 "dEQP-GLES3.functional.ubo.multi_nested_stru"
#define VkglTestCase_035915_2 "ct.single_buffer.std140_instance_array_mixed"
SHRINK_HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035915, VkglTestCase_035915_1, VkglTestCase_035915_2);
