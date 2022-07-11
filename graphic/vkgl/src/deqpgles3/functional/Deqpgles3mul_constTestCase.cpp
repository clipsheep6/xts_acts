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
#include "../ActsDeqpgles30015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014412_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014412_2 "ix.mul.const.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014412, VkglTestCase_014412_1, VkglTestCase_014412_2);

#define VkglTestCase_014413_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014413_2 "x.mul.const.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014413, VkglTestCase_014413_1, VkglTestCase_014413_2);

#define VkglTestCase_014414_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014414_2 "ix.mul.const.lowp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014414, VkglTestCase_014414_1, VkglTestCase_014414_2);

#define VkglTestCase_014415_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014415_2 "x.mul.const.lowp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014415, VkglTestCase_014415_1, VkglTestCase_014415_2);

#define VkglTestCase_014416_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014416_2 "ix.mul.const.lowp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014416, VkglTestCase_014416_1, VkglTestCase_014416_2);

#define VkglTestCase_014417_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014417_2 "x.mul.const.lowp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014417, VkglTestCase_014417_1, VkglTestCase_014417_2);

#define VkglTestCase_014418_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014418_2 "ix.mul.const.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014418, VkglTestCase_014418_1, VkglTestCase_014418_2);

#define VkglTestCase_014419_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014419_2 "x.mul.const.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014419, VkglTestCase_014419_1, VkglTestCase_014419_2);

#define VkglTestCase_014420_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014420_2 "x.mul.const.lowp_mat2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014420, VkglTestCase_014420_1, VkglTestCase_014420_2);

#define VkglTestCase_014421_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014421_2 ".mul.const.lowp_mat2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014421, VkglTestCase_014421_1, VkglTestCase_014421_2);

#define VkglTestCase_014422_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014422_2 "x.mul.const.lowp_mat2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014422, VkglTestCase_014422_1, VkglTestCase_014422_2);

#define VkglTestCase_014423_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014423_2 ".mul.const.lowp_mat2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014423, VkglTestCase_014423_1, VkglTestCase_014423_2);

#define VkglTestCase_014424_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014424_2 ".mul.const.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014424, VkglTestCase_014424_1, VkglTestCase_014424_2);

#define VkglTestCase_014425_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014425_2 "mul.const.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014425, VkglTestCase_014425_1, VkglTestCase_014425_2);

#define VkglTestCase_014426_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014426_2 "x.mul.const.mediump_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014426, VkglTestCase_014426_1, VkglTestCase_014426_2);

#define VkglTestCase_014427_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014427_2 ".mul.const.mediump_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014427, VkglTestCase_014427_1, VkglTestCase_014427_2);

#define VkglTestCase_014428_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014428_2 "x.mul.const.mediump_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014428, VkglTestCase_014428_1, VkglTestCase_014428_2);

#define VkglTestCase_014429_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014429_2 ".mul.const.mediump_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014429, VkglTestCase_014429_1, VkglTestCase_014429_2);

#define VkglTestCase_014430_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014430_2 "x.mul.const.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014430, VkglTestCase_014430_1, VkglTestCase_014430_2);

#define VkglTestCase_014431_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014431_2 ".mul.const.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014431, VkglTestCase_014431_1, VkglTestCase_014431_2);

#define VkglTestCase_014432_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014432_2 ".mul.const.mediump_mat2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014432, VkglTestCase_014432_1, VkglTestCase_014432_2);

#define VkglTestCase_014433_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014433_2 "mul.const.mediump_mat2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014433, VkglTestCase_014433_1, VkglTestCase_014433_2);

#define VkglTestCase_014434_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014434_2 ".mul.const.mediump_mat2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014434, VkglTestCase_014434_1, VkglTestCase_014434_2);

#define VkglTestCase_014435_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014435_2 "mul.const.mediump_mat2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014435, VkglTestCase_014435_1, VkglTestCase_014435_2);

#define VkglTestCase_014436_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014436_2 "x.mul.const.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014436, VkglTestCase_014436_1, VkglTestCase_014436_2);

#define VkglTestCase_014437_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014437_2 ".mul.const.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014437, VkglTestCase_014437_1, VkglTestCase_014437_2);

#define VkglTestCase_014438_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014438_2 "ix.mul.const.highp_mat2_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014438, VkglTestCase_014438_1, VkglTestCase_014438_2);

#define VkglTestCase_014439_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014439_2 "x.mul.const.highp_mat2_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014439, VkglTestCase_014439_1, VkglTestCase_014439_2);

#define VkglTestCase_014440_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014440_2 "ix.mul.const.highp_vec2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014440, VkglTestCase_014440_1, VkglTestCase_014440_2);

#define VkglTestCase_014441_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014441_2 "x.mul.const.highp_vec2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014441, VkglTestCase_014441_1, VkglTestCase_014441_2);

#define VkglTestCase_014442_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014442_2 "ix.mul.const.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014442, VkglTestCase_014442_1, VkglTestCase_014442_2);

#define VkglTestCase_014443_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014443_2 "x.mul.const.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014443, VkglTestCase_014443_1, VkglTestCase_014443_2);

#define VkglTestCase_014444_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014444_2 "x.mul.const.highp_mat2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014444, VkglTestCase_014444_1, VkglTestCase_014444_2);

#define VkglTestCase_014445_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014445_2 ".mul.const.highp_mat2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014445, VkglTestCase_014445_1, VkglTestCase_014445_2);

#define VkglTestCase_014446_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014446_2 "x.mul.const.highp_mat2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014446, VkglTestCase_014446_1, VkglTestCase_014446_2);

#define VkglTestCase_014447_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014447_2 ".mul.const.highp_mat2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014447, VkglTestCase_014447_1, VkglTestCase_014447_2);

#define VkglTestCase_014448_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014448_2 "x.mul.const.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014448, VkglTestCase_014448_1, VkglTestCase_014448_2);

#define VkglTestCase_014449_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014449_2 ".mul.const.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014449, VkglTestCase_014449_1, VkglTestCase_014449_2);

#define VkglTestCase_014450_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014450_2 "x.mul.const.lowp_mat2x3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014450, VkglTestCase_014450_1, VkglTestCase_014450_2);

#define VkglTestCase_014451_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014451_2 ".mul.const.lowp_mat2x3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014451, VkglTestCase_014451_1, VkglTestCase_014451_2);

#define VkglTestCase_014452_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014452_2 "x.mul.const.lowp_vec3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014452, VkglTestCase_014452_1, VkglTestCase_014452_2);

