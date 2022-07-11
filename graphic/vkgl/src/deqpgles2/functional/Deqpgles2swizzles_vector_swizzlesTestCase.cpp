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
#include "../ActsDeqpgles20002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001348_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001348_2 ".vector_swizzles.mediump_vec2_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001348, VkglTestCase_001348_1, VkglTestCase_001348_2);

#define VkglTestCase_001349_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001349_2 "vector_swizzles.mediump_vec2_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001349, VkglTestCase_001349_1, VkglTestCase_001349_2);

#define VkglTestCase_001350_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001350_2 ".vector_swizzles.mediump_vec2_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001350, VkglTestCase_001350_1, VkglTestCase_001350_2);

#define VkglTestCase_001351_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001351_2 "vector_swizzles.mediump_vec2_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001351, VkglTestCase_001351_1, VkglTestCase_001351_2);

#define VkglTestCase_001352_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001352_2 ".vector_swizzles.mediump_vec2_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001352, VkglTestCase_001352_1, VkglTestCase_001352_2);

#define VkglTestCase_001353_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001353_2 "vector_swizzles.mediump_vec2_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001353, VkglTestCase_001353_1, VkglTestCase_001353_2);

#define VkglTestCase_001354_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001354_2 ".vector_swizzles.mediump_vec2_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001354, VkglTestCase_001354_1, VkglTestCase_001354_2);

#define VkglTestCase_001355_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001355_2 "vector_swizzles.mediump_vec2_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001355, VkglTestCase_001355_1, VkglTestCase_001355_2);

#define VkglTestCase_001356_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001356_2 "vector_swizzles.mediump_vec2_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001356, VkglTestCase_001356_1, VkglTestCase_001356_2);

#define VkglTestCase_001357_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001357_2 "ector_swizzles.mediump_vec2_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001357, VkglTestCase_001357_1, VkglTestCase_001357_2);

#define VkglTestCase_001358_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001358_2 "vector_swizzles.mediump_vec2_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001358, VkglTestCase_001358_1, VkglTestCase_001358_2);

#define VkglTestCase_001359_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001359_2 "ector_swizzles.mediump_vec2_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001359, VkglTestCase_001359_1, VkglTestCase_001359_2);

#define VkglTestCase_001360_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001360_2 "vector_swizzles.mediump_vec2_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001360, VkglTestCase_001360_1, VkglTestCase_001360_2);

#define VkglTestCase_001361_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001361_2 "ector_swizzles.mediump_vec2_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001361, VkglTestCase_001361_1, VkglTestCase_001361_2);

#define VkglTestCase_001362_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001362_2 ".vector_swizzles.mediump_vec2_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001362, VkglTestCase_001362_1, VkglTestCase_001362_2);

#define VkglTestCase_001363_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001363_2 "vector_swizzles.mediump_vec2_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001363, VkglTestCase_001363_1, VkglTestCase_001363_2);

#define VkglTestCase_001364_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001364_2 ".vector_swizzles.mediump_vec2_ss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001364, VkglTestCase_001364_1, VkglTestCase_001364_2);

#define VkglTestCase_001365_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001365_2 "vector_swizzles.mediump_vec2_ss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001365, VkglTestCase_001365_1, VkglTestCase_001365_2);

#define VkglTestCase_001366_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001366_2 ".vector_swizzles.mediump_vec2_st_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001366, VkglTestCase_001366_1, VkglTestCase_001366_2);

#define VkglTestCase_001367_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001367_2 "vector_swizzles.mediump_vec2_st_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001367, VkglTestCase_001367_1, VkglTestCase_001367_2);

#define VkglTestCase_001368_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001368_2 ".vector_swizzles.mediump_vec2_ts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001368, VkglTestCase_001368_1, VkglTestCase_001368_2);

#define VkglTestCase_001369_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001369_2 "vector_swizzles.mediump_vec2_ts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001369, VkglTestCase_001369_1, VkglTestCase_001369_2);

#define VkglTestCase_001370_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001370_2 "vector_swizzles.mediump_vec2_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001370, VkglTestCase_001370_1, VkglTestCase_001370_2);

#define VkglTestCase_001371_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001371_2 "ector_swizzles.mediump_vec2_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001371, VkglTestCase_001371_1, VkglTestCase_001371_2);

#define VkglTestCase_001372_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001372_2 "vector_swizzles.mediump_vec2_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001372, VkglTestCase_001372_1, VkglTestCase_001372_2);

#define VkglTestCase_001373_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001373_2 "ector_swizzles.mediump_vec2_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001373, VkglTestCase_001373_1, VkglTestCase_001373_2);

#define VkglTestCase_001374_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001374_2 "vector_swizzles.mediump_vec2_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001374, VkglTestCase_001374_1, VkglTestCase_001374_2);

#define VkglTestCase_001375_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001375_2 "ector_swizzles.mediump_vec2_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001375, VkglTestCase_001375_1, VkglTestCase_001375_2);

#define VkglTestCase_001376_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001376_2 ".vector_swizzles.mediump_vec2_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001376, VkglTestCase_001376_1, VkglTestCase_001376_2);

#define VkglTestCase_001377_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001377_2 "vector_swizzles.mediump_vec2_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001377, VkglTestCase_001377_1, VkglTestCase_001377_2);

#define VkglTestCase_001378_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001378_2 ".vector_swizzles.mediump_vec2_rr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001378, VkglTestCase_001378_1, VkglTestCase_001378_2);

#define VkglTestCase_001379_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001379_2 "vector_swizzles.mediump_vec2_rr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001379, VkglTestCase_001379_1, VkglTestCase_001379_2);

#define VkglTestCase_001380_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001380_2 ".vector_swizzles.mediump_vec2_rg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001380, VkglTestCase_001380_1, VkglTestCase_001380_2);

#define VkglTestCase_001381_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001381_2 "vector_swizzles.mediump_vec2_rg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001381, VkglTestCase_001381_1, VkglTestCase_001381_2);

#define VkglTestCase_001382_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001382_2 ".vector_swizzles.mediump_vec2_gr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001382, VkglTestCase_001382_1, VkglTestCase_001382_2);

#define VkglTestCase_001383_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001383_2 "vector_swizzles.mediump_vec2_gr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001383, VkglTestCase_001383_1, VkglTestCase_001383_2);

#define VkglTestCase_001384_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001384_2 "vector_swizzles.mediump_vec2_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001384, VkglTestCase_001384_1, VkglTestCase_001384_2);

#define VkglTestCase_001385_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001385_2 "ector_swizzles.mediump_vec2_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001385, VkglTestCase_001385_1, VkglTestCase_001385_2);

#define VkglTestCase_001386_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001386_2 "vector_swizzles.mediump_vec2_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001386, VkglTestCase_001386_1, VkglTestCase_001386_2);

#define VkglTestCase_001387_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001387_2 "ector_swizzles.mediump_vec2_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001387, VkglTestCase_001387_1, VkglTestCase_001387_2);

#define VkglTestCase_001388_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001388_2 "vector_swizzles.mediump_vec2_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001388, VkglTestCase_001388_1, VkglTestCase_001388_2);

#define VkglTestCase_001389_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001389_2 "ector_swizzles.mediump_vec2_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001389, VkglTestCase_001389_1, VkglTestCase_001389_2);

#define VkglTestCase_001390_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001390_2 ".vector_swizzles.mediump_vec3_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001390, VkglTestCase_001390_1, VkglTestCase_001390_2);

#define VkglTestCase_001391_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001391_2 "vector_swizzles.mediump_vec3_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001391, VkglTestCase_001391_1, VkglTestCase_001391_2);

#define VkglTestCase_001392_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001392_2 ".vector_swizzles.mediump_vec3_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001392, VkglTestCase_001392_1, VkglTestCase_001392_2);

#define VkglTestCase_001393_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001393_2 "vector_swizzles.mediump_vec3_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001393, VkglTestCase_001393_1, VkglTestCase_001393_2);

#define VkglTestCase_001394_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001394_2 ".vector_swizzles.mediump_vec3_xz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001394, VkglTestCase_001394_1, VkglTestCase_001394_2);

#define VkglTestCase_001395_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001395_2 "vector_swizzles.mediump_vec3_xz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001395, VkglTestCase_001395_1, VkglTestCase_001395_2);

#define VkglTestCase_001396_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001396_2 ".vector_swizzles.mediump_vec3_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001396, VkglTestCase_001396_1, VkglTestCase_001396_2);

#define VkglTestCase_001397_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001397_2 "vector_swizzles.mediump_vec3_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001397, VkglTestCase_001397_1, VkglTestCase_001397_2);

#define VkglTestCase_001398_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001398_2 "vector_swizzles.mediump_vec3_xyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001398, VkglTestCase_001398_1, VkglTestCase_001398_2);

#define VkglTestCase_001399_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001399_2 "ector_swizzles.mediump_vec3_xyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001399, VkglTestCase_001399_1, VkglTestCase_001399_2);

#define VkglTestCase_001400_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001400_2 "vector_swizzles.mediump_vec3_zyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001400, VkglTestCase_001400_1, VkglTestCase_001400_2);

#define VkglTestCase_001401_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001401_2 "ector_swizzles.mediump_vec3_zyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001401, VkglTestCase_001401_1, VkglTestCase_001401_2);

#define VkglTestCase_001402_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001402_2 "vector_swizzles.mediump_vec3_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001402, VkglTestCase_001402_1, VkglTestCase_001402_2);

#define VkglTestCase_001403_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001403_2 "ector_swizzles.mediump_vec3_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001403, VkglTestCase_001403_1, VkglTestCase_001403_2);

#define VkglTestCase_001404_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001404_2 "vector_swizzles.mediump_vec3_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001404, VkglTestCase_001404_1, VkglTestCase_001404_2);

#define VkglTestCase_001405_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001405_2 "ector_swizzles.mediump_vec3_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001405, VkglTestCase_001405_1, VkglTestCase_001405_2);

#define VkglTestCase_001406_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001406_2 "vector_swizzles.mediump_vec3_zzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001406, VkglTestCase_001406_1, VkglTestCase_001406_2);

#define VkglTestCase_001407_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001407_2 "ector_swizzles.mediump_vec3_zzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001407, VkglTestCase_001407_1, VkglTestCase_001407_2);

#define VkglTestCase_001408_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001408_2 "vector_swizzles.mediump_vec3_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001408, VkglTestCase_001408_1, VkglTestCase_001408_2);

#define VkglTestCase_001409_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001409_2 "ector_swizzles.mediump_vec3_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001409, VkglTestCase_001409_1, VkglTestCase_001409_2);

#define VkglTestCase_001410_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001410_2 "vector_swizzles.mediump_vec3_xzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001410, VkglTestCase_001410_1, VkglTestCase_001410_2);

#define VkglTestCase_001411_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001411_2 "ector_swizzles.mediump_vec3_xzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001411, VkglTestCase_001411_1, VkglTestCase_001411_2);

#define VkglTestCase_001412_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001412_2 "vector_swizzles.mediump_vec3_xyyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001412, VkglTestCase_001412_1, VkglTestCase_001412_2);

#define VkglTestCase_001413_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001413_2 "ector_swizzles.mediump_vec3_xyyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001413, VkglTestCase_001413_1, VkglTestCase_001413_2);

#define VkglTestCase_001414_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001414_2 "vector_swizzles.mediump_vec3_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001414, VkglTestCase_001414_1, VkglTestCase_001414_2);

#define VkglTestCase_001415_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001415_2 "ector_swizzles.mediump_vec3_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001415, VkglTestCase_001415_1, VkglTestCase_001415_2);

#define VkglTestCase_001416_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001416_2 ".vector_swizzles.mediump_vec3_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001416, VkglTestCase_001416_1, VkglTestCase_001416_2);

#define VkglTestCase_001417_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001417_2 "vector_swizzles.mediump_vec3_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001417, VkglTestCase_001417_1, VkglTestCase_001417_2);

#define VkglTestCase_001418_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001418_2 ".vector_swizzles.mediump_vec3_p_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001418, VkglTestCase_001418_1, VkglTestCase_001418_2);

#define VkglTestCase_001419_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001419_2 "vector_swizzles.mediump_vec3_p_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001419, VkglTestCase_001419_1, VkglTestCase_001419_2);

#define VkglTestCase_001420_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001420_2 ".vector_swizzles.mediump_vec3_sp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001420, VkglTestCase_001420_1, VkglTestCase_001420_2);

#define VkglTestCase_001421_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001421_2 "vector_swizzles.mediump_vec3_sp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001421, VkglTestCase_001421_1, VkglTestCase_001421_2);

#define VkglTestCase_001422_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001422_2 ".vector_swizzles.mediump_vec3_pp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001422, VkglTestCase_001422_1, VkglTestCase_001422_2);

#define VkglTestCase_001423_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001423_2 "vector_swizzles.mediump_vec3_pp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001423, VkglTestCase_001423_1, VkglTestCase_001423_2);

#define VkglTestCase_001424_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001424_2 "vector_swizzles.mediump_vec3_stp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001424, VkglTestCase_001424_1, VkglTestCase_001424_2);

#define VkglTestCase_001425_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001425_2 "ector_swizzles.mediump_vec3_stp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001425, VkglTestCase_001425_1, VkglTestCase_001425_2);

#define VkglTestCase_001426_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001426_2 "vector_swizzles.mediump_vec3_pts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001426, VkglTestCase_001426_1, VkglTestCase_001426_2);

#define VkglTestCase_001427_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001427_2 "ector_swizzles.mediump_vec3_pts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001427, VkglTestCase_001427_1, VkglTestCase_001427_2);

#define VkglTestCase_001428_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001428_2 "vector_swizzles.mediump_vec3_sss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001428, VkglTestCase_001428_1, VkglTestCase_001428_2);

#define VkglTestCase_001429_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001429_2 "ector_swizzles.mediump_vec3_sss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001429, VkglTestCase_001429_1, VkglTestCase_001429_2);

