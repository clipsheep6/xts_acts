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

#define VkglTestCase_006370_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006370_2 "mon_functions.smoothstep.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006370, VkglTestCase_006370_1, VkglTestCase_006370_2);

#define VkglTestCase_006371_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006371_2 "on_functions.smoothstep.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006371, VkglTestCase_006371_1, VkglTestCase_006371_2);

#define VkglTestCase_006372_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006372_2 "on_functions.smoothstep.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006372, VkglTestCase_006372_1, VkglTestCase_006372_2);

#define VkglTestCase_006373_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006373_2 "n_functions.smoothstep.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006373, VkglTestCase_006373_1, VkglTestCase_006373_2);

#define VkglTestCase_006374_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006374_2 "mon_functions.smoothstep.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006374, VkglTestCase_006374_1, VkglTestCase_006374_2);

#define VkglTestCase_006375_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006375_2 "on_functions.smoothstep.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006375, VkglTestCase_006375_1, VkglTestCase_006375_2);

#define VkglTestCase_006376_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006376_2 "mmon_functions.smoothstep.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006376, VkglTestCase_006376_1, VkglTestCase_006376_2);

#define VkglTestCase_006377_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006377_2 "mon_functions.smoothstep.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006377, VkglTestCase_006377_1, VkglTestCase_006377_2);

#define VkglTestCase_006378_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006378_2 "on_functions.smoothstep.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006378, VkglTestCase_006378_1, VkglTestCase_006378_2);

#define VkglTestCase_006379_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006379_2 "n_functions.smoothstep.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006379, VkglTestCase_006379_1, VkglTestCase_006379_2);

#define VkglTestCase_006380_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006380_2 "mon_functions.smoothstep.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006380, VkglTestCase_006380_1, VkglTestCase_006380_2);

#define VkglTestCase_006381_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006381_2 "on_functions.smoothstep.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006381, VkglTestCase_006381_1, VkglTestCase_006381_2);

#define VkglTestCase_006382_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006382_2 "mmon_functions.smoothstep.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006382, VkglTestCase_006382_1, VkglTestCase_006382_2);

#define VkglTestCase_006383_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006383_2 "mon_functions.smoothstep.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006383, VkglTestCase_006383_1, VkglTestCase_006383_2);

#define VkglTestCase_006384_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006384_2 "on_functions.smoothstep.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006384, VkglTestCase_006384_1, VkglTestCase_006384_2);

#define VkglTestCase_006385_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006385_2 "n_functions.smoothstep.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006385, VkglTestCase_006385_1, VkglTestCase_006385_2);

#define VkglTestCase_006386_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006386_2 "mon_functions.smoothstep.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006386, VkglTestCase_006386_1, VkglTestCase_006386_2);

#define VkglTestCase_006387_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006387_2 "on_functions.smoothstep.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006387, VkglTestCase_006387_1, VkglTestCase_006387_2);

#define VkglTestCase_006388_1 "dEQP-GLES2.functional.shaders.operator.co"
#define VkglTestCase_006388_2 "mmon_functions.smoothstep.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006388, VkglTestCase_006388_1, VkglTestCase_006388_2);

#define VkglTestCase_006389_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006389_2 "mon_functions.smoothstep.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006389, VkglTestCase_006389_1, VkglTestCase_006389_2);

#define VkglTestCase_006390_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006390_2 "on_functions.smoothstep.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006390, VkglTestCase_006390_1, VkglTestCase_006390_2);

#define VkglTestCase_006391_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006391_2 "n_functions.smoothstep.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006391, VkglTestCase_006391_1, VkglTestCase_006391_2);

#define VkglTestCase_006392_1 "dEQP-GLES2.functional.shaders.operator.com"
#define VkglTestCase_006392_2 "mon_functions.smoothstep.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006392, VkglTestCase_006392_1, VkglTestCase_006392_2);

#define VkglTestCase_006393_1 "dEQP-GLES2.functional.shaders.operator.comm"
#define VkglTestCase_006393_2 "on_functions.smoothstep.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006393, VkglTestCase_006393_1, VkglTestCase_006393_2);

