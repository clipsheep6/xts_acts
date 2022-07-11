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

#define VkglTestCase_002858_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002858_2 "tions.precision.ldexp.mediump_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002858, VkglTestCase_002858_1, VkglTestCase_002858_2);

#define VkglTestCase_002859_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002859_2 "ctions.precision.ldexp.mediump_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002859, VkglTestCase_002859_1, VkglTestCase_002859_2);

#define VkglTestCase_002860_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002860_2 "ctions.precision.ldexp.mediump_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002860, VkglTestCase_002860_1, VkglTestCase_002860_2);

#define VkglTestCase_002861_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002861_2 "ctions.precision.ldexp.mediump_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002861, VkglTestCase_002861_1, VkglTestCase_002861_2);
