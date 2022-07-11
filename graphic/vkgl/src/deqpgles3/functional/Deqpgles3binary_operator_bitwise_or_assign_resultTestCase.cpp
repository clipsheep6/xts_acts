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

#define VkglTestCase_011408_1 "dEQP-GLES3.functional.shaders.operator.binary_o"
#define VkglTestCase_011408_2 "perator.bitwise_or_assign_result.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011408, VkglTestCase_011408_1, VkglTestCase_011408_2);

#define VkglTestCase_011409_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011409_2 "erator.bitwise_or_assign_result.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011409, VkglTestCase_011409_1, VkglTestCase_011409_2);

#define VkglTestCase_011410_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011410_2 "rator.bitwise_or_assign_result.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011410, VkglTestCase_011410_1, VkglTestCase_011410_2);

#define VkglTestCase_011411_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011411_2 "ator.bitwise_or_assign_result.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011411, VkglTestCase_011411_1, VkglTestCase_011411_2);

#define VkglTestCase_011412_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011412_2 "erator.bitwise_or_assign_result.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011412, VkglTestCase_011412_1, VkglTestCase_011412_2);

#define VkglTestCase_011413_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011413_2 "rator.bitwise_or_assign_result.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011413, VkglTestCase_011413_1, VkglTestCase_011413_2);

#define VkglTestCase_011414_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011414_2 "ator.bitwise_or_assign_result.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011414, VkglTestCase_011414_1, VkglTestCase_011414_2);

#define VkglTestCase_011415_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011415_2 "tor.bitwise_or_assign_result.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011415, VkglTestCase_011415_1, VkglTestCase_011415_2);

#define VkglTestCase_011416_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011416_2 "erator.bitwise_or_assign_result.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011416, VkglTestCase_011416_1, VkglTestCase_011416_2);

#define VkglTestCase_011417_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011417_2 "rator.bitwise_or_assign_result.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011417, VkglTestCase_011417_1, VkglTestCase_011417_2);

#define VkglTestCase_011418_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011418_2 "ator.bitwise_or_assign_result.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011418, VkglTestCase_011418_1, VkglTestCase_011418_2);

#define VkglTestCase_011419_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011419_2 "tor.bitwise_or_assign_result.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011419, VkglTestCase_011419_1, VkglTestCase_011419_2);

#define VkglTestCase_011420_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011420_2 "erator.bitwise_or_assign_result.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011420, VkglTestCase_011420_1, VkglTestCase_011420_2);

#define VkglTestCase_011421_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011421_2 "rator.bitwise_or_assign_result.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011421, VkglTestCase_011421_1, VkglTestCase_011421_2);

#define VkglTestCase_011422_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011422_2 "ator.bitwise_or_assign_result.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011422, VkglTestCase_011422_1, VkglTestCase_011422_2);

#define VkglTestCase_011423_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011423_2 "tor.bitwise_or_assign_result.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011423, VkglTestCase_011423_1, VkglTestCase_011423_2);

#define VkglTestCase_011424_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011424_2 "erator.bitwise_or_assign_result.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011424, VkglTestCase_011424_1, VkglTestCase_011424_2);

#define VkglTestCase_011425_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011425_2 "rator.bitwise_or_assign_result.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011425, VkglTestCase_011425_1, VkglTestCase_011425_2);

#define VkglTestCase_011426_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011426_2 "rator.bitwise_or_assign_result.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011426, VkglTestCase_011426_1, VkglTestCase_011426_2);

#define VkglTestCase_011427_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011427_2 "ator.bitwise_or_assign_result.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011427, VkglTestCase_011427_1, VkglTestCase_011427_2);

#define VkglTestCase_011428_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011428_2 "rator.bitwise_or_assign_result.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011428, VkglTestCase_011428_1, VkglTestCase_011428_2);

#define VkglTestCase_011429_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011429_2 "ator.bitwise_or_assign_result.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011429, VkglTestCase_011429_1, VkglTestCase_011429_2);

#define VkglTestCase_011430_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011430_2 "rator.bitwise_or_assign_result.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011430, VkglTestCase_011430_1, VkglTestCase_011430_2);

#define VkglTestCase_011431_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011431_2 "ator.bitwise_or_assign_result.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011431, VkglTestCase_011431_1, VkglTestCase_011431_2);

#define VkglTestCase_011432_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011432_2 "erator.bitwise_or_assign_result.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011432, VkglTestCase_011432_1, VkglTestCase_011432_2);

#define VkglTestCase_011433_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011433_2 "rator.bitwise_or_assign_result.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011433, VkglTestCase_011433_1, VkglTestCase_011433_2);

#define VkglTestCase_011434_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011434_2 "rator.bitwise_or_assign_result.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011434, VkglTestCase_011434_1, VkglTestCase_011434_2);

#define VkglTestCase_011435_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011435_2 "ator.bitwise_or_assign_result.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011435, VkglTestCase_011435_1, VkglTestCase_011435_2);

