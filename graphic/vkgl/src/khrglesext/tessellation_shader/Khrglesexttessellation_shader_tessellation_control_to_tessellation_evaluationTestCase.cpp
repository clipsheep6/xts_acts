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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000169_1 "KHR-GLESEXT.tessellation_shader.tessellation_con"
#define VkglTestCase_000169_2 "trol_to_tessellation_evaluation.data_pass_through"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000169, VkglTestCase_000169_1, VkglTestCase_000169_2);

#define VkglTestCase_000170_1 "KHR-GLESEXT.tessellation_shader.tessellati"
#define VkglTestCase_000170_2 "on_control_to_tessellation_evaluation.gl_in"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000170, VkglTestCase_000170_1, VkglTestCase_000170_2);

#define VkglTestCase_000171_1 "KHR-GLESEXT.tessellation_shader.tessellation_control_to_tes"
#define VkglTestCase_000171_2 "sellation_evaluation.gl_MaxPatchVertices_Position_PointSize"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000171, VkglTestCase_000171_1, VkglTestCase_000171_2);

#define VkglTestCase_000172_1 "KHR-GLESEXT.tessellation_shader.tessellation_cont"
#define VkglTestCase_000172_2 "rol_to_tessellation_evaluation.gl_PatchVerticesIn"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000172, VkglTestCase_000172_1, VkglTestCase_000172_2);

#define VkglTestCase_000173_1 "KHR-GLESEXT.tessellation_shader.tessellation_c"
#define VkglTestCase_000173_2 "ontrol_to_tessellation_evaluation.gl_tessLevel"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000173, VkglTestCase_000173_1, VkglTestCase_000173_2);
