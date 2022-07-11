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
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012182_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012182_2 "e_and_trigonometry.sin.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012182, VkglTestCase_012182_1, VkglTestCase_012182_2);

#define VkglTestCase_012183_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012183_2 "_and_trigonometry.sin.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012183, VkglTestCase_012183_1, VkglTestCase_012183_2);

#define VkglTestCase_012184_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012184_2 "le_and_trigonometry.sin.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012184, VkglTestCase_012184_1, VkglTestCase_012184_2);

#define VkglTestCase_012185_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012185_2 "e_and_trigonometry.sin.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012185, VkglTestCase_012185_1, VkglTestCase_012185_2);

#define VkglTestCase_012186_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012186_2 "le_and_trigonometry.sin.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012186, VkglTestCase_012186_1, VkglTestCase_012186_2);

#define VkglTestCase_012187_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012187_2 "e_and_trigonometry.sin.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012187, VkglTestCase_012187_1, VkglTestCase_012187_2);

#define VkglTestCase_012188_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012188_2 "gle_and_trigonometry.sin.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012188, VkglTestCase_012188_1, VkglTestCase_012188_2);

#define VkglTestCase_012189_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012189_2 "le_and_trigonometry.sin.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012189, VkglTestCase_012189_1, VkglTestCase_012189_2);

#define VkglTestCase_012190_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012190_2 "le_and_trigonometry.sin.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012190, VkglTestCase_012190_1, VkglTestCase_012190_2);

#define VkglTestCase_012191_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012191_2 "e_and_trigonometry.sin.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012191, VkglTestCase_012191_1, VkglTestCase_012191_2);

#define VkglTestCase_012192_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012192_2 "gle_and_trigonometry.sin.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012192, VkglTestCase_012192_1, VkglTestCase_012192_2);

#define VkglTestCase_012193_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012193_2 "le_and_trigonometry.sin.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012193, VkglTestCase_012193_1, VkglTestCase_012193_2);

#define VkglTestCase_012194_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012194_2 "le_and_trigonometry.sin.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012194, VkglTestCase_012194_1, VkglTestCase_012194_2);

#define VkglTestCase_012195_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012195_2 "e_and_trigonometry.sin.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012195, VkglTestCase_012195_1, VkglTestCase_012195_2);

#define VkglTestCase_012196_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012196_2 "gle_and_trigonometry.sin.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012196, VkglTestCase_012196_1, VkglTestCase_012196_2);

#define VkglTestCase_012197_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012197_2 "le_and_trigonometry.sin.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012197, VkglTestCase_012197_1, VkglTestCase_012197_2);

#define VkglTestCase_012198_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012198_2 "gle_and_trigonometry.sin.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012198, VkglTestCase_012198_1, VkglTestCase_012198_2);

#define VkglTestCase_012199_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012199_2 "le_and_trigonometry.sin.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012199, VkglTestCase_012199_1, VkglTestCase_012199_2);

#define VkglTestCase_012200_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012200_2 "gle_and_trigonometry.sin.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012200, VkglTestCase_012200_1, VkglTestCase_012200_2);

#define VkglTestCase_012201_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012201_2 "le_and_trigonometry.sin.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012201, VkglTestCase_012201_1, VkglTestCase_012201_2);

#define VkglTestCase_012202_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012202_2 "gle_and_trigonometry.sin.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012202, VkglTestCase_012202_1, VkglTestCase_012202_2);

#define VkglTestCase_012203_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012203_2 "le_and_trigonometry.sin.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012203, VkglTestCase_012203_1, VkglTestCase_012203_2);

#define VkglTestCase_012204_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012204_2 "gle_and_trigonometry.sin.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012204, VkglTestCase_012204_1, VkglTestCase_012204_2);

#define VkglTestCase_012205_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012205_2 "le_and_trigonometry.sin.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012205, VkglTestCase_012205_1, VkglTestCase_012205_2);
