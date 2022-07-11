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
#include "../ActsDeqpgles30035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034247_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034247_2 "asic_type.packed.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034247, VkglTestCase_034247_1, VkglTestCase_034247_2);

#define VkglTestCase_034248_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034248_2 "sic_type.packed.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034248, VkglTestCase_034248_1, VkglTestCase_034248_2);

#define VkglTestCase_034249_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034249_2 "sic_type.packed.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034249, VkglTestCase_034249_1, VkglTestCase_034249_2);

#define VkglTestCase_034250_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034250_2 "ic_type.packed.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034250, VkglTestCase_034250_1, VkglTestCase_034250_2);

#define VkglTestCase_034251_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034251_2 "asic_type.packed.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034251, VkglTestCase_034251_1, VkglTestCase_034251_2);

#define VkglTestCase_034252_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034252_2 "sic_type.packed.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034252, VkglTestCase_034252_1, VkglTestCase_034252_2);

#define VkglTestCase_034253_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034253_2 "basic_type.packed.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034253, VkglTestCase_034253_1, VkglTestCase_034253_2);

#define VkglTestCase_034254_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034254_2 "asic_type.packed.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034254, VkglTestCase_034254_1, VkglTestCase_034254_2);

#define VkglTestCase_034255_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034255_2 "sic_type.packed.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034255, VkglTestCase_034255_1, VkglTestCase_034255_2);

#define VkglTestCase_034256_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034256_2 "ic_type.packed.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034256, VkglTestCase_034256_1, VkglTestCase_034256_2);

#define VkglTestCase_034257_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034257_2 "asic_type.packed.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034257, VkglTestCase_034257_1, VkglTestCase_034257_2);

#define VkglTestCase_034258_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034258_2 "sic_type.packed.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034258, VkglTestCase_034258_1, VkglTestCase_034258_2);

#define VkglTestCase_034259_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034259_2 "basic_type.packed.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034259, VkglTestCase_034259_1, VkglTestCase_034259_2);

#define VkglTestCase_034260_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034260_2 "asic_type.packed.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034260, VkglTestCase_034260_1, VkglTestCase_034260_2);

#define VkglTestCase_034261_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034261_2 "sic_type.packed.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034261, VkglTestCase_034261_1, VkglTestCase_034261_2);

#define VkglTestCase_034262_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034262_2 "ic_type.packed.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034262, VkglTestCase_034262_1, VkglTestCase_034262_2);

#define VkglTestCase_034263_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034263_2 "asic_type.packed.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034263, VkglTestCase_034263_1, VkglTestCase_034263_2);

#define VkglTestCase_034264_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034264_2 "sic_type.packed.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034264, VkglTestCase_034264_1, VkglTestCase_034264_2);

#define VkglTestCase_034265_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034265_2 "basic_type.packed.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034265, VkglTestCase_034265_1, VkglTestCase_034265_2);

#define VkglTestCase_034266_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034266_2 "asic_type.packed.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034266, VkglTestCase_034266_1, VkglTestCase_034266_2);

#define VkglTestCase_034267_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034267_2 "sic_type.packed.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034267, VkglTestCase_034267_1, VkglTestCase_034267_2);

#define VkglTestCase_034268_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034268_2 "ic_type.packed.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034268, VkglTestCase_034268_1, VkglTestCase_034268_2);

#define VkglTestCase_034269_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034269_2 "asic_type.packed.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034269, VkglTestCase_034269_1, VkglTestCase_034269_2);

#define VkglTestCase_034270_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034270_2 "sic_type.packed.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034270, VkglTestCase_034270_1, VkglTestCase_034270_2);

#define VkglTestCase_034271_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034271_2 "basic_type.packed.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034271, VkglTestCase_034271_1, VkglTestCase_034271_2);

#define VkglTestCase_034272_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034272_2 "asic_type.packed.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034272, VkglTestCase_034272_1, VkglTestCase_034272_2);

#define VkglTestCase_034273_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034273_2 "asic_type.packed.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034273, VkglTestCase_034273_1, VkglTestCase_034273_2);

#define VkglTestCase_034274_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034274_2 "sic_type.packed.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034274, VkglTestCase_034274_1, VkglTestCase_034274_2);

#define VkglTestCase_034275_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034275_2 "basic_type.packed.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034275, VkglTestCase_034275_1, VkglTestCase_034275_2);

#define VkglTestCase_034276_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034276_2 "asic_type.packed.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034276, VkglTestCase_034276_1, VkglTestCase_034276_2);

#define VkglTestCase_034277_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034277_2 "asic_type.packed.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034277, VkglTestCase_034277_1, VkglTestCase_034277_2);

#define VkglTestCase_034278_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034278_2 "sic_type.packed.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034278, VkglTestCase_034278_1, VkglTestCase_034278_2);

