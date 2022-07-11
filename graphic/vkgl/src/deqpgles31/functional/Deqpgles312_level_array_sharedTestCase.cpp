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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009160_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009160_2 "yout.2_level_array.shared.float"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009160, VkglTestCase_009160_1, VkglTestCase_009160_2);

#define VkglTestCase_009161_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009161_2 "yout.2_level_array.shared.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009161, VkglTestCase_009161_1, VkglTestCase_009161_2);

#define VkglTestCase_009162_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009162_2 "yout.2_level_array.shared.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009162, VkglTestCase_009162_1, VkglTestCase_009162_2);

#define VkglTestCase_009163_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009163_2 "yout.2_level_array.shared.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009163, VkglTestCase_009163_1, VkglTestCase_009163_2);

#define VkglTestCase_009164_1 "dEQP-GLES31.functional.ssbo.l"
#define VkglTestCase_009164_2 "ayout.2_level_array.shared.int"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009164, VkglTestCase_009164_1, VkglTestCase_009164_2);

#define VkglTestCase_009165_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009165_2 "yout.2_level_array.shared.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009165, VkglTestCase_009165_1, VkglTestCase_009165_2);

#define VkglTestCase_009166_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009166_2 "yout.2_level_array.shared.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009166, VkglTestCase_009166_1, VkglTestCase_009166_2);

#define VkglTestCase_009167_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009167_2 "yout.2_level_array.shared.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009167, VkglTestCase_009167_1, VkglTestCase_009167_2);

#define VkglTestCase_009168_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009168_2 "yout.2_level_array.shared.uint"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009168, VkglTestCase_009168_1, VkglTestCase_009168_2);

#define VkglTestCase_009169_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009169_2 "yout.2_level_array.shared.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009169, VkglTestCase_009169_1, VkglTestCase_009169_2);

#define VkglTestCase_009170_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009170_2 "yout.2_level_array.shared.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009170, VkglTestCase_009170_1, VkglTestCase_009170_2);

#define VkglTestCase_009171_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009171_2 "yout.2_level_array.shared.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009171, VkglTestCase_009171_1, VkglTestCase_009171_2);

#define VkglTestCase_009172_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009172_2 "yout.2_level_array.shared.bool"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009172, VkglTestCase_009172_1, VkglTestCase_009172_2);

#define VkglTestCase_009173_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009173_2 "yout.2_level_array.shared.bvec2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009173, VkglTestCase_009173_1, VkglTestCase_009173_2);

#define VkglTestCase_009174_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009174_2 "yout.2_level_array.shared.bvec3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009174, VkglTestCase_009174_1, VkglTestCase_009174_2);

#define VkglTestCase_009175_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009175_2 "yout.2_level_array.shared.bvec4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009175, VkglTestCase_009175_1, VkglTestCase_009175_2);

#define VkglTestCase_009176_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009176_2 "yout.2_level_array.shared.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009176, VkglTestCase_009176_1, VkglTestCase_009176_2);

#define VkglTestCase_009177_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009177_2 "2_level_array.shared.row_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009177, VkglTestCase_009177_1, VkglTestCase_009177_2);

#define VkglTestCase_009178_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009178_2 "_level_array.shared.column_major_mat2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009178, VkglTestCase_009178_1, VkglTestCase_009178_2);

#define VkglTestCase_009179_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009179_2 "yout.2_level_array.shared.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009179, VkglTestCase_009179_1, VkglTestCase_009179_2);

#define VkglTestCase_009180_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009180_2 "2_level_array.shared.row_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009180, VkglTestCase_009180_1, VkglTestCase_009180_2);

#define VkglTestCase_009181_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009181_2 "_level_array.shared.column_major_mat3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009181, VkglTestCase_009181_1, VkglTestCase_009181_2);

#define VkglTestCase_009182_1 "dEQP-GLES31.functional.ssbo.la"
#define VkglTestCase_009182_2 "yout.2_level_array.shared.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009182, VkglTestCase_009182_1, VkglTestCase_009182_2);

