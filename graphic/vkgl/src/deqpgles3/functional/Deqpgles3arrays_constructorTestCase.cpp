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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004349_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004349_2 "rrays.constructor.float3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004349, VkglTestCase_004349_1, VkglTestCase_004349_2);

#define VkglTestCase_004350_1 "dEQP-GLES3.functional.shaders.ar"
#define VkglTestCase_004350_2 "rays.constructor.float3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004350, VkglTestCase_004350_1, VkglTestCase_004350_2);

#define VkglTestCase_004351_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004351_2 "rrays.constructor.float4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004351, VkglTestCase_004351_1, VkglTestCase_004351_2);

#define VkglTestCase_004352_1 "dEQP-GLES3.functional.shaders.ar"
#define VkglTestCase_004352_2 "rays.constructor.float4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004352, VkglTestCase_004352_1, VkglTestCase_004352_2);

#define VkglTestCase_004353_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004353_2 "arrays.constructor.int3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004353, VkglTestCase_004353_1, VkglTestCase_004353_2);

#define VkglTestCase_004354_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004354_2 "rrays.constructor.int3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004354, VkglTestCase_004354_1, VkglTestCase_004354_2);

#define VkglTestCase_004355_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004355_2 "arrays.constructor.int4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004355, VkglTestCase_004355_1, VkglTestCase_004355_2);

#define VkglTestCase_004356_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004356_2 "rrays.constructor.int4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004356, VkglTestCase_004356_1, VkglTestCase_004356_2);

#define VkglTestCase_004357_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004357_2 "arrays.constructor.bool3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004357, VkglTestCase_004357_1, VkglTestCase_004357_2);

#define VkglTestCase_004358_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004358_2 "rrays.constructor.bool3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004358, VkglTestCase_004358_1, VkglTestCase_004358_2);

#define VkglTestCase_004359_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_004359_2 "arrays.constructor.bool4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004359, VkglTestCase_004359_1, VkglTestCase_004359_2);

#define VkglTestCase_004360_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004360_2 "rrays.constructor.bool4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004360, VkglTestCase_004360_1, VkglTestCase_004360_2);

#define VkglTestCase_004361_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004361_2 "rrays.constructor.struct3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004361, VkglTestCase_004361_1, VkglTestCase_004361_2);

#define VkglTestCase_004362_1 "dEQP-GLES3.functional.shaders.ar"
#define VkglTestCase_004362_2 "rays.constructor.struct3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004362, VkglTestCase_004362_1, VkglTestCase_004362_2);

#define VkglTestCase_004363_1 "dEQP-GLES3.functional.shaders.a"
#define VkglTestCase_004363_2 "rrays.constructor.struct4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004363, VkglTestCase_004363_1, VkglTestCase_004363_2);

#define VkglTestCase_004364_1 "dEQP-GLES3.functional.shaders.ar"
#define VkglTestCase_004364_2 "rays.constructor.struct4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004364, VkglTestCase_004364_1, VkglTestCase_004364_2);

#define VkglTestCase_004365_1 "dEQP-GLES3.functional.shaders.arr"
#define VkglTestCase_004365_2 "ays.constructor.float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004365, VkglTestCase_004365_1, VkglTestCase_004365_2);

#define VkglTestCase_004366_1 "dEQP-GLES3.functional.shaders.arra"
#define VkglTestCase_004366_2 "ys.constructor.float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004366, VkglTestCase_004366_1, VkglTestCase_004366_2);

#define VkglTestCase_004367_1 "dEQP-GLES3.functional.shaders.ar"
#define VkglTestCase_004367_2 "rays.constructor.int_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004367, VkglTestCase_004367_1, VkglTestCase_004367_2);

#define VkglTestCase_004368_1 "dEQP-GLES3.functional.shaders.arr"
#define VkglTestCase_004368_2 "ays.constructor.int_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004368, VkglTestCase_004368_1, VkglTestCase_004368_2);

#define VkglTestCase_004369_1 "dEQP-GLES3.functional.shaders.ar"
#define VkglTestCase_004369_2 "rays.constructor.bool_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004369, VkglTestCase_004369_1, VkglTestCase_004369_2);

#define VkglTestCase_004370_1 "dEQP-GLES3.functional.shaders.arr"
#define VkglTestCase_004370_2 "ays.constructor.bool_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004370, VkglTestCase_004370_1, VkglTestCase_004370_2);

#define VkglTestCase_004371_1 "dEQP-GLES3.functional.shaders.arr"
#define VkglTestCase_004371_2 "ays.constructor.float_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004371, VkglTestCase_004371_1, VkglTestCase_004371_2);

#define VkglTestCase_004372_1 "dEQP-GLES3.functional.shaders.arra"
#define VkglTestCase_004372_2 "ys.constructor.float_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004372, VkglTestCase_004372_1, VkglTestCase_004372_2);

#define VkglTestCase_004373_1 "dEQP-GLES3.functional.shaders.ar"
#define VkglTestCase_004373_2 "rays.constructor.int_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004373, VkglTestCase_004373_1, VkglTestCase_004373_2);

#define VkglTestCase_004374_1 "dEQP-GLES3.functional.shaders.arr"
#define VkglTestCase_004374_2 "ays.constructor.int_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004374, VkglTestCase_004374_1, VkglTestCase_004374_2);

#define VkglTestCase_004375_1 "dEQP-GLES3.functional.shaders.ar"
#define VkglTestCase_004375_2 "rays.constructor.bool_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004375, VkglTestCase_004375_1, VkglTestCase_004375_2);

#define VkglTestCase_004376_1 "dEQP-GLES3.functional.shaders.arr"
#define VkglTestCase_004376_2 "ays.constructor.bool_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004376, VkglTestCase_004376_1, VkglTestCase_004376_2);