#define VkglTestCase_034279_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034279_2 "sic_type.packed.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034279, VkglTestCase_034279_1, VkglTestCase_034279_2);

#define VkglTestCase_034280_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034280_2 "ic_type.packed.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034280, VkglTestCase_034280_1, VkglTestCase_034280_2);

#define VkglTestCase_034281_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034281_2 "asic_type.packed.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034281, VkglTestCase_034281_1, VkglTestCase_034281_2);

#define VkglTestCase_034282_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034282_2 "sic_type.packed.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034282, VkglTestCase_034282_1, VkglTestCase_034282_2);

#define VkglTestCase_034283_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034283_2 "asic_type.packed.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034283, VkglTestCase_034283_1, VkglTestCase_034283_2);

#define VkglTestCase_034284_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034284_2 "sic_type.packed.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034284, VkglTestCase_034284_1, VkglTestCase_034284_2);

#define VkglTestCase_034285_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034285_2 "sic_type.packed.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034285, VkglTestCase_034285_1, VkglTestCase_034285_2);

#define VkglTestCase_034286_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034286_2 "ic_type.packed.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034286, VkglTestCase_034286_1, VkglTestCase_034286_2);

#define VkglTestCase_034287_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034287_2 "asic_type.packed.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034287, VkglTestCase_034287_1, VkglTestCase_034287_2);

#define VkglTestCase_034288_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034288_2 "sic_type.packed.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034288, VkglTestCase_034288_1, VkglTestCase_034288_2);

#define VkglTestCase_034289_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034289_2 "asic_type.packed.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034289, VkglTestCase_034289_1, VkglTestCase_034289_2);

#define VkglTestCase_034290_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034290_2 "sic_type.packed.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034290, VkglTestCase_034290_1, VkglTestCase_034290_2);

#define VkglTestCase_034291_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034291_2 "sic_type.packed.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034291, VkglTestCase_034291_1, VkglTestCase_034291_2);

#define VkglTestCase_034292_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034292_2 "ic_type.packed.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034292, VkglTestCase_034292_1, VkglTestCase_034292_2);

#define VkglTestCase_034293_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034293_2 "asic_type.packed.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034293, VkglTestCase_034293_1, VkglTestCase_034293_2);

#define VkglTestCase_034294_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034294_2 "sic_type.packed.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034294, VkglTestCase_034294_1, VkglTestCase_034294_2);

#define VkglTestCase_034295_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034295_2 "basic_type.packed.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034295, VkglTestCase_034295_1, VkglTestCase_034295_2);

#define VkglTestCase_034296_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034296_2 "asic_type.packed.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034296, VkglTestCase_034296_1, VkglTestCase_034296_2);

#define VkglTestCase_034297_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034297_2 "sic_type.packed.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034297, VkglTestCase_034297_1, VkglTestCase_034297_2);

#define VkglTestCase_034298_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034298_2 "ic_type.packed.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034298, VkglTestCase_034298_1, VkglTestCase_034298_2);

#define VkglTestCase_034299_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034299_2 "asic_type.packed.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034299, VkglTestCase_034299_1, VkglTestCase_034299_2);

#define VkglTestCase_034300_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034300_2 "sic_type.packed.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034300, VkglTestCase_034300_1, VkglTestCase_034300_2);

#define VkglTestCase_034301_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034301_2 "asic_type.packed.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034301, VkglTestCase_034301_1, VkglTestCase_034301_2);

#define VkglTestCase_034302_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034302_2 "sic_type.packed.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034302, VkglTestCase_034302_1, VkglTestCase_034302_2);

#define VkglTestCase_034303_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034303_2 "sic_type.packed.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034303, VkglTestCase_034303_1, VkglTestCase_034303_2);

#define VkglTestCase_034304_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034304_2 "ic_type.packed.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034304, VkglTestCase_034304_1, VkglTestCase_034304_2);

#define VkglTestCase_034305_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034305_2 "asic_type.packed.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034305, VkglTestCase_034305_1, VkglTestCase_034305_2);

#define VkglTestCase_034306_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034306_2 "sic_type.packed.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034306, VkglTestCase_034306_1, VkglTestCase_034306_2);

#define VkglTestCase_034307_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034307_2 "asic_type.packed.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034307, VkglTestCase_034307_1, VkglTestCase_034307_2);

#define VkglTestCase_034308_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034308_2 "sic_type.packed.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034308, VkglTestCase_034308_1, VkglTestCase_034308_2);

#define VkglTestCase_034309_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034309_2 "sic_type.packed.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034309, VkglTestCase_034309_1, VkglTestCase_034309_2);

#define VkglTestCase_034310_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034310_2 "ic_type.packed.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034310, VkglTestCase_034310_1, VkglTestCase_034310_2);

#define VkglTestCase_034311_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034311_2 "asic_type.packed.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034311, VkglTestCase_034311_1, VkglTestCase_034311_2);

