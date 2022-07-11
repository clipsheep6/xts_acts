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
#include "../ActsDeqpgles30009TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_008864_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008864_2 "nary_operator.bitwise_and.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008864, VkglTestCase_008864_1, VkglTestCase_008864_2);

#define VkglTestCase_008865_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008865_2 "ary_operator.bitwise_and.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008865, VkglTestCase_008865_1, VkglTestCase_008865_2);

#define VkglTestCase_008866_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008866_2 "ary_operator.bitwise_and.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008866, VkglTestCase_008866_1, VkglTestCase_008866_2);

#define VkglTestCase_008867_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008867_2 "ry_operator.bitwise_and.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008867, VkglTestCase_008867_1, VkglTestCase_008867_2);

#define VkglTestCase_008868_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008868_2 "ary_operator.bitwise_and.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008868, VkglTestCase_008868_1, VkglTestCase_008868_2);

#define VkglTestCase_008869_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008869_2 "ry_operator.bitwise_and.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008869, VkglTestCase_008869_1, VkglTestCase_008869_2);

#define VkglTestCase_008870_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008870_2 "ry_operator.bitwise_and.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008870, VkglTestCase_008870_1, VkglTestCase_008870_2);

#define VkglTestCase_008871_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008871_2 "y_operator.bitwise_and.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008871, VkglTestCase_008871_1, VkglTestCase_008871_2);

#define VkglTestCase_008872_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008872_2 "ary_operator.bitwise_and.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008872, VkglTestCase_008872_1, VkglTestCase_008872_2);

#define VkglTestCase_008873_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008873_2 "ry_operator.bitwise_and.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008873, VkglTestCase_008873_1, VkglTestCase_008873_2);

#define VkglTestCase_008874_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008874_2 "ry_operator.bitwise_and.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008874, VkglTestCase_008874_1, VkglTestCase_008874_2);

#define VkglTestCase_008875_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008875_2 "y_operator.bitwise_and.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008875, VkglTestCase_008875_1, VkglTestCase_008875_2);

#define VkglTestCase_008876_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008876_2 "ary_operator.bitwise_and.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008876, VkglTestCase_008876_1, VkglTestCase_008876_2);

#define VkglTestCase_008877_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008877_2 "ry_operator.bitwise_and.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008877, VkglTestCase_008877_1, VkglTestCase_008877_2);

#define VkglTestCase_008878_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008878_2 "ry_operator.bitwise_and.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008878, VkglTestCase_008878_1, VkglTestCase_008878_2);

#define VkglTestCase_008879_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008879_2 "y_operator.bitwise_and.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008879, VkglTestCase_008879_1, VkglTestCase_008879_2);

#define VkglTestCase_008880_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008880_2 "nary_operator.bitwise_and.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008880, VkglTestCase_008880_1, VkglTestCase_008880_2);

#define VkglTestCase_008881_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008881_2 "ary_operator.bitwise_and.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008881, VkglTestCase_008881_1, VkglTestCase_008881_2);

#define VkglTestCase_008882_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008882_2 "ary_operator.bitwise_and.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008882, VkglTestCase_008882_1, VkglTestCase_008882_2);

#define VkglTestCase_008883_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008883_2 "ry_operator.bitwise_and.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008883, VkglTestCase_008883_1, VkglTestCase_008883_2);

#define VkglTestCase_008884_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008884_2 "ary_operator.bitwise_and.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008884, VkglTestCase_008884_1, VkglTestCase_008884_2);

#define VkglTestCase_008885_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008885_2 "ry_operator.bitwise_and.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008885, VkglTestCase_008885_1, VkglTestCase_008885_2);

#define VkglTestCase_008886_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008886_2 "ary_operator.bitwise_and.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008886, VkglTestCase_008886_1, VkglTestCase_008886_2);

#define VkglTestCase_008887_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008887_2 "ry_operator.bitwise_and.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008887, VkglTestCase_008887_1, VkglTestCase_008887_2);

#define VkglTestCase_008888_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008888_2 "nary_operator.bitwise_and.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008888, VkglTestCase_008888_1, VkglTestCase_008888_2);

#define VkglTestCase_008889_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008889_2 "ary_operator.bitwise_and.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008889, VkglTestCase_008889_1, VkglTestCase_008889_2);

#define VkglTestCase_008890_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008890_2 "ry_operator.bitwise_and.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008890, VkglTestCase_008890_1, VkglTestCase_008890_2);

#define VkglTestCase_008891_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008891_2 "y_operator.bitwise_and.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008891, VkglTestCase_008891_1, VkglTestCase_008891_2);

#define VkglTestCase_008892_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008892_2 "ary_operator.bitwise_and.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008892, VkglTestCase_008892_1, VkglTestCase_008892_2);