#define VkglTestCase_014453_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014453_2 ".mul.const.lowp_vec3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014453, VkglTestCase_014453_1, VkglTestCase_014453_2);

#define VkglTestCase_014454_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014454_2 "x.mul.const.lowp_mat2x3_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014454, VkglTestCase_014454_1, VkglTestCase_014454_2);

#define VkglTestCase_014455_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014455_2 ".mul.const.lowp_mat2x3_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014455, VkglTestCase_014455_1, VkglTestCase_014455_2);

#define VkglTestCase_014456_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014456_2 ".mul.const.lowp_mat2x3_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014456, VkglTestCase_014456_1, VkglTestCase_014456_2);

#define VkglTestCase_014457_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014457_2 "mul.const.lowp_mat2x3_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014457, VkglTestCase_014457_1, VkglTestCase_014457_2);

#define VkglTestCase_014458_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014458_2 ".mul.const.lowp_mat2x3_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014458, VkglTestCase_014458_1, VkglTestCase_014458_2);

#define VkglTestCase_014459_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014459_2 "mul.const.lowp_mat2x3_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014459, VkglTestCase_014459_1, VkglTestCase_014459_2);

#define VkglTestCase_014460_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014460_2 "mul.const.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014460, VkglTestCase_014460_1, VkglTestCase_014460_2);

#define VkglTestCase_014461_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014461_2 "ul.const.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014461, VkglTestCase_014461_1, VkglTestCase_014461_2);

#define VkglTestCase_014462_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014462_2 ".mul.const.mediump_mat2x3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014462, VkglTestCase_014462_1, VkglTestCase_014462_2);

#define VkglTestCase_014463_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014463_2 "mul.const.mediump_mat2x3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014463, VkglTestCase_014463_1, VkglTestCase_014463_2);

#define VkglTestCase_014464_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014464_2 ".mul.const.mediump_vec3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014464, VkglTestCase_014464_1, VkglTestCase_014464_2);

#define VkglTestCase_014465_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014465_2 "mul.const.mediump_vec3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014465, VkglTestCase_014465_1, VkglTestCase_014465_2);

#define VkglTestCase_014466_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014466_2 ".mul.const.mediump_mat2x3_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014466, VkglTestCase_014466_1, VkglTestCase_014466_2);

#define VkglTestCase_014467_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014467_2 "mul.const.mediump_mat2x3_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014467, VkglTestCase_014467_1, VkglTestCase_014467_2);

#define VkglTestCase_014468_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014468_2 "mul.const.mediump_mat2x3_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014468, VkglTestCase_014468_1, VkglTestCase_014468_2);

#define VkglTestCase_014469_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014469_2 "ul.const.mediump_mat2x3_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014469, VkglTestCase_014469_1, VkglTestCase_014469_2);

#define VkglTestCase_014470_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014470_2 "mul.const.mediump_mat2x3_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014470, VkglTestCase_014470_1, VkglTestCase_014470_2);

#define VkglTestCase_014471_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014471_2 "ul.const.mediump_mat2x3_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014471, VkglTestCase_014471_1, VkglTestCase_014471_2);

#define VkglTestCase_014472_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014472_2 ".mul.const.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014472, VkglTestCase_014472_1, VkglTestCase_014472_2);

#define VkglTestCase_014473_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014473_2 "mul.const.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014473, VkglTestCase_014473_1, VkglTestCase_014473_2);

#define VkglTestCase_014474_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014474_2 "x.mul.const.highp_mat2x3_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014474, VkglTestCase_014474_1, VkglTestCase_014474_2);

#define VkglTestCase_014475_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014475_2 ".mul.const.highp_mat2x3_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014475, VkglTestCase_014475_1, VkglTestCase_014475_2);

#define VkglTestCase_014476_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014476_2 "x.mul.const.highp_vec3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014476, VkglTestCase_014476_1, VkglTestCase_014476_2);

#define VkglTestCase_014477_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014477_2 ".mul.const.highp_vec3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014477, VkglTestCase_014477_1, VkglTestCase_014477_2);

#define VkglTestCase_014478_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014478_2 "x.mul.const.highp_mat2x3_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014478, VkglTestCase_014478_1, VkglTestCase_014478_2);

#define VkglTestCase_014479_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014479_2 ".mul.const.highp_mat2x3_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014479, VkglTestCase_014479_1, VkglTestCase_014479_2);

#define VkglTestCase_014480_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014480_2 ".mul.const.highp_mat2x3_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014480, VkglTestCase_014480_1, VkglTestCase_014480_2);

#define VkglTestCase_014481_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014481_2 "mul.const.highp_mat2x3_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014481, VkglTestCase_014481_1, VkglTestCase_014481_2);

#define VkglTestCase_014482_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014482_2 ".mul.const.highp_mat2x3_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014482, VkglTestCase_014482_1, VkglTestCase_014482_2);

#define VkglTestCase_014483_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014483_2 "mul.const.highp_mat2x3_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014483, VkglTestCase_014483_1, VkglTestCase_014483_2);

#define VkglTestCase_014484_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014484_2 "x.mul.const.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014484, VkglTestCase_014484_1, VkglTestCase_014484_2);

#define VkglTestCase_014485_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014485_2 ".mul.const.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014485, VkglTestCase_014485_1, VkglTestCase_014485_2);

#define VkglTestCase_014486_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014486_2 "x.mul.const.lowp_mat2x4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014486, VkglTestCase_014486_1, VkglTestCase_014486_2);

#define VkglTestCase_014487_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014487_2 ".mul.const.lowp_mat2x4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014487, VkglTestCase_014487_1, VkglTestCase_014487_2);

#define VkglTestCase_014488_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014488_2 "x.mul.const.lowp_vec4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014488, VkglTestCase_014488_1, VkglTestCase_014488_2);

#define VkglTestCase_014489_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014489_2 ".mul.const.lowp_vec4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014489, VkglTestCase_014489_1, VkglTestCase_014489_2);

#define VkglTestCase_014490_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014490_2 "x.mul.const.lowp_mat2x4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014490, VkglTestCase_014490_1, VkglTestCase_014490_2);

#define VkglTestCase_014491_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014491_2 ".mul.const.lowp_mat2x4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014491, VkglTestCase_014491_1, VkglTestCase_014491_2);

#define VkglTestCase_014492_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014492_2 ".mul.const.lowp_mat2x4_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014492, VkglTestCase_014492_1, VkglTestCase_014492_2);

