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
#include "../ActsDeqpgles30010TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_009392_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009392_2 "ry_operator.right_shift.lowp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009392, VkglTestCase_009392_1, VkglTestCase_009392_2);

#define VkglTestCase_009393_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009393_2 "y_operator.right_shift.lowp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009393, VkglTestCase_009393_1, VkglTestCase_009393_2);

#define VkglTestCase_009394_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009394_2 "_operator.right_shift.mediump_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009394, VkglTestCase_009394_1, VkglTestCase_009394_2);

#define VkglTestCase_009395_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009395_2 "operator.right_shift.mediump_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009395, VkglTestCase_009395_1, VkglTestCase_009395_2);

#define VkglTestCase_009396_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009396_2 "_operator.right_shift.lowp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009396, VkglTestCase_009396_1, VkglTestCase_009396_2);

#define VkglTestCase_009397_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009397_2 "operator.right_shift.lowp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009397, VkglTestCase_009397_1, VkglTestCase_009397_2);

#define VkglTestCase_009398_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009398_2 "operator.right_shift.mediump_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009398, VkglTestCase_009398_1, VkglTestCase_009398_2);

#define VkglTestCase_009399_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009399_2 "perator.right_shift.mediump_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009399, VkglTestCase_009399_1, VkglTestCase_009399_2);

#define VkglTestCase_009400_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009400_2 "_operator.right_shift.lowp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009400, VkglTestCase_009400_1, VkglTestCase_009400_2);

#define VkglTestCase_009401_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009401_2 "operator.right_shift.lowp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009401, VkglTestCase_009401_1, VkglTestCase_009401_2);

#define VkglTestCase_009402_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009402_2 "operator.right_shift.mediump_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009402, VkglTestCase_009402_1, VkglTestCase_009402_2);

#define VkglTestCase_009403_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009403_2 "perator.right_shift.mediump_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009403, VkglTestCase_009403_1, VkglTestCase_009403_2);

#define VkglTestCase_009404_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009404_2 "_operator.right_shift.lowp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009404, VkglTestCase_009404_1, VkglTestCase_009404_2);

#define VkglTestCase_009405_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009405_2 "operator.right_shift.lowp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009405, VkglTestCase_009405_1, VkglTestCase_009405_2);

#define VkglTestCase_009406_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009406_2 "operator.right_shift.mediump_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009406, VkglTestCase_009406_1, VkglTestCase_009406_2);

#define VkglTestCase_009407_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009407_2 "perator.right_shift.mediump_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009407, VkglTestCase_009407_1, VkglTestCase_009407_2);

#define VkglTestCase_009408_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009408_2 "y_operator.right_shift.highp_int_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009408, VkglTestCase_009408_1, VkglTestCase_009408_2);

#define VkglTestCase_009409_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009409_2 "_operator.right_shift.highp_int_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009409, VkglTestCase_009409_1, VkglTestCase_009409_2);

#define VkglTestCase_009410_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009410_2 "_operator.right_shift.highp_ivec2_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009410, VkglTestCase_009410_1, VkglTestCase_009410_2);

#define VkglTestCase_009411_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009411_2 "operator.right_shift.highp_ivec2_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009411, VkglTestCase_009411_1, VkglTestCase_009411_2);

#define VkglTestCase_009412_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009412_2 "_operator.right_shift.highp_ivec3_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009412, VkglTestCase_009412_1, VkglTestCase_009412_2);

#define VkglTestCase_009413_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009413_2 "operator.right_shift.highp_ivec3_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009413, VkglTestCase_009413_1, VkglTestCase_009413_2);

#define VkglTestCase_009414_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009414_2 "_operator.right_shift.highp_ivec4_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009414, VkglTestCase_009414_1, VkglTestCase_009414_2);

#define VkglTestCase_009415_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009415_2 "operator.right_shift.highp_ivec4_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009415, VkglTestCase_009415_1, VkglTestCase_009415_2);

#define VkglTestCase_009416_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009416_2 "nary_operator.right_shift.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009416, VkglTestCase_009416_1, VkglTestCase_009416_2);

#define VkglTestCase_009417_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009417_2 "ary_operator.right_shift.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009417, VkglTestCase_009417_1, VkglTestCase_009417_2);

#define VkglTestCase_009418_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009418_2 "ry_operator.right_shift.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009418, VkglTestCase_009418_1, VkglTestCase_009418_2);

#define VkglTestCase_009419_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009419_2 "y_operator.right_shift.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009419, VkglTestCase_009419_1, VkglTestCase_009419_2);