#define VkglTestCase_009183_1 "dEQP-GLES31.functional.ssbo.layout."
#define VkglTestCase_009183_2 "2_level_array.shared.row_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009183, VkglTestCase_009183_1, VkglTestCase_009183_2);

#define VkglTestCase_009184_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009184_2 "_level_array.shared.column_major_mat4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009184, VkglTestCase_009184_1, VkglTestCase_009184_2);

#define VkglTestCase_009185_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009185_2 "out.2_level_array.shared.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009185, VkglTestCase_009185_1, VkglTestCase_009185_2);

#define VkglTestCase_009186_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009186_2 "_level_array.shared.row_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009186, VkglTestCase_009186_1, VkglTestCase_009186_2);

#define VkglTestCase_009187_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009187_2 "level_array.shared.column_major_mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009187, VkglTestCase_009187_1, VkglTestCase_009187_2);

#define VkglTestCase_009188_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009188_2 "out.2_level_array.shared.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009188, VkglTestCase_009188_1, VkglTestCase_009188_2);

#define VkglTestCase_009189_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009189_2 "_level_array.shared.row_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009189, VkglTestCase_009189_1, VkglTestCase_009189_2);

#define VkglTestCase_009190_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009190_2 "level_array.shared.column_major_mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009190, VkglTestCase_009190_1, VkglTestCase_009190_2);

#define VkglTestCase_009191_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009191_2 "out.2_level_array.shared.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009191, VkglTestCase_009191_1, VkglTestCase_009191_2);

#define VkglTestCase_009192_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009192_2 "_level_array.shared.row_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009192, VkglTestCase_009192_1, VkglTestCase_009192_2);

#define VkglTestCase_009193_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009193_2 "level_array.shared.column_major_mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009193, VkglTestCase_009193_1, VkglTestCase_009193_2);

#define VkglTestCase_009194_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009194_2 "out.2_level_array.shared.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009194, VkglTestCase_009194_1, VkglTestCase_009194_2);

#define VkglTestCase_009195_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009195_2 "_level_array.shared.row_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009195, VkglTestCase_009195_1, VkglTestCase_009195_2);

#define VkglTestCase_009196_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009196_2 "level_array.shared.column_major_mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009196, VkglTestCase_009196_1, VkglTestCase_009196_2);

#define VkglTestCase_009197_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009197_2 "out.2_level_array.shared.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009197, VkglTestCase_009197_1, VkglTestCase_009197_2);

#define VkglTestCase_009198_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009198_2 "_level_array.shared.row_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009198, VkglTestCase_009198_1, VkglTestCase_009198_2);

#define VkglTestCase_009199_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009199_2 "level_array.shared.column_major_mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009199, VkglTestCase_009199_1, VkglTestCase_009199_2);

#define VkglTestCase_009200_1 "dEQP-GLES31.functional.ssbo.lay"
#define VkglTestCase_009200_2 "out.2_level_array.shared.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009200, VkglTestCase_009200_1, VkglTestCase_009200_2);

#define VkglTestCase_009201_1 "dEQP-GLES31.functional.ssbo.layout.2"
#define VkglTestCase_009201_2 "_level_array.shared.row_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009201, VkglTestCase_009201_1, VkglTestCase_009201_2);

#define VkglTestCase_009202_1 "dEQP-GLES31.functional.ssbo.layout.2_"
#define VkglTestCase_009202_2 "level_array.shared.column_major_mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_009202, VkglTestCase_009202_1, VkglTestCase_009202_2);

#define VkglTestCase_010393_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010393_2 "evel_array.shared.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010393, VkglTestCase_010393_1, VkglTestCase_010393_2);

#define VkglTestCase_010394_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010394_2 "vel_array.shared.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010394, VkglTestCase_010394_1, VkglTestCase_010394_2);

#define VkglTestCase_010395_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010395_2 "level_array.shared.float_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010395, VkglTestCase_010395_1, VkglTestCase_010395_2);

#define VkglTestCase_010396_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010396_2 "level_array.shared.vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010396, VkglTestCase_010396_1, VkglTestCase_010396_2);

