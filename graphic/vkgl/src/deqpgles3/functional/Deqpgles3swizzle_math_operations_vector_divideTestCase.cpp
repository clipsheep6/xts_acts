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

#define VkglTestCase_003902_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003902_2 "erations.vector_divide.mediump_vec2_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003902, VkglTestCase_003902_1, VkglTestCase_003902_2);

#define VkglTestCase_003903_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003903_2 "rations.vector_divide.mediump_vec2_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003903, VkglTestCase_003903_1, VkglTestCase_003903_2);

#define VkglTestCase_003904_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003904_2 "rations.vector_divide.mediump_vec2_xx_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003904, VkglTestCase_003904_1, VkglTestCase_003904_2);

#define VkglTestCase_003905_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003905_2 "ations.vector_divide.mediump_vec2_xx_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003905, VkglTestCase_003905_1, VkglTestCase_003905_2);

#define VkglTestCase_003906_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003906_2 "rations.vector_divide.mediump_vec2_xy_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003906, VkglTestCase_003906_1, VkglTestCase_003906_2);

#define VkglTestCase_003907_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003907_2 "ations.vector_divide.mediump_vec2_xy_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003907, VkglTestCase_003907_1, VkglTestCase_003907_2);

#define VkglTestCase_003908_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003908_2 "rations.vector_divide.mediump_vec2_yx_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003908, VkglTestCase_003908_1, VkglTestCase_003908_2);

#define VkglTestCase_003909_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003909_2 "ations.vector_divide.mediump_vec2_yx_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003909, VkglTestCase_003909_1, VkglTestCase_003909_2);

#define VkglTestCase_003910_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003910_2 "ations.vector_divide.mediump_vec2_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003910, VkglTestCase_003910_1, VkglTestCase_003910_2);

#define VkglTestCase_003911_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003911_2 "tions.vector_divide.mediump_vec2_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003911, VkglTestCase_003911_1, VkglTestCase_003911_2);

#define VkglTestCase_003912_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003912_2 "tions.vector_divide.mediump_vec2_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003912, VkglTestCase_003912_1, VkglTestCase_003912_2);

#define VkglTestCase_003913_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003913_2 "ions.vector_divide.mediump_vec2_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003913, VkglTestCase_003913_1, VkglTestCase_003913_2);

#define VkglTestCase_003914_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003914_2 "tions.vector_divide.mediump_vec2_yxyx_xyxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003914, VkglTestCase_003914_1, VkglTestCase_003914_2);

#define VkglTestCase_003915_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003915_2 "ions.vector_divide.mediump_vec2_yxyx_xyxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003915, VkglTestCase_003915_1, VkglTestCase_003915_2);

#define VkglTestCase_003916_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003916_2 "erations.vector_divide.mediump_vec3_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003916, VkglTestCase_003916_1, VkglTestCase_003916_2);

#define VkglTestCase_003917_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003917_2 "rations.vector_divide.mediump_vec3_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003917, VkglTestCase_003917_1, VkglTestCase_003917_2);

#define VkglTestCase_003918_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003918_2 "erations.vector_divide.mediump_vec3_z_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003918, VkglTestCase_003918_1, VkglTestCase_003918_2);

#define VkglTestCase_003919_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003919_2 "rations.vector_divide.mediump_vec3_z_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003919, VkglTestCase_003919_1, VkglTestCase_003919_2);

#define VkglTestCase_003920_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003920_2 "rations.vector_divide.mediump_vec3_xz_zx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003920, VkglTestCase_003920_1, VkglTestCase_003920_2);

#define VkglTestCase_003921_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003921_2 "ations.vector_divide.mediump_vec3_xz_zx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003921, VkglTestCase_003921_1, VkglTestCase_003921_2);

#define VkglTestCase_003922_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003922_2 "rations.vector_divide.mediump_vec3_zz_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003922, VkglTestCase_003922_1, VkglTestCase_003922_2);

#define VkglTestCase_003923_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003923_2 "ations.vector_divide.mediump_vec3_zz_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003923, VkglTestCase_003923_1, VkglTestCase_003923_2);

#define VkglTestCase_003924_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003924_2 "ations.vector_divide.mediump_vec3_xyz_yzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003924, VkglTestCase_003924_1, VkglTestCase_003924_2);

