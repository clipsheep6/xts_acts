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

#define VkglTestCase_003630_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003630_2 "rations.vector_subtract.mediump_vec2_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003630, VkglTestCase_003630_1, VkglTestCase_003630_2);

#define VkglTestCase_003631_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003631_2 "ations.vector_subtract.mediump_vec2_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003631, VkglTestCase_003631_1, VkglTestCase_003631_2);

#define VkglTestCase_003632_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003632_2 "ations.vector_subtract.mediump_vec2_xx_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003632, VkglTestCase_003632_1, VkglTestCase_003632_2);

#define VkglTestCase_003633_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003633_2 "tions.vector_subtract.mediump_vec2_xx_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003633, VkglTestCase_003633_1, VkglTestCase_003633_2);

#define VkglTestCase_003634_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003634_2 "ations.vector_subtract.mediump_vec2_xy_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003634, VkglTestCase_003634_1, VkglTestCase_003634_2);

#define VkglTestCase_003635_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003635_2 "tions.vector_subtract.mediump_vec2_xy_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003635, VkglTestCase_003635_1, VkglTestCase_003635_2);

#define VkglTestCase_003636_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003636_2 "ations.vector_subtract.mediump_vec2_yx_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003636, VkglTestCase_003636_1, VkglTestCase_003636_2);

#define VkglTestCase_003637_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003637_2 "tions.vector_subtract.mediump_vec2_yx_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003637, VkglTestCase_003637_1, VkglTestCase_003637_2);

#define VkglTestCase_003638_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003638_2 "tions.vector_subtract.mediump_vec2_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003638, VkglTestCase_003638_1, VkglTestCase_003638_2);

#define VkglTestCase_003639_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003639_2 "ions.vector_subtract.mediump_vec2_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003639, VkglTestCase_003639_1, VkglTestCase_003639_2);

#define VkglTestCase_003640_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003640_2 "ions.vector_subtract.mediump_vec2_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003640, VkglTestCase_003640_1, VkglTestCase_003640_2);

#define VkglTestCase_003641_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003641_2 "ons.vector_subtract.mediump_vec2_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003641, VkglTestCase_003641_1, VkglTestCase_003641_2);

#define VkglTestCase_003642_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003642_2 "ions.vector_subtract.mediump_vec2_yxyx_xyxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003642, VkglTestCase_003642_1, VkglTestCase_003642_2);

#define VkglTestCase_003643_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003643_2 "ons.vector_subtract.mediump_vec2_yxyx_xyxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003643, VkglTestCase_003643_1, VkglTestCase_003643_2);

#define VkglTestCase_003644_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003644_2 "rations.vector_subtract.mediump_vec3_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003644, VkglTestCase_003644_1, VkglTestCase_003644_2);

#define VkglTestCase_003645_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003645_2 "ations.vector_subtract.mediump_vec3_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003645, VkglTestCase_003645_1, VkglTestCase_003645_2);

#define VkglTestCase_003646_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003646_2 "rations.vector_subtract.mediump_vec3_z_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003646, VkglTestCase_003646_1, VkglTestCase_003646_2);

#define VkglTestCase_003647_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003647_2 "ations.vector_subtract.mediump_vec3_z_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003647, VkglTestCase_003647_1, VkglTestCase_003647_2);

#define VkglTestCase_003648_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003648_2 "ations.vector_subtract.mediump_vec3_xz_zx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003648, VkglTestCase_003648_1, VkglTestCase_003648_2);

#define VkglTestCase_003649_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003649_2 "tions.vector_subtract.mediump_vec3_xz_zx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003649, VkglTestCase_003649_1, VkglTestCase_003649_2);

#define VkglTestCase_003650_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003650_2 "ations.vector_subtract.mediump_vec3_zz_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003650, VkglTestCase_003650_1, VkglTestCase_003650_2);

#define VkglTestCase_003651_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003651_2 "tions.vector_subtract.mediump_vec3_zz_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003651, VkglTestCase_003651_1, VkglTestCase_003651_2);

#define VkglTestCase_003652_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003652_2 "tions.vector_subtract.mediump_vec3_xyz_yzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003652, VkglTestCase_003652_1, VkglTestCase_003652_2);

