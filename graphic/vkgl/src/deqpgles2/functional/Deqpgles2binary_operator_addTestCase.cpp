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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_004414_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004414_2 ".binary_operator.add.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004414, VkglTestCase_004414_1, VkglTestCase_004414_2);

#define VkglTestCase_004415_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004415_2 "binary_operator.add.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004415, VkglTestCase_004415_1, VkglTestCase_004415_2);

#define VkglTestCase_004416_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004416_2 "binary_operator.add.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004416, VkglTestCase_004416_1, VkglTestCase_004416_2);

#define VkglTestCase_004417_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004417_2 "inary_operator.add.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004417, VkglTestCase_004417_1, VkglTestCase_004417_2);

#define VkglTestCase_004418_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004418_2 ".binary_operator.add.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004418, VkglTestCase_004418_1, VkglTestCase_004418_2);

#define VkglTestCase_004419_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004419_2 "binary_operator.add.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004419, VkglTestCase_004419_1, VkglTestCase_004419_2);

#define VkglTestCase_004420_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004420_2 "r.binary_operator.add.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004420, VkglTestCase_004420_1, VkglTestCase_004420_2);

#define VkglTestCase_004421_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004421_2 ".binary_operator.add.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004421, VkglTestCase_004421_1, VkglTestCase_004421_2);

#define VkglTestCase_004422_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004422_2 "binary_operator.add.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004422, VkglTestCase_004422_1, VkglTestCase_004422_2);

#define VkglTestCase_004423_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004423_2 "inary_operator.add.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004423, VkglTestCase_004423_1, VkglTestCase_004423_2);

#define VkglTestCase_004424_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004424_2 ".binary_operator.add.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004424, VkglTestCase_004424_1, VkglTestCase_004424_2);

#define VkglTestCase_004425_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004425_2 "binary_operator.add.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004425, VkglTestCase_004425_1, VkglTestCase_004425_2);

#define VkglTestCase_004426_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004426_2 "r.binary_operator.add.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004426, VkglTestCase_004426_1, VkglTestCase_004426_2);

#define VkglTestCase_004427_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004427_2 ".binary_operator.add.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004427, VkglTestCase_004427_1, VkglTestCase_004427_2);

#define VkglTestCase_004428_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004428_2 "binary_operator.add.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004428, VkglTestCase_004428_1, VkglTestCase_004428_2);

#define VkglTestCase_004429_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004429_2 "inary_operator.add.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004429, VkglTestCase_004429_1, VkglTestCase_004429_2);

#define VkglTestCase_004430_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004430_2 ".binary_operator.add.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004430, VkglTestCase_004430_1, VkglTestCase_004430_2);

#define VkglTestCase_004431_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004431_2 "binary_operator.add.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004431, VkglTestCase_004431_1, VkglTestCase_004431_2);

#define VkglTestCase_004432_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004432_2 "r.binary_operator.add.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004432, VkglTestCase_004432_1, VkglTestCase_004432_2);

#define VkglTestCase_004433_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004433_2 ".binary_operator.add.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004433, VkglTestCase_004433_1, VkglTestCase_004433_2);

#define VkglTestCase_004434_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004434_2 "binary_operator.add.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004434, VkglTestCase_004434_1, VkglTestCase_004434_2);

#define VkglTestCase_004435_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004435_2 "inary_operator.add.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004435, VkglTestCase_004435_1, VkglTestCase_004435_2);

#define VkglTestCase_004436_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004436_2 ".binary_operator.add.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004436, VkglTestCase_004436_1, VkglTestCase_004436_2);

#define VkglTestCase_004437_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004437_2 "binary_operator.add.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004437, VkglTestCase_004437_1, VkglTestCase_004437_2);

#define VkglTestCase_004438_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004438_2 "r.binary_operator.add.lowp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004438, VkglTestCase_004438_1, VkglTestCase_004438_2);

