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

#define VkglTestCase_018987_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018987_2 "ions.precision.floor.mediump_fragment.scalar"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018987, VkglTestCase_018987_1, VkglTestCase_018987_2);

#define VkglTestCase_018988_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018988_2 "tions.precision.floor.mediump_fragment.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018988, VkglTestCase_018988_1, VkglTestCase_018988_2);

#define VkglTestCase_018989_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018989_2 "tions.precision.floor.mediump_fragment.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018989, VkglTestCase_018989_1, VkglTestCase_018989_2);

#define VkglTestCase_018990_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018990_2 "tions.precision.floor.mediump_fragment.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018990, VkglTestCase_018990_1, VkglTestCase_018990_2);
