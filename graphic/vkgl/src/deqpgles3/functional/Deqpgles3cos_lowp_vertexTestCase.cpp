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
#include "../ActsDeqpgles30019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018527_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018527_2 "nctions.precision.cos.lowp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018527, VkglTestCase_018527_1, VkglTestCase_018527_2);

#define VkglTestCase_018528_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018528_2 "unctions.precision.cos.lowp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018528, VkglTestCase_018528_1, VkglTestCase_018528_2);

#define VkglTestCase_018529_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018529_2 "unctions.precision.cos.lowp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018529, VkglTestCase_018529_1, VkglTestCase_018529_2);

#define VkglTestCase_018530_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018530_2 "unctions.precision.cos.lowp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018530, VkglTestCase_018530_1, VkglTestCase_018530_2);