#define VkglTestCase_034312_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034312_2 "sic_type.packed.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034312, VkglTestCase_034312_1, VkglTestCase_034312_2);

#define VkglTestCase_034313_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034313_2 "asic_type.packed.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034313, VkglTestCase_034313_1, VkglTestCase_034313_2);

#define VkglTestCase_034314_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034314_2 "sic_type.packed.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034314, VkglTestCase_034314_1, VkglTestCase_034314_2);

#define VkglTestCase_034315_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034315_2 "sic_type.packed.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034315, VkglTestCase_034315_1, VkglTestCase_034315_2);

#define VkglTestCase_034316_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034316_2 "ic_type.packed.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034316, VkglTestCase_034316_1, VkglTestCase_034316_2);

#define VkglTestCase_034317_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034317_2 "asic_type.packed.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034317, VkglTestCase_034317_1, VkglTestCase_034317_2);

#define VkglTestCase_034318_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034318_2 "sic_type.packed.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034318, VkglTestCase_034318_1, VkglTestCase_034318_2);

#define VkglTestCase_034319_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034319_2 "e_basic_type.packed.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034319, VkglTestCase_034319_1, VkglTestCase_034319_2);

#define VkglTestCase_034320_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034320_2 "_basic_type.packed.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034320, VkglTestCase_034320_1, VkglTestCase_034320_2);

#define VkglTestCase_034321_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034321_2 "e_basic_type.packed.bvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034321, VkglTestCase_034321_1, VkglTestCase_034321_2);

#define VkglTestCase_034322_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034322_2 "_basic_type.packed.bvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034322, VkglTestCase_034322_1, VkglTestCase_034322_2);

#define VkglTestCase_034323_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034323_2 "e_basic_type.packed.bvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034323, VkglTestCase_034323_1, VkglTestCase_034323_2);

#define VkglTestCase_034324_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034324_2 "_basic_type.packed.bvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034324, VkglTestCase_034324_1, VkglTestCase_034324_2);

#define VkglTestCase_034325_1 "dEQP-GLES3.functional.ubo.singl"
#define VkglTestCase_034325_2 "e_basic_type.packed.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034325, VkglTestCase_034325_1, VkglTestCase_034325_2);

#define VkglTestCase_034326_1 "dEQP-GLES3.functional.ubo.single"
#define VkglTestCase_034326_2 "_basic_type.packed.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034326, VkglTestCase_034326_1, VkglTestCase_034326_2);

#define VkglTestCase_034327_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034327_2 "basic_type.packed.lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034327, VkglTestCase_034327_1, VkglTestCase_034327_2);

#define VkglTestCase_034328_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034328_2 "asic_type.packed.lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034328, VkglTestCase_034328_1, VkglTestCase_034328_2);

#define VkglTestCase_034329_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034329_2 "sic_type.packed.mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034329, VkglTestCase_034329_1, VkglTestCase_034329_2);

#define VkglTestCase_034330_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034330_2 "ic_type.packed.mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034330, VkglTestCase_034330_1, VkglTestCase_034330_2);

#define VkglTestCase_034331_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034331_2 "asic_type.packed.highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034331, VkglTestCase_034331_1, VkglTestCase_034331_2);

#define VkglTestCase_034332_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034332_2 "sic_type.packed.highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034332, VkglTestCase_034332_1, VkglTestCase_034332_2);

#define VkglTestCase_034333_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034333_2 "_type.packed.row_major_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034333, VkglTestCase_034333_1, VkglTestCase_034333_2);

#define VkglTestCase_034334_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034334_2 "type.packed.row_major_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034334, VkglTestCase_034334_1, VkglTestCase_034334_2);

#define VkglTestCase_034335_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034335_2 "ype.packed.row_major_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034335, VkglTestCase_034335_1, VkglTestCase_034335_2);

#define VkglTestCase_034336_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034336_2 "pe.packed.row_major_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034336, VkglTestCase_034336_1, VkglTestCase_034336_2);

#define VkglTestCase_034337_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034337_2 "type.packed.row_major_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034337, VkglTestCase_034337_1, VkglTestCase_034337_2);

#define VkglTestCase_034338_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034338_2 "ype.packed.row_major_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034338, VkglTestCase_034338_1, VkglTestCase_034338_2);

#define VkglTestCase_034339_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034339_2 "ype.packed.column_major_lowp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034339, VkglTestCase_034339_1, VkglTestCase_034339_2);

#define VkglTestCase_034340_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034340_2 "pe.packed.column_major_lowp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034340, VkglTestCase_034340_1, VkglTestCase_034340_2);

#define VkglTestCase_034341_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034341_2 "pe.packed.column_major_mediump_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034341, VkglTestCase_034341_1, VkglTestCase_034341_2);