#define VkglTestCase_003653_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003653_2 "ions.vector_subtract.mediump_vec3_xyz_yzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003653, VkglTestCase_003653_1, VkglTestCase_003653_2);

#define VkglTestCase_003654_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003654_2 "tions.vector_subtract.mediump_vec3_zyx_yxz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003654, VkglTestCase_003654_1, VkglTestCase_003654_2);

#define VkglTestCase_003655_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003655_2 "ions.vector_subtract.mediump_vec3_zyx_yxz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003655, VkglTestCase_003655_1, VkglTestCase_003655_2);

#define VkglTestCase_003656_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003656_2 "tions.vector_subtract.mediump_vec3_xxx_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003656, VkglTestCase_003656_1, VkglTestCase_003656_2);

#define VkglTestCase_003657_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003657_2 "ions.vector_subtract.mediump_vec3_xxx_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003657, VkglTestCase_003657_1, VkglTestCase_003657_2);

#define VkglTestCase_003658_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003658_2 "tions.vector_subtract.mediump_vec3_zzz_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003658, VkglTestCase_003658_1, VkglTestCase_003658_2);

#define VkglTestCase_003659_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003659_2 "ions.vector_subtract.mediump_vec3_zzz_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003659, VkglTestCase_003659_1, VkglTestCase_003659_2);

#define VkglTestCase_003660_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003660_2 "tions.vector_subtract.mediump_vec3_zzy_zyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003660, VkglTestCase_003660_1, VkglTestCase_003660_2);

#define VkglTestCase_003661_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003661_2 "ions.vector_subtract.mediump_vec3_zzy_zyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003661, VkglTestCase_003661_1, VkglTestCase_003661_2);

#define VkglTestCase_003662_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003662_2 "tions.vector_subtract.mediump_vec3_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003662, VkglTestCase_003662_1, VkglTestCase_003662_2);

#define VkglTestCase_003663_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003663_2 "ions.vector_subtract.mediump_vec3_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003663, VkglTestCase_003663_1, VkglTestCase_003663_2);

#define VkglTestCase_003664_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003664_2 "tions.vector_subtract.mediump_vec3_xzx_zxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003664, VkglTestCase_003664_1, VkglTestCase_003664_2);

#define VkglTestCase_003665_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003665_2 "ions.vector_subtract.mediump_vec3_xzx_zxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003665, VkglTestCase_003665_1, VkglTestCase_003665_2);

#define VkglTestCase_003666_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003666_2 "ions.vector_subtract.mediump_vec3_xyyx_yyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003666, VkglTestCase_003666_1, VkglTestCase_003666_2);

#define VkglTestCase_003667_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003667_2 "ons.vector_subtract.mediump_vec3_xyyx_yyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003667, VkglTestCase_003667_1, VkglTestCase_003667_2);

#define VkglTestCase_003668_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003668_2 "ions.vector_subtract.mediump_vec3_zxyz_xyzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003668, VkglTestCase_003668_1, VkglTestCase_003668_2);

#define VkglTestCase_003669_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003669_2 "ons.vector_subtract.mediump_vec3_zxyz_xyzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003669, VkglTestCase_003669_1, VkglTestCase_003669_2);

#define VkglTestCase_003670_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003670_2 "rations.vector_subtract.mediump_vec4_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003670, VkglTestCase_003670_1, VkglTestCase_003670_2);

#define VkglTestCase_003671_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003671_2 "ations.vector_subtract.mediump_vec4_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003671, VkglTestCase_003671_1, VkglTestCase_003671_2);

#define VkglTestCase_003672_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003672_2 "rations.vector_subtract.mediump_vec4_w_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003672, VkglTestCase_003672_1, VkglTestCase_003672_2);

#define VkglTestCase_003673_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003673_2 "ations.vector_subtract.mediump_vec4_w_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003673, VkglTestCase_003673_1, VkglTestCase_003673_2);

#define VkglTestCase_003674_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003674_2 "ations.vector_subtract.mediump_vec4_wx_xw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003674, VkglTestCase_003674_1, VkglTestCase_003674_2);

#define VkglTestCase_003675_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003675_2 "tions.vector_subtract.mediump_vec4_wx_xw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003675, VkglTestCase_003675_1, VkglTestCase_003675_2);