#define VkglTestCase_014493_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014493_2 "mul.const.lowp_mat2x4_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014493, VkglTestCase_014493_1, VkglTestCase_014493_2);

#define VkglTestCase_014494_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014494_2 ".mul.const.lowp_mat2x4_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014494, VkglTestCase_014494_1, VkglTestCase_014494_2);

#define VkglTestCase_014495_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014495_2 "mul.const.lowp_mat2x4_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014495, VkglTestCase_014495_1, VkglTestCase_014495_2);

#define VkglTestCase_014496_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014496_2 "mul.const.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014496, VkglTestCase_014496_1, VkglTestCase_014496_2);

#define VkglTestCase_014497_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014497_2 "ul.const.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014497, VkglTestCase_014497_1, VkglTestCase_014497_2);

#define VkglTestCase_014498_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014498_2 ".mul.const.mediump_mat2x4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014498, VkglTestCase_014498_1, VkglTestCase_014498_2);

#define VkglTestCase_014499_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014499_2 "mul.const.mediump_mat2x4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014499, VkglTestCase_014499_1, VkglTestCase_014499_2);

#define VkglTestCase_014500_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014500_2 ".mul.const.mediump_vec4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014500, VkglTestCase_014500_1, VkglTestCase_014500_2);

#define VkglTestCase_014501_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014501_2 "mul.const.mediump_vec4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014501, VkglTestCase_014501_1, VkglTestCase_014501_2);

#define VkglTestCase_014502_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014502_2 ".mul.const.mediump_mat2x4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014502, VkglTestCase_014502_1, VkglTestCase_014502_2);

#define VkglTestCase_014503_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014503_2 "mul.const.mediump_mat2x4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014503, VkglTestCase_014503_1, VkglTestCase_014503_2);

#define VkglTestCase_014504_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014504_2 "mul.const.mediump_mat2x4_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014504, VkglTestCase_014504_1, VkglTestCase_014504_2);

#define VkglTestCase_014505_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014505_2 "ul.const.mediump_mat2x4_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014505, VkglTestCase_014505_1, VkglTestCase_014505_2);

#define VkglTestCase_014506_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014506_2 "mul.const.mediump_mat2x4_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014506, VkglTestCase_014506_1, VkglTestCase_014506_2);

#define VkglTestCase_014507_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014507_2 "ul.const.mediump_mat2x4_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014507, VkglTestCase_014507_1, VkglTestCase_014507_2);

#define VkglTestCase_014508_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014508_2 ".mul.const.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014508, VkglTestCase_014508_1, VkglTestCase_014508_2);

#define VkglTestCase_014509_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014509_2 "mul.const.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014509, VkglTestCase_014509_1, VkglTestCase_014509_2);

#define VkglTestCase_014510_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014510_2 "x.mul.const.highp_mat2x4_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014510, VkglTestCase_014510_1, VkglTestCase_014510_2);

#define VkglTestCase_014511_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014511_2 ".mul.const.highp_mat2x4_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014511, VkglTestCase_014511_1, VkglTestCase_014511_2);

#define VkglTestCase_014512_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014512_2 "x.mul.const.highp_vec4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014512, VkglTestCase_014512_1, VkglTestCase_014512_2);

#define VkglTestCase_014513_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014513_2 ".mul.const.highp_vec4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014513, VkglTestCase_014513_1, VkglTestCase_014513_2);

#define VkglTestCase_014514_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014514_2 "x.mul.const.highp_mat2x4_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014514, VkglTestCase_014514_1, VkglTestCase_014514_2);

#define VkglTestCase_014515_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014515_2 ".mul.const.highp_mat2x4_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014515, VkglTestCase_014515_1, VkglTestCase_014515_2);

#define VkglTestCase_014516_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014516_2 ".mul.const.highp_mat2x4_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014516, VkglTestCase_014516_1, VkglTestCase_014516_2);

#define VkglTestCase_014517_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014517_2 "mul.const.highp_mat2x4_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014517, VkglTestCase_014517_1, VkglTestCase_014517_2);

#define VkglTestCase_014518_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014518_2 ".mul.const.highp_mat2x4_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014518, VkglTestCase_014518_1, VkglTestCase_014518_2);

#define VkglTestCase_014519_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014519_2 "mul.const.highp_mat2x4_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014519, VkglTestCase_014519_1, VkglTestCase_014519_2);

#define VkglTestCase_014520_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014520_2 "x.mul.const.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014520, VkglTestCase_014520_1, VkglTestCase_014520_2);

#define VkglTestCase_014521_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014521_2 ".mul.const.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014521, VkglTestCase_014521_1, VkglTestCase_014521_2);

#define VkglTestCase_014522_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014522_2 "x.mul.const.lowp_mat3x2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014522, VkglTestCase_014522_1, VkglTestCase_014522_2);

#define VkglTestCase_014523_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014523_2 ".mul.const.lowp_mat3x2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014523, VkglTestCase_014523_1, VkglTestCase_014523_2);

#define VkglTestCase_014524_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014524_2 "x.mul.const.lowp_vec2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014524, VkglTestCase_014524_1, VkglTestCase_014524_2);

#define VkglTestCase_014525_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014525_2 ".mul.const.lowp_vec2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014525, VkglTestCase_014525_1, VkglTestCase_014525_2);

#define VkglTestCase_014526_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014526_2 ".mul.const.lowp_mat3x2_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014526, VkglTestCase_014526_1, VkglTestCase_014526_2);

#define VkglTestCase_014527_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014527_2 "mul.const.lowp_mat3x2_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014527, VkglTestCase_014527_1, VkglTestCase_014527_2);

#define VkglTestCase_014528_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014528_2 "x.mul.const.lowp_mat3x2_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014528, VkglTestCase_014528_1, VkglTestCase_014528_2);

#define VkglTestCase_014529_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014529_2 ".mul.const.lowp_mat3x2_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014529, VkglTestCase_014529_1, VkglTestCase_014529_2);

#define VkglTestCase_014530_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014530_2 ".mul.const.lowp_mat3x2_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014530, VkglTestCase_014530_1, VkglTestCase_014530_2);

#define VkglTestCase_014531_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014531_2 "mul.const.lowp_mat3x2_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014531, VkglTestCase_014531_1, VkglTestCase_014531_2);

#define VkglTestCase_014532_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014532_2 "mul.const.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014532, VkglTestCase_014532_1, VkglTestCase_014532_2);

