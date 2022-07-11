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

#define VkglTestCase_003332_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003332_2 "dexing.sampler.const_literal.compute.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003332, VkglTestCase_003332_1, VkglTestCase_003332_2);

#define VkglTestCase_003333_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003333_2 "exing.sampler.const_literal.compute.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003333, VkglTestCase_003333_1, VkglTestCase_003333_2);

#define VkglTestCase_003334_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003334_2 "ing.sampler.const_literal.compute.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003334, VkglTestCase_003334_1, VkglTestCase_003334_2);

#define VkglTestCase_003335_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003335_2 "dexing.sampler.const_literal.compute.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003335, VkglTestCase_003335_1, VkglTestCase_003335_2);

#define VkglTestCase_003336_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003336_2 "ing.sampler.const_literal.compute.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003336, VkglTestCase_003336_1, VkglTestCase_003336_2);

#define VkglTestCase_003337_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003337_2 "ng.sampler.const_literal.compute.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003337, VkglTestCase_003337_1, VkglTestCase_003337_2);

#define VkglTestCase_003338_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003338_2 ".sampler.const_literal.compute.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003338, VkglTestCase_003338_1, VkglTestCase_003338_2);

#define VkglTestCase_003339_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003339_2 "exing.sampler.const_literal.compute.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003339, VkglTestCase_003339_1, VkglTestCase_003339_2);

#define VkglTestCase_003340_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003340_2 "xing.sampler.const_literal.compute.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003340, VkglTestCase_003340_1, VkglTestCase_003340_2);

#define VkglTestCase_003341_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003341_2 "ing.sampler.const_literal.compute.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003341, VkglTestCase_003341_1, VkglTestCase_003341_2);

#define VkglTestCase_003342_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003342_2 "exing.sampler.const_literal.compute.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003342, VkglTestCase_003342_1, VkglTestCase_003342_2);

#define VkglTestCase_003343_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003343_2 "exing.sampler.const_literal.compute.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003343, VkglTestCase_003343_1, VkglTestCase_003343_2);

#define VkglTestCase_003344_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003344_2 "xing.sampler.const_literal.compute.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003344, VkglTestCase_003344_1, VkglTestCase_003344_2);

#define VkglTestCase_003345_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003345_2 "ing.sampler.const_literal.compute.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003345, VkglTestCase_003345_1, VkglTestCase_003345_2);

#define VkglTestCase_003346_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003346_2 "exing.sampler.const_literal.compute.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003346, VkglTestCase_003346_1, VkglTestCase_003346_2);

#define VkglTestCase_003347_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003347_2 "ng.sampler.const_literal.compute.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003347, VkglTestCase_003347_1, VkglTestCase_003347_2);

#define VkglTestCase_003348_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003348_2 "sampler.const_literal.compute.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003348, VkglTestCase_003348_1, VkglTestCase_003348_2);

#define VkglTestCase_003349_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003349_2 "ng.sampler.const_literal.compute.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003349, VkglTestCase_003349_1, VkglTestCase_003349_2);

#define VkglTestCase_003350_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003350_2 "ng.sampler.const_literal.compute.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003350, VkglTestCase_003350_1, VkglTestCase_003350_2);
