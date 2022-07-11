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

#define VkglTestCase_012230_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012230_2 "e_and_trigonometry.tan.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012230, VkglTestCase_012230_1, VkglTestCase_012230_2);

#define VkglTestCase_012231_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012231_2 "_and_trigonometry.tan.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012231, VkglTestCase_012231_1, VkglTestCase_012231_2);

#define VkglTestCase_012232_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012232_2 "le_and_trigonometry.tan.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012232, VkglTestCase_012232_1, VkglTestCase_012232_2);

#define VkglTestCase_012233_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012233_2 "e_and_trigonometry.tan.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012233, VkglTestCase_012233_1, VkglTestCase_012233_2);

#define VkglTestCase_012234_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012234_2 "le_and_trigonometry.tan.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012234, VkglTestCase_012234_1, VkglTestCase_012234_2);

#define VkglTestCase_012235_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012235_2 "e_and_trigonometry.tan.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012235, VkglTestCase_012235_1, VkglTestCase_012235_2);

#define VkglTestCase_012236_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012236_2 "gle_and_trigonometry.tan.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012236, VkglTestCase_012236_1, VkglTestCase_012236_2);

#define VkglTestCase_012237_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012237_2 "le_and_trigonometry.tan.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012237, VkglTestCase_012237_1, VkglTestCase_012237_2);

#define VkglTestCase_012238_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012238_2 "le_and_trigonometry.tan.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012238, VkglTestCase_012238_1, VkglTestCase_012238_2);

#define VkglTestCase_012239_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012239_2 "e_and_trigonometry.tan.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012239, VkglTestCase_012239_1, VkglTestCase_012239_2);

#define VkglTestCase_012240_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012240_2 "gle_and_trigonometry.tan.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012240, VkglTestCase_012240_1, VkglTestCase_012240_2);

#define VkglTestCase_012241_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012241_2 "le_and_trigonometry.tan.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012241, VkglTestCase_012241_1, VkglTestCase_012241_2);

#define VkglTestCase_012242_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012242_2 "le_and_trigonometry.tan.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012242, VkglTestCase_012242_1, VkglTestCase_012242_2);

#define VkglTestCase_012243_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012243_2 "e_and_trigonometry.tan.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012243, VkglTestCase_012243_1, VkglTestCase_012243_2);

#define VkglTestCase_012244_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012244_2 "gle_and_trigonometry.tan.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012244, VkglTestCase_012244_1, VkglTestCase_012244_2);

#define VkglTestCase_012245_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012245_2 "le_and_trigonometry.tan.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012245, VkglTestCase_012245_1, VkglTestCase_012245_2);

#define VkglTestCase_012246_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012246_2 "gle_and_trigonometry.tan.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012246, VkglTestCase_012246_1, VkglTestCase_012246_2);

#define VkglTestCase_012247_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012247_2 "le_and_trigonometry.tan.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012247, VkglTestCase_012247_1, VkglTestCase_012247_2);

#define VkglTestCase_012248_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012248_2 "gle_and_trigonometry.tan.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012248, VkglTestCase_012248_1, VkglTestCase_012248_2);

#define VkglTestCase_012249_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012249_2 "le_and_trigonometry.tan.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012249, VkglTestCase_012249_1, VkglTestCase_012249_2);

#define VkglTestCase_012250_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012250_2 "gle_and_trigonometry.tan.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012250, VkglTestCase_012250_1, VkglTestCase_012250_2);

#define VkglTestCase_012251_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012251_2 "le_and_trigonometry.tan.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012251, VkglTestCase_012251_1, VkglTestCase_012251_2);

#define VkglTestCase_012252_1 "dEQP-GLES3.functional.shaders.operator.an"
#define VkglTestCase_012252_2 "gle_and_trigonometry.tan.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012252, VkglTestCase_012252_1, VkglTestCase_012252_2);

#define VkglTestCase_012253_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012253_2 "le_and_trigonometry.tan.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012253, VkglTestCase_012253_1, VkglTestCase_012253_2);
