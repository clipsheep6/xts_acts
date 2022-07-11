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
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038422_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038422_2 "ribute_location.bind.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038422, VkglTestCase_038422_1, VkglTestCase_038422_2);

#define VkglTestCase_038423_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038423_2 "ribute_location.bind.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038423, VkglTestCase_038423_1, VkglTestCase_038423_2);

#define VkglTestCase_038424_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038424_2 "ribute_location.bind.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038424, VkglTestCase_038424_1, VkglTestCase_038424_2);

#define VkglTestCase_038425_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038425_2 "ribute_location.bind.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038425, VkglTestCase_038425_1, VkglTestCase_038425_2);

#define VkglTestCase_038426_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038426_2 "ribute_location.bind.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038426, VkglTestCase_038426_1, VkglTestCase_038426_2);

#define VkglTestCase_038427_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038427_2 "ribute_location.bind.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038427, VkglTestCase_038427_1, VkglTestCase_038427_2);

#define VkglTestCase_038428_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038428_2 "ribute_location.bind.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038428, VkglTestCase_038428_1, VkglTestCase_038428_2);

#define VkglTestCase_038429_1 "dEQP-GLES3.functional.at"
#define VkglTestCase_038429_2 "tribute_location.bind.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038429, VkglTestCase_038429_1, VkglTestCase_038429_2);

#define VkglTestCase_038430_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038430_2 "ribute_location.bind.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038430, VkglTestCase_038430_1, VkglTestCase_038430_2);

#define VkglTestCase_038431_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038431_2 "ribute_location.bind.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038431, VkglTestCase_038431_1, VkglTestCase_038431_2);

#define VkglTestCase_038432_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038432_2 "ribute_location.bind.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038432, VkglTestCase_038432_1, VkglTestCase_038432_2);

#define VkglTestCase_038433_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038433_2 "ribute_location.bind.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038433, VkglTestCase_038433_1, VkglTestCase_038433_2);

#define VkglTestCase_038434_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038434_2 "ribute_location.bind.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038434, VkglTestCase_038434_1, VkglTestCase_038434_2);

#define VkglTestCase_038435_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038435_2 "ribute_location.bind.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038435, VkglTestCase_038435_1, VkglTestCase_038435_2);

#define VkglTestCase_038436_1 "dEQP-GLES3.functional.att"
#define VkglTestCase_038436_2 "ribute_location.bind.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038436, VkglTestCase_038436_1, VkglTestCase_038436_2);

#define VkglTestCase_038437_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038437_2 "ibute_location.bind.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038437, VkglTestCase_038437_1, VkglTestCase_038437_2);

#define VkglTestCase_038438_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038438_2 "ibute_location.bind.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038438, VkglTestCase_038438_1, VkglTestCase_038438_2);

#define VkglTestCase_038439_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038439_2 "ibute_location.bind.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038439, VkglTestCase_038439_1, VkglTestCase_038439_2);

#define VkglTestCase_038440_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038440_2 "ibute_location.bind.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038440, VkglTestCase_038440_1, VkglTestCase_038440_2);

#define VkglTestCase_038441_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038441_2 "ibute_location.bind.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038441, VkglTestCase_038441_1, VkglTestCase_038441_2);

#define VkglTestCase_038442_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038442_2 "ibute_location.bind.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038442, VkglTestCase_038442_1, VkglTestCase_038442_2);

#define VkglTestCase_038443_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038443_2 "ibute_location.bind.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038443, VkglTestCase_038443_1, VkglTestCase_038443_2);

#define VkglTestCase_038444_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038444_2 "ibute_location.bind.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038444, VkglTestCase_038444_1, VkglTestCase_038444_2);

#define VkglTestCase_038445_1 "dEQP-GLES3.functional.attr"
#define VkglTestCase_038445_2 "ibute_location.bind.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038445, VkglTestCase_038445_1, VkglTestCase_038445_2);