#define VkglTestCase_034342_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034342_2 "e.packed.column_major_mediump_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034342, VkglTestCase_034342_1, VkglTestCase_034342_2);

#define VkglTestCase_034343_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034343_2 "ype.packed.column_major_highp_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034343, VkglTestCase_034343_1, VkglTestCase_034343_2);

#define VkglTestCase_034344_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034344_2 "pe.packed.column_major_highp_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034344, VkglTestCase_034344_1, VkglTestCase_034344_2);

#define VkglTestCase_034345_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034345_2 "basic_type.packed.lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034345, VkglTestCase_034345_1, VkglTestCase_034345_2);

#define VkglTestCase_034346_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034346_2 "asic_type.packed.lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034346, VkglTestCase_034346_1, VkglTestCase_034346_2);

#define VkglTestCase_034347_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034347_2 "sic_type.packed.mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034347, VkglTestCase_034347_1, VkglTestCase_034347_2);

#define VkglTestCase_034348_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034348_2 "ic_type.packed.mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034348, VkglTestCase_034348_1, VkglTestCase_034348_2);

#define VkglTestCase_034349_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034349_2 "asic_type.packed.highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034349, VkglTestCase_034349_1, VkglTestCase_034349_2);

#define VkglTestCase_034350_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034350_2 "sic_type.packed.highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034350, VkglTestCase_034350_1, VkglTestCase_034350_2);

#define VkglTestCase_034351_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034351_2 "_type.packed.row_major_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034351, VkglTestCase_034351_1, VkglTestCase_034351_2);

#define VkglTestCase_034352_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034352_2 "type.packed.row_major_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034352, VkglTestCase_034352_1, VkglTestCase_034352_2);

#define VkglTestCase_034353_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034353_2 "ype.packed.row_major_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034353, VkglTestCase_034353_1, VkglTestCase_034353_2);

#define VkglTestCase_034354_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034354_2 "pe.packed.row_major_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034354, VkglTestCase_034354_1, VkglTestCase_034354_2);

#define VkglTestCase_034355_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034355_2 "type.packed.row_major_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034355, VkglTestCase_034355_1, VkglTestCase_034355_2);

#define VkglTestCase_034356_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034356_2 "ype.packed.row_major_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034356, VkglTestCase_034356_1, VkglTestCase_034356_2);

#define VkglTestCase_034357_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034357_2 "ype.packed.column_major_lowp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034357, VkglTestCase_034357_1, VkglTestCase_034357_2);

#define VkglTestCase_034358_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034358_2 "pe.packed.column_major_lowp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034358, VkglTestCase_034358_1, VkglTestCase_034358_2);

#define VkglTestCase_034359_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034359_2 "pe.packed.column_major_mediump_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034359, VkglTestCase_034359_1, VkglTestCase_034359_2);

#define VkglTestCase_034360_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034360_2 "e.packed.column_major_mediump_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034360, VkglTestCase_034360_1, VkglTestCase_034360_2);

#define VkglTestCase_034361_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034361_2 "ype.packed.column_major_highp_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034361, VkglTestCase_034361_1, VkglTestCase_034361_2);

#define VkglTestCase_034362_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034362_2 "pe.packed.column_major_highp_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034362, VkglTestCase_034362_1, VkglTestCase_034362_2);

#define VkglTestCase_034363_1 "dEQP-GLES3.functional.ubo.single_"
#define VkglTestCase_034363_2 "basic_type.packed.lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034363, VkglTestCase_034363_1, VkglTestCase_034363_2);

#define VkglTestCase_034364_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034364_2 "asic_type.packed.lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034364, VkglTestCase_034364_1, VkglTestCase_034364_2);

#define VkglTestCase_034365_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034365_2 "sic_type.packed.mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034365, VkglTestCase_034365_1, VkglTestCase_034365_2);

#define VkglTestCase_034366_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034366_2 "ic_type.packed.mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034366, VkglTestCase_034366_1, VkglTestCase_034366_2);

#define VkglTestCase_034367_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034367_2 "asic_type.packed.highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034367, VkglTestCase_034367_1, VkglTestCase_034367_2);

#define VkglTestCase_034368_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034368_2 "sic_type.packed.highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034368, VkglTestCase_034368_1, VkglTestCase_034368_2);

#define VkglTestCase_034369_1 "dEQP-GLES3.functional.ubo.single_basic"
#define VkglTestCase_034369_2 "_type.packed.row_major_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034369, VkglTestCase_034369_1, VkglTestCase_034369_2);

#define VkglTestCase_034370_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034370_2 "type.packed.row_major_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034370, VkglTestCase_034370_1, VkglTestCase_034370_2);

#define VkglTestCase_034371_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034371_2 "ype.packed.row_major_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034371, VkglTestCase_034371_1, VkglTestCase_034371_2);

