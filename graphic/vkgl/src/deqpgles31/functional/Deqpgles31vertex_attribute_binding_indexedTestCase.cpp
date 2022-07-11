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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016118_1 "dEQP-GLES31.functional.state_query.vertex_attribute"
#define VkglTestCase_016118_2 "_binding.indexed.vertex_binding_divisor_getintegeri"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016118, VkglTestCase_016118_1, VkglTestCase_016118_2);

#define VkglTestCase_016119_1 "dEQP-GLES31.functional.state_query.vertex_attribut"
#define VkglTestCase_016119_2 "e_binding.indexed.vertex_binding_offset_getintegeri"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016119, VkglTestCase_016119_1, VkglTestCase_016119_2);

#define VkglTestCase_016120_1 "dEQP-GLES31.functional.state_query.vertex_attribut"
#define VkglTestCase_016120_2 "e_binding.indexed.vertex_binding_stride_getintegeri"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016120, VkglTestCase_016120_1, VkglTestCase_016120_2);

#define VkglTestCase_016121_1 "dEQP-GLES31.functional.state_query.vertex_attribut"
#define VkglTestCase_016121_2 "e_binding.indexed.vertex_binding_buffer_getintegeri"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016121, VkglTestCase_016121_1, VkglTestCase_016121_2);

#define VkglTestCase_016122_1 "dEQP-GLES31.functional.state_query.vertex_attribute_"
#define VkglTestCase_016122_2 "binding.indexed.vertex_binding_divisor_getintegeri64"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016122, VkglTestCase_016122_1, VkglTestCase_016122_2);

#define VkglTestCase_016123_1 "dEQP-GLES31.functional.state_query.vertex_attribute"
#define VkglTestCase_016123_2 "_binding.indexed.vertex_binding_offset_getintegeri64"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016123, VkglTestCase_016123_1, VkglTestCase_016123_2);

#define VkglTestCase_016124_1 "dEQP-GLES31.functional.state_query.vertex_attribute"
#define VkglTestCase_016124_2 "_binding.indexed.vertex_binding_stride_getintegeri64"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016124, VkglTestCase_016124_1, VkglTestCase_016124_2);

#define VkglTestCase_016125_1 "dEQP-GLES31.functional.state_query.vertex_attribute"
#define VkglTestCase_016125_2 "_binding.indexed.vertex_binding_buffer_getintegeri64"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016125, VkglTestCase_016125_1, VkglTestCase_016125_2);

#define VkglTestCase_016126_1 "dEQP-GLES31.functional.state_query.vertex_attribut"
#define VkglTestCase_016126_2 "e_binding.indexed.vertex_binding_divisor_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016126, VkglTestCase_016126_1, VkglTestCase_016126_2);

#define VkglTestCase_016127_1 "dEQP-GLES31.functional.state_query.vertex_attribut"
#define VkglTestCase_016127_2 "e_binding.indexed.vertex_binding_offset_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016127, VkglTestCase_016127_1, VkglTestCase_016127_2);

#define VkglTestCase_016128_1 "dEQP-GLES31.functional.state_query.vertex_attribut"
#define VkglTestCase_016128_2 "e_binding.indexed.vertex_binding_stride_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016128, VkglTestCase_016128_1, VkglTestCase_016128_2);

#define VkglTestCase_016129_1 "dEQP-GLES31.functional.state_query.vertex_attribut"
#define VkglTestCase_016129_2 "e_binding.indexed.vertex_binding_buffer_getboolean"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016129, VkglTestCase_016129_1, VkglTestCase_016129_2);

#define VkglTestCase_016130_1 "dEQP-GLES31.functional.state_query.vertex_attrib"
#define VkglTestCase_016130_2 "ute_binding.indexed.vertex_binding_divisor_mixed"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016130, VkglTestCase_016130_1, VkglTestCase_016130_2);

#define VkglTestCase_016131_1 "dEQP-GLES31.functional.state_query.vertex_attri"
#define VkglTestCase_016131_2 "bute_binding.indexed.vertex_binding_offset_mixed"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016131, VkglTestCase_016131_1, VkglTestCase_016131_2);

#define VkglTestCase_016132_1 "dEQP-GLES31.functional.state_query.vertex_attri"
#define VkglTestCase_016132_2 "bute_binding.indexed.vertex_binding_stride_mixed"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016132, VkglTestCase_016132_1, VkglTestCase_016132_2);

#define VkglTestCase_016133_1 "dEQP-GLES31.functional.state_query.vertex_attri"
#define VkglTestCase_016133_2 "bute_binding.indexed.vertex_binding_buffer_mixed"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016133, VkglTestCase_016133_1, VkglTestCase_016133_2);