#define VkglTestCase_003676_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003676_2 "ations.vector_subtract.mediump_vec4_wz_zw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003676, VkglTestCase_003676_1, VkglTestCase_003676_2);

#define VkglTestCase_003677_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003677_2 "tions.vector_subtract.mediump_vec4_wz_zw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003677, VkglTestCase_003677_1, VkglTestCase_003677_2);

#define VkglTestCase_003678_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003678_2 "tions.vector_subtract.mediump_vec4_www_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003678, VkglTestCase_003678_1, VkglTestCase_003678_2);

#define VkglTestCase_003679_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003679_2 "ions.vector_subtract.mediump_vec4_www_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003679, VkglTestCase_003679_1, VkglTestCase_003679_2);

#define VkglTestCase_003680_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003680_2 "tions.vector_subtract.mediump_vec4_yyw_ywy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003680, VkglTestCase_003680_1, VkglTestCase_003680_2);

#define VkglTestCase_003681_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003681_2 "ions.vector_subtract.mediump_vec4_yyw_ywy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003681, VkglTestCase_003681_1, VkglTestCase_003681_2);

#define VkglTestCase_003682_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003682_2 "tions.vector_subtract.mediump_vec4_wzy_zyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003682, VkglTestCase_003682_1, VkglTestCase_003682_2);

#define VkglTestCase_003683_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003683_2 "ions.vector_subtract.mediump_vec4_wzy_zyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003683, VkglTestCase_003683_1, VkglTestCase_003683_2);

#define VkglTestCase_003684_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003684_2 "ions.vector_subtract.mediump_vec4_xyzw_yzwx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003684, VkglTestCase_003684_1, VkglTestCase_003684_2);

#define VkglTestCase_003685_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003685_2 "ons.vector_subtract.mediump_vec4_xyzw_yzwx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003685, VkglTestCase_003685_1, VkglTestCase_003685_2);

#define VkglTestCase_003686_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003686_2 "ions.vector_subtract.mediump_vec4_wzyx_zyxw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003686, VkglTestCase_003686_1, VkglTestCase_003686_2);

#define VkglTestCase_003687_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003687_2 "ons.vector_subtract.mediump_vec4_wzyx_zyxw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003687, VkglTestCase_003687_1, VkglTestCase_003687_2);

#define VkglTestCase_003688_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003688_2 "ions.vector_subtract.mediump_vec4_xyxy_yxyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003688, VkglTestCase_003688_1, VkglTestCase_003688_2);

#define VkglTestCase_003689_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003689_2 "ons.vector_subtract.mediump_vec4_xyxy_yxyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003689, VkglTestCase_003689_1, VkglTestCase_003689_2);

#define VkglTestCase_003690_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003690_2 "ions.vector_subtract.mediump_vec4_yzzy_zzyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003690, VkglTestCase_003690_1, VkglTestCase_003690_2);

#define VkglTestCase_003691_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003691_2 "ons.vector_subtract.mediump_vec4_yzzy_zzyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003691, VkglTestCase_003691_1, VkglTestCase_003691_2);

#define VkglTestCase_003692_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003692_2 "ions.vector_subtract.mediump_vec4_wxww_xwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003692, VkglTestCase_003692_1, VkglTestCase_003692_2);

#define VkglTestCase_003693_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003693_2 "ons.vector_subtract.mediump_vec4_wxww_xwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003693, VkglTestCase_003693_1, VkglTestCase_003693_2);

#define VkglTestCase_003694_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003694_2 "ions.vector_subtract.mediump_vec4_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003694, VkglTestCase_003694_1, VkglTestCase_003694_2);

#define VkglTestCase_003695_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003695_2 "ons.vector_subtract.mediump_vec4_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003695, VkglTestCase_003695_1, VkglTestCase_003695_2);

#define VkglTestCase_003696_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003696_2 "ions.vector_subtract.mediump_vec4_zzzz_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003696, VkglTestCase_003696_1, VkglTestCase_003696_2);

#define VkglTestCase_003697_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003697_2 "ons.vector_subtract.mediump_vec4_zzzz_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003697, VkglTestCase_003697_1, VkglTestCase_003697_2);

