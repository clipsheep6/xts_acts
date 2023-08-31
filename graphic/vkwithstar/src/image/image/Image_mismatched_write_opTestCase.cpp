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
#include "../ImageBaseFunc.h"
#include "../ActsImage0007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0007TS, TC012650, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba32f_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012651, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg32f_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012652, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg32f_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012653, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg32f_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012654, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32f_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012655, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32f_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012656, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32f_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012657, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32f_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012658, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba16f_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012659, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16f_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012660, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16f_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012661, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16f_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012662, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16f_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012663, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16f_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012664, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16f_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012665, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16f_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012666, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba16_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012667, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012668, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012669, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012670, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012671, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012672, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012673, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012674, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba16snorm_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012675, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16snorm_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012676, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16snorm_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012677, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16snorm_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012678, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16snorm_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012679, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16snorm_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012680, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16snorm_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012681, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16snorm_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012682, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgb10a2_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012683, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r11fg11fb10f_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012684, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r11fg11fb10f_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012685, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba8_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012686, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012687, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012688, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012689, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012690, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012691, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012692, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012693, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba8snorm_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012694, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8snorm_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012695, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8snorm_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012696, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8snorm_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012697, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8snorm_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012698, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8snorm_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012699, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8snorm_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012700, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8snorm_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012701, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba32i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012702, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg32i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012703, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg32i_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012704, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg32i_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012705, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012706, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32i_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012707, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32i_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012708, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32i_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012709, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba16i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012710, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012711, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16i_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012712, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16i_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012713, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012714, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16i_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012715, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16i_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012716, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16i_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012717, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba8i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012718, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012719, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8i_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012720, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8i_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012721, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012722, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8i_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012723, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8i_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012724, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8i_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012725, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba32ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012726, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg32ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012727, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg32ui_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012728, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg32ui_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012729, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012730, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32ui_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012731, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32ui_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012732, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r32ui_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012733, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba16ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012734, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012735, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16ui_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012736, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg16ui_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012737, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012738, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16ui_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012739, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16ui_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012740, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r16ui_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012741, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgb10a2ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012742, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rgba8ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012743, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012744, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8ui_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012745, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.rg8ui_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012746, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012747, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8ui_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012748, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8ui_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012749, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r8ui_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012750, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r64i_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012751, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r64i_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012752, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r64i_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012753, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r64i_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012754, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r64ui_from_vec4.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012755, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r64ui_from_vec3.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012756, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r64ui_from_vec2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012757, "dEQP-VK.image.mismatched_write_op.mismatched_vector_sizes.r64ui_from_scalar.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012758, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32f_from_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012759, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32f_from_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012760, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32f_from_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012761, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16f_from_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012762, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16f_from_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012763, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16f_from_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012764, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r11fg11fb10f_from_rgba32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012765, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32f_from_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012766, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32f_from_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012767, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32f_from_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012768, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16f_from_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012769, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16f_from_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012770, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16f_from_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012771, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r11fg11fb10f_from_rg32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012772, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32f_from_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012773, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32f_from_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012774, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32f_from_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012775, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16f_from_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012776, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16f_from_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012777, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16f_from_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012778, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r11fg11fb10f_from_r32f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012779, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32f_from_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012780, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32f_from_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012781, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32f_from_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012782, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16f_from_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012783, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16f_from_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012784, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16f_from_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012785, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r11fg11fb10f_from_rgba16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012786, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32f_from_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012787, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32f_from_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012788, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32f_from_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012789, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16f_from_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012790, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16f_from_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012791, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16f_from_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012792, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r11fg11fb10f_from_rg16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012793, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32f_from_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012794, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32f_from_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012795, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32f_from_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012796, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16f_from_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012797, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16f_from_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012798, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16f_from_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012799, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r11fg11fb10f_from_r16f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012800, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16_from_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012801, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16_from_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012802, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16_from_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012803, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2_from_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012804, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8_from_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012805, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8_from_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012806, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8_from_rgba16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012807, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16_from_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012808, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16_from_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012809, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16_from_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012810, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2_from_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012811, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8_from_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012812, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8_from_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012813, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8_from_rg16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012814, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16_from_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012815, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16_from_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012816, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16_from_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012817, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2_from_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012818, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8_from_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012819, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8_from_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012820, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8_from_r16.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012821, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16snorm_from_rgba16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012822, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16snorm_from_rgba16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012823, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16snorm_from_rgba16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012824, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8snorm_from_rgba16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012825, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8snorm_from_rgba16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012826, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8snorm_from_rgba16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012827, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16snorm_from_rg16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012828, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16snorm_from_rg16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012829, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16snorm_from_rg16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012830, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8snorm_from_rg16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012831, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8snorm_from_rg16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012832, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8snorm_from_rg16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012833, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16snorm_from_r16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012834, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16snorm_from_r16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012835, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16snorm_from_r16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012836, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8snorm_from_r16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012837, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8snorm_from_r16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012838, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8snorm_from_r16snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012839, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16_from_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012840, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16_from_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012841, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16_from_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012842, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2_from_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012843, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8_from_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012844, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8_from_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012845, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8_from_rgb10a2.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012846, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32f_from_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012847, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32f_from_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012848, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32f_from_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012849, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16f_from_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012850, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16f_from_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012851, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16f_from_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012852, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r11fg11fb10f_from_r11fg11fb10f.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012853, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16_from_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012854, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16_from_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012855, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16_from_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012856, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2_from_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012857, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8_from_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012858, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8_from_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012859, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8_from_rgba8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012860, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16_from_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012861, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16_from_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012862, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16_from_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012863, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2_from_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012864, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8_from_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012865, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8_from_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012866, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8_from_rg8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012867, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16_from_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012868, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16_from_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012869, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16_from_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012870, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2_from_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012871, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8_from_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012872, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8_from_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012873, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8_from_r8.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012874, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16snorm_from_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012875, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16snorm_from_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012876, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16snorm_from_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012877, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8snorm_from_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012878, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8snorm_from_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012879, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8snorm_from_rgba8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012880, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16snorm_from_rg8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012881, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16snorm_from_rg8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012882, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16snorm_from_rg8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012883, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8snorm_from_rg8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012884, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8snorm_from_rg8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012885, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8snorm_from_rg8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012886, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16snorm_from_r8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012887, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16snorm_from_r8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012888, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16snorm_from_r8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012889, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8snorm_from_r8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012890, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8snorm_from_r8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012891, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8snorm_from_r8snorm.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012892, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32i_from_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012893, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32i_from_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012894, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32i_from_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012895, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16i_from_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012896, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16i_from_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012897, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16i_from_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012898, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8i_from_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012899, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8i_from_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012900, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8i_from_rgba32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012901, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32i_from_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012902, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32i_from_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012903, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32i_from_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012904, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16i_from_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012905, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16i_from_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012906, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16i_from_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012907, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8i_from_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012908, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8i_from_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012909, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8i_from_rg32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012910, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32i_from_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012911, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32i_from_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012912, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32i_from_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012913, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16i_from_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012914, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16i_from_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012915, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16i_from_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012916, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8i_from_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012917, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8i_from_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012918, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8i_from_r32i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012919, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32i_from_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012920, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32i_from_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012921, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32i_from_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012922, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16i_from_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012923, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16i_from_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012924, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16i_from_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012925, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8i_from_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012926, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8i_from_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012927, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8i_from_rgba16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012928, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32i_from_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012929, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32i_from_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012930, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32i_from_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012931, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16i_from_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012932, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16i_from_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012933, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16i_from_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012934, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8i_from_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012935, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8i_from_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012936, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8i_from_rg16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012937, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32i_from_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012938, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32i_from_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012939, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32i_from_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012940, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16i_from_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012941, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16i_from_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012942, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16i_from_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012943, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8i_from_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012944, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8i_from_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012945, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8i_from_r16i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012946, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32i_from_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012947, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32i_from_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012948, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32i_from_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012949, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16i_from_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012950, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16i_from_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012951, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16i_from_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012952, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8i_from_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012953, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8i_from_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012954, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8i_from_rgba8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012955, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32i_from_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012956, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32i_from_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012957, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32i_from_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012958, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16i_from_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012959, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16i_from_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012960, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16i_from_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012961, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8i_from_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012962, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8i_from_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012963, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8i_from_rg8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012964, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32i_from_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012965, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32i_from_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012966, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32i_from_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012967, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16i_from_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012968, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16i_from_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012969, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16i_from_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012970, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8i_from_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012971, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8i_from_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012972, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8i_from_r8i.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012973, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012974, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012975, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012976, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012977, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012978, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012979, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012980, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012981, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012982, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_rgba32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012983, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012984, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012985, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012986, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012987, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012988, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012989, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012990, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012991, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012992, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_rg32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012993, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012994, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012995, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012996, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012997, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012998, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC012999, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013000, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013001, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013002, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_r32ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013003, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013004, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013005, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013006, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013007, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013008, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013009, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013010, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013011, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013012, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_rgba16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013013, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013014, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013015, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013016, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013017, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013018, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013019, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013020, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013021, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013022, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_rg16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013023, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013024, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013025, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013026, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013027, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013028, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013029, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013030, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013031, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013032, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_r16ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013033, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013034, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013035, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013036, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013037, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013038, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013039, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013040, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013041, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013042, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_rgb10a2ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013043, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013044, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013045, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013046, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013047, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013048, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013049, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013050, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013051, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013052, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_rgba8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013053, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013054, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013055, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013056, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013057, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013058, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013059, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013060, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013061, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013062, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_rg8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013063, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba32ui_from_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013064, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg32ui_from_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013065, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r32ui_from_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013066, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba16ui_from_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013067, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg16ui_from_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013068, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r16ui_from_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013069, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgb10a2ui_from_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013070, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rgba8ui_from_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013071, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.rg8ui_from_r8ui.*");

static SHRINK_HWTEST_F(ActsImage0007TS, TC013072, "dEQP-VK.image.mismatched_write_op.mismatched_signedness_and_type.r8ui_from_r8ui.*");
