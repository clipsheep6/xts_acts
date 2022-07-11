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

#define VkglTestCase_008384_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008384_2 ".binary_operator.mul.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008384, VkglTestCase_008384_1, VkglTestCase_008384_2);

#define VkglTestCase_008385_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008385_2 "binary_operator.mul.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008385, VkglTestCase_008385_1, VkglTestCase_008385_2);

#define VkglTestCase_008386_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008386_2 "binary_operator.mul.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008386, VkglTestCase_008386_1, VkglTestCase_008386_2);

#define VkglTestCase_008387_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008387_2 "inary_operator.mul.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008387, VkglTestCase_008387_1, VkglTestCase_008387_2);

#define VkglTestCase_008388_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008388_2 ".binary_operator.mul.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008388, VkglTestCase_008388_1, VkglTestCase_008388_2);

#define VkglTestCase_008389_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008389_2 "binary_operator.mul.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008389, VkglTestCase_008389_1, VkglTestCase_008389_2);

#define VkglTestCase_008390_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008390_2 "r.binary_operator.mul.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008390, VkglTestCase_008390_1, VkglTestCase_008390_2);

#define VkglTestCase_008391_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008391_2 ".binary_operator.mul.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008391, VkglTestCase_008391_1, VkglTestCase_008391_2);

#define VkglTestCase_008392_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008392_2 "binary_operator.mul.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008392, VkglTestCase_008392_1, VkglTestCase_008392_2);

#define VkglTestCase_008393_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008393_2 "inary_operator.mul.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008393, VkglTestCase_008393_1, VkglTestCase_008393_2);

#define VkglTestCase_008394_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008394_2 ".binary_operator.mul.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008394, VkglTestCase_008394_1, VkglTestCase_008394_2);

#define VkglTestCase_008395_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008395_2 "binary_operator.mul.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008395, VkglTestCase_008395_1, VkglTestCase_008395_2);

#define VkglTestCase_008396_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008396_2 "r.binary_operator.mul.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008396, VkglTestCase_008396_1, VkglTestCase_008396_2);

#define VkglTestCase_008397_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008397_2 ".binary_operator.mul.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008397, VkglTestCase_008397_1, VkglTestCase_008397_2);

#define VkglTestCase_008398_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008398_2 "binary_operator.mul.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008398, VkglTestCase_008398_1, VkglTestCase_008398_2);

#define VkglTestCase_008399_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008399_2 "inary_operator.mul.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008399, VkglTestCase_008399_1, VkglTestCase_008399_2);

#define VkglTestCase_008400_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008400_2 ".binary_operator.mul.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008400, VkglTestCase_008400_1, VkglTestCase_008400_2);

#define VkglTestCase_008401_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008401_2 "binary_operator.mul.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008401, VkglTestCase_008401_1, VkglTestCase_008401_2);

#define VkglTestCase_008402_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008402_2 "r.binary_operator.mul.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008402, VkglTestCase_008402_1, VkglTestCase_008402_2);

#define VkglTestCase_008403_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008403_2 ".binary_operator.mul.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008403, VkglTestCase_008403_1, VkglTestCase_008403_2);

#define VkglTestCase_008404_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008404_2 "binary_operator.mul.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008404, VkglTestCase_008404_1, VkglTestCase_008404_2);

#define VkglTestCase_008405_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008405_2 "inary_operator.mul.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008405, VkglTestCase_008405_1, VkglTestCase_008405_2);

#define VkglTestCase_008406_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008406_2 ".binary_operator.mul.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008406, VkglTestCase_008406_1, VkglTestCase_008406_2);

#define VkglTestCase_008407_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008407_2 "binary_operator.mul.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008407, VkglTestCase_008407_1, VkglTestCase_008407_2);

#define VkglTestCase_008408_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008408_2 "r.binary_operator.mul.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008408, VkglTestCase_008408_1, VkglTestCase_008408_2);

#define VkglTestCase_008409_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008409_2 ".binary_operator.mul.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008409, VkglTestCase_008409_1, VkglTestCase_008409_2);