#define VkglTestCase_003925_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003925_2 "tions.vector_divide.mediump_vec3_xyz_yzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003925, VkglTestCase_003925_1, VkglTestCase_003925_2);

#define VkglTestCase_003926_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003926_2 "ations.vector_divide.mediump_vec3_zyx_yxz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003926, VkglTestCase_003926_1, VkglTestCase_003926_2);

#define VkglTestCase_003927_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003927_2 "tions.vector_divide.mediump_vec3_zyx_yxz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003927, VkglTestCase_003927_1, VkglTestCase_003927_2);

#define VkglTestCase_003928_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003928_2 "ations.vector_divide.mediump_vec3_xxx_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003928, VkglTestCase_003928_1, VkglTestCase_003928_2);

#define VkglTestCase_003929_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003929_2 "tions.vector_divide.mediump_vec3_xxx_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003929, VkglTestCase_003929_1, VkglTestCase_003929_2);

#define VkglTestCase_003930_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003930_2 "ations.vector_divide.mediump_vec3_zzz_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003930, VkglTestCase_003930_1, VkglTestCase_003930_2);

#define VkglTestCase_003931_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003931_2 "tions.vector_divide.mediump_vec3_zzz_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003931, VkglTestCase_003931_1, VkglTestCase_003931_2);

#define VkglTestCase_003932_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003932_2 "ations.vector_divide.mediump_vec3_zzy_zyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003932, VkglTestCase_003932_1, VkglTestCase_003932_2);

#define VkglTestCase_003933_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003933_2 "tions.vector_divide.mediump_vec3_zzy_zyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003933, VkglTestCase_003933_1, VkglTestCase_003933_2);

#define VkglTestCase_003934_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003934_2 "ations.vector_divide.mediump_vec3_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003934, VkglTestCase_003934_1, VkglTestCase_003934_2);

#define VkglTestCase_003935_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003935_2 "tions.vector_divide.mediump_vec3_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003935, VkglTestCase_003935_1, VkglTestCase_003935_2);

#define VkglTestCase_003936_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003936_2 "ations.vector_divide.mediump_vec3_xzx_zxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003936, VkglTestCase_003936_1, VkglTestCase_003936_2);

#define VkglTestCase_003937_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003937_2 "tions.vector_divide.mediump_vec3_xzx_zxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003937, VkglTestCase_003937_1, VkglTestCase_003937_2);

#define VkglTestCase_003938_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003938_2 "tions.vector_divide.mediump_vec3_xyyx_yyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003938, VkglTestCase_003938_1, VkglTestCase_003938_2);

#define VkglTestCase_003939_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003939_2 "ions.vector_divide.mediump_vec3_xyyx_yyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003939, VkglTestCase_003939_1, VkglTestCase_003939_2);

#define VkglTestCase_003940_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003940_2 "tions.vector_divide.mediump_vec3_zxyz_xyzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003940, VkglTestCase_003940_1, VkglTestCase_003940_2);

#define VkglTestCase_003941_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003941_2 "ions.vector_divide.mediump_vec3_zxyz_xyzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003941, VkglTestCase_003941_1, VkglTestCase_003941_2);

#define VkglTestCase_003942_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003942_2 "erations.vector_divide.mediump_vec4_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003942, VkglTestCase_003942_1, VkglTestCase_003942_2);

#define VkglTestCase_003943_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003943_2 "rations.vector_divide.mediump_vec4_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003943, VkglTestCase_003943_1, VkglTestCase_003943_2);

#define VkglTestCase_003944_1 "dEQP-GLES3.functional.shaders.swizzle_math_op"
#define VkglTestCase_003944_2 "erations.vector_divide.mediump_vec4_w_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003944, VkglTestCase_003944_1, VkglTestCase_003944_2);

#define VkglTestCase_003945_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003945_2 "rations.vector_divide.mediump_vec4_w_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003945, VkglTestCase_003945_1, VkglTestCase_003945_2);

#define VkglTestCase_003946_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003946_2 "rations.vector_divide.mediump_vec4_wx_xw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003946, VkglTestCase_003946_1, VkglTestCase_003946_2);

#define VkglTestCase_003947_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003947_2 "ations.vector_divide.mediump_vec4_wx_xw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003947, VkglTestCase_003947_1, VkglTestCase_003947_2);

#define VkglTestCase_003948_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003948_2 "rations.vector_divide.mediump_vec4_wz_zw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003948, VkglTestCase_003948_1, VkglTestCase_003948_2);