#define VkglTestCase_004439_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004439_2 ".binary_operator.add.lowp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004439, VkglTestCase_004439_1, VkglTestCase_004439_2);

#define VkglTestCase_004440_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004440_2 ".binary_operator.add.mediump_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004440, VkglTestCase_004440_1, VkglTestCase_004440_2);

#define VkglTestCase_004441_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004441_2 "binary_operator.add.mediump_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004441, VkglTestCase_004441_1, VkglTestCase_004441_2);

#define VkglTestCase_004442_1 "dEQP-GLES2.functional.shaders.operato"
#define VkglTestCase_004442_2 "r.binary_operator.add.highp_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004442, VkglTestCase_004442_1, VkglTestCase_004442_2);

#define VkglTestCase_004443_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004443_2 ".binary_operator.add.highp_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004443, VkglTestCase_004443_1, VkglTestCase_004443_2);

#define VkglTestCase_004444_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004444_2 ".binary_operator.add.lowp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004444, VkglTestCase_004444_1, VkglTestCase_004444_2);

#define VkglTestCase_004445_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004445_2 "binary_operator.add.lowp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004445, VkglTestCase_004445_1, VkglTestCase_004445_2);

#define VkglTestCase_004446_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004446_2 "binary_operator.add.mediump_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004446, VkglTestCase_004446_1, VkglTestCase_004446_2);

#define VkglTestCase_004447_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004447_2 "inary_operator.add.mediump_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004447, VkglTestCase_004447_1, VkglTestCase_004447_2);

#define VkglTestCase_004448_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004448_2 ".binary_operator.add.highp_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004448, VkglTestCase_004448_1, VkglTestCase_004448_2);

#define VkglTestCase_004449_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004449_2 "binary_operator.add.highp_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004449, VkglTestCase_004449_1, VkglTestCase_004449_2);

#define VkglTestCase_004450_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004450_2 ".binary_operator.add.lowp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004450, VkglTestCase_004450_1, VkglTestCase_004450_2);

#define VkglTestCase_004451_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004451_2 "binary_operator.add.lowp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004451, VkglTestCase_004451_1, VkglTestCase_004451_2);

#define VkglTestCase_004452_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004452_2 "binary_operator.add.mediump_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004452, VkglTestCase_004452_1, VkglTestCase_004452_2);

#define VkglTestCase_004453_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004453_2 "inary_operator.add.mediump_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004453, VkglTestCase_004453_1, VkglTestCase_004453_2);

#define VkglTestCase_004454_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004454_2 ".binary_operator.add.highp_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004454, VkglTestCase_004454_1, VkglTestCase_004454_2);

#define VkglTestCase_004455_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004455_2 "binary_operator.add.highp_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004455, VkglTestCase_004455_1, VkglTestCase_004455_2);

#define VkglTestCase_004456_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004456_2 ".binary_operator.add.lowp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004456, VkglTestCase_004456_1, VkglTestCase_004456_2);

#define VkglTestCase_004457_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004457_2 "binary_operator.add.lowp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004457, VkglTestCase_004457_1, VkglTestCase_004457_2);

#define VkglTestCase_004458_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004458_2 "binary_operator.add.mediump_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004458, VkglTestCase_004458_1, VkglTestCase_004458_2);

#define VkglTestCase_004459_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004459_2 "inary_operator.add.mediump_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004459, VkglTestCase_004459_1, VkglTestCase_004459_2);

#define VkglTestCase_004460_1 "dEQP-GLES2.functional.shaders.operator"
#define VkglTestCase_004460_2 ".binary_operator.add.highp_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004460, VkglTestCase_004460_1, VkglTestCase_004460_2);

#define VkglTestCase_004461_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_004461_2 "binary_operator.add.highp_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004461, VkglTestCase_004461_1, VkglTestCase_004461_2);