#define VkglTestCase_008893_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008893_2 "ry_operator.bitwise_and.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008893, VkglTestCase_008893_1, VkglTestCase_008893_2);

#define VkglTestCase_008894_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008894_2 "ry_operator.bitwise_and.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008894, VkglTestCase_008894_1, VkglTestCase_008894_2);

#define VkglTestCase_008895_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008895_2 "y_operator.bitwise_and.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008895, VkglTestCase_008895_1, VkglTestCase_008895_2);

#define VkglTestCase_008896_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008896_2 "ary_operator.bitwise_and.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008896, VkglTestCase_008896_1, VkglTestCase_008896_2);

#define VkglTestCase_008897_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008897_2 "ry_operator.bitwise_and.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008897, VkglTestCase_008897_1, VkglTestCase_008897_2);

#define VkglTestCase_008898_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008898_2 "ry_operator.bitwise_and.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008898, VkglTestCase_008898_1, VkglTestCase_008898_2);

#define VkglTestCase_008899_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008899_2 "y_operator.bitwise_and.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008899, VkglTestCase_008899_1, VkglTestCase_008899_2);

#define VkglTestCase_008900_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008900_2 "ary_operator.bitwise_and.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008900, VkglTestCase_008900_1, VkglTestCase_008900_2);

#define VkglTestCase_008901_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008901_2 "ry_operator.bitwise_and.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008901, VkglTestCase_008901_1, VkglTestCase_008901_2);

#define VkglTestCase_008902_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008902_2 "ry_operator.bitwise_and.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008902, VkglTestCase_008902_1, VkglTestCase_008902_2);

#define VkglTestCase_008903_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008903_2 "y_operator.bitwise_and.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008903, VkglTestCase_008903_1, VkglTestCase_008903_2);

#define VkglTestCase_008904_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008904_2 "ary_operator.bitwise_and.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008904, VkglTestCase_008904_1, VkglTestCase_008904_2);

#define VkglTestCase_008905_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008905_2 "ry_operator.bitwise_and.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008905, VkglTestCase_008905_1, VkglTestCase_008905_2);

#define VkglTestCase_008906_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008906_2 "ary_operator.bitwise_and.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008906, VkglTestCase_008906_1, VkglTestCase_008906_2);

#define VkglTestCase_008907_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008907_2 "ry_operator.bitwise_and.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008907, VkglTestCase_008907_1, VkglTestCase_008907_2);

#define VkglTestCase_008908_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008908_2 "ary_operator.bitwise_and.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008908, VkglTestCase_008908_1, VkglTestCase_008908_2);

#define VkglTestCase_008909_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008909_2 "ry_operator.bitwise_and.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008909, VkglTestCase_008909_1, VkglTestCase_008909_2);

#define VkglTestCase_008910_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008910_2 "ary_operator.bitwise_and.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008910, VkglTestCase_008910_1, VkglTestCase_008910_2);

#define VkglTestCase_008911_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008911_2 "ry_operator.bitwise_and.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008911, VkglTestCase_008911_1, VkglTestCase_008911_2);

#define VkglTestCase_008912_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008912_2 "y_operator.bitwise_and.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008912, VkglTestCase_008912_1, VkglTestCase_008912_2);

#define VkglTestCase_008913_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008913_2 "_operator.bitwise_and.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008913, VkglTestCase_008913_1, VkglTestCase_008913_2);

#define VkglTestCase_008914_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008914_2 "_operator.bitwise_and.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008914, VkglTestCase_008914_1, VkglTestCase_008914_2);

#define VkglTestCase_008915_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008915_2 "operator.bitwise_and.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008915, VkglTestCase_008915_1, VkglTestCase_008915_2);

#define VkglTestCase_008916_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008916_2 "y_operator.bitwise_and.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008916, VkglTestCase_008916_1, VkglTestCase_008916_2);

#define VkglTestCase_008917_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008917_2 "_operator.bitwise_and.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008917, VkglTestCase_008917_1, VkglTestCase_008917_2);

#define VkglTestCase_008918_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008918_2 "_operator.bitwise_and.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008918, VkglTestCase_008918_1, VkglTestCase_008918_2);

#define VkglTestCase_008919_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008919_2 "operator.bitwise_and.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008919, VkglTestCase_008919_1, VkglTestCase_008919_2);

#define VkglTestCase_008920_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008920_2 "y_operator.bitwise_and.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008920, VkglTestCase_008920_1, VkglTestCase_008920_2);

#define VkglTestCase_008921_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008921_2 "_operator.bitwise_and.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008921, VkglTestCase_008921_1, VkglTestCase_008921_2);

#define VkglTestCase_008922_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008922_2 "_operator.bitwise_and.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008922, VkglTestCase_008922_1, VkglTestCase_008922_2);