#define VkglTestCase_034372_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034372_2 "pe.packed.row_major_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034372, VkglTestCase_034372_1, VkglTestCase_034372_2);

#define VkglTestCase_034373_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034373_2 "type.packed.row_major_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034373, VkglTestCase_034373_1, VkglTestCase_034373_2);

#define VkglTestCase_034374_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034374_2 "ype.packed.row_major_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034374, VkglTestCase_034374_1, VkglTestCase_034374_2);

#define VkglTestCase_034375_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034375_2 "ype.packed.column_major_lowp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034375, VkglTestCase_034375_1, VkglTestCase_034375_2);

#define VkglTestCase_034376_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034376_2 "pe.packed.column_major_lowp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034376, VkglTestCase_034376_1, VkglTestCase_034376_2);

#define VkglTestCase_034377_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034377_2 "pe.packed.column_major_mediump_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034377, VkglTestCase_034377_1, VkglTestCase_034377_2);

#define VkglTestCase_034378_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034378_2 "e.packed.column_major_mediump_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034378, VkglTestCase_034378_1, VkglTestCase_034378_2);

#define VkglTestCase_034379_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034379_2 "ype.packed.column_major_highp_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034379, VkglTestCase_034379_1, VkglTestCase_034379_2);

#define VkglTestCase_034380_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034380_2 "pe.packed.column_major_highp_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034380, VkglTestCase_034380_1, VkglTestCase_034380_2);

#define VkglTestCase_034381_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034381_2 "asic_type.packed.lowp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034381, VkglTestCase_034381_1, VkglTestCase_034381_2);

#define VkglTestCase_034382_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034382_2 "sic_type.packed.lowp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034382, VkglTestCase_034382_1, VkglTestCase_034382_2);

#define VkglTestCase_034383_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034383_2 "ic_type.packed.mediump_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034383, VkglTestCase_034383_1, VkglTestCase_034383_2);

#define VkglTestCase_034384_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034384_2 "c_type.packed.mediump_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034384, VkglTestCase_034384_1, VkglTestCase_034384_2);

#define VkglTestCase_034385_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034385_2 "sic_type.packed.highp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034385, VkglTestCase_034385_1, VkglTestCase_034385_2);

#define VkglTestCase_034386_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034386_2 "ic_type.packed.highp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034386, VkglTestCase_034386_1, VkglTestCase_034386_2);

#define VkglTestCase_034387_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034387_2 "type.packed.row_major_lowp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034387, VkglTestCase_034387_1, VkglTestCase_034387_2);

#define VkglTestCase_034388_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034388_2 "ype.packed.row_major_lowp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034388, VkglTestCase_034388_1, VkglTestCase_034388_2);

#define VkglTestCase_034389_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034389_2 "pe.packed.row_major_mediump_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034389, VkglTestCase_034389_1, VkglTestCase_034389_2);

#define VkglTestCase_034390_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034390_2 "e.packed.row_major_mediump_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034390, VkglTestCase_034390_1, VkglTestCase_034390_2);

#define VkglTestCase_034391_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034391_2 "ype.packed.row_major_highp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034391, VkglTestCase_034391_1, VkglTestCase_034391_2);

#define VkglTestCase_034392_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034392_2 "pe.packed.row_major_highp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034392, VkglTestCase_034392_1, VkglTestCase_034392_2);

#define VkglTestCase_034393_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034393_2 "pe.packed.column_major_lowp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034393, VkglTestCase_034393_1, VkglTestCase_034393_2);

#define VkglTestCase_034394_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034394_2 "e.packed.column_major_lowp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034394, VkglTestCase_034394_1, VkglTestCase_034394_2);

#define VkglTestCase_034395_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034395_2 "e.packed.column_major_mediump_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034395, VkglTestCase_034395_1, VkglTestCase_034395_2);

#define VkglTestCase_034396_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034396_2 ".packed.column_major_mediump_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034396, VkglTestCase_034396_1, VkglTestCase_034396_2);

#define VkglTestCase_034397_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034397_2 "pe.packed.column_major_highp_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034397, VkglTestCase_034397_1, VkglTestCase_034397_2);

#define VkglTestCase_034398_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034398_2 "e.packed.column_major_highp_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034398, VkglTestCase_034398_1, VkglTestCase_034398_2);

#define VkglTestCase_034399_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034399_2 "asic_type.packed.lowp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034399, VkglTestCase_034399_1, VkglTestCase_034399_2);

#define VkglTestCase_034400_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034400_2 "sic_type.packed.lowp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034400, VkglTestCase_034400_1, VkglTestCase_034400_2);

#define VkglTestCase_034401_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034401_2 "ic_type.packed.mediump_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034401, VkglTestCase_034401_1, VkglTestCase_034401_2);

#define VkglTestCase_034402_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034402_2 "c_type.packed.mediump_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034402, VkglTestCase_034402_1, VkglTestCase_034402_2);

