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

#define VkglTestCase_003351_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003351_2 "exing.sampler.const_literal.geometry.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003351, VkglTestCase_003351_1, VkglTestCase_003351_2);

#define VkglTestCase_003352_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003352_2 "xing.sampler.const_literal.geometry.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003352, VkglTestCase_003352_1, VkglTestCase_003352_2);

#define VkglTestCase_003353_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003353_2 "ing.sampler.const_literal.geometry.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003353, VkglTestCase_003353_1, VkglTestCase_003353_2);

#define VkglTestCase_003354_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003354_2 "exing.sampler.const_literal.geometry.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003354, VkglTestCase_003354_1, VkglTestCase_003354_2);

#define VkglTestCase_003355_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003355_2 "ng.sampler.const_literal.geometry.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003355, VkglTestCase_003355_1, VkglTestCase_003355_2);

#define VkglTestCase_003356_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003356_2 "g.sampler.const_literal.geometry.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003356, VkglTestCase_003356_1, VkglTestCase_003356_2);

#define VkglTestCase_003357_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003357_2 ".sampler.const_literal.geometry.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003357, VkglTestCase_003357_1, VkglTestCase_003357_2);

#define VkglTestCase_003358_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003358_2 "exing.sampler.const_literal.geometry.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003358, VkglTestCase_003358_1, VkglTestCase_003358_2);

#define VkglTestCase_003359_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003359_2 "xing.sampler.const_literal.geometry.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003359, VkglTestCase_003359_1, VkglTestCase_003359_2);

#define VkglTestCase_003360_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003360_2 "ng.sampler.const_literal.geometry.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003360, VkglTestCase_003360_1, VkglTestCase_003360_2);

#define VkglTestCase_003361_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003361_2 "exing.sampler.const_literal.geometry.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003361, VkglTestCase_003361_1, VkglTestCase_003361_2);

#define VkglTestCase_003362_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003362_2 "exing.sampler.const_literal.geometry.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003362, VkglTestCase_003362_1, VkglTestCase_003362_2);

#define VkglTestCase_003363_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003363_2 "xing.sampler.const_literal.geometry.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003363, VkglTestCase_003363_1, VkglTestCase_003363_2);

#define VkglTestCase_003364_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003364_2 "ng.sampler.const_literal.geometry.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003364, VkglTestCase_003364_1, VkglTestCase_003364_2);

#define VkglTestCase_003365_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003365_2 "exing.sampler.const_literal.geometry.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003365, VkglTestCase_003365_1, VkglTestCase_003365_2);

#define VkglTestCase_003366_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003366_2 "ng.sampler.const_literal.geometry.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003366, VkglTestCase_003366_1, VkglTestCase_003366_2);

#define VkglTestCase_003367_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003367_2 "sampler.const_literal.geometry.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003367, VkglTestCase_003367_1, VkglTestCase_003367_2);

#define VkglTestCase_003368_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003368_2 "g.sampler.const_literal.geometry.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003368, VkglTestCase_003368_1, VkglTestCase_003368_2);

#define VkglTestCase_003369_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003369_2 "g.sampler.const_literal.geometry.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003369, VkglTestCase_003369_1, VkglTestCase_003369_2);
