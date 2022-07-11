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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30039TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_038619_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038619_2 "ocation.mixed_max_attributes.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038619, VkglTestCase_038619_1, VkglTestCase_038619_2);

#define VkglTestCase_038620_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038620_2 "ocation.mixed_max_attributes.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038620, VkglTestCase_038620_1, VkglTestCase_038620_2);

#define VkglTestCase_038621_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038621_2 "ocation.mixed_max_attributes.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038621, VkglTestCase_038621_1, VkglTestCase_038621_2);

#define VkglTestCase_038622_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038622_2 "ocation.mixed_max_attributes.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038622, VkglTestCase_038622_1, VkglTestCase_038622_2);

#define VkglTestCase_038623_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038623_2 "ocation.mixed_max_attributes.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038623, VkglTestCase_038623_1, VkglTestCase_038623_2);

#define VkglTestCase_038624_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038624_2 "ocation.mixed_max_attributes.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038624, VkglTestCase_038624_1, VkglTestCase_038624_2);

#define VkglTestCase_038625_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038625_2 "ocation.mixed_max_attributes.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038625, VkglTestCase_038625_1, VkglTestCase_038625_2);

#define VkglTestCase_038626_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038626_2 "location.mixed_max_attributes.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038626, VkglTestCase_038626_1, VkglTestCase_038626_2);

#define VkglTestCase_038627_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038627_2 "ocation.mixed_max_attributes.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038627, VkglTestCase_038627_1, VkglTestCase_038627_2);

#define VkglTestCase_038628_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038628_2 "ocation.mixed_max_attributes.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038628, VkglTestCase_038628_1, VkglTestCase_038628_2);

#define VkglTestCase_038629_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038629_2 "ocation.mixed_max_attributes.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038629, VkglTestCase_038629_1, VkglTestCase_038629_2);

#define VkglTestCase_038630_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038630_2 "ocation.mixed_max_attributes.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038630, VkglTestCase_038630_1, VkglTestCase_038630_2);

#define VkglTestCase_038631_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038631_2 "ocation.mixed_max_attributes.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038631, VkglTestCase_038631_1, VkglTestCase_038631_2);

#define VkglTestCase_038632_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038632_2 "ocation.mixed_max_attributes.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038632, VkglTestCase_038632_1, VkglTestCase_038632_2);

#define VkglTestCase_038633_1 "dEQP-GLES3.functional.attribute_l"
#define VkglTestCase_038633_2 "ocation.mixed_max_attributes.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038633, VkglTestCase_038633_1, VkglTestCase_038633_2);

#define VkglTestCase_038634_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038634_2 "cation.mixed_max_attributes.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038634, VkglTestCase_038634_1, VkglTestCase_038634_2);

#define VkglTestCase_038635_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038635_2 "cation.mixed_max_attributes.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038635, VkglTestCase_038635_1, VkglTestCase_038635_2);

#define VkglTestCase_038636_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038636_2 "cation.mixed_max_attributes.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038636, VkglTestCase_038636_1, VkglTestCase_038636_2);

#define VkglTestCase_038637_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038637_2 "cation.mixed_max_attributes.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038637, VkglTestCase_038637_1, VkglTestCase_038637_2);

#define VkglTestCase_038638_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038638_2 "cation.mixed_max_attributes.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038638, VkglTestCase_038638_1, VkglTestCase_038638_2);

#define VkglTestCase_038639_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038639_2 "cation.mixed_max_attributes.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038639, VkglTestCase_038639_1, VkglTestCase_038639_2);

#define VkglTestCase_038640_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038640_2 "cation.mixed_max_attributes.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038640, VkglTestCase_038640_1, VkglTestCase_038640_2);

#define VkglTestCase_038641_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038641_2 "cation.mixed_max_attributes.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038641, VkglTestCase_038641_1, VkglTestCase_038641_2);

#define VkglTestCase_038642_1 "dEQP-GLES3.functional.attribute_lo"
#define VkglTestCase_038642_2 "cation.mixed_max_attributes.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038642, VkglTestCase_038642_1, VkglTestCase_038642_2);