#define VkglTestCase_034403_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034403_2 "sic_type.packed.highp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034403, VkglTestCase_034403_1, VkglTestCase_034403_2);

#define VkglTestCase_034404_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034404_2 "ic_type.packed.highp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034404, VkglTestCase_034404_1, VkglTestCase_034404_2);

#define VkglTestCase_034405_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034405_2 "type.packed.row_major_lowp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034405, VkglTestCase_034405_1, VkglTestCase_034405_2);

#define VkglTestCase_034406_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034406_2 "ype.packed.row_major_lowp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034406, VkglTestCase_034406_1, VkglTestCase_034406_2);

#define VkglTestCase_034407_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034407_2 "pe.packed.row_major_mediump_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034407, VkglTestCase_034407_1, VkglTestCase_034407_2);

#define VkglTestCase_034408_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034408_2 "e.packed.row_major_mediump_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034408, VkglTestCase_034408_1, VkglTestCase_034408_2);

#define VkglTestCase_034409_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034409_2 "ype.packed.row_major_highp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034409, VkglTestCase_034409_1, VkglTestCase_034409_2);

#define VkglTestCase_034410_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034410_2 "pe.packed.row_major_highp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034410, VkglTestCase_034410_1, VkglTestCase_034410_2);

#define VkglTestCase_034411_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034411_2 "pe.packed.column_major_lowp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034411, VkglTestCase_034411_1, VkglTestCase_034411_2);

#define VkglTestCase_034412_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034412_2 "e.packed.column_major_lowp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034412, VkglTestCase_034412_1, VkglTestCase_034412_2);

#define VkglTestCase_034413_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034413_2 "e.packed.column_major_mediump_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034413, VkglTestCase_034413_1, VkglTestCase_034413_2);

#define VkglTestCase_034414_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034414_2 ".packed.column_major_mediump_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034414, VkglTestCase_034414_1, VkglTestCase_034414_2);

#define VkglTestCase_034415_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034415_2 "pe.packed.column_major_highp_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034415, VkglTestCase_034415_1, VkglTestCase_034415_2);

#define VkglTestCase_034416_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034416_2 "e.packed.column_major_highp_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034416, VkglTestCase_034416_1, VkglTestCase_034416_2);

#define VkglTestCase_034417_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034417_2 "asic_type.packed.lowp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034417, VkglTestCase_034417_1, VkglTestCase_034417_2);

#define VkglTestCase_034418_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034418_2 "sic_type.packed.lowp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034418, VkglTestCase_034418_1, VkglTestCase_034418_2);

#define VkglTestCase_034419_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034419_2 "ic_type.packed.mediump_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034419, VkglTestCase_034419_1, VkglTestCase_034419_2);

#define VkglTestCase_034420_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034420_2 "c_type.packed.mediump_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034420, VkglTestCase_034420_1, VkglTestCase_034420_2);

#define VkglTestCase_034421_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034421_2 "sic_type.packed.highp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034421, VkglTestCase_034421_1, VkglTestCase_034421_2);

#define VkglTestCase_034422_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034422_2 "ic_type.packed.highp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034422, VkglTestCase_034422_1, VkglTestCase_034422_2);

#define VkglTestCase_034423_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034423_2 "type.packed.row_major_lowp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034423, VkglTestCase_034423_1, VkglTestCase_034423_2);

#define VkglTestCase_034424_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034424_2 "ype.packed.row_major_lowp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034424, VkglTestCase_034424_1, VkglTestCase_034424_2);

#define VkglTestCase_034425_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034425_2 "pe.packed.row_major_mediump_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034425, VkglTestCase_034425_1, VkglTestCase_034425_2);

#define VkglTestCase_034426_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034426_2 "e.packed.row_major_mediump_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034426, VkglTestCase_034426_1, VkglTestCase_034426_2);

#define VkglTestCase_034427_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034427_2 "ype.packed.row_major_highp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034427, VkglTestCase_034427_1, VkglTestCase_034427_2);

#define VkglTestCase_034428_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034428_2 "pe.packed.row_major_highp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034428, VkglTestCase_034428_1, VkglTestCase_034428_2);

#define VkglTestCase_034429_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034429_2 "pe.packed.column_major_lowp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034429, VkglTestCase_034429_1, VkglTestCase_034429_2);

#define VkglTestCase_034430_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034430_2 "e.packed.column_major_lowp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034430, VkglTestCase_034430_1, VkglTestCase_034430_2);

#define VkglTestCase_034431_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034431_2 "e.packed.column_major_mediump_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034431, VkglTestCase_034431_1, VkglTestCase_034431_2);

#define VkglTestCase_034432_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034432_2 ".packed.column_major_mediump_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034432, VkglTestCase_034432_1, VkglTestCase_034432_2);

