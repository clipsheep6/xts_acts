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

#define VkglTestCase_003294_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003294_2 "dexing.sampler.const_literal.vertex.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003294, VkglTestCase_003294_1, VkglTestCase_003294_2);

#define VkglTestCase_003295_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003295_2 "exing.sampler.const_literal.vertex.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003295, VkglTestCase_003295_1, VkglTestCase_003295_2);

#define VkglTestCase_003296_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003296_2 "xing.sampler.const_literal.vertex.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003296, VkglTestCase_003296_1, VkglTestCase_003296_2);

#define VkglTestCase_003297_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003297_2 "dexing.sampler.const_literal.vertex.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003297, VkglTestCase_003297_1, VkglTestCase_003297_2);

#define VkglTestCase_003298_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003298_2 "ing.sampler.const_literal.vertex.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003298, VkglTestCase_003298_1, VkglTestCase_003298_2);

#define VkglTestCase_003299_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003299_2 "ng.sampler.const_literal.vertex.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003299, VkglTestCase_003299_1, VkglTestCase_003299_2);

#define VkglTestCase_003300_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003300_2 "g.sampler.const_literal.vertex.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003300, VkglTestCase_003300_1, VkglTestCase_003300_2);

#define VkglTestCase_003301_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003301_2 "dexing.sampler.const_literal.vertex.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003301, VkglTestCase_003301_1, VkglTestCase_003301_2);

#define VkglTestCase_003302_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003302_2 "exing.sampler.const_literal.vertex.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003302, VkglTestCase_003302_1, VkglTestCase_003302_2);

#define VkglTestCase_003303_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003303_2 "ing.sampler.const_literal.vertex.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003303, VkglTestCase_003303_1, VkglTestCase_003303_2);

#define VkglTestCase_003304_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003304_2 "dexing.sampler.const_literal.vertex.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003304, VkglTestCase_003304_1, VkglTestCase_003304_2);

#define VkglTestCase_003305_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003305_2 "dexing.sampler.const_literal.vertex.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003305, VkglTestCase_003305_1, VkglTestCase_003305_2);

#define VkglTestCase_003306_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003306_2 "exing.sampler.const_literal.vertex.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003306, VkglTestCase_003306_1, VkglTestCase_003306_2);

#define VkglTestCase_003307_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003307_2 "ing.sampler.const_literal.vertex.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003307, VkglTestCase_003307_1, VkglTestCase_003307_2);

#define VkglTestCase_003308_1 "dEQP-GLES31.functional.shaders.opaque_type_in"
#define VkglTestCase_003308_2 "dexing.sampler.const_literal.vertex.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003308, VkglTestCase_003308_1, VkglTestCase_003308_2);

#define VkglTestCase_003309_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003309_2 "ing.sampler.const_literal.vertex.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003309, VkglTestCase_003309_1, VkglTestCase_003309_2);

#define VkglTestCase_003310_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003310_2 ".sampler.const_literal.vertex.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003310, VkglTestCase_003310_1, VkglTestCase_003310_2);

#define VkglTestCase_003311_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003311_2 "ng.sampler.const_literal.vertex.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003311, VkglTestCase_003311_1, VkglTestCase_003311_2);

#define VkglTestCase_003312_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003312_2 "ng.sampler.const_literal.vertex.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003312, VkglTestCase_003312_1, VkglTestCase_003312_2);
