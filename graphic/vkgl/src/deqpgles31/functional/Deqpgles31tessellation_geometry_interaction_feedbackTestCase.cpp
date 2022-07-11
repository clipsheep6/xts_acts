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
#include "../ActsDeqpgles310019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018296_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.fe"
#define VkglTestCase_018296_2 "edback.tessellation_output_triangles_geometry_output_points"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018296, VkglTestCase_018296_1, VkglTestCase_018296_2);

#define VkglTestCase_018297_1 "dEQP-GLES31.functional.tessellation_geometry_interaction."
#define VkglTestCase_018297_2 "feedback.tessellation_output_quads_geometry_output_points"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018297, VkglTestCase_018297_1, VkglTestCase_018297_2);

#define VkglTestCase_018298_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.f"
#define VkglTestCase_018298_2 "eedback.tessellation_output_isolines_geometry_output_points"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018298, VkglTestCase_018298_1, VkglTestCase_018298_2);

#define VkglTestCase_018299_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.feedbac"
#define VkglTestCase_018299_2 "k.tessellation_output_triangles_point_mode_geometry_output_lines"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018299, VkglTestCase_018299_1, VkglTestCase_018299_2);

#define VkglTestCase_018300_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.feedb"
#define VkglTestCase_018300_2 "ack.tessellation_output_quads_point_mode_geometry_output_lines"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018300, VkglTestCase_018300_1, VkglTestCase_018300_2);

#define VkglTestCase_018301_1 "dEQP-GLES31.functional.tessellation_geometry_interaction.feedback"
#define VkglTestCase_018301_2 ".tessellation_output_isolines_point_mode_geometry_output_triangles"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018301, VkglTestCase_018301_1, VkglTestCase_018301_2);

#define VkglTestCase_018302_1 "dEQP-GLES31.functional.tessellation_geometry_"
#define VkglTestCase_018302_2 "interaction.feedback.record_variable_selection"
SHRINK_HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018302, VkglTestCase_018302_1, VkglTestCase_018302_2);