#define VkglTestCase_014533_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014533_2 "ul.const.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014533, VkglTestCase_014533_1, VkglTestCase_014533_2);

#define VkglTestCase_014534_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014534_2 ".mul.const.mediump_mat3x2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014534, VkglTestCase_014534_1, VkglTestCase_014534_2);

#define VkglTestCase_014535_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014535_2 "mul.const.mediump_mat3x2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014535, VkglTestCase_014535_1, VkglTestCase_014535_2);

#define VkglTestCase_014536_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014536_2 ".mul.const.mediump_vec2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014536, VkglTestCase_014536_1, VkglTestCase_014536_2);

#define VkglTestCase_014537_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014537_2 "mul.const.mediump_vec2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014537, VkglTestCase_014537_1, VkglTestCase_014537_2);

#define VkglTestCase_014538_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014538_2 "mul.const.mediump_mat3x2_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014538, VkglTestCase_014538_1, VkglTestCase_014538_2);

#define VkglTestCase_014539_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014539_2 "ul.const.mediump_mat3x2_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014539, VkglTestCase_014539_1, VkglTestCase_014539_2);

#define VkglTestCase_014540_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014540_2 ".mul.const.mediump_mat3x2_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014540, VkglTestCase_014540_1, VkglTestCase_014540_2);

#define VkglTestCase_014541_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014541_2 "mul.const.mediump_mat3x2_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014541, VkglTestCase_014541_1, VkglTestCase_014541_2);

#define VkglTestCase_014542_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014542_2 "mul.const.mediump_mat3x2_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014542, VkglTestCase_014542_1, VkglTestCase_014542_2);

#define VkglTestCase_014543_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014543_2 "ul.const.mediump_mat3x2_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014543, VkglTestCase_014543_1, VkglTestCase_014543_2);

#define VkglTestCase_014544_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014544_2 ".mul.const.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014544, VkglTestCase_014544_1, VkglTestCase_014544_2);

#define VkglTestCase_014545_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014545_2 "mul.const.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014545, VkglTestCase_014545_1, VkglTestCase_014545_2);

#define VkglTestCase_014546_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014546_2 "x.mul.const.highp_mat3x2_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014546, VkglTestCase_014546_1, VkglTestCase_014546_2);

#define VkglTestCase_014547_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014547_2 ".mul.const.highp_mat3x2_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014547, VkglTestCase_014547_1, VkglTestCase_014547_2);

#define VkglTestCase_014548_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014548_2 "x.mul.const.highp_vec2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014548, VkglTestCase_014548_1, VkglTestCase_014548_2);

#define VkglTestCase_014549_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014549_2 ".mul.const.highp_vec2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014549, VkglTestCase_014549_1, VkglTestCase_014549_2);

#define VkglTestCase_014550_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014550_2 ".mul.const.highp_mat3x2_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014550, VkglTestCase_014550_1, VkglTestCase_014550_2);

#define VkglTestCase_014551_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014551_2 "mul.const.highp_mat3x2_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014551, VkglTestCase_014551_1, VkglTestCase_014551_2);

#define VkglTestCase_014552_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014552_2 "x.mul.const.highp_mat3x2_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014552, VkglTestCase_014552_1, VkglTestCase_014552_2);

#define VkglTestCase_014553_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014553_2 ".mul.const.highp_mat3x2_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014553, VkglTestCase_014553_1, VkglTestCase_014553_2);

#define VkglTestCase_014554_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014554_2 ".mul.const.highp_mat3x2_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014554, VkglTestCase_014554_1, VkglTestCase_014554_2);

#define VkglTestCase_014555_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014555_2 "mul.const.highp_mat3x2_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014555, VkglTestCase_014555_1, VkglTestCase_014555_2);

#define VkglTestCase_014556_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014556_2 "ix.mul.const.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014556, VkglTestCase_014556_1, VkglTestCase_014556_2);

#define VkglTestCase_014557_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014557_2 "x.mul.const.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014557, VkglTestCase_014557_1, VkglTestCase_014557_2);

#define VkglTestCase_014558_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014558_2 "ix.mul.const.lowp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014558, VkglTestCase_014558_1, VkglTestCase_014558_2);

#define VkglTestCase_014559_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014559_2 "x.mul.const.lowp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014559, VkglTestCase_014559_1, VkglTestCase_014559_2);

#define VkglTestCase_014560_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014560_2 "ix.mul.const.lowp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014560, VkglTestCase_014560_1, VkglTestCase_014560_2);

#define VkglTestCase_014561_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014561_2 "x.mul.const.lowp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014561, VkglTestCase_014561_1, VkglTestCase_014561_2);

#define VkglTestCase_014562_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014562_2 "x.mul.const.lowp_mat3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014562, VkglTestCase_014562_1, VkglTestCase_014562_2);

#define VkglTestCase_014563_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014563_2 ".mul.const.lowp_mat3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014563, VkglTestCase_014563_1, VkglTestCase_014563_2);

#define VkglTestCase_014564_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014564_2 "ix.mul.const.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014564, VkglTestCase_014564_1, VkglTestCase_014564_2);

#define VkglTestCase_014565_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014565_2 "x.mul.const.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014565, VkglTestCase_014565_1, VkglTestCase_014565_2);

#define VkglTestCase_014566_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014566_2 "x.mul.const.lowp_mat3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014566, VkglTestCase_014566_1, VkglTestCase_014566_2);

#define VkglTestCase_014567_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014567_2 ".mul.const.lowp_mat3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014567, VkglTestCase_014567_1, VkglTestCase_014567_2);

#define VkglTestCase_014568_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014568_2 ".mul.const.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014568, VkglTestCase_014568_1, VkglTestCase_014568_2);

#define VkglTestCase_014569_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014569_2 "mul.const.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014569, VkglTestCase_014569_1, VkglTestCase_014569_2);

#define VkglTestCase_014570_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014570_2 "x.mul.const.mediump_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014570, VkglTestCase_014570_1, VkglTestCase_014570_2);

#define VkglTestCase_014571_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014571_2 ".mul.const.mediump_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014571, VkglTestCase_014571_1, VkglTestCase_014571_2);

#define VkglTestCase_014572_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014572_2 "x.mul.const.mediump_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014572, VkglTestCase_014572_1, VkglTestCase_014572_2);

#define VkglTestCase_014573_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014573_2 ".mul.const.mediump_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014573, VkglTestCase_014573_1, VkglTestCase_014573_2);

