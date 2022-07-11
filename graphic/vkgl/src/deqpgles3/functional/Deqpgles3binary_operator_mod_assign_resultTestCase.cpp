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
#include "../ActsDeqpgles30012TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_011240_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011240_2 "y_operator.mod_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011240, VkglTestCase_011240_1, VkglTestCase_011240_2);

#define VkglTestCase_011241_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011241_2 "_operator.mod_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011241, VkglTestCase_011241_1, VkglTestCase_011241_2);

#define VkglTestCase_011242_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011242_2 "_operator.mod_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011242, VkglTestCase_011242_1, VkglTestCase_011242_2);

#define VkglTestCase_011243_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011243_2 "operator.mod_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011243, VkglTestCase_011243_1, VkglTestCase_011243_2);

#define VkglTestCase_011244_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011244_2 "_operator.mod_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011244, VkglTestCase_011244_1, VkglTestCase_011244_2);

#define VkglTestCase_011245_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011245_2 "operator.mod_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011245, VkglTestCase_011245_1, VkglTestCase_011245_2);

#define VkglTestCase_011246_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011246_2 "operator.mod_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011246, VkglTestCase_011246_1, VkglTestCase_011246_2);

#define VkglTestCase_011247_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011247_2 "perator.mod_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011247, VkglTestCase_011247_1, VkglTestCase_011247_2);

#define VkglTestCase_011248_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011248_2 "_operator.mod_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011248, VkglTestCase_011248_1, VkglTestCase_011248_2);

#define VkglTestCase_011249_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011249_2 "operator.mod_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011249, VkglTestCase_011249_1, VkglTestCase_011249_2);

#define VkglTestCase_011250_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011250_2 "operator.mod_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011250, VkglTestCase_011250_1, VkglTestCase_011250_2);

#define VkglTestCase_011251_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011251_2 "perator.mod_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011251, VkglTestCase_011251_1, VkglTestCase_011251_2);

#define VkglTestCase_011252_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011252_2 "_operator.mod_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011252, VkglTestCase_011252_1, VkglTestCase_011252_2);

#define VkglTestCase_011253_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011253_2 "operator.mod_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011253, VkglTestCase_011253_1, VkglTestCase_011253_2);

#define VkglTestCase_011254_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011254_2 "operator.mod_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011254, VkglTestCase_011254_1, VkglTestCase_011254_2);

#define VkglTestCase_011255_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011255_2 "perator.mod_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011255, VkglTestCase_011255_1, VkglTestCase_011255_2);

#define VkglTestCase_011256_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011256_2 "y_operator.mod_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011256, VkglTestCase_011256_1, VkglTestCase_011256_2);

#define VkglTestCase_011257_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011257_2 "_operator.mod_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011257, VkglTestCase_011257_1, VkglTestCase_011257_2);

#define VkglTestCase_011258_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011258_2 "_operator.mod_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011258, VkglTestCase_011258_1, VkglTestCase_011258_2);

#define VkglTestCase_011259_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011259_2 "operator.mod_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011259, VkglTestCase_011259_1, VkglTestCase_011259_2);

#define VkglTestCase_011260_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011260_2 "_operator.mod_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011260, VkglTestCase_011260_1, VkglTestCase_011260_2);

#define VkglTestCase_011261_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011261_2 "operator.mod_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011261, VkglTestCase_011261_1, VkglTestCase_011261_2);

#define VkglTestCase_011262_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011262_2 "_operator.mod_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011262, VkglTestCase_011262_1, VkglTestCase_011262_2);

#define VkglTestCase_011263_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011263_2 "operator.mod_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011263, VkglTestCase_011263_1, VkglTestCase_011263_2);

#define VkglTestCase_011264_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_011264_2 "y_operator.mod_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011264, VkglTestCase_011264_1, VkglTestCase_011264_2);

#define VkglTestCase_011265_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011265_2 "_operator.mod_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011265, VkglTestCase_011265_1, VkglTestCase_011265_2);

#define VkglTestCase_011266_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011266_2 "operator.mod_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011266, VkglTestCase_011266_1, VkglTestCase_011266_2);