#define VkglTestCase_001430_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001430_2 "vector_swizzles.mediump_vec3_ppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001430, VkglTestCase_001430_1, VkglTestCase_001430_2);

#define VkglTestCase_001431_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001431_2 "ector_swizzles.mediump_vec3_ppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001431, VkglTestCase_001431_1, VkglTestCase_001431_2);

#define VkglTestCase_001432_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001432_2 "vector_swizzles.mediump_vec3_ppt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001432, VkglTestCase_001432_1, VkglTestCase_001432_2);

#define VkglTestCase_001433_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001433_2 "ector_swizzles.mediump_vec3_ppt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001433, VkglTestCase_001433_1, VkglTestCase_001433_2);

#define VkglTestCase_001434_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001434_2 "vector_swizzles.mediump_vec3_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001434, VkglTestCase_001434_1, VkglTestCase_001434_2);

#define VkglTestCase_001435_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001435_2 "ector_swizzles.mediump_vec3_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001435, VkglTestCase_001435_1, VkglTestCase_001435_2);

#define VkglTestCase_001436_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001436_2 "vector_swizzles.mediump_vec3_sps_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001436, VkglTestCase_001436_1, VkglTestCase_001436_2);

#define VkglTestCase_001437_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001437_2 "ector_swizzles.mediump_vec3_sps_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001437, VkglTestCase_001437_1, VkglTestCase_001437_2);

#define VkglTestCase_001438_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001438_2 "vector_swizzles.mediump_vec3_stts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001438, VkglTestCase_001438_1, VkglTestCase_001438_2);

#define VkglTestCase_001439_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001439_2 "ector_swizzles.mediump_vec3_stts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001439, VkglTestCase_001439_1, VkglTestCase_001439_2);

#define VkglTestCase_001440_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001440_2 "vector_swizzles.mediump_vec3_pppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001440, VkglTestCase_001440_1, VkglTestCase_001440_2);

#define VkglTestCase_001441_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001441_2 "ector_swizzles.mediump_vec3_pppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001441, VkglTestCase_001441_1, VkglTestCase_001441_2);

#define VkglTestCase_001442_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001442_2 ".vector_swizzles.mediump_vec3_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001442, VkglTestCase_001442_1, VkglTestCase_001442_2);

#define VkglTestCase_001443_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001443_2 "vector_swizzles.mediump_vec3_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001443, VkglTestCase_001443_1, VkglTestCase_001443_2);

#define VkglTestCase_001444_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001444_2 ".vector_swizzles.mediump_vec3_b_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001444, VkglTestCase_001444_1, VkglTestCase_001444_2);

#define VkglTestCase_001445_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001445_2 "vector_swizzles.mediump_vec3_b_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001445, VkglTestCase_001445_1, VkglTestCase_001445_2);

#define VkglTestCase_001446_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001446_2 ".vector_swizzles.mediump_vec3_rb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001446, VkglTestCase_001446_1, VkglTestCase_001446_2);

#define VkglTestCase_001447_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001447_2 "vector_swizzles.mediump_vec3_rb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001447, VkglTestCase_001447_1, VkglTestCase_001447_2);

#define VkglTestCase_001448_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001448_2 ".vector_swizzles.mediump_vec3_bb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001448, VkglTestCase_001448_1, VkglTestCase_001448_2);

#define VkglTestCase_001449_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001449_2 "vector_swizzles.mediump_vec3_bb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001449, VkglTestCase_001449_1, VkglTestCase_001449_2);

#define VkglTestCase_001450_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001450_2 "vector_swizzles.mediump_vec3_rgb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001450, VkglTestCase_001450_1, VkglTestCase_001450_2);

#define VkglTestCase_001451_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001451_2 "ector_swizzles.mediump_vec3_rgb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001451, VkglTestCase_001451_1, VkglTestCase_001451_2);

#define VkglTestCase_001452_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001452_2 "vector_swizzles.mediump_vec3_bgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001452, VkglTestCase_001452_1, VkglTestCase_001452_2);

#define VkglTestCase_001453_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001453_2 "ector_swizzles.mediump_vec3_bgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001453, VkglTestCase_001453_1, VkglTestCase_001453_2);

#define VkglTestCase_001454_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001454_2 "vector_swizzles.mediump_vec3_rrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001454, VkglTestCase_001454_1, VkglTestCase_001454_2);

#define VkglTestCase_001455_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001455_2 "ector_swizzles.mediump_vec3_rrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001455, VkglTestCase_001455_1, VkglTestCase_001455_2);

#define VkglTestCase_001456_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001456_2 "vector_swizzles.mediump_vec3_bbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001456, VkglTestCase_001456_1, VkglTestCase_001456_2);

#define VkglTestCase_001457_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001457_2 "ector_swizzles.mediump_vec3_bbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001457, VkglTestCase_001457_1, VkglTestCase_001457_2);

#define VkglTestCase_001458_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001458_2 "vector_swizzles.mediump_vec3_bbg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001458, VkglTestCase_001458_1, VkglTestCase_001458_2);

#define VkglTestCase_001459_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001459_2 "ector_swizzles.mediump_vec3_bbg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001459, VkglTestCase_001459_1, VkglTestCase_001459_2);

#define VkglTestCase_001460_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001460_2 "vector_swizzles.mediump_vec3_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001460, VkglTestCase_001460_1, VkglTestCase_001460_2);

#define VkglTestCase_001461_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001461_2 "ector_swizzles.mediump_vec3_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001461, VkglTestCase_001461_1, VkglTestCase_001461_2);

#define VkglTestCase_001462_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001462_2 "vector_swizzles.mediump_vec3_rbr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001462, VkglTestCase_001462_1, VkglTestCase_001462_2);

#define VkglTestCase_001463_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001463_2 "ector_swizzles.mediump_vec3_rbr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001463, VkglTestCase_001463_1, VkglTestCase_001463_2);

#define VkglTestCase_001464_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001464_2 "vector_swizzles.mediump_vec3_rggr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001464, VkglTestCase_001464_1, VkglTestCase_001464_2);

#define VkglTestCase_001465_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001465_2 "ector_swizzles.mediump_vec3_rggr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001465, VkglTestCase_001465_1, VkglTestCase_001465_2);

#define VkglTestCase_001466_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001466_2 "vector_swizzles.mediump_vec3_bbbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001466, VkglTestCase_001466_1, VkglTestCase_001466_2);

#define VkglTestCase_001467_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001467_2 "ector_swizzles.mediump_vec3_bbbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001467, VkglTestCase_001467_1, VkglTestCase_001467_2);

#define VkglTestCase_001468_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001468_2 ".vector_swizzles.mediump_vec4_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001468, VkglTestCase_001468_1, VkglTestCase_001468_2);

#define VkglTestCase_001469_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001469_2 "vector_swizzles.mediump_vec4_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001469, VkglTestCase_001469_1, VkglTestCase_001469_2);

#define VkglTestCase_001470_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001470_2 ".vector_swizzles.mediump_vec4_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001470, VkglTestCase_001470_1, VkglTestCase_001470_2);

#define VkglTestCase_001471_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001471_2 "vector_swizzles.mediump_vec4_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001471, VkglTestCase_001471_1, VkglTestCase_001471_2);

#define VkglTestCase_001472_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001472_2 ".vector_swizzles.mediump_vec4_wx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001472, VkglTestCase_001472_1, VkglTestCase_001472_2);

#define VkglTestCase_001473_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001473_2 "vector_swizzles.mediump_vec4_wx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001473, VkglTestCase_001473_1, VkglTestCase_001473_2);

#define VkglTestCase_001474_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001474_2 ".vector_swizzles.mediump_vec4_wz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001474, VkglTestCase_001474_1, VkglTestCase_001474_2);

#define VkglTestCase_001475_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001475_2 "vector_swizzles.mediump_vec4_wz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001475, VkglTestCase_001475_1, VkglTestCase_001475_2);

#define VkglTestCase_001476_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001476_2 "vector_swizzles.mediump_vec4_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001476, VkglTestCase_001476_1, VkglTestCase_001476_2);

#define VkglTestCase_001477_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001477_2 "ector_swizzles.mediump_vec4_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001477, VkglTestCase_001477_1, VkglTestCase_001477_2);

#define VkglTestCase_001478_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001478_2 "vector_swizzles.mediump_vec4_yyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001478, VkglTestCase_001478_1, VkglTestCase_001478_2);

#define VkglTestCase_001479_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001479_2 "ector_swizzles.mediump_vec4_yyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001479, VkglTestCase_001479_1, VkglTestCase_001479_2);

#define VkglTestCase_001480_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001480_2 "vector_swizzles.mediump_vec4_wzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001480, VkglTestCase_001480_1, VkglTestCase_001480_2);

#define VkglTestCase_001481_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001481_2 "ector_swizzles.mediump_vec4_wzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001481, VkglTestCase_001481_1, VkglTestCase_001481_2);

#define VkglTestCase_001482_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001482_2 "vector_swizzles.mediump_vec4_xyzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001482, VkglTestCase_001482_1, VkglTestCase_001482_2);

#define VkglTestCase_001483_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001483_2 "ector_swizzles.mediump_vec4_xyzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001483, VkglTestCase_001483_1, VkglTestCase_001483_2);

#define VkglTestCase_001484_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001484_2 "vector_swizzles.mediump_vec4_wzyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001484, VkglTestCase_001484_1, VkglTestCase_001484_2);

#define VkglTestCase_001485_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001485_2 "ector_swizzles.mediump_vec4_wzyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001485, VkglTestCase_001485_1, VkglTestCase_001485_2);

#define VkglTestCase_001486_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001486_2 "vector_swizzles.mediump_vec4_xxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001486, VkglTestCase_001486_1, VkglTestCase_001486_2);

#define VkglTestCase_001487_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001487_2 "ector_swizzles.mediump_vec4_xxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001487, VkglTestCase_001487_1, VkglTestCase_001487_2);

#define VkglTestCase_001488_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001488_2 "vector_swizzles.mediump_vec4_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001488, VkglTestCase_001488_1, VkglTestCase_001488_2);

#define VkglTestCase_001489_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001489_2 "ector_swizzles.mediump_vec4_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001489, VkglTestCase_001489_1, VkglTestCase_001489_2);

#define VkglTestCase_001490_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001490_2 "vector_swizzles.mediump_vec4_wwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001490, VkglTestCase_001490_1, VkglTestCase_001490_2);

#define VkglTestCase_001491_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001491_2 "ector_swizzles.mediump_vec4_wwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001491, VkglTestCase_001491_1, VkglTestCase_001491_2);

#define VkglTestCase_001492_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001492_2 "vector_swizzles.mediump_vec4_wzzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001492, VkglTestCase_001492_1, VkglTestCase_001492_2);

#define VkglTestCase_001493_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001493_2 "ector_swizzles.mediump_vec4_wzzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001493, VkglTestCase_001493_1, VkglTestCase_001493_2);

#define VkglTestCase_001494_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001494_2 "vector_swizzles.mediump_vec4_wwwy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001494, VkglTestCase_001494_1, VkglTestCase_001494_2);

#define VkglTestCase_001495_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001495_2 "ector_swizzles.mediump_vec4_wwwy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001495, VkglTestCase_001495_1, VkglTestCase_001495_2);

#define VkglTestCase_001496_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001496_2 "vector_swizzles.mediump_vec4_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001496, VkglTestCase_001496_1, VkglTestCase_001496_2);

#define VkglTestCase_001497_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001497_2 "ector_swizzles.mediump_vec4_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001497, VkglTestCase_001497_1, VkglTestCase_001497_2);

#define VkglTestCase_001498_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001498_2 "vector_swizzles.mediump_vec4_zzwz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001498, VkglTestCase_001498_1, VkglTestCase_001498_2);

#define VkglTestCase_001499_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001499_2 "ector_swizzles.mediump_vec4_zzwz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001499, VkglTestCase_001499_1, VkglTestCase_001499_2);

#define VkglTestCase_001500_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001500_2 ".vector_swizzles.mediump_vec4_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001500, VkglTestCase_001500_1, VkglTestCase_001500_2);

#define VkglTestCase_001501_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001501_2 "vector_swizzles.mediump_vec4_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001501, VkglTestCase_001501_1, VkglTestCase_001501_2);

#define VkglTestCase_001502_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001502_2 ".vector_swizzles.mediump_vec4_q_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001502, VkglTestCase_001502_1, VkglTestCase_001502_2);

#define VkglTestCase_001503_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001503_2 "vector_swizzles.mediump_vec4_q_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001503, VkglTestCase_001503_1, VkglTestCase_001503_2);

#define VkglTestCase_001504_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001504_2 ".vector_swizzles.mediump_vec4_qs_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001504, VkglTestCase_001504_1, VkglTestCase_001504_2);

#define VkglTestCase_001505_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001505_2 "vector_swizzles.mediump_vec4_qs_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001505, VkglTestCase_001505_1, VkglTestCase_001505_2);

#define VkglTestCase_001506_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001506_2 ".vector_swizzles.mediump_vec4_qp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001506, VkglTestCase_001506_1, VkglTestCase_001506_2);

#define VkglTestCase_001507_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001507_2 "vector_swizzles.mediump_vec4_qp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001507, VkglTestCase_001507_1, VkglTestCase_001507_2);

#define VkglTestCase_001508_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001508_2 "vector_swizzles.mediump_vec4_qqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001508, VkglTestCase_001508_1, VkglTestCase_001508_2);

#define VkglTestCase_001509_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001509_2 "ector_swizzles.mediump_vec4_qqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001509, VkglTestCase_001509_1, VkglTestCase_001509_2);

#define VkglTestCase_001510_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001510_2 "vector_swizzles.mediump_vec4_ttq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001510, VkglTestCase_001510_1, VkglTestCase_001510_2);

#define VkglTestCase_001511_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001511_2 "ector_swizzles.mediump_vec4_ttq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001511, VkglTestCase_001511_1, VkglTestCase_001511_2);

