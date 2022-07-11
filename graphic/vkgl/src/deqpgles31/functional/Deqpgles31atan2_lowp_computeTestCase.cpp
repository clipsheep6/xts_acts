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

#define VkglTestCase_002309_1 "dEQP-GLES31.functional.shaders.builtin_fun"
#define VkglTestCase_002309_2 "ctions.precision.atan2.lowp_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002309, VkglTestCase_002309_1, VkglTestCase_002309_2);

#define VkglTestCase_002310_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002310_2 "nctions.precision.atan2.lowp_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002310, VkglTestCase_002310_1, VkglTestCase_002310_2);

#define VkglTestCase_002311_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002311_2 "nctions.precision.atan2.lowp_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002311, VkglTestCase_002311_1, VkglTestCase_002311_2);

#define VkglTestCase_002312_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002312_2 "nctions.precision.atan2.lowp_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002312, VkglTestCase_002312_1, VkglTestCase_002312_2);
