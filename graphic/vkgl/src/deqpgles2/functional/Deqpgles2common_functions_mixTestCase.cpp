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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006286_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006286_2 ".common_functions.mix.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006286, VkglTestCase_006286_1, VkglTestCase_006286_2);

#define VkglTestCase_006287_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006287_2 "common_functions.mix.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006287, VkglTestCase_006287_1, VkglTestCase_006287_2);

#define VkglTestCase_006288_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006288_2 "ommon_functions.mix.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006288, VkglTestCase_006288_1, VkglTestCase_006288_2);

#define VkglTestCase_006289_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006289_2 "mmon_functions.mix.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006289, VkglTestCase_006289_1, VkglTestCase_006289_2);

#define VkglTestCase_006290_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006290_2 "common_functions.mix.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006290, VkglTestCase_006290_1, VkglTestCase_006290_2);

#define VkglTestCase_006291_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006291_2 "ommon_functions.mix.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006291, VkglTestCase_006291_1, VkglTestCase_006291_2);

#define VkglTestCase_006292_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006292_2 ".common_functions.mix.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006292, VkglTestCase_006292_1, VkglTestCase_006292_2);

#define VkglTestCase_006293_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006293_2 "common_functions.mix.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006293, VkglTestCase_006293_1, VkglTestCase_006293_2);

#define VkglTestCase_006294_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006294_2 "common_functions.mix.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006294, VkglTestCase_006294_1, VkglTestCase_006294_2);

#define VkglTestCase_006295_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006295_2 "ommon_functions.mix.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006295, VkglTestCase_006295_1, VkglTestCase_006295_2);

#define VkglTestCase_006296_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006296_2 ".common_functions.mix.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006296, VkglTestCase_006296_1, VkglTestCase_006296_2);

#define VkglTestCase_006297_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006297_2 "common_functions.mix.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006297, VkglTestCase_006297_1, VkglTestCase_006297_2);

#define VkglTestCase_006298_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006298_2 ".common_functions.mix.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006298, VkglTestCase_006298_1, VkglTestCase_006298_2);

#define VkglTestCase_006299_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006299_2 "common_functions.mix.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006299, VkglTestCase_006299_1, VkglTestCase_006299_2);

#define VkglTestCase_006300_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006300_2 "common_functions.mix.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006300, VkglTestCase_006300_1, VkglTestCase_006300_2);

#define VkglTestCase_006301_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006301_2 "ommon_functions.mix.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006301, VkglTestCase_006301_1, VkglTestCase_006301_2);

#define VkglTestCase_006302_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006302_2 ".common_functions.mix.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006302, VkglTestCase_006302_1, VkglTestCase_006302_2);

#define VkglTestCase_006303_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006303_2 "common_functions.mix.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006303, VkglTestCase_006303_1, VkglTestCase_006303_2);

#define VkglTestCase_006304_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006304_2 ".common_functions.mix.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006304, VkglTestCase_006304_1, VkglTestCase_006304_2);

#define VkglTestCase_006305_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006305_2 "common_functions.mix.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006305, VkglTestCase_006305_1, VkglTestCase_006305_2);

#define VkglTestCase_006306_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006306_2 "common_functions.mix.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006306, VkglTestCase_006306_1, VkglTestCase_006306_2);

#define VkglTestCase_006307_1 "dEQP-GLES2.functional.shaders.operator.c"
#define VkglTestCase_006307_2 "ommon_functions.mix.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006307, VkglTestCase_006307_1, VkglTestCase_006307_2);

#define VkglTestCase_006308_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_006308_2 ".common_functions.mix.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006308, VkglTestCase_006308_1, VkglTestCase_006308_2);

#define VkglTestCase_006309_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006309_2 "common_functions.mix.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006309, VkglTestCase_006309_1, VkglTestCase_006309_2);

#define VkglTestCase_006310_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006310_2 "mmon_functions.mix.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006310, VkglTestCase_006310_1, VkglTestCase_006310_2);

#define VkglTestCase_006311_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006311_2 "mon_functions.mix.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006311, VkglTestCase_006311_1, VkglTestCase_006311_2);

#define VkglTestCase_006312_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006312_2 "mon_functions.mix.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006312, VkglTestCase_006312_1, VkglTestCase_006312_2);

#define VkglTestCase_006313_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006313_2 "on_functions.mix.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006313, VkglTestCase_006313_1, VkglTestCase_006313_2);

#define VkglTestCase_006314_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006314_2 "mmon_functions.mix.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006314, VkglTestCase_006314_1, VkglTestCase_006314_2);

#define VkglTestCase_006315_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006315_2 "mon_functions.mix.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006315, VkglTestCase_006315_1, VkglTestCase_006315_2);

#define VkglTestCase_006316_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006316_2 "mmon_functions.mix.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006316, VkglTestCase_006316_1, VkglTestCase_006316_2);

#define VkglTestCase_006317_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006317_2 "mon_functions.mix.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006317, VkglTestCase_006317_1, VkglTestCase_006317_2);

#define VkglTestCase_006318_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006318_2 "mon_functions.mix.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006318, VkglTestCase_006318_1, VkglTestCase_006318_2);

#define VkglTestCase_006319_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006319_2 "on_functions.mix.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006319, VkglTestCase_006319_1, VkglTestCase_006319_2);

#define VkglTestCase_006320_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006320_2 "mmon_functions.mix.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006320, VkglTestCase_006320_1, VkglTestCase_006320_2);

#define VkglTestCase_006321_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006321_2 "mon_functions.mix.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006321, VkglTestCase_006321_1, VkglTestCase_006321_2);

#define VkglTestCase_006322_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006322_2 "mmon_functions.mix.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006322, VkglTestCase_006322_1, VkglTestCase_006322_2);

#define VkglTestCase_006323_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006323_2 "mon_functions.mix.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006323, VkglTestCase_006323_1, VkglTestCase_006323_2);

#define VkglTestCase_006324_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006324_2 "mon_functions.mix.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006324, VkglTestCase_006324_1, VkglTestCase_006324_2);

#define VkglTestCase_006325_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006325_2 "on_functions.mix.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006325, VkglTestCase_006325_1, VkglTestCase_006325_2);

#define VkglTestCase_006326_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006326_2 "mmon_functions.mix.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006326, VkglTestCase_006326_1, VkglTestCase_006326_2);

#define VkglTestCase_006327_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006327_2 "mon_functions.mix.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006327, VkglTestCase_006327_1, VkglTestCase_006327_2);