#define VkglTestCase_009420_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009420_2 "ary_operator.right_shift.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009420, VkglTestCase_009420_1, VkglTestCase_009420_2);

#define VkglTestCase_009421_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009421_2 "ry_operator.right_shift.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009421, VkglTestCase_009421_1, VkglTestCase_009421_2);

#define VkglTestCase_009422_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009422_2 "ry_operator.right_shift.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009422, VkglTestCase_009422_1, VkglTestCase_009422_2);

#define VkglTestCase_009423_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009423_2 "y_operator.right_shift.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009423, VkglTestCase_009423_1, VkglTestCase_009423_2);

#define VkglTestCase_009424_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009424_2 "ary_operator.right_shift.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009424, VkglTestCase_009424_1, VkglTestCase_009424_2);

#define VkglTestCase_009425_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009425_2 "ry_operator.right_shift.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009425, VkglTestCase_009425_1, VkglTestCase_009425_2);

#define VkglTestCase_009426_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009426_2 "ry_operator.right_shift.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009426, VkglTestCase_009426_1, VkglTestCase_009426_2);

#define VkglTestCase_009427_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009427_2 "y_operator.right_shift.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009427, VkglTestCase_009427_1, VkglTestCase_009427_2);

#define VkglTestCase_009428_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009428_2 "ary_operator.right_shift.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009428, VkglTestCase_009428_1, VkglTestCase_009428_2);

#define VkglTestCase_009429_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009429_2 "ry_operator.right_shift.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009429, VkglTestCase_009429_1, VkglTestCase_009429_2);

#define VkglTestCase_009430_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009430_2 "ry_operator.right_shift.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009430, VkglTestCase_009430_1, VkglTestCase_009430_2);

#define VkglTestCase_009431_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009431_2 "y_operator.right_shift.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009431, VkglTestCase_009431_1, VkglTestCase_009431_2);

#define VkglTestCase_009432_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009432_2 "ary_operator.right_shift.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009432, VkglTestCase_009432_1, VkglTestCase_009432_2);

#define VkglTestCase_009433_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009433_2 "ry_operator.right_shift.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009433, VkglTestCase_009433_1, VkglTestCase_009433_2);

#define VkglTestCase_009434_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009434_2 "ary_operator.right_shift.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009434, VkglTestCase_009434_1, VkglTestCase_009434_2);

#define VkglTestCase_009435_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009435_2 "ry_operator.right_shift.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009435, VkglTestCase_009435_1, VkglTestCase_009435_2);

#define VkglTestCase_009436_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009436_2 "ary_operator.right_shift.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009436, VkglTestCase_009436_1, VkglTestCase_009436_2);

#define VkglTestCase_009437_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009437_2 "ry_operator.right_shift.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009437, VkglTestCase_009437_1, VkglTestCase_009437_2);

#define VkglTestCase_009438_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009438_2 "ary_operator.right_shift.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009438, VkglTestCase_009438_1, VkglTestCase_009438_2);

#define VkglTestCase_009439_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009439_2 "ry_operator.right_shift.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009439, VkglTestCase_009439_1, VkglTestCase_009439_2);

#define VkglTestCase_009440_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009440_2 "y_operator.right_shift.lowp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009440, VkglTestCase_009440_1, VkglTestCase_009440_2);

#define VkglTestCase_009441_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009441_2 "_operator.right_shift.lowp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009441, VkglTestCase_009441_1, VkglTestCase_009441_2);

#define VkglTestCase_009442_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009442_2 "operator.right_shift.mediump_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009442, VkglTestCase_009442_1, VkglTestCase_009442_2);

#define VkglTestCase_009443_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009443_2 "perator.right_shift.mediump_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009443, VkglTestCase_009443_1, VkglTestCase_009443_2);

#define VkglTestCase_009444_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009444_2 "y_operator.right_shift.lowp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009444, VkglTestCase_009444_1, VkglTestCase_009444_2);

#define VkglTestCase_009445_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009445_2 "_operator.right_shift.lowp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009445, VkglTestCase_009445_1, VkglTestCase_009445_2);

#define VkglTestCase_009446_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009446_2 "operator.right_shift.mediump_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009446, VkglTestCase_009446_1, VkglTestCase_009446_2);

#define VkglTestCase_009447_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009447_2 "perator.right_shift.mediump_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009447, VkglTestCase_009447_1, VkglTestCase_009447_2);

