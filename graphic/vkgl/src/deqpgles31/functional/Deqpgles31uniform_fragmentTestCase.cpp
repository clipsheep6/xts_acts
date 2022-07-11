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

#define VkglTestCase_003541_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003541_2 "indexing.sampler.uniform.fragment.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003541, VkglTestCase_003541_1, VkglTestCase_003541_2);

#define VkglTestCase_003542_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003542_2 "ndexing.sampler.uniform.fragment.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003542, VkglTestCase_003542_1, VkglTestCase_003542_2);

#define VkglTestCase_003543_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003543_2 "dexing.sampler.uniform.fragment.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003543, VkglTestCase_003543_1, VkglTestCase_003543_2);

#define VkglTestCase_003544_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003544_2 "indexing.sampler.uniform.fragment.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003544, VkglTestCase_003544_1, VkglTestCase_003544_2);

#define VkglTestCase_003545_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003545_2 "exing.sampler.uniform.fragment.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003545, VkglTestCase_003545_1, VkglTestCase_003545_2);

#define VkglTestCase_003546_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003546_2 "xing.sampler.uniform.fragment.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003546, VkglTestCase_003546_1, VkglTestCase_003546_2);

#define VkglTestCase_003547_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003547_2 "ing.sampler.uniform.fragment.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003547, VkglTestCase_003547_1, VkglTestCase_003547_2);

#define VkglTestCase_003548_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003548_2 "indexing.sampler.uniform.fragment.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003548, VkglTestCase_003548_1, VkglTestCase_003548_2);

#define VkglTestCase_003549_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003549_2 "ndexing.sampler.uniform.fragment.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003549, VkglTestCase_003549_1, VkglTestCase_003549_2);

#define VkglTestCase_003550_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003550_2 "exing.sampler.uniform.fragment.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003550, VkglTestCase_003550_1, VkglTestCase_003550_2);

#define VkglTestCase_003551_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003551_2 "indexing.sampler.uniform.fragment.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003551, VkglTestCase_003551_1, VkglTestCase_003551_2);

#define VkglTestCase_003552_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003552_2 "indexing.sampler.uniform.fragment.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003552, VkglTestCase_003552_1, VkglTestCase_003552_2);

#define VkglTestCase_003553_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003553_2 "ndexing.sampler.uniform.fragment.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003553, VkglTestCase_003553_1, VkglTestCase_003553_2);

#define VkglTestCase_003554_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003554_2 "exing.sampler.uniform.fragment.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003554, VkglTestCase_003554_1, VkglTestCase_003554_2);

#define VkglTestCase_003555_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003555_2 "indexing.sampler.uniform.fragment.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003555, VkglTestCase_003555_1, VkglTestCase_003555_2);

#define VkglTestCase_003556_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003556_2 "exing.sampler.uniform.fragment.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003556, VkglTestCase_003556_1, VkglTestCase_003556_2);

#define VkglTestCase_003557_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003557_2 "ng.sampler.uniform.fragment.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003557, VkglTestCase_003557_1, VkglTestCase_003557_2);

#define VkglTestCase_003558_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003558_2 "xing.sampler.uniform.fragment.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003558, VkglTestCase_003558_1, VkglTestCase_003558_2);

#define VkglTestCase_003559_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003559_2 "xing.sampler.uniform.fragment.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003559, VkglTestCase_003559_1, VkglTestCase_003559_2);
