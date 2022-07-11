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

#define VkglTestCase_003503_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003503_2 "pler.const_expression.tessellation_evaluation.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003503, VkglTestCase_003503_1, VkglTestCase_003503_2);

#define VkglTestCase_003504_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003504_2 "ler.const_expression.tessellation_evaluation.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003504, VkglTestCase_003504_1, VkglTestCase_003504_2);

#define VkglTestCase_003505_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003505_2 "er.const_expression.tessellation_evaluation.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003505, VkglTestCase_003505_1, VkglTestCase_003505_2);

#define VkglTestCase_003506_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003506_2 "pler.const_expression.tessellation_evaluation.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003506, VkglTestCase_003506_1, VkglTestCase_003506_2);

#define VkglTestCase_003507_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003507_2 "r.const_expression.tessellation_evaluation.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003507, VkglTestCase_003507_1, VkglTestCase_003507_2);

#define VkglTestCase_003508_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003508_2 ".const_expression.tessellation_evaluation.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003508, VkglTestCase_003508_1, VkglTestCase_003508_2);

#define VkglTestCase_003509_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler."
#define VkglTestCase_003509_2 "const_expression.tessellation_evaluation.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003509, VkglTestCase_003509_1, VkglTestCase_003509_2);

#define VkglTestCase_003510_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003510_2 "pler.const_expression.tessellation_evaluation.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003510, VkglTestCase_003510_1, VkglTestCase_003510_2);

#define VkglTestCase_003511_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003511_2 "ler.const_expression.tessellation_evaluation.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003511, VkglTestCase_003511_1, VkglTestCase_003511_2);

#define VkglTestCase_003512_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003512_2 "r.const_expression.tessellation_evaluation.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003512, VkglTestCase_003512_1, VkglTestCase_003512_2);

#define VkglTestCase_003513_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003513_2 "pler.const_expression.tessellation_evaluation.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003513, VkglTestCase_003513_1, VkglTestCase_003513_2);

#define VkglTestCase_003514_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003514_2 "pler.const_expression.tessellation_evaluation.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003514, VkglTestCase_003514_1, VkglTestCase_003514_2);

#define VkglTestCase_003515_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003515_2 "ler.const_expression.tessellation_evaluation.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003515, VkglTestCase_003515_1, VkglTestCase_003515_2);

#define VkglTestCase_003516_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003516_2 "r.const_expression.tessellation_evaluation.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003516, VkglTestCase_003516_1, VkglTestCase_003516_2);

#define VkglTestCase_003517_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003517_2 "pler.const_expression.tessellation_evaluation.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003517, VkglTestCase_003517_1, VkglTestCase_003517_2);

#define VkglTestCase_003518_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003518_2 "r.const_expression.tessellation_evaluation.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003518, VkglTestCase_003518_1, VkglTestCase_003518_2);

#define VkglTestCase_003519_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler.c"
#define VkglTestCase_003519_2 "onst_expression.tessellation_evaluation.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003519, VkglTestCase_003519_1, VkglTestCase_003519_2);

#define VkglTestCase_003520_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003520_2 ".const_expression.tessellation_evaluation.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003520, VkglTestCase_003520_1, VkglTestCase_003520_2);

#define VkglTestCase_003521_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003521_2 ".const_expression.tessellation_evaluation.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003521, VkglTestCase_003521_1, VkglTestCase_003521_2);