#define VkglTestCase_011267_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011267_2 "perator.mod_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011267, VkglTestCase_011267_1, VkglTestCase_011267_2);

#define VkglTestCase_011268_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011268_2 "_operator.mod_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011268, VkglTestCase_011268_1, VkglTestCase_011268_2);

#define VkglTestCase_011269_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011269_2 "operator.mod_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011269, VkglTestCase_011269_1, VkglTestCase_011269_2);

#define VkglTestCase_011270_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011270_2 "operator.mod_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011270, VkglTestCase_011270_1, VkglTestCase_011270_2);

#define VkglTestCase_011271_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011271_2 "perator.mod_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011271, VkglTestCase_011271_1, VkglTestCase_011271_2);

#define VkglTestCase_011272_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011272_2 "_operator.mod_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011272, VkglTestCase_011272_1, VkglTestCase_011272_2);

#define VkglTestCase_011273_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011273_2 "operator.mod_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011273, VkglTestCase_011273_1, VkglTestCase_011273_2);

#define VkglTestCase_011274_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011274_2 "operator.mod_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011274, VkglTestCase_011274_1, VkglTestCase_011274_2);

#define VkglTestCase_011275_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011275_2 "perator.mod_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011275, VkglTestCase_011275_1, VkglTestCase_011275_2);

#define VkglTestCase_011276_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011276_2 "_operator.mod_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011276, VkglTestCase_011276_1, VkglTestCase_011276_2);

#define VkglTestCase_011277_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011277_2 "operator.mod_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011277, VkglTestCase_011277_1, VkglTestCase_011277_2);

#define VkglTestCase_011278_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011278_2 "operator.mod_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011278, VkglTestCase_011278_1, VkglTestCase_011278_2);

#define VkglTestCase_011279_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011279_2 "perator.mod_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011279, VkglTestCase_011279_1, VkglTestCase_011279_2);

#define VkglTestCase_011280_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011280_2 "_operator.mod_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011280, VkglTestCase_011280_1, VkglTestCase_011280_2);

#define VkglTestCase_011281_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011281_2 "operator.mod_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011281, VkglTestCase_011281_1, VkglTestCase_011281_2);

#define VkglTestCase_011282_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011282_2 "_operator.mod_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011282, VkglTestCase_011282_1, VkglTestCase_011282_2);

#define VkglTestCase_011283_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011283_2 "operator.mod_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011283, VkglTestCase_011283_1, VkglTestCase_011283_2);

#define VkglTestCase_011284_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011284_2 "_operator.mod_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011284, VkglTestCase_011284_1, VkglTestCase_011284_2);

#define VkglTestCase_011285_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011285_2 "operator.mod_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011285, VkglTestCase_011285_1, VkglTestCase_011285_2);

#define VkglTestCase_011286_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_011286_2 "_operator.mod_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011286, VkglTestCase_011286_1, VkglTestCase_011286_2);

#define VkglTestCase_011287_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_011287_2 "operator.mod_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011287, VkglTestCase_011287_1, VkglTestCase_011287_2);

#define VkglTestCase_011288_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011288_2 "perator.mod_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011288, VkglTestCase_011288_1, VkglTestCase_011288_2);

#define VkglTestCase_011289_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011289_2 "erator.mod_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011289, VkglTestCase_011289_1, VkglTestCase_011289_2);

#define VkglTestCase_011290_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011290_2 "erator.mod_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011290, VkglTestCase_011290_1, VkglTestCase_011290_2);

#define VkglTestCase_011291_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011291_2 "rator.mod_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011291, VkglTestCase_011291_1, VkglTestCase_011291_2);

#define VkglTestCase_011292_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011292_2 "perator.mod_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011292, VkglTestCase_011292_1, VkglTestCase_011292_2);

#define VkglTestCase_011293_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011293_2 "erator.mod_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011293, VkglTestCase_011293_1, VkglTestCase_011293_2);

#define VkglTestCase_011294_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011294_2 "erator.mod_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011294, VkglTestCase_011294_1, VkglTestCase_011294_2);

