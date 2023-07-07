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

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000433, "dEQP-VK.ubo.single_basic_type.std140.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000434, "dEQP-VK.ubo.single_basic_type.std140.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000435, "dEQP-VK.ubo.single_basic_type.std140.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000436, "dEQP-VK.ubo.single_basic_type.std140.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000437, "dEQP-VK.ubo.single_basic_type.std140.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000438, "dEQP-VK.ubo.single_basic_type.std140.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000439, "dEQP-VK.ubo.single_basic_type.std140.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000440, "dEQP-VK.ubo.single_basic_type.std140.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000441, "dEQP-VK.ubo.single_basic_type.std140.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000442, "dEQP-VK.ubo.single_basic_type.std140.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000443, "dEQP-VK.ubo.single_basic_type.std140.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000444, "dEQP-VK.ubo.single_basic_type.std140.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000445, "dEQP-VK.ubo.single_basic_type.std140.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000446, "dEQP-VK.ubo.single_basic_type.std140.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000447, "dEQP-VK.ubo.single_basic_type.std140.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000448, "dEQP-VK.ubo.single_basic_type.std140.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000449, "dEQP-VK.ubo.single_basic_type.std140.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000450, "dEQP-VK.ubo.single_basic_type.std140.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000451, "dEQP-VK.ubo.single_basic_type.std140.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000452, "dEQP-VK.ubo.single_basic_type.std140.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000453, "dEQP-VK.ubo.single_basic_type.std140.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000454, "dEQP-VK.ubo.single_basic_type.std140.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000455, "dEQP-VK.ubo.single_basic_type.std140.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000456, "dEQP-VK.ubo.single_basic_type.std140.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000457, "dEQP-VK.ubo.single_basic_type.std140.lowp.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000458, "dEQP-VK.ubo.single_basic_type.std140.mediump.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000459, "dEQP-VK.ubo.single_basic_type.std140.highp.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000460, "dEQP-VK.ubo.single_basic_type.std430.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000461, "dEQP-VK.ubo.single_basic_type.std430.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000462, "dEQP-VK.ubo.single_basic_type.std430.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000463, "dEQP-VK.ubo.single_basic_type.std430.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000464, "dEQP-VK.ubo.single_basic_type.std430.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000465, "dEQP-VK.ubo.single_basic_type.std430.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000466, "dEQP-VK.ubo.single_basic_type.std430.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000467, "dEQP-VK.ubo.single_basic_type.std430.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000468, "dEQP-VK.ubo.single_basic_type.std430.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000469, "dEQP-VK.ubo.single_basic_type.std430.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000470, "dEQP-VK.ubo.single_basic_type.std430.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000471, "dEQP-VK.ubo.single_basic_type.std430.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000472, "dEQP-VK.ubo.single_basic_type.std430.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000473, "dEQP-VK.ubo.single_basic_type.std430.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000474, "dEQP-VK.ubo.single_basic_type.std430.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000475, "dEQP-VK.ubo.single_basic_type.std430.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000476, "dEQP-VK.ubo.single_basic_type.std430.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000477, "dEQP-VK.ubo.single_basic_type.std430.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000478, "dEQP-VK.ubo.single_basic_type.std430.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000479, "dEQP-VK.ubo.single_basic_type.std430.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000480, "dEQP-VK.ubo.single_basic_type.std430.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000481, "dEQP-VK.ubo.single_basic_type.std430.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000482, "dEQP-VK.ubo.single_basic_type.std430.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000483, "dEQP-VK.ubo.single_basic_type.std430.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000484, "dEQP-VK.ubo.single_basic_type.std430.lowp.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000485, "dEQP-VK.ubo.single_basic_type.std430.mediump.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000486, "dEQP-VK.ubo.single_basic_type.std430.highp.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000487, "dEQP-VK.ubo.single_basic_type.scalar.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000488, "dEQP-VK.ubo.single_basic_type.scalar.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000489, "dEQP-VK.ubo.single_basic_type.scalar.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000490, "dEQP-VK.ubo.single_basic_type.scalar.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000491, "dEQP-VK.ubo.single_basic_type.scalar.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000492, "dEQP-VK.ubo.single_basic_type.scalar.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000493, "dEQP-VK.ubo.single_basic_type.scalar.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000494, "dEQP-VK.ubo.single_basic_type.scalar.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000495, "dEQP-VK.ubo.single_basic_type.scalar.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000496, "dEQP-VK.ubo.single_basic_type.scalar.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000497, "dEQP-VK.ubo.single_basic_type.scalar.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000498, "dEQP-VK.ubo.single_basic_type.scalar.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000499, "dEQP-VK.ubo.single_basic_type.scalar.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000500, "dEQP-VK.ubo.single_basic_type.scalar.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000501, "dEQP-VK.ubo.single_basic_type.scalar.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000502, "dEQP-VK.ubo.single_basic_type.scalar.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000503, "dEQP-VK.ubo.single_basic_type.scalar.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000504, "dEQP-VK.ubo.single_basic_type.scalar.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000505, "dEQP-VK.ubo.single_basic_type.scalar.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000506, "dEQP-VK.ubo.single_basic_type.scalar.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000507, "dEQP-VK.ubo.single_basic_type.scalar.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000508, "dEQP-VK.ubo.single_basic_type.scalar.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000509, "dEQP-VK.ubo.single_basic_type.scalar.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000510, "dEQP-VK.ubo.single_basic_type.scalar.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000511, "dEQP-VK.ubo.single_basic_type.scalar.lowp.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000512, "dEQP-VK.ubo.single_basic_type.scalar.mediump.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000513, "dEQP-VK.ubo.single_basic_type.scalar.highp.*");
