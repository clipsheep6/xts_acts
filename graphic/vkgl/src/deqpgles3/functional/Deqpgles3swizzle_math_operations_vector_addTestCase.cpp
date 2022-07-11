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
#include "../ActsDeqpgles30004TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_003494_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003494_2 "perations.vector_add.mediump_vec2_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003494, VkglTestCase_003494_1, VkglTestCase_003494_2);

#define VkglTestCase_003495_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003495_2 "erations.vector_add.mediump_vec2_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003495, VkglTestCase_003495_1, VkglTestCase_003495_2);

#define VkglTestCase_003496_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003496_2 "erations.vector_add.mediump_vec2_xx_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003496, VkglTestCase_003496_1, VkglTestCase_003496_2);

#define VkglTestCase_003497_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003497_2 "rations.vector_add.mediump_vec2_xx_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003497, VkglTestCase_003497_1, VkglTestCase_003497_2);

#define VkglTestCase_003498_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003498_2 "erations.vector_add.mediump_vec2_xy_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003498, VkglTestCase_003498_1, VkglTestCase_003498_2);

#define VkglTestCase_003499_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003499_2 "rations.vector_add.mediump_vec2_xy_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003499, VkglTestCase_003499_1, VkglTestCase_003499_2);

#define VkglTestCase_003500_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003500_2 "erations.vector_add.mediump_vec2_yx_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003500, VkglTestCase_003500_1, VkglTestCase_003500_2);

#define VkglTestCase_003501_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003501_2 "rations.vector_add.mediump_vec2_yx_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003501, VkglTestCase_003501_1, VkglTestCase_003501_2);

#define VkglTestCase_003502_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003502_2 "rations.vector_add.mediump_vec2_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003502, VkglTestCase_003502_1, VkglTestCase_003502_2);

#define VkglTestCase_003503_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003503_2 "ations.vector_add.mediump_vec2_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003503, VkglTestCase_003503_1, VkglTestCase_003503_2);

#define VkglTestCase_003504_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003504_2 "ations.vector_add.mediump_vec2_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003504, VkglTestCase_003504_1, VkglTestCase_003504_2);

#define VkglTestCase_003505_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003505_2 "tions.vector_add.mediump_vec2_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003505, VkglTestCase_003505_1, VkglTestCase_003505_2);

#define VkglTestCase_003506_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003506_2 "ations.vector_add.mediump_vec2_yxyx_xyxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003506, VkglTestCase_003506_1, VkglTestCase_003506_2);

#define VkglTestCase_003507_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003507_2 "tions.vector_add.mediump_vec2_yxyx_xyxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003507, VkglTestCase_003507_1, VkglTestCase_003507_2);

#define VkglTestCase_003508_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003508_2 "perations.vector_add.mediump_vec3_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003508, VkglTestCase_003508_1, VkglTestCase_003508_2);

#define VkglTestCase_003509_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003509_2 "erations.vector_add.mediump_vec3_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003509, VkglTestCase_003509_1, VkglTestCase_003509_2);

#define VkglTestCase_003510_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003510_2 "perations.vector_add.mediump_vec3_z_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003510, VkglTestCase_003510_1, VkglTestCase_003510_2);

#define VkglTestCase_003511_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003511_2 "erations.vector_add.mediump_vec3_z_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003511, VkglTestCase_003511_1, VkglTestCase_003511_2);

#define VkglTestCase_003512_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003512_2 "erations.vector_add.mediump_vec3_xz_zx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003512, VkglTestCase_003512_1, VkglTestCase_003512_2);

#define VkglTestCase_003513_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003513_2 "rations.vector_add.mediump_vec3_xz_zx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003513, VkglTestCase_003513_1, VkglTestCase_003513_2);

#define VkglTestCase_003514_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003514_2 "erations.vector_add.mediump_vec3_zz_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003514, VkglTestCase_003514_1, VkglTestCase_003514_2);

#define VkglTestCase_003515_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003515_2 "rations.vector_add.mediump_vec3_zz_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003515, VkglTestCase_003515_1, VkglTestCase_003515_2);

