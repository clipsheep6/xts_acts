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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007913_1 "dEQP-GLES31.functional.draw_indire"
#define VkglTestCase_007913_2 "ct.negative.command_bad_alignment_1"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007913, VkglTestCase_007913_1, VkglTestCase_007913_2);

#define VkglTestCase_007914_1 "dEQP-GLES31.functional.draw_indire"
#define VkglTestCase_007914_2 "ct.negative.command_bad_alignment_2"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007914, VkglTestCase_007914_1, VkglTestCase_007914_2);

#define VkglTestCase_007915_1 "dEQP-GLES31.functional.draw_indire"
#define VkglTestCase_007915_2 "ct.negative.command_bad_alignment_3"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007915, VkglTestCase_007915_1, VkglTestCase_007915_2);

#define VkglTestCase_007916_1 "dEQP-GLES31.functional.draw_indirect.neg"
#define VkglTestCase_007916_2 "ative.command_offset_partially_in_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007916, VkglTestCase_007916_1, VkglTestCase_007916_2);

#define VkglTestCase_007917_1 "dEQP-GLES31.functional.draw_indirect."
#define VkglTestCase_007917_2 "negative.command_offset_not_in_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007917, VkglTestCase_007917_1, VkglTestCase_007917_2);

#define VkglTestCase_007918_1 "dEQP-GLES31.functional.draw_indirect.negative"
#define VkglTestCase_007918_2 ".command_offset_not_in_buffer_unsigned32_wrap"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007918, VkglTestCase_007918_1, VkglTestCase_007918_2);

#define VkglTestCase_007919_1 "dEQP-GLES31.functional.draw_indirect.negativ"
#define VkglTestCase_007919_2 "e.command_offset_not_in_buffer_signed32_wrap"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007919, VkglTestCase_007919_1, VkglTestCase_007919_2);

#define VkglTestCase_007920_1 "dEQP-GLES31.functional.draw_indirect"
#define VkglTestCase_007920_2 ".negative.client_vertex_attrib_array"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007920, VkglTestCase_007920_1, VkglTestCase_007920_2);

#define VkglTestCase_007921_1 "dEQP-GLES31.functional.draw_indir"
#define VkglTestCase_007921_2 "ect.negative.client_command_array"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007921, VkglTestCase_007921_1, VkglTestCase_007921_2);

#define VkglTestCase_007922_1 "dEQP-GLES31.functional.draw_"
#define VkglTestCase_007922_2 "indirect.negative.default_vao"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007922, VkglTestCase_007922_1, VkglTestCase_007922_2);

#define VkglTestCase_007923_1 "dEQP-GLES31.functional.draw_indirec"
#define VkglTestCase_007923_2 "t.negative.invalid_mode_draw_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007923, VkglTestCase_007923_1, VkglTestCase_007923_2);

#define VkglTestCase_007924_1 "dEQP-GLES31.functional.draw_indirect"
#define VkglTestCase_007924_2 ".negative.invalid_mode_draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007924, VkglTestCase_007924_1, VkglTestCase_007924_2);

#define VkglTestCase_007925_1 "dEQP-GLES31.functional.draw_indirect"
#define VkglTestCase_007925_2 ".negative.invalid_type_draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007925, VkglTestCase_007925_1, VkglTestCase_007925_2);
