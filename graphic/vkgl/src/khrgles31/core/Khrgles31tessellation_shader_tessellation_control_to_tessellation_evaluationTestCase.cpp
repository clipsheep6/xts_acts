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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002575_1 "KHR-GLES31.core.tessellation_shader.tessellation_c"
#define VkglTestCase_002575_2 "ontrol_to_tessellation_evaluation.data_pass_through"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002575, VkglTestCase_002575_1, VkglTestCase_002575_2);

#define VkglTestCase_002576_1 "KHR-GLES31.core.tessellation_shader.tessella"
#define VkglTestCase_002576_2 "tion_control_to_tessellation_evaluation.gl_in"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002576, VkglTestCase_002576_1, VkglTestCase_002576_2);

#define VkglTestCase_002577_1 "KHR-GLES31.core.tessellation_shader.tessellation_control_to_t"
#define VkglTestCase_002577_2 "essellation_evaluation.gl_MaxPatchVertices_Position_PointSize"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002577, VkglTestCase_002577_1, VkglTestCase_002577_2);

#define VkglTestCase_002578_1 "KHR-GLES31.core.tessellation_shader.tessellation_co"
#define VkglTestCase_002578_2 "ntrol_to_tessellation_evaluation.gl_PatchVerticesIn"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002578, VkglTestCase_002578_1, VkglTestCase_002578_2);

#define VkglTestCase_002579_1 "KHR-GLES31.core.tessellation_shader.tessellation"
#define VkglTestCase_002579_2 "_control_to_tessellation_evaluation.gl_tessLevel"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002579, VkglTestCase_002579_1, VkglTestCase_002579_2);
