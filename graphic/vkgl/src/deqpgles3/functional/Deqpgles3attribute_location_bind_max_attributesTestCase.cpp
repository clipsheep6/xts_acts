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

#define VkglTestCase_038446_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038446_2 "ocation.bind_max_attributes.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038446, VkglTestCase_038446_1, VkglTestCase_038446_2);

#define VkglTestCase_038447_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038447_2 "location.bind_max_attributes.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038447, VkglTestCase_038447_1, VkglTestCase_038447_2);

#define VkglTestCase_038448_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038448_2 "location.bind_max_attributes.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038448, VkglTestCase_038448_1, VkglTestCase_038448_2);

#define VkglTestCase_038449_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038449_2 "location.bind_max_attributes.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038449, VkglTestCase_038449_1, VkglTestCase_038449_2);

#define VkglTestCase_038450_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038450_2 "location.bind_max_attributes.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038450, VkglTestCase_038450_1, VkglTestCase_038450_2);

#define VkglTestCase_038451_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038451_2 "location.bind_max_attributes.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038451, VkglTestCase_038451_1, VkglTestCase_038451_2);

#define VkglTestCase_038452_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038452_2 "location.bind_max_attributes.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038452, VkglTestCase_038452_1, VkglTestCase_038452_2);

#define VkglTestCase_038453_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038453_2 "location.bind_max_attributes.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038453, VkglTestCase_038453_1, VkglTestCase_038453_2);

#define VkglTestCase_038454_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038454_2 "ocation.bind_max_attributes.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038454, VkglTestCase_038454_1, VkglTestCase_038454_2);

#define VkglTestCase_038455_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038455_2 "ocation.bind_max_attributes.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038455, VkglTestCase_038455_1, VkglTestCase_038455_2);

#define VkglTestCase_038456_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038456_2 "ocation.bind_max_attributes.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038456, VkglTestCase_038456_1, VkglTestCase_038456_2);

#define VkglTestCase_038457_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038457_2 "location.bind_max_attributes.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038457, VkglTestCase_038457_1, VkglTestCase_038457_2);

#define VkglTestCase_038458_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038458_2 "ocation.bind_max_attributes.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038458, VkglTestCase_038458_1, VkglTestCase_038458_2);

#define VkglTestCase_038459_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038459_2 "ocation.bind_max_attributes.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038459, VkglTestCase_038459_1, VkglTestCase_038459_2);

#define VkglTestCase_038460_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038460_2 "ocation.bind_max_attributes.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038460, VkglTestCase_038460_1, VkglTestCase_038460_2);

#define VkglTestCase_038461_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038461_2 "ocation.bind_max_attributes.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038461, VkglTestCase_038461_1, VkglTestCase_038461_2);

#define VkglTestCase_038462_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038462_2 "ocation.bind_max_attributes.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038462, VkglTestCase_038462_1, VkglTestCase_038462_2);

#define VkglTestCase_038463_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038463_2 "ocation.bind_max_attributes.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038463, VkglTestCase_038463_1, VkglTestCase_038463_2);

#define VkglTestCase_038464_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038464_2 "ocation.bind_max_attributes.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038464, VkglTestCase_038464_1, VkglTestCase_038464_2);

#define VkglTestCase_038465_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038465_2 "ocation.bind_max_attributes.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038465, VkglTestCase_038465_1, VkglTestCase_038465_2);

#define VkglTestCase_038466_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038466_2 "ocation.bind_max_attributes.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038466, VkglTestCase_038466_1, VkglTestCase_038466_2);

#define VkglTestCase_038467_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038467_2 "ocation.bind_max_attributes.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038467, VkglTestCase_038467_1, VkglTestCase_038467_2);

#define VkglTestCase_038468_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038468_2 "ocation.bind_max_attributes.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038468, VkglTestCase_038468_1, VkglTestCase_038468_2);

#define VkglTestCase_038469_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038469_2 "ocation.bind_max_attributes.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038469, VkglTestCase_038469_1, VkglTestCase_038469_2);
