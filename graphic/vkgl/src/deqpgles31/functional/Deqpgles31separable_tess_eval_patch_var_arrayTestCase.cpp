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

#define VkglTestCase_022117_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022117_2 "m_input.type.separable_tess_eval.patch_var_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022117, VkglTestCase_022117_1, VkglTestCase_022117_2);

#define VkglTestCase_022118_1 "dEQP-GLES31.functional.program_interface_query.progr"
#define VkglTestCase_022118_2 "am_input.type.separable_tess_eval.patch_var_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022118, VkglTestCase_022118_1, VkglTestCase_022118_2);

#define VkglTestCase_022119_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022119_2 "m_input.type.separable_tess_eval.patch_var_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022119, VkglTestCase_022119_1, VkglTestCase_022119_2);

#define VkglTestCase_022120_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022120_2 "m_input.type.separable_tess_eval.patch_var_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022120, VkglTestCase_022120_1, VkglTestCase_022120_2);

#define VkglTestCase_022121_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022121_2 "m_input.type.separable_tess_eval.patch_var_array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022121, VkglTestCase_022121_1, VkglTestCase_022121_2);

#define VkglTestCase_022122_1 "dEQP-GLES31.functional.program_interface_query.progra"
#define VkglTestCase_022122_2 "m_input.type.separable_tess_eval.patch_var_array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022122, VkglTestCase_022122_1, VkglTestCase_022122_2);

#define VkglTestCase_022123_1 "dEQP-GLES31.functional.program_interface_query.program"
#define VkglTestCase_022123_2 "_input.type.separable_tess_eval.patch_var_array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310023TestSuite, TestCase_022123, VkglTestCase_022123_1, VkglTestCase_022123_2);
