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

#define VkglTestCase_003766_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003766_2 "rations.vector_multiply.mediump_vec2_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003766, VkglTestCase_003766_1, VkglTestCase_003766_2);

#define VkglTestCase_003767_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003767_2 "ations.vector_multiply.mediump_vec2_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003767, VkglTestCase_003767_1, VkglTestCase_003767_2);

#define VkglTestCase_003768_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003768_2 "ations.vector_multiply.mediump_vec2_xx_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003768, VkglTestCase_003768_1, VkglTestCase_003768_2);

#define VkglTestCase_003769_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003769_2 "tions.vector_multiply.mediump_vec2_xx_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003769, VkglTestCase_003769_1, VkglTestCase_003769_2);

#define VkglTestCase_003770_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003770_2 "ations.vector_multiply.mediump_vec2_xy_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003770, VkglTestCase_003770_1, VkglTestCase_003770_2);

#define VkglTestCase_003771_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003771_2 "tions.vector_multiply.mediump_vec2_xy_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003771, VkglTestCase_003771_1, VkglTestCase_003771_2);

#define VkglTestCase_003772_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003772_2 "ations.vector_multiply.mediump_vec2_yx_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003772, VkglTestCase_003772_1, VkglTestCase_003772_2);

#define VkglTestCase_003773_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003773_2 "tions.vector_multiply.mediump_vec2_yx_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003773, VkglTestCase_003773_1, VkglTestCase_003773_2);

#define VkglTestCase_003774_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003774_2 "tions.vector_multiply.mediump_vec2_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003774, VkglTestCase_003774_1, VkglTestCase_003774_2);

#define VkglTestCase_003775_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003775_2 "ions.vector_multiply.mediump_vec2_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003775, VkglTestCase_003775_1, VkglTestCase_003775_2);

#define VkglTestCase_003776_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003776_2 "ions.vector_multiply.mediump_vec2_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003776, VkglTestCase_003776_1, VkglTestCase_003776_2);

#define VkglTestCase_003777_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003777_2 "ons.vector_multiply.mediump_vec2_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003777, VkglTestCase_003777_1, VkglTestCase_003777_2);

#define VkglTestCase_003778_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003778_2 "ions.vector_multiply.mediump_vec2_yxyx_xyxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003778, VkglTestCase_003778_1, VkglTestCase_003778_2);

#define VkglTestCase_003779_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003779_2 "ons.vector_multiply.mediump_vec2_yxyx_xyxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003779, VkglTestCase_003779_1, VkglTestCase_003779_2);

#define VkglTestCase_003780_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003780_2 "rations.vector_multiply.mediump_vec3_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003780, VkglTestCase_003780_1, VkglTestCase_003780_2);

#define VkglTestCase_003781_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003781_2 "ations.vector_multiply.mediump_vec3_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003781, VkglTestCase_003781_1, VkglTestCase_003781_2);

#define VkglTestCase_003782_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003782_2 "rations.vector_multiply.mediump_vec3_z_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003782, VkglTestCase_003782_1, VkglTestCase_003782_2);

#define VkglTestCase_003783_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003783_2 "ations.vector_multiply.mediump_vec3_z_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003783, VkglTestCase_003783_1, VkglTestCase_003783_2);

#define VkglTestCase_003784_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003784_2 "ations.vector_multiply.mediump_vec3_xz_zx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003784, VkglTestCase_003784_1, VkglTestCase_003784_2);

#define VkglTestCase_003785_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003785_2 "tions.vector_multiply.mediump_vec3_xz_zx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003785, VkglTestCase_003785_1, VkglTestCase_003785_2);

#define VkglTestCase_003786_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003786_2 "ations.vector_multiply.mediump_vec3_zz_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003786, VkglTestCase_003786_1, VkglTestCase_003786_2);

#define VkglTestCase_003787_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003787_2 "tions.vector_multiply.mediump_vec3_zz_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003787, VkglTestCase_003787_1, VkglTestCase_003787_2);

#define VkglTestCase_003788_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003788_2 "tions.vector_multiply.mediump_vec3_xyz_yzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003788, VkglTestCase_003788_1, VkglTestCase_003788_2);

