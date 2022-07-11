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

#define VkglTestCase_003598_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003598_2 "ng.sampler.uniform.tessellation_control.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003598, VkglTestCase_003598_1, VkglTestCase_003598_2);

#define VkglTestCase_003599_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003599_2 "g.sampler.uniform.tessellation_control.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003599, VkglTestCase_003599_1, VkglTestCase_003599_2);

#define VkglTestCase_003600_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003600_2 ".sampler.uniform.tessellation_control.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003600, VkglTestCase_003600_1, VkglTestCase_003600_2);

#define VkglTestCase_003601_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003601_2 "ng.sampler.uniform.tessellation_control.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003601, VkglTestCase_003601_1, VkglTestCase_003601_2);

#define VkglTestCase_003602_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003602_2 "sampler.uniform.tessellation_control.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003602, VkglTestCase_003602_1, VkglTestCase_003602_2);

#define VkglTestCase_003603_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003603_2 "ampler.uniform.tessellation_control.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003603, VkglTestCase_003603_1, VkglTestCase_003603_2);

#define VkglTestCase_003604_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003604_2 "mpler.uniform.tessellation_control.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003604, VkglTestCase_003604_1, VkglTestCase_003604_2);

#define VkglTestCase_003605_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003605_2 "ng.sampler.uniform.tessellation_control.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003605, VkglTestCase_003605_1, VkglTestCase_003605_2);

#define VkglTestCase_003606_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003606_2 "g.sampler.uniform.tessellation_control.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003606, VkglTestCase_003606_1, VkglTestCase_003606_2);

#define VkglTestCase_003607_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003607_2 "sampler.uniform.tessellation_control.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003607, VkglTestCase_003607_1, VkglTestCase_003607_2);

#define VkglTestCase_003608_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003608_2 "ng.sampler.uniform.tessellation_control.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003608, VkglTestCase_003608_1, VkglTestCase_003608_2);

#define VkglTestCase_003609_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003609_2 "ng.sampler.uniform.tessellation_control.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003609, VkglTestCase_003609_1, VkglTestCase_003609_2);

#define VkglTestCase_003610_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003610_2 "g.sampler.uniform.tessellation_control.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003610, VkglTestCase_003610_1, VkglTestCase_003610_2);

#define VkglTestCase_003611_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003611_2 "sampler.uniform.tessellation_control.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003611, VkglTestCase_003611_1, VkglTestCase_003611_2);

#define VkglTestCase_003612_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003612_2 "ng.sampler.uniform.tessellation_control.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003612, VkglTestCase_003612_1, VkglTestCase_003612_2);

#define VkglTestCase_003613_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003613_2 "sampler.uniform.tessellation_control.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003613, VkglTestCase_003613_1, VkglTestCase_003613_2);

#define VkglTestCase_003614_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003614_2 "pler.uniform.tessellation_control.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003614, VkglTestCase_003614_1, VkglTestCase_003614_2);

#define VkglTestCase_003615_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003615_2 "ampler.uniform.tessellation_control.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003615, VkglTestCase_003615_1, VkglTestCase_003615_2);

#define VkglTestCase_003616_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003616_2 "ampler.uniform.tessellation_control.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003616, VkglTestCase_003616_1, VkglTestCase_003616_2);