#define VkglTestCase_014574_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014574_2 ".mul.const.mediump_mat3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014574, VkglTestCase_014574_1, VkglTestCase_014574_2);

#define VkglTestCase_014575_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014575_2 "mul.const.mediump_mat3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014575, VkglTestCase_014575_1, VkglTestCase_014575_2);

#define VkglTestCase_014576_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014576_2 "x.mul.const.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014576, VkglTestCase_014576_1, VkglTestCase_014576_2);

#define VkglTestCase_014577_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014577_2 ".mul.const.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014577, VkglTestCase_014577_1, VkglTestCase_014577_2);

#define VkglTestCase_014578_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014578_2 ".mul.const.mediump_mat3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014578, VkglTestCase_014578_1, VkglTestCase_014578_2);

#define VkglTestCase_014579_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014579_2 "mul.const.mediump_mat3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014579, VkglTestCase_014579_1, VkglTestCase_014579_2);

#define VkglTestCase_014580_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014580_2 "x.mul.const.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014580, VkglTestCase_014580_1, VkglTestCase_014580_2);

#define VkglTestCase_014581_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014581_2 ".mul.const.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014581, VkglTestCase_014581_1, VkglTestCase_014581_2);

#define VkglTestCase_014582_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014582_2 "ix.mul.const.highp_mat3_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014582, VkglTestCase_014582_1, VkglTestCase_014582_2);

#define VkglTestCase_014583_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014583_2 "x.mul.const.highp_mat3_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014583, VkglTestCase_014583_1, VkglTestCase_014583_2);

#define VkglTestCase_014584_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014584_2 "ix.mul.const.highp_vec3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014584, VkglTestCase_014584_1, VkglTestCase_014584_2);

#define VkglTestCase_014585_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014585_2 "x.mul.const.highp_vec3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014585, VkglTestCase_014585_1, VkglTestCase_014585_2);

#define VkglTestCase_014586_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014586_2 "x.mul.const.highp_mat3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014586, VkglTestCase_014586_1, VkglTestCase_014586_2);

#define VkglTestCase_014587_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014587_2 ".mul.const.highp_mat3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014587, VkglTestCase_014587_1, VkglTestCase_014587_2);

#define VkglTestCase_014588_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014588_2 "ix.mul.const.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014588, VkglTestCase_014588_1, VkglTestCase_014588_2);

#define VkglTestCase_014589_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014589_2 "x.mul.const.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014589, VkglTestCase_014589_1, VkglTestCase_014589_2);

#define VkglTestCase_014590_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014590_2 "x.mul.const.highp_mat3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014590, VkglTestCase_014590_1, VkglTestCase_014590_2);

#define VkglTestCase_014591_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014591_2 ".mul.const.highp_mat3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014591, VkglTestCase_014591_1, VkglTestCase_014591_2);

#define VkglTestCase_014592_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014592_2 "x.mul.const.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014592, VkglTestCase_014592_1, VkglTestCase_014592_2);

#define VkglTestCase_014593_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014593_2 ".mul.const.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014593, VkglTestCase_014593_1, VkglTestCase_014593_2);

#define VkglTestCase_014594_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014594_2 "x.mul.const.lowp_mat3x4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014594, VkglTestCase_014594_1, VkglTestCase_014594_2);

#define VkglTestCase_014595_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014595_2 ".mul.const.lowp_mat3x4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014595, VkglTestCase_014595_1, VkglTestCase_014595_2);

#define VkglTestCase_014596_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014596_2 "x.mul.const.lowp_vec4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014596, VkglTestCase_014596_1, VkglTestCase_014596_2);

#define VkglTestCase_014597_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014597_2 ".mul.const.lowp_vec4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014597, VkglTestCase_014597_1, VkglTestCase_014597_2);

#define VkglTestCase_014598_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014598_2 ".mul.const.lowp_mat3x4_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014598, VkglTestCase_014598_1, VkglTestCase_014598_2);

#define VkglTestCase_014599_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014599_2 "mul.const.lowp_mat3x4_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014599, VkglTestCase_014599_1, VkglTestCase_014599_2);

#define VkglTestCase_014600_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014600_2 "x.mul.const.lowp_mat3x4_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014600, VkglTestCase_014600_1, VkglTestCase_014600_2);

#define VkglTestCase_014601_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014601_2 ".mul.const.lowp_mat3x4_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014601, VkglTestCase_014601_1, VkglTestCase_014601_2);

#define VkglTestCase_014602_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014602_2 ".mul.const.lowp_mat3x4_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014602, VkglTestCase_014602_1, VkglTestCase_014602_2);

#define VkglTestCase_014603_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014603_2 "mul.const.lowp_mat3x4_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014603, VkglTestCase_014603_1, VkglTestCase_014603_2);

#define VkglTestCase_014604_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014604_2 "mul.const.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014604, VkglTestCase_014604_1, VkglTestCase_014604_2);

#define VkglTestCase_014605_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014605_2 "ul.const.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014605, VkglTestCase_014605_1, VkglTestCase_014605_2);

#define VkglTestCase_014606_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014606_2 ".mul.const.mediump_mat3x4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014606, VkglTestCase_014606_1, VkglTestCase_014606_2);

#define VkglTestCase_014607_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014607_2 "mul.const.mediump_mat3x4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014607, VkglTestCase_014607_1, VkglTestCase_014607_2);

#define VkglTestCase_014608_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014608_2 ".mul.const.mediump_vec4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014608, VkglTestCase_014608_1, VkglTestCase_014608_2);

#define VkglTestCase_014609_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014609_2 "mul.const.mediump_vec4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014609, VkglTestCase_014609_1, VkglTestCase_014609_2);

#define VkglTestCase_014610_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014610_2 "mul.const.mediump_mat3x4_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014610, VkglTestCase_014610_1, VkglTestCase_014610_2);

#define VkglTestCase_014611_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014611_2 "ul.const.mediump_mat3x4_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014611, VkglTestCase_014611_1, VkglTestCase_014611_2);

#define VkglTestCase_014612_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014612_2 ".mul.const.mediump_mat3x4_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014612, VkglTestCase_014612_1, VkglTestCase_014612_2);

#define VkglTestCase_014613_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014613_2 "mul.const.mediump_mat3x4_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014613, VkglTestCase_014613_1, VkglTestCase_014613_2);

#define VkglTestCase_014614_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014614_2 "mul.const.mediump_mat3x4_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014614, VkglTestCase_014614_1, VkglTestCase_014614_2);

