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

#define VkglTestCase_002233_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_002233_2 "ions.precision.radians.mediump_compute.scalar"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002233, VkglTestCase_002233_1, VkglTestCase_002233_2);

#define VkglTestCase_002234_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002234_2 "tions.precision.radians.mediump_compute.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002234, VkglTestCase_002234_1, VkglTestCase_002234_2);

#define VkglTestCase_002235_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002235_2 "tions.precision.radians.mediump_compute.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002235, VkglTestCase_002235_1, VkglTestCase_002235_2);

#define VkglTestCase_002236_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_002236_2 "tions.precision.radians.mediump_compute.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310003TestSuite, TestCase_002236, VkglTestCase_002236_1, VkglTestCase_002236_2);
