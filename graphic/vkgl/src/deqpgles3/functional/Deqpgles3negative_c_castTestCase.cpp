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
#include "../ActsDeqpgles30006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005008_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_005008_2 "negative.c_cast.float_0_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005008, VkglTestCase_005008_1, VkglTestCase_005008_2);

#define VkglTestCase_005009_1 "dEQP-GLES3.functional.shaders.n"
#define VkglTestCase_005009_2 "egative.c_cast.float_0_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005009, VkglTestCase_005009_1, VkglTestCase_005009_2);

#define VkglTestCase_005010_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_005010_2 "negative.c_cast.float_1_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005010, VkglTestCase_005010_1, VkglTestCase_005010_2);

#define VkglTestCase_005011_1 "dEQP-GLES3.functional.shaders.n"
#define VkglTestCase_005011_2 "egative.c_cast.float_1_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005011, VkglTestCase_005011_1, VkglTestCase_005011_2);

#define VkglTestCase_005012_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_005012_2 "negative.c_cast.float_2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005012, VkglTestCase_005012_1, VkglTestCase_005012_2);

#define VkglTestCase_005013_1 "dEQP-GLES3.functional.shaders.n"
#define VkglTestCase_005013_2 "egative.c_cast.float_2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005013, VkglTestCase_005013_1, VkglTestCase_005013_2);

#define VkglTestCase_005014_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_005014_2 "s.negative.c_cast.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005014, VkglTestCase_005014_1, VkglTestCase_005014_2);

#define VkglTestCase_005015_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_005015_2 ".negative.c_cast.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005015, VkglTestCase_005015_1, VkglTestCase_005015_2);

#define VkglTestCase_005016_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_005016_2 "s.negative.c_cast.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005016, VkglTestCase_005016_1, VkglTestCase_005016_2);

#define VkglTestCase_005017_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_005017_2 ".negative.c_cast.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005017, VkglTestCase_005017_1, VkglTestCase_005017_2);

#define VkglTestCase_005018_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_005018_2 "s.negative.c_cast.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005018, VkglTestCase_005018_1, VkglTestCase_005018_2);

#define VkglTestCase_005019_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_005019_2 ".negative.c_cast.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30006TestSuite, TestCase_005019, VkglTestCase_005019_1, VkglTestCase_005019_2);