#define VkglTestCase_004462_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004462_2 "inary_operator.add.lowp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004462, VkglTestCase_004462_1, VkglTestCase_004462_2);

#define VkglTestCase_004463_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004463_2 "nary_operator.add.lowp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004463, VkglTestCase_004463_1, VkglTestCase_004463_2);

#define VkglTestCase_004464_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004464_2 "ary_operator.add.mediump_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004464, VkglTestCase_004464_1, VkglTestCase_004464_2);

#define VkglTestCase_004465_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004465_2 "ry_operator.add.mediump_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004465, VkglTestCase_004465_1, VkglTestCase_004465_2);

#define VkglTestCase_004466_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004466_2 "nary_operator.add.highp_vec2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004466, VkglTestCase_004466_1, VkglTestCase_004466_2);

#define VkglTestCase_004467_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004467_2 "ary_operator.add.highp_vec2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004467, VkglTestCase_004467_1, VkglTestCase_004467_2);

#define VkglTestCase_004468_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004468_2 "inary_operator.add.lowp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004468, VkglTestCase_004468_1, VkglTestCase_004468_2);

#define VkglTestCase_004469_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004469_2 "nary_operator.add.lowp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004469, VkglTestCase_004469_1, VkglTestCase_004469_2);

#define VkglTestCase_004470_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004470_2 "ary_operator.add.mediump_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004470, VkglTestCase_004470_1, VkglTestCase_004470_2);

#define VkglTestCase_004471_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004471_2 "ry_operator.add.mediump_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004471, VkglTestCase_004471_1, VkglTestCase_004471_2);

#define VkglTestCase_004472_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004472_2 "nary_operator.add.highp_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004472, VkglTestCase_004472_1, VkglTestCase_004472_2);

#define VkglTestCase_004473_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004473_2 "ary_operator.add.highp_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004473, VkglTestCase_004473_1, VkglTestCase_004473_2);

#define VkglTestCase_004474_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004474_2 "inary_operator.add.lowp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004474, VkglTestCase_004474_1, VkglTestCase_004474_2);

#define VkglTestCase_004475_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004475_2 "nary_operator.add.lowp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004475, VkglTestCase_004475_1, VkglTestCase_004475_2);

#define VkglTestCase_004476_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004476_2 "ary_operator.add.mediump_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004476, VkglTestCase_004476_1, VkglTestCase_004476_2);

#define VkglTestCase_004477_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004477_2 "ry_operator.add.mediump_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004477, VkglTestCase_004477_1, VkglTestCase_004477_2);

#define VkglTestCase_004478_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004478_2 "nary_operator.add.highp_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004478, VkglTestCase_004478_1, VkglTestCase_004478_2);

#define VkglTestCase_004479_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004479_2 "ary_operator.add.highp_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004479, VkglTestCase_004479_1, VkglTestCase_004479_2);

#define VkglTestCase_004480_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004480_2 "inary_operator.add.lowp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004480, VkglTestCase_004480_1, VkglTestCase_004480_2);

#define VkglTestCase_004481_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004481_2 "nary_operator.add.lowp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004481, VkglTestCase_004481_1, VkglTestCase_004481_2);

#define VkglTestCase_004482_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004482_2 "nary_operator.add.mediump_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004482, VkglTestCase_004482_1, VkglTestCase_004482_2);

#define VkglTestCase_004483_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004483_2 "ary_operator.add.mediump_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004483, VkglTestCase_004483_1, VkglTestCase_004483_2);

#define VkglTestCase_004484_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004484_2 "inary_operator.add.highp_ivec2_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004484, VkglTestCase_004484_1, VkglTestCase_004484_2);

#define VkglTestCase_004485_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004485_2 "nary_operator.add.highp_ivec2_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004485, VkglTestCase_004485_1, VkglTestCase_004485_2);

#define VkglTestCase_004486_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004486_2 "inary_operator.add.lowp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004486, VkglTestCase_004486_1, VkglTestCase_004486_2);