#define VkglTestCase_003949_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003949_2 "ations.vector_divide.mediump_vec4_wz_zw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003949, VkglTestCase_003949_1, VkglTestCase_003949_2);

#define VkglTestCase_003950_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003950_2 "ations.vector_divide.mediump_vec4_www_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003950, VkglTestCase_003950_1, VkglTestCase_003950_2);

#define VkglTestCase_003951_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003951_2 "tions.vector_divide.mediump_vec4_www_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003951, VkglTestCase_003951_1, VkglTestCase_003951_2);

#define VkglTestCase_003952_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003952_2 "ations.vector_divide.mediump_vec4_yyw_ywy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003952, VkglTestCase_003952_1, VkglTestCase_003952_2);

#define VkglTestCase_003953_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003953_2 "tions.vector_divide.mediump_vec4_yyw_ywy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003953, VkglTestCase_003953_1, VkglTestCase_003953_2);

#define VkglTestCase_003954_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003954_2 "ations.vector_divide.mediump_vec4_wzy_zyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003954, VkglTestCase_003954_1, VkglTestCase_003954_2);

#define VkglTestCase_003955_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003955_2 "tions.vector_divide.mediump_vec4_wzy_zyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003955, VkglTestCase_003955_1, VkglTestCase_003955_2);

#define VkglTestCase_003956_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003956_2 "tions.vector_divide.mediump_vec4_xyzw_yzwx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003956, VkglTestCase_003956_1, VkglTestCase_003956_2);

#define VkglTestCase_003957_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003957_2 "ions.vector_divide.mediump_vec4_xyzw_yzwx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003957, VkglTestCase_003957_1, VkglTestCase_003957_2);

#define VkglTestCase_003958_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003958_2 "tions.vector_divide.mediump_vec4_wzyx_zyxw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003958, VkglTestCase_003958_1, VkglTestCase_003958_2);

#define VkglTestCase_003959_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003959_2 "ions.vector_divide.mediump_vec4_wzyx_zyxw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003959, VkglTestCase_003959_1, VkglTestCase_003959_2);

#define VkglTestCase_003960_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003960_2 "tions.vector_divide.mediump_vec4_xyxy_yxyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003960, VkglTestCase_003960_1, VkglTestCase_003960_2);

#define VkglTestCase_003961_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003961_2 "ions.vector_divide.mediump_vec4_xyxy_yxyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003961, VkglTestCase_003961_1, VkglTestCase_003961_2);

#define VkglTestCase_003962_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003962_2 "tions.vector_divide.mediump_vec4_yzzy_zzyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003962, VkglTestCase_003962_1, VkglTestCase_003962_2);

#define VkglTestCase_003963_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003963_2 "ions.vector_divide.mediump_vec4_yzzy_zzyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003963, VkglTestCase_003963_1, VkglTestCase_003963_2);

#define VkglTestCase_003964_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003964_2 "tions.vector_divide.mediump_vec4_wxww_xwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003964, VkglTestCase_003964_1, VkglTestCase_003964_2);

#define VkglTestCase_003965_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003965_2 "ions.vector_divide.mediump_vec4_wxww_xwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003965, VkglTestCase_003965_1, VkglTestCase_003965_2);

#define VkglTestCase_003966_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003966_2 "tions.vector_divide.mediump_vec4_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003966, VkglTestCase_003966_1, VkglTestCase_003966_2);

#define VkglTestCase_003967_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003967_2 "ions.vector_divide.mediump_vec4_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003967, VkglTestCase_003967_1, VkglTestCase_003967_2);

#define VkglTestCase_003968_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003968_2 "tions.vector_divide.mediump_vec4_zzzz_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003968, VkglTestCase_003968_1, VkglTestCase_003968_2);

#define VkglTestCase_003969_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003969_2 "ions.vector_divide.mediump_vec4_zzzz_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003969, VkglTestCase_003969_1, VkglTestCase_003969_2);

#define VkglTestCase_003970_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003970_2 "rations.vector_divide.mediump_ivec2_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003970, VkglTestCase_003970_1, VkglTestCase_003970_2);

#define VkglTestCase_003971_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003971_2 "ations.vector_divide.mediump_ivec2_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003971, VkglTestCase_003971_1, VkglTestCase_003971_2);