#define VkglTestCase_008410_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008410_2 ".binary_operator.mul.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008410, VkglTestCase_008410_1, VkglTestCase_008410_2);

#define VkglTestCase_008411_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008411_2 "binary_operator.mul.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008411, VkglTestCase_008411_1, VkglTestCase_008411_2);

#define VkglTestCase_008412_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008412_2 ".binary_operator.mul.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008412, VkglTestCase_008412_1, VkglTestCase_008412_2);

#define VkglTestCase_008413_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008413_2 "binary_operator.mul.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008413, VkglTestCase_008413_1, VkglTestCase_008413_2);

#define VkglTestCase_008414_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008414_2 "binary_operator.mul.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008414, VkglTestCase_008414_1, VkglTestCase_008414_2);

#define VkglTestCase_008415_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008415_2 "inary_operator.mul.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008415, VkglTestCase_008415_1, VkglTestCase_008415_2);

#define VkglTestCase_008416_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008416_2 ".binary_operator.mul.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008416, VkglTestCase_008416_1, VkglTestCase_008416_2);

#define VkglTestCase_008417_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008417_2 "binary_operator.mul.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008417, VkglTestCase_008417_1, VkglTestCase_008417_2);

#define VkglTestCase_008418_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008418_2 "binary_operator.mul.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008418, VkglTestCase_008418_1, VkglTestCase_008418_2);

#define VkglTestCase_008419_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008419_2 "inary_operator.mul.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008419, VkglTestCase_008419_1, VkglTestCase_008419_2);

#define VkglTestCase_008420_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008420_2 ".binary_operator.mul.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008420, VkglTestCase_008420_1, VkglTestCase_008420_2);

#define VkglTestCase_008421_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008421_2 "binary_operator.mul.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008421, VkglTestCase_008421_1, VkglTestCase_008421_2);

#define VkglTestCase_008422_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008422_2 "binary_operator.mul.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008422, VkglTestCase_008422_1, VkglTestCase_008422_2);

#define VkglTestCase_008423_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008423_2 "inary_operator.mul.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008423, VkglTestCase_008423_1, VkglTestCase_008423_2);

#define VkglTestCase_008424_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008424_2 "r.binary_operator.mul.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008424, VkglTestCase_008424_1, VkglTestCase_008424_2);

#define VkglTestCase_008425_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008425_2 ".binary_operator.mul.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008425, VkglTestCase_008425_1, VkglTestCase_008425_2);

#define VkglTestCase_008426_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008426_2 ".binary_operator.mul.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008426, VkglTestCase_008426_1, VkglTestCase_008426_2);

#define VkglTestCase_008427_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008427_2 "binary_operator.mul.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008427, VkglTestCase_008427_1, VkglTestCase_008427_2);

#define VkglTestCase_008428_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008428_2 ".binary_operator.mul.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008428, VkglTestCase_008428_1, VkglTestCase_008428_2);

#define VkglTestCase_008429_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008429_2 "binary_operator.mul.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008429, VkglTestCase_008429_1, VkglTestCase_008429_2);

#define VkglTestCase_008430_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008430_2 ".binary_operator.mul.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008430, VkglTestCase_008430_1, VkglTestCase_008430_2);

#define VkglTestCase_008431_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008431_2 "binary_operator.mul.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008431, VkglTestCase_008431_1, VkglTestCase_008431_2);

#define VkglTestCase_008432_1 "dEQP-GLES3.functional.shaders.operato"
#define VkglTestCase_008432_2 "r.binary_operator.mul.lowp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008432, VkglTestCase_008432_1, VkglTestCase_008432_2);

#define VkglTestCase_008433_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008433_2 ".binary_operator.mul.lowp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008433, VkglTestCase_008433_1, VkglTestCase_008433_2);

#define VkglTestCase_008434_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008434_2 "binary_operator.mul.mediump_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008434, VkglTestCase_008434_1, VkglTestCase_008434_2);

#define VkglTestCase_008435_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008435_2 "inary_operator.mul.mediump_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008435, VkglTestCase_008435_1, VkglTestCase_008435_2);