#define VkglTestCase_001512_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001512_2 "vector_swizzles.mediump_vec4_qpt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001512, VkglTestCase_001512_1, VkglTestCase_001512_2);

#define VkglTestCase_001513_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001513_2 "ector_swizzles.mediump_vec4_qpt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001513, VkglTestCase_001513_1, VkglTestCase_001513_2);

#define VkglTestCase_001514_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001514_2 "vector_swizzles.mediump_vec4_stpq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001514, VkglTestCase_001514_1, VkglTestCase_001514_2);

#define VkglTestCase_001515_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001515_2 "ector_swizzles.mediump_vec4_stpq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001515, VkglTestCase_001515_1, VkglTestCase_001515_2);

#define VkglTestCase_001516_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001516_2 "vector_swizzles.mediump_vec4_qpts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001516, VkglTestCase_001516_1, VkglTestCase_001516_2);

#define VkglTestCase_001517_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001517_2 "ector_swizzles.mediump_vec4_qpts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001517, VkglTestCase_001517_1, VkglTestCase_001517_2);

#define VkglTestCase_001518_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001518_2 "vector_swizzles.mediump_vec4_ssss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001518, VkglTestCase_001518_1, VkglTestCase_001518_2);

#define VkglTestCase_001519_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001519_2 "ector_swizzles.mediump_vec4_ssss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001519, VkglTestCase_001519_1, VkglTestCase_001519_2);

#define VkglTestCase_001520_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001520_2 "vector_swizzles.mediump_vec4_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001520, VkglTestCase_001520_1, VkglTestCase_001520_2);

#define VkglTestCase_001521_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001521_2 "ector_swizzles.mediump_vec4_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001521, VkglTestCase_001521_1, VkglTestCase_001521_2);

#define VkglTestCase_001522_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001522_2 "vector_swizzles.mediump_vec4_qqqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001522, VkglTestCase_001522_1, VkglTestCase_001522_2);

#define VkglTestCase_001523_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001523_2 "ector_swizzles.mediump_vec4_qqqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001523, VkglTestCase_001523_1, VkglTestCase_001523_2);

#define VkglTestCase_001524_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001524_2 "vector_swizzles.mediump_vec4_qppq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001524, VkglTestCase_001524_1, VkglTestCase_001524_2);

#define VkglTestCase_001525_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001525_2 "ector_swizzles.mediump_vec4_qppq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001525, VkglTestCase_001525_1, VkglTestCase_001525_2);

#define VkglTestCase_001526_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001526_2 "vector_swizzles.mediump_vec4_qqqt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001526, VkglTestCase_001526_1, VkglTestCase_001526_2);

#define VkglTestCase_001527_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001527_2 "ector_swizzles.mediump_vec4_qqqt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001527, VkglTestCase_001527_1, VkglTestCase_001527_2);

#define VkglTestCase_001528_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001528_2 "vector_swizzles.mediump_vec4_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001528, VkglTestCase_001528_1, VkglTestCase_001528_2);

#define VkglTestCase_001529_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001529_2 "ector_swizzles.mediump_vec4_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001529, VkglTestCase_001529_1, VkglTestCase_001529_2);

#define VkglTestCase_001530_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001530_2 "vector_swizzles.mediump_vec4_ppqp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001530, VkglTestCase_001530_1, VkglTestCase_001530_2);

#define VkglTestCase_001531_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001531_2 "ector_swizzles.mediump_vec4_ppqp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001531, VkglTestCase_001531_1, VkglTestCase_001531_2);

#define VkglTestCase_001532_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001532_2 ".vector_swizzles.mediump_vec4_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001532, VkglTestCase_001532_1, VkglTestCase_001532_2);

#define VkglTestCase_001533_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001533_2 "vector_swizzles.mediump_vec4_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001533, VkglTestCase_001533_1, VkglTestCase_001533_2);

#define VkglTestCase_001534_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001534_2 ".vector_swizzles.mediump_vec4_a_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001534, VkglTestCase_001534_1, VkglTestCase_001534_2);

#define VkglTestCase_001535_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001535_2 "vector_swizzles.mediump_vec4_a_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001535, VkglTestCase_001535_1, VkglTestCase_001535_2);

#define VkglTestCase_001536_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001536_2 ".vector_swizzles.mediump_vec4_ar_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001536, VkglTestCase_001536_1, VkglTestCase_001536_2);

#define VkglTestCase_001537_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001537_2 "vector_swizzles.mediump_vec4_ar_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001537, VkglTestCase_001537_1, VkglTestCase_001537_2);

#define VkglTestCase_001538_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001538_2 ".vector_swizzles.mediump_vec4_ab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001538, VkglTestCase_001538_1, VkglTestCase_001538_2);

#define VkglTestCase_001539_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001539_2 "vector_swizzles.mediump_vec4_ab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001539, VkglTestCase_001539_1, VkglTestCase_001539_2);

#define VkglTestCase_001540_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001540_2 "vector_swizzles.mediump_vec4_aaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001540, VkglTestCase_001540_1, VkglTestCase_001540_2);

#define VkglTestCase_001541_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001541_2 "ector_swizzles.mediump_vec4_aaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001541, VkglTestCase_001541_1, VkglTestCase_001541_2);

#define VkglTestCase_001542_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001542_2 "vector_swizzles.mediump_vec4_gga_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001542, VkglTestCase_001542_1, VkglTestCase_001542_2);

#define VkglTestCase_001543_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001543_2 "ector_swizzles.mediump_vec4_gga_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001543, VkglTestCase_001543_1, VkglTestCase_001543_2);

#define VkglTestCase_001544_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001544_2 "vector_swizzles.mediump_vec4_abg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001544, VkglTestCase_001544_1, VkglTestCase_001544_2);

#define VkglTestCase_001545_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001545_2 "ector_swizzles.mediump_vec4_abg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001545, VkglTestCase_001545_1, VkglTestCase_001545_2);

#define VkglTestCase_001546_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001546_2 "vector_swizzles.mediump_vec4_rgba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001546, VkglTestCase_001546_1, VkglTestCase_001546_2);

#define VkglTestCase_001547_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001547_2 "ector_swizzles.mediump_vec4_rgba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001547, VkglTestCase_001547_1, VkglTestCase_001547_2);

#define VkglTestCase_001548_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001548_2 "vector_swizzles.mediump_vec4_abgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001548, VkglTestCase_001548_1, VkglTestCase_001548_2);

#define VkglTestCase_001549_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001549_2 "ector_swizzles.mediump_vec4_abgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001549, VkglTestCase_001549_1, VkglTestCase_001549_2);

#define VkglTestCase_001550_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001550_2 "vector_swizzles.mediump_vec4_rrrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001550, VkglTestCase_001550_1, VkglTestCase_001550_2);

#define VkglTestCase_001551_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001551_2 "ector_swizzles.mediump_vec4_rrrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001551, VkglTestCase_001551_1, VkglTestCase_001551_2);

#define VkglTestCase_001552_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001552_2 "vector_swizzles.mediump_vec4_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001552, VkglTestCase_001552_1, VkglTestCase_001552_2);

#define VkglTestCase_001553_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001553_2 "ector_swizzles.mediump_vec4_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001553, VkglTestCase_001553_1, VkglTestCase_001553_2);

#define VkglTestCase_001554_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001554_2 "vector_swizzles.mediump_vec4_aaaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001554, VkglTestCase_001554_1, VkglTestCase_001554_2);

#define VkglTestCase_001555_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001555_2 "ector_swizzles.mediump_vec4_aaaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001555, VkglTestCase_001555_1, VkglTestCase_001555_2);

#define VkglTestCase_001556_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001556_2 "vector_swizzles.mediump_vec4_abba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001556, VkglTestCase_001556_1, VkglTestCase_001556_2);

#define VkglTestCase_001557_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001557_2 "ector_swizzles.mediump_vec4_abba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001557, VkglTestCase_001557_1, VkglTestCase_001557_2);

#define VkglTestCase_001558_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001558_2 "vector_swizzles.mediump_vec4_aaag_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001558, VkglTestCase_001558_1, VkglTestCase_001558_2);

#define VkglTestCase_001559_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001559_2 "ector_swizzles.mediump_vec4_aaag_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001559, VkglTestCase_001559_1, VkglTestCase_001559_2);

#define VkglTestCase_001560_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001560_2 "vector_swizzles.mediump_vec4_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001560, VkglTestCase_001560_1, VkglTestCase_001560_2);

#define VkglTestCase_001561_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001561_2 "ector_swizzles.mediump_vec4_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001561, VkglTestCase_001561_1, VkglTestCase_001561_2);

#define VkglTestCase_001562_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001562_2 "vector_swizzles.mediump_vec4_bbab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001562, VkglTestCase_001562_1, VkglTestCase_001562_2);

#define VkglTestCase_001563_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001563_2 "ector_swizzles.mediump_vec4_bbab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001563, VkglTestCase_001563_1, VkglTestCase_001563_2);

#define VkglTestCase_001564_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001564_2 ".vector_swizzles.mediump_ivec2_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001564, VkglTestCase_001564_1, VkglTestCase_001564_2);

#define VkglTestCase_001565_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001565_2 "vector_swizzles.mediump_ivec2_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001565, VkglTestCase_001565_1, VkglTestCase_001565_2);

#define VkglTestCase_001566_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001566_2 "vector_swizzles.mediump_ivec2_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001566, VkglTestCase_001566_1, VkglTestCase_001566_2);

#define VkglTestCase_001567_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001567_2 "ector_swizzles.mediump_ivec2_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001567, VkglTestCase_001567_1, VkglTestCase_001567_2);

#define VkglTestCase_001568_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001568_2 "vector_swizzles.mediump_ivec2_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001568, VkglTestCase_001568_1, VkglTestCase_001568_2);

#define VkglTestCase_001569_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001569_2 "ector_swizzles.mediump_ivec2_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001569, VkglTestCase_001569_1, VkglTestCase_001569_2);

#define VkglTestCase_001570_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001570_2 "vector_swizzles.mediump_ivec2_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001570, VkglTestCase_001570_1, VkglTestCase_001570_2);

#define VkglTestCase_001571_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001571_2 "ector_swizzles.mediump_ivec2_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001571, VkglTestCase_001571_1, VkglTestCase_001571_2);

#define VkglTestCase_001572_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001572_2 "vector_swizzles.mediump_ivec2_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001572, VkglTestCase_001572_1, VkglTestCase_001572_2);

#define VkglTestCase_001573_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001573_2 "ector_swizzles.mediump_ivec2_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001573, VkglTestCase_001573_1, VkglTestCase_001573_2);

#define VkglTestCase_001574_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001574_2 "ector_swizzles.mediump_ivec2_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001574, VkglTestCase_001574_1, VkglTestCase_001574_2);

#define VkglTestCase_001575_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001575_2 "ctor_swizzles.mediump_ivec2_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001575, VkglTestCase_001575_1, VkglTestCase_001575_2);

#define VkglTestCase_001576_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001576_2 "ector_swizzles.mediump_ivec2_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001576, VkglTestCase_001576_1, VkglTestCase_001576_2);

#define VkglTestCase_001577_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001577_2 "ctor_swizzles.mediump_ivec2_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001577, VkglTestCase_001577_1, VkglTestCase_001577_2);

#define VkglTestCase_001578_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001578_2 ".vector_swizzles.mediump_ivec2_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001578, VkglTestCase_001578_1, VkglTestCase_001578_2);

#define VkglTestCase_001579_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001579_2 "vector_swizzles.mediump_ivec2_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001579, VkglTestCase_001579_1, VkglTestCase_001579_2);

#define VkglTestCase_001580_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001580_2 "vector_swizzles.mediump_ivec2_ss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001580, VkglTestCase_001580_1, VkglTestCase_001580_2);

#define VkglTestCase_001581_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001581_2 "ector_swizzles.mediump_ivec2_ss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001581, VkglTestCase_001581_1, VkglTestCase_001581_2);

#define VkglTestCase_001582_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001582_2 "vector_swizzles.mediump_ivec2_st_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001582, VkglTestCase_001582_1, VkglTestCase_001582_2);

#define VkglTestCase_001583_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001583_2 "ector_swizzles.mediump_ivec2_st_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001583, VkglTestCase_001583_1, VkglTestCase_001583_2);

#define VkglTestCase_001584_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001584_2 "vector_swizzles.mediump_ivec2_ts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001584, VkglTestCase_001584_1, VkglTestCase_001584_2);

#define VkglTestCase_001585_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001585_2 "ector_swizzles.mediump_ivec2_ts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001585, VkglTestCase_001585_1, VkglTestCase_001585_2);

#define VkglTestCase_001586_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001586_2 "vector_swizzles.mediump_ivec2_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001586, VkglTestCase_001586_1, VkglTestCase_001586_2);

#define VkglTestCase_001587_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001587_2 "ector_swizzles.mediump_ivec2_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001587, VkglTestCase_001587_1, VkglTestCase_001587_2);

#define VkglTestCase_001588_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001588_2 "ector_swizzles.mediump_ivec2_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001588, VkglTestCase_001588_1, VkglTestCase_001588_2);

#define VkglTestCase_001589_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001589_2 "ctor_swizzles.mediump_ivec2_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001589, VkglTestCase_001589_1, VkglTestCase_001589_2);

#define VkglTestCase_001590_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001590_2 "ector_swizzles.mediump_ivec2_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001590, VkglTestCase_001590_1, VkglTestCase_001590_2);

#define VkglTestCase_001591_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001591_2 "ctor_swizzles.mediump_ivec2_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001591, VkglTestCase_001591_1, VkglTestCase_001591_2);

#define VkglTestCase_001592_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001592_2 ".vector_swizzles.mediump_ivec2_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001592, VkglTestCase_001592_1, VkglTestCase_001592_2);

#define VkglTestCase_001593_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001593_2 "vector_swizzles.mediump_ivec2_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001593, VkglTestCase_001593_1, VkglTestCase_001593_2);