#define VkglTestCase_010397_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010397_2 "evel_array.shared.vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010397, VkglTestCase_010397_1, VkglTestCase_010397_2);

#define VkglTestCase_010398_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010398_2 "_level_array.shared.vec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010398, VkglTestCase_010398_1, VkglTestCase_010398_2);

#define VkglTestCase_010399_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010399_2 "level_array.shared.vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010399, VkglTestCase_010399_1, VkglTestCase_010399_2);

#define VkglTestCase_010400_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010400_2 "evel_array.shared.vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010400, VkglTestCase_010400_1, VkglTestCase_010400_2);

#define VkglTestCase_010401_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010401_2 "_level_array.shared.vec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010401, VkglTestCase_010401_1, VkglTestCase_010401_2);

#define VkglTestCase_010402_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010402_2 "level_array.shared.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010402, VkglTestCase_010402_1, VkglTestCase_010402_2);

#define VkglTestCase_010403_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010403_2 "evel_array.shared.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010403, VkglTestCase_010403_1, VkglTestCase_010403_2);

#define VkglTestCase_010404_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010404_2 "_level_array.shared.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010404, VkglTestCase_010404_1, VkglTestCase_010404_2);

#define VkglTestCase_010405_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010405_2 "level_array.shared.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010405, VkglTestCase_010405_1, VkglTestCase_010405_2);

#define VkglTestCase_010406_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010406_2 "evel_array.shared.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010406, VkglTestCase_010406_1, VkglTestCase_010406_2);

#define VkglTestCase_010407_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010407_2 "_level_array.shared.int_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010407, VkglTestCase_010407_1, VkglTestCase_010407_2);

#define VkglTestCase_010408_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010408_2 "evel_array.shared.ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010408, VkglTestCase_010408_1, VkglTestCase_010408_2);

#define VkglTestCase_010409_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010409_2 "vel_array.shared.ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010409, VkglTestCase_010409_1, VkglTestCase_010409_2);

#define VkglTestCase_010410_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010410_2 "level_array.shared.ivec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010410, VkglTestCase_010410_1, VkglTestCase_010410_2);

#define VkglTestCase_010411_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010411_2 "evel_array.shared.ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010411, VkglTestCase_010411_1, VkglTestCase_010411_2);

#define VkglTestCase_010412_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010412_2 "vel_array.shared.ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010412, VkglTestCase_010412_1, VkglTestCase_010412_2);

#define VkglTestCase_010413_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010413_2 "level_array.shared.ivec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010413, VkglTestCase_010413_1, VkglTestCase_010413_2);

#define VkglTestCase_010414_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010414_2 "evel_array.shared.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010414, VkglTestCase_010414_1, VkglTestCase_010414_2);

#define VkglTestCase_010415_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010415_2 "vel_array.shared.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010415, VkglTestCase_010415_1, VkglTestCase_010415_2);

#define VkglTestCase_010416_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010416_2 "level_array.shared.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010416, VkglTestCase_010416_1, VkglTestCase_010416_2);

#define VkglTestCase_010417_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010417_2 "level_array.shared.uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010417, VkglTestCase_010417_1, VkglTestCase_010417_2);

#define VkglTestCase_010418_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010418_2 "evel_array.shared.uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010418, VkglTestCase_010418_1, VkglTestCase_010418_2);

#define VkglTestCase_010419_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010419_2 "_level_array.shared.uint_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010419, VkglTestCase_010419_1, VkglTestCase_010419_2);

#define VkglTestCase_010420_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010420_2 "evel_array.shared.uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010420, VkglTestCase_010420_1, VkglTestCase_010420_2);

#define VkglTestCase_010421_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010421_2 "vel_array.shared.uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010421, VkglTestCase_010421_1, VkglTestCase_010421_2);

#define VkglTestCase_010422_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010422_2 "level_array.shared.uvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010422, VkglTestCase_010422_1, VkglTestCase_010422_2);