#define VkglTestCase_003789_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003789_2 "ions.vector_multiply.mediump_vec3_xyz_yzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003789, VkglTestCase_003789_1, VkglTestCase_003789_2);

#define VkglTestCase_003790_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003790_2 "tions.vector_multiply.mediump_vec3_zyx_yxz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003790, VkglTestCase_003790_1, VkglTestCase_003790_2);

#define VkglTestCase_003791_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003791_2 "ions.vector_multiply.mediump_vec3_zyx_yxz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003791, VkglTestCase_003791_1, VkglTestCase_003791_2);

#define VkglTestCase_003792_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003792_2 "tions.vector_multiply.mediump_vec3_xxx_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003792, VkglTestCase_003792_1, VkglTestCase_003792_2);

#define VkglTestCase_003793_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003793_2 "ions.vector_multiply.mediump_vec3_xxx_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003793, VkglTestCase_003793_1, VkglTestCase_003793_2);

#define VkglTestCase_003794_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003794_2 "tions.vector_multiply.mediump_vec3_zzz_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003794, VkglTestCase_003794_1, VkglTestCase_003794_2);

#define VkglTestCase_003795_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003795_2 "ions.vector_multiply.mediump_vec3_zzz_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003795, VkglTestCase_003795_1, VkglTestCase_003795_2);

#define VkglTestCase_003796_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003796_2 "tions.vector_multiply.mediump_vec3_zzy_zyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003796, VkglTestCase_003796_1, VkglTestCase_003796_2);

#define VkglTestCase_003797_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003797_2 "ions.vector_multiply.mediump_vec3_zzy_zyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003797, VkglTestCase_003797_1, VkglTestCase_003797_2);

#define VkglTestCase_003798_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003798_2 "tions.vector_multiply.mediump_vec3_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003798, VkglTestCase_003798_1, VkglTestCase_003798_2);

#define VkglTestCase_003799_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003799_2 "ions.vector_multiply.mediump_vec3_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003799, VkglTestCase_003799_1, VkglTestCase_003799_2);

#define VkglTestCase_003800_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003800_2 "tions.vector_multiply.mediump_vec3_xzx_zxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003800, VkglTestCase_003800_1, VkglTestCase_003800_2);

#define VkglTestCase_003801_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003801_2 "ions.vector_multiply.mediump_vec3_xzx_zxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003801, VkglTestCase_003801_1, VkglTestCase_003801_2);

#define VkglTestCase_003802_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003802_2 "ions.vector_multiply.mediump_vec3_xyyx_yyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003802, VkglTestCase_003802_1, VkglTestCase_003802_2);

#define VkglTestCase_003803_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003803_2 "ons.vector_multiply.mediump_vec3_xyyx_yyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003803, VkglTestCase_003803_1, VkglTestCase_003803_2);

#define VkglTestCase_003804_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003804_2 "ions.vector_multiply.mediump_vec3_zxyz_xyzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003804, VkglTestCase_003804_1, VkglTestCase_003804_2);

#define VkglTestCase_003805_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003805_2 "ons.vector_multiply.mediump_vec3_zxyz_xyzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003805, VkglTestCase_003805_1, VkglTestCase_003805_2);

#define VkglTestCase_003806_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003806_2 "rations.vector_multiply.mediump_vec4_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003806, VkglTestCase_003806_1, VkglTestCase_003806_2);

#define VkglTestCase_003807_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003807_2 "ations.vector_multiply.mediump_vec4_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003807, VkglTestCase_003807_1, VkglTestCase_003807_2);

#define VkglTestCase_003808_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003808_2 "rations.vector_multiply.mediump_vec4_w_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003808, VkglTestCase_003808_1, VkglTestCase_003808_2);

#define VkglTestCase_003809_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003809_2 "ations.vector_multiply.mediump_vec4_w_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003809, VkglTestCase_003809_1, VkglTestCase_003809_2);

#define VkglTestCase_003810_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003810_2 "ations.vector_multiply.mediump_vec4_wx_xw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003810, VkglTestCase_003810_1, VkglTestCase_003810_2);

#define VkglTestCase_003811_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003811_2 "tions.vector_multiply.mediump_vec4_wx_xw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003811, VkglTestCase_003811_1, VkglTestCase_003811_2);