#define VkglTestCase_034433_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034433_2 "pe.packed.column_major_highp_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034433, VkglTestCase_034433_1, VkglTestCase_034433_2);

#define VkglTestCase_034434_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034434_2 "e.packed.column_major_highp_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034434, VkglTestCase_034434_1, VkglTestCase_034434_2);

#define VkglTestCase_034435_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034435_2 "asic_type.packed.lowp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034435, VkglTestCase_034435_1, VkglTestCase_034435_2);

#define VkglTestCase_034436_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034436_2 "sic_type.packed.lowp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034436, VkglTestCase_034436_1, VkglTestCase_034436_2);

#define VkglTestCase_034437_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034437_2 "ic_type.packed.mediump_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034437, VkglTestCase_034437_1, VkglTestCase_034437_2);

#define VkglTestCase_034438_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034438_2 "c_type.packed.mediump_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034438, VkglTestCase_034438_1, VkglTestCase_034438_2);

#define VkglTestCase_034439_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034439_2 "sic_type.packed.highp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034439, VkglTestCase_034439_1, VkglTestCase_034439_2);

#define VkglTestCase_034440_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034440_2 "ic_type.packed.highp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034440, VkglTestCase_034440_1, VkglTestCase_034440_2);

#define VkglTestCase_034441_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034441_2 "type.packed.row_major_lowp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034441, VkglTestCase_034441_1, VkglTestCase_034441_2);

#define VkglTestCase_034442_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034442_2 "ype.packed.row_major_lowp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034442, VkglTestCase_034442_1, VkglTestCase_034442_2);

#define VkglTestCase_034443_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034443_2 "pe.packed.row_major_mediump_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034443, VkglTestCase_034443_1, VkglTestCase_034443_2);

#define VkglTestCase_034444_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034444_2 "e.packed.row_major_mediump_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034444, VkglTestCase_034444_1, VkglTestCase_034444_2);

#define VkglTestCase_034445_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034445_2 "ype.packed.row_major_highp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034445, VkglTestCase_034445_1, VkglTestCase_034445_2);

#define VkglTestCase_034446_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034446_2 "pe.packed.row_major_highp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034446, VkglTestCase_034446_1, VkglTestCase_034446_2);

#define VkglTestCase_034447_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034447_2 "pe.packed.column_major_lowp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034447, VkglTestCase_034447_1, VkglTestCase_034447_2);

#define VkglTestCase_034448_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034448_2 "e.packed.column_major_lowp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034448, VkglTestCase_034448_1, VkglTestCase_034448_2);

#define VkglTestCase_034449_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034449_2 "e.packed.column_major_mediump_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034449, VkglTestCase_034449_1, VkglTestCase_034449_2);

#define VkglTestCase_034450_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034450_2 ".packed.column_major_mediump_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034450, VkglTestCase_034450_1, VkglTestCase_034450_2);

#define VkglTestCase_034451_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034451_2 "pe.packed.column_major_highp_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034451, VkglTestCase_034451_1, VkglTestCase_034451_2);

#define VkglTestCase_034452_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034452_2 "e.packed.column_major_highp_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034452, VkglTestCase_034452_1, VkglTestCase_034452_2);

#define VkglTestCase_034453_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034453_2 "asic_type.packed.lowp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034453, VkglTestCase_034453_1, VkglTestCase_034453_2);

#define VkglTestCase_034454_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034454_2 "sic_type.packed.lowp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034454, VkglTestCase_034454_1, VkglTestCase_034454_2);

#define VkglTestCase_034455_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034455_2 "ic_type.packed.mediump_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034455, VkglTestCase_034455_1, VkglTestCase_034455_2);

#define VkglTestCase_034456_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034456_2 "c_type.packed.mediump_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034456, VkglTestCase_034456_1, VkglTestCase_034456_2);

#define VkglTestCase_034457_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034457_2 "sic_type.packed.highp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034457, VkglTestCase_034457_1, VkglTestCase_034457_2);

#define VkglTestCase_034458_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034458_2 "ic_type.packed.highp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034458, VkglTestCase_034458_1, VkglTestCase_034458_2);

#define VkglTestCase_034459_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034459_2 "type.packed.row_major_lowp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034459, VkglTestCase_034459_1, VkglTestCase_034459_2);

#define VkglTestCase_034460_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034460_2 "ype.packed.row_major_lowp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034460, VkglTestCase_034460_1, VkglTestCase_034460_2);

#define VkglTestCase_034461_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034461_2 "pe.packed.row_major_mediump_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034461, VkglTestCase_034461_1, VkglTestCase_034461_2);

#define VkglTestCase_034462_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034462_2 "e.packed.row_major_mediump_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034462, VkglTestCase_034462_1, VkglTestCase_034462_2);

#define VkglTestCase_034463_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034463_2 "ype.packed.row_major_highp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034463, VkglTestCase_034463_1, VkglTestCase_034463_2);

