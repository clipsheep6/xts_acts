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
#include "../UboBaseFunc.h"
#include "../ActsUbo0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000514, "dEQP-VK.ubo.single_basic_array.std140.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000515, "dEQP-VK.ubo.single_basic_array.std140.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000516, "dEQP-VK.ubo.single_basic_array.std140.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000517, "dEQP-VK.ubo.single_basic_array.std140.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000518, "dEQP-VK.ubo.single_basic_array.std140.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000519, "dEQP-VK.ubo.single_basic_array.std140.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000520, "dEQP-VK.ubo.single_basic_array.std140.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000521, "dEQP-VK.ubo.single_basic_array.std140.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000522, "dEQP-VK.ubo.single_basic_array.std140.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000523, "dEQP-VK.ubo.single_basic_array.std140.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000524, "dEQP-VK.ubo.single_basic_array.std140.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000525, "dEQP-VK.ubo.single_basic_array.std140.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000526, "dEQP-VK.ubo.single_basic_array.std140.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000527, "dEQP-VK.ubo.single_basic_array.std140.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000528, "dEQP-VK.ubo.single_basic_array.std140.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000529, "dEQP-VK.ubo.single_basic_array.std140.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000530, "dEQP-VK.ubo.single_basic_array.std140.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000531, "dEQP-VK.ubo.single_basic_array.std140.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000532, "dEQP-VK.ubo.single_basic_array.std140.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000533, "dEQP-VK.ubo.single_basic_array.std140.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000534, "dEQP-VK.ubo.single_basic_array.std140.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000535, "dEQP-VK.ubo.single_basic_array.std140.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000536, "dEQP-VK.ubo.single_basic_array.std140.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000537, "dEQP-VK.ubo.single_basic_array.std140.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000538, "dEQP-VK.ubo.single_basic_array.std140.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000539, "dEQP-VK.ubo.single_basic_array.std140.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000540, "dEQP-VK.ubo.single_basic_array.std140.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000541, "dEQP-VK.ubo.single_basic_array.std140.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000542, "dEQP-VK.ubo.single_basic_array.std140.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000543, "dEQP-VK.ubo.single_basic_array.std140.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000544, "dEQP-VK.ubo.single_basic_array.std140.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000545, "dEQP-VK.ubo.single_basic_array.std140.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000546, "dEQP-VK.ubo.single_basic_array.std140.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000547, "dEQP-VK.ubo.single_basic_array.std140.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000548, "dEQP-VK.ubo.single_basic_array.std140.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000549, "dEQP-VK.ubo.single_basic_array.std140.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000550, "dEQP-VK.ubo.single_basic_array.std140.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000551, "dEQP-VK.ubo.single_basic_array.std140.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000552, "dEQP-VK.ubo.single_basic_array.std140.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000553, "dEQP-VK.ubo.single_basic_array.std140.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000554, "dEQP-VK.ubo.single_basic_array.std140.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000555, "dEQP-VK.ubo.single_basic_array.std140.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000556, "dEQP-VK.ubo.single_basic_array.std140.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000557, "dEQP-VK.ubo.single_basic_array.std140.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000558, "dEQP-VK.ubo.single_basic_array.std140.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000559, "dEQP-VK.ubo.single_basic_array.std140.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000560, "dEQP-VK.ubo.single_basic_array.std140.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000561, "dEQP-VK.ubo.single_basic_array.std140.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000562, "dEQP-VK.ubo.single_basic_array.std140.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000563, "dEQP-VK.ubo.single_basic_array.std140.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000564, "dEQP-VK.ubo.single_basic_array.std140.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000565, "dEQP-VK.ubo.single_basic_array.std140.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000566, "dEQP-VK.ubo.single_basic_array.std140.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000567, "dEQP-VK.ubo.single_basic_array.std140.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000568, "dEQP-VK.ubo.single_basic_array.std140.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000569, "dEQP-VK.ubo.single_basic_array.std140.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000570, "dEQP-VK.ubo.single_basic_array.std140.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000571, "dEQP-VK.ubo.single_basic_array.std140.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000572, "dEQP-VK.ubo.single_basic_array.std140.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000573, "dEQP-VK.ubo.single_basic_array.std140.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000574, "dEQP-VK.ubo.single_basic_array.std140.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000575, "dEQP-VK.ubo.single_basic_array.std140.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000576, "dEQP-VK.ubo.single_basic_array.std140.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000577, "dEQP-VK.ubo.single_basic_array.std430.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000578, "dEQP-VK.ubo.single_basic_array.std430.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000579, "dEQP-VK.ubo.single_basic_array.std430.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000580, "dEQP-VK.ubo.single_basic_array.std430.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000581, "dEQP-VK.ubo.single_basic_array.std430.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000582, "dEQP-VK.ubo.single_basic_array.std430.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000583, "dEQP-VK.ubo.single_basic_array.std430.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000584, "dEQP-VK.ubo.single_basic_array.std430.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000585, "dEQP-VK.ubo.single_basic_array.std430.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000586, "dEQP-VK.ubo.single_basic_array.std430.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000587, "dEQP-VK.ubo.single_basic_array.std430.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000588, "dEQP-VK.ubo.single_basic_array.std430.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000589, "dEQP-VK.ubo.single_basic_array.std430.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000590, "dEQP-VK.ubo.single_basic_array.std430.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000591, "dEQP-VK.ubo.single_basic_array.std430.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000592, "dEQP-VK.ubo.single_basic_array.std430.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000593, "dEQP-VK.ubo.single_basic_array.std430.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000594, "dEQP-VK.ubo.single_basic_array.std430.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000595, "dEQP-VK.ubo.single_basic_array.std430.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000596, "dEQP-VK.ubo.single_basic_array.std430.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000597, "dEQP-VK.ubo.single_basic_array.std430.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000598, "dEQP-VK.ubo.single_basic_array.std430.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000599, "dEQP-VK.ubo.single_basic_array.std430.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000600, "dEQP-VK.ubo.single_basic_array.std430.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000601, "dEQP-VK.ubo.single_basic_array.std430.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000602, "dEQP-VK.ubo.single_basic_array.std430.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000603, "dEQP-VK.ubo.single_basic_array.std430.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000604, "dEQP-VK.ubo.single_basic_array.std430.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000605, "dEQP-VK.ubo.single_basic_array.std430.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000606, "dEQP-VK.ubo.single_basic_array.std430.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000607, "dEQP-VK.ubo.single_basic_array.std430.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000608, "dEQP-VK.ubo.single_basic_array.std430.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000609, "dEQP-VK.ubo.single_basic_array.std430.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000610, "dEQP-VK.ubo.single_basic_array.std430.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000611, "dEQP-VK.ubo.single_basic_array.std430.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000612, "dEQP-VK.ubo.single_basic_array.std430.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000613, "dEQP-VK.ubo.single_basic_array.std430.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000614, "dEQP-VK.ubo.single_basic_array.std430.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000615, "dEQP-VK.ubo.single_basic_array.std430.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000616, "dEQP-VK.ubo.single_basic_array.std430.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000617, "dEQP-VK.ubo.single_basic_array.std430.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000618, "dEQP-VK.ubo.single_basic_array.std430.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000619, "dEQP-VK.ubo.single_basic_array.std430.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000620, "dEQP-VK.ubo.single_basic_array.std430.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000621, "dEQP-VK.ubo.single_basic_array.std430.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000622, "dEQP-VK.ubo.single_basic_array.std430.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000623, "dEQP-VK.ubo.single_basic_array.std430.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000624, "dEQP-VK.ubo.single_basic_array.std430.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000625, "dEQP-VK.ubo.single_basic_array.std430.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000626, "dEQP-VK.ubo.single_basic_array.std430.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000627, "dEQP-VK.ubo.single_basic_array.std430.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000628, "dEQP-VK.ubo.single_basic_array.std430.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000629, "dEQP-VK.ubo.single_basic_array.std430.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000630, "dEQP-VK.ubo.single_basic_array.std430.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000631, "dEQP-VK.ubo.single_basic_array.std430.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000632, "dEQP-VK.ubo.single_basic_array.std430.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000633, "dEQP-VK.ubo.single_basic_array.std430.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000634, "dEQP-VK.ubo.single_basic_array.std430.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000635, "dEQP-VK.ubo.single_basic_array.std430.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000636, "dEQP-VK.ubo.single_basic_array.std430.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000637, "dEQP-VK.ubo.single_basic_array.std430.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000638, "dEQP-VK.ubo.single_basic_array.std430.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000639, "dEQP-VK.ubo.single_basic_array.std430.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000640, "dEQP-VK.ubo.single_basic_array.scalar.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000641, "dEQP-VK.ubo.single_basic_array.scalar.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000642, "dEQP-VK.ubo.single_basic_array.scalar.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000643, "dEQP-VK.ubo.single_basic_array.scalar.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000644, "dEQP-VK.ubo.single_basic_array.scalar.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000645, "dEQP-VK.ubo.single_basic_array.scalar.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000646, "dEQP-VK.ubo.single_basic_array.scalar.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000647, "dEQP-VK.ubo.single_basic_array.scalar.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000648, "dEQP-VK.ubo.single_basic_array.scalar.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000649, "dEQP-VK.ubo.single_basic_array.scalar.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000650, "dEQP-VK.ubo.single_basic_array.scalar.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000651, "dEQP-VK.ubo.single_basic_array.scalar.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000652, "dEQP-VK.ubo.single_basic_array.scalar.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000653, "dEQP-VK.ubo.single_basic_array.scalar.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000654, "dEQP-VK.ubo.single_basic_array.scalar.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000655, "dEQP-VK.ubo.single_basic_array.scalar.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000656, "dEQP-VK.ubo.single_basic_array.scalar.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000657, "dEQP-VK.ubo.single_basic_array.scalar.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000658, "dEQP-VK.ubo.single_basic_array.scalar.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000659, "dEQP-VK.ubo.single_basic_array.scalar.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000660, "dEQP-VK.ubo.single_basic_array.scalar.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000661, "dEQP-VK.ubo.single_basic_array.scalar.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000662, "dEQP-VK.ubo.single_basic_array.scalar.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000663, "dEQP-VK.ubo.single_basic_array.scalar.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000664, "dEQP-VK.ubo.single_basic_array.scalar.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000665, "dEQP-VK.ubo.single_basic_array.scalar.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000666, "dEQP-VK.ubo.single_basic_array.scalar.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000667, "dEQP-VK.ubo.single_basic_array.scalar.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000668, "dEQP-VK.ubo.single_basic_array.scalar.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000669, "dEQP-VK.ubo.single_basic_array.scalar.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000670, "dEQP-VK.ubo.single_basic_array.scalar.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000671, "dEQP-VK.ubo.single_basic_array.scalar.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000672, "dEQP-VK.ubo.single_basic_array.scalar.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000673, "dEQP-VK.ubo.single_basic_array.scalar.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000674, "dEQP-VK.ubo.single_basic_array.scalar.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000675, "dEQP-VK.ubo.single_basic_array.scalar.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000676, "dEQP-VK.ubo.single_basic_array.scalar.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000677, "dEQP-VK.ubo.single_basic_array.scalar.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000678, "dEQP-VK.ubo.single_basic_array.scalar.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000679, "dEQP-VK.ubo.single_basic_array.scalar.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000680, "dEQP-VK.ubo.single_basic_array.scalar.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000681, "dEQP-VK.ubo.single_basic_array.scalar.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000682, "dEQP-VK.ubo.single_basic_array.scalar.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000683, "dEQP-VK.ubo.single_basic_array.scalar.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000684, "dEQP-VK.ubo.single_basic_array.scalar.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000685, "dEQP-VK.ubo.single_basic_array.scalar.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000686, "dEQP-VK.ubo.single_basic_array.scalar.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000687, "dEQP-VK.ubo.single_basic_array.scalar.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000688, "dEQP-VK.ubo.single_basic_array.scalar.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000689, "dEQP-VK.ubo.single_basic_array.scalar.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000690, "dEQP-VK.ubo.single_basic_array.scalar.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000691, "dEQP-VK.ubo.single_basic_array.scalar.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000692, "dEQP-VK.ubo.single_basic_array.scalar.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000693, "dEQP-VK.ubo.single_basic_array.scalar.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000694, "dEQP-VK.ubo.single_basic_array.scalar.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000695, "dEQP-VK.ubo.single_basic_array.scalar.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000696, "dEQP-VK.ubo.single_basic_array.scalar.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000697, "dEQP-VK.ubo.single_basic_array.scalar.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000698, "dEQP-VK.ubo.single_basic_array.scalar.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000699, "dEQP-VK.ubo.single_basic_array.scalar.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000700, "dEQP-VK.ubo.single_basic_array.scalar.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000701, "dEQP-VK.ubo.single_basic_array.scalar.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000702, "dEQP-VK.ubo.single_basic_array.scalar.f16vec4.*");