#define VkglTestCase_003698_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003698_2 "ations.vector_subtract.mediump_ivec2_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003698, VkglTestCase_003698_1, VkglTestCase_003698_2);

#define VkglTestCase_003699_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003699_2 "tions.vector_subtract.mediump_ivec2_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003699, VkglTestCase_003699_1, VkglTestCase_003699_2);

#define VkglTestCase_003700_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003700_2 "tions.vector_subtract.mediump_ivec2_xx_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003700, VkglTestCase_003700_1, VkglTestCase_003700_2);

#define VkglTestCase_003701_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003701_2 "ions.vector_subtract.mediump_ivec2_xx_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003701, VkglTestCase_003701_1, VkglTestCase_003701_2);

#define VkglTestCase_003702_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003702_2 "tions.vector_subtract.mediump_ivec2_xy_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003702, VkglTestCase_003702_1, VkglTestCase_003702_2);

#define VkglTestCase_003703_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003703_2 "ions.vector_subtract.mediump_ivec2_xy_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003703, VkglTestCase_003703_1, VkglTestCase_003703_2);

#define VkglTestCase_003704_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003704_2 "tions.vector_subtract.mediump_ivec2_yx_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003704, VkglTestCase_003704_1, VkglTestCase_003704_2);

#define VkglTestCase_003705_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003705_2 "ions.vector_subtract.mediump_ivec2_yx_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003705, VkglTestCase_003705_1, VkglTestCase_003705_2);

#define VkglTestCase_003706_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003706_2 "ions.vector_subtract.mediump_ivec2_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003706, VkglTestCase_003706_1, VkglTestCase_003706_2);

#define VkglTestCase_003707_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003707_2 "ons.vector_subtract.mediump_ivec2_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003707, VkglTestCase_003707_1, VkglTestCase_003707_2);

#define VkglTestCase_003708_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003708_2 "ons.vector_subtract.mediump_ivec2_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003708, VkglTestCase_003708_1, VkglTestCase_003708_2);

#define VkglTestCase_003709_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003709_2 "ns.vector_subtract.mediump_ivec2_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003709, VkglTestCase_003709_1, VkglTestCase_003709_2);

#define VkglTestCase_003710_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003710_2 "ons.vector_subtract.mediump_ivec2_yxyx_xyxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003710, VkglTestCase_003710_1, VkglTestCase_003710_2);

#define VkglTestCase_003711_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003711_2 "ns.vector_subtract.mediump_ivec2_yxyx_xyxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003711, VkglTestCase_003711_1, VkglTestCase_003711_2);

#define VkglTestCase_003712_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003712_2 "ations.vector_subtract.mediump_ivec3_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003712, VkglTestCase_003712_1, VkglTestCase_003712_2);

#define VkglTestCase_003713_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003713_2 "tions.vector_subtract.mediump_ivec3_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003713, VkglTestCase_003713_1, VkglTestCase_003713_2);

#define VkglTestCase_003714_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003714_2 "ations.vector_subtract.mediump_ivec3_z_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003714, VkglTestCase_003714_1, VkglTestCase_003714_2);

#define VkglTestCase_003715_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003715_2 "tions.vector_subtract.mediump_ivec3_z_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003715, VkglTestCase_003715_1, VkglTestCase_003715_2);

#define VkglTestCase_003716_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003716_2 "tions.vector_subtract.mediump_ivec3_xz_zx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003716, VkglTestCase_003716_1, VkglTestCase_003716_2);

#define VkglTestCase_003717_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003717_2 "ions.vector_subtract.mediump_ivec3_xz_zx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003717, VkglTestCase_003717_1, VkglTestCase_003717_2);

#define VkglTestCase_003718_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003718_2 "tions.vector_subtract.mediump_ivec3_zz_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003718, VkglTestCase_003718_1, VkglTestCase_003718_2);

#define VkglTestCase_003719_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003719_2 "ions.vector_subtract.mediump_ivec3_zz_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003719, VkglTestCase_003719_1, VkglTestCase_003719_2);

#define VkglTestCase_003720_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003720_2 "ions.vector_subtract.mediump_ivec3_xyz_yzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003720, VkglTestCase_003720_1, VkglTestCase_003720_2);