#define VkglTestCase_003812_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003812_2 "ations.vector_multiply.mediump_vec4_wz_zw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003812, VkglTestCase_003812_1, VkglTestCase_003812_2);

#define VkglTestCase_003813_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003813_2 "tions.vector_multiply.mediump_vec4_wz_zw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003813, VkglTestCase_003813_1, VkglTestCase_003813_2);

#define VkglTestCase_003814_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003814_2 "tions.vector_multiply.mediump_vec4_www_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003814, VkglTestCase_003814_1, VkglTestCase_003814_2);

#define VkglTestCase_003815_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003815_2 "ions.vector_multiply.mediump_vec4_www_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003815, VkglTestCase_003815_1, VkglTestCase_003815_2);

#define VkglTestCase_003816_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003816_2 "tions.vector_multiply.mediump_vec4_yyw_ywy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003816, VkglTestCase_003816_1, VkglTestCase_003816_2);

#define VkglTestCase_003817_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003817_2 "ions.vector_multiply.mediump_vec4_yyw_ywy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003817, VkglTestCase_003817_1, VkglTestCase_003817_2);

#define VkglTestCase_003818_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003818_2 "tions.vector_multiply.mediump_vec4_wzy_zyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003818, VkglTestCase_003818_1, VkglTestCase_003818_2);

#define VkglTestCase_003819_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003819_2 "ions.vector_multiply.mediump_vec4_wzy_zyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003819, VkglTestCase_003819_1, VkglTestCase_003819_2);

#define VkglTestCase_003820_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003820_2 "ions.vector_multiply.mediump_vec4_xyzw_yzwx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003820, VkglTestCase_003820_1, VkglTestCase_003820_2);

#define VkglTestCase_003821_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003821_2 "ons.vector_multiply.mediump_vec4_xyzw_yzwx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003821, VkglTestCase_003821_1, VkglTestCase_003821_2);

#define VkglTestCase_003822_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003822_2 "ions.vector_multiply.mediump_vec4_wzyx_zyxw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003822, VkglTestCase_003822_1, VkglTestCase_003822_2);

#define VkglTestCase_003823_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003823_2 "ons.vector_multiply.mediump_vec4_wzyx_zyxw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003823, VkglTestCase_003823_1, VkglTestCase_003823_2);

#define VkglTestCase_003824_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003824_2 "ions.vector_multiply.mediump_vec4_xyxy_yxyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003824, VkglTestCase_003824_1, VkglTestCase_003824_2);

#define VkglTestCase_003825_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003825_2 "ons.vector_multiply.mediump_vec4_xyxy_yxyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003825, VkglTestCase_003825_1, VkglTestCase_003825_2);

#define VkglTestCase_003826_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003826_2 "ions.vector_multiply.mediump_vec4_yzzy_zzyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003826, VkglTestCase_003826_1, VkglTestCase_003826_2);

#define VkglTestCase_003827_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003827_2 "ons.vector_multiply.mediump_vec4_yzzy_zzyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003827, VkglTestCase_003827_1, VkglTestCase_003827_2);

#define VkglTestCase_003828_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003828_2 "ions.vector_multiply.mediump_vec4_wxww_xwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003828, VkglTestCase_003828_1, VkglTestCase_003828_2);

#define VkglTestCase_003829_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003829_2 "ons.vector_multiply.mediump_vec4_wxww_xwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003829, VkglTestCase_003829_1, VkglTestCase_003829_2);

#define VkglTestCase_003830_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003830_2 "ions.vector_multiply.mediump_vec4_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003830, VkglTestCase_003830_1, VkglTestCase_003830_2);

#define VkglTestCase_003831_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003831_2 "ons.vector_multiply.mediump_vec4_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003831, VkglTestCase_003831_1, VkglTestCase_003831_2);

#define VkglTestCase_003832_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003832_2 "ions.vector_multiply.mediump_vec4_zzzz_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003832, VkglTestCase_003832_1, VkglTestCase_003832_2);

#define VkglTestCase_003833_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003833_2 "ons.vector_multiply.mediump_vec4_zzzz_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003833, VkglTestCase_003833_1, VkglTestCase_003833_2);

#define VkglTestCase_003834_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003834_2 "ations.vector_multiply.mediump_ivec2_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003834, VkglTestCase_003834_1, VkglTestCase_003834_2);

