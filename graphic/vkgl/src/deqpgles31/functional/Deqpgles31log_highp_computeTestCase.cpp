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

#define VkglTestCase_002417_1 "dEQP-GLES31.functional.shaders.builtin_fu"
#define VkglTestCase_002417_2 "nctions.precision.log.highp_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002417, VkglTestCase_002417_1, VkglTestCase_002417_2);

#define VkglTestCase_002418_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002418_2 "unctions.precision.log.highp_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002418, VkglTestCase_002418_1, VkglTestCase_002418_2);

#define VkglTestCase_002419_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002419_2 "unctions.precision.log.highp_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002419, VkglTestCase_002419_1, VkglTestCase_002419_2);

#define VkglTestCase_002420_1 "dEQP-GLES31.functional.shaders.builtin_f"
#define VkglTestCase_002420_2 "unctions.precision.log.highp_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002420, VkglTestCase_002420_1, VkglTestCase_002420_2);