#define VkglTestCase_001594_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001594_2 "vector_swizzles.mediump_ivec2_rr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001594, VkglTestCase_001594_1, VkglTestCase_001594_2);

#define VkglTestCase_001595_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001595_2 "ector_swizzles.mediump_ivec2_rr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001595, VkglTestCase_001595_1, VkglTestCase_001595_2);

#define VkglTestCase_001596_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001596_2 "vector_swizzles.mediump_ivec2_rg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001596, VkglTestCase_001596_1, VkglTestCase_001596_2);

#define VkglTestCase_001597_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001597_2 "ector_swizzles.mediump_ivec2_rg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001597, VkglTestCase_001597_1, VkglTestCase_001597_2);

#define VkglTestCase_001598_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001598_2 "vector_swizzles.mediump_ivec2_gr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001598, VkglTestCase_001598_1, VkglTestCase_001598_2);

#define VkglTestCase_001599_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001599_2 "ector_swizzles.mediump_ivec2_gr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001599, VkglTestCase_001599_1, VkglTestCase_001599_2);

#define VkglTestCase_001600_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001600_2 "vector_swizzles.mediump_ivec2_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001600, VkglTestCase_001600_1, VkglTestCase_001600_2);

#define VkglTestCase_001601_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001601_2 "ector_swizzles.mediump_ivec2_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001601, VkglTestCase_001601_1, VkglTestCase_001601_2);

#define VkglTestCase_001602_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001602_2 "ector_swizzles.mediump_ivec2_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001602, VkglTestCase_001602_1, VkglTestCase_001602_2);

#define VkglTestCase_001603_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001603_2 "ctor_swizzles.mediump_ivec2_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001603, VkglTestCase_001603_1, VkglTestCase_001603_2);

#define VkglTestCase_001604_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001604_2 "ector_swizzles.mediump_ivec2_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001604, VkglTestCase_001604_1, VkglTestCase_001604_2);

#define VkglTestCase_001605_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001605_2 "ctor_swizzles.mediump_ivec2_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001605, VkglTestCase_001605_1, VkglTestCase_001605_2);

#define VkglTestCase_001606_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001606_2 ".vector_swizzles.mediump_ivec3_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001606, VkglTestCase_001606_1, VkglTestCase_001606_2);

#define VkglTestCase_001607_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001607_2 "vector_swizzles.mediump_ivec3_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001607, VkglTestCase_001607_1, VkglTestCase_001607_2);

#define VkglTestCase_001608_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001608_2 ".vector_swizzles.mediump_ivec3_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001608, VkglTestCase_001608_1, VkglTestCase_001608_2);

#define VkglTestCase_001609_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001609_2 "vector_swizzles.mediump_ivec3_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001609, VkglTestCase_001609_1, VkglTestCase_001609_2);

#define VkglTestCase_001610_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001610_2 "vector_swizzles.mediump_ivec3_xz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001610, VkglTestCase_001610_1, VkglTestCase_001610_2);

#define VkglTestCase_001611_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001611_2 "ector_swizzles.mediump_ivec3_xz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001611, VkglTestCase_001611_1, VkglTestCase_001611_2);

#define VkglTestCase_001612_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001612_2 "vector_swizzles.mediump_ivec3_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001612, VkglTestCase_001612_1, VkglTestCase_001612_2);

#define VkglTestCase_001613_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001613_2 "ector_swizzles.mediump_ivec3_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001613, VkglTestCase_001613_1, VkglTestCase_001613_2);

#define VkglTestCase_001614_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001614_2 "vector_swizzles.mediump_ivec3_xyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001614, VkglTestCase_001614_1, VkglTestCase_001614_2);

#define VkglTestCase_001615_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001615_2 "ector_swizzles.mediump_ivec3_xyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001615, VkglTestCase_001615_1, VkglTestCase_001615_2);

#define VkglTestCase_001616_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001616_2 "vector_swizzles.mediump_ivec3_zyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001616, VkglTestCase_001616_1, VkglTestCase_001616_2);

#define VkglTestCase_001617_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001617_2 "ector_swizzles.mediump_ivec3_zyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001617, VkglTestCase_001617_1, VkglTestCase_001617_2);

#define VkglTestCase_001618_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001618_2 "vector_swizzles.mediump_ivec3_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001618, VkglTestCase_001618_1, VkglTestCase_001618_2);

#define VkglTestCase_001619_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001619_2 "ector_swizzles.mediump_ivec3_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001619, VkglTestCase_001619_1, VkglTestCase_001619_2);

#define VkglTestCase_001620_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001620_2 "vector_swizzles.mediump_ivec3_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001620, VkglTestCase_001620_1, VkglTestCase_001620_2);

#define VkglTestCase_001621_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001621_2 "ector_swizzles.mediump_ivec3_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001621, VkglTestCase_001621_1, VkglTestCase_001621_2);

#define VkglTestCase_001622_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001622_2 "vector_swizzles.mediump_ivec3_zzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001622, VkglTestCase_001622_1, VkglTestCase_001622_2);

#define VkglTestCase_001623_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001623_2 "ector_swizzles.mediump_ivec3_zzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001623, VkglTestCase_001623_1, VkglTestCase_001623_2);

#define VkglTestCase_001624_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001624_2 "vector_swizzles.mediump_ivec3_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001624, VkglTestCase_001624_1, VkglTestCase_001624_2);

#define VkglTestCase_001625_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001625_2 "ector_swizzles.mediump_ivec3_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001625, VkglTestCase_001625_1, VkglTestCase_001625_2);

#define VkglTestCase_001626_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001626_2 "vector_swizzles.mediump_ivec3_xzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001626, VkglTestCase_001626_1, VkglTestCase_001626_2);

#define VkglTestCase_001627_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001627_2 "ector_swizzles.mediump_ivec3_xzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001627, VkglTestCase_001627_1, VkglTestCase_001627_2);

#define VkglTestCase_001628_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001628_2 "ector_swizzles.mediump_ivec3_xyyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001628, VkglTestCase_001628_1, VkglTestCase_001628_2);

#define VkglTestCase_001629_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001629_2 "ctor_swizzles.mediump_ivec3_xyyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001629, VkglTestCase_001629_1, VkglTestCase_001629_2);

#define VkglTestCase_001630_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001630_2 "ector_swizzles.mediump_ivec3_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001630, VkglTestCase_001630_1, VkglTestCase_001630_2);

#define VkglTestCase_001631_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001631_2 "ctor_swizzles.mediump_ivec3_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001631, VkglTestCase_001631_1, VkglTestCase_001631_2);

#define VkglTestCase_001632_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001632_2 ".vector_swizzles.mediump_ivec3_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001632, VkglTestCase_001632_1, VkglTestCase_001632_2);

#define VkglTestCase_001633_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001633_2 "vector_swizzles.mediump_ivec3_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001633, VkglTestCase_001633_1, VkglTestCase_001633_2);

#define VkglTestCase_001634_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001634_2 ".vector_swizzles.mediump_ivec3_p_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001634, VkglTestCase_001634_1, VkglTestCase_001634_2);

#define VkglTestCase_001635_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001635_2 "vector_swizzles.mediump_ivec3_p_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001635, VkglTestCase_001635_1, VkglTestCase_001635_2);

#define VkglTestCase_001636_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001636_2 "vector_swizzles.mediump_ivec3_sp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001636, VkglTestCase_001636_1, VkglTestCase_001636_2);

#define VkglTestCase_001637_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001637_2 "ector_swizzles.mediump_ivec3_sp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001637, VkglTestCase_001637_1, VkglTestCase_001637_2);

#define VkglTestCase_001638_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001638_2 "vector_swizzles.mediump_ivec3_pp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001638, VkglTestCase_001638_1, VkglTestCase_001638_2);

#define VkglTestCase_001639_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001639_2 "ector_swizzles.mediump_ivec3_pp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001639, VkglTestCase_001639_1, VkglTestCase_001639_2);

#define VkglTestCase_001640_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001640_2 "vector_swizzles.mediump_ivec3_stp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001640, VkglTestCase_001640_1, VkglTestCase_001640_2);

#define VkglTestCase_001641_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001641_2 "ector_swizzles.mediump_ivec3_stp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001641, VkglTestCase_001641_1, VkglTestCase_001641_2);

#define VkglTestCase_001642_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001642_2 "vector_swizzles.mediump_ivec3_pts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001642, VkglTestCase_001642_1, VkglTestCase_001642_2);

#define VkglTestCase_001643_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001643_2 "ector_swizzles.mediump_ivec3_pts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001643, VkglTestCase_001643_1, VkglTestCase_001643_2);

#define VkglTestCase_001644_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001644_2 "vector_swizzles.mediump_ivec3_sss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001644, VkglTestCase_001644_1, VkglTestCase_001644_2);

#define VkglTestCase_001645_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001645_2 "ector_swizzles.mediump_ivec3_sss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001645, VkglTestCase_001645_1, VkglTestCase_001645_2);

#define VkglTestCase_001646_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001646_2 "vector_swizzles.mediump_ivec3_ppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001646, VkglTestCase_001646_1, VkglTestCase_001646_2);

#define VkglTestCase_001647_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001647_2 "ector_swizzles.mediump_ivec3_ppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001647, VkglTestCase_001647_1, VkglTestCase_001647_2);

#define VkglTestCase_001648_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001648_2 "vector_swizzles.mediump_ivec3_ppt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001648, VkglTestCase_001648_1, VkglTestCase_001648_2);

#define VkglTestCase_001649_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001649_2 "ector_swizzles.mediump_ivec3_ppt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001649, VkglTestCase_001649_1, VkglTestCase_001649_2);

#define VkglTestCase_001650_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001650_2 "vector_swizzles.mediump_ivec3_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001650, VkglTestCase_001650_1, VkglTestCase_001650_2);

#define VkglTestCase_001651_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001651_2 "ector_swizzles.mediump_ivec3_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001651, VkglTestCase_001651_1, VkglTestCase_001651_2);

#define VkglTestCase_001652_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001652_2 "vector_swizzles.mediump_ivec3_sps_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001652, VkglTestCase_001652_1, VkglTestCase_001652_2);

#define VkglTestCase_001653_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001653_2 "ector_swizzles.mediump_ivec3_sps_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001653, VkglTestCase_001653_1, VkglTestCase_001653_2);

#define VkglTestCase_001654_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001654_2 "ector_swizzles.mediump_ivec3_stts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001654, VkglTestCase_001654_1, VkglTestCase_001654_2);

#define VkglTestCase_001655_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001655_2 "ctor_swizzles.mediump_ivec3_stts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001655, VkglTestCase_001655_1, VkglTestCase_001655_2);

#define VkglTestCase_001656_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001656_2 "ector_swizzles.mediump_ivec3_pppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001656, VkglTestCase_001656_1, VkglTestCase_001656_2);

#define VkglTestCase_001657_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001657_2 "ctor_swizzles.mediump_ivec3_pppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001657, VkglTestCase_001657_1, VkglTestCase_001657_2);

#define VkglTestCase_001658_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001658_2 ".vector_swizzles.mediump_ivec3_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001658, VkglTestCase_001658_1, VkglTestCase_001658_2);

#define VkglTestCase_001659_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001659_2 "vector_swizzles.mediump_ivec3_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001659, VkglTestCase_001659_1, VkglTestCase_001659_2);

#define VkglTestCase_001660_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001660_2 ".vector_swizzles.mediump_ivec3_b_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001660, VkglTestCase_001660_1, VkglTestCase_001660_2);

#define VkglTestCase_001661_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001661_2 "vector_swizzles.mediump_ivec3_b_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001661, VkglTestCase_001661_1, VkglTestCase_001661_2);

#define VkglTestCase_001662_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001662_2 "vector_swizzles.mediump_ivec3_rb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001662, VkglTestCase_001662_1, VkglTestCase_001662_2);

#define VkglTestCase_001663_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001663_2 "ector_swizzles.mediump_ivec3_rb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001663, VkglTestCase_001663_1, VkglTestCase_001663_2);

#define VkglTestCase_001664_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001664_2 "vector_swizzles.mediump_ivec3_bb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001664, VkglTestCase_001664_1, VkglTestCase_001664_2);

#define VkglTestCase_001665_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001665_2 "ector_swizzles.mediump_ivec3_bb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001665, VkglTestCase_001665_1, VkglTestCase_001665_2);

#define VkglTestCase_001666_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001666_2 "vector_swizzles.mediump_ivec3_rgb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001666, VkglTestCase_001666_1, VkglTestCase_001666_2);

#define VkglTestCase_001667_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001667_2 "ector_swizzles.mediump_ivec3_rgb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001667, VkglTestCase_001667_1, VkglTestCase_001667_2);

#define VkglTestCase_001668_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001668_2 "vector_swizzles.mediump_ivec3_bgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001668, VkglTestCase_001668_1, VkglTestCase_001668_2);

#define VkglTestCase_001669_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001669_2 "ector_swizzles.mediump_ivec3_bgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001669, VkglTestCase_001669_1, VkglTestCase_001669_2);

#define VkglTestCase_001670_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001670_2 "vector_swizzles.mediump_ivec3_rrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001670, VkglTestCase_001670_1, VkglTestCase_001670_2);

#define VkglTestCase_001671_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001671_2 "ector_swizzles.mediump_ivec3_rrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001671, VkglTestCase_001671_1, VkglTestCase_001671_2);

#define VkglTestCase_001672_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001672_2 "vector_swizzles.mediump_ivec3_bbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001672, VkglTestCase_001672_1, VkglTestCase_001672_2);

#define VkglTestCase_001673_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001673_2 "ector_swizzles.mediump_ivec3_bbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001673, VkglTestCase_001673_1, VkglTestCase_001673_2);

#define VkglTestCase_001674_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001674_2 "vector_swizzles.mediump_ivec3_bbg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001674, VkglTestCase_001674_1, VkglTestCase_001674_2);

#define VkglTestCase_001675_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001675_2 "ector_swizzles.mediump_ivec3_bbg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001675, VkglTestCase_001675_1, VkglTestCase_001675_2);