#define VkglTestCase_003516_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003516_2 "rations.vector_add.mediump_vec3_xyz_yzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003516, VkglTestCase_003516_1, VkglTestCase_003516_2);

#define VkglTestCase_003517_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003517_2 "ations.vector_add.mediump_vec3_xyz_yzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003517, VkglTestCase_003517_1, VkglTestCase_003517_2);

#define VkglTestCase_003518_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003518_2 "rations.vector_add.mediump_vec3_zyx_yxz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003518, VkglTestCase_003518_1, VkglTestCase_003518_2);

#define VkglTestCase_003519_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003519_2 "ations.vector_add.mediump_vec3_zyx_yxz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003519, VkglTestCase_003519_1, VkglTestCase_003519_2);

#define VkglTestCase_003520_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003520_2 "rations.vector_add.mediump_vec3_xxx_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003520, VkglTestCase_003520_1, VkglTestCase_003520_2);

#define VkglTestCase_003521_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003521_2 "ations.vector_add.mediump_vec3_xxx_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003521, VkglTestCase_003521_1, VkglTestCase_003521_2);

#define VkglTestCase_003522_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003522_2 "rations.vector_add.mediump_vec3_zzz_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003522, VkglTestCase_003522_1, VkglTestCase_003522_2);

#define VkglTestCase_003523_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003523_2 "ations.vector_add.mediump_vec3_zzz_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003523, VkglTestCase_003523_1, VkglTestCase_003523_2);

#define VkglTestCase_003524_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003524_2 "rations.vector_add.mediump_vec3_zzy_zyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003524, VkglTestCase_003524_1, VkglTestCase_003524_2);

#define VkglTestCase_003525_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003525_2 "ations.vector_add.mediump_vec3_zzy_zyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003525, VkglTestCase_003525_1, VkglTestCase_003525_2);

#define VkglTestCase_003526_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003526_2 "rations.vector_add.mediump_vec3_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003526, VkglTestCase_003526_1, VkglTestCase_003526_2);

#define VkglTestCase_003527_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003527_2 "ations.vector_add.mediump_vec3_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003527, VkglTestCase_003527_1, VkglTestCase_003527_2);

#define VkglTestCase_003528_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003528_2 "rations.vector_add.mediump_vec3_xzx_zxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003528, VkglTestCase_003528_1, VkglTestCase_003528_2);

#define VkglTestCase_003529_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003529_2 "ations.vector_add.mediump_vec3_xzx_zxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003529, VkglTestCase_003529_1, VkglTestCase_003529_2);

#define VkglTestCase_003530_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003530_2 "ations.vector_add.mediump_vec3_xyyx_yyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003530, VkglTestCase_003530_1, VkglTestCase_003530_2);

#define VkglTestCase_003531_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003531_2 "tions.vector_add.mediump_vec3_xyyx_yyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003531, VkglTestCase_003531_1, VkglTestCase_003531_2);

#define VkglTestCase_003532_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003532_2 "ations.vector_add.mediump_vec3_zxyz_xyzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003532, VkglTestCase_003532_1, VkglTestCase_003532_2);

#define VkglTestCase_003533_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003533_2 "tions.vector_add.mediump_vec3_zxyz_xyzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003533, VkglTestCase_003533_1, VkglTestCase_003533_2);

#define VkglTestCase_003534_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003534_2 "perations.vector_add.mediump_vec4_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003534, VkglTestCase_003534_1, VkglTestCase_003534_2);

#define VkglTestCase_003535_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003535_2 "erations.vector_add.mediump_vec4_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003535, VkglTestCase_003535_1, VkglTestCase_003535_2);

#define VkglTestCase_003536_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003536_2 "perations.vector_add.mediump_vec4_w_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003536, VkglTestCase_003536_1, VkglTestCase_003536_2);

#define VkglTestCase_003537_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003537_2 "erations.vector_add.mediump_vec4_w_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003537, VkglTestCase_003537_1, VkglTestCase_003537_2);

#define VkglTestCase_003538_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003538_2 "erations.vector_add.mediump_vec4_wx_xw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003538, VkglTestCase_003538_1, VkglTestCase_003538_2);

#define VkglTestCase_003539_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003539_2 "rations.vector_add.mediump_vec4_wx_xw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003539, VkglTestCase_003539_1, VkglTestCase_003539_2);

