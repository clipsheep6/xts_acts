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

#define VkglTestCase_002838_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002838_2 "tions.precision.frexp.highp_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002838, VkglTestCase_002838_1, VkglTestCase_002838_2);

#define VkglTestCase_002839_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002839_2 "ctions.precision.frexp.highp_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002839, VkglTestCase_002839_1, VkglTestCase_002839_2);

#define VkglTestCase_002840_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002840_2 "ctions.precision.frexp.highp_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002840, VkglTestCase_002840_1, VkglTestCase_002840_2);

#define VkglTestCase_002841_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002841_2 "ctions.precision.frexp.highp_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002841, VkglTestCase_002841_1, VkglTestCase_002841_2);