#define VkglTestCase_010423_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010423_2 "evel_array.shared.uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010423, VkglTestCase_010423_1, VkglTestCase_010423_2);

#define VkglTestCase_010424_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010424_2 "vel_array.shared.uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010424, VkglTestCase_010424_1, VkglTestCase_010424_2);

#define VkglTestCase_010425_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010425_2 "level_array.shared.uvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010425, VkglTestCase_010425_1, VkglTestCase_010425_2);

#define VkglTestCase_010426_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010426_2 "evel_array.shared.uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010426, VkglTestCase_010426_1, VkglTestCase_010426_2);

#define VkglTestCase_010427_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010427_2 "vel_array.shared.uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010427, VkglTestCase_010427_1, VkglTestCase_010427_2);

#define VkglTestCase_010428_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010428_2 "level_array.shared.uvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010428, VkglTestCase_010428_1, VkglTestCase_010428_2);

#define VkglTestCase_010429_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010429_2 "level_array.shared.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010429, VkglTestCase_010429_1, VkglTestCase_010429_2);

#define VkglTestCase_010430_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010430_2 "evel_array.shared.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010430, VkglTestCase_010430_1, VkglTestCase_010430_2);

#define VkglTestCase_010431_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010431_2 "_level_array.shared.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010431, VkglTestCase_010431_1, VkglTestCase_010431_2);

#define VkglTestCase_010432_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010432_2 "evel_array.shared.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010432, VkglTestCase_010432_1, VkglTestCase_010432_2);

#define VkglTestCase_010433_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010433_2 "vel_array.shared.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010433, VkglTestCase_010433_1, VkglTestCase_010433_2);

#define VkglTestCase_010434_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010434_2 "level_array.shared.bvec2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010434, VkglTestCase_010434_1, VkglTestCase_010434_2);

#define VkglTestCase_010435_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010435_2 "evel_array.shared.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010435, VkglTestCase_010435_1, VkglTestCase_010435_2);

#define VkglTestCase_010436_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010436_2 "vel_array.shared.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010436, VkglTestCase_010436_1, VkglTestCase_010436_2);

#define VkglTestCase_010437_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010437_2 "level_array.shared.bvec3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010437, VkglTestCase_010437_1, VkglTestCase_010437_2);

#define VkglTestCase_010438_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010438_2 "evel_array.shared.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010438, VkglTestCase_010438_1, VkglTestCase_010438_2);

#define VkglTestCase_010439_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010439_2 "vel_array.shared.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010439, VkglTestCase_010439_1, VkglTestCase_010439_2);

#define VkglTestCase_010440_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010440_2 "level_array.shared.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010440, VkglTestCase_010440_1, VkglTestCase_010440_2);

#define VkglTestCase_010441_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010441_2 "level_array.shared.mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010441, VkglTestCase_010441_1, VkglTestCase_010441_2);

#define VkglTestCase_010442_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010442_2 "evel_array.shared.mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010442, VkglTestCase_010442_1, VkglTestCase_010442_2);

#define VkglTestCase_010443_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010443_2 "_level_array.shared.mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010443, VkglTestCase_010443_1, VkglTestCase_010443_2);

#define VkglTestCase_010444_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010444_2 "_array.shared.row_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010444, VkglTestCase_010444_1, VkglTestCase_010444_2);

#define VkglTestCase_010445_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010445_2 "array.shared.row_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010445, VkglTestCase_010445_1, VkglTestCase_010445_2);

#define VkglTestCase_010446_1 "dEQP-GLES31.functional.ubo.2_leve"
#define VkglTestCase_010446_2 "l_array.shared.row_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010446, VkglTestCase_010446_1, VkglTestCase_010446_2);

#define VkglTestCase_010447_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010447_2 "rray.shared.column_major_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010447, VkglTestCase_010447_1, VkglTestCase_010447_2);

#define VkglTestCase_010448_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010448_2 "ray.shared.column_major_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010448, VkglTestCase_010448_1, VkglTestCase_010448_2);

#define VkglTestCase_010449_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010449_2 "array.shared.column_major_mat2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010449, VkglTestCase_010449_1, VkglTestCase_010449_2);

