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

#define VkglTestCase_003617_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003617_2 "g.sampler.uniform.tessellation_evaluation.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003617, VkglTestCase_003617_1, VkglTestCase_003617_2);

#define VkglTestCase_003618_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003618_2 ".sampler.uniform.tessellation_evaluation.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003618, VkglTestCase_003618_1, VkglTestCase_003618_2);

#define VkglTestCase_003619_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003619_2 "ampler.uniform.tessellation_evaluation.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003619, VkglTestCase_003619_1, VkglTestCase_003619_2);

#define VkglTestCase_003620_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003620_2 "g.sampler.uniform.tessellation_evaluation.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003620, VkglTestCase_003620_1, VkglTestCase_003620_2);

#define VkglTestCase_003621_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003621_2 "ampler.uniform.tessellation_evaluation.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003621, VkglTestCase_003621_1, VkglTestCase_003621_2);

#define VkglTestCase_003622_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003622_2 "mpler.uniform.tessellation_evaluation.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003622, VkglTestCase_003622_1, VkglTestCase_003622_2);

#define VkglTestCase_003623_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003623_2 "ler.uniform.tessellation_evaluation.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003623, VkglTestCase_003623_1, VkglTestCase_003623_2);

#define VkglTestCase_003624_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003624_2 ".sampler.uniform.tessellation_evaluation.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003624, VkglTestCase_003624_1, VkglTestCase_003624_2);

#define VkglTestCase_003625_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003625_2 "sampler.uniform.tessellation_evaluation.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003625, VkglTestCase_003625_1, VkglTestCase_003625_2);

#define VkglTestCase_003626_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003626_2 "ampler.uniform.tessellation_evaluation.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003626, VkglTestCase_003626_1, VkglTestCase_003626_2);

#define VkglTestCase_003627_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003627_2 ".sampler.uniform.tessellation_evaluation.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003627, VkglTestCase_003627_1, VkglTestCase_003627_2);

#define VkglTestCase_003628_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003628_2 ".sampler.uniform.tessellation_evaluation.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003628, VkglTestCase_003628_1, VkglTestCase_003628_2);

#define VkglTestCase_003629_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003629_2 "sampler.uniform.tessellation_evaluation.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003629, VkglTestCase_003629_1, VkglTestCase_003629_2);

#define VkglTestCase_003630_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003630_2 "ampler.uniform.tessellation_evaluation.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003630, VkglTestCase_003630_1, VkglTestCase_003630_2);

#define VkglTestCase_003631_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003631_2 ".sampler.uniform.tessellation_evaluation.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003631, VkglTestCase_003631_1, VkglTestCase_003631_2);

#define VkglTestCase_003632_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003632_2 "mpler.uniform.tessellation_evaluation.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003632, VkglTestCase_003632_1, VkglTestCase_003632_2);

#define VkglTestCase_003633_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003633_2 "er.uniform.tessellation_evaluation.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003633, VkglTestCase_003633_1, VkglTestCase_003633_2);

#define VkglTestCase_003634_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003634_2 "mpler.uniform.tessellation_evaluation.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003634, VkglTestCase_003634_1, VkglTestCase_003634_2);

#define VkglTestCase_003635_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003635_2 "mpler.uniform.tessellation_evaluation.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003635, VkglTestCase_003635_1, VkglTestCase_003635_2);
