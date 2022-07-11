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

#define VkglTestCase_019344_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_019344_2 "_functions.precision.cross.lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019344, VkglTestCase_019344_1, VkglTestCase_019344_2);

#define VkglTestCase_019345_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_019345_2 "functions.precision.cross.lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019345, VkglTestCase_019345_1, VkglTestCase_019345_2);

#define VkglTestCase_019346_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_019346_2 "unctions.precision.cross.mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019346, VkglTestCase_019346_1, VkglTestCase_019346_2);

#define VkglTestCase_019347_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019347_2 "nctions.precision.cross.mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019347, VkglTestCase_019347_1, VkglTestCase_019347_2);

#define VkglTestCase_019348_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_019348_2 "functions.precision.cross.highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019348, VkglTestCase_019348_1, VkglTestCase_019348_2);

#define VkglTestCase_019349_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_019349_2 "unctions.precision.cross.highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019349, VkglTestCase_019349_1, VkglTestCase_019349_2);