#define VkglTestCase_010450_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010450_2 "level_array.shared.mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010450, VkglTestCase_010450_1, VkglTestCase_010450_2);

#define VkglTestCase_010451_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010451_2 "evel_array.shared.mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010451, VkglTestCase_010451_1, VkglTestCase_010451_2);

#define VkglTestCase_010452_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010452_2 "_level_array.shared.mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010452, VkglTestCase_010452_1, VkglTestCase_010452_2);

#define VkglTestCase_010453_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010453_2 "_array.shared.row_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010453, VkglTestCase_010453_1, VkglTestCase_010453_2);

#define VkglTestCase_010454_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010454_2 "array.shared.row_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010454, VkglTestCase_010454_1, VkglTestCase_010454_2);

#define VkglTestCase_010455_1 "dEQP-GLES31.functional.ubo.2_leve"
#define VkglTestCase_010455_2 "l_array.shared.row_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010455, VkglTestCase_010455_1, VkglTestCase_010455_2);

#define VkglTestCase_010456_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010456_2 "rray.shared.column_major_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010456, VkglTestCase_010456_1, VkglTestCase_010456_2);

#define VkglTestCase_010457_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010457_2 "ray.shared.column_major_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010457, VkglTestCase_010457_1, VkglTestCase_010457_2);

#define VkglTestCase_010458_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010458_2 "array.shared.column_major_mat3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010458, VkglTestCase_010458_1, VkglTestCase_010458_2);

#define VkglTestCase_010459_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010459_2 "level_array.shared.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010459, VkglTestCase_010459_1, VkglTestCase_010459_2);

#define VkglTestCase_010460_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010460_2 "evel_array.shared.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010460, VkglTestCase_010460_1, VkglTestCase_010460_2);

#define VkglTestCase_010461_1 "dEQP-GLES31.functional.ubo.2"
#define VkglTestCase_010461_2 "_level_array.shared.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010461, VkglTestCase_010461_1, VkglTestCase_010461_2);

#define VkglTestCase_010462_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010462_2 "_array.shared.row_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010462, VkglTestCase_010462_1, VkglTestCase_010462_2);

#define VkglTestCase_010463_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010463_2 "array.shared.row_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010463, VkglTestCase_010463_1, VkglTestCase_010463_2);

#define VkglTestCase_010464_1 "dEQP-GLES31.functional.ubo.2_leve"
#define VkglTestCase_010464_2 "l_array.shared.row_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010464, VkglTestCase_010464_1, VkglTestCase_010464_2);

#define VkglTestCase_010465_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010465_2 "rray.shared.column_major_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010465, VkglTestCase_010465_1, VkglTestCase_010465_2);

#define VkglTestCase_010466_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010466_2 "ray.shared.column_major_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010466, VkglTestCase_010466_1, VkglTestCase_010466_2);

#define VkglTestCase_010467_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010467_2 "array.shared.column_major_mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010467, VkglTestCase_010467_1, VkglTestCase_010467_2);

#define VkglTestCase_010468_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010468_2 "evel_array.shared.mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010468, VkglTestCase_010468_1, VkglTestCase_010468_2);

#define VkglTestCase_010469_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010469_2 "vel_array.shared.mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010469, VkglTestCase_010469_1, VkglTestCase_010469_2);

#define VkglTestCase_010470_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010470_2 "level_array.shared.mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010470, VkglTestCase_010470_1, VkglTestCase_010470_2);

#define VkglTestCase_010471_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010471_2 "array.shared.row_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010471, VkglTestCase_010471_1, VkglTestCase_010471_2);

#define VkglTestCase_010472_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010472_2 "rray.shared.row_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010472, VkglTestCase_010472_1, VkglTestCase_010472_2);

#define VkglTestCase_010473_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010473_2 "_array.shared.row_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010473, VkglTestCase_010473_1, VkglTestCase_010473_2);

