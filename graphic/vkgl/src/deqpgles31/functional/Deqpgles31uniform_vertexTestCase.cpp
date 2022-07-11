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

#define VkglTestCase_003522_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003522_2 "_indexing.sampler.uniform.vertex.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003522, VkglTestCase_003522_1, VkglTestCase_003522_2);

#define VkglTestCase_003523_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003523_2 "indexing.sampler.uniform.vertex.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003523, VkglTestCase_003523_1, VkglTestCase_003523_2);

#define VkglTestCase_003524_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003524_2 "ndexing.sampler.uniform.vertex.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003524, VkglTestCase_003524_1, VkglTestCase_003524_2);

#define VkglTestCase_003525_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003525_2 "_indexing.sampler.uniform.vertex.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003525, VkglTestCase_003525_1, VkglTestCase_003525_2);

#define VkglTestCase_003526_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003526_2 "dexing.sampler.uniform.vertex.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003526, VkglTestCase_003526_1, VkglTestCase_003526_2);

#define VkglTestCase_003527_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003527_2 "exing.sampler.uniform.vertex.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003527, VkglTestCase_003527_1, VkglTestCase_003527_2);

#define VkglTestCase_003528_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003528_2 "xing.sampler.uniform.vertex.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003528, VkglTestCase_003528_1, VkglTestCase_003528_2);

#define VkglTestCase_003529_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003529_2 "_indexing.sampler.uniform.vertex.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003529, VkglTestCase_003529_1, VkglTestCase_003529_2);

#define VkglTestCase_003530_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003530_2 "indexing.sampler.uniform.vertex.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003530, VkglTestCase_003530_1, VkglTestCase_003530_2);

#define VkglTestCase_003531_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003531_2 "dexing.sampler.uniform.vertex.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003531, VkglTestCase_003531_1, VkglTestCase_003531_2);

#define VkglTestCase_003532_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003532_2 "_indexing.sampler.uniform.vertex.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003532, VkglTestCase_003532_1, VkglTestCase_003532_2);

#define VkglTestCase_003533_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003533_2 "_indexing.sampler.uniform.vertex.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003533, VkglTestCase_003533_1, VkglTestCase_003533_2);

#define VkglTestCase_003534_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003534_2 "indexing.sampler.uniform.vertex.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003534, VkglTestCase_003534_1, VkglTestCase_003534_2);

#define VkglTestCase_003535_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003535_2 "dexing.sampler.uniform.vertex.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003535, VkglTestCase_003535_1, VkglTestCase_003535_2);

#define VkglTestCase_003536_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003536_2 "_indexing.sampler.uniform.vertex.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003536, VkglTestCase_003536_1, VkglTestCase_003536_2);

#define VkglTestCase_003537_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003537_2 "dexing.sampler.uniform.vertex.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003537, VkglTestCase_003537_1, VkglTestCase_003537_2);

#define VkglTestCase_003538_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003538_2 "ing.sampler.uniform.vertex.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003538, VkglTestCase_003538_1, VkglTestCase_003538_2);

#define VkglTestCase_003539_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003539_2 "exing.sampler.uniform.vertex.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003539, VkglTestCase_003539_1, VkglTestCase_003539_2);

#define VkglTestCase_003540_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003540_2 "exing.sampler.uniform.vertex.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003540, VkglTestCase_003540_1, VkglTestCase_003540_2);
