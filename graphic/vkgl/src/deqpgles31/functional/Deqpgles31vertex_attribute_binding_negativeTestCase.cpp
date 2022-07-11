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

#define VkglTestCase_016531_1 "dEQP-GLES31.functional.vertex_attribute_bin"
#define VkglTestCase_016531_2 "ding.negative.default_vao_bind_vertex_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016531, VkglTestCase_016531_1, VkglTestCase_016531_2);

#define VkglTestCase_016532_1 "dEQP-GLES31.functional.vertex_attribute_bind"
#define VkglTestCase_016532_2 "ing.negative.default_vao_vertex_attrib_format"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016532, VkglTestCase_016532_1, VkglTestCase_016532_2);

#define VkglTestCase_016533_1 "dEQP-GLES31.functional.vertex_attribute_bindi"
#define VkglTestCase_016533_2 "ng.negative.default_vao_vertex_attrib_i_format"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016533, VkglTestCase_016533_1, VkglTestCase_016533_2);

#define VkglTestCase_016534_1 "dEQP-GLES31.functional.vertex_attribute_bindi"
#define VkglTestCase_016534_2 "ng.negative.default_vao_vertex_attrib_binding"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016534, VkglTestCase_016534_1, VkglTestCase_016534_2);

#define VkglTestCase_016535_1 "dEQP-GLES31.functional.vertex_attribute_bindi"
#define VkglTestCase_016535_2 "ng.negative.default_vao_vertex_binding_divisor"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016535, VkglTestCase_016535_1, VkglTestCase_016535_2);

#define VkglTestCase_016536_1 "dEQP-GLES31.functional.vertex_attribute"
#define VkglTestCase_016536_2 "_binding.negative.bind_create_new_buffer"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016536, VkglTestCase_016536_1, VkglTestCase_016536_2);

#define VkglTestCase_016537_1 "dEQP-GLES31.functional.vertex_attribute_bindi"
#define VkglTestCase_016537_2 "ng.negative.vertex_attrib_format_large_offset"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016537, VkglTestCase_016537_1, VkglTestCase_016537_2);

#define VkglTestCase_016538_1 "dEQP-GLES31.functional.vertex_attribute_bind"
#define VkglTestCase_016538_2 "ing.negative.bind_vertex_buffer_large_stride"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016538, VkglTestCase_016538_1, VkglTestCase_016538_2);

#define VkglTestCase_016539_1 "dEQP-GLES31.functional.vertex_attribute_bindi"
#define VkglTestCase_016539_2 "ng.negative.bind_vertex_buffer_negative_stride"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016539, VkglTestCase_016539_1, VkglTestCase_016539_2);

#define VkglTestCase_016540_1 "dEQP-GLES31.functional.vertex_attribute_bindi"
#define VkglTestCase_016540_2 "ng.negative.bind_vertex_buffer_negative_offset"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016540, VkglTestCase_016540_1, VkglTestCase_016540_2);

#define VkglTestCase_016541_1 "dEQP-GLES31.functional.vertex_attribute_bindi"
#define VkglTestCase_016541_2 "ng.negative.vertex_attrib_binding_invalid_attr"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016541, VkglTestCase_016541_1, VkglTestCase_016541_2);

#define VkglTestCase_016542_1 "dEQP-GLES31.functional.vertex_attribute_binding"
#define VkglTestCase_016542_2 ".negative.vertex_attrib_binding_invalid_binding"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016542, VkglTestCase_016542_1, VkglTestCase_016542_2);
