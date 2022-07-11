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
#include "../ActsDeqpgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002846_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002846_2 "nctions.precision.ldexp.lowp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002846, VkglTestCase_002846_1, VkglTestCase_002846_2);

#define VkglTestCase_002847_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002847_2 "unctions.precision.ldexp.lowp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002847, VkglTestCase_002847_1, VkglTestCase_002847_2);

#define VkglTestCase_002848_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002848_2 "unctions.precision.ldexp.lowp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002848, VkglTestCase_002848_1, VkglTestCase_002848_2);

#define VkglTestCase_002849_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002849_2 "unctions.precision.ldexp.lowp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002849, VkglTestCase_002849_1, VkglTestCase_002849_2);