#define VkglTestCase_009448_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009448_2 "y_operator.right_shift.lowp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009448, VkglTestCase_009448_1, VkglTestCase_009448_2);

#define VkglTestCase_009449_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009449_2 "_operator.right_shift.lowp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009449, VkglTestCase_009449_1, VkglTestCase_009449_2);

#define VkglTestCase_009450_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009450_2 "operator.right_shift.mediump_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009450, VkglTestCase_009450_1, VkglTestCase_009450_2);

#define VkglTestCase_009451_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009451_2 "perator.right_shift.mediump_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009451, VkglTestCase_009451_1, VkglTestCase_009451_2);

#define VkglTestCase_009452_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009452_2 "_operator.right_shift.highp_ivec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009452, VkglTestCase_009452_1, VkglTestCase_009452_2);

#define VkglTestCase_009453_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009453_2 "operator.right_shift.highp_ivec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009453, VkglTestCase_009453_1, VkglTestCase_009453_2);

#define VkglTestCase_009454_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009454_2 "_operator.right_shift.highp_ivec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009454, VkglTestCase_009454_1, VkglTestCase_009454_2);

#define VkglTestCase_009455_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009455_2 "operator.right_shift.highp_ivec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009455, VkglTestCase_009455_1, VkglTestCase_009455_2);

#define VkglTestCase_009456_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009456_2 "_operator.right_shift.highp_ivec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009456, VkglTestCase_009456_1, VkglTestCase_009456_2);

#define VkglTestCase_009457_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009457_2 "operator.right_shift.highp_ivec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009457, VkglTestCase_009457_1, VkglTestCase_009457_2);

#define VkglTestCase_009458_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009458_2 "y_operator.right_shift.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009458, VkglTestCase_009458_1, VkglTestCase_009458_2);

#define VkglTestCase_009459_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009459_2 "_operator.right_shift.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009459, VkglTestCase_009459_1, VkglTestCase_009459_2);

#define VkglTestCase_009460_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009460_2 "operator.right_shift.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009460, VkglTestCase_009460_1, VkglTestCase_009460_2);

#define VkglTestCase_009461_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009461_2 "perator.right_shift.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009461, VkglTestCase_009461_1, VkglTestCase_009461_2);

#define VkglTestCase_009462_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009462_2 "y_operator.right_shift.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009462, VkglTestCase_009462_1, VkglTestCase_009462_2);

#define VkglTestCase_009463_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009463_2 "_operator.right_shift.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009463, VkglTestCase_009463_1, VkglTestCase_009463_2);

#define VkglTestCase_009464_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009464_2 "operator.right_shift.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009464, VkglTestCase_009464_1, VkglTestCase_009464_2);

#define VkglTestCase_009465_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009465_2 "perator.right_shift.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009465, VkglTestCase_009465_1, VkglTestCase_009465_2);

#define VkglTestCase_009466_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009466_2 "y_operator.right_shift.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009466, VkglTestCase_009466_1, VkglTestCase_009466_2);

#define VkglTestCase_009467_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009467_2 "_operator.right_shift.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009467, VkglTestCase_009467_1, VkglTestCase_009467_2);

#define VkglTestCase_009468_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009468_2 "operator.right_shift.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009468, VkglTestCase_009468_1, VkglTestCase_009468_2);

#define VkglTestCase_009469_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009469_2 "perator.right_shift.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009469, VkglTestCase_009469_1, VkglTestCase_009469_2);

#define VkglTestCase_009470_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009470_2 "_operator.right_shift.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009470, VkglTestCase_009470_1, VkglTestCase_009470_2);

#define VkglTestCase_009471_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009471_2 "operator.right_shift.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009471, VkglTestCase_009471_1, VkglTestCase_009471_2);

#define VkglTestCase_009472_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009472_2 "_operator.right_shift.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009472, VkglTestCase_009472_1, VkglTestCase_009472_2);

#define VkglTestCase_009473_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009473_2 "operator.right_shift.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009473, VkglTestCase_009473_1, VkglTestCase_009473_2);

#define VkglTestCase_009474_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009474_2 "_operator.right_shift.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009474, VkglTestCase_009474_1, VkglTestCase_009474_2);

#define VkglTestCase_009475_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009475_2 "operator.right_shift.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009475, VkglTestCase_009475_1, VkglTestCase_009475_2);

#define VkglTestCase_009476_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009476_2 "nary_operator.right_shift.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009476, VkglTestCase_009476_1, VkglTestCase_009476_2);

