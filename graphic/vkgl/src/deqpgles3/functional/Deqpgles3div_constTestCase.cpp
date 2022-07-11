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
#include "../ActsDeqpgles30016TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_015384_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015384_2 "ix.div.const.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015384, VkglTestCase_015384_1, VkglTestCase_015384_2);

#define VkglTestCase_015385_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015385_2 "x.div.const.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015385, VkglTestCase_015385_1, VkglTestCase_015385_2);

#define VkglTestCase_015386_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015386_2 "ix.div.const.lowp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015386, VkglTestCase_015386_1, VkglTestCase_015386_2);

#define VkglTestCase_015387_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015387_2 "x.div.const.lowp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015387, VkglTestCase_015387_1, VkglTestCase_015387_2);

#define VkglTestCase_015388_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015388_2 ".div.const.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015388, VkglTestCase_015388_1, VkglTestCase_015388_2);

#define VkglTestCase_015389_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015389_2 "div.const.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015389, VkglTestCase_015389_1, VkglTestCase_015389_2);

#define VkglTestCase_015390_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015390_2 "x.div.const.mediump_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015390, VkglTestCase_015390_1, VkglTestCase_015390_2);

#define VkglTestCase_015391_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015391_2 ".div.const.mediump_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015391, VkglTestCase_015391_1, VkglTestCase_015391_2);

#define VkglTestCase_015392_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015392_2 "x.div.const.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015392, VkglTestCase_015392_1, VkglTestCase_015392_2);

#define VkglTestCase_015393_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015393_2 ".div.const.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015393, VkglTestCase_015393_1, VkglTestCase_015393_2);

#define VkglTestCase_015394_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015394_2 "ix.div.const.highp_mat2_mat2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015394, VkglTestCase_015394_1, VkglTestCase_015394_2);

#define VkglTestCase_015395_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015395_2 "x.div.const.highp_mat2_mat2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015395, VkglTestCase_015395_1, VkglTestCase_015395_2);

#define VkglTestCase_015396_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015396_2 "x.div.const.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015396, VkglTestCase_015396_1, VkglTestCase_015396_2);

#define VkglTestCase_015397_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015397_2 ".div.const.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015397, VkglTestCase_015397_1, VkglTestCase_015397_2);

#define VkglTestCase_015398_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015398_2 ".div.const.lowp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015398, VkglTestCase_015398_1, VkglTestCase_015398_2);

#define VkglTestCase_015399_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015399_2 "div.const.lowp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015399, VkglTestCase_015399_1, VkglTestCase_015399_2);

#define VkglTestCase_015400_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015400_2 "div.const.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015400, VkglTestCase_015400_1, VkglTestCase_015400_2);

#define VkglTestCase_015401_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015401_2 "iv.const.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015401, VkglTestCase_015401_1, VkglTestCase_015401_2);

#define VkglTestCase_015402_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015402_2 "div.const.mediump_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015402, VkglTestCase_015402_1, VkglTestCase_015402_2);

#define VkglTestCase_015403_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015403_2 "iv.const.mediump_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015403, VkglTestCase_015403_1, VkglTestCase_015403_2);

#define VkglTestCase_015404_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015404_2 ".div.const.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015404, VkglTestCase_015404_1, VkglTestCase_015404_2);

#define VkglTestCase_015405_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015405_2 "div.const.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015405, VkglTestCase_015405_1, VkglTestCase_015405_2);

#define VkglTestCase_015406_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015406_2 ".div.const.highp_mat2x3_mat2x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015406, VkglTestCase_015406_1, VkglTestCase_015406_2);

#define VkglTestCase_015407_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015407_2 "div.const.highp_mat2x3_mat2x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015407, VkglTestCase_015407_1, VkglTestCase_015407_2);

#define VkglTestCase_015408_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015408_2 "x.div.const.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015408, VkglTestCase_015408_1, VkglTestCase_015408_2);

#define VkglTestCase_015409_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015409_2 ".div.const.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015409, VkglTestCase_015409_1, VkglTestCase_015409_2);

#define VkglTestCase_015410_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015410_2 ".div.const.lowp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015410, VkglTestCase_015410_1, VkglTestCase_015410_2);