#define VkglTestCase_008436_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008436_2 ".binary_operator.mul.lowp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008436, VkglTestCase_008436_1, VkglTestCase_008436_2);

#define VkglTestCase_008437_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008437_2 "binary_operator.mul.lowp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008437, VkglTestCase_008437_1, VkglTestCase_008437_2);

#define VkglTestCase_008438_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008438_2 "binary_operator.mul.mediump_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008438, VkglTestCase_008438_1, VkglTestCase_008438_2);

#define VkglTestCase_008439_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008439_2 "inary_operator.mul.mediump_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008439, VkglTestCase_008439_1, VkglTestCase_008439_2);

#define VkglTestCase_008440_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008440_2 ".binary_operator.mul.lowp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008440, VkglTestCase_008440_1, VkglTestCase_008440_2);

#define VkglTestCase_008441_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008441_2 "binary_operator.mul.lowp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008441, VkglTestCase_008441_1, VkglTestCase_008441_2);

#define VkglTestCase_008442_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008442_2 "binary_operator.mul.mediump_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008442, VkglTestCase_008442_1, VkglTestCase_008442_2);

#define VkglTestCase_008443_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008443_2 "inary_operator.mul.mediump_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008443, VkglTestCase_008443_1, VkglTestCase_008443_2);

#define VkglTestCase_008444_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008444_2 ".binary_operator.mul.lowp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008444, VkglTestCase_008444_1, VkglTestCase_008444_2);

#define VkglTestCase_008445_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008445_2 "binary_operator.mul.lowp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008445, VkglTestCase_008445_1, VkglTestCase_008445_2);

#define VkglTestCase_008446_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008446_2 "binary_operator.mul.mediump_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008446, VkglTestCase_008446_1, VkglTestCase_008446_2);

#define VkglTestCase_008447_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008447_2 "inary_operator.mul.mediump_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008447, VkglTestCase_008447_1, VkglTestCase_008447_2);

#define VkglTestCase_008448_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008448_2 ".binary_operator.mul.highp_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008448, VkglTestCase_008448_1, VkglTestCase_008448_2);

#define VkglTestCase_008449_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008449_2 "binary_operator.mul.highp_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008449, VkglTestCase_008449_1, VkglTestCase_008449_2);

#define VkglTestCase_008450_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008450_2 ".binary_operator.mul.highp_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008450, VkglTestCase_008450_1, VkglTestCase_008450_2);

#define VkglTestCase_008451_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008451_2 "binary_operator.mul.highp_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008451, VkglTestCase_008451_1, VkglTestCase_008451_2);

#define VkglTestCase_008452_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008452_2 ".binary_operator.mul.highp_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008452, VkglTestCase_008452_1, VkglTestCase_008452_2);

#define VkglTestCase_008453_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008453_2 "binary_operator.mul.highp_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008453, VkglTestCase_008453_1, VkglTestCase_008453_2);

#define VkglTestCase_008454_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_008454_2 ".binary_operator.mul.highp_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008454, VkglTestCase_008454_1, VkglTestCase_008454_2);

#define VkglTestCase_008455_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_008455_2 "binary_operator.mul.highp_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008455, VkglTestCase_008455_1, VkglTestCase_008455_2);

#define VkglTestCase_008456_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008456_2 "inary_operator.mul.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008456, VkglTestCase_008456_1, VkglTestCase_008456_2);

#define VkglTestCase_008457_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008457_2 "nary_operator.mul.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008457, VkglTestCase_008457_1, VkglTestCase_008457_2);

#define VkglTestCase_008458_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008458_2 "ary_operator.mul.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008458, VkglTestCase_008458_1, VkglTestCase_008458_2);

#define VkglTestCase_008459_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008459_2 "ry_operator.mul.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008459, VkglTestCase_008459_1, VkglTestCase_008459_2);

#define VkglTestCase_008460_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008460_2 "nary_operator.mul.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008460, VkglTestCase_008460_1, VkglTestCase_008460_2);

#define VkglTestCase_008461_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008461_2 "ary_operator.mul.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008461, VkglTestCase_008461_1, VkglTestCase_008461_2);