#define VkglTestCase_003972_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003972_2 "ations.vector_divide.mediump_ivec2_xx_xx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003972, VkglTestCase_003972_1, VkglTestCase_003972_2);

#define VkglTestCase_003973_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003973_2 "tions.vector_divide.mediump_ivec2_xx_xx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003973, VkglTestCase_003973_1, VkglTestCase_003973_2);

#define VkglTestCase_003974_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003974_2 "ations.vector_divide.mediump_ivec2_xy_yx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003974, VkglTestCase_003974_1, VkglTestCase_003974_2);

#define VkglTestCase_003975_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003975_2 "tions.vector_divide.mediump_ivec2_xy_yx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003975, VkglTestCase_003975_1, VkglTestCase_003975_2);

#define VkglTestCase_003976_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003976_2 "ations.vector_divide.mediump_ivec2_yx_xy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003976, VkglTestCase_003976_1, VkglTestCase_003976_2);

#define VkglTestCase_003977_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003977_2 "tions.vector_divide.mediump_ivec2_yx_xy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003977, VkglTestCase_003977_1, VkglTestCase_003977_2);

#define VkglTestCase_003978_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003978_2 "tions.vector_divide.mediump_ivec2_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003978, VkglTestCase_003978_1, VkglTestCase_003978_2);

#define VkglTestCase_003979_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003979_2 "ions.vector_divide.mediump_ivec2_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003979, VkglTestCase_003979_1, VkglTestCase_003979_2);

#define VkglTestCase_003980_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003980_2 "ions.vector_divide.mediump_ivec2_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003980, VkglTestCase_003980_1, VkglTestCase_003980_2);

#define VkglTestCase_003981_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003981_2 "ons.vector_divide.mediump_ivec2_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003981, VkglTestCase_003981_1, VkglTestCase_003981_2);

#define VkglTestCase_003982_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003982_2 "ions.vector_divide.mediump_ivec2_yxyx_xyxy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003982, VkglTestCase_003982_1, VkglTestCase_003982_2);

#define VkglTestCase_003983_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_003983_2 "ons.vector_divide.mediump_ivec2_yxyx_xyxy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003983, VkglTestCase_003983_1, VkglTestCase_003983_2);

#define VkglTestCase_003984_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003984_2 "rations.vector_divide.mediump_ivec3_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003984, VkglTestCase_003984_1, VkglTestCase_003984_2);

#define VkglTestCase_003985_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003985_2 "ations.vector_divide.mediump_ivec3_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003985, VkglTestCase_003985_1, VkglTestCase_003985_2);

#define VkglTestCase_003986_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_003986_2 "rations.vector_divide.mediump_ivec3_z_z_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003986, VkglTestCase_003986_1, VkglTestCase_003986_2);

#define VkglTestCase_003987_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003987_2 "ations.vector_divide.mediump_ivec3_z_z_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003987, VkglTestCase_003987_1, VkglTestCase_003987_2);

#define VkglTestCase_003988_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003988_2 "ations.vector_divide.mediump_ivec3_xz_zx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003988, VkglTestCase_003988_1, VkglTestCase_003988_2);

#define VkglTestCase_003989_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003989_2 "tions.vector_divide.mediump_ivec3_xz_zx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003989, VkglTestCase_003989_1, VkglTestCase_003989_2);

#define VkglTestCase_003990_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_003990_2 "ations.vector_divide.mediump_ivec3_zz_zz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003990, VkglTestCase_003990_1, VkglTestCase_003990_2);

#define VkglTestCase_003991_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003991_2 "tions.vector_divide.mediump_ivec3_zz_zz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003991, VkglTestCase_003991_1, VkglTestCase_003991_2);

#define VkglTestCase_003992_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003992_2 "tions.vector_divide.mediump_ivec3_xyz_yzx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003992, VkglTestCase_003992_1, VkglTestCase_003992_2);

#define VkglTestCase_003993_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003993_2 "ions.vector_divide.mediump_ivec3_xyz_yzx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003993, VkglTestCase_003993_1, VkglTestCase_003993_2);

#define VkglTestCase_003994_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003994_2 "tions.vector_divide.mediump_ivec3_zyx_yxz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003994, VkglTestCase_003994_1, VkglTestCase_003994_2);

#define VkglTestCase_003995_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003995_2 "ions.vector_divide.mediump_ivec3_zyx_yxz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003995, VkglTestCase_003995_1, VkglTestCase_003995_2);