#define VkglTestCase_003540_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003540_2 "erations.vector_add.mediump_vec4_wz_zw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003540, VkglTestCase_003540_1, VkglTestCase_003540_2);

#define VkglTestCase_003541_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003541_2 "rations.vector_add.mediump_vec4_wz_zw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003541, VkglTestCase_003541_1, VkglTestCase_003541_2);

#define VkglTestCase_003542_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003542_2 "rations.vector_add.mediump_vec4_www_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003542, VkglTestCase_003542_1, VkglTestCase_003542_2);

#define VkglTestCase_003543_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003543_2 "ations.vector_add.mediump_vec4_www_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003543, VkglTestCase_003543_1, VkglTestCase_003543_2);

#define VkglTestCase_003544_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003544_2 "rations.vector_add.mediump_vec4_yyw_ywy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003544, VkglTestCase_003544_1, VkglTestCase_003544_2);

#define VkglTestCase_003545_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003545_2 "ations.vector_add.mediump_vec4_yyw_ywy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003545, VkglTestCase_003545_1, VkglTestCase_003545_2);

#define VkglTestCase_003546_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003546_2 "rations.vector_add.mediump_vec4_wzy_zyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003546, VkglTestCase_003546_1, VkglTestCase_003546_2);

#define VkglTestCase_003547_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003547_2 "ations.vector_add.mediump_vec4_wzy_zyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003547, VkglTestCase_003547_1, VkglTestCase_003547_2);

#define VkglTestCase_003548_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003548_2 "ations.vector_add.mediump_vec4_xyzw_yzwx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003548, VkglTestCase_003548_1, VkglTestCase_003548_2);

#define VkglTestCase_003549_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003549_2 "tions.vector_add.mediump_vec4_xyzw_yzwx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003549, VkglTestCase_003549_1, VkglTestCase_003549_2);

#define VkglTestCase_003550_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003550_2 "ations.vector_add.mediump_vec4_wzyx_zyxw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003550, VkglTestCase_003550_1, VkglTestCase_003550_2);

#define VkglTestCase_003551_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003551_2 "tions.vector_add.mediump_vec4_wzyx_zyxw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003551, VkglTestCase_003551_1, VkglTestCase_003551_2);

#define VkglTestCase_003552_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003552_2 "ations.vector_add.mediump_vec4_xyxy_yxyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003552, VkglTestCase_003552_1, VkglTestCase_003552_2);

#define VkglTestCase_003553_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003553_2 "tions.vector_add.mediump_vec4_xyxy_yxyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003553, VkglTestCase_003553_1, VkglTestCase_003553_2);

#define VkglTestCase_003554_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003554_2 "ations.vector_add.mediump_vec4_yzzy_zzyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003554, VkglTestCase_003554_1, VkglTestCase_003554_2);

#define VkglTestCase_003555_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003555_2 "tions.vector_add.mediump_vec4_yzzy_zzyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003555, VkglTestCase_003555_1, VkglTestCase_003555_2);

#define VkglTestCase_003556_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003556_2 "ations.vector_add.mediump_vec4_wxww_xwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003556, VkglTestCase_003556_1, VkglTestCase_003556_2);

#define VkglTestCase_003557_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003557_2 "tions.vector_add.mediump_vec4_wxww_xwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003557, VkglTestCase_003557_1, VkglTestCase_003557_2);

#define VkglTestCase_003558_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003558_2 "ations.vector_add.mediump_vec4_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003558, VkglTestCase_003558_1, VkglTestCase_003558_2);

#define VkglTestCase_003559_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003559_2 "tions.vector_add.mediump_vec4_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003559, VkglTestCase_003559_1, VkglTestCase_003559_2);

#define VkglTestCase_003560_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003560_2 "ations.vector_add.mediump_vec4_zzzz_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003560, VkglTestCase_003560_1, VkglTestCase_003560_2);

#define VkglTestCase_003561_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003561_2 "tions.vector_add.mediump_vec4_zzzz_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003561, VkglTestCase_003561_1, VkglTestCase_003561_2);

