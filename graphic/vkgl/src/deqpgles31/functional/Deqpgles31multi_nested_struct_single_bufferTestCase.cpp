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
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009956_1 "dEQP-GLES31.functional.ssbo.layout.mu"
#define VkglTestCase_009956_2 "lti_nested_struct.single_buffer.shared"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009956, VkglTestCase_009956_1, VkglTestCase_009956_2);

#define VkglTestCase_009957_1 "dEQP-GLES31.functional.ssbo.layout.multi_nest"
#define VkglTestCase_009957_2 "ed_struct.single_buffer.shared_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009957, VkglTestCase_009957_1, VkglTestCase_009957_2);

#define VkglTestCase_009958_1 "dEQP-GLES31.functional.ssbo.layout.mu"
#define VkglTestCase_009958_2 "lti_nested_struct.single_buffer.packed"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009958, VkglTestCase_009958_1, VkglTestCase_009958_2);

#define VkglTestCase_009959_1 "dEQP-GLES31.functional.ssbo.layout.multi_nest"
#define VkglTestCase_009959_2 "ed_struct.single_buffer.packed_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009959, VkglTestCase_009959_1, VkglTestCase_009959_2);

#define VkglTestCase_009960_1 "dEQP-GLES31.functional.ssbo.layout.mu"
#define VkglTestCase_009960_2 "lti_nested_struct.single_buffer.std140"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009960, VkglTestCase_009960_1, VkglTestCase_009960_2);

#define VkglTestCase_009961_1 "dEQP-GLES31.functional.ssbo.layout.multi_nest"
#define VkglTestCase_009961_2 "ed_struct.single_buffer.std140_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009961, VkglTestCase_009961_1, VkglTestCase_009961_2);

#define VkglTestCase_009962_1 "dEQP-GLES31.functional.ssbo.layout.mu"
#define VkglTestCase_009962_2 "lti_nested_struct.single_buffer.std430"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009962, VkglTestCase_009962_1, VkglTestCase_009962_2);

#define VkglTestCase_009963_1 "dEQP-GLES31.functional.ssbo.layout.multi_nest"
#define VkglTestCase_009963_2 "ed_struct.single_buffer.std430_instance_array"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009963, VkglTestCase_009963_1, VkglTestCase_009963_2);