#define VkglTestCase_009477_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009477_2 "ary_operator.right_shift.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009477, VkglTestCase_009477_1, VkglTestCase_009477_2);

#define VkglTestCase_009478_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009478_2 "ary_operator.right_shift.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009478, VkglTestCase_009478_1, VkglTestCase_009478_2);

#define VkglTestCase_009479_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009479_2 "ry_operator.right_shift.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009479, VkglTestCase_009479_1, VkglTestCase_009479_2);

#define VkglTestCase_009480_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009480_2 "ary_operator.right_shift.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009480, VkglTestCase_009480_1, VkglTestCase_009480_2);

#define VkglTestCase_009481_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009481_2 "ry_operator.right_shift.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009481, VkglTestCase_009481_1, VkglTestCase_009481_2);

#define VkglTestCase_009482_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009482_2 "ry_operator.right_shift.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009482, VkglTestCase_009482_1, VkglTestCase_009482_2);

#define VkglTestCase_009483_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009483_2 "y_operator.right_shift.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009483, VkglTestCase_009483_1, VkglTestCase_009483_2);

#define VkglTestCase_009484_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009484_2 "ary_operator.right_shift.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009484, VkglTestCase_009484_1, VkglTestCase_009484_2);

#define VkglTestCase_009485_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009485_2 "ry_operator.right_shift.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009485, VkglTestCase_009485_1, VkglTestCase_009485_2);

#define VkglTestCase_009486_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009486_2 "ry_operator.right_shift.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009486, VkglTestCase_009486_1, VkglTestCase_009486_2);

#define VkglTestCase_009487_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009487_2 "y_operator.right_shift.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009487, VkglTestCase_009487_1, VkglTestCase_009487_2);

#define VkglTestCase_009488_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009488_2 "ary_operator.right_shift.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009488, VkglTestCase_009488_1, VkglTestCase_009488_2);

#define VkglTestCase_009489_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009489_2 "ry_operator.right_shift.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009489, VkglTestCase_009489_1, VkglTestCase_009489_2);

#define VkglTestCase_009490_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009490_2 "ry_operator.right_shift.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009490, VkglTestCase_009490_1, VkglTestCase_009490_2);

#define VkglTestCase_009491_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009491_2 "y_operator.right_shift.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009491, VkglTestCase_009491_1, VkglTestCase_009491_2);

#define VkglTestCase_009492_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_009492_2 "nary_operator.right_shift.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009492, VkglTestCase_009492_1, VkglTestCase_009492_2);

#define VkglTestCase_009493_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009493_2 "ary_operator.right_shift.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009493, VkglTestCase_009493_1, VkglTestCase_009493_2);

#define VkglTestCase_009494_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009494_2 "ary_operator.right_shift.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009494, VkglTestCase_009494_1, VkglTestCase_009494_2);

#define VkglTestCase_009495_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009495_2 "ry_operator.right_shift.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009495, VkglTestCase_009495_1, VkglTestCase_009495_2);

#define VkglTestCase_009496_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009496_2 "ary_operator.right_shift.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009496, VkglTestCase_009496_1, VkglTestCase_009496_2);

#define VkglTestCase_009497_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009497_2 "ry_operator.right_shift.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009497, VkglTestCase_009497_1, VkglTestCase_009497_2);

#define VkglTestCase_009498_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_009498_2 "ary_operator.right_shift.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009498, VkglTestCase_009498_1, VkglTestCase_009498_2);

#define VkglTestCase_009499_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009499_2 "ry_operator.right_shift.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009499, VkglTestCase_009499_1, VkglTestCase_009499_2);

#define VkglTestCase_009500_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_009500_2 "ry_operator.right_shift.lowp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009500, VkglTestCase_009500_1, VkglTestCase_009500_2);

#define VkglTestCase_009501_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009501_2 "y_operator.right_shift.lowp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009501, VkglTestCase_009501_1, VkglTestCase_009501_2);

#define VkglTestCase_009502_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009502_2 "_operator.right_shift.mediump_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009502, VkglTestCase_009502_1, VkglTestCase_009502_2);

#define VkglTestCase_009503_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009503_2 "operator.right_shift.mediump_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009503, VkglTestCase_009503_1, VkglTestCase_009503_2);

#define VkglTestCase_009504_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009504_2 "_operator.right_shift.lowp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009504, VkglTestCase_009504_1, VkglTestCase_009504_2);

#define VkglTestCase_009505_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009505_2 "operator.right_shift.lowp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009505, VkglTestCase_009505_1, VkglTestCase_009505_2);