#define VkglTestCase_003562_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003562_2 "perations.vector_add.mediump_ivec2_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003562, VkglTestCase_003562_1, VkglTestCase_003562_2);

#define VkglTestCase_003563_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003563_2 "erations.vector_add.mediump_ivec2_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003563, VkglTestCase_003563_1, VkglTestCase_003563_2);

#define VkglTestCase_003564_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003564_2 "erations.vector_add.mediump_ivec2_xx_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003564, VkglTestCase_003564_1, VkglTestCase_003564_2);

#define VkglTestCase_003565_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003565_2 "rations.vector_add.mediump_ivec2_xx_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003565, VkglTestCase_003565_1, VkglTestCase_003565_2);

#define VkglTestCase_003566_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003566_2 "erations.vector_add.mediump_ivec2_xy_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003566, VkglTestCase_003566_1, VkglTestCase_003566_2);

#define VkglTestCase_003567_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003567_2 "rations.vector_add.mediump_ivec2_xy_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003567, VkglTestCase_003567_1, VkglTestCase_003567_2);

#define VkglTestCase_003568_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003568_2 "erations.vector_add.mediump_ivec2_yx_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003568, VkglTestCase_003568_1, VkglTestCase_003568_2);

#define VkglTestCase_003569_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003569_2 "rations.vector_add.mediump_ivec2_yx_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003569, VkglTestCase_003569_1, VkglTestCase_003569_2);

#define VkglTestCase_003570_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003570_2 "rations.vector_add.mediump_ivec2_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003570, VkglTestCase_003570_1, VkglTestCase_003570_2);

#define VkglTestCase_003571_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003571_2 "ations.vector_add.mediump_ivec2_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003571, VkglTestCase_003571_1, VkglTestCase_003571_2);

#define VkglTestCase_003572_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003572_2 "ations.vector_add.mediump_ivec2_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003572, VkglTestCase_003572_1, VkglTestCase_003572_2);

#define VkglTestCase_003573_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003573_2 "tions.vector_add.mediump_ivec2_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003573, VkglTestCase_003573_1, VkglTestCase_003573_2);

#define VkglTestCase_003574_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003574_2 "ations.vector_add.mediump_ivec2_yxyx_xyxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003574, VkglTestCase_003574_1, VkglTestCase_003574_2);

#define VkglTestCase_003575_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003575_2 "tions.vector_add.mediump_ivec2_yxyx_xyxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003575, VkglTestCase_003575_1, VkglTestCase_003575_2);

#define VkglTestCase_003576_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003576_2 "perations.vector_add.mediump_ivec3_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003576, VkglTestCase_003576_1, VkglTestCase_003576_2);

#define VkglTestCase_003577_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003577_2 "erations.vector_add.mediump_ivec3_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003577, VkglTestCase_003577_1, VkglTestCase_003577_2);

#define VkglTestCase_003578_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003578_2 "perations.vector_add.mediump_ivec3_z_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003578, VkglTestCase_003578_1, VkglTestCase_003578_2);

#define VkglTestCase_003579_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003579_2 "erations.vector_add.mediump_ivec3_z_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003579, VkglTestCase_003579_1, VkglTestCase_003579_2);

#define VkglTestCase_003580_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003580_2 "erations.vector_add.mediump_ivec3_xz_zx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003580, VkglTestCase_003580_1, VkglTestCase_003580_2);

#define VkglTestCase_003581_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003581_2 "rations.vector_add.mediump_ivec3_xz_zx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003581, VkglTestCase_003581_1, VkglTestCase_003581_2);

#define VkglTestCase_003582_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003582_2 "erations.vector_add.mediump_ivec3_zz_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003582, VkglTestCase_003582_1, VkglTestCase_003582_2);

#define VkglTestCase_003583_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003583_2 "rations.vector_add.mediump_ivec3_zz_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003583, VkglTestCase_003583_1, VkglTestCase_003583_2);

#define VkglTestCase_003584_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003584_2 "rations.vector_add.mediump_ivec3_xyz_yzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003584, VkglTestCase_003584_1, VkglTestCase_003584_2);