#define VkglTestCase_014615_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014615_2 "ul.const.mediump_mat3x4_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014615, VkglTestCase_014615_1, VkglTestCase_014615_2);

#define VkglTestCase_014616_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014616_2 ".mul.const.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014616, VkglTestCase_014616_1, VkglTestCase_014616_2);

#define VkglTestCase_014617_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014617_2 "mul.const.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014617, VkglTestCase_014617_1, VkglTestCase_014617_2);

#define VkglTestCase_014618_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014618_2 "x.mul.const.highp_mat3x4_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014618, VkglTestCase_014618_1, VkglTestCase_014618_2);

#define VkglTestCase_014619_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014619_2 ".mul.const.highp_mat3x4_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014619, VkglTestCase_014619_1, VkglTestCase_014619_2);

#define VkglTestCase_014620_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014620_2 "x.mul.const.highp_vec4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014620, VkglTestCase_014620_1, VkglTestCase_014620_2);

#define VkglTestCase_014621_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014621_2 ".mul.const.highp_vec4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014621, VkglTestCase_014621_1, VkglTestCase_014621_2);

#define VkglTestCase_014622_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014622_2 ".mul.const.highp_mat3x4_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014622, VkglTestCase_014622_1, VkglTestCase_014622_2);

#define VkglTestCase_014623_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014623_2 "mul.const.highp_mat3x4_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014623, VkglTestCase_014623_1, VkglTestCase_014623_2);

#define VkglTestCase_014624_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014624_2 "x.mul.const.highp_mat3x4_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014624, VkglTestCase_014624_1, VkglTestCase_014624_2);

#define VkglTestCase_014625_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014625_2 ".mul.const.highp_mat3x4_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014625, VkglTestCase_014625_1, VkglTestCase_014625_2);

#define VkglTestCase_014626_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014626_2 ".mul.const.highp_mat3x4_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014626, VkglTestCase_014626_1, VkglTestCase_014626_2);

#define VkglTestCase_014627_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014627_2 "mul.const.highp_mat3x4_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014627, VkglTestCase_014627_1, VkglTestCase_014627_2);

#define VkglTestCase_014628_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014628_2 "x.mul.const.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014628, VkglTestCase_014628_1, VkglTestCase_014628_2);

#define VkglTestCase_014629_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014629_2 ".mul.const.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014629, VkglTestCase_014629_1, VkglTestCase_014629_2);

#define VkglTestCase_014630_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014630_2 "x.mul.const.lowp_mat4x2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014630, VkglTestCase_014630_1, VkglTestCase_014630_2);

#define VkglTestCase_014631_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014631_2 ".mul.const.lowp_mat4x2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014631, VkglTestCase_014631_1, VkglTestCase_014631_2);

#define VkglTestCase_014632_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014632_2 "x.mul.const.lowp_vec2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014632, VkglTestCase_014632_1, VkglTestCase_014632_2);

#define VkglTestCase_014633_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014633_2 ".mul.const.lowp_vec2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014633, VkglTestCase_014633_1, VkglTestCase_014633_2);

#define VkglTestCase_014634_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014634_2 ".mul.const.lowp_mat4x2_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014634, VkglTestCase_014634_1, VkglTestCase_014634_2);

#define VkglTestCase_014635_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014635_2 "mul.const.lowp_mat4x2_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014635, VkglTestCase_014635_1, VkglTestCase_014635_2);

#define VkglTestCase_014636_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014636_2 ".mul.const.lowp_mat4x2_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014636, VkglTestCase_014636_1, VkglTestCase_014636_2);

#define VkglTestCase_014637_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014637_2 "mul.const.lowp_mat4x2_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014637, VkglTestCase_014637_1, VkglTestCase_014637_2);

#define VkglTestCase_014638_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014638_2 "x.mul.const.lowp_mat4x2_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014638, VkglTestCase_014638_1, VkglTestCase_014638_2);

#define VkglTestCase_014639_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014639_2 ".mul.const.lowp_mat4x2_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014639, VkglTestCase_014639_1, VkglTestCase_014639_2);

#define VkglTestCase_014640_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014640_2 "mul.const.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014640, VkglTestCase_014640_1, VkglTestCase_014640_2);

#define VkglTestCase_014641_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014641_2 "ul.const.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014641, VkglTestCase_014641_1, VkglTestCase_014641_2);

#define VkglTestCase_014642_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014642_2 ".mul.const.mediump_mat4x2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014642, VkglTestCase_014642_1, VkglTestCase_014642_2);

#define VkglTestCase_014643_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014643_2 "mul.const.mediump_mat4x2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014643, VkglTestCase_014643_1, VkglTestCase_014643_2);

#define VkglTestCase_014644_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014644_2 ".mul.const.mediump_vec2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014644, VkglTestCase_014644_1, VkglTestCase_014644_2);

#define VkglTestCase_014645_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014645_2 "mul.const.mediump_vec2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014645, VkglTestCase_014645_1, VkglTestCase_014645_2);

#define VkglTestCase_014646_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014646_2 "mul.const.mediump_mat4x2_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014646, VkglTestCase_014646_1, VkglTestCase_014646_2);

#define VkglTestCase_014647_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014647_2 "ul.const.mediump_mat4x2_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014647, VkglTestCase_014647_1, VkglTestCase_014647_2);

#define VkglTestCase_014648_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014648_2 "mul.const.mediump_mat4x2_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014648, VkglTestCase_014648_1, VkglTestCase_014648_2);

#define VkglTestCase_014649_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014649_2 "ul.const.mediump_mat4x2_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014649, VkglTestCase_014649_1, VkglTestCase_014649_2);

#define VkglTestCase_014650_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014650_2 ".mul.const.mediump_mat4x2_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014650, VkglTestCase_014650_1, VkglTestCase_014650_2);

#define VkglTestCase_014651_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014651_2 "mul.const.mediump_mat4x2_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014651, VkglTestCase_014651_1, VkglTestCase_014651_2);

#define VkglTestCase_014652_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014652_2 ".mul.const.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014652, VkglTestCase_014652_1, VkglTestCase_014652_2);

#define VkglTestCase_014653_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014653_2 "mul.const.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014653, VkglTestCase_014653_1, VkglTestCase_014653_2);

#define VkglTestCase_014654_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014654_2 "x.mul.const.highp_mat4x2_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014654, VkglTestCase_014654_1, VkglTestCase_014654_2);