#define VkglTestCase_011436_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011436_2 "erator.bitwise_or_assign_result.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011436, VkglTestCase_011436_1, VkglTestCase_011436_2);

#define VkglTestCase_011437_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011437_2 "rator.bitwise_or_assign_result.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011437, VkglTestCase_011437_1, VkglTestCase_011437_2);

#define VkglTestCase_011438_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011438_2 "ator.bitwise_or_assign_result.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011438, VkglTestCase_011438_1, VkglTestCase_011438_2);

#define VkglTestCase_011439_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011439_2 "tor.bitwise_or_assign_result.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011439, VkglTestCase_011439_1, VkglTestCase_011439_2);

#define VkglTestCase_011440_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011440_2 "erator.bitwise_or_assign_result.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011440, VkglTestCase_011440_1, VkglTestCase_011440_2);

#define VkglTestCase_011441_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011441_2 "rator.bitwise_or_assign_result.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011441, VkglTestCase_011441_1, VkglTestCase_011441_2);

#define VkglTestCase_011442_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011442_2 "ator.bitwise_or_assign_result.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011442, VkglTestCase_011442_1, VkglTestCase_011442_2);

#define VkglTestCase_011443_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011443_2 "tor.bitwise_or_assign_result.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011443, VkglTestCase_011443_1, VkglTestCase_011443_2);

#define VkglTestCase_011444_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011444_2 "erator.bitwise_or_assign_result.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011444, VkglTestCase_011444_1, VkglTestCase_011444_2);

#define VkglTestCase_011445_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011445_2 "rator.bitwise_or_assign_result.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011445, VkglTestCase_011445_1, VkglTestCase_011445_2);

#define VkglTestCase_011446_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011446_2 "ator.bitwise_or_assign_result.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011446, VkglTestCase_011446_1, VkglTestCase_011446_2);

#define VkglTestCase_011447_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011447_2 "tor.bitwise_or_assign_result.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011447, VkglTestCase_011447_1, VkglTestCase_011447_2);

#define VkglTestCase_011448_1 "dEQP-GLES3.functional.shaders.operator.binary_op"
#define VkglTestCase_011448_2 "erator.bitwise_or_assign_result.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011448, VkglTestCase_011448_1, VkglTestCase_011448_2);

#define VkglTestCase_011449_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011449_2 "rator.bitwise_or_assign_result.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011449, VkglTestCase_011449_1, VkglTestCase_011449_2);

#define VkglTestCase_011450_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011450_2 "rator.bitwise_or_assign_result.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011450, VkglTestCase_011450_1, VkglTestCase_011450_2);

#define VkglTestCase_011451_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011451_2 "ator.bitwise_or_assign_result.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011451, VkglTestCase_011451_1, VkglTestCase_011451_2);

#define VkglTestCase_011452_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011452_2 "rator.bitwise_or_assign_result.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011452, VkglTestCase_011452_1, VkglTestCase_011452_2);

#define VkglTestCase_011453_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011453_2 "ator.bitwise_or_assign_result.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011453, VkglTestCase_011453_1, VkglTestCase_011453_2);

#define VkglTestCase_011454_1 "dEQP-GLES3.functional.shaders.operator.binary_ope"
#define VkglTestCase_011454_2 "rator.bitwise_or_assign_result.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011454, VkglTestCase_011454_1, VkglTestCase_011454_2);

#define VkglTestCase_011455_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011455_2 "ator.bitwise_or_assign_result.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011455, VkglTestCase_011455_1, VkglTestCase_011455_2);

#define VkglTestCase_011456_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011456_2 "ator.bitwise_or_assign_result.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011456, VkglTestCase_011456_1, VkglTestCase_011456_2);

#define VkglTestCase_011457_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011457_2 "tor.bitwise_or_assign_result.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011457, VkglTestCase_011457_1, VkglTestCase_011457_2);

#define VkglTestCase_011458_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011458_2 "or.bitwise_or_assign_result.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011458, VkglTestCase_011458_1, VkglTestCase_011458_2);

#define VkglTestCase_011459_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011459_2 "r.bitwise_or_assign_result.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011459, VkglTestCase_011459_1, VkglTestCase_011459_2);

#define VkglTestCase_011460_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011460_2 "ator.bitwise_or_assign_result.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011460, VkglTestCase_011460_1, VkglTestCase_011460_2);

#define VkglTestCase_011461_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011461_2 "tor.bitwise_or_assign_result.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011461, VkglTestCase_011461_1, VkglTestCase_011461_2);

#define VkglTestCase_011462_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011462_2 "or.bitwise_or_assign_result.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011462, VkglTestCase_011462_1, VkglTestCase_011462_2);

#define VkglTestCase_011463_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011463_2 "r.bitwise_or_assign_result.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011463, VkglTestCase_011463_1, VkglTestCase_011463_2);