#define VkglTestCase_003835_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003835_2 "tions.vector_multiply.mediump_ivec2_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003835, VkglTestCase_003835_1, VkglTestCase_003835_2);

#define VkglTestCase_003836_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003836_2 "tions.vector_multiply.mediump_ivec2_xx_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003836, VkglTestCase_003836_1, VkglTestCase_003836_2);

#define VkglTestCase_003837_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003837_2 "ions.vector_multiply.mediump_ivec2_xx_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003837, VkglTestCase_003837_1, VkglTestCase_003837_2);

#define VkglTestCase_003838_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003838_2 "tions.vector_multiply.mediump_ivec2_xy_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003838, VkglTestCase_003838_1, VkglTestCase_003838_2);

#define VkglTestCase_003839_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003839_2 "ions.vector_multiply.mediump_ivec2_xy_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003839, VkglTestCase_003839_1, VkglTestCase_003839_2);

#define VkglTestCase_003840_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003840_2 "tions.vector_multiply.mediump_ivec2_yx_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003840, VkglTestCase_003840_1, VkglTestCase_003840_2);

#define VkglTestCase_003841_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003841_2 "ions.vector_multiply.mediump_ivec2_yx_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003841, VkglTestCase_003841_1, VkglTestCase_003841_2);

#define VkglTestCase_003842_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003842_2 "ions.vector_multiply.mediump_ivec2_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003842, VkglTestCase_003842_1, VkglTestCase_003842_2);

#define VkglTestCase_003843_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003843_2 "ons.vector_multiply.mediump_ivec2_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003843, VkglTestCase_003843_1, VkglTestCase_003843_2);

#define VkglTestCase_003844_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003844_2 "ons.vector_multiply.mediump_ivec2_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003844, VkglTestCase_003844_1, VkglTestCase_003844_2);

#define VkglTestCase_003845_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003845_2 "ns.vector_multiply.mediump_ivec2_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003845, VkglTestCase_003845_1, VkglTestCase_003845_2);

#define VkglTestCase_003846_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003846_2 "ons.vector_multiply.mediump_ivec2_yxyx_xyxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003846, VkglTestCase_003846_1, VkglTestCase_003846_2);

#define VkglTestCase_003847_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003847_2 "ns.vector_multiply.mediump_ivec2_yxyx_xyxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003847, VkglTestCase_003847_1, VkglTestCase_003847_2);

#define VkglTestCase_003848_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003848_2 "ations.vector_multiply.mediump_ivec3_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003848, VkglTestCase_003848_1, VkglTestCase_003848_2);

#define VkglTestCase_003849_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003849_2 "tions.vector_multiply.mediump_ivec3_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003849, VkglTestCase_003849_1, VkglTestCase_003849_2);

#define VkglTestCase_003850_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003850_2 "ations.vector_multiply.mediump_ivec3_z_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003850, VkglTestCase_003850_1, VkglTestCase_003850_2);

#define VkglTestCase_003851_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003851_2 "tions.vector_multiply.mediump_ivec3_z_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003851, VkglTestCase_003851_1, VkglTestCase_003851_2);

#define VkglTestCase_003852_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003852_2 "tions.vector_multiply.mediump_ivec3_xz_zx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003852, VkglTestCase_003852_1, VkglTestCase_003852_2);

#define VkglTestCase_003853_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003853_2 "ions.vector_multiply.mediump_ivec3_xz_zx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003853, VkglTestCase_003853_1, VkglTestCase_003853_2);

#define VkglTestCase_003854_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003854_2 "tions.vector_multiply.mediump_ivec3_zz_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003854, VkglTestCase_003854_1, VkglTestCase_003854_2);

#define VkglTestCase_003855_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003855_2 "ions.vector_multiply.mediump_ivec3_zz_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003855, VkglTestCase_003855_1, VkglTestCase_003855_2);

#define VkglTestCase_003856_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003856_2 "ions.vector_multiply.mediump_ivec3_xyz_yzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003856, VkglTestCase_003856_1, VkglTestCase_003856_2);

#define VkglTestCase_003857_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003857_2 "ons.vector_multiply.mediump_ivec3_xyz_yzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003857, VkglTestCase_003857_1, VkglTestCase_003857_2);