#define VkglTestCase_014655_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014655_2 ".mul.const.highp_mat4x2_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014655, VkglTestCase_014655_1, VkglTestCase_014655_2);

#define VkglTestCase_014656_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014656_2 "x.mul.const.highp_vec2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014656, VkglTestCase_014656_1, VkglTestCase_014656_2);

#define VkglTestCase_014657_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014657_2 ".mul.const.highp_vec2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014657, VkglTestCase_014657_1, VkglTestCase_014657_2);

#define VkglTestCase_014658_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014658_2 ".mul.const.highp_mat4x2_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014658, VkglTestCase_014658_1, VkglTestCase_014658_2);

#define VkglTestCase_014659_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014659_2 "mul.const.highp_mat4x2_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014659, VkglTestCase_014659_1, VkglTestCase_014659_2);

#define VkglTestCase_014660_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014660_2 ".mul.const.highp_mat4x2_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014660, VkglTestCase_014660_1, VkglTestCase_014660_2);

#define VkglTestCase_014661_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014661_2 "mul.const.highp_mat4x2_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014661, VkglTestCase_014661_1, VkglTestCase_014661_2);

#define VkglTestCase_014662_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014662_2 "x.mul.const.highp_mat4x2_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014662, VkglTestCase_014662_1, VkglTestCase_014662_2);

#define VkglTestCase_014663_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014663_2 ".mul.const.highp_mat4x2_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014663, VkglTestCase_014663_1, VkglTestCase_014663_2);

#define VkglTestCase_014664_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014664_2 "x.mul.const.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014664, VkglTestCase_014664_1, VkglTestCase_014664_2);

#define VkglTestCase_014665_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014665_2 ".mul.const.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014665, VkglTestCase_014665_1, VkglTestCase_014665_2);

#define VkglTestCase_014666_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014666_2 "x.mul.const.lowp_mat4x3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014666, VkglTestCase_014666_1, VkglTestCase_014666_2);

#define VkglTestCase_014667_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014667_2 ".mul.const.lowp_mat4x3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014667, VkglTestCase_014667_1, VkglTestCase_014667_2);

#define VkglTestCase_014668_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014668_2 "x.mul.const.lowp_vec3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014668, VkglTestCase_014668_1, VkglTestCase_014668_2);

#define VkglTestCase_014669_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014669_2 ".mul.const.lowp_vec3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014669, VkglTestCase_014669_1, VkglTestCase_014669_2);

#define VkglTestCase_014670_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014670_2 ".mul.const.lowp_mat4x3_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014670, VkglTestCase_014670_1, VkglTestCase_014670_2);

#define VkglTestCase_014671_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014671_2 "mul.const.lowp_mat4x3_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014671, VkglTestCase_014671_1, VkglTestCase_014671_2);

#define VkglTestCase_014672_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014672_2 ".mul.const.lowp_mat4x3_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014672, VkglTestCase_014672_1, VkglTestCase_014672_2);

#define VkglTestCase_014673_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014673_2 "mul.const.lowp_mat4x3_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014673, VkglTestCase_014673_1, VkglTestCase_014673_2);

#define VkglTestCase_014674_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014674_2 "x.mul.const.lowp_mat4x3_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014674, VkglTestCase_014674_1, VkglTestCase_014674_2);

#define VkglTestCase_014675_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014675_2 ".mul.const.lowp_mat4x3_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014675, VkglTestCase_014675_1, VkglTestCase_014675_2);

#define VkglTestCase_014676_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014676_2 "mul.const.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014676, VkglTestCase_014676_1, VkglTestCase_014676_2);

#define VkglTestCase_014677_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014677_2 "ul.const.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014677, VkglTestCase_014677_1, VkglTestCase_014677_2);

#define VkglTestCase_014678_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014678_2 ".mul.const.mediump_mat4x3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014678, VkglTestCase_014678_1, VkglTestCase_014678_2);

#define VkglTestCase_014679_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014679_2 "mul.const.mediump_mat4x3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014679, VkglTestCase_014679_1, VkglTestCase_014679_2);

#define VkglTestCase_014680_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014680_2 ".mul.const.mediump_vec3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014680, VkglTestCase_014680_1, VkglTestCase_014680_2);

#define VkglTestCase_014681_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014681_2 "mul.const.mediump_vec3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014681, VkglTestCase_014681_1, VkglTestCase_014681_2);

#define VkglTestCase_014682_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014682_2 "mul.const.mediump_mat4x3_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014682, VkglTestCase_014682_1, VkglTestCase_014682_2);

#define VkglTestCase_014683_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014683_2 "ul.const.mediump_mat4x3_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014683, VkglTestCase_014683_1, VkglTestCase_014683_2);

#define VkglTestCase_014684_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014684_2 "mul.const.mediump_mat4x3_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014684, VkglTestCase_014684_1, VkglTestCase_014684_2);

#define VkglTestCase_014685_1 "dEQP-GLES3.functional.shaders.matrix.m"
#define VkglTestCase_014685_2 "ul.const.mediump_mat4x3_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014685, VkglTestCase_014685_1, VkglTestCase_014685_2);

#define VkglTestCase_014686_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014686_2 ".mul.const.mediump_mat4x3_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014686, VkglTestCase_014686_1, VkglTestCase_014686_2);

#define VkglTestCase_014687_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014687_2 "mul.const.mediump_mat4x3_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014687, VkglTestCase_014687_1, VkglTestCase_014687_2);

#define VkglTestCase_014688_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014688_2 ".mul.const.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014688, VkglTestCase_014688_1, VkglTestCase_014688_2);

#define VkglTestCase_014689_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014689_2 "mul.const.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014689, VkglTestCase_014689_1, VkglTestCase_014689_2);

#define VkglTestCase_014690_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014690_2 "x.mul.const.highp_mat4x3_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014690, VkglTestCase_014690_1, VkglTestCase_014690_2);

#define VkglTestCase_014691_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014691_2 ".mul.const.highp_mat4x3_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014691, VkglTestCase_014691_1, VkglTestCase_014691_2);

#define VkglTestCase_014692_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014692_2 "x.mul.const.highp_vec3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014692, VkglTestCase_014692_1, VkglTestCase_014692_2);

#define VkglTestCase_014693_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014693_2 ".mul.const.highp_vec3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014693, VkglTestCase_014693_1, VkglTestCase_014693_2);

#define VkglTestCase_014694_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014694_2 ".mul.const.highp_mat4x3_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014694, VkglTestCase_014694_1, VkglTestCase_014694_2);