#define VkglTestCase_001676_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001676_2 "vector_swizzles.mediump_ivec3_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001676, VkglTestCase_001676_1, VkglTestCase_001676_2);

#define VkglTestCase_001677_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001677_2 "ector_swizzles.mediump_ivec3_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001677, VkglTestCase_001677_1, VkglTestCase_001677_2);

#define VkglTestCase_001678_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001678_2 "vector_swizzles.mediump_ivec3_rbr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001678, VkglTestCase_001678_1, VkglTestCase_001678_2);

#define VkglTestCase_001679_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001679_2 "ector_swizzles.mediump_ivec3_rbr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001679, VkglTestCase_001679_1, VkglTestCase_001679_2);

#define VkglTestCase_001680_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001680_2 "ector_swizzles.mediump_ivec3_rggr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001680, VkglTestCase_001680_1, VkglTestCase_001680_2);

#define VkglTestCase_001681_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001681_2 "ctor_swizzles.mediump_ivec3_rggr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001681, VkglTestCase_001681_1, VkglTestCase_001681_2);

#define VkglTestCase_001682_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001682_2 "ector_swizzles.mediump_ivec3_bbbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001682, VkglTestCase_001682_1, VkglTestCase_001682_2);

#define VkglTestCase_001683_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001683_2 "ctor_swizzles.mediump_ivec3_bbbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001683, VkglTestCase_001683_1, VkglTestCase_001683_2);

#define VkglTestCase_001684_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001684_2 ".vector_swizzles.mediump_ivec4_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001684, VkglTestCase_001684_1, VkglTestCase_001684_2);

#define VkglTestCase_001685_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001685_2 "vector_swizzles.mediump_ivec4_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001685, VkglTestCase_001685_1, VkglTestCase_001685_2);

#define VkglTestCase_001686_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001686_2 ".vector_swizzles.mediump_ivec4_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001686, VkglTestCase_001686_1, VkglTestCase_001686_2);

#define VkglTestCase_001687_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001687_2 "vector_swizzles.mediump_ivec4_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001687, VkglTestCase_001687_1, VkglTestCase_001687_2);

#define VkglTestCase_001688_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001688_2 "vector_swizzles.mediump_ivec4_wx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001688, VkglTestCase_001688_1, VkglTestCase_001688_2);

#define VkglTestCase_001689_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001689_2 "ector_swizzles.mediump_ivec4_wx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001689, VkglTestCase_001689_1, VkglTestCase_001689_2);

#define VkglTestCase_001690_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001690_2 "vector_swizzles.mediump_ivec4_wz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001690, VkglTestCase_001690_1, VkglTestCase_001690_2);

#define VkglTestCase_001691_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001691_2 "ector_swizzles.mediump_ivec4_wz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001691, VkglTestCase_001691_1, VkglTestCase_001691_2);

#define VkglTestCase_001692_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001692_2 "vector_swizzles.mediump_ivec4_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001692, VkglTestCase_001692_1, VkglTestCase_001692_2);

#define VkglTestCase_001693_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001693_2 "ector_swizzles.mediump_ivec4_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001693, VkglTestCase_001693_1, VkglTestCase_001693_2);

#define VkglTestCase_001694_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001694_2 "vector_swizzles.mediump_ivec4_yyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001694, VkglTestCase_001694_1, VkglTestCase_001694_2);

#define VkglTestCase_001695_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001695_2 "ector_swizzles.mediump_ivec4_yyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001695, VkglTestCase_001695_1, VkglTestCase_001695_2);

#define VkglTestCase_001696_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001696_2 "vector_swizzles.mediump_ivec4_wzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001696, VkglTestCase_001696_1, VkglTestCase_001696_2);

#define VkglTestCase_001697_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001697_2 "ector_swizzles.mediump_ivec4_wzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001697, VkglTestCase_001697_1, VkglTestCase_001697_2);

#define VkglTestCase_001698_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001698_2 "ector_swizzles.mediump_ivec4_xyzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001698, VkglTestCase_001698_1, VkglTestCase_001698_2);

#define VkglTestCase_001699_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001699_2 "ctor_swizzles.mediump_ivec4_xyzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001699, VkglTestCase_001699_1, VkglTestCase_001699_2);

#define VkglTestCase_001700_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001700_2 "ector_swizzles.mediump_ivec4_wzyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001700, VkglTestCase_001700_1, VkglTestCase_001700_2);

#define VkglTestCase_001701_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001701_2 "ctor_swizzles.mediump_ivec4_wzyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001701, VkglTestCase_001701_1, VkglTestCase_001701_2);

#define VkglTestCase_001702_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001702_2 "ector_swizzles.mediump_ivec4_xxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001702, VkglTestCase_001702_1, VkglTestCase_001702_2);

#define VkglTestCase_001703_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001703_2 "ctor_swizzles.mediump_ivec4_xxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001703, VkglTestCase_001703_1, VkglTestCase_001703_2);

#define VkglTestCase_001704_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001704_2 "ector_swizzles.mediump_ivec4_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001704, VkglTestCase_001704_1, VkglTestCase_001704_2);

#define VkglTestCase_001705_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001705_2 "ctor_swizzles.mediump_ivec4_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001705, VkglTestCase_001705_1, VkglTestCase_001705_2);

#define VkglTestCase_001706_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001706_2 "ector_swizzles.mediump_ivec4_wwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001706, VkglTestCase_001706_1, VkglTestCase_001706_2);

#define VkglTestCase_001707_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001707_2 "ctor_swizzles.mediump_ivec4_wwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001707, VkglTestCase_001707_1, VkglTestCase_001707_2);

#define VkglTestCase_001708_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001708_2 "ector_swizzles.mediump_ivec4_wzzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001708, VkglTestCase_001708_1, VkglTestCase_001708_2);

#define VkglTestCase_001709_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001709_2 "ctor_swizzles.mediump_ivec4_wzzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001709, VkglTestCase_001709_1, VkglTestCase_001709_2);

#define VkglTestCase_001710_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001710_2 "ector_swizzles.mediump_ivec4_wwwy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001710, VkglTestCase_001710_1, VkglTestCase_001710_2);

#define VkglTestCase_001711_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001711_2 "ctor_swizzles.mediump_ivec4_wwwy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001711, VkglTestCase_001711_1, VkglTestCase_001711_2);

#define VkglTestCase_001712_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001712_2 "ector_swizzles.mediump_ivec4_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001712, VkglTestCase_001712_1, VkglTestCase_001712_2);

#define VkglTestCase_001713_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001713_2 "ctor_swizzles.mediump_ivec4_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001713, VkglTestCase_001713_1, VkglTestCase_001713_2);

#define VkglTestCase_001714_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001714_2 "ector_swizzles.mediump_ivec4_zzwz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001714, VkglTestCase_001714_1, VkglTestCase_001714_2);

#define VkglTestCase_001715_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001715_2 "ctor_swizzles.mediump_ivec4_zzwz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001715, VkglTestCase_001715_1, VkglTestCase_001715_2);

#define VkglTestCase_001716_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001716_2 ".vector_swizzles.mediump_ivec4_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001716, VkglTestCase_001716_1, VkglTestCase_001716_2);

#define VkglTestCase_001717_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001717_2 "vector_swizzles.mediump_ivec4_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001717, VkglTestCase_001717_1, VkglTestCase_001717_2);

#define VkglTestCase_001718_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001718_2 ".vector_swizzles.mediump_ivec4_q_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001718, VkglTestCase_001718_1, VkglTestCase_001718_2);

#define VkglTestCase_001719_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001719_2 "vector_swizzles.mediump_ivec4_q_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001719, VkglTestCase_001719_1, VkglTestCase_001719_2);

#define VkglTestCase_001720_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001720_2 "vector_swizzles.mediump_ivec4_qs_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001720, VkglTestCase_001720_1, VkglTestCase_001720_2);

#define VkglTestCase_001721_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001721_2 "ector_swizzles.mediump_ivec4_qs_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001721, VkglTestCase_001721_1, VkglTestCase_001721_2);

#define VkglTestCase_001722_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001722_2 "vector_swizzles.mediump_ivec4_qp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001722, VkglTestCase_001722_1, VkglTestCase_001722_2);

#define VkglTestCase_001723_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001723_2 "ector_swizzles.mediump_ivec4_qp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001723, VkglTestCase_001723_1, VkglTestCase_001723_2);

#define VkglTestCase_001724_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001724_2 "vector_swizzles.mediump_ivec4_qqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001724, VkglTestCase_001724_1, VkglTestCase_001724_2);

#define VkglTestCase_001725_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001725_2 "ector_swizzles.mediump_ivec4_qqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001725, VkglTestCase_001725_1, VkglTestCase_001725_2);

#define VkglTestCase_001726_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001726_2 "vector_swizzles.mediump_ivec4_ttq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001726, VkglTestCase_001726_1, VkglTestCase_001726_2);

#define VkglTestCase_001727_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001727_2 "ector_swizzles.mediump_ivec4_ttq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001727, VkglTestCase_001727_1, VkglTestCase_001727_2);

#define VkglTestCase_001728_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001728_2 "vector_swizzles.mediump_ivec4_qpt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001728, VkglTestCase_001728_1, VkglTestCase_001728_2);

#define VkglTestCase_001729_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001729_2 "ector_swizzles.mediump_ivec4_qpt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001729, VkglTestCase_001729_1, VkglTestCase_001729_2);

#define VkglTestCase_001730_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001730_2 "ector_swizzles.mediump_ivec4_stpq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001730, VkglTestCase_001730_1, VkglTestCase_001730_2);

#define VkglTestCase_001731_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001731_2 "ctor_swizzles.mediump_ivec4_stpq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001731, VkglTestCase_001731_1, VkglTestCase_001731_2);

#define VkglTestCase_001732_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001732_2 "ector_swizzles.mediump_ivec4_qpts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001732, VkglTestCase_001732_1, VkglTestCase_001732_2);

#define VkglTestCase_001733_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001733_2 "ctor_swizzles.mediump_ivec4_qpts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001733, VkglTestCase_001733_1, VkglTestCase_001733_2);

#define VkglTestCase_001734_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001734_2 "ector_swizzles.mediump_ivec4_ssss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001734, VkglTestCase_001734_1, VkglTestCase_001734_2);

#define VkglTestCase_001735_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001735_2 "ctor_swizzles.mediump_ivec4_ssss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001735, VkglTestCase_001735_1, VkglTestCase_001735_2);

#define VkglTestCase_001736_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001736_2 "ector_swizzles.mediump_ivec4_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001736, VkglTestCase_001736_1, VkglTestCase_001736_2);

#define VkglTestCase_001737_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001737_2 "ctor_swizzles.mediump_ivec4_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001737, VkglTestCase_001737_1, VkglTestCase_001737_2);

#define VkglTestCase_001738_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001738_2 "ector_swizzles.mediump_ivec4_qqqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001738, VkglTestCase_001738_1, VkglTestCase_001738_2);

#define VkglTestCase_001739_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001739_2 "ctor_swizzles.mediump_ivec4_qqqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001739, VkglTestCase_001739_1, VkglTestCase_001739_2);

#define VkglTestCase_001740_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001740_2 "ector_swizzles.mediump_ivec4_qppq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001740, VkglTestCase_001740_1, VkglTestCase_001740_2);

#define VkglTestCase_001741_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001741_2 "ctor_swizzles.mediump_ivec4_qppq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001741, VkglTestCase_001741_1, VkglTestCase_001741_2);

#define VkglTestCase_001742_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001742_2 "ector_swizzles.mediump_ivec4_qqqt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001742, VkglTestCase_001742_1, VkglTestCase_001742_2);

#define VkglTestCase_001743_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001743_2 "ctor_swizzles.mediump_ivec4_qqqt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001743, VkglTestCase_001743_1, VkglTestCase_001743_2);

#define VkglTestCase_001744_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001744_2 "ector_swizzles.mediump_ivec4_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001744, VkglTestCase_001744_1, VkglTestCase_001744_2);

#define VkglTestCase_001745_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001745_2 "ctor_swizzles.mediump_ivec4_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001745, VkglTestCase_001745_1, VkglTestCase_001745_2);

#define VkglTestCase_001746_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001746_2 "ector_swizzles.mediump_ivec4_ppqp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001746, VkglTestCase_001746_1, VkglTestCase_001746_2);

#define VkglTestCase_001747_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001747_2 "ctor_swizzles.mediump_ivec4_ppqp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001747, VkglTestCase_001747_1, VkglTestCase_001747_2);

#define VkglTestCase_001748_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001748_2 ".vector_swizzles.mediump_ivec4_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001748, VkglTestCase_001748_1, VkglTestCase_001748_2);

#define VkglTestCase_001749_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001749_2 "vector_swizzles.mediump_ivec4_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001749, VkglTestCase_001749_1, VkglTestCase_001749_2);

#define VkglTestCase_001750_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001750_2 ".vector_swizzles.mediump_ivec4_a_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001750, VkglTestCase_001750_1, VkglTestCase_001750_2);

#define VkglTestCase_001751_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001751_2 "vector_swizzles.mediump_ivec4_a_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001751, VkglTestCase_001751_1, VkglTestCase_001751_2);

#define VkglTestCase_001752_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001752_2 "vector_swizzles.mediump_ivec4_ar_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001752, VkglTestCase_001752_1, VkglTestCase_001752_2);

#define VkglTestCase_001753_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001753_2 "ector_swizzles.mediump_ivec4_ar_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001753, VkglTestCase_001753_1, VkglTestCase_001753_2);

#define VkglTestCase_001754_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001754_2 "vector_swizzles.mediump_ivec4_ab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001754, VkglTestCase_001754_1, VkglTestCase_001754_2);

#define VkglTestCase_001755_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001755_2 "ector_swizzles.mediump_ivec4_ab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001755, VkglTestCase_001755_1, VkglTestCase_001755_2);