#define VkglTestCase_015411_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015411_2 "div.const.lowp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015411, VkglTestCase_015411_1, VkglTestCase_015411_2);

#define VkglTestCase_015412_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015412_2 "div.const.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015412, VkglTestCase_015412_1, VkglTestCase_015412_2);

#define VkglTestCase_015413_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015413_2 "iv.const.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015413, VkglTestCase_015413_1, VkglTestCase_015413_2);

#define VkglTestCase_015414_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015414_2 "div.const.mediump_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015414, VkglTestCase_015414_1, VkglTestCase_015414_2);

#define VkglTestCase_015415_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015415_2 "iv.const.mediump_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015415, VkglTestCase_015415_1, VkglTestCase_015415_2);

#define VkglTestCase_015416_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015416_2 ".div.const.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015416, VkglTestCase_015416_1, VkglTestCase_015416_2);

#define VkglTestCase_015417_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015417_2 "div.const.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015417, VkglTestCase_015417_1, VkglTestCase_015417_2);

#define VkglTestCase_015418_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015418_2 ".div.const.highp_mat2x4_mat2x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015418, VkglTestCase_015418_1, VkglTestCase_015418_2);

#define VkglTestCase_015419_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015419_2 "div.const.highp_mat2x4_mat2x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015419, VkglTestCase_015419_1, VkglTestCase_015419_2);

#define VkglTestCase_015420_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015420_2 "x.div.const.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015420, VkglTestCase_015420_1, VkglTestCase_015420_2);

#define VkglTestCase_015421_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015421_2 ".div.const.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015421, VkglTestCase_015421_1, VkglTestCase_015421_2);

#define VkglTestCase_015422_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015422_2 ".div.const.lowp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015422, VkglTestCase_015422_1, VkglTestCase_015422_2);

#define VkglTestCase_015423_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015423_2 "div.const.lowp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015423, VkglTestCase_015423_1, VkglTestCase_015423_2);

#define VkglTestCase_015424_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015424_2 "div.const.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015424, VkglTestCase_015424_1, VkglTestCase_015424_2);

#define VkglTestCase_015425_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015425_2 "iv.const.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015425, VkglTestCase_015425_1, VkglTestCase_015425_2);

#define VkglTestCase_015426_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015426_2 "div.const.mediump_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015426, VkglTestCase_015426_1, VkglTestCase_015426_2);

#define VkglTestCase_015427_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015427_2 "iv.const.mediump_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015427, VkglTestCase_015427_1, VkglTestCase_015427_2);

#define VkglTestCase_015428_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015428_2 ".div.const.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015428, VkglTestCase_015428_1, VkglTestCase_015428_2);

#define VkglTestCase_015429_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015429_2 "div.const.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015429, VkglTestCase_015429_1, VkglTestCase_015429_2);

#define VkglTestCase_015430_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015430_2 ".div.const.highp_mat3x2_mat3x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015430, VkglTestCase_015430_1, VkglTestCase_015430_2);

#define VkglTestCase_015431_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015431_2 "div.const.highp_mat3x2_mat3x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015431, VkglTestCase_015431_1, VkglTestCase_015431_2);

#define VkglTestCase_015432_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015432_2 "ix.div.const.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015432, VkglTestCase_015432_1, VkglTestCase_015432_2);

#define VkglTestCase_015433_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015433_2 "x.div.const.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015433, VkglTestCase_015433_1, VkglTestCase_015433_2);

#define VkglTestCase_015434_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015434_2 "ix.div.const.lowp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015434, VkglTestCase_015434_1, VkglTestCase_015434_2);

#define VkglTestCase_015435_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015435_2 "x.div.const.lowp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015435, VkglTestCase_015435_1, VkglTestCase_015435_2);

#define VkglTestCase_015436_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015436_2 ".div.const.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015436, VkglTestCase_015436_1, VkglTestCase_015436_2);

#define VkglTestCase_015437_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015437_2 "div.const.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015437, VkglTestCase_015437_1, VkglTestCase_015437_2);

#define VkglTestCase_015438_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015438_2 "x.div.const.mediump_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015438, VkglTestCase_015438_1, VkglTestCase_015438_2);