#define VkglTestCase_014695_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014695_2 "mul.const.highp_mat4x3_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014695, VkglTestCase_014695_1, VkglTestCase_014695_2);

#define VkglTestCase_014696_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014696_2 ".mul.const.highp_mat4x3_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014696, VkglTestCase_014696_1, VkglTestCase_014696_2);

#define VkglTestCase_014697_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014697_2 "mul.const.highp_mat4x3_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014697, VkglTestCase_014697_1, VkglTestCase_014697_2);

#define VkglTestCase_014698_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014698_2 "x.mul.const.highp_mat4x3_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014698, VkglTestCase_014698_1, VkglTestCase_014698_2);

#define VkglTestCase_014699_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014699_2 ".mul.const.highp_mat4x3_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014699, VkglTestCase_014699_1, VkglTestCase_014699_2);

#define VkglTestCase_014700_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014700_2 "ix.mul.const.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014700, VkglTestCase_014700_1, VkglTestCase_014700_2);

#define VkglTestCase_014701_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014701_2 "x.mul.const.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014701, VkglTestCase_014701_1, VkglTestCase_014701_2);

#define VkglTestCase_014702_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014702_2 "ix.mul.const.lowp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014702, VkglTestCase_014702_1, VkglTestCase_014702_2);

#define VkglTestCase_014703_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014703_2 "x.mul.const.lowp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014703, VkglTestCase_014703_1, VkglTestCase_014703_2);

#define VkglTestCase_014704_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014704_2 "ix.mul.const.lowp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014704, VkglTestCase_014704_1, VkglTestCase_014704_2);

#define VkglTestCase_014705_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014705_2 "x.mul.const.lowp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014705, VkglTestCase_014705_1, VkglTestCase_014705_2);

#define VkglTestCase_014706_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014706_2 "x.mul.const.lowp_mat4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014706, VkglTestCase_014706_1, VkglTestCase_014706_2);

#define VkglTestCase_014707_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014707_2 ".mul.const.lowp_mat4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014707, VkglTestCase_014707_1, VkglTestCase_014707_2);

#define VkglTestCase_014708_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014708_2 "x.mul.const.lowp_mat4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014708, VkglTestCase_014708_1, VkglTestCase_014708_2);

#define VkglTestCase_014709_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014709_2 ".mul.const.lowp_mat4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014709, VkglTestCase_014709_1, VkglTestCase_014709_2);

#define VkglTestCase_014710_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014710_2 "ix.mul.const.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014710, VkglTestCase_014710_1, VkglTestCase_014710_2);

#define VkglTestCase_014711_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014711_2 "x.mul.const.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014711, VkglTestCase_014711_1, VkglTestCase_014711_2);

#define VkglTestCase_014712_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014712_2 ".mul.const.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014712, VkglTestCase_014712_1, VkglTestCase_014712_2);

#define VkglTestCase_014713_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014713_2 "mul.const.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014713, VkglTestCase_014713_1, VkglTestCase_014713_2);

#define VkglTestCase_014714_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014714_2 "x.mul.const.mediump_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014714, VkglTestCase_014714_1, VkglTestCase_014714_2);

#define VkglTestCase_014715_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014715_2 ".mul.const.mediump_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014715, VkglTestCase_014715_1, VkglTestCase_014715_2);

#define VkglTestCase_014716_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014716_2 "x.mul.const.mediump_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014716, VkglTestCase_014716_1, VkglTestCase_014716_2);

#define VkglTestCase_014717_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014717_2 ".mul.const.mediump_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014717, VkglTestCase_014717_1, VkglTestCase_014717_2);

#define VkglTestCase_014718_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014718_2 ".mul.const.mediump_mat4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014718, VkglTestCase_014718_1, VkglTestCase_014718_2);

#define VkglTestCase_014719_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014719_2 "mul.const.mediump_mat4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014719, VkglTestCase_014719_1, VkglTestCase_014719_2);

#define VkglTestCase_014720_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014720_2 ".mul.const.mediump_mat4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014720, VkglTestCase_014720_1, VkglTestCase_014720_2);

#define VkglTestCase_014721_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_014721_2 "mul.const.mediump_mat4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014721, VkglTestCase_014721_1, VkglTestCase_014721_2);

#define VkglTestCase_014722_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014722_2 "x.mul.const.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014722, VkglTestCase_014722_1, VkglTestCase_014722_2);

#define VkglTestCase_014723_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014723_2 ".mul.const.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014723, VkglTestCase_014723_1, VkglTestCase_014723_2);

#define VkglTestCase_014724_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014724_2 "x.mul.const.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014724, VkglTestCase_014724_1, VkglTestCase_014724_2);

#define VkglTestCase_014725_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014725_2 ".mul.const.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014725, VkglTestCase_014725_1, VkglTestCase_014725_2);

#define VkglTestCase_014726_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014726_2 "ix.mul.const.highp_mat4_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014726, VkglTestCase_014726_1, VkglTestCase_014726_2);

#define VkglTestCase_014727_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014727_2 "x.mul.const.highp_mat4_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014727, VkglTestCase_014727_1, VkglTestCase_014727_2);

#define VkglTestCase_014728_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014728_2 "ix.mul.const.highp_vec4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014728, VkglTestCase_014728_1, VkglTestCase_014728_2);

#define VkglTestCase_014729_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014729_2 "x.mul.const.highp_vec4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014729, VkglTestCase_014729_1, VkglTestCase_014729_2);

#define VkglTestCase_014730_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014730_2 "x.mul.const.highp_mat4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014730, VkglTestCase_014730_1, VkglTestCase_014730_2);

#define VkglTestCase_014731_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014731_2 ".mul.const.highp_mat4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014731, VkglTestCase_014731_1, VkglTestCase_014731_2);

#define VkglTestCase_014732_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014732_2 "x.mul.const.highp_mat4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014732, VkglTestCase_014732_1, VkglTestCase_014732_2);

#define VkglTestCase_014733_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_014733_2 ".mul.const.highp_mat4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014733, VkglTestCase_014733_1, VkglTestCase_014733_2);

#define VkglTestCase_014734_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_014734_2 "ix.mul.const.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014734, VkglTestCase_014734_1, VkglTestCase_014734_2);

#define VkglTestCase_014735_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_014735_2 "x.mul.const.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30015TestSuite, TestCase_014735, VkglTestCase_014735_1, VkglTestCase_014735_2);
