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

#define VkglTestCase_002822_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002822_2 "tions.precision.frexp.mediump_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002822, VkglTestCase_002822_1, VkglTestCase_002822_2);

#define VkglTestCase_002823_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002823_2 "ctions.precision.frexp.mediump_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002823, VkglTestCase_002823_1, VkglTestCase_002823_2);

#define VkglTestCase_002824_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002824_2 "ctions.precision.frexp.mediump_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002824, VkglTestCase_002824_1, VkglTestCase_002824_2);

#define VkglTestCase_002825_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002825_2 "ctions.precision.frexp.mediump_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002825, VkglTestCase_002825_1, VkglTestCase_002825_2);
