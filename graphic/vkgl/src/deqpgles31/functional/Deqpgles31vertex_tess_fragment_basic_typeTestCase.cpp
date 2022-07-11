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
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023163_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023163_2 "eedback_varying.type.vertex_tess_fragment.basic_type.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023163, VkglTestCase_023163_1, VkglTestCase_023163_2);

#define VkglTestCase_023164_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023164_2 "feedback_varying.type.vertex_tess_fragment.basic_type.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023164, VkglTestCase_023164_1, VkglTestCase_023164_2);

#define VkglTestCase_023165_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023165_2 "feedback_varying.type.vertex_tess_fragment.basic_type.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023165, VkglTestCase_023165_1, VkglTestCase_023165_2);

#define VkglTestCase_023166_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023166_2 "feedback_varying.type.vertex_tess_fragment.basic_type.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023166, VkglTestCase_023166_1, VkglTestCase_023166_2);

#define VkglTestCase_023167_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023167_2 "eedback_varying.type.vertex_tess_fragment.basic_type.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023167, VkglTestCase_023167_1, VkglTestCase_023167_2);

#define VkglTestCase_023168_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023168_2 "eedback_varying.type.vertex_tess_fragment.basic_type.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023168, VkglTestCase_023168_1, VkglTestCase_023168_2);

#define VkglTestCase_023169_1 "dEQP-GLES31.functional.program_interface_query.transform_f"
#define VkglTestCase_023169_2 "eedback_varying.type.vertex_tess_fragment.basic_type.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023169, VkglTestCase_023169_1, VkglTestCase_023169_2);