#define VkglTestCase_004487_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004487_2 "nary_operator.add.lowp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004487, VkglTestCase_004487_1, VkglTestCase_004487_2);

#define VkglTestCase_004488_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004488_2 "nary_operator.add.mediump_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004488, VkglTestCase_004488_1, VkglTestCase_004488_2);

#define VkglTestCase_004489_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004489_2 "ary_operator.add.mediump_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004489, VkglTestCase_004489_1, VkglTestCase_004489_2);

#define VkglTestCase_004490_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004490_2 "inary_operator.add.highp_ivec3_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004490, VkglTestCase_004490_1, VkglTestCase_004490_2);

#define VkglTestCase_004491_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004491_2 "nary_operator.add.highp_ivec3_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004491, VkglTestCase_004491_1, VkglTestCase_004491_2);

#define VkglTestCase_004492_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004492_2 "inary_operator.add.lowp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004492, VkglTestCase_004492_1, VkglTestCase_004492_2);

#define VkglTestCase_004493_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004493_2 "nary_operator.add.lowp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004493, VkglTestCase_004493_1, VkglTestCase_004493_2);

#define VkglTestCase_004494_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004494_2 "nary_operator.add.mediump_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004494, VkglTestCase_004494_1, VkglTestCase_004494_2);

#define VkglTestCase_004495_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004495_2 "ary_operator.add.mediump_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004495, VkglTestCase_004495_1, VkglTestCase_004495_2);

#define VkglTestCase_004496_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004496_2 "inary_operator.add.highp_ivec4_int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004496, VkglTestCase_004496_1, VkglTestCase_004496_2);

#define VkglTestCase_004497_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004497_2 "nary_operator.add.highp_ivec4_int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004497, VkglTestCase_004497_1, VkglTestCase_004497_2);

#define VkglTestCase_004498_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004498_2 "inary_operator.add.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004498, VkglTestCase_004498_1, VkglTestCase_004498_2);

#define VkglTestCase_004499_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004499_2 "nary_operator.add.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004499, VkglTestCase_004499_1, VkglTestCase_004499_2);

#define VkglTestCase_004500_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004500_2 "ary_operator.add.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004500, VkglTestCase_004500_1, VkglTestCase_004500_2);

#define VkglTestCase_004501_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004501_2 "ry_operator.add.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004501, VkglTestCase_004501_1, VkglTestCase_004501_2);

#define VkglTestCase_004502_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004502_2 "nary_operator.add.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004502, VkglTestCase_004502_1, VkglTestCase_004502_2);

#define VkglTestCase_004503_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004503_2 "ary_operator.add.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004503, VkglTestCase_004503_1, VkglTestCase_004503_2);

#define VkglTestCase_004504_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004504_2 "inary_operator.add.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004504, VkglTestCase_004504_1, VkglTestCase_004504_2);

#define VkglTestCase_004505_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004505_2 "nary_operator.add.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004505, VkglTestCase_004505_1, VkglTestCase_004505_2);

#define VkglTestCase_004506_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004506_2 "ary_operator.add.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004506, VkglTestCase_004506_1, VkglTestCase_004506_2);

#define VkglTestCase_004507_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004507_2 "ry_operator.add.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004507, VkglTestCase_004507_1, VkglTestCase_004507_2);

#define VkglTestCase_004508_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004508_2 "nary_operator.add.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004508, VkglTestCase_004508_1, VkglTestCase_004508_2);

#define VkglTestCase_004509_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004509_2 "ary_operator.add.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004509, VkglTestCase_004509_1, VkglTestCase_004509_2);

#define VkglTestCase_004510_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004510_2 "inary_operator.add.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004510, VkglTestCase_004510_1, VkglTestCase_004510_2);

#define VkglTestCase_004511_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004511_2 "nary_operator.add.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004511, VkglTestCase_004511_1, VkglTestCase_004511_2);

