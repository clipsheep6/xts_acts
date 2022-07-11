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

#define VkglTestCase_012646_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012646_2 "common_functions.round.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012646, VkglTestCase_012646_1, VkglTestCase_012646_2);

#define VkglTestCase_012647_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012647_2 "ommon_functions.round.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012647, VkglTestCase_012647_1, VkglTestCase_012647_2);

#define VkglTestCase_012648_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012648_2 "mmon_functions.round.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012648, VkglTestCase_012648_1, VkglTestCase_012648_2);

#define VkglTestCase_012649_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012649_2 "mon_functions.round.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012649, VkglTestCase_012649_1, VkglTestCase_012649_2);

#define VkglTestCase_012650_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012650_2 "ommon_functions.round.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012650, VkglTestCase_012650_1, VkglTestCase_012650_2);

#define VkglTestCase_012651_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012651_2 "mmon_functions.round.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012651, VkglTestCase_012651_1, VkglTestCase_012651_2);

#define VkglTestCase_012652_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012652_2 "common_functions.round.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012652, VkglTestCase_012652_1, VkglTestCase_012652_2);

#define VkglTestCase_012653_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012653_2 "ommon_functions.round.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012653, VkglTestCase_012653_1, VkglTestCase_012653_2);

#define VkglTestCase_012654_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012654_2 "ommon_functions.round.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012654, VkglTestCase_012654_1, VkglTestCase_012654_2);

#define VkglTestCase_012655_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012655_2 "mmon_functions.round.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012655, VkglTestCase_012655_1, VkglTestCase_012655_2);

#define VkglTestCase_012656_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012656_2 "common_functions.round.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012656, VkglTestCase_012656_1, VkglTestCase_012656_2);

#define VkglTestCase_012657_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012657_2 "ommon_functions.round.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012657, VkglTestCase_012657_1, VkglTestCase_012657_2);

#define VkglTestCase_012658_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012658_2 "common_functions.round.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012658, VkglTestCase_012658_1, VkglTestCase_012658_2);

#define VkglTestCase_012659_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012659_2 "ommon_functions.round.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012659, VkglTestCase_012659_1, VkglTestCase_012659_2);

#define VkglTestCase_012660_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012660_2 "ommon_functions.round.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012660, VkglTestCase_012660_1, VkglTestCase_012660_2);

#define VkglTestCase_012661_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012661_2 "mmon_functions.round.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012661, VkglTestCase_012661_1, VkglTestCase_012661_2);

#define VkglTestCase_012662_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012662_2 "common_functions.round.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012662, VkglTestCase_012662_1, VkglTestCase_012662_2);

#define VkglTestCase_012663_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012663_2 "ommon_functions.round.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012663, VkglTestCase_012663_1, VkglTestCase_012663_2);

#define VkglTestCase_012664_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012664_2 "common_functions.round.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012664, VkglTestCase_012664_1, VkglTestCase_012664_2);

#define VkglTestCase_012665_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012665_2 "ommon_functions.round.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012665, VkglTestCase_012665_1, VkglTestCase_012665_2);

#define VkglTestCase_012666_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012666_2 "ommon_functions.round.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012666, VkglTestCase_012666_1, VkglTestCase_012666_2);

#define VkglTestCase_012667_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012667_2 "mmon_functions.round.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012667, VkglTestCase_012667_1, VkglTestCase_012667_2);

#define VkglTestCase_012668_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012668_2 "common_functions.round.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012668, VkglTestCase_012668_1, VkglTestCase_012668_2);

#define VkglTestCase_012669_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012669_2 "ommon_functions.round.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012669, VkglTestCase_012669_1, VkglTestCase_012669_2);