#define VkglTestCase_011295_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011295_2 "rator.mod_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011295, VkglTestCase_011295_1, VkglTestCase_011295_2);

#define VkglTestCase_011296_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011296_2 "perator.mod_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011296, VkglTestCase_011296_1, VkglTestCase_011296_2);

#define VkglTestCase_011297_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011297_2 "erator.mod_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011297, VkglTestCase_011297_1, VkglTestCase_011297_2);

#define VkglTestCase_011298_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011298_2 "erator.mod_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011298, VkglTestCase_011298_1, VkglTestCase_011298_2);

#define VkglTestCase_011299_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011299_2 "rator.mod_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011299, VkglTestCase_011299_1, VkglTestCase_011299_2);

#define VkglTestCase_011300_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011300_2 "perator.mod_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011300, VkglTestCase_011300_1, VkglTestCase_011300_2);

#define VkglTestCase_011301_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011301_2 "erator.mod_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011301, VkglTestCase_011301_1, VkglTestCase_011301_2);

#define VkglTestCase_011302_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011302_2 "perator.mod_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011302, VkglTestCase_011302_1, VkglTestCase_011302_2);

#define VkglTestCase_011303_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011303_2 "erator.mod_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011303, VkglTestCase_011303_1, VkglTestCase_011303_2);

#define VkglTestCase_011304_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011304_2 "perator.mod_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011304, VkglTestCase_011304_1, VkglTestCase_011304_2);

#define VkglTestCase_011305_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011305_2 "erator.mod_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011305, VkglTestCase_011305_1, VkglTestCase_011305_2);

#define VkglTestCase_011306_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011306_2 "perator.mod_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011306, VkglTestCase_011306_1, VkglTestCase_011306_2);

#define VkglTestCase_011307_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011307_2 "erator.mod_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011307, VkglTestCase_011307_1, VkglTestCase_011307_2);

#define VkglTestCase_011308_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011308_2 "rator.mod_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011308, VkglTestCase_011308_1, VkglTestCase_011308_2);

#define VkglTestCase_011309_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011309_2 "ator.mod_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011309, VkglTestCase_011309_1, VkglTestCase_011309_2);

#define VkglTestCase_011310_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011310_2 "perator.mod_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011310, VkglTestCase_011310_1, VkglTestCase_011310_2);

#define VkglTestCase_011311_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011311_2 "erator.mod_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011311, VkglTestCase_011311_1, VkglTestCase_011311_2);

#define VkglTestCase_011312_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011312_2 "rator.mod_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011312, VkglTestCase_011312_1, VkglTestCase_011312_2);

#define VkglTestCase_011313_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011313_2 "ator.mod_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011313, VkglTestCase_011313_1, VkglTestCase_011313_2);

#define VkglTestCase_011314_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011314_2 "perator.mod_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011314, VkglTestCase_011314_1, VkglTestCase_011314_2);

#define VkglTestCase_011315_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011315_2 "erator.mod_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011315, VkglTestCase_011315_1, VkglTestCase_011315_2);

#define VkglTestCase_011316_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011316_2 "rator.mod_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011316, VkglTestCase_011316_1, VkglTestCase_011316_2);

#define VkglTestCase_011317_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011317_2 "ator.mod_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011317, VkglTestCase_011317_1, VkglTestCase_011317_2);

#define VkglTestCase_011318_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011318_2 "erator.mod_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011318, VkglTestCase_011318_1, VkglTestCase_011318_2);

#define VkglTestCase_011319_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011319_2 "rator.mod_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011319, VkglTestCase_011319_1, VkglTestCase_011319_2);

#define VkglTestCase_011320_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011320_2 "erator.mod_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011320, VkglTestCase_011320_1, VkglTestCase_011320_2);

#define VkglTestCase_011321_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011321_2 "rator.mod_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011321, VkglTestCase_011321_1, VkglTestCase_011321_2);

#define VkglTestCase_011322_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011322_2 "erator.mod_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011322, VkglTestCase_011322_1, VkglTestCase_011322_2);

#define VkglTestCase_011323_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011323_2 "rator.mod_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011323, VkglTestCase_011323_1, VkglTestCase_011323_2);
