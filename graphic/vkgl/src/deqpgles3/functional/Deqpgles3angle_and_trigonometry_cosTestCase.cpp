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

#define VkglTestCase_012206_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012206_2 "e_and_trigonometry.cos.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012206, VkglTestCase_012206_1, VkglTestCase_012206_2);

#define VkglTestCase_012207_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012207_2 "_and_trigonometry.cos.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012207, VkglTestCase_012207_1, VkglTestCase_012207_2);

#define VkglTestCase_012208_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012208_2 "le_and_trigonometry.cos.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012208, VkglTestCase_012208_1, VkglTestCase_012208_2);

#define VkglTestCase_012209_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012209_2 "e_and_trigonometry.cos.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012209, VkglTestCase_012209_1, VkglTestCase_012209_2);

#define VkglTestCase_012210_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012210_2 "le_and_trigonometry.cos.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012210, VkglTestCase_012210_1, VkglTestCase_012210_2);

#define VkglTestCase_012211_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012211_2 "e_and_trigonometry.cos.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012211, VkglTestCase_012211_1, VkglTestCase_012211_2);

#define VkglTestCase_012212_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012212_2 "gle_and_trigonometry.cos.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012212, VkglTestCase_012212_1, VkglTestCase_012212_2);

#define VkglTestCase_012213_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012213_2 "le_and_trigonometry.cos.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012213, VkglTestCase_012213_1, VkglTestCase_012213_2);

#define VkglTestCase_012214_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012214_2 "le_and_trigonometry.cos.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012214, VkglTestCase_012214_1, VkglTestCase_012214_2);

#define VkglTestCase_012215_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012215_2 "e_and_trigonometry.cos.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012215, VkglTestCase_012215_1, VkglTestCase_012215_2);

#define VkglTestCase_012216_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012216_2 "gle_and_trigonometry.cos.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012216, VkglTestCase_012216_1, VkglTestCase_012216_2);

#define VkglTestCase_012217_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012217_2 "le_and_trigonometry.cos.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012217, VkglTestCase_012217_1, VkglTestCase_012217_2);

#define VkglTestCase_012218_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012218_2 "le_and_trigonometry.cos.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012218, VkglTestCase_012218_1, VkglTestCase_012218_2);

#define VkglTestCase_012219_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012219_2 "e_and_trigonometry.cos.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012219, VkglTestCase_012219_1, VkglTestCase_012219_2);

#define VkglTestCase_012220_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012220_2 "gle_and_trigonometry.cos.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012220, VkglTestCase_012220_1, VkglTestCase_012220_2);

#define VkglTestCase_012221_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012221_2 "le_and_trigonometry.cos.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012221, VkglTestCase_012221_1, VkglTestCase_012221_2);

#define VkglTestCase_012222_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012222_2 "gle_and_trigonometry.cos.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012222, VkglTestCase_012222_1, VkglTestCase_012222_2);

#define VkglTestCase_012223_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012223_2 "le_and_trigonometry.cos.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012223, VkglTestCase_012223_1, VkglTestCase_012223_2);

#define VkglTestCase_012224_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012224_2 "gle_and_trigonometry.cos.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012224, VkglTestCase_012224_1, VkglTestCase_012224_2);

#define VkglTestCase_012225_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012225_2 "le_and_trigonometry.cos.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012225, VkglTestCase_012225_1, VkglTestCase_012225_2);

#define VkglTestCase_012226_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012226_2 "gle_and_trigonometry.cos.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012226, VkglTestCase_012226_1, VkglTestCase_012226_2);

#define VkglTestCase_012227_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012227_2 "le_and_trigonometry.cos.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012227, VkglTestCase_012227_1, VkglTestCase_012227_2);

#define VkglTestCase_012228_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012228_2 "gle_and_trigonometry.cos.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012228, VkglTestCase_012228_1, VkglTestCase_012228_2);

#define VkglTestCase_012229_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012229_2 "le_and_trigonometry.cos.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012229, VkglTestCase_012229_1, VkglTestCase_012229_2);
