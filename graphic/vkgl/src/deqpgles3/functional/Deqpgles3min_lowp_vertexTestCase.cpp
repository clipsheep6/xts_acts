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

#define VkglTestCase_019149_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019149_2 "nctions.precision.min.lowp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019149, VkglTestCase_019149_1, VkglTestCase_019149_2);

#define VkglTestCase_019150_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_019150_2 "unctions.precision.min.lowp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019150, VkglTestCase_019150_1, VkglTestCase_019150_2);

#define VkglTestCase_019151_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_019151_2 "unctions.precision.min.lowp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019151, VkglTestCase_019151_1, VkglTestCase_019151_2);

#define VkglTestCase_019152_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_019152_2 "unctions.precision.min.lowp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019152, VkglTestCase_019152_1, VkglTestCase_019152_2);