#define VkglTestCase_034464_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034464_2 "pe.packed.row_major_highp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034464, VkglTestCase_034464_1, VkglTestCase_034464_2);

#define VkglTestCase_034465_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034465_2 "pe.packed.column_major_lowp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034465, VkglTestCase_034465_1, VkglTestCase_034465_2);

#define VkglTestCase_034466_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034466_2 "e.packed.column_major_lowp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034466, VkglTestCase_034466_1, VkglTestCase_034466_2);

#define VkglTestCase_034467_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034467_2 "e.packed.column_major_mediump_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034467, VkglTestCase_034467_1, VkglTestCase_034467_2);

#define VkglTestCase_034468_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034468_2 ".packed.column_major_mediump_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034468, VkglTestCase_034468_1, VkglTestCase_034468_2);

#define VkglTestCase_034469_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034469_2 "pe.packed.column_major_highp_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034469, VkglTestCase_034469_1, VkglTestCase_034469_2);

#define VkglTestCase_034470_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034470_2 "e.packed.column_major_highp_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034470, VkglTestCase_034470_1, VkglTestCase_034470_2);

#define VkglTestCase_034471_1 "dEQP-GLES3.functional.ubo.single_b"
#define VkglTestCase_034471_2 "asic_type.packed.lowp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034471, VkglTestCase_034471_1, VkglTestCase_034471_2);

#define VkglTestCase_034472_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034472_2 "sic_type.packed.lowp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034472, VkglTestCase_034472_1, VkglTestCase_034472_2);

#define VkglTestCase_034473_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034473_2 "ic_type.packed.mediump_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034473, VkglTestCase_034473_1, VkglTestCase_034473_2);

#define VkglTestCase_034474_1 "dEQP-GLES3.functional.ubo.single_basi"
#define VkglTestCase_034474_2 "c_type.packed.mediump_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034474, VkglTestCase_034474_1, VkglTestCase_034474_2);

#define VkglTestCase_034475_1 "dEQP-GLES3.functional.ubo.single_ba"
#define VkglTestCase_034475_2 "sic_type.packed.highp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034475, VkglTestCase_034475_1, VkglTestCase_034475_2);

#define VkglTestCase_034476_1 "dEQP-GLES3.functional.ubo.single_bas"
#define VkglTestCase_034476_2 "ic_type.packed.highp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034476, VkglTestCase_034476_1, VkglTestCase_034476_2);

#define VkglTestCase_034477_1 "dEQP-GLES3.functional.ubo.single_basic_"
#define VkglTestCase_034477_2 "type.packed.row_major_lowp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034477, VkglTestCase_034477_1, VkglTestCase_034477_2);

#define VkglTestCase_034478_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034478_2 "ype.packed.row_major_lowp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034478, VkglTestCase_034478_1, VkglTestCase_034478_2);

#define VkglTestCase_034479_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034479_2 "pe.packed.row_major_mediump_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034479, VkglTestCase_034479_1, VkglTestCase_034479_2);

#define VkglTestCase_034480_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034480_2 "e.packed.row_major_mediump_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034480, VkglTestCase_034480_1, VkglTestCase_034480_2);

#define VkglTestCase_034481_1 "dEQP-GLES3.functional.ubo.single_basic_t"
#define VkglTestCase_034481_2 "ype.packed.row_major_highp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034481, VkglTestCase_034481_1, VkglTestCase_034481_2);

#define VkglTestCase_034482_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034482_2 "pe.packed.row_major_highp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034482, VkglTestCase_034482_1, VkglTestCase_034482_2);

#define VkglTestCase_034483_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034483_2 "pe.packed.column_major_lowp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034483, VkglTestCase_034483_1, VkglTestCase_034483_2);

#define VkglTestCase_034484_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034484_2 "e.packed.column_major_lowp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034484, VkglTestCase_034484_1, VkglTestCase_034484_2);

#define VkglTestCase_034485_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034485_2 "e.packed.column_major_mediump_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034485, VkglTestCase_034485_1, VkglTestCase_034485_2);

#define VkglTestCase_034486_1 "dEQP-GLES3.functional.ubo.single_basic_type"
#define VkglTestCase_034486_2 ".packed.column_major_mediump_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034486, VkglTestCase_034486_1, VkglTestCase_034486_2);

#define VkglTestCase_034487_1 "dEQP-GLES3.functional.ubo.single_basic_ty"
#define VkglTestCase_034487_2 "pe.packed.column_major_highp_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034487, VkglTestCase_034487_1, VkglTestCase_034487_2);

#define VkglTestCase_034488_1 "dEQP-GLES3.functional.ubo.single_basic_typ"
#define VkglTestCase_034488_2 "e.packed.column_major_highp_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30035TestSuite, TestCase_034488, VkglTestCase_034488_1, VkglTestCase_034488_2);
