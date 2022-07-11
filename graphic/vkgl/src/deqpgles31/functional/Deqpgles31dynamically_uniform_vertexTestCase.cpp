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

#define VkglTestCase_003636_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003636_2 "ing.sampler.dynamically_uniform.vertex.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003636, VkglTestCase_003636_1, VkglTestCase_003636_2);

#define VkglTestCase_003637_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003637_2 "ng.sampler.dynamically_uniform.vertex.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003637, VkglTestCase_003637_1, VkglTestCase_003637_2);

#define VkglTestCase_003638_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003638_2 "g.sampler.dynamically_uniform.vertex.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003638, VkglTestCase_003638_1, VkglTestCase_003638_2);

#define VkglTestCase_003639_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003639_2 "ing.sampler.dynamically_uniform.vertex.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003639, VkglTestCase_003639_1, VkglTestCase_003639_2);

#define VkglTestCase_003640_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003640_2 ".sampler.dynamically_uniform.vertex.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003640, VkglTestCase_003640_1, VkglTestCase_003640_2);

#define VkglTestCase_003641_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003641_2 "sampler.dynamically_uniform.vertex.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003641, VkglTestCase_003641_1, VkglTestCase_003641_2);

#define VkglTestCase_003642_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003642_2 "ampler.dynamically_uniform.vertex.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003642, VkglTestCase_003642_1, VkglTestCase_003642_2);

#define VkglTestCase_003643_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003643_2 "ing.sampler.dynamically_uniform.vertex.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003643, VkglTestCase_003643_1, VkglTestCase_003643_2);

#define VkglTestCase_003644_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003644_2 "ng.sampler.dynamically_uniform.vertex.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003644, VkglTestCase_003644_1, VkglTestCase_003644_2);

#define VkglTestCase_003645_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003645_2 ".sampler.dynamically_uniform.vertex.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003645, VkglTestCase_003645_1, VkglTestCase_003645_2);

#define VkglTestCase_003646_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003646_2 "ing.sampler.dynamically_uniform.vertex.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003646, VkglTestCase_003646_1, VkglTestCase_003646_2);

#define VkglTestCase_003647_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003647_2 "ing.sampler.dynamically_uniform.vertex.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003647, VkglTestCase_003647_1, VkglTestCase_003647_2);

#define VkglTestCase_003648_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003648_2 "ng.sampler.dynamically_uniform.vertex.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003648, VkglTestCase_003648_1, VkglTestCase_003648_2);

#define VkglTestCase_003649_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003649_2 ".sampler.dynamically_uniform.vertex.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003649, VkglTestCase_003649_1, VkglTestCase_003649_2);

#define VkglTestCase_003650_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003650_2 "ing.sampler.dynamically_uniform.vertex.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003650, VkglTestCase_003650_1, VkglTestCase_003650_2);

#define VkglTestCase_003651_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003651_2 ".sampler.dynamically_uniform.vertex.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003651, VkglTestCase_003651_1, VkglTestCase_003651_2);

#define VkglTestCase_003652_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003652_2 "mpler.dynamically_uniform.vertex.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003652, VkglTestCase_003652_1, VkglTestCase_003652_2);

#define VkglTestCase_003653_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003653_2 "sampler.dynamically_uniform.vertex.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003653, VkglTestCase_003653_1, VkglTestCase_003653_2);

#define VkglTestCase_003654_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003654_2 "sampler.dynamically_uniform.vertex.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003654, VkglTestCase_003654_1, VkglTestCase_003654_2);
