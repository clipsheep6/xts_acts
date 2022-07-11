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

#define VkglTestCase_003313_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003313_2 "exing.sampler.const_literal.fragment.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003313, VkglTestCase_003313_1, VkglTestCase_003313_2);

#define VkglTestCase_003314_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003314_2 "xing.sampler.const_literal.fragment.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003314, VkglTestCase_003314_1, VkglTestCase_003314_2);

#define VkglTestCase_003315_1 "dEQP-GLES31.functional.shaders.opaque_type_index"
#define VkglTestCase_003315_2 "ing.sampler.const_literal.fragment.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003315, VkglTestCase_003315_1, VkglTestCase_003315_2);

#define VkglTestCase_003316_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003316_2 "exing.sampler.const_literal.fragment.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003316, VkglTestCase_003316_1, VkglTestCase_003316_2);

#define VkglTestCase_003317_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003317_2 "ng.sampler.const_literal.fragment.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003317, VkglTestCase_003317_1, VkglTestCase_003317_2);

#define VkglTestCase_003318_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003318_2 "g.sampler.const_literal.fragment.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003318, VkglTestCase_003318_1, VkglTestCase_003318_2);

#define VkglTestCase_003319_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003319_2 ".sampler.const_literal.fragment.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003319, VkglTestCase_003319_1, VkglTestCase_003319_2);

#define VkglTestCase_003320_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003320_2 "exing.sampler.const_literal.fragment.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003320, VkglTestCase_003320_1, VkglTestCase_003320_2);

#define VkglTestCase_003321_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003321_2 "xing.sampler.const_literal.fragment.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003321, VkglTestCase_003321_1, VkglTestCase_003321_2);

#define VkglTestCase_003322_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003322_2 "ng.sampler.const_literal.fragment.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003322, VkglTestCase_003322_1, VkglTestCase_003322_2);

#define VkglTestCase_003323_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003323_2 "exing.sampler.const_literal.fragment.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003323, VkglTestCase_003323_1, VkglTestCase_003323_2);

#define VkglTestCase_003324_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003324_2 "exing.sampler.const_literal.fragment.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003324, VkglTestCase_003324_1, VkglTestCase_003324_2);

#define VkglTestCase_003325_1 "dEQP-GLES31.functional.shaders.opaque_type_inde"
#define VkglTestCase_003325_2 "xing.sampler.const_literal.fragment.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003325, VkglTestCase_003325_1, VkglTestCase_003325_2);

#define VkglTestCase_003326_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003326_2 "ng.sampler.const_literal.fragment.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003326, VkglTestCase_003326_1, VkglTestCase_003326_2);

#define VkglTestCase_003327_1 "dEQP-GLES31.functional.shaders.opaque_type_ind"
#define VkglTestCase_003327_2 "exing.sampler.const_literal.fragment.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003327, VkglTestCase_003327_1, VkglTestCase_003327_2);

#define VkglTestCase_003328_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003328_2 "ng.sampler.const_literal.fragment.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003328, VkglTestCase_003328_1, VkglTestCase_003328_2);

#define VkglTestCase_003329_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003329_2 "sampler.const_literal.fragment.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003329, VkglTestCase_003329_1, VkglTestCase_003329_2);

#define VkglTestCase_003330_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003330_2 "g.sampler.const_literal.fragment.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003330, VkglTestCase_003330_1, VkglTestCase_003330_2);

#define VkglTestCase_003331_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003331_2 "g.sampler.const_literal.fragment.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003331, VkglTestCase_003331_1, VkglTestCase_003331_2);