#define VkglTestCase_003996_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003996_2 "tions.vector_divide.mediump_ivec3_xxx_xxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003996, VkglTestCase_003996_1, VkglTestCase_003996_2);

#define VkglTestCase_003997_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003997_2 "ions.vector_divide.mediump_ivec3_xxx_xxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003997, VkglTestCase_003997_1, VkglTestCase_003997_2);

#define VkglTestCase_003998_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_003998_2 "tions.vector_divide.mediump_ivec3_zzz_zzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003998, VkglTestCase_003998_1, VkglTestCase_003998_2);

#define VkglTestCase_003999_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_003999_2 "ions.vector_divide.mediump_ivec3_zzz_zzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_003999, VkglTestCase_003999_1, VkglTestCase_003999_2);

#define VkglTestCase_004000_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_004000_2 "tions.vector_divide.mediump_ivec3_zzy_zyz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004000, VkglTestCase_004000_1, VkglTestCase_004000_2);

#define VkglTestCase_004001_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004001_2 "ions.vector_divide.mediump_ivec3_zzy_zyz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004001, VkglTestCase_004001_1, VkglTestCase_004001_2);

#define VkglTestCase_004002_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_004002_2 "tions.vector_divide.mediump_ivec3_yxy_xyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004002, VkglTestCase_004002_1, VkglTestCase_004002_2);

#define VkglTestCase_004003_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004003_2 "ions.vector_divide.mediump_ivec3_yxy_xyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004003, VkglTestCase_004003_1, VkglTestCase_004003_2);

#define VkglTestCase_004004_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_004004_2 "tions.vector_divide.mediump_ivec3_xzx_zxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004004, VkglTestCase_004004_1, VkglTestCase_004004_2);

#define VkglTestCase_004005_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004005_2 "ions.vector_divide.mediump_ivec3_xzx_zxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004005, VkglTestCase_004005_1, VkglTestCase_004005_2);

#define VkglTestCase_004006_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004006_2 "ions.vector_divide.mediump_ivec3_xyyx_yyxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004006, VkglTestCase_004006_1, VkglTestCase_004006_2);

#define VkglTestCase_004007_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_004007_2 "ons.vector_divide.mediump_ivec3_xyyx_yyxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004007, VkglTestCase_004007_1, VkglTestCase_004007_2);

#define VkglTestCase_004008_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004008_2 "ions.vector_divide.mediump_ivec3_zxyz_xyzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004008, VkglTestCase_004008_1, VkglTestCase_004008_2);

#define VkglTestCase_004009_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_004009_2 "ons.vector_divide.mediump_ivec3_zxyz_xyzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004009, VkglTestCase_004009_1, VkglTestCase_004009_2);

#define VkglTestCase_004010_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_004010_2 "rations.vector_divide.mediump_ivec4_x_x_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004010, VkglTestCase_004010_1, VkglTestCase_004010_2);

#define VkglTestCase_004011_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_004011_2 "ations.vector_divide.mediump_ivec4_x_x_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004011, VkglTestCase_004011_1, VkglTestCase_004011_2);

#define VkglTestCase_004012_1 "dEQP-GLES3.functional.shaders.swizzle_math_ope"
#define VkglTestCase_004012_2 "rations.vector_divide.mediump_ivec4_w_w_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004012, VkglTestCase_004012_1, VkglTestCase_004012_2);

#define VkglTestCase_004013_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_004013_2 "ations.vector_divide.mediump_ivec4_w_w_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004013, VkglTestCase_004013_1, VkglTestCase_004013_2);

#define VkglTestCase_004014_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_004014_2 "ations.vector_divide.mediump_ivec4_wx_xw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004014, VkglTestCase_004014_1, VkglTestCase_004014_2);

#define VkglTestCase_004015_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_004015_2 "tions.vector_divide.mediump_ivec4_wx_xw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004015, VkglTestCase_004015_1, VkglTestCase_004015_2);

#define VkglTestCase_004016_1 "dEQP-GLES3.functional.shaders.swizzle_math_oper"
#define VkglTestCase_004016_2 "ations.vector_divide.mediump_ivec4_wz_zw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004016, VkglTestCase_004016_1, VkglTestCase_004016_2);