#define VkglTestCase_003721_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003721_2 "ons.vector_subtract.mediump_ivec3_xyz_yzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003721, VkglTestCase_003721_1, VkglTestCase_003721_2);

#define VkglTestCase_003722_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003722_2 "ions.vector_subtract.mediump_ivec3_zyx_yxz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003722, VkglTestCase_003722_1, VkglTestCase_003722_2);

#define VkglTestCase_003723_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003723_2 "ons.vector_subtract.mediump_ivec3_zyx_yxz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003723, VkglTestCase_003723_1, VkglTestCase_003723_2);

#define VkglTestCase_003724_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003724_2 "ions.vector_subtract.mediump_ivec3_xxx_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003724, VkglTestCase_003724_1, VkglTestCase_003724_2);

#define VkglTestCase_003725_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003725_2 "ons.vector_subtract.mediump_ivec3_xxx_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003725, VkglTestCase_003725_1, VkglTestCase_003725_2);

#define VkglTestCase_003726_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003726_2 "ions.vector_subtract.mediump_ivec3_zzz_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003726, VkglTestCase_003726_1, VkglTestCase_003726_2);

#define VkglTestCase_003727_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003727_2 "ons.vector_subtract.mediump_ivec3_zzz_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003727, VkglTestCase_003727_1, VkglTestCase_003727_2);

#define VkglTestCase_003728_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003728_2 "ions.vector_subtract.mediump_ivec3_zzy_zyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003728, VkglTestCase_003728_1, VkglTestCase_003728_2);

#define VkglTestCase_003729_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003729_2 "ons.vector_subtract.mediump_ivec3_zzy_zyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003729, VkglTestCase_003729_1, VkglTestCase_003729_2);

#define VkglTestCase_003730_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003730_2 "ions.vector_subtract.mediump_ivec3_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003730, VkglTestCase_003730_1, VkglTestCase_003730_2);

#define VkglTestCase_003731_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003731_2 "ons.vector_subtract.mediump_ivec3_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003731, VkglTestCase_003731_1, VkglTestCase_003731_2);

#define VkglTestCase_003732_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003732_2 "ions.vector_subtract.mediump_ivec3_xzx_zxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003732, VkglTestCase_003732_1, VkglTestCase_003732_2);

#define VkglTestCase_003733_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003733_2 "ons.vector_subtract.mediump_ivec3_xzx_zxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003733, VkglTestCase_003733_1, VkglTestCase_003733_2);

#define VkglTestCase_003734_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003734_2 "ons.vector_subtract.mediump_ivec3_xyyx_yyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003734, VkglTestCase_003734_1, VkglTestCase_003734_2);

#define VkglTestCase_003735_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003735_2 "ns.vector_subtract.mediump_ivec3_xyyx_yyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003735, VkglTestCase_003735_1, VkglTestCase_003735_2);

#define VkglTestCase_003736_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003736_2 "ons.vector_subtract.mediump_ivec3_zxyz_xyzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003736, VkglTestCase_003736_1, VkglTestCase_003736_2);

#define VkglTestCase_003737_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003737_2 "ns.vector_subtract.mediump_ivec3_zxyz_xyzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003737, VkglTestCase_003737_1, VkglTestCase_003737_2);

#define VkglTestCase_003738_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003738_2 "ations.vector_subtract.mediump_ivec4_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003738, VkglTestCase_003738_1, VkglTestCase_003738_2);

#define VkglTestCase_003739_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003739_2 "tions.vector_subtract.mediump_ivec4_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003739, VkglTestCase_003739_1, VkglTestCase_003739_2);

#define VkglTestCase_003740_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003740_2 "ations.vector_subtract.mediump_ivec4_w_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003740, VkglTestCase_003740_1, VkglTestCase_003740_2);

#define VkglTestCase_003741_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003741_2 "tions.vector_subtract.mediump_ivec4_w_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003741, VkglTestCase_003741_1, VkglTestCase_003741_2);

#define VkglTestCase_003742_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003742_2 "tions.vector_subtract.mediump_ivec4_wx_xw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003742, VkglTestCase_003742_1, VkglTestCase_003742_2);

#define VkglTestCase_003743_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003743_2 "ions.vector_subtract.mediump_ivec4_wx_xw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003743, VkglTestCase_003743_1, VkglTestCase_003743_2);

