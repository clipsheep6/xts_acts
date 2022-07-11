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

#define VkglTestCase_038672_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038672_2 "_location.bind_relink_hole.float"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038672, VkglTestCase_038672_1, VkglTestCase_038672_2);

#define VkglTestCase_038673_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038673_2 "_location.bind_relink_hole.vec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038673, VkglTestCase_038673_1, VkglTestCase_038673_2);

#define VkglTestCase_038674_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038674_2 "_location.bind_relink_hole.vec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038674, VkglTestCase_038674_1, VkglTestCase_038674_2);

#define VkglTestCase_038675_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038675_2 "_location.bind_relink_hole.vec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038675, VkglTestCase_038675_1, VkglTestCase_038675_2);

#define VkglTestCase_038676_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038676_2 "_location.bind_relink_hole.mat2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038676, VkglTestCase_038676_1, VkglTestCase_038676_2);

#define VkglTestCase_038677_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038677_2 "_location.bind_relink_hole.mat3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038677, VkglTestCase_038677_1, VkglTestCase_038677_2);

#define VkglTestCase_038678_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038678_2 "_location.bind_relink_hole.mat4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038678, VkglTestCase_038678_1, VkglTestCase_038678_2);

#define VkglTestCase_038679_1 "dEQP-GLES3.functional.attribut"
#define VkglTestCase_038679_2 "e_location.bind_relink_hole.int"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038679, VkglTestCase_038679_1, VkglTestCase_038679_2);

#define VkglTestCase_038680_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038680_2 "_location.bind_relink_hole.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038680, VkglTestCase_038680_1, VkglTestCase_038680_2);

#define VkglTestCase_038681_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038681_2 "_location.bind_relink_hole.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038681, VkglTestCase_038681_1, VkglTestCase_038681_2);

#define VkglTestCase_038682_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038682_2 "_location.bind_relink_hole.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038682, VkglTestCase_038682_1, VkglTestCase_038682_2);

#define VkglTestCase_038683_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038683_2 "_location.bind_relink_hole.uint"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038683, VkglTestCase_038683_1, VkglTestCase_038683_2);

#define VkglTestCase_038684_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038684_2 "_location.bind_relink_hole.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038684, VkglTestCase_038684_1, VkglTestCase_038684_2);

#define VkglTestCase_038685_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038685_2 "_location.bind_relink_hole.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038685, VkglTestCase_038685_1, VkglTestCase_038685_2);

#define VkglTestCase_038686_1 "dEQP-GLES3.functional.attribute"
#define VkglTestCase_038686_2 "_location.bind_relink_hole.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038686, VkglTestCase_038686_1, VkglTestCase_038686_2);

#define VkglTestCase_038687_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038687_2 "location.bind_relink_hole.mat2x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038687, VkglTestCase_038687_1, VkglTestCase_038687_2);

#define VkglTestCase_038688_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038688_2 "location.bind_relink_hole.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038688, VkglTestCase_038688_1, VkglTestCase_038688_2);

#define VkglTestCase_038689_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038689_2 "location.bind_relink_hole.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038689, VkglTestCase_038689_1, VkglTestCase_038689_2);

#define VkglTestCase_038690_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038690_2 "location.bind_relink_hole.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038690, VkglTestCase_038690_1, VkglTestCase_038690_2);

#define VkglTestCase_038691_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038691_2 "location.bind_relink_hole.mat3x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038691, VkglTestCase_038691_1, VkglTestCase_038691_2);

#define VkglTestCase_038692_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038692_2 "location.bind_relink_hole.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038692, VkglTestCase_038692_1, VkglTestCase_038692_2);

#define VkglTestCase_038693_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038693_2 "location.bind_relink_hole.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038693, VkglTestCase_038693_1, VkglTestCase_038693_2);

#define VkglTestCase_038694_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038694_2 "location.bind_relink_hole.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038694, VkglTestCase_038694_1, VkglTestCase_038694_2);

#define VkglTestCase_038695_1 "dEQP-GLES3.functional.attribute_"
#define VkglTestCase_038695_2 "location.bind_relink_hole.mat4x4"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038695, VkglTestCase_038695_1, VkglTestCase_038695_2);