#define VkglTestCase_008462_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008462_2 "inary_operator.mul.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008462, VkglTestCase_008462_1, VkglTestCase_008462_2);

#define VkglTestCase_008463_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008463_2 "nary_operator.mul.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008463, VkglTestCase_008463_1, VkglTestCase_008463_2);

#define VkglTestCase_008464_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008464_2 "ary_operator.mul.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008464, VkglTestCase_008464_1, VkglTestCase_008464_2);

#define VkglTestCase_008465_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008465_2 "ry_operator.mul.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008465, VkglTestCase_008465_1, VkglTestCase_008465_2);

#define VkglTestCase_008466_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008466_2 "nary_operator.mul.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008466, VkglTestCase_008466_1, VkglTestCase_008466_2);

#define VkglTestCase_008467_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008467_2 "ary_operator.mul.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008467, VkglTestCase_008467_1, VkglTestCase_008467_2);

#define VkglTestCase_008468_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008468_2 "inary_operator.mul.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008468, VkglTestCase_008468_1, VkglTestCase_008468_2);

#define VkglTestCase_008469_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008469_2 "nary_operator.mul.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008469, VkglTestCase_008469_1, VkglTestCase_008469_2);

#define VkglTestCase_008470_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008470_2 "ary_operator.mul.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008470, VkglTestCase_008470_1, VkglTestCase_008470_2);

#define VkglTestCase_008471_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008471_2 "ry_operator.mul.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008471, VkglTestCase_008471_1, VkglTestCase_008471_2);

#define VkglTestCase_008472_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008472_2 "nary_operator.mul.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008472, VkglTestCase_008472_1, VkglTestCase_008472_2);

#define VkglTestCase_008473_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008473_2 "ary_operator.mul.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008473, VkglTestCase_008473_1, VkglTestCase_008473_2);

#define VkglTestCase_008474_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008474_2 "inary_operator.mul.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008474, VkglTestCase_008474_1, VkglTestCase_008474_2);

#define VkglTestCase_008475_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008475_2 "nary_operator.mul.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008475, VkglTestCase_008475_1, VkglTestCase_008475_2);

#define VkglTestCase_008476_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008476_2 "nary_operator.mul.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008476, VkglTestCase_008476_1, VkglTestCase_008476_2);

#define VkglTestCase_008477_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008477_2 "ary_operator.mul.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008477, VkglTestCase_008477_1, VkglTestCase_008477_2);

#define VkglTestCase_008478_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008478_2 "inary_operator.mul.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008478, VkglTestCase_008478_1, VkglTestCase_008478_2);

#define VkglTestCase_008479_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008479_2 "nary_operator.mul.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008479, VkglTestCase_008479_1, VkglTestCase_008479_2);

#define VkglTestCase_008480_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008480_2 "nary_operator.mul.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008480, VkglTestCase_008480_1, VkglTestCase_008480_2);

#define VkglTestCase_008481_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008481_2 "ary_operator.mul.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008481, VkglTestCase_008481_1, VkglTestCase_008481_2);

#define VkglTestCase_008482_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008482_2 "inary_operator.mul.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008482, VkglTestCase_008482_1, VkglTestCase_008482_2);

#define VkglTestCase_008483_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008483_2 "nary_operator.mul.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008483, VkglTestCase_008483_1, VkglTestCase_008483_2);

#define VkglTestCase_008484_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008484_2 "nary_operator.mul.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008484, VkglTestCase_008484_1, VkglTestCase_008484_2);

#define VkglTestCase_008485_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008485_2 "ary_operator.mul.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008485, VkglTestCase_008485_1, VkglTestCase_008485_2);

#define VkglTestCase_008486_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008486_2 "inary_operator.mul.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008486, VkglTestCase_008486_1, VkglTestCase_008486_2);

#define VkglTestCase_008487_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008487_2 "nary_operator.mul.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008487, VkglTestCase_008487_1, VkglTestCase_008487_2);

#define VkglTestCase_008488_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008488_2 "inary_operator.mul.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008488, VkglTestCase_008488_1, VkglTestCase_008488_2);