#define VkglTestCase_003585_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003585_2 "ations.vector_add.mediump_ivec3_xyz_yzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003585, VkglTestCase_003585_1, VkglTestCase_003585_2);

#define VkglTestCase_003586_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003586_2 "rations.vector_add.mediump_ivec3_zyx_yxz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003586, VkglTestCase_003586_1, VkglTestCase_003586_2);

#define VkglTestCase_003587_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003587_2 "ations.vector_add.mediump_ivec3_zyx_yxz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003587, VkglTestCase_003587_1, VkglTestCase_003587_2);

#define VkglTestCase_003588_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003588_2 "rations.vector_add.mediump_ivec3_xxx_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003588, VkglTestCase_003588_1, VkglTestCase_003588_2);

#define VkglTestCase_003589_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003589_2 "ations.vector_add.mediump_ivec3_xxx_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003589, VkglTestCase_003589_1, VkglTestCase_003589_2);

#define VkglTestCase_003590_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003590_2 "rations.vector_add.mediump_ivec3_zzz_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003590, VkglTestCase_003590_1, VkglTestCase_003590_2);

#define VkglTestCase_003591_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003591_2 "ations.vector_add.mediump_ivec3_zzz_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003591, VkglTestCase_003591_1, VkglTestCase_003591_2);

#define VkglTestCase_003592_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003592_2 "rations.vector_add.mediump_ivec3_zzy_zyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003592, VkglTestCase_003592_1, VkglTestCase_003592_2);

#define VkglTestCase_003593_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003593_2 "ations.vector_add.mediump_ivec3_zzy_zyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003593, VkglTestCase_003593_1, VkglTestCase_003593_2);

#define VkglTestCase_003594_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003594_2 "rations.vector_add.mediump_ivec3_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003594, VkglTestCase_003594_1, VkglTestCase_003594_2);

#define VkglTestCase_003595_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003595_2 "ations.vector_add.mediump_ivec3_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003595, VkglTestCase_003595_1, VkglTestCase_003595_2);

#define VkglTestCase_003596_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003596_2 "rations.vector_add.mediump_ivec3_xzx_zxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003596, VkglTestCase_003596_1, VkglTestCase_003596_2);

#define VkglTestCase_003597_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003597_2 "ations.vector_add.mediump_ivec3_xzx_zxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003597, VkglTestCase_003597_1, VkglTestCase_003597_2);

#define VkglTestCase_003598_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003598_2 "ations.vector_add.mediump_ivec3_xyyx_yyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003598, VkglTestCase_003598_1, VkglTestCase_003598_2);

#define VkglTestCase_003599_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003599_2 "tions.vector_add.mediump_ivec3_xyyx_yyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003599, VkglTestCase_003599_1, VkglTestCase_003599_2);

#define VkglTestCase_003600_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003600_2 "ations.vector_add.mediump_ivec3_zxyz_xyzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003600, VkglTestCase_003600_1, VkglTestCase_003600_2);

#define VkglTestCase_003601_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003601_2 "tions.vector_add.mediump_ivec3_zxyz_xyzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003601, VkglTestCase_003601_1, VkglTestCase_003601_2);

#define VkglTestCase_003602_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003602_2 "perations.vector_add.mediump_ivec4_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003602, VkglTestCase_003602_1, VkglTestCase_003602_2);

#define VkglTestCase_003603_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003603_2 "erations.vector_add.mediump_ivec4_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003603, VkglTestCase_003603_1, VkglTestCase_003603_2);

#define VkglTestCase_003604_1 "dEQP-GLES3.functional.shaders.swizzle_math_o"
#define VkglTestCase_003604_2 "perations.vector_add.mediump_ivec4_w_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003604, VkglTestCase_003604_1, VkglTestCase_003604_2);

#define VkglTestCase_003605_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003605_2 "erations.vector_add.mediump_ivec4_w_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003605, VkglTestCase_003605_1, VkglTestCase_003605_2);

#define VkglTestCase_003606_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003606_2 "erations.vector_add.mediump_ivec4_wx_xw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003606, VkglTestCase_003606_1, VkglTestCase_003606_2);

#define VkglTestCase_003607_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003607_2 "rations.vector_add.mediump_ivec4_wx_xw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003607, VkglTestCase_003607_1, VkglTestCase_003607_2);