#define VkglTestCase_010474_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010474_2 "ray.shared.column_major_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010474, VkglTestCase_010474_1, VkglTestCase_010474_2);

#define VkglTestCase_010475_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010475_2 "ay.shared.column_major_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010475, VkglTestCase_010475_1, VkglTestCase_010475_2);

#define VkglTestCase_010476_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010476_2 "rray.shared.column_major_mat2x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010476, VkglTestCase_010476_1, VkglTestCase_010476_2);

#define VkglTestCase_010477_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010477_2 "evel_array.shared.mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010477, VkglTestCase_010477_1, VkglTestCase_010477_2);

#define VkglTestCase_010478_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010478_2 "vel_array.shared.mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010478, VkglTestCase_010478_1, VkglTestCase_010478_2);

#define VkglTestCase_010479_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010479_2 "level_array.shared.mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010479, VkglTestCase_010479_1, VkglTestCase_010479_2);

#define VkglTestCase_010480_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010480_2 "array.shared.row_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010480, VkglTestCase_010480_1, VkglTestCase_010480_2);

#define VkglTestCase_010481_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010481_2 "rray.shared.row_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010481, VkglTestCase_010481_1, VkglTestCase_010481_2);

#define VkglTestCase_010482_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010482_2 "_array.shared.row_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010482, VkglTestCase_010482_1, VkglTestCase_010482_2);

#define VkglTestCase_010483_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010483_2 "ray.shared.column_major_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010483, VkglTestCase_010483_1, VkglTestCase_010483_2);

#define VkglTestCase_010484_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010484_2 "ay.shared.column_major_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010484, VkglTestCase_010484_1, VkglTestCase_010484_2);

#define VkglTestCase_010485_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010485_2 "rray.shared.column_major_mat2x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010485, VkglTestCase_010485_1, VkglTestCase_010485_2);

#define VkglTestCase_010486_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010486_2 "evel_array.shared.mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010486, VkglTestCase_010486_1, VkglTestCase_010486_2);

#define VkglTestCase_010487_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010487_2 "vel_array.shared.mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010487, VkglTestCase_010487_1, VkglTestCase_010487_2);

#define VkglTestCase_010488_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010488_2 "level_array.shared.mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010488, VkglTestCase_010488_1, VkglTestCase_010488_2);

#define VkglTestCase_010489_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010489_2 "array.shared.row_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010489, VkglTestCase_010489_1, VkglTestCase_010489_2);

#define VkglTestCase_010490_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010490_2 "rray.shared.row_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010490, VkglTestCase_010490_1, VkglTestCase_010490_2);

#define VkglTestCase_010491_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010491_2 "_array.shared.row_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010491, VkglTestCase_010491_1, VkglTestCase_010491_2);

#define VkglTestCase_010492_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010492_2 "ray.shared.column_major_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010492, VkglTestCase_010492_1, VkglTestCase_010492_2);

#define VkglTestCase_010493_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010493_2 "ay.shared.column_major_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010493, VkglTestCase_010493_1, VkglTestCase_010493_2);

#define VkglTestCase_010494_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010494_2 "rray.shared.column_major_mat3x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010494, VkglTestCase_010494_1, VkglTestCase_010494_2);

#define VkglTestCase_010495_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010495_2 "evel_array.shared.mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010495, VkglTestCase_010495_1, VkglTestCase_010495_2);

#define VkglTestCase_010496_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010496_2 "vel_array.shared.mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010496, VkglTestCase_010496_1, VkglTestCase_010496_2);

#define VkglTestCase_010497_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010497_2 "level_array.shared.mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010497, VkglTestCase_010497_1, VkglTestCase_010497_2);

#define VkglTestCase_010498_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010498_2 "array.shared.row_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010498, VkglTestCase_010498_1, VkglTestCase_010498_2);

#define VkglTestCase_010499_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010499_2 "rray.shared.row_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010499, VkglTestCase_010499_1, VkglTestCase_010499_2);

#define VkglTestCase_010500_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010500_2 "_array.shared.row_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010500, VkglTestCase_010500_1, VkglTestCase_010500_2);