#define VkglTestCase_008489_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008489_2 "nary_operator.mul.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008489, VkglTestCase_008489_1, VkglTestCase_008489_2);

#define VkglTestCase_008490_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008490_2 "inary_operator.mul.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008490, VkglTestCase_008490_1, VkglTestCase_008490_2);

#define VkglTestCase_008491_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008491_2 "nary_operator.mul.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008491, VkglTestCase_008491_1, VkglTestCase_008491_2);

#define VkglTestCase_008492_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008492_2 "inary_operator.mul.lowp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008492, VkglTestCase_008492_1, VkglTestCase_008492_2);

#define VkglTestCase_008493_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008493_2 "nary_operator.mul.lowp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008493, VkglTestCase_008493_1, VkglTestCase_008493_2);

#define VkglTestCase_008494_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008494_2 "ary_operator.mul.mediump_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008494, VkglTestCase_008494_1, VkglTestCase_008494_2);

#define VkglTestCase_008495_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008495_2 "ry_operator.mul.mediump_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008495, VkglTestCase_008495_1, VkglTestCase_008495_2);

#define VkglTestCase_008496_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008496_2 "inary_operator.mul.lowp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008496, VkglTestCase_008496_1, VkglTestCase_008496_2);

#define VkglTestCase_008497_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008497_2 "nary_operator.mul.lowp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008497, VkglTestCase_008497_1, VkglTestCase_008497_2);

#define VkglTestCase_008498_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008498_2 "ary_operator.mul.mediump_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008498, VkglTestCase_008498_1, VkglTestCase_008498_2);

#define VkglTestCase_008499_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008499_2 "ry_operator.mul.mediump_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008499, VkglTestCase_008499_1, VkglTestCase_008499_2);

#define VkglTestCase_008500_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008500_2 "inary_operator.mul.lowp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008500, VkglTestCase_008500_1, VkglTestCase_008500_2);

#define VkglTestCase_008501_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008501_2 "nary_operator.mul.lowp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008501, VkglTestCase_008501_1, VkglTestCase_008501_2);

#define VkglTestCase_008502_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008502_2 "ary_operator.mul.mediump_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008502, VkglTestCase_008502_1, VkglTestCase_008502_2);

#define VkglTestCase_008503_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008503_2 "ry_operator.mul.mediump_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008503, VkglTestCase_008503_1, VkglTestCase_008503_2);

#define VkglTestCase_008504_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008504_2 "nary_operator.mul.highp_uvec2_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008504, VkglTestCase_008504_1, VkglTestCase_008504_2);

#define VkglTestCase_008505_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008505_2 "ary_operator.mul.highp_uvec2_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008505, VkglTestCase_008505_1, VkglTestCase_008505_2);

#define VkglTestCase_008506_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008506_2 "nary_operator.mul.highp_uvec3_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008506, VkglTestCase_008506_1, VkglTestCase_008506_2);

#define VkglTestCase_008507_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008507_2 "ary_operator.mul.highp_uvec3_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008507, VkglTestCase_008507_1, VkglTestCase_008507_2);

#define VkglTestCase_008508_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008508_2 "nary_operator.mul.highp_uvec4_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008508, VkglTestCase_008508_1, VkglTestCase_008508_2);

#define VkglTestCase_008509_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008509_2 "ary_operator.mul.highp_uvec4_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008509, VkglTestCase_008509_1, VkglTestCase_008509_2);

#define VkglTestCase_008510_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008510_2 "inary_operator.mul.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008510, VkglTestCase_008510_1, VkglTestCase_008510_2);

#define VkglTestCase_008511_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008511_2 "nary_operator.mul.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008511, VkglTestCase_008511_1, VkglTestCase_008511_2);

#define VkglTestCase_008512_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008512_2 "ary_operator.mul.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008512, VkglTestCase_008512_1, VkglTestCase_008512_2);

#define VkglTestCase_008513_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008513_2 "ry_operator.mul.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008513, VkglTestCase_008513_1, VkglTestCase_008513_2);