#define VkglTestCase_003858_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003858_2 "ions.vector_multiply.mediump_ivec3_zyx_yxz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003858, VkglTestCase_003858_1, VkglTestCase_003858_2);

#define VkglTestCase_003859_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003859_2 "ons.vector_multiply.mediump_ivec3_zyx_yxz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003859, VkglTestCase_003859_1, VkglTestCase_003859_2);

#define VkglTestCase_003860_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003860_2 "ions.vector_multiply.mediump_ivec3_xxx_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003860, VkglTestCase_003860_1, VkglTestCase_003860_2);

#define VkglTestCase_003861_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003861_2 "ons.vector_multiply.mediump_ivec3_xxx_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003861, VkglTestCase_003861_1, VkglTestCase_003861_2);

#define VkglTestCase_003862_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003862_2 "ions.vector_multiply.mediump_ivec3_zzz_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003862, VkglTestCase_003862_1, VkglTestCase_003862_2);

#define VkglTestCase_003863_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003863_2 "ons.vector_multiply.mediump_ivec3_zzz_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003863, VkglTestCase_003863_1, VkglTestCase_003863_2);

#define VkglTestCase_003864_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003864_2 "ions.vector_multiply.mediump_ivec3_zzy_zyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003864, VkglTestCase_003864_1, VkglTestCase_003864_2);

#define VkglTestCase_003865_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003865_2 "ons.vector_multiply.mediump_ivec3_zzy_zyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003865, VkglTestCase_003865_1, VkglTestCase_003865_2);

#define VkglTestCase_003866_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003866_2 "ions.vector_multiply.mediump_ivec3_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003866, VkglTestCase_003866_1, VkglTestCase_003866_2);

#define VkglTestCase_003867_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003867_2 "ons.vector_multiply.mediump_ivec3_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003867, VkglTestCase_003867_1, VkglTestCase_003867_2);

#define VkglTestCase_003868_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003868_2 "ions.vector_multiply.mediump_ivec3_xzx_zxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003868, VkglTestCase_003868_1, VkglTestCase_003868_2);

#define VkglTestCase_003869_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003869_2 "ons.vector_multiply.mediump_ivec3_xzx_zxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003869, VkglTestCase_003869_1, VkglTestCase_003869_2);

#define VkglTestCase_003870_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003870_2 "ons.vector_multiply.mediump_ivec3_xyyx_yyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003870, VkglTestCase_003870_1, VkglTestCase_003870_2);

#define VkglTestCase_003871_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003871_2 "ns.vector_multiply.mediump_ivec3_xyyx_yyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003871, VkglTestCase_003871_1, VkglTestCase_003871_2);

#define VkglTestCase_003872_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003872_2 "ons.vector_multiply.mediump_ivec3_zxyz_xyzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003872, VkglTestCase_003872_1, VkglTestCase_003872_2);

#define VkglTestCase_003873_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003873_2 "ns.vector_multiply.mediump_ivec3_zxyz_xyzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003873, VkglTestCase_003873_1, VkglTestCase_003873_2);

#define VkglTestCase_003874_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003874_2 "ations.vector_multiply.mediump_ivec4_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003874, VkglTestCase_003874_1, VkglTestCase_003874_2);

#define VkglTestCase_003875_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003875_2 "tions.vector_multiply.mediump_ivec4_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003875, VkglTestCase_003875_1, VkglTestCase_003875_2);

#define VkglTestCase_003876_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003876_2 "ations.vector_multiply.mediump_ivec4_w_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003876, VkglTestCase_003876_1, VkglTestCase_003876_2);

#define VkglTestCase_003877_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003877_2 "tions.vector_multiply.mediump_ivec4_w_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003877, VkglTestCase_003877_1, VkglTestCase_003877_2);

#define VkglTestCase_003878_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003878_2 "tions.vector_multiply.mediump_ivec4_wx_xw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003878, VkglTestCase_003878_1, VkglTestCase_003878_2);

#define VkglTestCase_003879_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003879_2 "ions.vector_multiply.mediump_ivec4_wx_xw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003879, VkglTestCase_003879_1, VkglTestCase_003879_2);

