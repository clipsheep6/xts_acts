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
#include "../ActsDeqpgles310023TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_022703_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022703_2 "_output.type.separable_tess_ctrl.patch_var_struct.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022703, VkglTestCase_022703_1, VkglTestCase_022703_2);

#define VkglTestCase_022704_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022704_2 "m_output.type.separable_tess_ctrl.patch_var_struct.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022704, VkglTestCase_022704_1, VkglTestCase_022704_2);

#define VkglTestCase_022705_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022705_2 "_output.type.separable_tess_ctrl.patch_var_struct.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022705, VkglTestCase_022705_1, VkglTestCase_022705_2);

#define VkglTestCase_022706_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022706_2 "_output.type.separable_tess_ctrl.patch_var_struct.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022706, VkglTestCase_022706_1, VkglTestCase_022706_2);

#define VkglTestCase_022707_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022707_2 "_output.type.separable_tess_ctrl.patch_var_struct.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022707, VkglTestCase_022707_1, VkglTestCase_022707_2);

#define VkglTestCase_022708_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022708_2 "_output.type.separable_tess_ctrl.patch_var_struct.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022708, VkglTestCase_022708_1, VkglTestCase_022708_2);

#define VkglTestCase_022709_1 "dEQP-GLES31.functional.program_interface_query.program_"
#define VkglTestCase_022709_2 "output.type.separable_tess_ctrl.patch_var_struct.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022709, VkglTestCase_022709_1, VkglTestCase_022709_2);
