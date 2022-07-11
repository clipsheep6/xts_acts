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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016472_1 "dEQP-GLES31.functional.geometry_shading.verte"
#define VkglTestCase_016472_2 "x_transform_feedback.capture_vertex_line_loop"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016472, VkglTestCase_016472_1, VkglTestCase_016472_2);

#define VkglTestCase_016473_1 "dEQP-GLES31.functional.geometry_shading.verte"
#define VkglTestCase_016473_2 "x_transform_feedback.capture_vertex_line_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016473, VkglTestCase_016473_1, VkglTestCase_016473_2);

#define VkglTestCase_016474_1 "dEQP-GLES31.functional.geometry_shading.vertex_"
#define VkglTestCase_016474_2 "transform_feedback.capture_vertex_triangle_strip"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016474, VkglTestCase_016474_1, VkglTestCase_016474_2);

#define VkglTestCase_016475_1 "dEQP-GLES31.functional.geometry_shading.vertex"
#define VkglTestCase_016475_2 "_transform_feedback.capture_vertex_triangle_fan"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016475, VkglTestCase_016475_1, VkglTestCase_016475_2);

#define VkglTestCase_016476_1 "dEQP-GLES31.functional.geometry_shading.vertex"
#define VkglTestCase_016476_2 "_transform_feedback.capture_vertex_draw_arrays"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016476, VkglTestCase_016476_1, VkglTestCase_016476_2);

#define VkglTestCase_016477_1 "dEQP-GLES31.functional.geometry_shading.vertex_tran"
#define VkglTestCase_016477_2 "sform_feedback.capture_vertex_draw_arrays_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016477, VkglTestCase_016477_1, VkglTestCase_016477_2);

#define VkglTestCase_016478_1 "dEQP-GLES31.functional.geometry_shading.vertex_tra"
#define VkglTestCase_016478_2 "nsform_feedback.capture_vertex_draw_arrays_indirect"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016478, VkglTestCase_016478_1, VkglTestCase_016478_2);

#define VkglTestCase_016479_1 "dEQP-GLES31.functional.geometry_shading.vertex_"
#define VkglTestCase_016479_2 "transform_feedback.capture_vertex_draw_elements"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016479, VkglTestCase_016479_1, VkglTestCase_016479_2);

#define VkglTestCase_016480_1 "dEQP-GLES31.functional.geometry_shading.vertex_trans"
#define VkglTestCase_016480_2 "form_feedback.capture_vertex_draw_elements_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016480, VkglTestCase_016480_1, VkglTestCase_016480_2);

#define VkglTestCase_016481_1 "dEQP-GLES31.functional.geometry_shading.vertex_tran"
#define VkglTestCase_016481_2 "sform_feedback.capture_vertex_draw_elements_indirect"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016481, VkglTestCase_016481_1, VkglTestCase_016481_2);

#define VkglTestCase_016482_1 "dEQP-GLES31.functional.geometry_shading.vertex_transform_"
#define VkglTestCase_016482_2 "feedback.capture_vertex_draw_arrays_overflow_single_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016482, VkglTestCase_016482_1, VkglTestCase_016482_2);

#define VkglTestCase_016483_1 "dEQP-GLES31.functional.geometry_shading.vertex_transform_f"
#define VkglTestCase_016483_2 "eedback.capture_vertex_draw_elements_overflow_single_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016483, VkglTestCase_016483_1, VkglTestCase_016483_2);
