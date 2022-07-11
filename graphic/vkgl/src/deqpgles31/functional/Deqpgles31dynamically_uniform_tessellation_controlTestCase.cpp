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

#define VkglTestCase_003712_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003712_2 "pler.dynamically_uniform.tessellation_control.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003712, VkglTestCase_003712_1, VkglTestCase_003712_2);

#define VkglTestCase_003713_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003713_2 "ler.dynamically_uniform.tessellation_control.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003713, VkglTestCase_003713_1, VkglTestCase_003713_2);

#define VkglTestCase_003714_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampl"
#define VkglTestCase_003714_2 "er.dynamically_uniform.tessellation_control.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003714, VkglTestCase_003714_1, VkglTestCase_003714_2);

#define VkglTestCase_003715_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003715_2 "pler.dynamically_uniform.tessellation_control.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003715, VkglTestCase_003715_1, VkglTestCase_003715_2);

#define VkglTestCase_003716_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003716_2 "r.dynamically_uniform.tessellation_control.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003716, VkglTestCase_003716_1, VkglTestCase_003716_2);

#define VkglTestCase_003717_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003717_2 ".dynamically_uniform.tessellation_control.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003717, VkglTestCase_003717_1, VkglTestCase_003717_2);

#define VkglTestCase_003718_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler."
#define VkglTestCase_003718_2 "dynamically_uniform.tessellation_control.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003718, VkglTestCase_003718_1, VkglTestCase_003718_2);

#define VkglTestCase_003719_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003719_2 "pler.dynamically_uniform.tessellation_control.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003719, VkglTestCase_003719_1, VkglTestCase_003719_2);

#define VkglTestCase_003720_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003720_2 "ler.dynamically_uniform.tessellation_control.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003720, VkglTestCase_003720_1, VkglTestCase_003720_2);

#define VkglTestCase_003721_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003721_2 "r.dynamically_uniform.tessellation_control.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003721, VkglTestCase_003721_1, VkglTestCase_003721_2);

#define VkglTestCase_003722_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003722_2 "pler.dynamically_uniform.tessellation_control.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003722, VkglTestCase_003722_1, VkglTestCase_003722_2);

#define VkglTestCase_003723_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003723_2 "pler.dynamically_uniform.tessellation_control.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003723, VkglTestCase_003723_1, VkglTestCase_003723_2);

#define VkglTestCase_003724_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.samp"
#define VkglTestCase_003724_2 "ler.dynamically_uniform.tessellation_control.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003724, VkglTestCase_003724_1, VkglTestCase_003724_2);

#define VkglTestCase_003725_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003725_2 "r.dynamically_uniform.tessellation_control.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003725, VkglTestCase_003725_1, VkglTestCase_003725_2);

#define VkglTestCase_003726_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003726_2 "pler.dynamically_uniform.tessellation_control.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003726, VkglTestCase_003726_1, VkglTestCase_003726_2);

#define VkglTestCase_003727_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sample"
#define VkglTestCase_003727_2 "r.dynamically_uniform.tessellation_control.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003727, VkglTestCase_003727_1, VkglTestCase_003727_2);

#define VkglTestCase_003728_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler.d"
#define VkglTestCase_003728_2 "ynamically_uniform.tessellation_control.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003728, VkglTestCase_003728_1, VkglTestCase_003728_2);

#define VkglTestCase_003729_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003729_2 ".dynamically_uniform.tessellation_control.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003729, VkglTestCase_003729_1, VkglTestCase_003729_2);

#define VkglTestCase_003730_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sampler"
#define VkglTestCase_003730_2 ".dynamically_uniform.tessellation_control.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003730, VkglTestCase_003730_1, VkglTestCase_003730_2);
