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

#define VkglTestCase_003446_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003446_2 "xing.sampler.const_expression.compute.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003446, VkglTestCase_003446_1, VkglTestCase_003446_2);

#define VkglTestCase_003447_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003447_2 "ing.sampler.const_expression.compute.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003447, VkglTestCase_003447_1, VkglTestCase_003447_2);

#define VkglTestCase_003448_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003448_2 "ng.sampler.const_expression.compute.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003448, VkglTestCase_003448_1, VkglTestCase_003448_2);

#define VkglTestCase_003449_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003449_2 "xing.sampler.const_expression.compute.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003449, VkglTestCase_003449_1, VkglTestCase_003449_2);

#define VkglTestCase_003450_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003450_2 "g.sampler.const_expression.compute.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003450, VkglTestCase_003450_1, VkglTestCase_003450_2);

#define VkglTestCase_003451_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003451_2 ".sampler.const_expression.compute.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003451, VkglTestCase_003451_1, VkglTestCase_003451_2);

#define VkglTestCase_003452_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003452_2 "sampler.const_expression.compute.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003452, VkglTestCase_003452_1, VkglTestCase_003452_2);

#define VkglTestCase_003453_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003453_2 "xing.sampler.const_expression.compute.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003453, VkglTestCase_003453_1, VkglTestCase_003453_2);

#define VkglTestCase_003454_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003454_2 "ing.sampler.const_expression.compute.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003454, VkglTestCase_003454_1, VkglTestCase_003454_2);

#define VkglTestCase_003455_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003455_2 "g.sampler.const_expression.compute.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003455, VkglTestCase_003455_1, VkglTestCase_003455_2);

#define VkglTestCase_003456_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003456_2 "xing.sampler.const_expression.compute.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003456, VkglTestCase_003456_1, VkglTestCase_003456_2);

#define VkglTestCase_003457_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003457_2 "xing.sampler.const_expression.compute.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003457, VkglTestCase_003457_1, VkglTestCase_003457_2);

#define VkglTestCase_003458_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003458_2 "ing.sampler.const_expression.compute.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003458, VkglTestCase_003458_1, VkglTestCase_003458_2);

#define VkglTestCase_003459_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003459_2 "g.sampler.const_expression.compute.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003459, VkglTestCase_003459_1, VkglTestCase_003459_2);

#define VkglTestCase_003460_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003460_2 "xing.sampler.const_expression.compute.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003460, VkglTestCase_003460_1, VkglTestCase_003460_2);

#define VkglTestCase_003461_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003461_2 "g.sampler.const_expression.compute.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003461, VkglTestCase_003461_1, VkglTestCase_003461_2);

#define VkglTestCase_003462_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003462_2 "ampler.const_expression.compute.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003462, VkglTestCase_003462_1, VkglTestCase_003462_2);

#define VkglTestCase_003463_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003463_2 ".sampler.const_expression.compute.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003463, VkglTestCase_003463_1, VkglTestCase_003463_2);

#define VkglTestCase_003464_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003464_2 ".sampler.const_expression.compute.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003464, VkglTestCase_003464_1, VkglTestCase_003464_2);