#define VkglTestCase_011464_1 "dEQP-GLES3.functional.shaders.operator.binary_oper"
#define VkglTestCase_011464_2 "ator.bitwise_or_assign_result.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011464, VkglTestCase_011464_1, VkglTestCase_011464_2);

#define VkglTestCase_011465_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011465_2 "tor.bitwise_or_assign_result.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011465, VkglTestCase_011465_1, VkglTestCase_011465_2);

#define VkglTestCase_011466_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011466_2 "or.bitwise_or_assign_result.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011466, VkglTestCase_011466_1, VkglTestCase_011466_2);

#define VkglTestCase_011467_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011467_2 "r.bitwise_or_assign_result.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011467, VkglTestCase_011467_1, VkglTestCase_011467_2);

#define VkglTestCase_011468_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011468_2 "tor.bitwise_or_assign_result.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011468, VkglTestCase_011468_1, VkglTestCase_011468_2);

#define VkglTestCase_011469_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011469_2 "or.bitwise_or_assign_result.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011469, VkglTestCase_011469_1, VkglTestCase_011469_2);

#define VkglTestCase_011470_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011470_2 "tor.bitwise_or_assign_result.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011470, VkglTestCase_011470_1, VkglTestCase_011470_2);

#define VkglTestCase_011471_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011471_2 "or.bitwise_or_assign_result.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011471, VkglTestCase_011471_1, VkglTestCase_011471_2);

#define VkglTestCase_011472_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011472_2 "tor.bitwise_or_assign_result.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011472, VkglTestCase_011472_1, VkglTestCase_011472_2);

#define VkglTestCase_011473_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011473_2 "or.bitwise_or_assign_result.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011473, VkglTestCase_011473_1, VkglTestCase_011473_2);

#define VkglTestCase_011474_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011474_2 "tor.bitwise_or_assign_result.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011474, VkglTestCase_011474_1, VkglTestCase_011474_2);

#define VkglTestCase_011475_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011475_2 "or.bitwise_or_assign_result.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011475, VkglTestCase_011475_1, VkglTestCase_011475_2);

#define VkglTestCase_011476_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011476_2 "or.bitwise_or_assign_result.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011476, VkglTestCase_011476_1, VkglTestCase_011476_2);

#define VkglTestCase_011477_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011477_2 "r.bitwise_or_assign_result.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011477, VkglTestCase_011477_1, VkglTestCase_011477_2);

#define VkglTestCase_011478_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011478_2 "tor.bitwise_or_assign_result.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011478, VkglTestCase_011478_1, VkglTestCase_011478_2);

#define VkglTestCase_011479_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011479_2 "or.bitwise_or_assign_result.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011479, VkglTestCase_011479_1, VkglTestCase_011479_2);

#define VkglTestCase_011480_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011480_2 "or.bitwise_or_assign_result.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011480, VkglTestCase_011480_1, VkglTestCase_011480_2);

#define VkglTestCase_011481_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011481_2 "r.bitwise_or_assign_result.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011481, VkglTestCase_011481_1, VkglTestCase_011481_2);

#define VkglTestCase_011482_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011482_2 "tor.bitwise_or_assign_result.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011482, VkglTestCase_011482_1, VkglTestCase_011482_2);

#define VkglTestCase_011483_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011483_2 "or.bitwise_or_assign_result.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011483, VkglTestCase_011483_1, VkglTestCase_011483_2);

#define VkglTestCase_011484_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011484_2 "or.bitwise_or_assign_result.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011484, VkglTestCase_011484_1, VkglTestCase_011484_2);

#define VkglTestCase_011485_1 "dEQP-GLES3.functional.shaders.operator.binary_operato"
#define VkglTestCase_011485_2 "r.bitwise_or_assign_result.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011485, VkglTestCase_011485_1, VkglTestCase_011485_2);

#define VkglTestCase_011486_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011486_2 "tor.bitwise_or_assign_result.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011486, VkglTestCase_011486_1, VkglTestCase_011486_2);

#define VkglTestCase_011487_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011487_2 "or.bitwise_or_assign_result.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011487, VkglTestCase_011487_1, VkglTestCase_011487_2);

#define VkglTestCase_011488_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011488_2 "tor.bitwise_or_assign_result.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011488, VkglTestCase_011488_1, VkglTestCase_011488_2);

#define VkglTestCase_011489_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011489_2 "or.bitwise_or_assign_result.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011489, VkglTestCase_011489_1, VkglTestCase_011489_2);

#define VkglTestCase_011490_1 "dEQP-GLES3.functional.shaders.operator.binary_opera"
#define VkglTestCase_011490_2 "tor.bitwise_or_assign_result.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011490, VkglTestCase_011490_1, VkglTestCase_011490_2);

#define VkglTestCase_011491_1 "dEQP-GLES3.functional.shaders.operator.binary_operat"
#define VkglTestCase_011491_2 "or.bitwise_or_assign_result.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30012TestSuite, TestCase_011491, VkglTestCase_011491_1, VkglTestCase_011491_2);
