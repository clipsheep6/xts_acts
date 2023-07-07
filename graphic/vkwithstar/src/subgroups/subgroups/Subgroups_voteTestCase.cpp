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
#include "../ActsSubgroups0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000107, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000108, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000109, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000110, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000111, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000112, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000113, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000114, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000115, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000116, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000117, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000118, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000119, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000120, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000121, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000122, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000123, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000124, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000125, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000126, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000127, "dEQP-VK.subgroups.vote.graphics.subgroupall_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000128, "dEQP-VK.subgroups.vote.graphics.subgroupany_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000129, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000130, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000131, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000132, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000133, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000134, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000135, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000136, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000137, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000138, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000139, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000140, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000141, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000142, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000143, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000144, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000145, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000146, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000147, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000148, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000149, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000150, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000151, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000152, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000153, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000154, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000155, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000156, "dEQP-VK.subgroups.vote.graphics.subgroupallequal_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000157, "dEQP-VK.subgroups.vote.compute.subgroupallequal_int8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000158, "dEQP-VK.subgroups.vote.compute.subgroupallequal_int8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000159, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000160, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000161, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000162, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000163, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000164, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000165, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000166, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uint8_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000167, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u8vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000168, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u8vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000169, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000170, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u8vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000171, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000172, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u8vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000173, "dEQP-VK.subgroups.vote.compute.subgroupallequal_int16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000174, "dEQP-VK.subgroups.vote.compute.subgroupallequal_int16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000175, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000176, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000177, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000178, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000179, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000180, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000181, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000182, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uint16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000183, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000184, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000185, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000186, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000187, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000188, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000189, "dEQP-VK.subgroups.vote.compute.subgroupallequal_int.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000190, "dEQP-VK.subgroups.vote.compute.subgroupallequal_int_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000191, "dEQP-VK.subgroups.vote.compute.subgroupallequal_ivec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000192, "dEQP-VK.subgroups.vote.compute.subgroupallequal_ivec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000193, "dEQP-VK.subgroups.vote.compute.subgroupallequal_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000194, "dEQP-VK.subgroups.vote.compute.subgroupallequal_ivec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000195, "dEQP-VK.subgroups.vote.compute.subgroupallequal_ivec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000196, "dEQP-VK.subgroups.vote.compute.subgroupallequal_ivec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000197, "dEQP-VK.subgroups.vote.compute.subgroupall_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000198, "dEQP-VK.subgroups.vote.compute.subgroupall_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000199, "dEQP-VK.subgroups.vote.compute.subgroupany_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000200, "dEQP-VK.subgroups.vote.compute.subgroupany_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000201, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000202, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uint_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000203, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000204, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000205, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000206, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000207, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000208, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000209, "dEQP-VK.subgroups.vote.compute.subgroupallequal_int64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000210, "dEQP-VK.subgroups.vote.compute.subgroupallequal_int64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000211, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000212, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000213, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000214, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000215, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000216, "dEQP-VK.subgroups.vote.compute.subgroupallequal_i64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000217, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000218, "dEQP-VK.subgroups.vote.compute.subgroupallequal_uint64_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000219, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u64vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000220, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u64vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000221, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000222, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u64vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000223, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000224, "dEQP-VK.subgroups.vote.compute.subgroupallequal_u64vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000225, "dEQP-VK.subgroups.vote.compute.subgroupallequal_float16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000226, "dEQP-VK.subgroups.vote.compute.subgroupallequal_float16_t_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000227, "dEQP-VK.subgroups.vote.compute.subgroupallequal_f16vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000228, "dEQP-VK.subgroups.vote.compute.subgroupallequal_f16vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000229, "dEQP-VK.subgroups.vote.compute.subgroupallequal_f16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000230, "dEQP-VK.subgroups.vote.compute.subgroupallequal_f16vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000231, "dEQP-VK.subgroups.vote.compute.subgroupallequal_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000232, "dEQP-VK.subgroups.vote.compute.subgroupallequal_f16vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000233, "dEQP-VK.subgroups.vote.compute.subgroupallequal_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000234, "dEQP-VK.subgroups.vote.compute.subgroupallequal_float_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000235, "dEQP-VK.subgroups.vote.compute.subgroupallequal_vec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000236, "dEQP-VK.subgroups.vote.compute.subgroupallequal_vec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000237, "dEQP-VK.subgroups.vote.compute.subgroupallequal_vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000238, "dEQP-VK.subgroups.vote.compute.subgroupallequal_vec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000239, "dEQP-VK.subgroups.vote.compute.subgroupallequal_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000240, "dEQP-VK.subgroups.vote.compute.subgroupallequal_vec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000241, "dEQP-VK.subgroups.vote.compute.subgroupallequal_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000242, "dEQP-VK.subgroups.vote.compute.subgroupallequal_double_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000243, "dEQP-VK.subgroups.vote.compute.subgroupallequal_dvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000244, "dEQP-VK.subgroups.vote.compute.subgroupallequal_dvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000245, "dEQP-VK.subgroups.vote.compute.subgroupallequal_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000246, "dEQP-VK.subgroups.vote.compute.subgroupallequal_dvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000247, "dEQP-VK.subgroups.vote.compute.subgroupallequal_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000248, "dEQP-VK.subgroups.vote.compute.subgroupallequal_dvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000249, "dEQP-VK.subgroups.vote.compute.subgroupallequal_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000250, "dEQP-VK.subgroups.vote.compute.subgroupallequal_bool_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000251, "dEQP-VK.subgroups.vote.compute.subgroupallequal_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000252, "dEQP-VK.subgroups.vote.compute.subgroupallequal_bvec2_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000253, "dEQP-VK.subgroups.vote.compute.subgroupallequal_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000254, "dEQP-VK.subgroups.vote.compute.subgroupallequal_bvec3_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000255, "dEQP-VK.subgroups.vote.compute.subgroupallequal_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000256, "dEQP-VK.subgroups.vote.compute.subgroupallequal_bvec4_requiredsubgroupsize.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000257, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000258, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000259, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000260, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000261, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000262, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000263, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000264, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000265, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000266, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000267, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000268, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000269, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000270, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000271, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000272, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000273, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint8_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000274, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint8_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000275, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint8_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000276, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint8_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000277, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000278, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000279, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000280, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000281, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000282, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000283, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000284, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000285, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000286, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000287, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000288, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u8vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000289, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000290, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000291, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000292, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000293, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000294, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000295, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000296, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000297, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000298, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000299, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000300, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000301, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000302, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000303, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000304, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000305, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000306, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000307, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000308, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000309, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000310, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000311, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000312, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000313, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000314, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000315, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000316, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000317, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000318, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000319, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000320, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000321, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000322, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000323, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000324, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000325, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000326, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000327, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000328, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000329, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000330, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000331, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000332, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000333, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000334, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000335, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000336, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_ivec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000337, "dEQP-VK.subgroups.vote.framebuffer.subgroupall_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000338, "dEQP-VK.subgroups.vote.framebuffer.subgroupall_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000339, "dEQP-VK.subgroups.vote.framebuffer.subgroupall_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000340, "dEQP-VK.subgroups.vote.framebuffer.subgroupall_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000341, "dEQP-VK.subgroups.vote.framebuffer.subgroupany_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000342, "dEQP-VK.subgroups.vote.framebuffer.subgroupany_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000343, "dEQP-VK.subgroups.vote.framebuffer.subgroupany_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000344, "dEQP-VK.subgroups.vote.framebuffer.subgroupany_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000345, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000346, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000347, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000348, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000349, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000350, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000351, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000352, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000353, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000354, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000355, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000356, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000357, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000358, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000359, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000360, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000361, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000362, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000363, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000364, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_int64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000365, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000366, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000367, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000368, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000369, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000370, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000371, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000372, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000373, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000374, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000375, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000376, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_i64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000377, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint64_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000378, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint64_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000379, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint64_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000380, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_uint64_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000381, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000382, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000383, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000384, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000385, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000386, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000387, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000388, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000389, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000390, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000391, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000392, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_u64vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000393, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_float16_t_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000394, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_float16_t_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000395, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_float16_t_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000396, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_float16_t_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000397, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000398, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000399, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000400, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000401, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000402, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000403, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000404, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000405, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000406, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000407, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000408, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_f16vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000409, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_float_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000410, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_float_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000411, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_float_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000412, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_float_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000413, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000414, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000415, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000416, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000417, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000418, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000419, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000420, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000421, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000422, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000423, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000424, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_vec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000425, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_double_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000426, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_double_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000427, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_double_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000428, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_double_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000429, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000430, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000431, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000432, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000433, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000434, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000435, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000436, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000437, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000438, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000439, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000440, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_dvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000441, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bool_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000442, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bool_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000443, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bool_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000444, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bool_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000445, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec2_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000446, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec2_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000447, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec2_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000448, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec2_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000449, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec3_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000450, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec3_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000451, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec3_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000452, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec3_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000453, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec4_vertex.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000454, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec4_tess_eval.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000455, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec4_tess_control.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000456, "dEQP-VK.subgroups.vote.framebuffer.subgroupallequal_bvec4_geometry.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000457, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_int8_t_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000458, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_i8vec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000459, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_i8vec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000460, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_i8vec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000461, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_uint8_t_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000462, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_u8vec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000463, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_u8vec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000464, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_u8vec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000465, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_int16_t_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000466, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_i16vec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000467, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_i16vec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000468, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_i16vec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000469, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_uint16_t_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000470, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_u16vec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000471, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_u16vec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000472, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_u16vec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000473, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_int_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000474, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_ivec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000475, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_ivec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000476, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_ivec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000477, "dEQP-VK.subgroups.vote.frag_helper.subgroupall_uint_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000478, "dEQP-VK.subgroups.vote.frag_helper.subgroupany_uint_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000479, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_uint_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000480, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_uvec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000481, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_uvec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000482, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_uvec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000483, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_int64_t_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000484, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_i64vec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000485, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_i64vec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000486, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_i64vec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000487, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_uint64_t_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000488, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_u64vec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000489, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_u64vec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000490, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_u64vec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000491, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_float16_t_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000492, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_f16vec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000493, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_f16vec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000494, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_f16vec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000495, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_float_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000496, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_vec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000497, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_vec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000498, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_vec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000499, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_double_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000500, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_dvec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000501, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_dvec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000502, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_dvec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000503, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_bool_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000504, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_bvec2_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000505, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_bvec3_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000506, "dEQP-VK.subgroups.vote.frag_helper.subgroupallequal_bvec4_fragment.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000507, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_i8vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000508, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_uint8_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000509, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_u8vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000510, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_i16vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000511, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_uint16_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000512, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_u16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000513, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_ivec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000514, "dEQP-VK.subgroups.vote.ray_tracing.subgroupall_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000515, "dEQP-VK.subgroups.vote.ray_tracing.subgroupany_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000516, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_uint.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000517, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_uvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000518, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_i64vec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000519, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_uint64_t.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000520, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_u64vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000521, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_f16vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000522, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_float.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000523, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_vec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000524, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_double.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000525, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_dvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000526, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_dvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000527, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_bool.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000528, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_bvec2.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000529, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_bvec3.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000530, "dEQP-VK.subgroups.vote.ray_tracing.subgroupallequal_bvec4.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000531, "dEQP-VK.subgroups.vote.ext_shader_subgroup_vote.graphics.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000532, "dEQP-VK.subgroups.vote.ext_shader_subgroup_vote.compute.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000533, "dEQP-VK.subgroups.vote.ext_shader_subgroup_vote.framebuffer.*");

static SHRINK_HWTEST_F(ActsSubgroups0001TS, TC000534, "dEQP-VK.subgroups.vote.ext_shader_subgroup_vote.frag_helper.*");
