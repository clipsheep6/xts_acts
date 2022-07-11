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
#include "../ActsDeqpgles310004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003427_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003427_2 "xing.sampler.const_expression.fragment.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003427, VkglTestCase_003427_1, VkglTestCase_003427_2);

#define VkglTestCase_003428_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003428_2 "ing.sampler.const_expression.fragment.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003428, VkglTestCase_003428_1, VkglTestCase_003428_2);

#define VkglTestCase_003429_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003429_2 "g.sampler.const_expression.fragment.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003429, VkglTestCase_003429_1, VkglTestCase_003429_2);

#define VkglTestCase_003430_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003430_2 "xing.sampler.const_expression.fragment.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003430, VkglTestCase_003430_1, VkglTestCase_003430_2);

#define VkglTestCase_003431_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003431_2 "g.sampler.const_expression.fragment.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003431, VkglTestCase_003431_1, VkglTestCase_003431_2);

#define VkglTestCase_003432_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003432_2 ".sampler.const_expression.fragment.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003432, VkglTestCase_003432_1, VkglTestCase_003432_2);

#define VkglTestCase_003433_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003433_2 "ampler.const_expression.fragment.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003433, VkglTestCase_003433_1, VkglTestCase_003433_2);

#define VkglTestCase_003434_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003434_2 "ing.sampler.const_expression.fragment.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003434, VkglTestCase_003434_1, VkglTestCase_003434_2);

#define VkglTestCase_003435_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003435_2 "ng.sampler.const_expression.fragment.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003435, VkglTestCase_003435_1, VkglTestCase_003435_2);

#define VkglTestCase_003436_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003436_2 "g.sampler.const_expression.fragment.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003436, VkglTestCase_003436_1, VkglTestCase_003436_2);

#define VkglTestCase_003437_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003437_2 "ing.sampler.const_expression.fragment.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003437, VkglTestCase_003437_1, VkglTestCase_003437_2);

#define VkglTestCase_003438_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003438_2 "ing.sampler.const_expression.fragment.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003438, VkglTestCase_003438_1, VkglTestCase_003438_2);

#define VkglTestCase_003439_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003439_2 "ng.sampler.const_expression.fragment.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003439, VkglTestCase_003439_1, VkglTestCase_003439_2);

#define VkglTestCase_003440_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003440_2 "g.sampler.const_expression.fragment.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003440, VkglTestCase_003440_1, VkglTestCase_003440_2);

#define VkglTestCase_003441_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003441_2 "ing.sampler.const_expression.fragment.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003441, VkglTestCase_003441_1, VkglTestCase_003441_2);

#define VkglTestCase_003442_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003442_2 ".sampler.const_expression.fragment.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003442, VkglTestCase_003442_1, VkglTestCase_003442_2);

#define VkglTestCase_003443_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003443_2 "mpler.const_expression.fragment.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003443, VkglTestCase_003443_1, VkglTestCase_003443_2);

#define VkglTestCase_003444_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003444_2 ".sampler.const_expression.fragment.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003444, VkglTestCase_003444_1, VkglTestCase_003444_2);

#define VkglTestCase_003445_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003445_2 ".sampler.const_expression.fragment.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003445, VkglTestCase_003445_1, VkglTestCase_003445_2);
