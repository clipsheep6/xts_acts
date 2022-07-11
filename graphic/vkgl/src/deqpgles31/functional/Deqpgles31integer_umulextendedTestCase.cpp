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
#include "../ActsDeqpgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001185_1 "dEQP-GLES31.functional.shaders.builtin_func"
#define VkglTestCase_001185_2 "tions.integer.umulextended.uint_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001185, VkglTestCase_001185_1, VkglTestCase_001185_2);

#define VkglTestCase_001186_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001186_2 "ions.integer.umulextended.uint_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001186, VkglTestCase_001186_1, VkglTestCase_001186_2);

#define VkglTestCase_001187_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001187_2 "ions.integer.umulextended.uint_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001187, VkglTestCase_001187_1, VkglTestCase_001187_2);

#define VkglTestCase_001188_1 "dEQP-GLES31.functional.shaders.builtin_functio"
#define VkglTestCase_001188_2 "ns.integer.umulextended.uint_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001188, VkglTestCase_001188_1, VkglTestCase_001188_2);

#define VkglTestCase_001189_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001189_2 "ons.integer.umulextended.uint_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001189, VkglTestCase_001189_1, VkglTestCase_001189_2);

#define VkglTestCase_001190_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001190_2 "ions.integer.umulextended.uint_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001190, VkglTestCase_001190_1, VkglTestCase_001190_2);

#define VkglTestCase_001191_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001191_2 "ions.integer.umulextended.uvec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001191, VkglTestCase_001191_1, VkglTestCase_001191_2);

#define VkglTestCase_001192_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001192_2 "ons.integer.umulextended.uvec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001192, VkglTestCase_001192_1, VkglTestCase_001192_2);

#define VkglTestCase_001193_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001193_2 "ons.integer.umulextended.uvec2_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001193, VkglTestCase_001193_1, VkglTestCase_001193_2);

#define VkglTestCase_001194_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001194_2 "s.integer.umulextended.uvec2_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001194, VkglTestCase_001194_1, VkglTestCase_001194_2);

#define VkglTestCase_001195_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001195_2 "ons.integer.umulextended.uvec2_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001195, VkglTestCase_001195_1, VkglTestCase_001195_2);

#define VkglTestCase_001196_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001196_2 "ions.integer.umulextended.uvec2_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001196, VkglTestCase_001196_1, VkglTestCase_001196_2);

#define VkglTestCase_001197_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001197_2 "ions.integer.umulextended.uvec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001197, VkglTestCase_001197_1, VkglTestCase_001197_2);

#define VkglTestCase_001198_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001198_2 "ons.integer.umulextended.uvec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001198, VkglTestCase_001198_1, VkglTestCase_001198_2);

#define VkglTestCase_001199_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001199_2 "ons.integer.umulextended.uvec3_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001199, VkglTestCase_001199_1, VkglTestCase_001199_2);

#define VkglTestCase_001200_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001200_2 "s.integer.umulextended.uvec3_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001200, VkglTestCase_001200_1, VkglTestCase_001200_2);

#define VkglTestCase_001201_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001201_2 "ons.integer.umulextended.uvec3_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001201, VkglTestCase_001201_1, VkglTestCase_001201_2);

#define VkglTestCase_001202_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001202_2 "ions.integer.umulextended.uvec3_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001202, VkglTestCase_001202_1, VkglTestCase_001202_2);

#define VkglTestCase_001203_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001203_2 "ions.integer.umulextended.uvec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001203, VkglTestCase_001203_1, VkglTestCase_001203_2);

#define VkglTestCase_001204_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001204_2 "ons.integer.umulextended.uvec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001204, VkglTestCase_001204_1, VkglTestCase_001204_2);

#define VkglTestCase_001205_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001205_2 "ons.integer.umulextended.uvec4_highp_geometry"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001205, VkglTestCase_001205_1, VkglTestCase_001205_2);

#define VkglTestCase_001206_1 "dEQP-GLES31.functional.shaders.builtin_function"
#define VkglTestCase_001206_2 "s.integer.umulextended.uvec4_highp_tess_control"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001206, VkglTestCase_001206_1, VkglTestCase_001206_2);

#define VkglTestCase_001207_1 "dEQP-GLES31.functional.shaders.builtin_functi"
#define VkglTestCase_001207_2 "ons.integer.umulextended.uvec4_highp_tess_eval"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001207, VkglTestCase_001207_1, VkglTestCase_001207_2);

#define VkglTestCase_001208_1 "dEQP-GLES31.functional.shaders.builtin_funct"
#define VkglTestCase_001208_2 "ions.integer.umulextended.uvec4_highp_compute"
SHRINK_HWTEST_F(ActsDeqpgles310002TestSuite, TestCase_001208, VkglTestCase_001208_1, VkglTestCase_001208_2);
