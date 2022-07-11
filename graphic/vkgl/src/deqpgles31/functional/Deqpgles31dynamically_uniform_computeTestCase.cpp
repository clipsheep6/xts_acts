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

#define VkglTestCase_003674_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003674_2 "ing.sampler.dynamically_uniform.compute.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003674, VkglTestCase_003674_1, VkglTestCase_003674_2);

#define VkglTestCase_003675_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003675_2 "ng.sampler.dynamically_uniform.compute.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003675, VkglTestCase_003675_1, VkglTestCase_003675_2);

#define VkglTestCase_003676_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003676_2 ".sampler.dynamically_uniform.compute.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003676, VkglTestCase_003676_1, VkglTestCase_003676_2);

#define VkglTestCase_003677_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003677_2 "ing.sampler.dynamically_uniform.compute.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003677, VkglTestCase_003677_1, VkglTestCase_003677_2);

#define VkglTestCase_003678_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003678_2 ".sampler.dynamically_uniform.compute.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003678, VkglTestCase_003678_1, VkglTestCase_003678_2);

#define VkglTestCase_003679_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003679_2 "sampler.dynamically_uniform.compute.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003679, VkglTestCase_003679_1, VkglTestCase_003679_2);

#define VkglTestCase_003680_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003680_2 "mpler.dynamically_uniform.compute.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003680, VkglTestCase_003680_1, VkglTestCase_003680_2);

#define VkglTestCase_003681_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003681_2 "ng.sampler.dynamically_uniform.compute.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003681, VkglTestCase_003681_1, VkglTestCase_003681_2);

#define VkglTestCase_003682_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003682_2 "g.sampler.dynamically_uniform.compute.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003682, VkglTestCase_003682_1, VkglTestCase_003682_2);

#define VkglTestCase_003683_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003683_2 ".sampler.dynamically_uniform.compute.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003683, VkglTestCase_003683_1, VkglTestCase_003683_2);

#define VkglTestCase_003684_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003684_2 "ng.sampler.dynamically_uniform.compute.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003684, VkglTestCase_003684_1, VkglTestCase_003684_2);

#define VkglTestCase_003685_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003685_2 "ng.sampler.dynamically_uniform.compute.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003685, VkglTestCase_003685_1, VkglTestCase_003685_2);

#define VkglTestCase_003686_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003686_2 "g.sampler.dynamically_uniform.compute.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003686, VkglTestCase_003686_1, VkglTestCase_003686_2);

#define VkglTestCase_003687_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003687_2 ".sampler.dynamically_uniform.compute.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003687, VkglTestCase_003687_1, VkglTestCase_003687_2);

#define VkglTestCase_003688_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003688_2 "ng.sampler.dynamically_uniform.compute.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003688, VkglTestCase_003688_1, VkglTestCase_003688_2);

#define VkglTestCase_003689_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003689_2 "sampler.dynamically_uniform.compute.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003689, VkglTestCase_003689_1, VkglTestCase_003689_2);

#define VkglTestCase_003690_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003690_2 "pler.dynamically_uniform.compute.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003690, VkglTestCase_003690_1, VkglTestCase_003690_2);

#define VkglTestCase_003691_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003691_2 "sampler.dynamically_uniform.compute.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003691, VkglTestCase_003691_1, VkglTestCase_003691_2);

#define VkglTestCase_003692_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003692_2 "sampler.dynamically_uniform.compute.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003692, VkglTestCase_003692_1, VkglTestCase_003692_2);
