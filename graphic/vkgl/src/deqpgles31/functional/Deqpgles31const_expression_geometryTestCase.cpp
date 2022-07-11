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

#define VkglTestCase_003465_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003465_2 "xing.sampler.const_expression.geometry.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003465, VkglTestCase_003465_1, VkglTestCase_003465_2);

#define VkglTestCase_003466_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003466_2 "ing.sampler.const_expression.geometry.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003466, VkglTestCase_003466_1, VkglTestCase_003466_2);

#define VkglTestCase_003467_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003467_2 "g.sampler.const_expression.geometry.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003467, VkglTestCase_003467_1, VkglTestCase_003467_2);

#define VkglTestCase_003468_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003468_2 "xing.sampler.const_expression.geometry.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003468, VkglTestCase_003468_1, VkglTestCase_003468_2);

#define VkglTestCase_003469_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003469_2 "g.sampler.const_expression.geometry.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003469, VkglTestCase_003469_1, VkglTestCase_003469_2);

#define VkglTestCase_003470_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003470_2 ".sampler.const_expression.geometry.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003470, VkglTestCase_003470_1, VkglTestCase_003470_2);

#define VkglTestCase_003471_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003471_2 "ampler.const_expression.geometry.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003471, VkglTestCase_003471_1, VkglTestCase_003471_2);

#define VkglTestCase_003472_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003472_2 "ing.sampler.const_expression.geometry.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003472, VkglTestCase_003472_1, VkglTestCase_003472_2);

#define VkglTestCase_003473_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003473_2 "ng.sampler.const_expression.geometry.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003473, VkglTestCase_003473_1, VkglTestCase_003473_2);

#define VkglTestCase_003474_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003474_2 "g.sampler.const_expression.geometry.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003474, VkglTestCase_003474_1, VkglTestCase_003474_2);

#define VkglTestCase_003475_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003475_2 "ing.sampler.const_expression.geometry.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003475, VkglTestCase_003475_1, VkglTestCase_003475_2);

#define VkglTestCase_003476_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003476_2 "ing.sampler.const_expression.geometry.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003476, VkglTestCase_003476_1, VkglTestCase_003476_2);

#define VkglTestCase_003477_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003477_2 "ng.sampler.const_expression.geometry.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003477, VkglTestCase_003477_1, VkglTestCase_003477_2);

#define VkglTestCase_003478_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003478_2 "g.sampler.const_expression.geometry.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003478, VkglTestCase_003478_1, VkglTestCase_003478_2);

#define VkglTestCase_003479_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003479_2 "ing.sampler.const_expression.geometry.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003479, VkglTestCase_003479_1, VkglTestCase_003479_2);

#define VkglTestCase_003480_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003480_2 ".sampler.const_expression.geometry.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003480, VkglTestCase_003480_1, VkglTestCase_003480_2);

#define VkglTestCase_003481_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003481_2 "mpler.const_expression.geometry.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003481, VkglTestCase_003481_1, VkglTestCase_003481_2);

#define VkglTestCase_003482_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003482_2 ".sampler.const_expression.geometry.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003482, VkglTestCase_003482_1, VkglTestCase_003482_2);

#define VkglTestCase_003483_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003483_2 ".sampler.const_expression.geometry.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003483, VkglTestCase_003483_1, VkglTestCase_003483_2);