#define VkglTestCase_003744_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003744_2 "tions.vector_subtract.mediump_ivec4_wz_zw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003744, VkglTestCase_003744_1, VkglTestCase_003744_2);

#define VkglTestCase_003745_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003745_2 "ions.vector_subtract.mediump_ivec4_wz_zw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003745, VkglTestCase_003745_1, VkglTestCase_003745_2);

#define VkglTestCase_003746_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003746_2 "ions.vector_subtract.mediump_ivec4_www_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003746, VkglTestCase_003746_1, VkglTestCase_003746_2);

#define VkglTestCase_003747_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003747_2 "ons.vector_subtract.mediump_ivec4_www_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003747, VkglTestCase_003747_1, VkglTestCase_003747_2);

#define VkglTestCase_003748_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003748_2 "ions.vector_subtract.mediump_ivec4_yyw_ywy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003748, VkglTestCase_003748_1, VkglTestCase_003748_2);

#define VkglTestCase_003749_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003749_2 "ons.vector_subtract.mediump_ivec4_yyw_ywy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003749, VkglTestCase_003749_1, VkglTestCase_003749_2);

#define VkglTestCase_003750_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003750_2 "ions.vector_subtract.mediump_ivec4_wzy_zyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003750, VkglTestCase_003750_1, VkglTestCase_003750_2);

#define VkglTestCase_003751_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003751_2 "ons.vector_subtract.mediump_ivec4_wzy_zyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003751, VkglTestCase_003751_1, VkglTestCase_003751_2);

#define VkglTestCase_003752_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003752_2 "ons.vector_subtract.mediump_ivec4_xyzw_yzwx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003752, VkglTestCase_003752_1, VkglTestCase_003752_2);

#define VkglTestCase_003753_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003753_2 "ns.vector_subtract.mediump_ivec4_xyzw_yzwx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003753, VkglTestCase_003753_1, VkglTestCase_003753_2);

#define VkglTestCase_003754_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003754_2 "ons.vector_subtract.mediump_ivec4_wzyx_zyxw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003754, VkglTestCase_003754_1, VkglTestCase_003754_2);

#define VkglTestCase_003755_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003755_2 "ns.vector_subtract.mediump_ivec4_wzyx_zyxw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003755, VkglTestCase_003755_1, VkglTestCase_003755_2);

#define VkglTestCase_003756_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003756_2 "ons.vector_subtract.mediump_ivec4_xyxy_yxyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003756, VkglTestCase_003756_1, VkglTestCase_003756_2);

#define VkglTestCase_003757_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003757_2 "ns.vector_subtract.mediump_ivec4_xyxy_yxyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003757, VkglTestCase_003757_1, VkglTestCase_003757_2);

#define VkglTestCase_003758_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003758_2 "ons.vector_subtract.mediump_ivec4_yzzy_zzyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003758, VkglTestCase_003758_1, VkglTestCase_003758_2);

#define VkglTestCase_003759_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003759_2 "ns.vector_subtract.mediump_ivec4_yzzy_zzyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003759, VkglTestCase_003759_1, VkglTestCase_003759_2);

#define VkglTestCase_003760_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003760_2 "ons.vector_subtract.mediump_ivec4_wxww_xwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003760, VkglTestCase_003760_1, VkglTestCase_003760_2);

#define VkglTestCase_003761_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003761_2 "ns.vector_subtract.mediump_ivec4_wxww_xwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003761, VkglTestCase_003761_1, VkglTestCase_003761_2);

#define VkglTestCase_003762_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003762_2 "ons.vector_subtract.mediump_ivec4_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003762, VkglTestCase_003762_1, VkglTestCase_003762_2);

#define VkglTestCase_003763_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003763_2 "ns.vector_subtract.mediump_ivec4_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003763, VkglTestCase_003763_1, VkglTestCase_003763_2);

#define VkglTestCase_003764_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003764_2 "ons.vector_subtract.mediump_ivec4_zzzz_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003764, VkglTestCase_003764_1, VkglTestCase_003764_2);

#define VkglTestCase_003765_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003765_2 "ns.vector_subtract.mediump_ivec4_zzzz_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003765, VkglTestCase_003765_1, VkglTestCase_003765_2);