#define VkglTestCase_015439_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015439_2 ".div.const.mediump_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015439, VkglTestCase_015439_1, VkglTestCase_015439_2);

#define VkglTestCase_015440_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015440_2 "x.div.const.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015440, VkglTestCase_015440_1, VkglTestCase_015440_2);

#define VkglTestCase_015441_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015441_2 ".div.const.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015441, VkglTestCase_015441_1, VkglTestCase_015441_2);

#define VkglTestCase_015442_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015442_2 "ix.div.const.highp_mat3_mat3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015442, VkglTestCase_015442_1, VkglTestCase_015442_2);

#define VkglTestCase_015443_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015443_2 "x.div.const.highp_mat3_mat3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015443, VkglTestCase_015443_1, VkglTestCase_015443_2);

#define VkglTestCase_015444_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015444_2 "x.div.const.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015444, VkglTestCase_015444_1, VkglTestCase_015444_2);

#define VkglTestCase_015445_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015445_2 ".div.const.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015445, VkglTestCase_015445_1, VkglTestCase_015445_2);

#define VkglTestCase_015446_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015446_2 ".div.const.lowp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015446, VkglTestCase_015446_1, VkglTestCase_015446_2);

#define VkglTestCase_015447_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015447_2 "div.const.lowp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015447, VkglTestCase_015447_1, VkglTestCase_015447_2);

#define VkglTestCase_015448_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015448_2 "div.const.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015448, VkglTestCase_015448_1, VkglTestCase_015448_2);

#define VkglTestCase_015449_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015449_2 "iv.const.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015449, VkglTestCase_015449_1, VkglTestCase_015449_2);

#define VkglTestCase_015450_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015450_2 "div.const.mediump_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015450, VkglTestCase_015450_1, VkglTestCase_015450_2);

#define VkglTestCase_015451_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015451_2 "iv.const.mediump_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015451, VkglTestCase_015451_1, VkglTestCase_015451_2);

#define VkglTestCase_015452_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015452_2 ".div.const.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015452, VkglTestCase_015452_1, VkglTestCase_015452_2);

#define VkglTestCase_015453_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015453_2 "div.const.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015453, VkglTestCase_015453_1, VkglTestCase_015453_2);

#define VkglTestCase_015454_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015454_2 ".div.const.highp_mat3x4_mat3x4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015454, VkglTestCase_015454_1, VkglTestCase_015454_2);

#define VkglTestCase_015455_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015455_2 "div.const.highp_mat3x4_mat3x4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015455, VkglTestCase_015455_1, VkglTestCase_015455_2);

#define VkglTestCase_015456_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015456_2 "x.div.const.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015456, VkglTestCase_015456_1, VkglTestCase_015456_2);

#define VkglTestCase_015457_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015457_2 ".div.const.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015457, VkglTestCase_015457_1, VkglTestCase_015457_2);

#define VkglTestCase_015458_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015458_2 ".div.const.lowp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015458, VkglTestCase_015458_1, VkglTestCase_015458_2);

#define VkglTestCase_015459_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015459_2 "div.const.lowp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015459, VkglTestCase_015459_1, VkglTestCase_015459_2);

#define VkglTestCase_015460_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015460_2 "div.const.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015460, VkglTestCase_015460_1, VkglTestCase_015460_2);

#define VkglTestCase_015461_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015461_2 "iv.const.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015461, VkglTestCase_015461_1, VkglTestCase_015461_2);

#define VkglTestCase_015462_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015462_2 "div.const.mediump_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015462, VkglTestCase_015462_1, VkglTestCase_015462_2);

#define VkglTestCase_015463_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015463_2 "iv.const.mediump_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015463, VkglTestCase_015463_1, VkglTestCase_015463_2);

#define VkglTestCase_015464_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015464_2 ".div.const.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015464, VkglTestCase_015464_1, VkglTestCase_015464_2);

#define VkglTestCase_015465_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015465_2 "div.const.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015465, VkglTestCase_015465_1, VkglTestCase_015465_2);

#define VkglTestCase_015466_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015466_2 ".div.const.highp_mat4x2_mat4x2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015466, VkglTestCase_015466_1, VkglTestCase_015466_2);