#define VkglTestCase_003880_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003880_2 "tions.vector_multiply.mediump_ivec4_wz_zw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003880, VkglTestCase_003880_1, VkglTestCase_003880_2);

#define VkglTestCase_003881_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003881_2 "ions.vector_multiply.mediump_ivec4_wz_zw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003881, VkglTestCase_003881_1, VkglTestCase_003881_2);

#define VkglTestCase_003882_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003882_2 "ions.vector_multiply.mediump_ivec4_www_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003882, VkglTestCase_003882_1, VkglTestCase_003882_2);

#define VkglTestCase_003883_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003883_2 "ons.vector_multiply.mediump_ivec4_www_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003883, VkglTestCase_003883_1, VkglTestCase_003883_2);

#define VkglTestCase_003884_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003884_2 "ions.vector_multiply.mediump_ivec4_yyw_ywy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003884, VkglTestCase_003884_1, VkglTestCase_003884_2);

#define VkglTestCase_003885_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003885_2 "ons.vector_multiply.mediump_ivec4_yyw_ywy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003885, VkglTestCase_003885_1, VkglTestCase_003885_2);

#define VkglTestCase_003886_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003886_2 "ions.vector_multiply.mediump_ivec4_wzy_zyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003886, VkglTestCase_003886_1, VkglTestCase_003886_2);

#define VkglTestCase_003887_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003887_2 "ons.vector_multiply.mediump_ivec4_wzy_zyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003887, VkglTestCase_003887_1, VkglTestCase_003887_2);

#define VkglTestCase_003888_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003888_2 "ons.vector_multiply.mediump_ivec4_xyzw_yzwx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003888, VkglTestCase_003888_1, VkglTestCase_003888_2);

#define VkglTestCase_003889_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003889_2 "ns.vector_multiply.mediump_ivec4_xyzw_yzwx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003889, VkglTestCase_003889_1, VkglTestCase_003889_2);

#define VkglTestCase_003890_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003890_2 "ons.vector_multiply.mediump_ivec4_wzyx_zyxw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003890, VkglTestCase_003890_1, VkglTestCase_003890_2);

#define VkglTestCase_003891_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003891_2 "ns.vector_multiply.mediump_ivec4_wzyx_zyxw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003891, VkglTestCase_003891_1, VkglTestCase_003891_2);

#define VkglTestCase_003892_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003892_2 "ons.vector_multiply.mediump_ivec4_xyxy_yxyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003892, VkglTestCase_003892_1, VkglTestCase_003892_2);

#define VkglTestCase_003893_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003893_2 "ns.vector_multiply.mediump_ivec4_xyxy_yxyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003893, VkglTestCase_003893_1, VkglTestCase_003893_2);

#define VkglTestCase_003894_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003894_2 "ons.vector_multiply.mediump_ivec4_yzzy_zzyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003894, VkglTestCase_003894_1, VkglTestCase_003894_2);

#define VkglTestCase_003895_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003895_2 "ns.vector_multiply.mediump_ivec4_yzzy_zzyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003895, VkglTestCase_003895_1, VkglTestCase_003895_2);

#define VkglTestCase_003896_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003896_2 "ons.vector_multiply.mediump_ivec4_wxww_xwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003896, VkglTestCase_003896_1, VkglTestCase_003896_2);

#define VkglTestCase_003897_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003897_2 "ns.vector_multiply.mediump_ivec4_wxww_xwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003897, VkglTestCase_003897_1, VkglTestCase_003897_2);

#define VkglTestCase_003898_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003898_2 "ons.vector_multiply.mediump_ivec4_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003898, VkglTestCase_003898_1, VkglTestCase_003898_2);

#define VkglTestCase_003899_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003899_2 "ns.vector_multiply.mediump_ivec4_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003899, VkglTestCase_003899_1, VkglTestCase_003899_2);

#define VkglTestCase_003900_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003900_2 "ons.vector_multiply.mediump_ivec4_zzzz_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003900, VkglTestCase_003900_1, VkglTestCase_003900_2);

#define VkglTestCase_003901_1 "dEQP-GLES3.functional.shaders.swizzle_math_operatio"
#define VkglTestCase_003901_2 "ns.vector_multiply.mediump_ivec4_zzzz_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003901, VkglTestCase_003901_1, VkglTestCase_003901_2);
