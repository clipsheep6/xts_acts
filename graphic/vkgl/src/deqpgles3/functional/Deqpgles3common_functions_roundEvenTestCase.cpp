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

#define VkglTestCase_012670_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012670_2 "mmon_functions.roundEven.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012670, VkglTestCase_012670_1, VkglTestCase_012670_2);

#define VkglTestCase_012671_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012671_2 "mon_functions.roundEven.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012671, VkglTestCase_012671_1, VkglTestCase_012671_2);

#define VkglTestCase_012672_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012672_2 "on_functions.roundEven.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012672, VkglTestCase_012672_1, VkglTestCase_012672_2);

#define VkglTestCase_012673_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_012673_2 "n_functions.roundEven.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012673, VkglTestCase_012673_1, VkglTestCase_012673_2);

#define VkglTestCase_012674_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012674_2 "mon_functions.roundEven.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012674, VkglTestCase_012674_1, VkglTestCase_012674_2);

#define VkglTestCase_012675_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012675_2 "on_functions.roundEven.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012675, VkglTestCase_012675_1, VkglTestCase_012675_2);

#define VkglTestCase_012676_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012676_2 "mmon_functions.roundEven.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012676, VkglTestCase_012676_1, VkglTestCase_012676_2);

#define VkglTestCase_012677_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012677_2 "mon_functions.roundEven.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012677, VkglTestCase_012677_1, VkglTestCase_012677_2);

#define VkglTestCase_012678_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012678_2 "mon_functions.roundEven.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012678, VkglTestCase_012678_1, VkglTestCase_012678_2);

#define VkglTestCase_012679_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012679_2 "on_functions.roundEven.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012679, VkglTestCase_012679_1, VkglTestCase_012679_2);

#define VkglTestCase_012680_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012680_2 "mmon_functions.roundEven.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012680, VkglTestCase_012680_1, VkglTestCase_012680_2);

#define VkglTestCase_012681_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012681_2 "mon_functions.roundEven.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012681, VkglTestCase_012681_1, VkglTestCase_012681_2);

#define VkglTestCase_012682_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012682_2 "mmon_functions.roundEven.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012682, VkglTestCase_012682_1, VkglTestCase_012682_2);

#define VkglTestCase_012683_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012683_2 "mon_functions.roundEven.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012683, VkglTestCase_012683_1, VkglTestCase_012683_2);

#define VkglTestCase_012684_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012684_2 "mon_functions.roundEven.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012684, VkglTestCase_012684_1, VkglTestCase_012684_2);

#define VkglTestCase_012685_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012685_2 "on_functions.roundEven.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012685, VkglTestCase_012685_1, VkglTestCase_012685_2);

#define VkglTestCase_012686_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012686_2 "mmon_functions.roundEven.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012686, VkglTestCase_012686_1, VkglTestCase_012686_2);

#define VkglTestCase_012687_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012687_2 "mon_functions.roundEven.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012687, VkglTestCase_012687_1, VkglTestCase_012687_2);

#define VkglTestCase_012688_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012688_2 "mmon_functions.roundEven.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012688, VkglTestCase_012688_1, VkglTestCase_012688_2);

#define VkglTestCase_012689_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012689_2 "mon_functions.roundEven.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012689, VkglTestCase_012689_1, VkglTestCase_012689_2);

#define VkglTestCase_012690_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012690_2 "mon_functions.roundEven.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012690, VkglTestCase_012690_1, VkglTestCase_012690_2);

#define VkglTestCase_012691_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_012691_2 "on_functions.roundEven.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012691, VkglTestCase_012691_1, VkglTestCase_012691_2);

#define VkglTestCase_012692_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012692_2 "mmon_functions.roundEven.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012692, VkglTestCase_012692_1, VkglTestCase_012692_2);

#define VkglTestCase_012693_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012693_2 "mon_functions.roundEven.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012693, VkglTestCase_012693_1, VkglTestCase_012693_2);
