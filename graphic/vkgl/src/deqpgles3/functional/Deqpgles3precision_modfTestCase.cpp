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

#define VkglTestCase_019143_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_019143_2 "_functions.precision.modf.lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019143, VkglTestCase_019143_1, VkglTestCase_019143_2);

#define VkglTestCase_019144_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_019144_2 "functions.precision.modf.lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019144, VkglTestCase_019144_1, VkglTestCase_019144_2);

#define VkglTestCase_019145_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_019145_2 "functions.precision.modf.mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019145, VkglTestCase_019145_1, VkglTestCase_019145_2);

#define VkglTestCase_019146_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_019146_2 "unctions.precision.modf.mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019146, VkglTestCase_019146_1, VkglTestCase_019146_2);

#define VkglTestCase_019147_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_019147_2 "_functions.precision.modf.highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019147, VkglTestCase_019147_1, VkglTestCase_019147_2);

#define VkglTestCase_019148_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_019148_2 "functions.precision.modf.highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019148, VkglTestCase_019148_1, VkglTestCase_019148_2);
