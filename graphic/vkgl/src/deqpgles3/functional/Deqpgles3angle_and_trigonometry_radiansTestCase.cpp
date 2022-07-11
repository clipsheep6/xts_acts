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

#define VkglTestCase_012150_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012150_2 "and_trigonometry.radians.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012150, VkglTestCase_012150_1, VkglTestCase_012150_2);

#define VkglTestCase_012151_1 "dEQP-GLES3.functional.shaders.operator.angle_a"
#define VkglTestCase_012151_2 "nd_trigonometry.radians.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012151, VkglTestCase_012151_1, VkglTestCase_012151_2);

#define VkglTestCase_012152_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012152_2 "_and_trigonometry.radians.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012152, VkglTestCase_012152_1, VkglTestCase_012152_2);

#define VkglTestCase_012153_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012153_2 "and_trigonometry.radians.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012153, VkglTestCase_012153_1, VkglTestCase_012153_2);

#define VkglTestCase_012154_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012154_2 "_and_trigonometry.radians.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012154, VkglTestCase_012154_1, VkglTestCase_012154_2);

#define VkglTestCase_012155_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012155_2 "and_trigonometry.radians.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012155, VkglTestCase_012155_1, VkglTestCase_012155_2);

#define VkglTestCase_012156_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012156_2 "e_and_trigonometry.radians.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012156, VkglTestCase_012156_1, VkglTestCase_012156_2);

#define VkglTestCase_012157_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012157_2 "_and_trigonometry.radians.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012157, VkglTestCase_012157_1, VkglTestCase_012157_2);

#define VkglTestCase_012158_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012158_2 "_and_trigonometry.radians.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012158, VkglTestCase_012158_1, VkglTestCase_012158_2);

#define VkglTestCase_012159_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012159_2 "and_trigonometry.radians.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012159, VkglTestCase_012159_1, VkglTestCase_012159_2);

#define VkglTestCase_012160_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012160_2 "e_and_trigonometry.radians.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012160, VkglTestCase_012160_1, VkglTestCase_012160_2);

#define VkglTestCase_012161_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012161_2 "_and_trigonometry.radians.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012161, VkglTestCase_012161_1, VkglTestCase_012161_2);

#define VkglTestCase_012162_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012162_2 "_and_trigonometry.radians.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012162, VkglTestCase_012162_1, VkglTestCase_012162_2);

#define VkglTestCase_012163_1 "dEQP-GLES3.functional.shaders.operator.angle_"
#define VkglTestCase_012163_2 "and_trigonometry.radians.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012163, VkglTestCase_012163_1, VkglTestCase_012163_2);

#define VkglTestCase_012164_1 "dEQP-GLES3.functional.shaders.operator.angl"
#define VkglTestCase_012164_2 "e_and_trigonometry.radians.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012164, VkglTestCase_012164_1, VkglTestCase_012164_2);

#define VkglTestCase_012165_1 "dEQP-GLES3.functional.shaders.operator.angle"
#define VkglTestCase_012165_2 "_and_trigonometry.radians.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012165, VkglTestCase_012165_1, VkglTestCase_012165_2);