#define VkglTestCase_010501_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010501_2 "ray.shared.column_major_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010501, VkglTestCase_010501_1, VkglTestCase_010501_2);

#define VkglTestCase_010502_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010502_2 "ay.shared.column_major_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010502, VkglTestCase_010502_1, VkglTestCase_010502_2);

#define VkglTestCase_010503_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010503_2 "rray.shared.column_major_mat3x4_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010503, VkglTestCase_010503_1, VkglTestCase_010503_2);

#define VkglTestCase_010504_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010504_2 "evel_array.shared.mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010504, VkglTestCase_010504_1, VkglTestCase_010504_2);

#define VkglTestCase_010505_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010505_2 "vel_array.shared.mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010505, VkglTestCase_010505_1, VkglTestCase_010505_2);

#define VkglTestCase_010506_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010506_2 "level_array.shared.mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010506, VkglTestCase_010506_1, VkglTestCase_010506_2);

#define VkglTestCase_010507_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010507_2 "array.shared.row_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010507, VkglTestCase_010507_1, VkglTestCase_010507_2);

#define VkglTestCase_010508_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010508_2 "rray.shared.row_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010508, VkglTestCase_010508_1, VkglTestCase_010508_2);

#define VkglTestCase_010509_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010509_2 "_array.shared.row_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010509, VkglTestCase_010509_1, VkglTestCase_010509_2);

#define VkglTestCase_010510_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010510_2 "ray.shared.column_major_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010510, VkglTestCase_010510_1, VkglTestCase_010510_2);

#define VkglTestCase_010511_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010511_2 "ay.shared.column_major_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010511, VkglTestCase_010511_1, VkglTestCase_010511_2);

#define VkglTestCase_010512_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010512_2 "rray.shared.column_major_mat4x2_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010512, VkglTestCase_010512_1, VkglTestCase_010512_2);

#define VkglTestCase_010513_1 "dEQP-GLES31.functional.ubo.2_l"
#define VkglTestCase_010513_2 "evel_array.shared.mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010513, VkglTestCase_010513_1, VkglTestCase_010513_2);

#define VkglTestCase_010514_1 "dEQP-GLES31.functional.ubo.2_le"
#define VkglTestCase_010514_2 "vel_array.shared.mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010514, VkglTestCase_010514_1, VkglTestCase_010514_2);

#define VkglTestCase_010515_1 "dEQP-GLES31.functional.ubo.2_"
#define VkglTestCase_010515_2 "level_array.shared.mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010515, VkglTestCase_010515_1, VkglTestCase_010515_2);

#define VkglTestCase_010516_1 "dEQP-GLES31.functional.ubo.2_level_"
#define VkglTestCase_010516_2 "array.shared.row_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010516, VkglTestCase_010516_1, VkglTestCase_010516_2);

#define VkglTestCase_010517_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010517_2 "rray.shared.row_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010517, VkglTestCase_010517_1, VkglTestCase_010517_2);

#define VkglTestCase_010518_1 "dEQP-GLES31.functional.ubo.2_level"
#define VkglTestCase_010518_2 "_array.shared.row_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010518, VkglTestCase_010518_1, VkglTestCase_010518_2);

#define VkglTestCase_010519_1 "dEQP-GLES31.functional.ubo.2_level_ar"
#define VkglTestCase_010519_2 "ray.shared.column_major_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010519, VkglTestCase_010519_1, VkglTestCase_010519_2);

#define VkglTestCase_010520_1 "dEQP-GLES31.functional.ubo.2_level_arr"
#define VkglTestCase_010520_2 "ay.shared.column_major_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010520, VkglTestCase_010520_1, VkglTestCase_010520_2);

#define VkglTestCase_010521_1 "dEQP-GLES31.functional.ubo.2_level_a"
#define VkglTestCase_010521_2 "rray.shared.column_major_mat4x3_both"
SHRINK_HWTEST_F(ActsDeqpgles310010TestSuite, TestCase_010521, VkglTestCase_010521_1, VkglTestCase_010521_2);
