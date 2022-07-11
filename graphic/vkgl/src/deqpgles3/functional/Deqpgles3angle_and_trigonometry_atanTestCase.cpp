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

#define VkglTestCase_012286_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012286_2 "e_and_trigonometry.atan.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012286, VkglTestCase_012286_1, VkglTestCase_012286_2);

#define VkglTestCase_012287_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012287_2 "_and_trigonometry.atan.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012287, VkglTestCase_012287_1, VkglTestCase_012287_2);

#define VkglTestCase_012288_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012288_2 "le_and_trigonometry.atan.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012288, VkglTestCase_012288_1, VkglTestCase_012288_2);

#define VkglTestCase_012289_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012289_2 "e_and_trigonometry.atan.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012289, VkglTestCase_012289_1, VkglTestCase_012289_2);

#define VkglTestCase_012290_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012290_2 "e_and_trigonometry.atan.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012290, VkglTestCase_012290_1, VkglTestCase_012290_2);

#define VkglTestCase_012291_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012291_2 "_and_trigonometry.atan.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012291, VkglTestCase_012291_1, VkglTestCase_012291_2);

#define VkglTestCase_012292_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012292_2 "le_and_trigonometry.atan.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012292, VkglTestCase_012292_1, VkglTestCase_012292_2);

#define VkglTestCase_012293_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012293_2 "e_and_trigonometry.atan.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012293, VkglTestCase_012293_1, VkglTestCase_012293_2);

#define VkglTestCase_012294_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012294_2 "e_and_trigonometry.atan.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012294, VkglTestCase_012294_1, VkglTestCase_012294_2);

#define VkglTestCase_012295_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012295_2 "_and_trigonometry.atan.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012295, VkglTestCase_012295_1, VkglTestCase_012295_2);

#define VkglTestCase_012296_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012296_2 "le_and_trigonometry.atan.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012296, VkglTestCase_012296_1, VkglTestCase_012296_2);

#define VkglTestCase_012297_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012297_2 "e_and_trigonometry.atan.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012297, VkglTestCase_012297_1, VkglTestCase_012297_2);

#define VkglTestCase_012298_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012298_2 "e_and_trigonometry.atan.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012298, VkglTestCase_012298_1, VkglTestCase_012298_2);

#define VkglTestCase_012299_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012299_2 "_and_trigonometry.atan.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012299, VkglTestCase_012299_1, VkglTestCase_012299_2);

#define VkglTestCase_012300_1 "dEQP-GLES3.functional.shaders.operator.ang"
#define VkglTestCase_012300_2 "le_and_trigonometry.atan.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012300, VkglTestCase_012300_1, VkglTestCase_012300_2);

#define VkglTestCase_012301_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012301_2 "e_and_trigonometry.atan.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012301, VkglTestCase_012301_1, VkglTestCase_012301_2);
