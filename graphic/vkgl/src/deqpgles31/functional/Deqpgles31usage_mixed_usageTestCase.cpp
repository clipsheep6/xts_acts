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

#define VkglTestCase_016524_1 "dEQP-GLES31.functional.vertex_attribute_bi"
#define VkglTestCase_016524_2 "nding.usage.mixed_usage.mixed_attribs_basic"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016524, VkglTestCase_016524_1, VkglTestCase_016524_2);

#define VkglTestCase_016525_1 "dEQP-GLES31.functional.vertex_attribute_binding."
#define VkglTestCase_016525_2 "usage.mixed_usage.mixed_attribs_instanced_binding"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016525, VkglTestCase_016525_1, VkglTestCase_016525_2);

#define VkglTestCase_016526_1 "dEQP-GLES31.functional.vertex_attribute_binding."
#define VkglTestCase_016526_2 "usage.mixed_usage.mixed_attribs_instanced_attrib"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016526, VkglTestCase_016526_1, VkglTestCase_016526_2);

#define VkglTestCase_016527_1 "dEQP-GLES31.functional.vertex_attribute_bind"
#define VkglTestCase_016527_2 "ing.usage.mixed_usage.mixed_api_change_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016527, VkglTestCase_016527_1, VkglTestCase_016527_2);

#define VkglTestCase_016528_1 "dEQP-GLES31.functional.vertex_attribute_binding."
#define VkglTestCase_016528_2 "usage.mixed_usage.mixed_api_change_buffer_offset"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016528, VkglTestCase_016528_1, VkglTestCase_016528_2);

#define VkglTestCase_016529_1 "dEQP-GLES31.functional.vertex_attribute_binding."
#define VkglTestCase_016529_2 "usage.mixed_usage.mixed_api_change_buffer_stride"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016529, VkglTestCase_016529_1, VkglTestCase_016529_2);

#define VkglTestCase_016530_1 "dEQP-GLES31.functional.vertex_attribute_binding."
#define VkglTestCase_016530_2 "usage.mixed_usage.mixed_api_change_binding_point"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016530, VkglTestCase_016530_1, VkglTestCase_016530_2);
