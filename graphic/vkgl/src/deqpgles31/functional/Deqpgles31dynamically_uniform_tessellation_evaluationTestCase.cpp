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

#define VkglTestCase_003731_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003731_2 "ler.dynamically_uniform.tessellation_evaluation.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003731, VkglTestCase_003731_1, VkglTestCase_003731_2);

#define VkglTestCase_003732_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003732_2 "er.dynamically_uniform.tessellation_evaluation.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003732, VkglTestCase_003732_1, VkglTestCase_003732_2);

#define VkglTestCase_003733_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003733_2 ".dynamically_uniform.tessellation_evaluation.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003733, VkglTestCase_003733_1, VkglTestCase_003733_2);

#define VkglTestCase_003734_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003734_2 "ler.dynamically_uniform.tessellation_evaluation.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003734, VkglTestCase_003734_1, VkglTestCase_003734_2);

#define VkglTestCase_003735_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003735_2 ".dynamically_uniform.tessellation_evaluation.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003735, VkglTestCase_003735_1, VkglTestCase_003735_2);

#define VkglTestCase_003736_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler."
#define VkglTestCase_003736_2 "dynamically_uniform.tessellation_evaluation.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003736, VkglTestCase_003736_1, VkglTestCase_003736_2);

#define VkglTestCase_003737_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler.dy"
#define VkglTestCase_003737_2 "namically_uniform.tessellation_evaluation.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003737, VkglTestCase_003737_1, VkglTestCase_003737_2);

#define VkglTestCase_003738_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003738_2 "er.dynamically_uniform.tessellation_evaluation.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003738, VkglTestCase_003738_1, VkglTestCase_003738_2);

#define VkglTestCase_003739_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003739_2 "r.dynamically_uniform.tessellation_evaluation.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003739, VkglTestCase_003739_1, VkglTestCase_003739_2);

#define VkglTestCase_003740_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003740_2 ".dynamically_uniform.tessellation_evaluation.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003740, VkglTestCase_003740_1, VkglTestCase_003740_2);

#define VkglTestCase_003741_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003741_2 "er.dynamically_uniform.tessellation_evaluation.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003741, VkglTestCase_003741_1, VkglTestCase_003741_2);

#define VkglTestCase_003742_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003742_2 "er.dynamically_uniform.tessellation_evaluation.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003742, VkglTestCase_003742_1, VkglTestCase_003742_2);

#define VkglTestCase_003743_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003743_2 "r.dynamically_uniform.tessellation_evaluation.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003743, VkglTestCase_003743_1, VkglTestCase_003743_2);

#define VkglTestCase_003744_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003744_2 ".dynamically_uniform.tessellation_evaluation.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003744, VkglTestCase_003744_1, VkglTestCase_003744_2);

#define VkglTestCase_003745_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003745_2 "er.dynamically_uniform.tessellation_evaluation.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003745, VkglTestCase_003745_1, VkglTestCase_003745_2);

#define VkglTestCase_003746_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler."
#define VkglTestCase_003746_2 "dynamically_uniform.tessellation_evaluation.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003746, VkglTestCase_003746_1, VkglTestCase_003746_2);

#define VkglTestCase_003747_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler.dyn"
#define VkglTestCase_003747_2 "amically_uniform.tessellation_evaluation.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003747, VkglTestCase_003747_1, VkglTestCase_003747_2);

#define VkglTestCase_003748_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler."
#define VkglTestCase_003748_2 "dynamically_uniform.tessellation_evaluation.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003748, VkglTestCase_003748_1, VkglTestCase_003748_2);

#define VkglTestCase_003749_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler."
#define VkglTestCase_003749_2 "dynamically_uniform.tessellation_evaluation.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003749, VkglTestCase_003749_1, VkglTestCase_003749_2);
