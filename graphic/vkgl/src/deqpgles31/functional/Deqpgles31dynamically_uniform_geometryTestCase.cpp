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

#define VkglTestCase_003693_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003693_2 "ng.sampler.dynamically_uniform.geometry.sampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003693, VkglTestCase_003693_1, VkglTestCase_003693_2);

#define VkglTestCase_003694_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003694_2 "g.sampler.dynamically_uniform.geometry.samplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003694, VkglTestCase_003694_1, VkglTestCase_003694_2);

#define VkglTestCase_003695_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing"
#define VkglTestCase_003695_2 ".sampler.dynamically_uniform.geometry.sampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003695, VkglTestCase_003695_1, VkglTestCase_003695_2);

#define VkglTestCase_003696_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003696_2 "ng.sampler.dynamically_uniform.geometry.sampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003696, VkglTestCase_003696_1, VkglTestCase_003696_2);

#define VkglTestCase_003697_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003697_2 "sampler.dynamically_uniform.geometry.sampler2dshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003697, VkglTestCase_003697_1, VkglTestCase_003697_2);

#define VkglTestCase_003698_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003698_2 "ampler.dynamically_uniform.geometry.samplercubeshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003698, VkglTestCase_003698_1, VkglTestCase_003698_2);

#define VkglTestCase_003699_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sa"
#define VkglTestCase_003699_2 "mpler.dynamically_uniform.geometry.sampler2darrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003699, VkglTestCase_003699_1, VkglTestCase_003699_2);

#define VkglTestCase_003700_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003700_2 "ng.sampler.dynamically_uniform.geometry.isampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003700, VkglTestCase_003700_1, VkglTestCase_003700_2);

#define VkglTestCase_003701_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003701_2 "g.sampler.dynamically_uniform.geometry.isamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003701, VkglTestCase_003701_1, VkglTestCase_003701_2);

#define VkglTestCase_003702_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003702_2 "sampler.dynamically_uniform.geometry.isampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003702, VkglTestCase_003702_1, VkglTestCase_003702_2);

#define VkglTestCase_003703_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003703_2 "ng.sampler.dynamically_uniform.geometry.isampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003703, VkglTestCase_003703_1, VkglTestCase_003703_2);

#define VkglTestCase_003704_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003704_2 "ng.sampler.dynamically_uniform.geometry.usampler2d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003704, VkglTestCase_003704_1, VkglTestCase_003704_2);

#define VkglTestCase_003705_1 "dEQP-GLES31.functional.shaders.opaque_type_indexin"
#define VkglTestCase_003705_2 "g.sampler.dynamically_uniform.geometry.usamplercube"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003705, VkglTestCase_003705_1, VkglTestCase_003705_2);

#define VkglTestCase_003706_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003706_2 "sampler.dynamically_uniform.geometry.usampler2darray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003706, VkglTestCase_003706_1, VkglTestCase_003706_2);

#define VkglTestCase_003707_1 "dEQP-GLES31.functional.shaders.opaque_type_indexi"
#define VkglTestCase_003707_2 "ng.sampler.dynamically_uniform.geometry.usampler3d"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003707, VkglTestCase_003707_1, VkglTestCase_003707_2);

#define VkglTestCase_003708_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing."
#define VkglTestCase_003708_2 "sampler.dynamically_uniform.geometry.samplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003708, VkglTestCase_003708_1, VkglTestCase_003708_2);

#define VkglTestCase_003709_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.sam"
#define VkglTestCase_003709_2 "pler.dynamically_uniform.geometry.samplercubearrayshadow"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003709, VkglTestCase_003709_1, VkglTestCase_003709_2);

#define VkglTestCase_003710_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003710_2 "ampler.dynamically_uniform.geometry.isamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003710, VkglTestCase_003710_1, VkglTestCase_003710_2);

#define VkglTestCase_003711_1 "dEQP-GLES31.functional.shaders.opaque_type_indexing.s"
#define VkglTestCase_003711_2 "ampler.dynamically_uniform.geometry.usamplercubearray"
SHRINK_HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003711, VkglTestCase_003711_1, VkglTestCase_003711_2);