#define VkglTestCase_004017_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_004017_2 "tions.vector_divide.mediump_ivec4_wz_zw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004017, VkglTestCase_004017_1, VkglTestCase_004017_2);

#define VkglTestCase_004018_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_004018_2 "tions.vector_divide.mediump_ivec4_www_www_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004018, VkglTestCase_004018_1, VkglTestCase_004018_2);

#define VkglTestCase_004019_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004019_2 "ions.vector_divide.mediump_ivec4_www_www_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004019, VkglTestCase_004019_1, VkglTestCase_004019_2);

#define VkglTestCase_004020_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_004020_2 "tions.vector_divide.mediump_ivec4_yyw_ywy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004020, VkglTestCase_004020_1, VkglTestCase_004020_2);

#define VkglTestCase_004021_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004021_2 "ions.vector_divide.mediump_ivec4_yyw_ywy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004021, VkglTestCase_004021_1, VkglTestCase_004021_2);

#define VkglTestCase_004022_1 "dEQP-GLES3.functional.shaders.swizzle_math_opera"
#define VkglTestCase_004022_2 "tions.vector_divide.mediump_ivec4_wzy_zyw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004022, VkglTestCase_004022_1, VkglTestCase_004022_2);

#define VkglTestCase_004023_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004023_2 "ions.vector_divide.mediump_ivec4_wzy_zyw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004023, VkglTestCase_004023_1, VkglTestCase_004023_2);

#define VkglTestCase_004024_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004024_2 "ions.vector_divide.mediump_ivec4_xyzw_yzwx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004024, VkglTestCase_004024_1, VkglTestCase_004024_2);

#define VkglTestCase_004025_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_004025_2 "ons.vector_divide.mediump_ivec4_xyzw_yzwx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004025, VkglTestCase_004025_1, VkglTestCase_004025_2);

#define VkglTestCase_004026_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004026_2 "ions.vector_divide.mediump_ivec4_wzyx_zyxw_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004026, VkglTestCase_004026_1, VkglTestCase_004026_2);

#define VkglTestCase_004027_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_004027_2 "ons.vector_divide.mediump_ivec4_wzyx_zyxw_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004027, VkglTestCase_004027_1, VkglTestCase_004027_2);

#define VkglTestCase_004028_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004028_2 "ions.vector_divide.mediump_ivec4_xyxy_yxyx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004028, VkglTestCase_004028_1, VkglTestCase_004028_2);

#define VkglTestCase_004029_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_004029_2 "ons.vector_divide.mediump_ivec4_xyxy_yxyx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004029, VkglTestCase_004029_1, VkglTestCase_004029_2);

#define VkglTestCase_004030_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004030_2 "ions.vector_divide.mediump_ivec4_yzzy_zzyy_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004030, VkglTestCase_004030_1, VkglTestCase_004030_2);

#define VkglTestCase_004031_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_004031_2 "ons.vector_divide.mediump_ivec4_yzzy_zzyy_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004031, VkglTestCase_004031_1, VkglTestCase_004031_2);

#define VkglTestCase_004032_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004032_2 "ions.vector_divide.mediump_ivec4_wxww_xwww_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004032, VkglTestCase_004032_1, VkglTestCase_004032_2);

#define VkglTestCase_004033_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_004033_2 "ons.vector_divide.mediump_ivec4_wxww_xwww_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004033, VkglTestCase_004033_1, VkglTestCase_004033_2);

#define VkglTestCase_004034_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004034_2 "ions.vector_divide.mediump_ivec4_xyxx_yxxx_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004034, VkglTestCase_004034_1, VkglTestCase_004034_2);

#define VkglTestCase_004035_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_004035_2 "ons.vector_divide.mediump_ivec4_xyxx_yxxx_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004035, VkglTestCase_004035_1, VkglTestCase_004035_2);

#define VkglTestCase_004036_1 "dEQP-GLES3.functional.shaders.swizzle_math_operat"
#define VkglTestCase_004036_2 "ions.vector_divide.mediump_ivec4_zzzz_zzzz_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004036, VkglTestCase_004036_1, VkglTestCase_004036_2);

#define VkglTestCase_004037_1 "dEQP-GLES3.functional.shaders.swizzle_math_operati"
#define VkglTestCase_004037_2 "ons.vector_divide.mediump_ivec4_zzzz_zzzz_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30004TestSuite, TestCase_004037, VkglTestCase_004037_1, VkglTestCase_004037_2);
