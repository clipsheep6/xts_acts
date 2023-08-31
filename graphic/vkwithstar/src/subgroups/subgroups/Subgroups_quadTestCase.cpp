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
#include "../SubgroupsBaseFunc.h"
#include "../ActsSubgroups0006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018875, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018876, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018877, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018878, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018879, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018880, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018881, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018882, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018883, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018884, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018885, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018886, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018887, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018888, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018889, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018890, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018891, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018892, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018893, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018894, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018895, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018896, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018897, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018898, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018899, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018900, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018901, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018902, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018903, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018904, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018905, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018906, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018907, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018908, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018909, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018910, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018911, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018912, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018913, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018914, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018915, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018916, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018917, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018918, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018919, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018920, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018921, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018922, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018923, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018924, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018925, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018926, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018927, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018928, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018929, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018930, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018931, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018932, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018933, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018934, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018935, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018936, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018937, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018938, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018939, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018940, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018941, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018942, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018943, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018944, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018945, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018946, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018947, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018948, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018949, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018950, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018951, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018952, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018953, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018954, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018955, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018956, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018957, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018958, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018959, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018960, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018961, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018962, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018963, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018964, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018965, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018966, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018967, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018968, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018969, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018970, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018971, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018972, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018973, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018974, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018975, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018976, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018977, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018978, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018979, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018980, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018981, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018982, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018983, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018984, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018985, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018986, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018987, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018988, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018989, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018990, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018991, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018992, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018993, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018994, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018995, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018996, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018997, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018998, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC018999, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019000, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019001, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019002, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019003, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019004, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019005, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019006, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019007, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019008, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019009, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019010, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019011, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019012, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019013, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019014, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019015, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019016, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019017, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019018, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019019, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019020, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019021, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019022, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019023, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019024, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019025, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019026, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019027, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019028, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019029, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019030, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019031, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019032, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019033, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019034, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019035, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019036, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019037, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019038, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019039, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019040, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019041, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019042, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019043, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019044, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019045, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019046, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019047, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019048, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019049, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019050, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019051, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019052, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019053, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019054, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019055, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019056, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019057, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019058, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019059, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019060, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019061, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019062, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019063, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019064, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019065, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019066, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019067, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019068, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019069, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019070, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019071, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019072, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019073, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019074, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019075, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019076, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019077, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019078, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019079, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019080, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019081, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019082, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019083, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019084, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019085, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019086, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019087, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019088, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019089, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019090, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019091, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019092, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019093, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019094, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019095, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019096, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019097, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019098, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019099, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019100, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019101, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019102, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019103, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019104, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019105, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019106, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019107, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019108, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019109, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019110, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019111, "dEQP-VK.subgroups.quad.graphics.subgroupquadbroadcast_nonconst_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019112, "dEQP-VK.subgroups.quad.graphics.subgroupquadswaphorizontal_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019113, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapvertical_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019114, "dEQP-VK.subgroups.quad.graphics.subgroupquadswapdiagonal_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019115, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019116, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019117, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019118, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019119, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019120, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019121, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019122, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019123, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019124, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019125, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019126, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019127, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019128, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019129, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019130, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019131, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019132, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019133, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019134, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019135, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019136, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019137, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019138, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019139, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019140, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019141, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019142, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019143, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019144, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019145, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019146, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019147, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019148, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019149, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019150, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019151, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019152, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019153, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019154, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019155, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019156, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019157, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019158, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019159, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019160, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019161, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019162, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019163, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019164, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019165, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019166, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019167, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019168, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019169, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019170, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019171, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019172, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019173, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019174, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019175, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019176, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019177, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019178, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019179, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019180, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019181, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019182, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019183, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019184, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019185, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019186, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019187, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019188, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019189, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019190, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019191, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019192, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019193, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019194, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019195, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019196, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019197, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019198, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019199, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019200, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019201, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019202, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019203, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019204, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019205, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019206, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019207, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019208, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019209, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019210, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019211, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019212, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019213, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019214, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019215, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019216, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019217, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019218, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019219, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019220, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019221, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019222, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019223, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019224, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019225, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019226, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019227, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019228, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019229, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019230, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019231, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019232, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019233, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019234, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019235, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019236, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019237, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019238, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019239, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019240, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019241, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019242, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019243, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019244, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019245, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019246, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019247, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019248, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019249, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019250, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019251, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019252, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019253, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019254, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019255, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019256, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019257, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019258, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019259, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019260, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019261, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019262, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019263, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019264, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019265, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019266, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019267, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019268, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019269, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019270, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019271, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019272, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019273, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019274, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019275, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019276, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019277, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019278, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019279, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019280, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019281, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019282, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019283, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019284, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019285, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019286, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019287, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019288, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019289, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019290, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019291, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019292, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019293, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019294, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019295, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019296, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019297, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019298, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019299, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019300, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019301, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019302, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019303, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019304, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019305, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019306, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019307, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019308, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019309, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019310, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019311, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019312, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019313, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019314, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019315, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019316, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019317, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019318, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019319, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019320, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019321, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019322, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019323, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019324, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019325, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019326, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019327, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019328, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019329, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019330, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019331, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019332, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019333, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019334, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019335, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019336, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019337, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019338, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019339, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019340, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019341, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019342, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019343, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019344, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019345, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019346, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019347, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019348, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019349, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019350, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019351, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019352, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019353, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019354, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019355, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019356, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019357, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019358, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019359, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019360, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019361, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019362, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019363, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019364, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019365, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019366, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019367, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019368, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019369, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019370, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019371, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019372, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019373, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019374, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019375, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019376, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019377, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019378, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019379, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019380, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019381, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019382, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019383, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019384, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019385, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019386, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019387, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019388, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019389, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019390, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019391, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019392, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019393, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019394, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019395, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019396, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019397, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019398, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019399, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019400, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019401, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019402, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019403, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019404, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019405, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019406, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019407, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019408, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019409, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019410, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019411, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019412, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019413, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019414, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019415, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019416, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019417, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019418, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019419, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019420, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019421, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019422, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019423, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019424, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019425, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019426, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019427, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019428, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019429, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019430, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019431, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019432, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019433, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019434, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019435, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019436, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019437, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019438, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019439, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019440, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019441, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019442, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019443, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019444, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019445, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019446, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019447, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019448, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019449, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019450, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019451, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019452, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019453, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019454, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019455, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019456, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019457, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019458, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019459, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019460, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019461, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019462, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019463, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019464, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019465, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019466, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019467, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019468, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019469, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019470, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019471, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019472, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019473, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019474, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019475, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019476, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019477, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019478, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019479, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019480, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019481, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019482, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019483, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019484, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019485, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019486, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019487, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019488, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019489, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019490, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019491, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019492, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019493, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019494, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019495, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019496, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019497, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019498, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019499, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019500, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019501, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019502, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019503, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019504, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019505, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019506, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019507, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019508, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019509, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019510, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019511, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019512, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019513, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019514, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019515, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019516, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019517, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019518, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019519, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019520, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019521, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019522, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019523, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019524, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019525, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019526, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019527, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019528, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019529, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019530, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019531, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019532, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019533, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019534, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019535, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019536, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019537, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019538, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019539, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019540, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019541, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019542, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019543, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019544, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019545, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019546, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019547, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019548, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019549, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019550, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019551, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019552, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019553, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019554, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019555, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019556, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019557, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019558, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019559, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019560, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019561, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019562, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019563, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019564, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019565, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019566, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019567, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019568, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019569, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019570, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019571, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019572, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019573, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019574, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019575, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019576, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019577, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019578, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019579, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019580, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019581, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019582, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019583, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019584, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019585, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019586, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019587, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019588, "dEQP-VK.subgroups.quad.compute.subgroupquadbroadcast_nonconst_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019589, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019590, "dEQP-VK.subgroups.quad.compute.subgroupquadswaphorizontal_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019591, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019592, "dEQP-VK.subgroups.quad.compute.subgroupquadswapvertical_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019593, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019594, "dEQP-VK.subgroups.quad.compute.subgroupquadswapdiagonal_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019595, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019596, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019597, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019598, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019599, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019600, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019601, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019602, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019603, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019604, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019605, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019606, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019607, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019608, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019609, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019610, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019611, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019612, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019613, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019614, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019615, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019616, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019617, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019618, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019619, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019620, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019621, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019622, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019623, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019624, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019625, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019626, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019627, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019628, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019629, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019630, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019631, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019632, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019633, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019634, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019635, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019636, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019637, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019638, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019639, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019640, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019641, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019642, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019643, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019644, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019645, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019646, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019647, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019648, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019649, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019650, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019651, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019652, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019653, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019654, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019655, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019656, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019657, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019658, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019659, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019660, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019661, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019662, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019663, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019664, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019665, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019666, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019667, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019668, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019669, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019670, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019671, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019672, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019673, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019674, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019675, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019676, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019677, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019678, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019679, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019680, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019681, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019682, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019683, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019684, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019685, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019686, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019687, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019688, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019689, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019690, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019691, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019692, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019693, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019694, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019695, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019696, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019697, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019698, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019699, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019700, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019701, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019702, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019703, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019704, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019705, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019706, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019707, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019708, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019709, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019710, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019711, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019712, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019713, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019714, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019715, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019716, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019717, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019718, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019719, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019720, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019721, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019722, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019723, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019724, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019725, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019726, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019727, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019728, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019729, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019730, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019731, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019732, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019733, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019734, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019735, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019736, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019737, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019738, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019739, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019740, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019741, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019742, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019743, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019744, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019745, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019746, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019747, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019748, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019749, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019750, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019751, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019752, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019753, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019754, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019755, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019756, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019757, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019758, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019759, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019760, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019761, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019762, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019763, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019764, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019765, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019766, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019767, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019768, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019769, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019770, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019771, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019772, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019773, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019774, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019775, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019776, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019777, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019778, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019779, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019780, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019781, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019782, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019783, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019784, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019785, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019786, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019787, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019788, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019789, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019790, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019791, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019792, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019793, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019794, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019795, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019796, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019797, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019798, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019799, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019800, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019801, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019802, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019803, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019804, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019805, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019806, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019807, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019808, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019809, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019810, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019811, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019812, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019813, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019814, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019815, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019816, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019817, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019818, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019819, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019820, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019821, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019822, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019823, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019824, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019825, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019826, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019827, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019828, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019829, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019830, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019831, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019832, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019833, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019834, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019835, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019836, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019837, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019838, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019839, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019840, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019841, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019842, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019843, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019844, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019845, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019846, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019847, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019848, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019849, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019850, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019851, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019852, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019853, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019854, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019855, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019856, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019857, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019858, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019859, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019860, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019861, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019862, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019863, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019864, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019865, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019866, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019867, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019868, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019869, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019870, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019871, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019872, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019873, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019874, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019875, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019876, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019877, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019878, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019879, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019880, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019881, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019882, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019883, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019884, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019885, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019886, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019887, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019888, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019889, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019890, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019891, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019892, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019893, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019894, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019895, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019896, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019897, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019898, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019899, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019900, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019901, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019902, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019903, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019904, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019905, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019906, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019907, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019908, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019909, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019910, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019911, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019912, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019913, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019914, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019915, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019916, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019917, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019918, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019919, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019920, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019921, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019922, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019923, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019924, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019925, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019926, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019927, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019928, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019929, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019930, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019931, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019932, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019933, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019934, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019935, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019936, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019937, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019938, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019939, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019940, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019941, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019942, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019943, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019944, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019945, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019946, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019947, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019948, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019949, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019950, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019951, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019952, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019953, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019954, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019955, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019956, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019957, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019958, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019959, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019960, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019961, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019962, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019963, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019964, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019965, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019966, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019967, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019968, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019969, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019970, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019971, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019972, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019973, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019974, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019975, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019976, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019977, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019978, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019979, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019980, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019981, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019982, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019983, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019984, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019985, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019986, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019987, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019988, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019989, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019990, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019991, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019992, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019993, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019994, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019995, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019996, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019997, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019998, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC019999, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020000, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020001, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020002, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020003, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020004, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020005, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020006, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020007, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020008, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020009, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020010, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020011, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020012, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020013, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020014, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020015, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020016, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020017, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020018, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020019, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020020, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020021, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020022, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020023, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020024, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020025, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020026, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020027, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020028, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020029, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020030, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020031, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020032, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020033, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020034, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020035, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020036, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020037, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020038, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020039, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020040, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020041, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020042, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020043, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020044, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020045, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020046, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020047, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020048, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020049, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020050, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020051, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020052, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020053, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020054, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020055, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020056, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020057, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020058, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020059, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020060, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020061, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020062, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020063, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020064, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020065, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020066, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020067, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020068, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020069, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020070, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020071, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020072, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020073, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020074, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020075, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020076, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020077, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020078, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020079, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020080, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020081, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020082, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020083, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020084, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020085, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020086, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020087, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020088, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020089, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020090, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020091, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020092, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020093, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020094, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020095, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020096, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020097, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020098, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020099, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020100, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020101, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020102, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020103, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020104, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020105, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020106, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020107, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020108, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020109, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020110, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020111, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020112, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020113, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020114, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020115, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020116, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020117, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020118, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020119, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020120, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020121, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020122, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020123, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020124, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020125, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020126, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020127, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020128, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020129, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020130, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020131, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020132, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020133, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020134, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020135, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020136, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020137, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020138, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020139, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020140, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020141, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020142, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020143, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020144, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020145, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020146, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020147, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020148, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020149, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020150, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020151, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020152, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020153, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020154, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020155, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020156, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020157, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020158, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020159, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020160, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020161, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020162, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020163, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020164, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020165, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020166, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020167, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020168, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020169, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020170, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020171, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020172, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020173, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020174, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020175, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020176, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020177, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020178, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020179, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020180, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020181, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020182, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020183, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020184, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020185, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020186, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020187, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020188, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020189, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020190, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020191, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020192, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020193, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020194, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020195, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020196, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020197, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020198, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020199, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020200, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020201, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020202, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020203, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020204, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020205, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020206, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020207, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020208, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020209, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020210, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020211, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020212, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020213, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020214, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020215, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020216, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020217, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020218, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020219, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020220, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020221, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020222, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020223, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020224, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020225, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020226, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020227, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020228, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020229, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020230, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020231, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020232, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020233, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020234, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020235, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020236, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020237, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020238, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020239, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020240, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020241, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020242, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020243, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020244, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020245, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020246, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020247, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020248, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020249, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020250, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020251, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020252, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020253, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020254, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020255, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020256, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020257, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020258, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020259, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020260, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020261, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020262, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020263, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020264, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020265, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020266, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020267, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020268, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020269, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020270, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020271, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020272, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020273, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020274, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020275, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020276, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020277, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020278, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020279, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020280, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020281, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020282, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020283, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020284, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020285, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020286, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020287, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020288, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020289, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020290, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020291, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020292, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020293, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020294, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020295, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020296, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020297, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020298, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020299, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020300, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020301, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020302, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020303, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020304, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020305, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020306, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020307, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020308, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020309, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020310, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020311, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020312, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020313, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020314, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020315, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020316, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020317, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020318, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020319, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020320, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020321, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020322, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020323, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020324, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020325, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020326, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020327, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020328, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020329, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020330, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020331, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020332, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020333, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020334, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020335, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020336, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020337, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020338, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020339, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020340, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020341, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020342, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020343, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020344, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020345, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020346, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020347, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020348, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020349, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020350, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020351, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020352, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020353, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020354, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020355, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020356, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020357, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020358, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020359, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020360, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020361, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020362, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020363, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020364, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020365, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020366, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020367, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020368, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020369, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020370, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020371, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020372, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020373, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020374, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020375, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020376, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020377, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020378, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020379, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020380, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020381, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020382, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020383, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020384, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020385, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020386, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020387, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020388, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020389, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020390, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020391, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020392, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020393, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020394, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020395, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020396, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020397, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020398, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020399, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020400, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020401, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020402, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020403, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020404, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020405, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020406, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020407, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020408, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020409, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020410, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020411, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020412, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020413, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020414, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020415, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020416, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020417, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020418, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020419, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020420, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020421, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020422, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020423, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020424, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020425, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020426, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020427, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020428, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020429, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020430, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020431, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020432, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020433, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020434, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020435, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020436, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020437, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020438, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020439, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020440, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020441, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020442, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020443, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020444, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020445, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020446, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020447, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020448, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020449, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020450, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020451, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020452, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020453, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020454, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020455, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020456, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020457, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020458, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020459, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020460, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020461, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020462, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020463, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020464, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020465, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020466, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020467, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020468, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020469, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020470, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020471, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020472, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020473, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020474, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020475, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020476, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020477, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020478, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020479, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020480, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020481, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020482, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020483, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020484, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020485, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020486, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020487, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020488, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020489, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020490, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020491, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020492, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020493, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020494, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020495, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020496, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020497, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020498, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020499, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020500, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020501, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020502, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020503, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020504, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020505, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020506, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020507, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020508, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020509, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020510, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020511, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020512, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020513, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020514, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020515, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020516, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020517, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020518, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020519, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020520, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020521, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020522, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020523, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020524, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020525, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020526, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020527, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020528, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020529, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020530, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020531, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020532, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020533, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020534, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020535, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020536, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020537, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020538, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020539, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020540, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020541, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020542, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadbroadcast_nonconst_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020543, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020544, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020545, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020546, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswaphorizontal_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020547, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020548, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020549, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020550, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapvertical_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020551, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020552, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020553, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020554, "dEQP-VK.subgroups.quad.framebuffer.subgroupquadswapdiagonal_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020555, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020556, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020557, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020558, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020559, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020560, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020561, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020562, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020563, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020564, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020565, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020566, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020567, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020568, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020569, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020570, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020571, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020572, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020573, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020574, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020575, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020576, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020577, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020578, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020579, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020580, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020581, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020582, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020583, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020584, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020585, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020586, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020587, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020588, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020589, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020590, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020591, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020592, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020593, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020594, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020595, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020596, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020597, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020598, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020599, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020600, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020601, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020602, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020603, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020604, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020605, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020606, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020607, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020608, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020609, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020610, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020611, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020612, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020613, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020614, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020615, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020616, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020617, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020618, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020619, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020620, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020621, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020622, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020623, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020624, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020625, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020626, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020627, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020628, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020629, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020630, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020631, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020632, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020633, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020634, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020635, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020636, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020637, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020638, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020639, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020640, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020641, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020642, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020643, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020644, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020645, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020646, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020647, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020648, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020649, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020650, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020651, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020652, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020653, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020654, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020655, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020656, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020657, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020658, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020659, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020660, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020661, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadbroadcast_nonconst_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020662, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswaphorizontal_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020663, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapvertical_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0006TS, TC020664, "dEQP-VK.subgroups.quad.ray_tracing.subgroupquadswapdiagonal_bvec4.*");
