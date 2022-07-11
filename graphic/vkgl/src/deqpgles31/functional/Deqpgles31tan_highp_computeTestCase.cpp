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

#define VkglTestCase_002285_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002285_2 "nctions.precision.tan.highp_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002285, VkglTestCase_002285_1, VkglTestCase_002285_2);

#define VkglTestCase_002286_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002286_2 "unctions.precision.tan.highp_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002286, VkglTestCase_002286_1, VkglTestCase_002286_2);

#define VkglTestCase_002287_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002287_2 "unctions.precision.tan.highp_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002287, VkglTestCase_002287_1, VkglTestCase_002287_2);

#define VkglTestCase_002288_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002288_2 "unctions.precision.tan.highp_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002288, VkglTestCase_002288_1, VkglTestCase_002288_2);