#define VkglTestCase_001756_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001756_2 "vector_swizzles.mediump_ivec4_aaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001756, VkglTestCase_001756_1, VkglTestCase_001756_2);

#define VkglTestCase_001757_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001757_2 "ector_swizzles.mediump_ivec4_aaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001757, VkglTestCase_001757_1, VkglTestCase_001757_2);

#define VkglTestCase_001758_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001758_2 "vector_swizzles.mediump_ivec4_gga_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001758, VkglTestCase_001758_1, VkglTestCase_001758_2);

#define VkglTestCase_001759_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001759_2 "ector_swizzles.mediump_ivec4_gga_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001759, VkglTestCase_001759_1, VkglTestCase_001759_2);

#define VkglTestCase_001760_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001760_2 "vector_swizzles.mediump_ivec4_abg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001760, VkglTestCase_001760_1, VkglTestCase_001760_2);

#define VkglTestCase_001761_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001761_2 "ector_swizzles.mediump_ivec4_abg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001761, VkglTestCase_001761_1, VkglTestCase_001761_2);

#define VkglTestCase_001762_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001762_2 "ector_swizzles.mediump_ivec4_rgba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001762, VkglTestCase_001762_1, VkglTestCase_001762_2);

#define VkglTestCase_001763_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001763_2 "ctor_swizzles.mediump_ivec4_rgba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001763, VkglTestCase_001763_1, VkglTestCase_001763_2);

#define VkglTestCase_001764_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001764_2 "ector_swizzles.mediump_ivec4_abgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001764, VkglTestCase_001764_1, VkglTestCase_001764_2);

#define VkglTestCase_001765_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001765_2 "ctor_swizzles.mediump_ivec4_abgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001765, VkglTestCase_001765_1, VkglTestCase_001765_2);

#define VkglTestCase_001766_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001766_2 "ector_swizzles.mediump_ivec4_rrrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001766, VkglTestCase_001766_1, VkglTestCase_001766_2);

#define VkglTestCase_001767_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001767_2 "ctor_swizzles.mediump_ivec4_rrrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001767, VkglTestCase_001767_1, VkglTestCase_001767_2);

#define VkglTestCase_001768_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001768_2 "ector_swizzles.mediump_ivec4_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001768, VkglTestCase_001768_1, VkglTestCase_001768_2);

#define VkglTestCase_001769_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001769_2 "ctor_swizzles.mediump_ivec4_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001769, VkglTestCase_001769_1, VkglTestCase_001769_2);

#define VkglTestCase_001770_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001770_2 "ector_swizzles.mediump_ivec4_aaaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001770, VkglTestCase_001770_1, VkglTestCase_001770_2);

#define VkglTestCase_001771_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001771_2 "ctor_swizzles.mediump_ivec4_aaaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001771, VkglTestCase_001771_1, VkglTestCase_001771_2);

#define VkglTestCase_001772_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001772_2 "ector_swizzles.mediump_ivec4_abba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001772, VkglTestCase_001772_1, VkglTestCase_001772_2);

#define VkglTestCase_001773_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001773_2 "ctor_swizzles.mediump_ivec4_abba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001773, VkglTestCase_001773_1, VkglTestCase_001773_2);

#define VkglTestCase_001774_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001774_2 "ector_swizzles.mediump_ivec4_aaag_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001774, VkglTestCase_001774_1, VkglTestCase_001774_2);

#define VkglTestCase_001775_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001775_2 "ctor_swizzles.mediump_ivec4_aaag_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001775, VkglTestCase_001775_1, VkglTestCase_001775_2);

#define VkglTestCase_001776_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001776_2 "ector_swizzles.mediump_ivec4_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001776, VkglTestCase_001776_1, VkglTestCase_001776_2);

#define VkglTestCase_001777_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001777_2 "ctor_swizzles.mediump_ivec4_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001777, VkglTestCase_001777_1, VkglTestCase_001777_2);

#define VkglTestCase_001778_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001778_2 "ector_swizzles.mediump_ivec4_bbab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001778, VkglTestCase_001778_1, VkglTestCase_001778_2);

#define VkglTestCase_001779_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001779_2 "ctor_swizzles.mediump_ivec4_bbab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001779, VkglTestCase_001779_1, VkglTestCase_001779_2);

#define VkglTestCase_001780_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001780_2 ".vector_swizzles.mediump_bvec2_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001780, VkglTestCase_001780_1, VkglTestCase_001780_2);

#define VkglTestCase_001781_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001781_2 "vector_swizzles.mediump_bvec2_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001781, VkglTestCase_001781_1, VkglTestCase_001781_2);

#define VkglTestCase_001782_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001782_2 "vector_swizzles.mediump_bvec2_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001782, VkglTestCase_001782_1, VkglTestCase_001782_2);

#define VkglTestCase_001783_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001783_2 "ector_swizzles.mediump_bvec2_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001783, VkglTestCase_001783_1, VkglTestCase_001783_2);

#define VkglTestCase_001784_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001784_2 "vector_swizzles.mediump_bvec2_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001784, VkglTestCase_001784_1, VkglTestCase_001784_2);

#define VkglTestCase_001785_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001785_2 "ector_swizzles.mediump_bvec2_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001785, VkglTestCase_001785_1, VkglTestCase_001785_2);

#define VkglTestCase_001786_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001786_2 "vector_swizzles.mediump_bvec2_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001786, VkglTestCase_001786_1, VkglTestCase_001786_2);

#define VkglTestCase_001787_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001787_2 "ector_swizzles.mediump_bvec2_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001787, VkglTestCase_001787_1, VkglTestCase_001787_2);

#define VkglTestCase_001788_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001788_2 "vector_swizzles.mediump_bvec2_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001788, VkglTestCase_001788_1, VkglTestCase_001788_2);

#define VkglTestCase_001789_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001789_2 "ector_swizzles.mediump_bvec2_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001789, VkglTestCase_001789_1, VkglTestCase_001789_2);

#define VkglTestCase_001790_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001790_2 "ector_swizzles.mediump_bvec2_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001790, VkglTestCase_001790_1, VkglTestCase_001790_2);

#define VkglTestCase_001791_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001791_2 "ctor_swizzles.mediump_bvec2_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001791, VkglTestCase_001791_1, VkglTestCase_001791_2);

#define VkglTestCase_001792_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001792_2 "ector_swizzles.mediump_bvec2_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001792, VkglTestCase_001792_1, VkglTestCase_001792_2);

#define VkglTestCase_001793_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001793_2 "ctor_swizzles.mediump_bvec2_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001793, VkglTestCase_001793_1, VkglTestCase_001793_2);

#define VkglTestCase_001794_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001794_2 ".vector_swizzles.mediump_bvec2_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001794, VkglTestCase_001794_1, VkglTestCase_001794_2);

#define VkglTestCase_001795_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001795_2 "vector_swizzles.mediump_bvec2_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001795, VkglTestCase_001795_1, VkglTestCase_001795_2);

#define VkglTestCase_001796_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001796_2 "vector_swizzles.mediump_bvec2_ss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001796, VkglTestCase_001796_1, VkglTestCase_001796_2);

#define VkglTestCase_001797_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001797_2 "ector_swizzles.mediump_bvec2_ss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001797, VkglTestCase_001797_1, VkglTestCase_001797_2);

#define VkglTestCase_001798_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001798_2 "vector_swizzles.mediump_bvec2_st_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001798, VkglTestCase_001798_1, VkglTestCase_001798_2);

#define VkglTestCase_001799_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001799_2 "ector_swizzles.mediump_bvec2_st_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001799, VkglTestCase_001799_1, VkglTestCase_001799_2);

#define VkglTestCase_001800_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001800_2 "vector_swizzles.mediump_bvec2_ts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001800, VkglTestCase_001800_1, VkglTestCase_001800_2);

#define VkglTestCase_001801_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001801_2 "ector_swizzles.mediump_bvec2_ts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001801, VkglTestCase_001801_1, VkglTestCase_001801_2);

#define VkglTestCase_001802_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001802_2 "vector_swizzles.mediump_bvec2_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001802, VkglTestCase_001802_1, VkglTestCase_001802_2);

#define VkglTestCase_001803_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001803_2 "ector_swizzles.mediump_bvec2_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001803, VkglTestCase_001803_1, VkglTestCase_001803_2);

#define VkglTestCase_001804_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001804_2 "ector_swizzles.mediump_bvec2_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001804, VkglTestCase_001804_1, VkglTestCase_001804_2);

#define VkglTestCase_001805_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001805_2 "ctor_swizzles.mediump_bvec2_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001805, VkglTestCase_001805_1, VkglTestCase_001805_2);

#define VkglTestCase_001806_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001806_2 "ector_swizzles.mediump_bvec2_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001806, VkglTestCase_001806_1, VkglTestCase_001806_2);

#define VkglTestCase_001807_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001807_2 "ctor_swizzles.mediump_bvec2_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001807, VkglTestCase_001807_1, VkglTestCase_001807_2);

#define VkglTestCase_001808_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001808_2 ".vector_swizzles.mediump_bvec2_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001808, VkglTestCase_001808_1, VkglTestCase_001808_2);

#define VkglTestCase_001809_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001809_2 "vector_swizzles.mediump_bvec2_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001809, VkglTestCase_001809_1, VkglTestCase_001809_2);

#define VkglTestCase_001810_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001810_2 "vector_swizzles.mediump_bvec2_rr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001810, VkglTestCase_001810_1, VkglTestCase_001810_2);

#define VkglTestCase_001811_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001811_2 "ector_swizzles.mediump_bvec2_rr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001811, VkglTestCase_001811_1, VkglTestCase_001811_2);

#define VkglTestCase_001812_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001812_2 "vector_swizzles.mediump_bvec2_rg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001812, VkglTestCase_001812_1, VkglTestCase_001812_2);

#define VkglTestCase_001813_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001813_2 "ector_swizzles.mediump_bvec2_rg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001813, VkglTestCase_001813_1, VkglTestCase_001813_2);

#define VkglTestCase_001814_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001814_2 "vector_swizzles.mediump_bvec2_gr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001814, VkglTestCase_001814_1, VkglTestCase_001814_2);

#define VkglTestCase_001815_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001815_2 "ector_swizzles.mediump_bvec2_gr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001815, VkglTestCase_001815_1, VkglTestCase_001815_2);

#define VkglTestCase_001816_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001816_2 "vector_swizzles.mediump_bvec2_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001816, VkglTestCase_001816_1, VkglTestCase_001816_2);

#define VkglTestCase_001817_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001817_2 "ector_swizzles.mediump_bvec2_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001817, VkglTestCase_001817_1, VkglTestCase_001817_2);

#define VkglTestCase_001818_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001818_2 "ector_swizzles.mediump_bvec2_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001818, VkglTestCase_001818_1, VkglTestCase_001818_2);

#define VkglTestCase_001819_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001819_2 "ctor_swizzles.mediump_bvec2_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001819, VkglTestCase_001819_1, VkglTestCase_001819_2);

#define VkglTestCase_001820_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001820_2 "ector_swizzles.mediump_bvec2_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001820, VkglTestCase_001820_1, VkglTestCase_001820_2);

#define VkglTestCase_001821_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001821_2 "ctor_swizzles.mediump_bvec2_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001821, VkglTestCase_001821_1, VkglTestCase_001821_2);

#define VkglTestCase_001822_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001822_2 ".vector_swizzles.mediump_bvec3_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001822, VkglTestCase_001822_1, VkglTestCase_001822_2);

#define VkglTestCase_001823_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001823_2 "vector_swizzles.mediump_bvec3_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001823, VkglTestCase_001823_1, VkglTestCase_001823_2);

#define VkglTestCase_001824_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001824_2 ".vector_swizzles.mediump_bvec3_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001824, VkglTestCase_001824_1, VkglTestCase_001824_2);

#define VkglTestCase_001825_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001825_2 "vector_swizzles.mediump_bvec3_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001825, VkglTestCase_001825_1, VkglTestCase_001825_2);

#define VkglTestCase_001826_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001826_2 "vector_swizzles.mediump_bvec3_xz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001826, VkglTestCase_001826_1, VkglTestCase_001826_2);

#define VkglTestCase_001827_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001827_2 "ector_swizzles.mediump_bvec3_xz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001827, VkglTestCase_001827_1, VkglTestCase_001827_2);

#define VkglTestCase_001828_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001828_2 "vector_swizzles.mediump_bvec3_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001828, VkglTestCase_001828_1, VkglTestCase_001828_2);

#define VkglTestCase_001829_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001829_2 "ector_swizzles.mediump_bvec3_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001829, VkglTestCase_001829_1, VkglTestCase_001829_2);

#define VkglTestCase_001830_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001830_2 "vector_swizzles.mediump_bvec3_xyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001830, VkglTestCase_001830_1, VkglTestCase_001830_2);

#define VkglTestCase_001831_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001831_2 "ector_swizzles.mediump_bvec3_xyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001831, VkglTestCase_001831_1, VkglTestCase_001831_2);

#define VkglTestCase_001832_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001832_2 "vector_swizzles.mediump_bvec3_zyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001832, VkglTestCase_001832_1, VkglTestCase_001832_2);

#define VkglTestCase_001833_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001833_2 "ector_swizzles.mediump_bvec3_zyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001833, VkglTestCase_001833_1, VkglTestCase_001833_2);

#define VkglTestCase_001834_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001834_2 "vector_swizzles.mediump_bvec3_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001834, VkglTestCase_001834_1, VkglTestCase_001834_2);

#define VkglTestCase_001835_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001835_2 "ector_swizzles.mediump_bvec3_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001835, VkglTestCase_001835_1, VkglTestCase_001835_2);

#define VkglTestCase_001836_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001836_2 "vector_swizzles.mediump_bvec3_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001836, VkglTestCase_001836_1, VkglTestCase_001836_2);

#define VkglTestCase_001837_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001837_2 "ector_swizzles.mediump_bvec3_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001837, VkglTestCase_001837_1, VkglTestCase_001837_2);

