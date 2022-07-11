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
#include "../ActsDeqpgles30011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010232_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_010232_2 "perator.bitwise_or_assign_effect.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010232, VkglTestCase_010232_1, VkglTestCase_010232_2);

#define VkglTestCase_010233_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010233_2 "erator.bitwise_or_assign_effect.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010233, VkglTestCase_010233_1, VkglTestCase_010233_2);

#define VkglTestCase_010234_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010234_2 "rator.bitwise_or_assign_effect.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010234, VkglTestCase_010234_1, VkglTestCase_010234_2);

#define VkglTestCase_010235_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010235_2 "ator.bitwise_or_assign_effect.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010235, VkglTestCase_010235_1, VkglTestCase_010235_2);

#define VkglTestCase_010236_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010236_2 "erator.bitwise_or_assign_effect.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010236, VkglTestCase_010236_1, VkglTestCase_010236_2);

#define VkglTestCase_010237_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010237_2 "rator.bitwise_or_assign_effect.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010237, VkglTestCase_010237_1, VkglTestCase_010237_2);

#define VkglTestCase_010238_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010238_2 "ator.bitwise_or_assign_effect.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010238, VkglTestCase_010238_1, VkglTestCase_010238_2);

#define VkglTestCase_010239_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010239_2 "tor.bitwise_or_assign_effect.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010239, VkglTestCase_010239_1, VkglTestCase_010239_2);

#define VkglTestCase_010240_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010240_2 "erator.bitwise_or_assign_effect.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010240, VkglTestCase_010240_1, VkglTestCase_010240_2);

#define VkglTestCase_010241_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010241_2 "rator.bitwise_or_assign_effect.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010241, VkglTestCase_010241_1, VkglTestCase_010241_2);

#define VkglTestCase_010242_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010242_2 "ator.bitwise_or_assign_effect.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010242, VkglTestCase_010242_1, VkglTestCase_010242_2);

#define VkglTestCase_010243_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010243_2 "tor.bitwise_or_assign_effect.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010243, VkglTestCase_010243_1, VkglTestCase_010243_2);

#define VkglTestCase_010244_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010244_2 "erator.bitwise_or_assign_effect.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010244, VkglTestCase_010244_1, VkglTestCase_010244_2);

#define VkglTestCase_010245_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010245_2 "rator.bitwise_or_assign_effect.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010245, VkglTestCase_010245_1, VkglTestCase_010245_2);

#define VkglTestCase_010246_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010246_2 "ator.bitwise_or_assign_effect.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010246, VkglTestCase_010246_1, VkglTestCase_010246_2);

#define VkglTestCase_010247_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010247_2 "tor.bitwise_or_assign_effect.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010247, VkglTestCase_010247_1, VkglTestCase_010247_2);

#define VkglTestCase_010248_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010248_2 "erator.bitwise_or_assign_effect.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010248, VkglTestCase_010248_1, VkglTestCase_010248_2);

#define VkglTestCase_010249_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010249_2 "rator.bitwise_or_assign_effect.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010249, VkglTestCase_010249_1, VkglTestCase_010249_2);

#define VkglTestCase_010250_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010250_2 "rator.bitwise_or_assign_effect.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010250, VkglTestCase_010250_1, VkglTestCase_010250_2);

#define VkglTestCase_010251_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010251_2 "ator.bitwise_or_assign_effect.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010251, VkglTestCase_010251_1, VkglTestCase_010251_2);

#define VkglTestCase_010252_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010252_2 "rator.bitwise_or_assign_effect.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010252, VkglTestCase_010252_1, VkglTestCase_010252_2);

#define VkglTestCase_010253_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010253_2 "ator.bitwise_or_assign_effect.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010253, VkglTestCase_010253_1, VkglTestCase_010253_2);

#define VkglTestCase_010254_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010254_2 "rator.bitwise_or_assign_effect.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010254, VkglTestCase_010254_1, VkglTestCase_010254_2);

#define VkglTestCase_010255_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010255_2 "ator.bitwise_or_assign_effect.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010255, VkglTestCase_010255_1, VkglTestCase_010255_2);

#define VkglTestCase_010256_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010256_2 "erator.bitwise_or_assign_effect.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010256, VkglTestCase_010256_1, VkglTestCase_010256_2);

#define VkglTestCase_010257_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010257_2 "rator.bitwise_or_assign_effect.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010257, VkglTestCase_010257_1, VkglTestCase_010257_2);

#define VkglTestCase_010258_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010258_2 "rator.bitwise_or_assign_effect.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010258, VkglTestCase_010258_1, VkglTestCase_010258_2);

#define VkglTestCase_010259_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010259_2 "ator.bitwise_or_assign_effect.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010259, VkglTestCase_010259_1, VkglTestCase_010259_2);