#define VkglTestCase_008923_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008923_2 "operator.bitwise_and.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008923, VkglTestCase_008923_1, VkglTestCase_008923_2);

#define VkglTestCase_008924_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008924_2 "y_operator.bitwise_and.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008924, VkglTestCase_008924_1, VkglTestCase_008924_2);

#define VkglTestCase_008925_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008925_2 "_operator.bitwise_and.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008925, VkglTestCase_008925_1, VkglTestCase_008925_2);

#define VkglTestCase_008926_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008926_2 "y_operator.bitwise_and.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008926, VkglTestCase_008926_1, VkglTestCase_008926_2);

#define VkglTestCase_008927_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008927_2 "_operator.bitwise_and.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008927, VkglTestCase_008927_1, VkglTestCase_008927_2);

#define VkglTestCase_008928_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008928_2 "y_operator.bitwise_and.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008928, VkglTestCase_008928_1, VkglTestCase_008928_2);

#define VkglTestCase_008929_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008929_2 "_operator.bitwise_and.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008929, VkglTestCase_008929_1, VkglTestCase_008929_2);

#define VkglTestCase_008930_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008930_2 "y_operator.bitwise_and.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008930, VkglTestCase_008930_1, VkglTestCase_008930_2);

#define VkglTestCase_008931_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008931_2 "_operator.bitwise_and.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008931, VkglTestCase_008931_1, VkglTestCase_008931_2);

#define VkglTestCase_008932_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008932_2 "operator.bitwise_and.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008932, VkglTestCase_008932_1, VkglTestCase_008932_2);

#define VkglTestCase_008933_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_008933_2 "perator.bitwise_and.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008933, VkglTestCase_008933_1, VkglTestCase_008933_2);

#define VkglTestCase_008934_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008934_2 "y_operator.bitwise_and.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008934, VkglTestCase_008934_1, VkglTestCase_008934_2);

#define VkglTestCase_008935_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008935_2 "_operator.bitwise_and.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008935, VkglTestCase_008935_1, VkglTestCase_008935_2);

#define VkglTestCase_008936_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008936_2 "operator.bitwise_and.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008936, VkglTestCase_008936_1, VkglTestCase_008936_2);

#define VkglTestCase_008937_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_008937_2 "perator.bitwise_and.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008937, VkglTestCase_008937_1, VkglTestCase_008937_2);

#define VkglTestCase_008938_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008938_2 "y_operator.bitwise_and.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008938, VkglTestCase_008938_1, VkglTestCase_008938_2);

#define VkglTestCase_008939_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008939_2 "_operator.bitwise_and.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008939, VkglTestCase_008939_1, VkglTestCase_008939_2);

#define VkglTestCase_008940_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008940_2 "operator.bitwise_and.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008940, VkglTestCase_008940_1, VkglTestCase_008940_2);

#define VkglTestCase_008941_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_008941_2 "perator.bitwise_and.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008941, VkglTestCase_008941_1, VkglTestCase_008941_2);

#define VkglTestCase_008942_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008942_2 "_operator.bitwise_and.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008942, VkglTestCase_008942_1, VkglTestCase_008942_2);

#define VkglTestCase_008943_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008943_2 "operator.bitwise_and.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008943, VkglTestCase_008943_1, VkglTestCase_008943_2);

#define VkglTestCase_008944_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008944_2 "_operator.bitwise_and.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008944, VkglTestCase_008944_1, VkglTestCase_008944_2);

#define VkglTestCase_008945_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008945_2 "operator.bitwise_and.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008945, VkglTestCase_008945_1, VkglTestCase_008945_2);

#define VkglTestCase_008946_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008946_2 "_operator.bitwise_and.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008946, VkglTestCase_008946_1, VkglTestCase_008946_2);

#define VkglTestCase_008947_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008947_2 "operator.bitwise_and.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008947, VkglTestCase_008947_1, VkglTestCase_008947_2);

#define VkglTestCase_008948_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008948_2 "y_operator.bitwise_and.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008948, VkglTestCase_008948_1, VkglTestCase_008948_2);

#define VkglTestCase_008949_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008949_2 "_operator.bitwise_and.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008949, VkglTestCase_008949_1, VkglTestCase_008949_2);

#define VkglTestCase_008950_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008950_2 "_operator.bitwise_and.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008950, VkglTestCase_008950_1, VkglTestCase_008950_2);

#define VkglTestCase_008951_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008951_2 "operator.bitwise_and.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008951, VkglTestCase_008951_1, VkglTestCase_008951_2);

#define VkglTestCase_008952_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008952_2 "y_operator.bitwise_and.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008952, VkglTestCase_008952_1, VkglTestCase_008952_2);

#define VkglTestCase_008953_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008953_2 "_operator.bitwise_and.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008953, VkglTestCase_008953_1, VkglTestCase_008953_2);