#define VkglTestCase_009506_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009506_2 "operator.right_shift.mediump_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009506, VkglTestCase_009506_1, VkglTestCase_009506_2);

#define VkglTestCase_009507_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009507_2 "perator.right_shift.mediump_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009507, VkglTestCase_009507_1, VkglTestCase_009507_2);

#define VkglTestCase_009508_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009508_2 "_operator.right_shift.lowp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009508, VkglTestCase_009508_1, VkglTestCase_009508_2);

#define VkglTestCase_009509_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009509_2 "operator.right_shift.lowp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009509, VkglTestCase_009509_1, VkglTestCase_009509_2);

#define VkglTestCase_009510_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009510_2 "operator.right_shift.mediump_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009510, VkglTestCase_009510_1, VkglTestCase_009510_2);

#define VkglTestCase_009511_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009511_2 "perator.right_shift.mediump_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009511, VkglTestCase_009511_1, VkglTestCase_009511_2);

#define VkglTestCase_009512_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009512_2 "_operator.right_shift.lowp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009512, VkglTestCase_009512_1, VkglTestCase_009512_2);

#define VkglTestCase_009513_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009513_2 "operator.right_shift.lowp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009513, VkglTestCase_009513_1, VkglTestCase_009513_2);

#define VkglTestCase_009514_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009514_2 "operator.right_shift.mediump_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009514, VkglTestCase_009514_1, VkglTestCase_009514_2);

#define VkglTestCase_009515_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_009515_2 "perator.right_shift.mediump_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009515, VkglTestCase_009515_1, VkglTestCase_009515_2);

#define VkglTestCase_009516_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009516_2 "y_operator.right_shift.highp_uint_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009516, VkglTestCase_009516_1, VkglTestCase_009516_2);

#define VkglTestCase_009517_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009517_2 "_operator.right_shift.highp_uint_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009517, VkglTestCase_009517_1, VkglTestCase_009517_2);

#define VkglTestCase_009518_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009518_2 "_operator.right_shift.highp_uvec2_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009518, VkglTestCase_009518_1, VkglTestCase_009518_2);

#define VkglTestCase_009519_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009519_2 "operator.right_shift.highp_uvec2_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009519, VkglTestCase_009519_1, VkglTestCase_009519_2);

#define VkglTestCase_009520_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009520_2 "_operator.right_shift.highp_uvec3_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009520, VkglTestCase_009520_1, VkglTestCase_009520_2);

#define VkglTestCase_009521_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009521_2 "operator.right_shift.highp_uvec3_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009521, VkglTestCase_009521_1, VkglTestCase_009521_2);

#define VkglTestCase_009522_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009522_2 "_operator.right_shift.highp_uvec4_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009522, VkglTestCase_009522_1, VkglTestCase_009522_2);

#define VkglTestCase_009523_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009523_2 "operator.right_shift.highp_uvec4_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009523, VkglTestCase_009523_1, VkglTestCase_009523_2);

#define VkglTestCase_009524_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009524_2 "y_operator.right_shift.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009524, VkglTestCase_009524_1, VkglTestCase_009524_2);

#define VkglTestCase_009525_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009525_2 "_operator.right_shift.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009525, VkglTestCase_009525_1, VkglTestCase_009525_2);

#define VkglTestCase_009526_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009526_2 "_operator.right_shift.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009526, VkglTestCase_009526_1, VkglTestCase_009526_2);

#define VkglTestCase_009527_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009527_2 "operator.right_shift.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009527, VkglTestCase_009527_1, VkglTestCase_009527_2);

#define VkglTestCase_009528_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009528_2 "y_operator.right_shift.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009528, VkglTestCase_009528_1, VkglTestCase_009528_2);

#define VkglTestCase_009529_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009529_2 "_operator.right_shift.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009529, VkglTestCase_009529_1, VkglTestCase_009529_2);

#define VkglTestCase_009530_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009530_2 "_operator.right_shift.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009530, VkglTestCase_009530_1, VkglTestCase_009530_2);

#define VkglTestCase_009531_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009531_2 "operator.right_shift.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009531, VkglTestCase_009531_1, VkglTestCase_009531_2);

#define VkglTestCase_009532_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009532_2 "y_operator.right_shift.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009532, VkglTestCase_009532_1, VkglTestCase_009532_2);

#define VkglTestCase_009533_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009533_2 "_operator.right_shift.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009533, VkglTestCase_009533_1, VkglTestCase_009533_2);