#define VkglTestCase_008514_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008514_2 "nary_operator.mul.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008514, VkglTestCase_008514_1, VkglTestCase_008514_2);

#define VkglTestCase_008515_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008515_2 "ary_operator.mul.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008515, VkglTestCase_008515_1, VkglTestCase_008515_2);

#define VkglTestCase_008516_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008516_2 "inary_operator.mul.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008516, VkglTestCase_008516_1, VkglTestCase_008516_2);

#define VkglTestCase_008517_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008517_2 "nary_operator.mul.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008517, VkglTestCase_008517_1, VkglTestCase_008517_2);

#define VkglTestCase_008518_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008518_2 "ary_operator.mul.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008518, VkglTestCase_008518_1, VkglTestCase_008518_2);

#define VkglTestCase_008519_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008519_2 "ry_operator.mul.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008519, VkglTestCase_008519_1, VkglTestCase_008519_2);

#define VkglTestCase_008520_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008520_2 "nary_operator.mul.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008520, VkglTestCase_008520_1, VkglTestCase_008520_2);

#define VkglTestCase_008521_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008521_2 "ary_operator.mul.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008521, VkglTestCase_008521_1, VkglTestCase_008521_2);

#define VkglTestCase_008522_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008522_2 "inary_operator.mul.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008522, VkglTestCase_008522_1, VkglTestCase_008522_2);

#define VkglTestCase_008523_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008523_2 "nary_operator.mul.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008523, VkglTestCase_008523_1, VkglTestCase_008523_2);

#define VkglTestCase_008524_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008524_2 "ary_operator.mul.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008524, VkglTestCase_008524_1, VkglTestCase_008524_2);

#define VkglTestCase_008525_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008525_2 "ry_operator.mul.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008525, VkglTestCase_008525_1, VkglTestCase_008525_2);

#define VkglTestCase_008526_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008526_2 "nary_operator.mul.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008526, VkglTestCase_008526_1, VkglTestCase_008526_2);

#define VkglTestCase_008527_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008527_2 "ary_operator.mul.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008527, VkglTestCase_008527_1, VkglTestCase_008527_2);

#define VkglTestCase_008528_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008528_2 "inary_operator.mul.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008528, VkglTestCase_008528_1, VkglTestCase_008528_2);

#define VkglTestCase_008529_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008529_2 "nary_operator.mul.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008529, VkglTestCase_008529_1, VkglTestCase_008529_2);

#define VkglTestCase_008530_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008530_2 "nary_operator.mul.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008530, VkglTestCase_008530_1, VkglTestCase_008530_2);

#define VkglTestCase_008531_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008531_2 "ary_operator.mul.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008531, VkglTestCase_008531_1, VkglTestCase_008531_2);

#define VkglTestCase_008532_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008532_2 "inary_operator.mul.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008532, VkglTestCase_008532_1, VkglTestCase_008532_2);

#define VkglTestCase_008533_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008533_2 "nary_operator.mul.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008533, VkglTestCase_008533_1, VkglTestCase_008533_2);

#define VkglTestCase_008534_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008534_2 "nary_operator.mul.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008534, VkglTestCase_008534_1, VkglTestCase_008534_2);

#define VkglTestCase_008535_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008535_2 "ary_operator.mul.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008535, VkglTestCase_008535_1, VkglTestCase_008535_2);

#define VkglTestCase_008536_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008536_2 "inary_operator.mul.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008536, VkglTestCase_008536_1, VkglTestCase_008536_2);

#define VkglTestCase_008537_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008537_2 "nary_operator.mul.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008537, VkglTestCase_008537_1, VkglTestCase_008537_2);

#define VkglTestCase_008538_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008538_2 "nary_operator.mul.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008538, VkglTestCase_008538_1, VkglTestCase_008538_2);

#define VkglTestCase_008539_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008539_2 "ary_operator.mul.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008539, VkglTestCase_008539_1, VkglTestCase_008539_2);

#define VkglTestCase_008540_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008540_2 "inary_operator.mul.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008540, VkglTestCase_008540_1, VkglTestCase_008540_2);

