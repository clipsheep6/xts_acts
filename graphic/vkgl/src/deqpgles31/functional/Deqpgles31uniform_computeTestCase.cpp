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

#define VkglTestCase_003560_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003560_2 "_indexing.sampler.uniform.compute.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003560, VkglTestCase_003560_1, VkglTestCase_003560_2);

#define VkglTestCase_003561_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003561_2 "indexing.sampler.uniform.compute.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003561, VkglTestCase_003561_1, VkglTestCase_003561_2);

#define VkglTestCase_003562_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003562_2 "dexing.sampler.uniform.compute.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003562, VkglTestCase_003562_1, VkglTestCase_003562_2);

#define VkglTestCase_003563_1 "dEQP-GLES31.functional.shaders.opaque_type"
#define VkglTestCase_003563_2 "_indexing.sampler.uniform.compute.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003563, VkglTestCase_003563_1, VkglTestCase_003563_2);

#define VkglTestCase_003564_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003564_2 "dexing.sampler.uniform.compute.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003564, VkglTestCase_003564_1, VkglTestCase_003564_2);

#define VkglTestCase_003565_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003565_2 "exing.sampler.uniform.compute.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003565, VkglTestCase_003565_1, VkglTestCase_003565_2);

#define VkglTestCase_003566_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003566_2 "ing.sampler.uniform.compute.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003566, VkglTestCase_003566_1, VkglTestCase_003566_2);

#define VkglTestCase_003567_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003567_2 "indexing.sampler.uniform.compute.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003567, VkglTestCase_003567_1, VkglTestCase_003567_2);

#define VkglTestCase_003568_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003568_2 "ndexing.sampler.uniform.compute.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003568, VkglTestCase_003568_1, VkglTestCase_003568_2);

#define VkglTestCase_003569_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003569_2 "dexing.sampler.uniform.compute.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003569, VkglTestCase_003569_1, VkglTestCase_003569_2);

#define VkglTestCase_003570_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003570_2 "indexing.sampler.uniform.compute.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003570, VkglTestCase_003570_1, VkglTestCase_003570_2);

#define VkglTestCase_003571_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003571_2 "indexing.sampler.uniform.compute.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003571, VkglTestCase_003571_1, VkglTestCase_003571_2);

#define VkglTestCase_003572_1 "dEQP-GLES31.functional.shaders.opaque_type_i"
#define VkglTestCase_003572_2 "ndexing.sampler.uniform.compute.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003572, VkglTestCase_003572_1, VkglTestCase_003572_2);

#define VkglTestCase_003573_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003573_2 "dexing.sampler.uniform.compute.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003573, VkglTestCase_003573_1, VkglTestCase_003573_2);

#define VkglTestCase_003574_1 "dEQP-GLES31.functional.shaders.opaque_type_"
#define VkglTestCase_003574_2 "indexing.sampler.uniform.compute.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003574, VkglTestCase_003574_1, VkglTestCase_003574_2);

#define VkglTestCase_003575_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003575_2 "exing.sampler.uniform.compute.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003575, VkglTestCase_003575_1, VkglTestCase_003575_2);

#define VkglTestCase_003576_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003576_2 "ng.sampler.uniform.compute.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003576, VkglTestCase_003576_1, VkglTestCase_003576_2);

#define VkglTestCase_003577_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003577_2 "exing.sampler.uniform.compute.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003577, VkglTestCase_003577_1, VkglTestCase_003577_2);

#define VkglTestCase_003578_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003578_2 "exing.sampler.uniform.compute.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003578, VkglTestCase_003578_1, VkglTestCase_003578_2);