#define VkglTestCase_003608_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003608_2 "erations.vector_add.mediump_ivec4_wz_zw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003608, VkglTestCase_003608_1, VkglTestCase_003608_2);

#define VkglTestCase_003609_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003609_2 "rations.vector_add.mediump_ivec4_wz_zw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003609, VkglTestCase_003609_1, VkglTestCase_003609_2);

#define VkglTestCase_003610_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003610_2 "rations.vector_add.mediump_ivec4_www_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003610, VkglTestCase_003610_1, VkglTestCase_003610_2);

#define VkglTestCase_003611_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003611_2 "ations.vector_add.mediump_ivec4_www_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003611, VkglTestCase_003611_1, VkglTestCase_003611_2);

#define VkglTestCase_003612_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003612_2 "rations.vector_add.mediump_ivec4_yyw_ywy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003612, VkglTestCase_003612_1, VkglTestCase_003612_2);

#define VkglTestCase_003613_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003613_2 "ations.vector_add.mediump_ivec4_yyw_ywy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003613, VkglTestCase_003613_1, VkglTestCase_003613_2);

#define VkglTestCase_003614_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003614_2 "rations.vector_add.mediump_ivec4_wzy_zyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003614, VkglTestCase_003614_1, VkglTestCase_003614_2);

#define VkglTestCase_003615_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003615_2 "ations.vector_add.mediump_ivec4_wzy_zyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003615, VkglTestCase_003615_1, VkglTestCase_003615_2);

#define VkglTestCase_003616_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003616_2 "ations.vector_add.mediump_ivec4_xyzw_yzwx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003616, VkglTestCase_003616_1, VkglTestCase_003616_2);

#define VkglTestCase_003617_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003617_2 "tions.vector_add.mediump_ivec4_xyzw_yzwx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003617, VkglTestCase_003617_1, VkglTestCase_003617_2);

#define VkglTestCase_003618_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003618_2 "ations.vector_add.mediump_ivec4_wzyx_zyxw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003618, VkglTestCase_003618_1, VkglTestCase_003618_2);

#define VkglTestCase_003619_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003619_2 "tions.vector_add.mediump_ivec4_wzyx_zyxw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003619, VkglTestCase_003619_1, VkglTestCase_003619_2);

#define VkglTestCase_003620_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003620_2 "ations.vector_add.mediump_ivec4_xyxy_yxyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003620, VkglTestCase_003620_1, VkglTestCase_003620_2);

#define VkglTestCase_003621_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003621_2 "tions.vector_add.mediump_ivec4_xyxy_yxyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003621, VkglTestCase_003621_1, VkglTestCase_003621_2);

#define VkglTestCase_003622_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003622_2 "ations.vector_add.mediump_ivec4_yzzy_zzyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003622, VkglTestCase_003622_1, VkglTestCase_003622_2);

#define VkglTestCase_003623_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003623_2 "tions.vector_add.mediump_ivec4_yzzy_zzyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003623, VkglTestCase_003623_1, VkglTestCase_003623_2);

#define VkglTestCase_003624_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003624_2 "ations.vector_add.mediump_ivec4_wxww_xwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003624, VkglTestCase_003624_1, VkglTestCase_003624_2);

#define VkglTestCase_003625_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003625_2 "tions.vector_add.mediump_ivec4_wxww_xwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003625, VkglTestCase_003625_1, VkglTestCase_003625_2);

#define VkglTestCase_003626_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003626_2 "ations.vector_add.mediump_ivec4_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003626, VkglTestCase_003626_1, VkglTestCase_003626_2);

#define VkglTestCase_003627_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003627_2 "tions.vector_add.mediump_ivec4_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003627, VkglTestCase_003627_1, VkglTestCase_003627_2);

#define VkglTestCase_003628_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003628_2 "ations.vector_add.mediump_ivec4_zzzz_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003628, VkglTestCase_003628_1, VkglTestCase_003628_2);

#define VkglTestCase_003629_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003629_2 "tions.vector_add.mediump_ivec4_zzzz_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003629, VkglTestCase_003629_1, VkglTestCase_003629_2);
