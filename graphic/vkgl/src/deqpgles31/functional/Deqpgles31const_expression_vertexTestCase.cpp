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

#define VkglTestCase_003408_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003408_2 "exing.sampler.const_expression.vertex.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003408, VkglTestCase_003408_1, VkglTestCase_003408_2);

#define VkglTestCase_003409_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003409_2 "xing.sampler.const_expression.vertex.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003409, VkglTestCase_003409_1, VkglTestCase_003409_2);

#define VkglTestCase_003410_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003410_2 "ng.sampler.const_expression.vertex.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003410, VkglTestCase_003410_1, VkglTestCase_003410_2);

#define VkglTestCase_003411_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003411_2 "exing.sampler.const_expression.vertex.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003411, VkglTestCase_003411_1, VkglTestCase_003411_2);

#define VkglTestCase_003412_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003412_2 "ng.sampler.const_expression.vertex.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003412, VkglTestCase_003412_1, VkglTestCase_003412_2);

#define VkglTestCase_003413_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003413_2 "g.sampler.const_expression.vertex.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003413, VkglTestCase_003413_1, VkglTestCase_003413_2);

#define VkglTestCase_003414_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003414_2 "sampler.const_expression.vertex.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003414, VkglTestCase_003414_1, VkglTestCase_003414_2);

#define VkglTestCase_003415_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003415_2 "xing.sampler.const_expression.vertex.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003415, VkglTestCase_003415_1, VkglTestCase_003415_2);

#define VkglTestCase_003416_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003416_2 "ing.sampler.const_expression.vertex.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003416, VkglTestCase_003416_1, VkglTestCase_003416_2);

#define VkglTestCase_003417_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003417_2 "ng.sampler.const_expression.vertex.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003417, VkglTestCase_003417_1, VkglTestCase_003417_2);

#define VkglTestCase_003418_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003418_2 "xing.sampler.const_expression.vertex.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003418, VkglTestCase_003418_1, VkglTestCase_003418_2);

#define VkglTestCase_003419_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003419_2 "xing.sampler.const_expression.vertex.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003419, VkglTestCase_003419_1, VkglTestCase_003419_2);

#define VkglTestCase_003420_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003420_2 "ing.sampler.const_expression.vertex.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003420, VkglTestCase_003420_1, VkglTestCase_003420_2);

#define VkglTestCase_003421_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003421_2 "ng.sampler.const_expression.vertex.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003421, VkglTestCase_003421_1, VkglTestCase_003421_2);

#define VkglTestCase_003422_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003422_2 "xing.sampler.const_expression.vertex.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003422, VkglTestCase_003422_1, VkglTestCase_003422_2);

#define VkglTestCase_003423_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003423_2 "g.sampler.const_expression.vertex.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003423, VkglTestCase_003423_1, VkglTestCase_003423_2);

#define VkglTestCase_003424_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003424_2 "ampler.const_expression.vertex.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003424, VkglTestCase_003424_1, VkglTestCase_003424_2);

#define VkglTestCase_003425_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003425_2 "g.sampler.const_expression.vertex.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003425, VkglTestCase_003425_1, VkglTestCase_003425_2);

#define VkglTestCase_003426_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003426_2 "g.sampler.const_expression.vertex.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003426, VkglTestCase_003426_1, VkglTestCase_003426_2);