#define VkglTestCase_015467_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015467_2 "div.const.highp_mat4x2_mat4x2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015467, VkglTestCase_015467_1, VkglTestCase_015467_2);

#define VkglTestCase_015468_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015468_2 "x.div.const.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015468, VkglTestCase_015468_1, VkglTestCase_015468_2);

#define VkglTestCase_015469_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015469_2 ".div.const.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015469, VkglTestCase_015469_1, VkglTestCase_015469_2);

#define VkglTestCase_015470_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015470_2 ".div.const.lowp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015470, VkglTestCase_015470_1, VkglTestCase_015470_2);

#define VkglTestCase_015471_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015471_2 "div.const.lowp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015471, VkglTestCase_015471_1, VkglTestCase_015471_2);

#define VkglTestCase_015472_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015472_2 "div.const.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015472, VkglTestCase_015472_1, VkglTestCase_015472_2);

#define VkglTestCase_015473_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015473_2 "iv.const.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015473, VkglTestCase_015473_1, VkglTestCase_015473_2);

#define VkglTestCase_015474_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015474_2 "div.const.mediump_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015474, VkglTestCase_015474_1, VkglTestCase_015474_2);

#define VkglTestCase_015475_1 "dEQP-GLES3.functional.shaders.matrix.d"
#define VkglTestCase_015475_2 "iv.const.mediump_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015475, VkglTestCase_015475_1, VkglTestCase_015475_2);

#define VkglTestCase_015476_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015476_2 ".div.const.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015476, VkglTestCase_015476_1, VkglTestCase_015476_2);

#define VkglTestCase_015477_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015477_2 "div.const.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015477, VkglTestCase_015477_1, VkglTestCase_015477_2);

#define VkglTestCase_015478_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015478_2 ".div.const.highp_mat4x3_mat4x3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015478, VkglTestCase_015478_1, VkglTestCase_015478_2);

#define VkglTestCase_015479_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015479_2 "div.const.highp_mat4x3_mat4x3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015479, VkglTestCase_015479_1, VkglTestCase_015479_2);

#define VkglTestCase_015480_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015480_2 "ix.div.const.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015480, VkglTestCase_015480_1, VkglTestCase_015480_2);

#define VkglTestCase_015481_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015481_2 "x.div.const.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015481, VkglTestCase_015481_1, VkglTestCase_015481_2);

#define VkglTestCase_015482_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015482_2 "ix.div.const.lowp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015482, VkglTestCase_015482_1, VkglTestCase_015482_2);

#define VkglTestCase_015483_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015483_2 "x.div.const.lowp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015483, VkglTestCase_015483_1, VkglTestCase_015483_2);

#define VkglTestCase_015484_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015484_2 ".div.const.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015484, VkglTestCase_015484_1, VkglTestCase_015484_2);

#define VkglTestCase_015485_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015485_2 "div.const.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015485, VkglTestCase_015485_1, VkglTestCase_015485_2);

#define VkglTestCase_015486_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015486_2 "x.div.const.mediump_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015486, VkglTestCase_015486_1, VkglTestCase_015486_2);

#define VkglTestCase_015487_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015487_2 ".div.const.mediump_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015487, VkglTestCase_015487_1, VkglTestCase_015487_2);

#define VkglTestCase_015488_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015488_2 "x.div.const.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015488, VkglTestCase_015488_1, VkglTestCase_015488_2);

#define VkglTestCase_015489_1 "dEQP-GLES3.functional.shaders.matrix"
#define VkglTestCase_015489_2 ".div.const.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015489, VkglTestCase_015489_1, VkglTestCase_015489_2);

#define VkglTestCase_015490_1 "dEQP-GLES3.functional.shaders.matr"
#define VkglTestCase_015490_2 "ix.div.const.highp_mat4_mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015490, VkglTestCase_015490_1, VkglTestCase_015490_2);

#define VkglTestCase_015491_1 "dEQP-GLES3.functional.shaders.matri"
#define VkglTestCase_015491_2 "x.div.const.highp_mat4_mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015491, VkglTestCase_015491_1, VkglTestCase_015491_2);