#define VkglTestCase_010260_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010260_2 "erator.bitwise_or_assign_effect.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010260, VkglTestCase_010260_1, VkglTestCase_010260_2);

#define VkglTestCase_010261_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010261_2 "rator.bitwise_or_assign_effect.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010261, VkglTestCase_010261_1, VkglTestCase_010261_2);

#define VkglTestCase_010262_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010262_2 "ator.bitwise_or_assign_effect.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010262, VkglTestCase_010262_1, VkglTestCase_010262_2);

#define VkglTestCase_010263_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010263_2 "tor.bitwise_or_assign_effect.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010263, VkglTestCase_010263_1, VkglTestCase_010263_2);

#define VkglTestCase_010264_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010264_2 "erator.bitwise_or_assign_effect.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010264, VkglTestCase_010264_1, VkglTestCase_010264_2);

#define VkglTestCase_010265_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010265_2 "rator.bitwise_or_assign_effect.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010265, VkglTestCase_010265_1, VkglTestCase_010265_2);

#define VkglTestCase_010266_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010266_2 "ator.bitwise_or_assign_effect.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010266, VkglTestCase_010266_1, VkglTestCase_010266_2);

#define VkglTestCase_010267_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010267_2 "tor.bitwise_or_assign_effect.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010267, VkglTestCase_010267_1, VkglTestCase_010267_2);

#define VkglTestCase_010268_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010268_2 "erator.bitwise_or_assign_effect.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010268, VkglTestCase_010268_1, VkglTestCase_010268_2);

#define VkglTestCase_010269_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010269_2 "rator.bitwise_or_assign_effect.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010269, VkglTestCase_010269_1, VkglTestCase_010269_2);

#define VkglTestCase_010270_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010270_2 "ator.bitwise_or_assign_effect.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010270, VkglTestCase_010270_1, VkglTestCase_010270_2);

#define VkglTestCase_010271_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010271_2 "tor.bitwise_or_assign_effect.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010271, VkglTestCase_010271_1, VkglTestCase_010271_2);

#define VkglTestCase_010272_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_010272_2 "erator.bitwise_or_assign_effect.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010272, VkglTestCase_010272_1, VkglTestCase_010272_2);

#define VkglTestCase_010273_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010273_2 "rator.bitwise_or_assign_effect.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010273, VkglTestCase_010273_1, VkglTestCase_010273_2);

#define VkglTestCase_010274_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010274_2 "rator.bitwise_or_assign_effect.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010274, VkglTestCase_010274_1, VkglTestCase_010274_2);

#define VkglTestCase_010275_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010275_2 "ator.bitwise_or_assign_effect.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010275, VkglTestCase_010275_1, VkglTestCase_010275_2);

#define VkglTestCase_010276_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010276_2 "rator.bitwise_or_assign_effect.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010276, VkglTestCase_010276_1, VkglTestCase_010276_2);

#define VkglTestCase_010277_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010277_2 "ator.bitwise_or_assign_effect.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010277, VkglTestCase_010277_1, VkglTestCase_010277_2);

#define VkglTestCase_010278_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_010278_2 "rator.bitwise_or_assign_effect.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010278, VkglTestCase_010278_1, VkglTestCase_010278_2);

#define VkglTestCase_010279_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010279_2 "ator.bitwise_or_assign_effect.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010279, VkglTestCase_010279_1, VkglTestCase_010279_2);

#define VkglTestCase_010280_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010280_2 "ator.bitwise_or_assign_effect.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010280, VkglTestCase_010280_1, VkglTestCase_010280_2);

#define VkglTestCase_010281_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010281_2 "tor.bitwise_or_assign_effect.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010281, VkglTestCase_010281_1, VkglTestCase_010281_2);

#define VkglTestCase_010282_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010282_2 "or.bitwise_or_assign_effect.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010282, VkglTestCase_010282_1, VkglTestCase_010282_2);

#define VkglTestCase_010283_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010283_2 "r.bitwise_or_assign_effect.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010283, VkglTestCase_010283_1, VkglTestCase_010283_2);

#define VkglTestCase_010284_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010284_2 "ator.bitwise_or_assign_effect.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010284, VkglTestCase_010284_1, VkglTestCase_010284_2);

#define VkglTestCase_010285_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010285_2 "tor.bitwise_or_assign_effect.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010285, VkglTestCase_010285_1, VkglTestCase_010285_2);

#define VkglTestCase_010286_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010286_2 "or.bitwise_or_assign_effect.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010286, VkglTestCase_010286_1, VkglTestCase_010286_2);

#define VkglTestCase_010287_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010287_2 "r.bitwise_or_assign_effect.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010287, VkglTestCase_010287_1, VkglTestCase_010287_2);