#define VkglTestCase_009534_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009534_2 "_operator.right_shift.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009534, VkglTestCase_009534_1, VkglTestCase_009534_2);

#define VkglTestCase_009535_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009535_2 "operator.right_shift.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009535, VkglTestCase_009535_1, VkglTestCase_009535_2);

#define VkglTestCase_009536_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009536_2 "y_operator.right_shift.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009536, VkglTestCase_009536_1, VkglTestCase_009536_2);

#define VkglTestCase_009537_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009537_2 "_operator.right_shift.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009537, VkglTestCase_009537_1, VkglTestCase_009537_2);

#define VkglTestCase_009538_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009538_2 "y_operator.right_shift.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009538, VkglTestCase_009538_1, VkglTestCase_009538_2);

#define VkglTestCase_009539_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009539_2 "_operator.right_shift.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009539, VkglTestCase_009539_1, VkglTestCase_009539_2);

#define VkglTestCase_009540_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009540_2 "y_operator.right_shift.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009540, VkglTestCase_009540_1, VkglTestCase_009540_2);

#define VkglTestCase_009541_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009541_2 "_operator.right_shift.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009541, VkglTestCase_009541_1, VkglTestCase_009541_2);

#define VkglTestCase_009542_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009542_2 "y_operator.right_shift.lowp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009542, VkglTestCase_009542_1, VkglTestCase_009542_2);

#define VkglTestCase_009543_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009543_2 "_operator.right_shift.lowp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009543, VkglTestCase_009543_1, VkglTestCase_009543_2);

#define VkglTestCase_009544_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009544_2 "_operator.right_shift.mediump_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009544, VkglTestCase_009544_1, VkglTestCase_009544_2);

#define VkglTestCase_009545_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009545_2 "operator.right_shift.mediump_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009545, VkglTestCase_009545_1, VkglTestCase_009545_2);

#define VkglTestCase_009546_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009546_2 "y_operator.right_shift.lowp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009546, VkglTestCase_009546_1, VkglTestCase_009546_2);

#define VkglTestCase_009547_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009547_2 "_operator.right_shift.lowp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009547, VkglTestCase_009547_1, VkglTestCase_009547_2);

#define VkglTestCase_009548_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009548_2 "_operator.right_shift.mediump_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009548, VkglTestCase_009548_1, VkglTestCase_009548_2);

#define VkglTestCase_009549_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009549_2 "operator.right_shift.mediump_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009549, VkglTestCase_009549_1, VkglTestCase_009549_2);

#define VkglTestCase_009550_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009550_2 "y_operator.right_shift.lowp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009550, VkglTestCase_009550_1, VkglTestCase_009550_2);

#define VkglTestCase_009551_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009551_2 "_operator.right_shift.lowp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009551, VkglTestCase_009551_1, VkglTestCase_009551_2);

#define VkglTestCase_009552_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009552_2 "_operator.right_shift.mediump_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009552, VkglTestCase_009552_1, VkglTestCase_009552_2);

#define VkglTestCase_009553_1 "dEQP-GLES3.functional.shaders.operator.binary_"
#define VkglTestCase_009553_2 "operator.right_shift.mediump_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009553, VkglTestCase_009553_1, VkglTestCase_009553_2);

#define VkglTestCase_009554_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009554_2 "y_operator.right_shift.highp_uvec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009554, VkglTestCase_009554_1, VkglTestCase_009554_2);

#define VkglTestCase_009555_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009555_2 "_operator.right_shift.highp_uvec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009555, VkglTestCase_009555_1, VkglTestCase_009555_2);

#define VkglTestCase_009556_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009556_2 "y_operator.right_shift.highp_uvec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009556, VkglTestCase_009556_1, VkglTestCase_009556_2);

#define VkglTestCase_009557_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009557_2 "_operator.right_shift.highp_uvec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009557, VkglTestCase_009557_1, VkglTestCase_009557_2);

#define VkglTestCase_009558_1 "dEQP-GLES3.functional.shaders.operator.binar"
#define VkglTestCase_009558_2 "y_operator.right_shift.highp_uvec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009558, VkglTestCase_009558_1, VkglTestCase_009558_2);

#define VkglTestCase_009559_1 "dEQP-GLES3.functional.shaders.operator.binary"
#define VkglTestCase_009559_2 "_operator.right_shift.highp_uvec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30010TestSuite, TestCase_009559, VkglTestCase_009559_1, VkglTestCase_009559_2);
