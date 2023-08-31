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

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000919, "dEQP-VK.ubo.instance_array_basic_type.std140.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000920, "dEQP-VK.ubo.instance_array_basic_type.std140.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000921, "dEQP-VK.ubo.instance_array_basic_type.std140.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000922, "dEQP-VK.ubo.instance_array_basic_type.std140.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000923, "dEQP-VK.ubo.instance_array_basic_type.std140.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000924, "dEQP-VK.ubo.instance_array_basic_type.std140.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000925, "dEQP-VK.ubo.instance_array_basic_type.std140.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000926, "dEQP-VK.ubo.instance_array_basic_type.std140.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000927, "dEQP-VK.ubo.instance_array_basic_type.std140.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000928, "dEQP-VK.ubo.instance_array_basic_type.std140.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000929, "dEQP-VK.ubo.instance_array_basic_type.std140.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000930, "dEQP-VK.ubo.instance_array_basic_type.std140.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000931, "dEQP-VK.ubo.instance_array_basic_type.std140.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000932, "dEQP-VK.ubo.instance_array_basic_type.std140.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000933, "dEQP-VK.ubo.instance_array_basic_type.std140.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000934, "dEQP-VK.ubo.instance_array_basic_type.std140.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000935, "dEQP-VK.ubo.instance_array_basic_type.std140.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000936, "dEQP-VK.ubo.instance_array_basic_type.std140.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000937, "dEQP-VK.ubo.instance_array_basic_type.std140.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000938, "dEQP-VK.ubo.instance_array_basic_type.std140.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000939, "dEQP-VK.ubo.instance_array_basic_type.std140.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000940, "dEQP-VK.ubo.instance_array_basic_type.std140.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000941, "dEQP-VK.ubo.instance_array_basic_type.std140.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000942, "dEQP-VK.ubo.instance_array_basic_type.std140.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000943, "dEQP-VK.ubo.instance_array_basic_type.std140.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000944, "dEQP-VK.ubo.instance_array_basic_type.std140.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000945, "dEQP-VK.ubo.instance_array_basic_type.std140.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000946, "dEQP-VK.ubo.instance_array_basic_type.std140.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000947, "dEQP-VK.ubo.instance_array_basic_type.std140.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000948, "dEQP-VK.ubo.instance_array_basic_type.std140.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000949, "dEQP-VK.ubo.instance_array_basic_type.std140.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000950, "dEQP-VK.ubo.instance_array_basic_type.std140.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000951, "dEQP-VK.ubo.instance_array_basic_type.std140.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000952, "dEQP-VK.ubo.instance_array_basic_type.std140.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000953, "dEQP-VK.ubo.instance_array_basic_type.std140.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000954, "dEQP-VK.ubo.instance_array_basic_type.std140.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000955, "dEQP-VK.ubo.instance_array_basic_type.std140.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000956, "dEQP-VK.ubo.instance_array_basic_type.std140.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000957, "dEQP-VK.ubo.instance_array_basic_type.std140.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000958, "dEQP-VK.ubo.instance_array_basic_type.std140.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000959, "dEQP-VK.ubo.instance_array_basic_type.std140.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000960, "dEQP-VK.ubo.instance_array_basic_type.std140.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000961, "dEQP-VK.ubo.instance_array_basic_type.std140.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000962, "dEQP-VK.ubo.instance_array_basic_type.std140.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000963, "dEQP-VK.ubo.instance_array_basic_type.std140.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000964, "dEQP-VK.ubo.instance_array_basic_type.std140.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000965, "dEQP-VK.ubo.instance_array_basic_type.std140.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000966, "dEQP-VK.ubo.instance_array_basic_type.std140.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000967, "dEQP-VK.ubo.instance_array_basic_type.std140.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000968, "dEQP-VK.ubo.instance_array_basic_type.std140.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000969, "dEQP-VK.ubo.instance_array_basic_type.std140.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000970, "dEQP-VK.ubo.instance_array_basic_type.std140.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000971, "dEQP-VK.ubo.instance_array_basic_type.std140.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000972, "dEQP-VK.ubo.instance_array_basic_type.std140.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000973, "dEQP-VK.ubo.instance_array_basic_type.std140.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000974, "dEQP-VK.ubo.instance_array_basic_type.std140.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000975, "dEQP-VK.ubo.instance_array_basic_type.std140.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000976, "dEQP-VK.ubo.instance_array_basic_type.std140.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000977, "dEQP-VK.ubo.instance_array_basic_type.std140.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000978, "dEQP-VK.ubo.instance_array_basic_type.std140.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000979, "dEQP-VK.ubo.instance_array_basic_type.std140.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000980, "dEQP-VK.ubo.instance_array_basic_type.std140.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000981, "dEQP-VK.ubo.instance_array_basic_type.std140.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000982, "dEQP-VK.ubo.instance_array_basic_type.std430.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000983, "dEQP-VK.ubo.instance_array_basic_type.std430.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000984, "dEQP-VK.ubo.instance_array_basic_type.std430.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000985, "dEQP-VK.ubo.instance_array_basic_type.std430.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000986, "dEQP-VK.ubo.instance_array_basic_type.std430.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000987, "dEQP-VK.ubo.instance_array_basic_type.std430.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000988, "dEQP-VK.ubo.instance_array_basic_type.std430.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000989, "dEQP-VK.ubo.instance_array_basic_type.std430.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000990, "dEQP-VK.ubo.instance_array_basic_type.std430.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000991, "dEQP-VK.ubo.instance_array_basic_type.std430.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000992, "dEQP-VK.ubo.instance_array_basic_type.std430.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000993, "dEQP-VK.ubo.instance_array_basic_type.std430.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000994, "dEQP-VK.ubo.instance_array_basic_type.std430.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000995, "dEQP-VK.ubo.instance_array_basic_type.std430.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000996, "dEQP-VK.ubo.instance_array_basic_type.std430.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000997, "dEQP-VK.ubo.instance_array_basic_type.std430.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000998, "dEQP-VK.ubo.instance_array_basic_type.std430.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC000999, "dEQP-VK.ubo.instance_array_basic_type.std430.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001000, "dEQP-VK.ubo.instance_array_basic_type.std430.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001001, "dEQP-VK.ubo.instance_array_basic_type.std430.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001002, "dEQP-VK.ubo.instance_array_basic_type.std430.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001003, "dEQP-VK.ubo.instance_array_basic_type.std430.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001004, "dEQP-VK.ubo.instance_array_basic_type.std430.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001005, "dEQP-VK.ubo.instance_array_basic_type.std430.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001006, "dEQP-VK.ubo.instance_array_basic_type.std430.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001007, "dEQP-VK.ubo.instance_array_basic_type.std430.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001008, "dEQP-VK.ubo.instance_array_basic_type.std430.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001009, "dEQP-VK.ubo.instance_array_basic_type.std430.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001010, "dEQP-VK.ubo.instance_array_basic_type.std430.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001011, "dEQP-VK.ubo.instance_array_basic_type.std430.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001012, "dEQP-VK.ubo.instance_array_basic_type.std430.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001013, "dEQP-VK.ubo.instance_array_basic_type.std430.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001014, "dEQP-VK.ubo.instance_array_basic_type.std430.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001015, "dEQP-VK.ubo.instance_array_basic_type.std430.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001016, "dEQP-VK.ubo.instance_array_basic_type.std430.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001017, "dEQP-VK.ubo.instance_array_basic_type.std430.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001018, "dEQP-VK.ubo.instance_array_basic_type.std430.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001019, "dEQP-VK.ubo.instance_array_basic_type.std430.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001020, "dEQP-VK.ubo.instance_array_basic_type.std430.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001021, "dEQP-VK.ubo.instance_array_basic_type.std430.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001022, "dEQP-VK.ubo.instance_array_basic_type.std430.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001023, "dEQP-VK.ubo.instance_array_basic_type.std430.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001024, "dEQP-VK.ubo.instance_array_basic_type.std430.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001025, "dEQP-VK.ubo.instance_array_basic_type.std430.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001026, "dEQP-VK.ubo.instance_array_basic_type.std430.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001027, "dEQP-VK.ubo.instance_array_basic_type.std430.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001028, "dEQP-VK.ubo.instance_array_basic_type.std430.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001029, "dEQP-VK.ubo.instance_array_basic_type.std430.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001030, "dEQP-VK.ubo.instance_array_basic_type.std430.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001031, "dEQP-VK.ubo.instance_array_basic_type.std430.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001032, "dEQP-VK.ubo.instance_array_basic_type.std430.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001033, "dEQP-VK.ubo.instance_array_basic_type.std430.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001034, "dEQP-VK.ubo.instance_array_basic_type.std430.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001035, "dEQP-VK.ubo.instance_array_basic_type.std430.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001036, "dEQP-VK.ubo.instance_array_basic_type.std430.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001037, "dEQP-VK.ubo.instance_array_basic_type.std430.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001038, "dEQP-VK.ubo.instance_array_basic_type.std430.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001039, "dEQP-VK.ubo.instance_array_basic_type.std430.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001040, "dEQP-VK.ubo.instance_array_basic_type.std430.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001041, "dEQP-VK.ubo.instance_array_basic_type.std430.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001042, "dEQP-VK.ubo.instance_array_basic_type.std430.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001043, "dEQP-VK.ubo.instance_array_basic_type.std430.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001044, "dEQP-VK.ubo.instance_array_basic_type.std430.f16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001045, "dEQP-VK.ubo.instance_array_basic_type.scalar.float.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001046, "dEQP-VK.ubo.instance_array_basic_type.scalar.vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001047, "dEQP-VK.ubo.instance_array_basic_type.scalar.vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001048, "dEQP-VK.ubo.instance_array_basic_type.scalar.vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001049, "dEQP-VK.ubo.instance_array_basic_type.scalar.int.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001050, "dEQP-VK.ubo.instance_array_basic_type.scalar.ivec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001051, "dEQP-VK.ubo.instance_array_basic_type.scalar.ivec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001052, "dEQP-VK.ubo.instance_array_basic_type.scalar.ivec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001053, "dEQP-VK.ubo.instance_array_basic_type.scalar.uint.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001054, "dEQP-VK.ubo.instance_array_basic_type.scalar.uvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001055, "dEQP-VK.ubo.instance_array_basic_type.scalar.uvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001056, "dEQP-VK.ubo.instance_array_basic_type.scalar.uvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001057, "dEQP-VK.ubo.instance_array_basic_type.scalar.bool.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001058, "dEQP-VK.ubo.instance_array_basic_type.scalar.bvec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001059, "dEQP-VK.ubo.instance_array_basic_type.scalar.bvec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001060, "dEQP-VK.ubo.instance_array_basic_type.scalar.bvec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001061, "dEQP-VK.ubo.instance_array_basic_type.scalar.mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001062, "dEQP-VK.ubo.instance_array_basic_type.scalar.row_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001063, "dEQP-VK.ubo.instance_array_basic_type.scalar.column_major_mat2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001064, "dEQP-VK.ubo.instance_array_basic_type.scalar.mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001065, "dEQP-VK.ubo.instance_array_basic_type.scalar.row_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001066, "dEQP-VK.ubo.instance_array_basic_type.scalar.column_major_mat3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001067, "dEQP-VK.ubo.instance_array_basic_type.scalar.mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001068, "dEQP-VK.ubo.instance_array_basic_type.scalar.row_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001069, "dEQP-VK.ubo.instance_array_basic_type.scalar.column_major_mat4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001070, "dEQP-VK.ubo.instance_array_basic_type.scalar.mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001071, "dEQP-VK.ubo.instance_array_basic_type.scalar.row_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001072, "dEQP-VK.ubo.instance_array_basic_type.scalar.column_major_mat2x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001073, "dEQP-VK.ubo.instance_array_basic_type.scalar.mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001074, "dEQP-VK.ubo.instance_array_basic_type.scalar.row_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001075, "dEQP-VK.ubo.instance_array_basic_type.scalar.column_major_mat2x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001076, "dEQP-VK.ubo.instance_array_basic_type.scalar.mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001077, "dEQP-VK.ubo.instance_array_basic_type.scalar.row_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001078, "dEQP-VK.ubo.instance_array_basic_type.scalar.column_major_mat3x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001079, "dEQP-VK.ubo.instance_array_basic_type.scalar.mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001080, "dEQP-VK.ubo.instance_array_basic_type.scalar.row_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001081, "dEQP-VK.ubo.instance_array_basic_type.scalar.column_major_mat3x4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001082, "dEQP-VK.ubo.instance_array_basic_type.scalar.mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001083, "dEQP-VK.ubo.instance_array_basic_type.scalar.row_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001084, "dEQP-VK.ubo.instance_array_basic_type.scalar.column_major_mat4x2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001085, "dEQP-VK.ubo.instance_array_basic_type.scalar.mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001086, "dEQP-VK.ubo.instance_array_basic_type.scalar.row_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001087, "dEQP-VK.ubo.instance_array_basic_type.scalar.column_major_mat4x3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001088, "dEQP-VK.ubo.instance_array_basic_type.scalar.uint8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001089, "dEQP-VK.ubo.instance_array_basic_type.scalar.u8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001090, "dEQP-VK.ubo.instance_array_basic_type.scalar.u8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001091, "dEQP-VK.ubo.instance_array_basic_type.scalar.u8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001092, "dEQP-VK.ubo.instance_array_basic_type.scalar.int8_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001093, "dEQP-VK.ubo.instance_array_basic_type.scalar.i8vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001094, "dEQP-VK.ubo.instance_array_basic_type.scalar.i8vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001095, "dEQP-VK.ubo.instance_array_basic_type.scalar.i8vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001096, "dEQP-VK.ubo.instance_array_basic_type.scalar.uint16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001097, "dEQP-VK.ubo.instance_array_basic_type.scalar.u16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001098, "dEQP-VK.ubo.instance_array_basic_type.scalar.u16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001099, "dEQP-VK.ubo.instance_array_basic_type.scalar.u16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001100, "dEQP-VK.ubo.instance_array_basic_type.scalar.int16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001101, "dEQP-VK.ubo.instance_array_basic_type.scalar.i16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001102, "dEQP-VK.ubo.instance_array_basic_type.scalar.i16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001103, "dEQP-VK.ubo.instance_array_basic_type.scalar.i16vec4.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001104, "dEQP-VK.ubo.instance_array_basic_type.scalar.float16_t.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001105, "dEQP-VK.ubo.instance_array_basic_type.scalar.f16vec2.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001106, "dEQP-VK.ubo.instance_array_basic_type.scalar.f16vec3.*");

static SHRINK_HWTEST_F(ActsUbo0001TS, TC001107, "dEQP-VK.ubo.instance_array_basic_type.scalar.f16vec4.*");
