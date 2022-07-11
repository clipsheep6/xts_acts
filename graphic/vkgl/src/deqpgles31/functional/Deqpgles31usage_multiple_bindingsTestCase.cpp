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

#define VkglTestCase_016519_1 "dEQP-GLES31.functional.vertex_attribut"
#define VkglTestCase_016519_2 "e_binding.usage.multiple_bindings.basic"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016519, VkglTestCase_016519_1, VkglTestCase_016519_2);

#define VkglTestCase_016520_1 "dEQP-GLES31.functional.vertex_attribute_b"
#define VkglTestCase_016520_2 "inding.usage.multiple_bindings.zero_stride"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016520, VkglTestCase_016520_1, VkglTestCase_016520_2);

#define VkglTestCase_016521_1 "dEQP-GLES31.functional.vertex_attribute_"
#define VkglTestCase_016521_2 "binding.usage.multiple_bindings.instanced"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016521, VkglTestCase_016521_1, VkglTestCase_016521_2);

#define VkglTestCase_016522_1 "dEQP-GLES31.functional.vertex_attribute_binding.u"
#define VkglTestCase_016522_2 "sage.multiple_bindings.aliasing_buffer_zero_stride"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016522, VkglTestCase_016522_1, VkglTestCase_016522_2);

#define VkglTestCase_016523_1 "dEQP-GLES31.functional.vertex_attribute_binding."
#define VkglTestCase_016523_2 "usage.multiple_bindings.aliasing_buffer_instanced"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016523, VkglTestCase_016523_1, VkglTestCase_016523_2);
