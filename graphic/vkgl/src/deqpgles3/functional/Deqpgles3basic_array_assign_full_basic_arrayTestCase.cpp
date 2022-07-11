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

#define VkglTestCase_038203_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038203_2 ".basic_array_assign_full.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038203, VkglTestCase_038203_1, VkglTestCase_038203_2);

#define VkglTestCase_038204_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038204_2 "basic_array_assign_full.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038204, VkglTestCase_038204_1, VkglTestCase_038204_2);

#define VkglTestCase_038205_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038205_2 "d.basic_array_assign_full.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038205, VkglTestCase_038205_1, VkglTestCase_038205_2);

#define VkglTestCase_038206_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038206_2 ".basic_array_assign_full.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038206, VkglTestCase_038206_1, VkglTestCase_038206_2);

#define VkglTestCase_038207_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038207_2 "basic_array_assign_full.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038207, VkglTestCase_038207_1, VkglTestCase_038207_2);

#define VkglTestCase_038208_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038208_2 "d.basic_array_assign_full.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038208, VkglTestCase_038208_1, VkglTestCase_038208_2);

#define VkglTestCase_038209_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038209_2 ".basic_array_assign_full.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038209, VkglTestCase_038209_1, VkglTestCase_038209_2);

#define VkglTestCase_038210_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038210_2 "basic_array_assign_full.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038210, VkglTestCase_038210_1, VkglTestCase_038210_2);

#define VkglTestCase_038211_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038211_2 "d.basic_array_assign_full.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038211, VkglTestCase_038211_1, VkglTestCase_038211_2);

#define VkglTestCase_038212_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038212_2 "d.basic_array_assign_full.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038212, VkglTestCase_038212_1, VkglTestCase_038212_2);

#define VkglTestCase_038213_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038213_2 ".basic_array_assign_full.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038213, VkglTestCase_038213_1, VkglTestCase_038213_2);

#define VkglTestCase_038214_1 "dEQP-GLES3.functional.uniform_api.value.assign"
#define VkglTestCase_038214_2 "ed.basic_array_assign_full.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038214, VkglTestCase_038214_1, VkglTestCase_038214_2);

#define VkglTestCase_038215_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038215_2 ".basic_array_assign_full.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038215, VkglTestCase_038215_1, VkglTestCase_038215_2);

#define VkglTestCase_038216_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038216_2 "basic_array_assign_full.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038216, VkglTestCase_038216_1, VkglTestCase_038216_2);

#define VkglTestCase_038217_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038217_2 "d.basic_array_assign_full.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038217, VkglTestCase_038217_1, VkglTestCase_038217_2);

#define VkglTestCase_038218_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038218_2 ".basic_array_assign_full.basic_array.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038218, VkglTestCase_038218_1, VkglTestCase_038218_2);

#define VkglTestCase_038219_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038219_2 "basic_array_assign_full.basic_array.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038219, VkglTestCase_038219_1, VkglTestCase_038219_2);

#define VkglTestCase_038220_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038220_2 "d.basic_array_assign_full.basic_array.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038220, VkglTestCase_038220_1, VkglTestCase_038220_2);

#define VkglTestCase_038221_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038221_2 ".basic_array_assign_full.basic_array.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038221, VkglTestCase_038221_1, VkglTestCase_038221_2);

#define VkglTestCase_038222_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038222_2 "basic_array_assign_full.basic_array.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038222, VkglTestCase_038222_1, VkglTestCase_038222_2);

#define VkglTestCase_038223_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038223_2 "d.basic_array_assign_full.basic_array.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038223, VkglTestCase_038223_1, VkglTestCase_038223_2);

#define VkglTestCase_038224_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038224_2 ".basic_array_assign_full.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038224, VkglTestCase_038224_1, VkglTestCase_038224_2);

#define VkglTestCase_038225_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038225_2 "basic_array_assign_full.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038225, VkglTestCase_038225_1, VkglTestCase_038225_2);

#define VkglTestCase_038226_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038226_2 "d.basic_array_assign_full.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038226, VkglTestCase_038226_1, VkglTestCase_038226_2);

#define VkglTestCase_038227_1 "dEQP-GLES3.functional.uniform_api.value.assigned"
#define VkglTestCase_038227_2 ".basic_array_assign_full.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038227, VkglTestCase_038227_1, VkglTestCase_038227_2);

#define VkglTestCase_038228_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038228_2 "basic_array_assign_full.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038228, VkglTestCase_038228_1, VkglTestCase_038228_2);

#define VkglTestCase_038229_1 "dEQP-GLES3.functional.uniform_api.value.assigne"
#define VkglTestCase_038229_2 "d.basic_array_assign_full.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038229, VkglTestCase_038229_1, VkglTestCase_038229_2);

#define VkglTestCase_038230_1 "dEQP-GLES3.functional.uniform_api.value.assigned.b"
#define VkglTestCase_038230_2 "asic_array_assign_full.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038230, VkglTestCase_038230_1, VkglTestCase_038230_2);

#define VkglTestCase_038231_1 "dEQP-GLES3.functional.uniform_api.value.assigned.ba"
#define VkglTestCase_038231_2 "sic_array_assign_full.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038231, VkglTestCase_038231_1, VkglTestCase_038231_2);

#define VkglTestCase_038232_1 "dEQP-GLES3.functional.uniform_api.value.assigned."
#define VkglTestCase_038232_2 "basic_array_assign_full.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles30039TestSuite, TestCase_038232, VkglTestCase_038232_1, VkglTestCase_038232_2);
