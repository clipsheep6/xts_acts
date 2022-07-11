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

#define VkglTestCase_002425_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002425_2 "tions.precision.exp2.mediump_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002425, VkglTestCase_002425_1, VkglTestCase_002425_2);

#define VkglTestCase_002426_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002426_2 "ctions.precision.exp2.mediump_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002426, VkglTestCase_002426_1, VkglTestCase_002426_2);

#define VkglTestCase_002427_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002427_2 "ctions.precision.exp2.mediump_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002427, VkglTestCase_002427_1, VkglTestCase_002427_2);

#define VkglTestCase_002428_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002428_2 "ctions.precision.exp2.mediump_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002428, VkglTestCase_002428_1, VkglTestCase_002428_2);