#define VkglTestCase_008541_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008541_2 "nary_operator.mul.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008541, VkglTestCase_008541_1, VkglTestCase_008541_2);

#define VkglTestCase_008542_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008542_2 "inary_operator.mul.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008542, VkglTestCase_008542_1, VkglTestCase_008542_2);

#define VkglTestCase_008543_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008543_2 "nary_operator.mul.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008543, VkglTestCase_008543_1, VkglTestCase_008543_2);

#define VkglTestCase_008544_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008544_2 "inary_operator.mul.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008544, VkglTestCase_008544_1, VkglTestCase_008544_2);

#define VkglTestCase_008545_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008545_2 "nary_operator.mul.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008545, VkglTestCase_008545_1, VkglTestCase_008545_2);

#define VkglTestCase_008546_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008546_2 "inary_operator.mul.lowp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008546, VkglTestCase_008546_1, VkglTestCase_008546_2);

#define VkglTestCase_008547_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008547_2 "nary_operator.mul.lowp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008547, VkglTestCase_008547_1, VkglTestCase_008547_2);

#define VkglTestCase_008548_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008548_2 "ary_operator.mul.mediump_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008548, VkglTestCase_008548_1, VkglTestCase_008548_2);

#define VkglTestCase_008549_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008549_2 "ry_operator.mul.mediump_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008549, VkglTestCase_008549_1, VkglTestCase_008549_2);

#define VkglTestCase_008550_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008550_2 "inary_operator.mul.lowp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008550, VkglTestCase_008550_1, VkglTestCase_008550_2);

#define VkglTestCase_008551_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008551_2 "nary_operator.mul.lowp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008551, VkglTestCase_008551_1, VkglTestCase_008551_2);

#define VkglTestCase_008552_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008552_2 "ary_operator.mul.mediump_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008552, VkglTestCase_008552_1, VkglTestCase_008552_2);

#define VkglTestCase_008553_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008553_2 "ry_operator.mul.mediump_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008553, VkglTestCase_008553_1, VkglTestCase_008553_2);

#define VkglTestCase_008554_1 "dEQP-GLES3.functional.shaders.operator.b"
#define VkglTestCase_008554_2 "inary_operator.mul.lowp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008554, VkglTestCase_008554_1, VkglTestCase_008554_2);

#define VkglTestCase_008555_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008555_2 "nary_operator.mul.lowp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008555, VkglTestCase_008555_1, VkglTestCase_008555_2);

#define VkglTestCase_008556_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008556_2 "ary_operator.mul.mediump_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008556, VkglTestCase_008556_1, VkglTestCase_008556_2);

#define VkglTestCase_008557_1 "dEQP-GLES3.functional.shaders.operator.bina"
#define VkglTestCase_008557_2 "ry_operator.mul.mediump_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008557, VkglTestCase_008557_1, VkglTestCase_008557_2);

#define VkglTestCase_008558_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008558_2 "nary_operator.mul.highp_uint_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008558, VkglTestCase_008558_1, VkglTestCase_008558_2);

#define VkglTestCase_008559_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008559_2 "ary_operator.mul.highp_uint_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008559, VkglTestCase_008559_1, VkglTestCase_008559_2);

#define VkglTestCase_008560_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008560_2 "nary_operator.mul.highp_uint_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008560, VkglTestCase_008560_1, VkglTestCase_008560_2);

#define VkglTestCase_008561_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008561_2 "ary_operator.mul.highp_uint_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008561, VkglTestCase_008561_1, VkglTestCase_008561_2);

#define VkglTestCase_008562_1 "dEQP-GLES3.functional.shaders.operator.bi"
#define VkglTestCase_008562_2 "nary_operator.mul.highp_uint_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008562, VkglTestCase_008562_1, VkglTestCase_008562_2);

#define VkglTestCase_008563_1 "dEQP-GLES3.functional.shaders.operator.bin"
#define VkglTestCase_008563_2 "ary_operator.mul.highp_uint_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30009TestSuite, TestCase_008563, VkglTestCase_008563_1, VkglTestCase_008563_2);
