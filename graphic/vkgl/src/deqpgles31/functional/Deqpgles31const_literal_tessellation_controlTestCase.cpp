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

#define VkglTestCase_003370_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003370_2 "sampler.const_literal.tessellation_control.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003370, VkglTestCase_003370_1, VkglTestCase_003370_2);

#define VkglTestCase_003371_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003371_2 "ampler.const_literal.tessellation_control.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003371, VkglTestCase_003371_1, VkglTestCase_003371_2);

#define VkglTestCase_003372_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003372_2 "mpler.const_literal.tessellation_control.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003372, VkglTestCase_003372_1, VkglTestCase_003372_2);

#define VkglTestCase_003373_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003373_2 "sampler.const_literal.tessellation_control.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003373, VkglTestCase_003373_1, VkglTestCase_003373_2);

#define VkglTestCase_003374_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003374_2 "pler.const_literal.tessellation_control.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003374, VkglTestCase_003374_1, VkglTestCase_003374_2);

#define VkglTestCase_003375_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003375_2 "ler.const_literal.tessellation_control.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003375, VkglTestCase_003375_1, VkglTestCase_003375_2);

#define VkglTestCase_003376_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003376_2 "er.const_literal.tessellation_control.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003376, VkglTestCase_003376_1, VkglTestCase_003376_2);

#define VkglTestCase_003377_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003377_2 "sampler.const_literal.tessellation_control.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003377, VkglTestCase_003377_1, VkglTestCase_003377_2);

#define VkglTestCase_003378_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003378_2 "ampler.const_literal.tessellation_control.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003378, VkglTestCase_003378_1, VkglTestCase_003378_2);

#define VkglTestCase_003379_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003379_2 "pler.const_literal.tessellation_control.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003379, VkglTestCase_003379_1, VkglTestCase_003379_2);

#define VkglTestCase_003380_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003380_2 "sampler.const_literal.tessellation_control.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003380, VkglTestCase_003380_1, VkglTestCase_003380_2);

#define VkglTestCase_003381_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003381_2 "sampler.const_literal.tessellation_control.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003381, VkglTestCase_003381_1, VkglTestCase_003381_2);

#define VkglTestCase_003382_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003382_2 "ampler.const_literal.tessellation_control.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003382, VkglTestCase_003382_1, VkglTestCase_003382_2);

#define VkglTestCase_003383_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003383_2 "pler.const_literal.tessellation_control.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003383, VkglTestCase_003383_1, VkglTestCase_003383_2);

#define VkglTestCase_003384_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003384_2 "sampler.const_literal.tessellation_control.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003384, VkglTestCase_003384_1, VkglTestCase_003384_2);

#define VkglTestCase_003385_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003385_2 "pler.const_literal.tessellation_control.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003385, VkglTestCase_003385_1, VkglTestCase_003385_2);

#define VkglTestCase_003386_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003386_2 "r.const_literal.tessellation_control.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003386, VkglTestCase_003386_1, VkglTestCase_003386_2);

#define VkglTestCase_003387_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003387_2 "ler.const_literal.tessellation_control.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003387, VkglTestCase_003387_1, VkglTestCase_003387_2);

#define VkglTestCase_003388_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003388_2 "ler.const_literal.tessellation_control.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003388, VkglTestCase_003388_1, VkglTestCase_003388_2);
