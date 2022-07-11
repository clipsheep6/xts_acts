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

#define VkglTestCase_003579_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003579_2 "indexing.sampler.uniform.geometry.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003579, VkglTestCase_003579_1, VkglTestCase_003579_2);

#define VkglTestCase_003580_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003580_2 "ndexing.sampler.uniform.geometry.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003580, VkglTestCase_003580_1, VkglTestCase_003580_2);

#define VkglTestCase_003581_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003581_2 "dexing.sampler.uniform.geometry.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003581, VkglTestCase_003581_1, VkglTestCase_003581_2);

#define VkglTestCase_003582_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003582_2 "indexing.sampler.uniform.geometry.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003582, VkglTestCase_003582_1, VkglTestCase_003582_2);

#define VkglTestCase_003583_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003583_2 "exing.sampler.uniform.geometry.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003583, VkglTestCase_003583_1, VkglTestCase_003583_2);

#define VkglTestCase_003584_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003584_2 "xing.sampler.uniform.geometry.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003584, VkglTestCase_003584_1, VkglTestCase_003584_2);

#define VkglTestCase_003585_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003585_2 "ing.sampler.uniform.geometry.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003585, VkglTestCase_003585_1, VkglTestCase_003585_2);

#define VkglTestCase_003586_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003586_2 "indexing.sampler.uniform.geometry.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003586, VkglTestCase_003586_1, VkglTestCase_003586_2);

#define VkglTestCase_003587_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003587_2 "ndexing.sampler.uniform.geometry.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003587, VkglTestCase_003587_1, VkglTestCase_003587_2);

#define VkglTestCase_003588_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003588_2 "exing.sampler.uniform.geometry.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003588, VkglTestCase_003588_1, VkglTestCase_003588_2);

#define VkglTestCase_003589_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003589_2 "indexing.sampler.uniform.geometry.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003589, VkglTestCase_003589_1, VkglTestCase_003589_2);

#define VkglTestCase_003590_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003590_2 "indexing.sampler.uniform.geometry.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003590, VkglTestCase_003590_1, VkglTestCase_003590_2);

#define VkglTestCase_003591_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003591_2 "ndexing.sampler.uniform.geometry.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003591, VkglTestCase_003591_1, VkglTestCase_003591_2);

#define VkglTestCase_003592_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003592_2 "exing.sampler.uniform.geometry.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003592, VkglTestCase_003592_1, VkglTestCase_003592_2);

#define VkglTestCase_003593_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003593_2 "indexing.sampler.uniform.geometry.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003593, VkglTestCase_003593_1, VkglTestCase_003593_2);

#define VkglTestCase_003594_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003594_2 "exing.sampler.uniform.geometry.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003594, VkglTestCase_003594_1, VkglTestCase_003594_2);

#define VkglTestCase_003595_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003595_2 "ng.sampler.uniform.geometry.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003595, VkglTestCase_003595_1, VkglTestCase_003595_2);

#define VkglTestCase_003596_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003596_2 "xing.sampler.uniform.geometry.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003596, VkglTestCase_003596_1, VkglTestCase_003596_2);

#define VkglTestCase_003597_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003597_2 "xing.sampler.uniform.geometry.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003597, VkglTestCase_003597_1, VkglTestCase_003597_2);