#define VkglTestCase_001838_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001838_2 "vector_swizzles.mediump_bvec3_zzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001838, VkglTestCase_001838_1, VkglTestCase_001838_2);

#define VkglTestCase_001839_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001839_2 "ector_swizzles.mediump_bvec3_zzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001839, VkglTestCase_001839_1, VkglTestCase_001839_2);

#define VkglTestCase_001840_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001840_2 "vector_swizzles.mediump_bvec3_yxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001840, VkglTestCase_001840_1, VkglTestCase_001840_2);

#define VkglTestCase_001841_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001841_2 "ector_swizzles.mediump_bvec3_yxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001841, VkglTestCase_001841_1, VkglTestCase_001841_2);

#define VkglTestCase_001842_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001842_2 "vector_swizzles.mediump_bvec3_xzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001842, VkglTestCase_001842_1, VkglTestCase_001842_2);

#define VkglTestCase_001843_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001843_2 "ector_swizzles.mediump_bvec3_xzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001843, VkglTestCase_001843_1, VkglTestCase_001843_2);

#define VkglTestCase_001844_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001844_2 "ector_swizzles.mediump_bvec3_xyyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001844, VkglTestCase_001844_1, VkglTestCase_001844_2);

#define VkglTestCase_001845_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001845_2 "ctor_swizzles.mediump_bvec3_xyyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001845, VkglTestCase_001845_1, VkglTestCase_001845_2);

#define VkglTestCase_001846_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001846_2 "ector_swizzles.mediump_bvec3_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001846, VkglTestCase_001846_1, VkglTestCase_001846_2);

#define VkglTestCase_001847_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001847_2 "ctor_swizzles.mediump_bvec3_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001847, VkglTestCase_001847_1, VkglTestCase_001847_2);

#define VkglTestCase_001848_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001848_2 ".vector_swizzles.mediump_bvec3_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001848, VkglTestCase_001848_1, VkglTestCase_001848_2);

#define VkglTestCase_001849_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001849_2 "vector_swizzles.mediump_bvec3_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001849, VkglTestCase_001849_1, VkglTestCase_001849_2);

#define VkglTestCase_001850_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001850_2 ".vector_swizzles.mediump_bvec3_p_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001850, VkglTestCase_001850_1, VkglTestCase_001850_2);

#define VkglTestCase_001851_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001851_2 "vector_swizzles.mediump_bvec3_p_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001851, VkglTestCase_001851_1, VkglTestCase_001851_2);

#define VkglTestCase_001852_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001852_2 "vector_swizzles.mediump_bvec3_sp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001852, VkglTestCase_001852_1, VkglTestCase_001852_2);

#define VkglTestCase_001853_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001853_2 "ector_swizzles.mediump_bvec3_sp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001853, VkglTestCase_001853_1, VkglTestCase_001853_2);

#define VkglTestCase_001854_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001854_2 "vector_swizzles.mediump_bvec3_pp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001854, VkglTestCase_001854_1, VkglTestCase_001854_2);

#define VkglTestCase_001855_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001855_2 "ector_swizzles.mediump_bvec3_pp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001855, VkglTestCase_001855_1, VkglTestCase_001855_2);

#define VkglTestCase_001856_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001856_2 "vector_swizzles.mediump_bvec3_stp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001856, VkglTestCase_001856_1, VkglTestCase_001856_2);

#define VkglTestCase_001857_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001857_2 "ector_swizzles.mediump_bvec3_stp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001857, VkglTestCase_001857_1, VkglTestCase_001857_2);

#define VkglTestCase_001858_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001858_2 "vector_swizzles.mediump_bvec3_pts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001858, VkglTestCase_001858_1, VkglTestCase_001858_2);

#define VkglTestCase_001859_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001859_2 "ector_swizzles.mediump_bvec3_pts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001859, VkglTestCase_001859_1, VkglTestCase_001859_2);

#define VkglTestCase_001860_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001860_2 "vector_swizzles.mediump_bvec3_sss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001860, VkglTestCase_001860_1, VkglTestCase_001860_2);

#define VkglTestCase_001861_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001861_2 "ector_swizzles.mediump_bvec3_sss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001861, VkglTestCase_001861_1, VkglTestCase_001861_2);

#define VkglTestCase_001862_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001862_2 "vector_swizzles.mediump_bvec3_ppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001862, VkglTestCase_001862_1, VkglTestCase_001862_2);

#define VkglTestCase_001863_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001863_2 "ector_swizzles.mediump_bvec3_ppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001863, VkglTestCase_001863_1, VkglTestCase_001863_2);

#define VkglTestCase_001864_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001864_2 "vector_swizzles.mediump_bvec3_ppt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001864, VkglTestCase_001864_1, VkglTestCase_001864_2);

#define VkglTestCase_001865_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001865_2 "ector_swizzles.mediump_bvec3_ppt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001865, VkglTestCase_001865_1, VkglTestCase_001865_2);

#define VkglTestCase_001866_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001866_2 "vector_swizzles.mediump_bvec3_tst_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001866, VkglTestCase_001866_1, VkglTestCase_001866_2);

#define VkglTestCase_001867_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001867_2 "ector_swizzles.mediump_bvec3_tst_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001867, VkglTestCase_001867_1, VkglTestCase_001867_2);

#define VkglTestCase_001868_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001868_2 "vector_swizzles.mediump_bvec3_sps_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001868, VkglTestCase_001868_1, VkglTestCase_001868_2);

#define VkglTestCase_001869_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001869_2 "ector_swizzles.mediump_bvec3_sps_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001869, VkglTestCase_001869_1, VkglTestCase_001869_2);

#define VkglTestCase_001870_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001870_2 "ector_swizzles.mediump_bvec3_stts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001870, VkglTestCase_001870_1, VkglTestCase_001870_2);

#define VkglTestCase_001871_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001871_2 "ctor_swizzles.mediump_bvec3_stts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001871, VkglTestCase_001871_1, VkglTestCase_001871_2);

#define VkglTestCase_001872_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001872_2 "ector_swizzles.mediump_bvec3_pppp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001872, VkglTestCase_001872_1, VkglTestCase_001872_2);

#define VkglTestCase_001873_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001873_2 "ctor_swizzles.mediump_bvec3_pppp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001873, VkglTestCase_001873_1, VkglTestCase_001873_2);

#define VkglTestCase_001874_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001874_2 ".vector_swizzles.mediump_bvec3_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001874, VkglTestCase_001874_1, VkglTestCase_001874_2);

#define VkglTestCase_001875_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001875_2 "vector_swizzles.mediump_bvec3_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001875, VkglTestCase_001875_1, VkglTestCase_001875_2);

#define VkglTestCase_001876_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001876_2 ".vector_swizzles.mediump_bvec3_b_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001876, VkglTestCase_001876_1, VkglTestCase_001876_2);

#define VkglTestCase_001877_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001877_2 "vector_swizzles.mediump_bvec3_b_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001877, VkglTestCase_001877_1, VkglTestCase_001877_2);

#define VkglTestCase_001878_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001878_2 "vector_swizzles.mediump_bvec3_rb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001878, VkglTestCase_001878_1, VkglTestCase_001878_2);

#define VkglTestCase_001879_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001879_2 "ector_swizzles.mediump_bvec3_rb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001879, VkglTestCase_001879_1, VkglTestCase_001879_2);

#define VkglTestCase_001880_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001880_2 "vector_swizzles.mediump_bvec3_bb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001880, VkglTestCase_001880_1, VkglTestCase_001880_2);

#define VkglTestCase_001881_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001881_2 "ector_swizzles.mediump_bvec3_bb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001881, VkglTestCase_001881_1, VkglTestCase_001881_2);

#define VkglTestCase_001882_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001882_2 "vector_swizzles.mediump_bvec3_rgb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001882, VkglTestCase_001882_1, VkglTestCase_001882_2);

#define VkglTestCase_001883_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001883_2 "ector_swizzles.mediump_bvec3_rgb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001883, VkglTestCase_001883_1, VkglTestCase_001883_2);

#define VkglTestCase_001884_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001884_2 "vector_swizzles.mediump_bvec3_bgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001884, VkglTestCase_001884_1, VkglTestCase_001884_2);

#define VkglTestCase_001885_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001885_2 "ector_swizzles.mediump_bvec3_bgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001885, VkglTestCase_001885_1, VkglTestCase_001885_2);

#define VkglTestCase_001886_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001886_2 "vector_swizzles.mediump_bvec3_rrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001886, VkglTestCase_001886_1, VkglTestCase_001886_2);

#define VkglTestCase_001887_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001887_2 "ector_swizzles.mediump_bvec3_rrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001887, VkglTestCase_001887_1, VkglTestCase_001887_2);

#define VkglTestCase_001888_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001888_2 "vector_swizzles.mediump_bvec3_bbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001888, VkglTestCase_001888_1, VkglTestCase_001888_2);

#define VkglTestCase_001889_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001889_2 "ector_swizzles.mediump_bvec3_bbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001889, VkglTestCase_001889_1, VkglTestCase_001889_2);

#define VkglTestCase_001890_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001890_2 "vector_swizzles.mediump_bvec3_bbg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001890, VkglTestCase_001890_1, VkglTestCase_001890_2);

#define VkglTestCase_001891_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001891_2 "ector_swizzles.mediump_bvec3_bbg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001891, VkglTestCase_001891_1, VkglTestCase_001891_2);

#define VkglTestCase_001892_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001892_2 "vector_swizzles.mediump_bvec3_grg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001892, VkglTestCase_001892_1, VkglTestCase_001892_2);

#define VkglTestCase_001893_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001893_2 "ector_swizzles.mediump_bvec3_grg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001893, VkglTestCase_001893_1, VkglTestCase_001893_2);

#define VkglTestCase_001894_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001894_2 "vector_swizzles.mediump_bvec3_rbr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001894, VkglTestCase_001894_1, VkglTestCase_001894_2);

#define VkglTestCase_001895_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001895_2 "ector_swizzles.mediump_bvec3_rbr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001895, VkglTestCase_001895_1, VkglTestCase_001895_2);

#define VkglTestCase_001896_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001896_2 "ector_swizzles.mediump_bvec3_rggr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001896, VkglTestCase_001896_1, VkglTestCase_001896_2);

#define VkglTestCase_001897_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001897_2 "ctor_swizzles.mediump_bvec3_rggr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001897, VkglTestCase_001897_1, VkglTestCase_001897_2);

#define VkglTestCase_001898_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001898_2 "ector_swizzles.mediump_bvec3_bbbb_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001898, VkglTestCase_001898_1, VkglTestCase_001898_2);

#define VkglTestCase_001899_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001899_2 "ctor_swizzles.mediump_bvec3_bbbb_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001899, VkglTestCase_001899_1, VkglTestCase_001899_2);

#define VkglTestCase_001900_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001900_2 ".vector_swizzles.mediump_bvec4_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001900, VkglTestCase_001900_1, VkglTestCase_001900_2);

#define VkglTestCase_001901_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001901_2 "vector_swizzles.mediump_bvec4_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001901, VkglTestCase_001901_1, VkglTestCase_001901_2);

#define VkglTestCase_001902_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001902_2 ".vector_swizzles.mediump_bvec4_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001902, VkglTestCase_001902_1, VkglTestCase_001902_2);

#define VkglTestCase_001903_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001903_2 "vector_swizzles.mediump_bvec4_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001903, VkglTestCase_001903_1, VkglTestCase_001903_2);

#define VkglTestCase_001904_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001904_2 "vector_swizzles.mediump_bvec4_wx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001904, VkglTestCase_001904_1, VkglTestCase_001904_2);

#define VkglTestCase_001905_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001905_2 "ector_swizzles.mediump_bvec4_wx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001905, VkglTestCase_001905_1, VkglTestCase_001905_2);

#define VkglTestCase_001906_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001906_2 "vector_swizzles.mediump_bvec4_wz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001906, VkglTestCase_001906_1, VkglTestCase_001906_2);

#define VkglTestCase_001907_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001907_2 "ector_swizzles.mediump_bvec4_wz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001907, VkglTestCase_001907_1, VkglTestCase_001907_2);

#define VkglTestCase_001908_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001908_2 "vector_swizzles.mediump_bvec4_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001908, VkglTestCase_001908_1, VkglTestCase_001908_2);

#define VkglTestCase_001909_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001909_2 "ector_swizzles.mediump_bvec4_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001909, VkglTestCase_001909_1, VkglTestCase_001909_2);

#define VkglTestCase_001910_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001910_2 "vector_swizzles.mediump_bvec4_yyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001910, VkglTestCase_001910_1, VkglTestCase_001910_2);

#define VkglTestCase_001911_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001911_2 "ector_swizzles.mediump_bvec4_yyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001911, VkglTestCase_001911_1, VkglTestCase_001911_2);

#define VkglTestCase_001912_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001912_2 "vector_swizzles.mediump_bvec4_wzy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001912, VkglTestCase_001912_1, VkglTestCase_001912_2);

#define VkglTestCase_001913_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001913_2 "ector_swizzles.mediump_bvec4_wzy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001913, VkglTestCase_001913_1, VkglTestCase_001913_2);

#define VkglTestCase_001914_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001914_2 "ector_swizzles.mediump_bvec4_xyzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001914, VkglTestCase_001914_1, VkglTestCase_001914_2);

#define VkglTestCase_001915_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001915_2 "ctor_swizzles.mediump_bvec4_xyzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001915, VkglTestCase_001915_1, VkglTestCase_001915_2);

#define VkglTestCase_001916_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001916_2 "ector_swizzles.mediump_bvec4_wzyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001916, VkglTestCase_001916_1, VkglTestCase_001916_2);

#define VkglTestCase_001917_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001917_2 "ctor_swizzles.mediump_bvec4_wzyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001917, VkglTestCase_001917_1, VkglTestCase_001917_2);

#define VkglTestCase_001918_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001918_2 "ector_swizzles.mediump_bvec4_xxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001918, VkglTestCase_001918_1, VkglTestCase_001918_2);

