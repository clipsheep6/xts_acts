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

#define VkglTestCase_016110_1 "dEQP-GLES31.functional.state_query.vertex_attri"
#define VkglTestCase_016110_2 "bute_binding.vertex_attrib.vertex_attrib_binding"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016110, VkglTestCase_016110_1, VkglTestCase_016110_2);

#define VkglTestCase_016111_1 "dEQP-GLES31.functional.state_query.vertex_attribute"
#define VkglTestCase_016111_2 "_binding.vertex_attrib.vertex_attrib_relative_offset"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016111, VkglTestCase_016111_1, VkglTestCase_016111_2);

#define VkglTestCase_016112_1 "dEQP-GLES31.functional.state_query.vertex_attribute_bind"
#define VkglTestCase_016112_2 "ing.vertex_attrib.vertex_attrib_binding_getvertexattribfv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016112, VkglTestCase_016112_1, VkglTestCase_016112_2);

#define VkglTestCase_016113_1 "dEQP-GLES31.functional.state_query.vertex_attribute_binding."
#define VkglTestCase_016113_2 "vertex_attrib.vertex_attrib_relative_offset_getvertexattribfv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016113, VkglTestCase_016113_1, VkglTestCase_016113_2);

#define VkglTestCase_016114_1 "dEQP-GLES31.functional.state_query.vertex_attribute_bindi"
#define VkglTestCase_016114_2 "ng.vertex_attrib.vertex_attrib_binding_getvertexattribiiv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016114, VkglTestCase_016114_1, VkglTestCase_016114_2);

#define VkglTestCase_016115_1 "dEQP-GLES31.functional.state_query.vertex_attribute_binding.v"
#define VkglTestCase_016115_2 "ertex_attrib.vertex_attrib_relative_offset_getvertexattribiiv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016115, VkglTestCase_016115_1, VkglTestCase_016115_2);

#define VkglTestCase_016116_1 "dEQP-GLES31.functional.state_query.vertex_attribute_bindi"
#define VkglTestCase_016116_2 "ng.vertex_attrib.vertex_attrib_binding_getvertexattribiuiv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016116, VkglTestCase_016116_1, VkglTestCase_016116_2);

#define VkglTestCase_016117_1 "dEQP-GLES31.functional.state_query.vertex_attribute_binding.v"
#define VkglTestCase_016117_2 "ertex_attrib.vertex_attrib_relative_offset_getvertexattribiuiv"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016117, VkglTestCase_016117_1, VkglTestCase_016117_2);
