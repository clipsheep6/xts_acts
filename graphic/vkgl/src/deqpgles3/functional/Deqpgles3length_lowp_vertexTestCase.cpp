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

#define VkglTestCase_019287_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_019287_2 "ctions.precision.length.lowp_vertex.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019287, VkglTestCase_019287_1, VkglTestCase_019287_2);

#define VkglTestCase_019288_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019288_2 "nctions.precision.length.lowp_vertex.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019288, VkglTestCase_019288_1, VkglTestCase_019288_2);

#define VkglTestCase_019289_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019289_2 "nctions.precision.length.lowp_vertex.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019289, VkglTestCase_019289_1, VkglTestCase_019289_2);

#define VkglTestCase_019290_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_019290_2 "nctions.precision.length.lowp_vertex.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30020TestSuite, TestCase_019290, VkglTestCase_019290_1, VkglTestCase_019290_2);
