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

#define VkglTestCase_018443_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018443_2 "tions.precision.div.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018443, VkglTestCase_018443_1, VkglTestCase_018443_2);

#define VkglTestCase_018444_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018444_2 "ctions.precision.div.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018444, VkglTestCase_018444_1, VkglTestCase_018444_2);

#define VkglTestCase_018445_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018445_2 "ctions.precision.div.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018445, VkglTestCase_018445_1, VkglTestCase_018445_2);

#define VkglTestCase_018446_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018446_2 "ctions.precision.div.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018446, VkglTestCase_018446_1, VkglTestCase_018446_2);
