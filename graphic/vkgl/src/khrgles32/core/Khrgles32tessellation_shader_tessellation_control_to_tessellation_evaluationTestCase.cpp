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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000197_1 "KHR-GLES32.core.tessellation_shader.tessellation_c"
#define VkglTestCase_000197_2 "ontrol_to_tessellation_evaluation.data_pass_through"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000197, VkglTestCase_000197_1, VkglTestCase_000197_2);

#define VkglTestCase_000198_1 "KHR-GLES32.core.tessellation_shader.tessella"
#define VkglTestCase_000198_2 "tion_control_to_tessellation_evaluation.gl_in"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000198, VkglTestCase_000198_1, VkglTestCase_000198_2);

#define VkglTestCase_000199_1 "KHR-GLES32.core.tessellation_shader.tessellation_control_to_t"
#define VkglTestCase_000199_2 "essellation_evaluation.gl_MaxPatchVertices_Position_PointSize"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000199, VkglTestCase_000199_1, VkglTestCase_000199_2);

#define VkglTestCase_000200_1 "KHR-GLES32.core.tessellation_shader.tessellation_co"
#define VkglTestCase_000200_2 "ntrol_to_tessellation_evaluation.gl_PatchVerticesIn"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000200, VkglTestCase_000200_1, VkglTestCase_000200_2);

#define VkglTestCase_000201_1 "KHR-GLES32.core.tessellation_shader.tessellation"
#define VkglTestCase_000201_2 "_control_to_tessellation_evaluation.gl_tessLevel"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000201, VkglTestCase_000201_1, VkglTestCase_000201_2);
