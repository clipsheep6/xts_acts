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

#define VkglTestCase_022696_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022696_2 "ram_output.type.separable_tess_ctrl.patch_var.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022696, VkglTestCase_022696_1, VkglTestCase_022696_2);

#define VkglTestCase_022697_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022697_2 "gram_output.type.separable_tess_ctrl.patch_var.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022697, VkglTestCase_022697_1, VkglTestCase_022697_2);

#define VkglTestCase_022698_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022698_2 "gram_output.type.separable_tess_ctrl.patch_var.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022698, VkglTestCase_022698_1, VkglTestCase_022698_2);

#define VkglTestCase_022699_1 "dEQP-GLES31.functional.program_interface_query.pro"
#define VkglTestCase_022699_2 "gram_output.type.separable_tess_ctrl.patch_var.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022699, VkglTestCase_022699_1, VkglTestCase_022699_2);

#define VkglTestCase_022700_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022700_2 "ram_output.type.separable_tess_ctrl.patch_var.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022700, VkglTestCase_022700_1, VkglTestCase_022700_2);

#define VkglTestCase_022701_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022701_2 "ram_output.type.separable_tess_ctrl.patch_var.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022701, VkglTestCase_022701_1, VkglTestCase_022701_2);

#define VkglTestCase_022702_1 "dEQP-GLES31.functional.program_interface_query.prog"
#define VkglTestCase_022702_2 "ram_output.type.separable_tess_ctrl.patch_var.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022702, VkglTestCase_022702_1, VkglTestCase_022702_2);
