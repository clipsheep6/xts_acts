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

#define VkglTestCase_021081_1 "dEQP-GLES31.functional.program_interface_query.uniform.re"
#define VkglTestCase_021081_2 "ferenced_by_shader.separable_tess_eval.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021081, VkglTestCase_021081_1, VkglTestCase_021081_2);

#define VkglTestCase_021082_1 "dEQP-GLES31.functional.program_interface_query.uniform.refer"
#define VkglTestCase_021082_2 "enced_by_shader.separable_tess_eval.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021082, VkglTestCase_021082_1, VkglTestCase_021082_2);

#define VkglTestCase_021083_1 "dEQP-GLES31.functional.program_interface_query.uniform.refere"
#define VkglTestCase_021083_2 "nced_by_shader.separable_tess_eval.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_021083, VkglTestCase_021083_1, VkglTestCase_021083_2);

#define VkglTestCase_024225_1 "dEQP-GLES31.functional.program_interface_query.buffer_vari"
#define VkglTestCase_024225_2 "able.referenced_by.separable_tess_eval.unnamed_block.float"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024225, VkglTestCase_024225_1, VkglTestCase_024225_2);

#define VkglTestCase_024226_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024226_2 "e.referenced_by.separable_tess_eval.unnamed_block.float_array"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024226, VkglTestCase_024226_1, VkglTestCase_024226_2);

#define VkglTestCase_024227_1 "dEQP-GLES31.functional.program_interface_query.buffer_variabl"
#define VkglTestCase_024227_2 "e.referenced_by.separable_tess_eval.unnamed_block.float_struct"
SHRINK_HWTEST_F(ActsDeqpgles310022TestSuite, TestCase_024227, VkglTestCase_024227_1, VkglTestCase_024227_2);
