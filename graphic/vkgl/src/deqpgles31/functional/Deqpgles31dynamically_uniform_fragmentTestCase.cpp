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

#define VkglTestCase_003655_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003655_2 "ng.sampler.dynamically_uniform.fragment.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003655, VkglTestCase_003655_1, VkglTestCase_003655_2);

#define VkglTestCase_003656_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003656_2 "g.sampler.dynamically_uniform.fragment.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003656, VkglTestCase_003656_1, VkglTestCase_003656_2);

#define VkglTestCase_003657_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003657_2 ".sampler.dynamically_uniform.fragment.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003657, VkglTestCase_003657_1, VkglTestCase_003657_2);

#define VkglTestCase_003658_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003658_2 "ng.sampler.dynamically_uniform.fragment.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003658, VkglTestCase_003658_1, VkglTestCase_003658_2);

#define VkglTestCase_003659_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003659_2 "sampler.dynamically_uniform.fragment.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003659, VkglTestCase_003659_1, VkglTestCase_003659_2);

#define VkglTestCase_003660_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003660_2 "ampler.dynamically_uniform.fragment.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003660, VkglTestCase_003660_1, VkglTestCase_003660_2);

#define VkglTestCase_003661_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003661_2 "mpler.dynamically_uniform.fragment.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003661, VkglTestCase_003661_1, VkglTestCase_003661_2);

#define VkglTestCase_003662_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003662_2 "ng.sampler.dynamically_uniform.fragment.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003662, VkglTestCase_003662_1, VkglTestCase_003662_2);

#define VkglTestCase_003663_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003663_2 "g.sampler.dynamically_uniform.fragment.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003663, VkglTestCase_003663_1, VkglTestCase_003663_2);

#define VkglTestCase_003664_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003664_2 "sampler.dynamically_uniform.fragment.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003664, VkglTestCase_003664_1, VkglTestCase_003664_2);

#define VkglTestCase_003665_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003665_2 "ng.sampler.dynamically_uniform.fragment.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003665, VkglTestCase_003665_1, VkglTestCase_003665_2);

#define VkglTestCase_003666_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003666_2 "ng.sampler.dynamically_uniform.fragment.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003666, VkglTestCase_003666_1, VkglTestCase_003666_2);

#define VkglTestCase_003667_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003667_2 "g.sampler.dynamically_uniform.fragment.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003667, VkglTestCase_003667_1, VkglTestCase_003667_2);

#define VkglTestCase_003668_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003668_2 "sampler.dynamically_uniform.fragment.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003668, VkglTestCase_003668_1, VkglTestCase_003668_2);

#define VkglTestCase_003669_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003669_2 "ng.sampler.dynamically_uniform.fragment.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003669, VkglTestCase_003669_1, VkglTestCase_003669_2);

#define VkglTestCase_003670_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003670_2 "sampler.dynamically_uniform.fragment.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003670, VkglTestCase_003670_1, VkglTestCase_003670_2);

#define VkglTestCase_003671_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003671_2 "pler.dynamically_uniform.fragment.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003671, VkglTestCase_003671_1, VkglTestCase_003671_2);

#define VkglTestCase_003672_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003672_2 "ampler.dynamically_uniform.fragment.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003672, VkglTestCase_003672_1, VkglTestCase_003672_2);

#define VkglTestCase_003673_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003673_2 "ampler.dynamically_uniform.fragment.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003673, VkglTestCase_003673_1, VkglTestCase_003673_2);