#define VkglTestCase_004512_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004512_2 "ary_operator.add.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004512, VkglTestCase_004512_1, VkglTestCase_004512_2);

#define VkglTestCase_004513_1 "dEQP-GLES2.functional.shaders.operator.bina"
#define VkglTestCase_004513_2 "ry_operator.add.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004513, VkglTestCase_004513_1, VkglTestCase_004513_2);

#define VkglTestCase_004514_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004514_2 "nary_operator.add.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004514, VkglTestCase_004514_1, VkglTestCase_004514_2);

#define VkglTestCase_004515_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004515_2 "ary_operator.add.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004515, VkglTestCase_004515_1, VkglTestCase_004515_2);

#define VkglTestCase_004516_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004516_2 "inary_operator.add.lowp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004516, VkglTestCase_004516_1, VkglTestCase_004516_2);

#define VkglTestCase_004517_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004517_2 "nary_operator.add.lowp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004517, VkglTestCase_004517_1, VkglTestCase_004517_2);

#define VkglTestCase_004518_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004518_2 "nary_operator.add.mediump_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004518, VkglTestCase_004518_1, VkglTestCase_004518_2);

#define VkglTestCase_004519_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004519_2 "ary_operator.add.mediump_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004519, VkglTestCase_004519_1, VkglTestCase_004519_2);

#define VkglTestCase_004520_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004520_2 "inary_operator.add.highp_int_ivec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004520, VkglTestCase_004520_1, VkglTestCase_004520_2);

#define VkglTestCase_004521_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004521_2 "nary_operator.add.highp_int_ivec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004521, VkglTestCase_004521_1, VkglTestCase_004521_2);

#define VkglTestCase_004522_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004522_2 "inary_operator.add.lowp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004522, VkglTestCase_004522_1, VkglTestCase_004522_2);

#define VkglTestCase_004523_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004523_2 "nary_operator.add.lowp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004523, VkglTestCase_004523_1, VkglTestCase_004523_2);

#define VkglTestCase_004524_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004524_2 "nary_operator.add.mediump_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004524, VkglTestCase_004524_1, VkglTestCase_004524_2);

#define VkglTestCase_004525_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004525_2 "ary_operator.add.mediump_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004525, VkglTestCase_004525_1, VkglTestCase_004525_2);

#define VkglTestCase_004526_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004526_2 "inary_operator.add.highp_int_ivec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004526, VkglTestCase_004526_1, VkglTestCase_004526_2);

#define VkglTestCase_004527_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004527_2 "nary_operator.add.highp_int_ivec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004527, VkglTestCase_004527_1, VkglTestCase_004527_2);

#define VkglTestCase_004528_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004528_2 "inary_operator.add.lowp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004528, VkglTestCase_004528_1, VkglTestCase_004528_2);

#define VkglTestCase_004529_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004529_2 "nary_operator.add.lowp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004529, VkglTestCase_004529_1, VkglTestCase_004529_2);

#define VkglTestCase_004530_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004530_2 "nary_operator.add.mediump_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004530, VkglTestCase_004530_1, VkglTestCase_004530_2);

#define VkglTestCase_004531_1 "dEQP-GLES2.functional.shaders.operator.bin"
#define VkglTestCase_004531_2 "ary_operator.add.mediump_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004531, VkglTestCase_004531_1, VkglTestCase_004531_2);

#define VkglTestCase_004532_1 "dEQP-GLES2.functional.shaders.operator.b"
#define VkglTestCase_004532_2 "inary_operator.add.highp_int_ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004532, VkglTestCase_004532_1, VkglTestCase_004532_2);

#define VkglTestCase_004533_1 "dEQP-GLES2.functional.shaders.operator.bi"
#define VkglTestCase_004533_2 "nary_operator.add.highp_int_ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20005TestSuite, TestCase_004533, VkglTestCase_004533_1, VkglTestCase_004533_2);