#define VkglTestCase_010288_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_010288_2 "ator.bitwise_or_assign_effect.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010288, VkglTestCase_010288_1, VkglTestCase_010288_2);

#define VkglTestCase_010289_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010289_2 "tor.bitwise_or_assign_effect.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010289, VkglTestCase_010289_1, VkglTestCase_010289_2);

#define VkglTestCase_010290_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010290_2 "or.bitwise_or_assign_effect.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010290, VkglTestCase_010290_1, VkglTestCase_010290_2);

#define VkglTestCase_010291_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010291_2 "r.bitwise_or_assign_effect.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010291, VkglTestCase_010291_1, VkglTestCase_010291_2);

#define VkglTestCase_010292_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010292_2 "tor.bitwise_or_assign_effect.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010292, VkglTestCase_010292_1, VkglTestCase_010292_2);

#define VkglTestCase_010293_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010293_2 "or.bitwise_or_assign_effect.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010293, VkglTestCase_010293_1, VkglTestCase_010293_2);

#define VkglTestCase_010294_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010294_2 "tor.bitwise_or_assign_effect.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010294, VkglTestCase_010294_1, VkglTestCase_010294_2);

#define VkglTestCase_010295_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010295_2 "or.bitwise_or_assign_effect.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010295, VkglTestCase_010295_1, VkglTestCase_010295_2);

#define VkglTestCase_010296_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010296_2 "tor.bitwise_or_assign_effect.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010296, VkglTestCase_010296_1, VkglTestCase_010296_2);

#define VkglTestCase_010297_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010297_2 "or.bitwise_or_assign_effect.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010297, VkglTestCase_010297_1, VkglTestCase_010297_2);

#define VkglTestCase_010298_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010298_2 "tor.bitwise_or_assign_effect.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010298, VkglTestCase_010298_1, VkglTestCase_010298_2);

#define VkglTestCase_010299_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010299_2 "or.bitwise_or_assign_effect.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010299, VkglTestCase_010299_1, VkglTestCase_010299_2);

#define VkglTestCase_010300_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010300_2 "or.bitwise_or_assign_effect.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010300, VkglTestCase_010300_1, VkglTestCase_010300_2);

#define VkglTestCase_010301_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010301_2 "r.bitwise_or_assign_effect.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010301, VkglTestCase_010301_1, VkglTestCase_010301_2);

#define VkglTestCase_010302_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010302_2 "tor.bitwise_or_assign_effect.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010302, VkglTestCase_010302_1, VkglTestCase_010302_2);

#define VkglTestCase_010303_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010303_2 "or.bitwise_or_assign_effect.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010303, VkglTestCase_010303_1, VkglTestCase_010303_2);

#define VkglTestCase_010304_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010304_2 "or.bitwise_or_assign_effect.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010304, VkglTestCase_010304_1, VkglTestCase_010304_2);

#define VkglTestCase_010305_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010305_2 "r.bitwise_or_assign_effect.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010305, VkglTestCase_010305_1, VkglTestCase_010305_2);

#define VkglTestCase_010306_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010306_2 "tor.bitwise_or_assign_effect.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010306, VkglTestCase_010306_1, VkglTestCase_010306_2);

#define VkglTestCase_010307_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010307_2 "or.bitwise_or_assign_effect.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010307, VkglTestCase_010307_1, VkglTestCase_010307_2);

#define VkglTestCase_010308_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010308_2 "or.bitwise_or_assign_effect.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010308, VkglTestCase_010308_1, VkglTestCase_010308_2);

#define VkglTestCase_010309_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_010309_2 "r.bitwise_or_assign_effect.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010309, VkglTestCase_010309_1, VkglTestCase_010309_2);

#define VkglTestCase_010310_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010310_2 "tor.bitwise_or_assign_effect.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010310, VkglTestCase_010310_1, VkglTestCase_010310_2);

#define VkglTestCase_010311_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010311_2 "or.bitwise_or_assign_effect.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010311, VkglTestCase_010311_1, VkglTestCase_010311_2);

#define VkglTestCase_010312_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010312_2 "tor.bitwise_or_assign_effect.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010312, VkglTestCase_010312_1, VkglTestCase_010312_2);

#define VkglTestCase_010313_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010313_2 "or.bitwise_or_assign_effect.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010313, VkglTestCase_010313_1, VkglTestCase_010313_2);

#define VkglTestCase_010314_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_010314_2 "tor.bitwise_or_assign_effect.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010314, VkglTestCase_010314_1, VkglTestCase_010314_2);

#define VkglTestCase_010315_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_010315_2 "or.bitwise_or_assign_effect.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30011TestSuite, TestCase_010315, VkglTestCase_010315_1, VkglTestCase_010315_2);
