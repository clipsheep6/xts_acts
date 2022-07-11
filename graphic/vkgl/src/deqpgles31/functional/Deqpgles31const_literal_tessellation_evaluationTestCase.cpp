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

#define VkglTestCase_003389_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003389_2 "ampler.const_literal.tessellation_evaluation.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003389, VkglTestCase_003389_1, VkglTestCase_003389_2);

#define VkglTestCase_003390_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003390_2 "mpler.const_literal.tessellation_evaluation.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003390, VkglTestCase_003390_1, VkglTestCase_003390_2);

#define VkglTestCase_003391_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003391_2 "ler.const_literal.tessellation_evaluation.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003391, VkglTestCase_003391_1, VkglTestCase_003391_2);

#define VkglTestCase_003392_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003392_2 "ampler.const_literal.tessellation_evaluation.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003392, VkglTestCase_003392_1, VkglTestCase_003392_2);

#define VkglTestCase_003393_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003393_2 "ler.const_literal.tessellation_evaluation.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003393, VkglTestCase_003393_1, VkglTestCase_003393_2);

#define VkglTestCase_003394_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003394_2 "er.const_literal.tessellation_evaluation.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003394, VkglTestCase_003394_1, VkglTestCase_003394_2);

#define VkglTestCase_003395_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003395_2 ".const_literal.tessellation_evaluation.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003395, VkglTestCase_003395_1, VkglTestCase_003395_2);

#define VkglTestCase_003396_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003396_2 "mpler.const_literal.tessellation_evaluation.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003396, VkglTestCase_003396_1, VkglTestCase_003396_2);

#define VkglTestCase_003397_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003397_2 "pler.const_literal.tessellation_evaluation.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003397, VkglTestCase_003397_1, VkglTestCase_003397_2);

#define VkglTestCase_003398_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003398_2 "ler.const_literal.tessellation_evaluation.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003398, VkglTestCase_003398_1, VkglTestCase_003398_2);

#define VkglTestCase_003399_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003399_2 "mpler.const_literal.tessellation_evaluation.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003399, VkglTestCase_003399_1, VkglTestCase_003399_2);

#define VkglTestCase_003400_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003400_2 "mpler.const_literal.tessellation_evaluation.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003400, VkglTestCase_003400_1, VkglTestCase_003400_2);

#define VkglTestCase_003401_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003401_2 "pler.const_literal.tessellation_evaluation.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003401, VkglTestCase_003401_1, VkglTestCase_003401_2);

#define VkglTestCase_003402_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003402_2 "ler.const_literal.tessellation_evaluation.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003402, VkglTestCase_003402_1, VkglTestCase_003402_2);

#define VkglTestCase_003403_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003403_2 "mpler.const_literal.tessellation_evaluation.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003403, VkglTestCase_003403_1, VkglTestCase_003403_2);

#define VkglTestCase_003404_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003404_2 "er.const_literal.tessellation_evaluation.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003404, VkglTestCase_003404_1, VkglTestCase_003404_2);

#define VkglTestCase_003405_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler."
#define VkglTestCase_003405_2 "const_literal.tessellation_evaluation.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003405, VkglTestCase_003405_1, VkglTestCase_003405_2);

#define VkglTestCase_003406_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003406_2 "er.const_literal.tessellation_evaluation.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003406, VkglTestCase_003406_1, VkglTestCase_003406_2);

#define VkglTestCase_003407_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003407_2 "er.const_literal.tessellation_evaluation.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003407, VkglTestCase_003407_1, VkglTestCase_003407_2);
