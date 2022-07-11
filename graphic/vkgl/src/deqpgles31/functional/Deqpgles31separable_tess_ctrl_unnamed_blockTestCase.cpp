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
#include "../ActsDeqpgles310022TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_021056_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021056_2 "ferenced_by_shader.separable_tess_ctrl.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021056, VkglTestCase_021056_1, VkglTestCase_021056_2);

#define VkglTestCase_021057_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021057_2 "enced_by_shader.separable_tess_ctrl.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021057, VkglTestCase_021057_1, VkglTestCase_021057_2);

#define VkglTestCase_021058_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021058_2 "nced_by_shader.separable_tess_ctrl.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021058, VkglTestCase_021058_1, VkglTestCase_021058_2);

#define VkglTestCase_024210_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024210_2 "able.referenced_by.separable_tess_ctrl.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024210, VkglTestCase_024210_1, VkglTestCase_024210_2);

#define VkglTestCase_024211_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024211_2 "e.referenced_by.separable_tess_ctrl.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024211, VkglTestCase_024211_1, VkglTestCase_024211_2);

#define VkglTestCase_024212_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024212_2 "e.referenced_by.separable_tess_ctrl.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024212, VkglTestCase_024212_1, VkglTestCase_024212_2);