#define VkglTestCase_006394_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006394_2 "n_functions.smoothstep.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006394, VkglTestCase_006394_1, VkglTestCase_006394_2);

#define VkglTestCase_006395_1 "dEQP-GLES2.functional.shaders.operator.common"
#define VkglTestCase_006395_2 "_functions.smoothstep.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006395, VkglTestCase_006395_1, VkglTestCase_006395_2);

#define VkglTestCase_006396_1 "dEQP-GLES2.functional.shaders.operator.common_"
#define VkglTestCase_006396_2 "functions.smoothstep.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006396, VkglTestCase_006396_1, VkglTestCase_006396_2);

#define VkglTestCase_006397_1 "dEQP-GLES2.functional.shaders.operator.common_f"
#define VkglTestCase_006397_2 "unctions.smoothstep.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006397, VkglTestCase_006397_1, VkglTestCase_006397_2);

#define VkglTestCase_006398_1 "dEQP-GLES2.functional.shaders.operator.common"
#define VkglTestCase_006398_2 "_functions.smoothstep.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006398, VkglTestCase_006398_1, VkglTestCase_006398_2);

#define VkglTestCase_006399_1 "dEQP-GLES2.functional.shaders.operator.common_"
#define VkglTestCase_006399_2 "functions.smoothstep.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006399, VkglTestCase_006399_1, VkglTestCase_006399_2);

#define VkglTestCase_006400_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006400_2 "n_functions.smoothstep.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006400, VkglTestCase_006400_1, VkglTestCase_006400_2);

#define VkglTestCase_006401_1 "dEQP-GLES2.functional.shaders.operator.common"
#define VkglTestCase_006401_2 "_functions.smoothstep.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006401, VkglTestCase_006401_1, VkglTestCase_006401_2);

#define VkglTestCase_006402_1 "dEQP-GLES2.functional.shaders.operator.common_"
#define VkglTestCase_006402_2 "functions.smoothstep.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006402, VkglTestCase_006402_1, VkglTestCase_006402_2);

#define VkglTestCase_006403_1 "dEQP-GLES2.functional.shaders.operator.common_f"
#define VkglTestCase_006403_2 "unctions.smoothstep.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006403, VkglTestCase_006403_1, VkglTestCase_006403_2);

#define VkglTestCase_006404_1 "dEQP-GLES2.functional.shaders.operator.common"
#define VkglTestCase_006404_2 "_functions.smoothstep.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006404, VkglTestCase_006404_1, VkglTestCase_006404_2);

#define VkglTestCase_006405_1 "dEQP-GLES2.functional.shaders.operator.common_"
#define VkglTestCase_006405_2 "functions.smoothstep.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006405, VkglTestCase_006405_1, VkglTestCase_006405_2);

#define VkglTestCase_006406_1 "dEQP-GLES2.functional.shaders.operator.commo"
#define VkglTestCase_006406_2 "n_functions.smoothstep.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006406, VkglTestCase_006406_1, VkglTestCase_006406_2);

#define VkglTestCase_006407_1 "dEQP-GLES2.functional.shaders.operator.common"
#define VkglTestCase_006407_2 "_functions.smoothstep.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006407, VkglTestCase_006407_1, VkglTestCase_006407_2);

#define VkglTestCase_006408_1 "dEQP-GLES2.functional.shaders.operator.common_"
#define VkglTestCase_006408_2 "functions.smoothstep.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006408, VkglTestCase_006408_1, VkglTestCase_006408_2);

#define VkglTestCase_006409_1 "dEQP-GLES2.functional.shaders.operator.common_f"
#define VkglTestCase_006409_2 "unctions.smoothstep.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006409, VkglTestCase_006409_1, VkglTestCase_006409_2);

#define VkglTestCase_006410_1 "dEQP-GLES2.functional.shaders.operator.common"
#define VkglTestCase_006410_2 "_functions.smoothstep.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006410, VkglTestCase_006410_1, VkglTestCase_006410_2);

#define VkglTestCase_006411_1 "dEQP-GLES2.functional.shaders.operator.common_"
#define VkglTestCase_006411_2 "functions.smoothstep.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006411, VkglTestCase_006411_1, VkglTestCase_006411_2);