#define VkglTestCase_008954_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008954_2 "_operator.bitwise_and.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008954, VkglTestCase_008954_1, VkglTestCase_008954_2);

#define VkglTestCase_008955_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008955_2 "operator.bitwise_and.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008955, VkglTestCase_008955_1, VkglTestCase_008955_2);

#define VkglTestCase_008956_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008956_2 "y_operator.bitwise_and.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008956, VkglTestCase_008956_1, VkglTestCase_008956_2);

#define VkglTestCase_008957_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008957_2 "_operator.bitwise_and.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008957, VkglTestCase_008957_1, VkglTestCase_008957_2);

#define VkglTestCase_008958_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008958_2 "_operator.bitwise_and.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008958, VkglTestCase_008958_1, VkglTestCase_008958_2);

#define VkglTestCase_008959_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008959_2 "operator.bitwise_and.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008959, VkglTestCase_008959_1, VkglTestCase_008959_2);

#define VkglTestCase_008960_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008960_2 "y_operator.bitwise_and.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008960, VkglTestCase_008960_1, VkglTestCase_008960_2);

#define VkglTestCase_008961_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008961_2 "_operator.bitwise_and.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008961, VkglTestCase_008961_1, VkglTestCase_008961_2);

#define VkglTestCase_008962_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008962_2 "y_operator.bitwise_and.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008962, VkglTestCase_008962_1, VkglTestCase_008962_2);

#define VkglTestCase_008963_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008963_2 "_operator.bitwise_and.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008963, VkglTestCase_008963_1, VkglTestCase_008963_2);

#define VkglTestCase_008964_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008964_2 "y_operator.bitwise_and.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008964, VkglTestCase_008964_1, VkglTestCase_008964_2);

#define VkglTestCase_008965_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008965_2 "_operator.bitwise_and.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008965, VkglTestCase_008965_1, VkglTestCase_008965_2);

#define VkglTestCase_008966_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008966_2 "y_operator.bitwise_and.lowp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008966, VkglTestCase_008966_1, VkglTestCase_008966_2);

#define VkglTestCase_008967_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008967_2 "_operator.bitwise_and.lowp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008967, VkglTestCase_008967_1, VkglTestCase_008967_2);

#define VkglTestCase_008968_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008968_2 "operator.bitwise_and.mediump_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008968, VkglTestCase_008968_1, VkglTestCase_008968_2);

#define VkglTestCase_008969_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_008969_2 "perator.bitwise_and.mediump_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008969, VkglTestCase_008969_1, VkglTestCase_008969_2);

#define VkglTestCase_008970_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008970_2 "y_operator.bitwise_and.lowp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008970, VkglTestCase_008970_1, VkglTestCase_008970_2);

#define VkglTestCase_008971_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008971_2 "_operator.bitwise_and.lowp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008971, VkglTestCase_008971_1, VkglTestCase_008971_2);

#define VkglTestCase_008972_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008972_2 "operator.bitwise_and.mediump_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008972, VkglTestCase_008972_1, VkglTestCase_008972_2);

#define VkglTestCase_008973_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_008973_2 "perator.bitwise_and.mediump_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008973, VkglTestCase_008973_1, VkglTestCase_008973_2);

#define VkglTestCase_008974_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_008974_2 "y_operator.bitwise_and.lowp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008974, VkglTestCase_008974_1, VkglTestCase_008974_2);

#define VkglTestCase_008975_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008975_2 "_operator.bitwise_and.lowp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008975, VkglTestCase_008975_1, VkglTestCase_008975_2);

#define VkglTestCase_008976_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008976_2 "operator.bitwise_and.mediump_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008976, VkglTestCase_008976_1, VkglTestCase_008976_2);

#define VkglTestCase_008977_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_008977_2 "perator.bitwise_and.mediump_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008977, VkglTestCase_008977_1, VkglTestCase_008977_2);

#define VkglTestCase_008978_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008978_2 "_operator.bitwise_and.highp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008978, VkglTestCase_008978_1, VkglTestCase_008978_2);

#define VkglTestCase_008979_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008979_2 "operator.bitwise_and.highp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008979, VkglTestCase_008979_1, VkglTestCase_008979_2);

#define VkglTestCase_008980_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008980_2 "_operator.bitwise_and.highp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008980, VkglTestCase_008980_1, VkglTestCase_008980_2);

#define VkglTestCase_008981_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008981_2 "operator.bitwise_and.highp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008981, VkglTestCase_008981_1, VkglTestCase_008981_2);

#define VkglTestCase_008982_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_008982_2 "_operator.bitwise_and.highp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008982, VkglTestCase_008982_1, VkglTestCase_008982_2);

#define VkglTestCase_008983_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_008983_2 "operator.bitwise_and.highp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008983, VkglTestCase_008983_1, VkglTestCase_008983_2);
