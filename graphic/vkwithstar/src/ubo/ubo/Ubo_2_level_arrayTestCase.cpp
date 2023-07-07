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

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000001, "dEQP-VK.ubo.2_level_array.std140.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000002, "dEQP-VK.ubo.2_level_array.std140.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000003, "dEQP-VK.ubo.2_level_array.std140.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000004, "dEQP-VK.ubo.2_level_array.std140.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000005, "dEQP-VK.ubo.2_level_array.std140.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000006, "dEQP-VK.ubo.2_level_array.std140.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000007, "dEQP-VK.ubo.2_level_array.std140.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000008, "dEQP-VK.ubo.2_level_array.std140.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000009, "dEQP-VK.ubo.2_level_array.std140.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000010, "dEQP-VK.ubo.2_level_array.std140.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000011, "dEQP-VK.ubo.2_level_array.std140.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000012, "dEQP-VK.ubo.2_level_array.std140.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000013, "dEQP-VK.ubo.2_level_array.std140.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000014, "dEQP-VK.ubo.2_level_array.std140.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000015, "dEQP-VK.ubo.2_level_array.std140.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000016, "dEQP-VK.ubo.2_level_array.std140.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000017, "dEQP-VK.ubo.2_level_array.std140.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000018, "dEQP-VK.ubo.2_level_array.std140.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000019, "dEQP-VK.ubo.2_level_array.std140.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000020, "dEQP-VK.ubo.2_level_array.std140.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000021, "dEQP-VK.ubo.2_level_array.std140.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000022, "dEQP-VK.ubo.2_level_array.std140.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000023, "dEQP-VK.ubo.2_level_array.std140.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000024, "dEQP-VK.ubo.2_level_array.std140.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000025, "dEQP-VK.ubo.2_level_array.std140.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000026, "dEQP-VK.ubo.2_level_array.std140.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000027, "dEQP-VK.ubo.2_level_array.std140.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000028, "dEQP-VK.ubo.2_level_array.std140.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000029, "dEQP-VK.ubo.2_level_array.std140.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000030, "dEQP-VK.ubo.2_level_array.std140.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000031, "dEQP-VK.ubo.2_level_array.std140.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000032, "dEQP-VK.ubo.2_level_array.std140.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000033, "dEQP-VK.ubo.2_level_array.std140.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000034, "dEQP-VK.ubo.2_level_array.std140.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000035, "dEQP-VK.ubo.2_level_array.std140.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000036, "dEQP-VK.ubo.2_level_array.std140.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000037, "dEQP-VK.ubo.2_level_array.std140.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000038, "dEQP-VK.ubo.2_level_array.std140.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000039, "dEQP-VK.ubo.2_level_array.std140.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000040, "dEQP-VK.ubo.2_level_array.std140.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000041, "dEQP-VK.ubo.2_level_array.std140.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000042, "dEQP-VK.ubo.2_level_array.std140.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000043, "dEQP-VK.ubo.2_level_array.std140.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000044, "dEQP-VK.ubo.2_level_array.std140.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000045, "dEQP-VK.ubo.2_level_array.std140.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000046, "dEQP-VK.ubo.2_level_array.std140.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000047, "dEQP-VK.ubo.2_level_array.std140.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000048, "dEQP-VK.ubo.2_level_array.std140.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000049, "dEQP-VK.ubo.2_level_array.std140.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000050, "dEQP-VK.ubo.2_level_array.std140.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000051, "dEQP-VK.ubo.2_level_array.std140.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000052, "dEQP-VK.ubo.2_level_array.std140.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000053, "dEQP-VK.ubo.2_level_array.std140.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000054, "dEQP-VK.ubo.2_level_array.std140.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000055, "dEQP-VK.ubo.2_level_array.std140.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000056, "dEQP-VK.ubo.2_level_array.std140.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000057, "dEQP-VK.ubo.2_level_array.std140.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000058, "dEQP-VK.ubo.2_level_array.std140.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000059, "dEQP-VK.ubo.2_level_array.std140.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000060, "dEQP-VK.ubo.2_level_array.std140.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000061, "dEQP-VK.ubo.2_level_array.std140.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000062, "dEQP-VK.ubo.2_level_array.std140.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000063, "dEQP-VK.ubo.2_level_array.std140.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000064, "dEQP-VK.ubo.2_level_array.std430.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000065, "dEQP-VK.ubo.2_level_array.std430.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000066, "dEQP-VK.ubo.2_level_array.std430.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000067, "dEQP-VK.ubo.2_level_array.std430.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000068, "dEQP-VK.ubo.2_level_array.std430.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000069, "dEQP-VK.ubo.2_level_array.std430.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000070, "dEQP-VK.ubo.2_level_array.std430.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000071, "dEQP-VK.ubo.2_level_array.std430.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000072, "dEQP-VK.ubo.2_level_array.std430.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000073, "dEQP-VK.ubo.2_level_array.std430.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000074, "dEQP-VK.ubo.2_level_array.std430.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000075, "dEQP-VK.ubo.2_level_array.std430.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000076, "dEQP-VK.ubo.2_level_array.std430.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000077, "dEQP-VK.ubo.2_level_array.std430.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000078, "dEQP-VK.ubo.2_level_array.std430.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000079, "dEQP-VK.ubo.2_level_array.std430.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000080, "dEQP-VK.ubo.2_level_array.std430.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000081, "dEQP-VK.ubo.2_level_array.std430.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000082, "dEQP-VK.ubo.2_level_array.std430.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000083, "dEQP-VK.ubo.2_level_array.std430.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000084, "dEQP-VK.ubo.2_level_array.std430.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000085, "dEQP-VK.ubo.2_level_array.std430.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000086, "dEQP-VK.ubo.2_level_array.std430.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000087, "dEQP-VK.ubo.2_level_array.std430.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000088, "dEQP-VK.ubo.2_level_array.std430.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000089, "dEQP-VK.ubo.2_level_array.std430.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000090, "dEQP-VK.ubo.2_level_array.std430.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000091, "dEQP-VK.ubo.2_level_array.std430.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000092, "dEQP-VK.ubo.2_level_array.std430.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000093, "dEQP-VK.ubo.2_level_array.std430.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000094, "dEQP-VK.ubo.2_level_array.std430.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000095, "dEQP-VK.ubo.2_level_array.std430.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000096, "dEQP-VK.ubo.2_level_array.std430.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000097, "dEQP-VK.ubo.2_level_array.std430.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000098, "dEQP-VK.ubo.2_level_array.std430.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000099, "dEQP-VK.ubo.2_level_array.std430.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000100, "dEQP-VK.ubo.2_level_array.std430.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000101, "dEQP-VK.ubo.2_level_array.std430.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000102, "dEQP-VK.ubo.2_level_array.std430.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000103, "dEQP-VK.ubo.2_level_array.std430.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000104, "dEQP-VK.ubo.2_level_array.std430.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000105, "dEQP-VK.ubo.2_level_array.std430.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000106, "dEQP-VK.ubo.2_level_array.std430.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000107, "dEQP-VK.ubo.2_level_array.std430.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000108, "dEQP-VK.ubo.2_level_array.std430.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000109, "dEQP-VK.ubo.2_level_array.std430.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000110, "dEQP-VK.ubo.2_level_array.std430.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000111, "dEQP-VK.ubo.2_level_array.std430.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000112, "dEQP-VK.ubo.2_level_array.std430.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000113, "dEQP-VK.ubo.2_level_array.std430.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000114, "dEQP-VK.ubo.2_level_array.std430.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000115, "dEQP-VK.ubo.2_level_array.std430.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000116, "dEQP-VK.ubo.2_level_array.std430.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000117, "dEQP-VK.ubo.2_level_array.std430.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000118, "dEQP-VK.ubo.2_level_array.std430.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000119, "dEQP-VK.ubo.2_level_array.std430.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000120, "dEQP-VK.ubo.2_level_array.std430.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000121, "dEQP-VK.ubo.2_level_array.std430.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000122, "dEQP-VK.ubo.2_level_array.std430.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000123, "dEQP-VK.ubo.2_level_array.std430.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000124, "dEQP-VK.ubo.2_level_array.std430.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000125, "dEQP-VK.ubo.2_level_array.std430.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000126, "dEQP-VK.ubo.2_level_array.std430.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000127, "dEQP-VK.ubo.2_level_array.scalar.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000128, "dEQP-VK.ubo.2_level_array.scalar.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000129, "dEQP-VK.ubo.2_level_array.scalar.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000130, "dEQP-VK.ubo.2_level_array.scalar.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000131, "dEQP-VK.ubo.2_level_array.scalar.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000132, "dEQP-VK.ubo.2_level_array.scalar.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000133, "dEQP-VK.ubo.2_level_array.scalar.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000134, "dEQP-VK.ubo.2_level_array.scalar.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000135, "dEQP-VK.ubo.2_level_array.scalar.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000136, "dEQP-VK.ubo.2_level_array.scalar.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000137, "dEQP-VK.ubo.2_level_array.scalar.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000138, "dEQP-VK.ubo.2_level_array.scalar.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000139, "dEQP-VK.ubo.2_level_array.scalar.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000140, "dEQP-VK.ubo.2_level_array.scalar.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000141, "dEQP-VK.ubo.2_level_array.scalar.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000142, "dEQP-VK.ubo.2_level_array.scalar.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000143, "dEQP-VK.ubo.2_level_array.scalar.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000144, "dEQP-VK.ubo.2_level_array.scalar.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000145, "dEQP-VK.ubo.2_level_array.scalar.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000146, "dEQP-VK.ubo.2_level_array.scalar.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000147, "dEQP-VK.ubo.2_level_array.scalar.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000148, "dEQP-VK.ubo.2_level_array.scalar.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000149, "dEQP-VK.ubo.2_level_array.scalar.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000150, "dEQP-VK.ubo.2_level_array.scalar.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000151, "dEQP-VK.ubo.2_level_array.scalar.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000152, "dEQP-VK.ubo.2_level_array.scalar.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000153, "dEQP-VK.ubo.2_level_array.scalar.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000154, "dEQP-VK.ubo.2_level_array.scalar.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000155, "dEQP-VK.ubo.2_level_array.scalar.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000156, "dEQP-VK.ubo.2_level_array.scalar.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000157, "dEQP-VK.ubo.2_level_array.scalar.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000158, "dEQP-VK.ubo.2_level_array.scalar.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000159, "dEQP-VK.ubo.2_level_array.scalar.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000160, "dEQP-VK.ubo.2_level_array.scalar.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000161, "dEQP-VK.ubo.2_level_array.scalar.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000162, "dEQP-VK.ubo.2_level_array.scalar.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000163, "dEQP-VK.ubo.2_level_array.scalar.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000164, "dEQP-VK.ubo.2_level_array.scalar.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000165, "dEQP-VK.ubo.2_level_array.scalar.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000166, "dEQP-VK.ubo.2_level_array.scalar.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000167, "dEQP-VK.ubo.2_level_array.scalar.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000168, "dEQP-VK.ubo.2_level_array.scalar.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000169, "dEQP-VK.ubo.2_level_array.scalar.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000170, "dEQP-VK.ubo.2_level_array.scalar.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000171, "dEQP-VK.ubo.2_level_array.scalar.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000172, "dEQP-VK.ubo.2_level_array.scalar.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000173, "dEQP-VK.ubo.2_level_array.scalar.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000174, "dEQP-VK.ubo.2_level_array.scalar.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000175, "dEQP-VK.ubo.2_level_array.scalar.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000176, "dEQP-VK.ubo.2_level_array.scalar.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000177, "dEQP-VK.ubo.2_level_array.scalar.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000178, "dEQP-VK.ubo.2_level_array.scalar.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000179, "dEQP-VK.ubo.2_level_array.scalar.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000180, "dEQP-VK.ubo.2_level_array.scalar.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000181, "dEQP-VK.ubo.2_level_array.scalar.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000182, "dEQP-VK.ubo.2_level_array.scalar.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000183, "dEQP-VK.ubo.2_level_array.scalar.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000184, "dEQP-VK.ubo.2_level_array.scalar.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000185, "dEQP-VK.ubo.2_level_array.scalar.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000186, "dEQP-VK.ubo.2_level_array.scalar.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000187, "dEQP-VK.ubo.2_level_array.scalar.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000188, "dEQP-VK.ubo.2_level_array.scalar.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000189, "dEQP-VK.ubo.2_level_array.scalar.f16vec4.*");
