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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30020TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_019640_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_019640_2 "s.fragdata.valid_static_index"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019640, VkglTestCase_019640_1, VkglTestCase_019640_2);

#define VkglTestCase_019641_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_019641_2 ".fragdata.valid_uniform_index"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019641, VkglTestCase_019641_1, VkglTestCase_019641_2);

#define VkglTestCase_019642_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_019642_2 ".fragdata.valid_dynamic_index"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019642, VkglTestCase_019642_1, VkglTestCase_019642_2);

#define VkglTestCase_019643_1 "dEQP-GLES3.functional.sha"
#define VkglTestCase_019643_2 "ders.fragdata.draw_buffers"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019643, VkglTestCase_019643_1, VkglTestCase_019643_2);

#define VkglTestCase_019644_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_019644_2 ".fragdata.invalid_assign_to_1"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019644, VkglTestCase_019644_1, VkglTestCase_019644_2);

#define VkglTestCase_019645_1 "dEQP-GLES3.functional.shaders.fragdat"
#define VkglTestCase_019645_2 "a.write_fragcolor_and_fragdata_simple"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019645, VkglTestCase_019645_1, VkglTestCase_019645_2);

#define VkglTestCase_019646_1 "dEQP-GLES3.functional.shaders.fragdata"
#define VkglTestCase_019646_2 ".write_fragcolor_and_fragdata_static_if"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019646, VkglTestCase_019646_1, VkglTestCase_019646_2);

#define VkglTestCase_019647_1 "dEQP-GLES3.functional.shaders.fragdata."
#define VkglTestCase_019647_2 "write_fragcolor_and_fragdata_unused_func"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019647, VkglTestCase_019647_1, VkglTestCase_019647_2);
