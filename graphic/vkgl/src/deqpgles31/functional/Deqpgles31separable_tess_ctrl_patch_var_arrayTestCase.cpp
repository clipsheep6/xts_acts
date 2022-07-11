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

#define VkglTestCase_022710_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022710_2 "_output.type.separable_tess_ctrl.patch_var_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022710, VkglTestCase_022710_1, VkglTestCase_022710_2);

#define VkglTestCase_022711_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022711_2 "m_output.type.separable_tess_ctrl.patch_var_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022711, VkglTestCase_022711_1, VkglTestCase_022711_2);

#define VkglTestCase_022712_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022712_2 "m_output.type.separable_tess_ctrl.patch_var_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022712, VkglTestCase_022712_1, VkglTestCase_022712_2);

#define VkglTestCase_022713_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022713_2 "m_output.type.separable_tess_ctrl.patch_var_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022713, VkglTestCase_022713_1, VkglTestCase_022713_2);

#define VkglTestCase_022714_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022714_2 "_output.type.separable_tess_ctrl.patch_var_array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022714, VkglTestCase_022714_1, VkglTestCase_022714_2);

#define VkglTestCase_022715_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022715_2 "_output.type.separable_tess_ctrl.patch_var_array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022715, VkglTestCase_022715_1, VkglTestCase_022715_2);

#define VkglTestCase_022716_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022716_2 "_output.type.separable_tess_ctrl.patch_var_array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022716, VkglTestCase_022716_1, VkglTestCase_022716_2);