#define VkglTestCase_001919_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001919_2 "ctor_swizzles.mediump_bvec4_xxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001919, VkglTestCase_001919_1, VkglTestCase_001919_2);

#define VkglTestCase_001920_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001920_2 "ector_swizzles.mediump_bvec4_yyyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001920, VkglTestCase_001920_1, VkglTestCase_001920_2);

#define VkglTestCase_001921_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001921_2 "ctor_swizzles.mediump_bvec4_yyyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001921, VkglTestCase_001921_1, VkglTestCase_001921_2);

#define VkglTestCase_001922_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001922_2 "ector_swizzles.mediump_bvec4_wwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001922, VkglTestCase_001922_1, VkglTestCase_001922_2);

#define VkglTestCase_001923_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001923_2 "ctor_swizzles.mediump_bvec4_wwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001923, VkglTestCase_001923_1, VkglTestCase_001923_2);

#define VkglTestCase_001924_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001924_2 "ector_swizzles.mediump_bvec4_wzzw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001924, VkglTestCase_001924_1, VkglTestCase_001924_2);

#define VkglTestCase_001925_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001925_2 "ctor_swizzles.mediump_bvec4_wzzw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001925, VkglTestCase_001925_1, VkglTestCase_001925_2);

#define VkglTestCase_001926_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001926_2 "ector_swizzles.mediump_bvec4_wwwy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001926, VkglTestCase_001926_1, VkglTestCase_001926_2);

#define VkglTestCase_001927_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001927_2 "ctor_swizzles.mediump_bvec4_wwwy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001927, VkglTestCase_001927_1, VkglTestCase_001927_2);

#define VkglTestCase_001928_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001928_2 "ector_swizzles.mediump_bvec4_xyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001928, VkglTestCase_001928_1, VkglTestCase_001928_2);

#define VkglTestCase_001929_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001929_2 "ctor_swizzles.mediump_bvec4_xyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001929, VkglTestCase_001929_1, VkglTestCase_001929_2);

#define VkglTestCase_001930_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001930_2 "ector_swizzles.mediump_bvec4_zzwz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001930, VkglTestCase_001930_1, VkglTestCase_001930_2);

#define VkglTestCase_001931_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001931_2 "ctor_swizzles.mediump_bvec4_zzwz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001931, VkglTestCase_001931_1, VkglTestCase_001931_2);

#define VkglTestCase_001932_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001932_2 ".vector_swizzles.mediump_bvec4_s_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001932, VkglTestCase_001932_1, VkglTestCase_001932_2);

#define VkglTestCase_001933_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001933_2 "vector_swizzles.mediump_bvec4_s_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001933, VkglTestCase_001933_1, VkglTestCase_001933_2);

#define VkglTestCase_001934_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001934_2 ".vector_swizzles.mediump_bvec4_q_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001934, VkglTestCase_001934_1, VkglTestCase_001934_2);

#define VkglTestCase_001935_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001935_2 "vector_swizzles.mediump_bvec4_q_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001935, VkglTestCase_001935_1, VkglTestCase_001935_2);

#define VkglTestCase_001936_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001936_2 "vector_swizzles.mediump_bvec4_qs_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001936, VkglTestCase_001936_1, VkglTestCase_001936_2);

#define VkglTestCase_001937_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001937_2 "ector_swizzles.mediump_bvec4_qs_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001937, VkglTestCase_001937_1, VkglTestCase_001937_2);

#define VkglTestCase_001938_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001938_2 "vector_swizzles.mediump_bvec4_qp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001938, VkglTestCase_001938_1, VkglTestCase_001938_2);

#define VkglTestCase_001939_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001939_2 "ector_swizzles.mediump_bvec4_qp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001939, VkglTestCase_001939_1, VkglTestCase_001939_2);

#define VkglTestCase_001940_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001940_2 "vector_swizzles.mediump_bvec4_qqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001940, VkglTestCase_001940_1, VkglTestCase_001940_2);

#define VkglTestCase_001941_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001941_2 "ector_swizzles.mediump_bvec4_qqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001941, VkglTestCase_001941_1, VkglTestCase_001941_2);

#define VkglTestCase_001942_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001942_2 "vector_swizzles.mediump_bvec4_ttq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001942, VkglTestCase_001942_1, VkglTestCase_001942_2);

#define VkglTestCase_001943_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001943_2 "ector_swizzles.mediump_bvec4_ttq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001943, VkglTestCase_001943_1, VkglTestCase_001943_2);

#define VkglTestCase_001944_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001944_2 "vector_swizzles.mediump_bvec4_qpt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001944, VkglTestCase_001944_1, VkglTestCase_001944_2);

#define VkglTestCase_001945_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001945_2 "ector_swizzles.mediump_bvec4_qpt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001945, VkglTestCase_001945_1, VkglTestCase_001945_2);

#define VkglTestCase_001946_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001946_2 "ector_swizzles.mediump_bvec4_stpq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001946, VkglTestCase_001946_1, VkglTestCase_001946_2);

#define VkglTestCase_001947_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001947_2 "ctor_swizzles.mediump_bvec4_stpq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001947, VkglTestCase_001947_1, VkglTestCase_001947_2);

#define VkglTestCase_001948_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001948_2 "ector_swizzles.mediump_bvec4_qpts_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001948, VkglTestCase_001948_1, VkglTestCase_001948_2);

#define VkglTestCase_001949_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001949_2 "ctor_swizzles.mediump_bvec4_qpts_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001949, VkglTestCase_001949_1, VkglTestCase_001949_2);

#define VkglTestCase_001950_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001950_2 "ector_swizzles.mediump_bvec4_ssss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001950, VkglTestCase_001950_1, VkglTestCase_001950_2);

#define VkglTestCase_001951_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001951_2 "ctor_swizzles.mediump_bvec4_ssss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001951, VkglTestCase_001951_1, VkglTestCase_001951_2);

#define VkglTestCase_001952_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001952_2 "ector_swizzles.mediump_bvec4_tttt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001952, VkglTestCase_001952_1, VkglTestCase_001952_2);

#define VkglTestCase_001953_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001953_2 "ctor_swizzles.mediump_bvec4_tttt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001953, VkglTestCase_001953_1, VkglTestCase_001953_2);

#define VkglTestCase_001954_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001954_2 "ector_swizzles.mediump_bvec4_qqqq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001954, VkglTestCase_001954_1, VkglTestCase_001954_2);

#define VkglTestCase_001955_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001955_2 "ctor_swizzles.mediump_bvec4_qqqq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001955, VkglTestCase_001955_1, VkglTestCase_001955_2);

#define VkglTestCase_001956_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001956_2 "ector_swizzles.mediump_bvec4_qppq_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001956, VkglTestCase_001956_1, VkglTestCase_001956_2);

#define VkglTestCase_001957_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001957_2 "ctor_swizzles.mediump_bvec4_qppq_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001957, VkglTestCase_001957_1, VkglTestCase_001957_2);

#define VkglTestCase_001958_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001958_2 "ector_swizzles.mediump_bvec4_qqqt_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001958, VkglTestCase_001958_1, VkglTestCase_001958_2);

#define VkglTestCase_001959_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001959_2 "ctor_swizzles.mediump_bvec4_qqqt_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001959, VkglTestCase_001959_1, VkglTestCase_001959_2);

#define VkglTestCase_001960_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001960_2 "ector_swizzles.mediump_bvec4_stss_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001960, VkglTestCase_001960_1, VkglTestCase_001960_2);

#define VkglTestCase_001961_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001961_2 "ctor_swizzles.mediump_bvec4_stss_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001961, VkglTestCase_001961_1, VkglTestCase_001961_2);

#define VkglTestCase_001962_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001962_2 "ector_swizzles.mediump_bvec4_ppqp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001962, VkglTestCase_001962_1, VkglTestCase_001962_2);

#define VkglTestCase_001963_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001963_2 "ctor_swizzles.mediump_bvec4_ppqp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001963, VkglTestCase_001963_1, VkglTestCase_001963_2);

#define VkglTestCase_001964_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001964_2 ".vector_swizzles.mediump_bvec4_r_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001964, VkglTestCase_001964_1, VkglTestCase_001964_2);

#define VkglTestCase_001965_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001965_2 "vector_swizzles.mediump_bvec4_r_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001965, VkglTestCase_001965_1, VkglTestCase_001965_2);

#define VkglTestCase_001966_1 "dEQP-GLES2.functional.shaders.swizzles"
#define VkglTestCase_001966_2 ".vector_swizzles.mediump_bvec4_a_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001966, VkglTestCase_001966_1, VkglTestCase_001966_2);

#define VkglTestCase_001967_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001967_2 "vector_swizzles.mediump_bvec4_a_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001967, VkglTestCase_001967_1, VkglTestCase_001967_2);

#define VkglTestCase_001968_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001968_2 "vector_swizzles.mediump_bvec4_ar_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001968, VkglTestCase_001968_1, VkglTestCase_001968_2);

#define VkglTestCase_001969_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001969_2 "ector_swizzles.mediump_bvec4_ar_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001969, VkglTestCase_001969_1, VkglTestCase_001969_2);

#define VkglTestCase_001970_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001970_2 "vector_swizzles.mediump_bvec4_ab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001970, VkglTestCase_001970_1, VkglTestCase_001970_2);

#define VkglTestCase_001971_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001971_2 "ector_swizzles.mediump_bvec4_ab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001971, VkglTestCase_001971_1, VkglTestCase_001971_2);

#define VkglTestCase_001972_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001972_2 "vector_swizzles.mediump_bvec4_aaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001972, VkglTestCase_001972_1, VkglTestCase_001972_2);

#define VkglTestCase_001973_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001973_2 "ector_swizzles.mediump_bvec4_aaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001973, VkglTestCase_001973_1, VkglTestCase_001973_2);

#define VkglTestCase_001974_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001974_2 "vector_swizzles.mediump_bvec4_gga_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001974, VkglTestCase_001974_1, VkglTestCase_001974_2);

#define VkglTestCase_001975_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001975_2 "ector_swizzles.mediump_bvec4_gga_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001975, VkglTestCase_001975_1, VkglTestCase_001975_2);

#define VkglTestCase_001976_1 "dEQP-GLES2.functional.shaders.swizzles."
#define VkglTestCase_001976_2 "vector_swizzles.mediump_bvec4_abg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001976, VkglTestCase_001976_1, VkglTestCase_001976_2);

#define VkglTestCase_001977_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001977_2 "ector_swizzles.mediump_bvec4_abg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001977, VkglTestCase_001977_1, VkglTestCase_001977_2);

#define VkglTestCase_001978_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001978_2 "ector_swizzles.mediump_bvec4_rgba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001978, VkglTestCase_001978_1, VkglTestCase_001978_2);

#define VkglTestCase_001979_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001979_2 "ctor_swizzles.mediump_bvec4_rgba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001979, VkglTestCase_001979_1, VkglTestCase_001979_2);

#define VkglTestCase_001980_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001980_2 "ector_swizzles.mediump_bvec4_abgr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001980, VkglTestCase_001980_1, VkglTestCase_001980_2);

#define VkglTestCase_001981_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001981_2 "ctor_swizzles.mediump_bvec4_abgr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001981, VkglTestCase_001981_1, VkglTestCase_001981_2);

#define VkglTestCase_001982_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001982_2 "ector_swizzles.mediump_bvec4_rrrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001982, VkglTestCase_001982_1, VkglTestCase_001982_2);

#define VkglTestCase_001983_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001983_2 "ctor_swizzles.mediump_bvec4_rrrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001983, VkglTestCase_001983_1, VkglTestCase_001983_2);

#define VkglTestCase_001984_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001984_2 "ector_swizzles.mediump_bvec4_gggg_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001984, VkglTestCase_001984_1, VkglTestCase_001984_2);

#define VkglTestCase_001985_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001985_2 "ctor_swizzles.mediump_bvec4_gggg_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001985, VkglTestCase_001985_1, VkglTestCase_001985_2);

#define VkglTestCase_001986_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001986_2 "ector_swizzles.mediump_bvec4_aaaa_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001986, VkglTestCase_001986_1, VkglTestCase_001986_2);

#define VkglTestCase_001987_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001987_2 "ctor_swizzles.mediump_bvec4_aaaa_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001987, VkglTestCase_001987_1, VkglTestCase_001987_2);

#define VkglTestCase_001988_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001988_2 "ector_swizzles.mediump_bvec4_abba_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001988, VkglTestCase_001988_1, VkglTestCase_001988_2);

#define VkglTestCase_001989_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001989_2 "ctor_swizzles.mediump_bvec4_abba_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001989, VkglTestCase_001989_1, VkglTestCase_001989_2);

#define VkglTestCase_001990_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001990_2 "ector_swizzles.mediump_bvec4_aaag_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001990, VkglTestCase_001990_1, VkglTestCase_001990_2);

#define VkglTestCase_001991_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001991_2 "ctor_swizzles.mediump_bvec4_aaag_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001991, VkglTestCase_001991_1, VkglTestCase_001991_2);

#define VkglTestCase_001992_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001992_2 "ector_swizzles.mediump_bvec4_rgrr_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001992, VkglTestCase_001992_1, VkglTestCase_001992_2);

#define VkglTestCase_001993_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001993_2 "ctor_swizzles.mediump_bvec4_rgrr_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001993, VkglTestCase_001993_1, VkglTestCase_001993_2);

#define VkglTestCase_001994_1 "dEQP-GLES2.functional.shaders.swizzles.v"
#define VkglTestCase_001994_2 "ector_swizzles.mediump_bvec4_bbab_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001994, VkglTestCase_001994_1, VkglTestCase_001994_2);

#define VkglTestCase_001995_1 "dEQP-GLES2.functional.shaders.swizzles.ve"
#define VkglTestCase_001995_2 "ctor_swizzles.mediump_bvec4_bbab_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20002TestSuite, TestCase_001995, VkglTestCase_001995_1, VkglTestCase_001995_2);
