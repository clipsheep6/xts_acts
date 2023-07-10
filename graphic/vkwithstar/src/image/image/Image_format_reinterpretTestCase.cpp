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
#include "../ActsImage0003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0003TS, TC008678, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008679, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008680, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008681, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008682, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008683, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008684, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008685, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008686, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008687, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008688, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008689, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008690, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008691, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008692, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008693, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008694, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008695, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008696, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008697, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008698, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008699, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008700, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008701, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008702, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008703, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008704, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008705, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008706, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008707, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008708, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008709, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008710, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008711, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008712, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008713, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008714, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008715, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008716, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008717, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008718, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008719, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008720, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008721, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008722, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008723, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008724, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008725, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008726, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008727, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008728, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008729, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008730, "dEQP-VK.image.format_reinterpret.1d.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008731, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008732, "dEQP-VK.image.format_reinterpret.1d.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008733, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008734, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008735, "dEQP-VK.image.format_reinterpret.1d.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008736, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008737, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008738, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008739, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008740, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008741, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008742, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008743, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008744, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008745, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008746, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008747, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008748, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008749, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008750, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008751, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008752, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008753, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008754, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008755, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008756, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008757, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008758, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008759, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008760, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008761, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008762, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008763, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008764, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008765, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008766, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008767, "dEQP-VK.image.format_reinterpret.1d.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008768, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008769, "dEQP-VK.image.format_reinterpret.1d.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008770, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008771, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008772, "dEQP-VK.image.format_reinterpret.1d.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008773, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008774, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008775, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008776, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008777, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008778, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008779, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008780, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008781, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008782, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008783, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008784, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008785, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008786, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008787, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008788, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008789, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008790, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008791, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008792, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008793, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008794, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008795, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008796, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008797, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008798, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008799, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008800, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008801, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008802, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008803, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008804, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008805, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008806, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008807, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008808, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008809, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008810, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008811, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008812, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008813, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008814, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008815, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008816, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008817, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008818, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008819, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008820, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008821, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008822, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008823, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008824, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008825, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008826, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008827, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008828, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008829, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008830, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008831, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008832, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008833, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008834, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008835, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008836, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008837, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008838, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008839, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008840, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008841, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008842, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008843, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008844, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008845, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008846, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008847, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008848, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008849, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008850, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008851, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008852, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008853, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008854, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008855, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008856, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008857, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008858, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008859, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008860, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008861, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008862, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008863, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008864, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008865, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008866, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008867, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008868, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008869, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008870, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008871, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008872, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008873, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008874, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008875, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008876, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008877, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008878, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008879, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008880, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008881, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008882, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008883, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008884, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008885, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008886, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008887, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008888, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008889, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008890, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008891, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008892, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008893, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008894, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008895, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008896, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008897, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008898, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008899, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008900, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008901, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008902, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008903, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008904, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008905, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008906, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008907, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008908, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008909, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008910, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008911, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008912, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008913, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008914, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008915, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008916, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008917, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008918, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008919, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008920, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008921, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008922, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008923, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008924, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008925, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008926, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008927, "dEQP-VK.image.format_reinterpret.1d.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008928, "dEQP-VK.image.format_reinterpret.1d.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008929, "dEQP-VK.image.format_reinterpret.1d.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008930, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008931, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008932, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008933, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008934, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008935, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008936, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008937, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008938, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008939, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008940, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008941, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008942, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008943, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008944, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008945, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008946, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008947, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008948, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008949, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008950, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008951, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008952, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008953, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008954, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008955, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008956, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008957, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008958, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008959, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008960, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008961, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008962, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008963, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008964, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008965, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008966, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008967, "dEQP-VK.image.format_reinterpret.1d.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008968, "dEQP-VK.image.format_reinterpret.1d.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008969, "dEQP-VK.image.format_reinterpret.1d.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008970, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008971, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008972, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008973, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008974, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008975, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008976, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008977, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008978, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008979, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008980, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008981, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008982, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008983, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008984, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008985, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008986, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008987, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008988, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008989, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008990, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008991, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008992, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008993, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008994, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008995, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008996, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008997, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008998, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC008999, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009000, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009001, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009002, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009003, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009004, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009005, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009006, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009007, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009008, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009009, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009010, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009011, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009012, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009013, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009014, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009015, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009016, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009017, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009018, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009019, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009020, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009021, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009022, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009023, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009024, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009025, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009026, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009027, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009028, "dEQP-VK.image.format_reinterpret.1d.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009029, "dEQP-VK.image.format_reinterpret.1d.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009030, "dEQP-VK.image.format_reinterpret.1d.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009031, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009032, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009033, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009034, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009035, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009036, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009037, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009038, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009039, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009040, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009041, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009042, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009043, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009044, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009045, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009046, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009047, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009048, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009049, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009050, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009051, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009052, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009053, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009054, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009055, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009056, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009057, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009058, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009059, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009060, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009061, "dEQP-VK.image.format_reinterpret.1d.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009062, "dEQP-VK.image.format_reinterpret.1d.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009063, "dEQP-VK.image.format_reinterpret.1d.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009064, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009065, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009066, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009067, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009068, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009069, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009070, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009071, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009072, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009073, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009074, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009075, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009076, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009077, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009078, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009079, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009080, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009081, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009082, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009083, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009084, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009085, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009086, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009087, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009088, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009089, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009090, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009091, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009092, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009093, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009094, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009095, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009096, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009097, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009098, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009099, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009100, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009101, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009102, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009103, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009104, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009105, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009106, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009107, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009108, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009109, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009110, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009111, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009112, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009113, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009114, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009115, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009116, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009117, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009118, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009119, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009120, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009121, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009122, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009123, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009124, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009125, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009126, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009127, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009128, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009129, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009130, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009131, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009132, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009133, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009134, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009135, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009136, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009137, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009138, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009139, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009140, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009141, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009142, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009143, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009144, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009145, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009146, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009147, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009148, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009149, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009150, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009151, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009152, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009153, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009154, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009155, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009156, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009157, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009158, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009159, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009160, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009161, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009162, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009163, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009164, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009165, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009166, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009167, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009168, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009169, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009170, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009171, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009172, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009173, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009174, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009175, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009176, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009177, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009178, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009179, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009180, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009181, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009182, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009183, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009184, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009185, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009186, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009187, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009188, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009189, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009190, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009191, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009192, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009193, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009194, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009195, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009196, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009197, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009198, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009199, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009200, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009201, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009202, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009203, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009204, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009205, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009206, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009207, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009208, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009209, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009210, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009211, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009212, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009213, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009214, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009215, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009216, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009217, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009218, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009219, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009220, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009221, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009222, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009223, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009224, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009225, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009226, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009227, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009228, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009229, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009230, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009231, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009232, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009233, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009234, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009235, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009236, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009237, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009238, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009239, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009240, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009241, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009242, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009243, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009244, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009245, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009246, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009247, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009248, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009249, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009250, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009251, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009252, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009253, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009254, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009255, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009256, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009257, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009258, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009259, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009260, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009261, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009262, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009263, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009264, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009265, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009266, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009267, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009268, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009269, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009270, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009271, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009272, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009273, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009274, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009275, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009276, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009277, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009278, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009279, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009280, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009281, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009282, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009283, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009284, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009285, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009286, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009287, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009288, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009289, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009290, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009291, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009292, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009293, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009294, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009295, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009296, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009297, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009298, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009299, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009300, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009301, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009302, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009303, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009304, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009305, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009306, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009307, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009308, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009309, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009310, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009311, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009312, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009313, "dEQP-VK.image.format_reinterpret.1d_array.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009314, "dEQP-VK.image.format_reinterpret.1d_array.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009315, "dEQP-VK.image.format_reinterpret.1d_array.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009316, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009317, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009318, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009319, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009320, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009321, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009322, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009323, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009324, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009325, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009326, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009327, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009328, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009329, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009330, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009331, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009332, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009333, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009334, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009335, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009336, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009337, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009338, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009339, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009340, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009341, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009342, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009343, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009344, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009345, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009346, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009347, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009348, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009349, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009350, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009351, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009352, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009353, "dEQP-VK.image.format_reinterpret.1d_array.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009354, "dEQP-VK.image.format_reinterpret.1d_array.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009355, "dEQP-VK.image.format_reinterpret.1d_array.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009356, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009357, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009358, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009359, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009360, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009361, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009362, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009363, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009364, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009365, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009366, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009367, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009368, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009369, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009370, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009371, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009372, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009373, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009374, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009375, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009376, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009377, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009378, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009379, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009380, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009381, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009382, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009383, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009384, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009385, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009386, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009387, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009388, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009389, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009390, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009391, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009392, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009393, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009394, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009395, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009396, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009397, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009398, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009399, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009400, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009401, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009402, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009403, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009404, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009405, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009406, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009407, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009408, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009409, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009410, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009411, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009412, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009413, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009414, "dEQP-VK.image.format_reinterpret.1d_array.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009415, "dEQP-VK.image.format_reinterpret.1d_array.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009416, "dEQP-VK.image.format_reinterpret.1d_array.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009417, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009418, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009419, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009420, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009421, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009422, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009423, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009424, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009425, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009426, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009427, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009428, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009429, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009430, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009431, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009432, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009433, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009434, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009435, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009436, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009437, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009438, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009439, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009440, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009441, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009442, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009443, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009444, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009445, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009446, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009447, "dEQP-VK.image.format_reinterpret.1d_array.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009448, "dEQP-VK.image.format_reinterpret.1d_array.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009449, "dEQP-VK.image.format_reinterpret.1d_array.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009450, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009451, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009452, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009453, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009454, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009455, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009456, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009457, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009458, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009459, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009460, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009461, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009462, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009463, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009464, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009465, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009466, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009467, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009468, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009469, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009470, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009471, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009472, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009473, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009474, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009475, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009476, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009477, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009478, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009479, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009480, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009481, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009482, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009483, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009484, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009485, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009486, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009487, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009488, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009489, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009490, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009491, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009492, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009493, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009494, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009495, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009496, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009497, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009498, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009499, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009500, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009501, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009502, "dEQP-VK.image.format_reinterpret.2d.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009503, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009504, "dEQP-VK.image.format_reinterpret.2d.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009505, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009506, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009507, "dEQP-VK.image.format_reinterpret.2d.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009508, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009509, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009510, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009511, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009512, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009513, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009514, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009515, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009516, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009517, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009518, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009519, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009520, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009521, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009522, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009523, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009524, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009525, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009526, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009527, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009528, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009529, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009530, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009531, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009532, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009533, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009534, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009535, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009536, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009537, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009538, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009539, "dEQP-VK.image.format_reinterpret.2d.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009540, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009541, "dEQP-VK.image.format_reinterpret.2d.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009542, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009543, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009544, "dEQP-VK.image.format_reinterpret.2d.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009545, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009546, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009547, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009548, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009549, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009550, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009551, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009552, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009553, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009554, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009555, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009556, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009557, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009558, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009559, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009560, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009561, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009562, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009563, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009564, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009565, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009566, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009567, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009568, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009569, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009570, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009571, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009572, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009573, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009574, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009575, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009576, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009577, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009578, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009579, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009580, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009581, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009582, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009583, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009584, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009585, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009586, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009587, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009588, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009589, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009590, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009591, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009592, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009593, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009594, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009595, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009596, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009597, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009598, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009599, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009600, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009601, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009602, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009603, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009604, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009605, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009606, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009607, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009608, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009609, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009610, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009611, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009612, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009613, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009614, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009615, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009616, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009617, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009618, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009619, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009620, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009621, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009622, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009623, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009624, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009625, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009626, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009627, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009628, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009629, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009630, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009631, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009632, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009633, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009634, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009635, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009636, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009637, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009638, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009639, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009640, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009641, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009642, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009643, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009644, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009645, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009646, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009647, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009648, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009649, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009650, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009651, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009652, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009653, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009654, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009655, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009656, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009657, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009658, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009659, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009660, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009661, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009662, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009663, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009664, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009665, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009666, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009667, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009668, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009669, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009670, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009671, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009672, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009673, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009674, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009675, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009676, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009677, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009678, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009679, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009680, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009681, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009682, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009683, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009684, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009685, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009686, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009687, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009688, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009689, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009690, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009691, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009692, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009693, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009694, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009695, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009696, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009697, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009698, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009699, "dEQP-VK.image.format_reinterpret.2d.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009700, "dEQP-VK.image.format_reinterpret.2d.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009701, "dEQP-VK.image.format_reinterpret.2d.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009702, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009703, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009704, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009705, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009706, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009707, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009708, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009709, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009710, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009711, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009712, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009713, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009714, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009715, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009716, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009717, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009718, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009719, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009720, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009721, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009722, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009723, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009724, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009725, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009726, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009727, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009728, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009729, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009730, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009731, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009732, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009733, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009734, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009735, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009736, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009737, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009738, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009739, "dEQP-VK.image.format_reinterpret.2d.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009740, "dEQP-VK.image.format_reinterpret.2d.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009741, "dEQP-VK.image.format_reinterpret.2d.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009742, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009743, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009744, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009745, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009746, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009747, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009748, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009749, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009750, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009751, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009752, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009753, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009754, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009755, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009756, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009757, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009758, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009759, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009760, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009761, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009762, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009763, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009764, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009765, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009766, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009767, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009768, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009769, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009770, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009771, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009772, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009773, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009774, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009775, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009776, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009777, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009778, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009779, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009780, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009781, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009782, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009783, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009784, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009785, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009786, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009787, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009788, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009789, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009790, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009791, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009792, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009793, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009794, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009795, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009796, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009797, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009798, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009799, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009800, "dEQP-VK.image.format_reinterpret.2d.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009801, "dEQP-VK.image.format_reinterpret.2d.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009802, "dEQP-VK.image.format_reinterpret.2d.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009803, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009804, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009805, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009806, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009807, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009808, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009809, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009810, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009811, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009812, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009813, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009814, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009815, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009816, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009817, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009818, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009819, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009820, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009821, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009822, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009823, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009824, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009825, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009826, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009827, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009828, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009829, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009830, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009831, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009832, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009833, "dEQP-VK.image.format_reinterpret.2d.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009834, "dEQP-VK.image.format_reinterpret.2d.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009835, "dEQP-VK.image.format_reinterpret.2d.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009836, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009837, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009838, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009839, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009840, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009841, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009842, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009843, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009844, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009845, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009846, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009847, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009848, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009849, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009850, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009851, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009852, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009853, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009854, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009855, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009856, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009857, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009858, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009859, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009860, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009861, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009862, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009863, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009864, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009865, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009866, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009867, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009868, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009869, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009870, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009871, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009872, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009873, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009874, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009875, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009876, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009877, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009878, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009879, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009880, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009881, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009882, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009883, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009884, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009885, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009886, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009887, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009888, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009889, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009890, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009891, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009892, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009893, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009894, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009895, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009896, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009897, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009898, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009899, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009900, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009901, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009902, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009903, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009904, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009905, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009906, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009907, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009908, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009909, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009910, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009911, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009912, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009913, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009914, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009915, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009916, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009917, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009918, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009919, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009920, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009921, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009922, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009923, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009924, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009925, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009926, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009927, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009928, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009929, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009930, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009931, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009932, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009933, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009934, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009935, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009936, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009937, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009938, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009939, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009940, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009941, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009942, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009943, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009944, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009945, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009946, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009947, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009948, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009949, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009950, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009951, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009952, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009953, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009954, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009955, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009956, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009957, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009958, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009959, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009960, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009961, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009962, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009963, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009964, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009965, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009966, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009967, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009968, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009969, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009970, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009971, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009972, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009973, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009974, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009975, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009976, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009977, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009978, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009979, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009980, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009981, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009982, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009983, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009984, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009985, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009986, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009987, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009988, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009989, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009990, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009991, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009992, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009993, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009994, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009995, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009996, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009997, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009998, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC009999, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010000, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010001, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010002, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010003, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010004, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010005, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010006, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010007, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010008, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010009, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010010, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010011, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010012, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010013, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010014, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010015, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010016, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010017, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010018, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010019, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010020, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010021, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010022, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010023, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010024, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010025, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010026, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010027, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010028, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010029, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010030, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010031, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010032, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010033, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010034, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010035, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010036, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010037, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010038, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010039, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010040, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010041, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010042, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010043, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010044, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010045, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010046, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010047, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010048, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010049, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010050, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010051, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010052, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010053, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010054, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010055, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010056, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010057, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010058, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010059, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010060, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010061, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010062, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010063, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010064, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010065, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010066, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010067, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010068, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010069, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010070, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010071, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010072, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010073, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010074, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010075, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010076, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010077, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010078, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010079, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010080, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010081, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010082, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010083, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010084, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010085, "dEQP-VK.image.format_reinterpret.2d_array.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010086, "dEQP-VK.image.format_reinterpret.2d_array.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010087, "dEQP-VK.image.format_reinterpret.2d_array.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010088, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010089, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010090, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010091, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010092, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010093, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010094, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010095, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010096, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010097, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010098, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010099, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010100, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010101, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010102, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010103, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010104, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010105, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010106, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010107, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010108, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010109, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010110, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010111, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010112, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010113, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010114, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010115, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010116, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010117, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010118, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010119, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010120, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010121, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010122, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010123, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010124, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010125, "dEQP-VK.image.format_reinterpret.2d_array.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010126, "dEQP-VK.image.format_reinterpret.2d_array.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010127, "dEQP-VK.image.format_reinterpret.2d_array.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010128, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010129, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010130, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010131, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010132, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010133, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010134, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010135, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010136, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010137, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010138, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010139, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010140, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010141, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010142, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010143, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010144, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010145, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010146, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010147, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010148, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010149, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010150, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010151, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010152, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010153, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010154, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010155, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010156, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010157, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010158, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010159, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010160, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010161, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010162, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010163, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010164, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010165, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010166, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010167, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010168, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010169, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010170, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010171, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010172, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010173, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010174, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010175, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010176, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010177, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010178, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010179, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010180, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010181, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010182, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010183, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010184, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010185, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010186, "dEQP-VK.image.format_reinterpret.2d_array.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010187, "dEQP-VK.image.format_reinterpret.2d_array.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010188, "dEQP-VK.image.format_reinterpret.2d_array.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010189, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010190, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010191, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010192, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010193, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010194, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010195, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010196, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010197, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010198, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010199, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010200, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010201, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010202, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010203, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010204, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010205, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010206, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010207, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010208, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010209, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010210, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010211, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010212, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010213, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010214, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010215, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010216, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010217, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010218, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010219, "dEQP-VK.image.format_reinterpret.2d_array.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010220, "dEQP-VK.image.format_reinterpret.2d_array.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010221, "dEQP-VK.image.format_reinterpret.2d_array.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010222, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010223, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010224, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010225, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010226, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010227, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010228, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010229, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010230, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010231, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010232, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010233, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010234, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010235, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010236, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010237, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010238, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010239, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010240, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010241, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010242, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010243, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010244, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010245, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010246, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010247, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010248, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010249, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010250, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010251, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010252, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010253, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010254, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010255, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010256, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010257, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010258, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010259, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010260, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010261, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010262, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010263, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010264, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010265, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010266, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010267, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010268, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010269, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010270, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010271, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010272, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010273, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010274, "dEQP-VK.image.format_reinterpret.3d.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010275, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010276, "dEQP-VK.image.format_reinterpret.3d.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010277, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010278, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010279, "dEQP-VK.image.format_reinterpret.3d.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010280, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010281, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010282, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010283, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010284, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010285, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010286, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010287, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010288, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010289, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010290, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010291, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010292, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010293, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010294, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010295, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010296, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010297, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010298, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010299, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010300, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010301, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010302, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010303, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010304, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010305, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010306, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010307, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010308, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010309, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010310, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010311, "dEQP-VK.image.format_reinterpret.3d.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010312, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010313, "dEQP-VK.image.format_reinterpret.3d.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010314, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010315, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010316, "dEQP-VK.image.format_reinterpret.3d.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010317, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010318, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010319, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010320, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010321, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010322, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010323, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010324, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010325, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010326, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010327, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010328, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010329, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010330, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010331, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010332, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010333, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010334, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010335, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010336, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010337, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010338, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010339, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010340, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010341, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010342, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010343, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010344, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010345, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010346, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010347, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010348, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010349, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010350, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010351, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010352, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010353, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010354, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010355, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010356, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010357, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010358, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010359, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010360, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010361, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010362, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010363, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010364, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010365, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010366, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010367, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010368, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010369, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010370, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010371, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010372, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010373, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010374, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010375, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010376, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010377, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010378, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010379, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010380, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010381, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010382, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010383, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010384, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010385, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010386, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010387, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010388, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010389, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010390, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010391, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010392, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010393, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010394, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010395, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010396, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010397, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010398, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010399, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010400, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010401, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010402, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010403, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010404, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010405, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010406, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010407, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010408, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010409, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010410, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010411, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010412, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010413, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010414, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010415, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010416, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010417, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010418, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010419, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010420, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010421, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010422, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010423, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010424, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010425, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010426, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010427, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010428, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010429, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010430, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010431, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010432, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010433, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010434, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010435, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010436, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010437, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010438, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010439, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010440, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010441, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010442, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010443, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010444, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010445, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010446, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010447, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010448, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010449, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010450, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010451, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010452, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010453, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010454, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010455, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010456, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010457, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010458, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010459, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010460, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010461, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010462, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010463, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010464, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010465, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010466, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010467, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010468, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010469, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010470, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010471, "dEQP-VK.image.format_reinterpret.3d.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010472, "dEQP-VK.image.format_reinterpret.3d.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010473, "dEQP-VK.image.format_reinterpret.3d.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010474, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010475, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010476, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010477, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010478, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010479, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010480, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010481, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010482, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010483, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010484, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010485, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010486, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010487, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010488, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010489, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010490, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010491, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010492, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010493, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010494, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010495, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010496, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010497, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010498, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010499, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010500, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010501, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010502, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010503, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010504, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010505, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010506, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010507, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010508, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010509, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010510, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010511, "dEQP-VK.image.format_reinterpret.3d.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010512, "dEQP-VK.image.format_reinterpret.3d.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010513, "dEQP-VK.image.format_reinterpret.3d.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010514, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010515, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010516, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010517, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010518, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010519, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010520, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010521, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010522, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010523, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010524, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010525, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010526, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010527, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010528, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010529, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010530, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010531, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010532, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010533, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010534, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010535, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010536, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010537, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010538, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010539, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010540, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010541, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010542, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010543, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010544, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010545, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010546, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010547, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010548, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010549, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010550, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010551, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010552, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010553, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010554, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010555, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010556, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010557, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010558, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010559, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010560, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010561, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010562, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010563, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010564, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010565, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010566, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010567, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010568, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010569, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010570, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010571, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010572, "dEQP-VK.image.format_reinterpret.3d.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010573, "dEQP-VK.image.format_reinterpret.3d.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010574, "dEQP-VK.image.format_reinterpret.3d.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010575, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010576, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010577, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010578, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010579, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010580, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010581, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010582, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010583, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010584, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010585, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010586, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010587, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010588, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010589, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010590, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010591, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010592, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010593, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010594, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010595, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010596, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010597, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010598, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010599, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010600, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010601, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010602, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010603, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010604, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010605, "dEQP-VK.image.format_reinterpret.3d.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010606, "dEQP-VK.image.format_reinterpret.3d.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010607, "dEQP-VK.image.format_reinterpret.3d.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010608, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010609, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010610, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010611, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010612, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010613, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010614, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010615, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010616, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010617, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010618, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010619, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010620, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010621, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010622, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010623, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010624, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010625, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010626, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010627, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010628, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010629, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010630, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010631, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010632, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010633, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010634, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010635, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010636, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010637, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010638, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010639, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010640, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010641, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010642, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010643, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010644, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010645, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010646, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010647, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010648, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010649, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010650, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010651, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010652, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010653, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010654, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010655, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010656, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010657, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010658, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010659, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010660, "dEQP-VK.image.format_reinterpret.cube.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010661, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010662, "dEQP-VK.image.format_reinterpret.cube.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010663, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010664, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010665, "dEQP-VK.image.format_reinterpret.cube.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010666, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010667, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010668, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010669, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010670, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010671, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010672, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010673, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010674, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010675, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010676, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010677, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010678, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010679, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010680, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010681, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010682, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010683, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010684, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010685, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010686, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010687, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010688, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010689, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010690, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010691, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010692, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010693, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010694, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010695, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010696, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010697, "dEQP-VK.image.format_reinterpret.cube.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010698, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010699, "dEQP-VK.image.format_reinterpret.cube.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010700, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010701, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010702, "dEQP-VK.image.format_reinterpret.cube.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010703, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010704, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010705, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010706, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010707, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010708, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010709, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010710, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010711, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010712, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010713, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010714, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010715, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010716, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010717, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010718, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010719, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010720, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010721, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010722, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010723, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010724, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010725, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010726, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010727, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010728, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010729, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010730, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010731, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010732, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010733, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010734, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010735, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010736, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010737, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010738, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010739, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010740, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010741, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010742, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010743, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010744, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010745, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010746, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010747, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010748, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010749, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010750, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010751, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010752, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010753, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010754, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010755, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010756, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010757, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010758, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010759, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010760, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010761, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010762, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010763, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010764, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010765, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010766, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010767, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010768, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010769, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010770, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010771, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010772, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010773, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010774, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010775, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010776, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010777, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010778, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010779, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010780, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010781, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010782, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010783, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010784, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010785, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010786, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010787, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010788, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010789, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010790, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010791, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010792, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010793, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010794, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010795, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010796, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010797, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010798, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010799, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010800, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010801, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010802, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010803, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010804, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010805, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010806, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010807, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010808, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010809, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010810, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010811, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010812, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010813, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010814, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010815, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010816, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010817, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010818, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010819, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010820, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010821, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010822, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010823, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010824, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010825, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010826, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010827, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010828, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010829, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010830, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010831, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010832, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010833, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010834, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010835, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010836, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010837, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010838, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010839, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010840, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010841, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010842, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010843, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010844, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010845, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010846, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010847, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010848, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010849, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010850, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010851, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010852, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010853, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010854, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010855, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010856, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010857, "dEQP-VK.image.format_reinterpret.cube.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010858, "dEQP-VK.image.format_reinterpret.cube.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010859, "dEQP-VK.image.format_reinterpret.cube.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010860, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010861, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010862, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010863, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010864, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010865, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010866, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010867, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010868, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010869, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010870, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010871, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010872, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010873, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010874, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010875, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010876, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010877, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010878, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010879, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010880, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010881, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010882, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010883, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010884, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010885, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010886, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010887, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010888, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010889, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010890, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010891, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010892, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010893, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010894, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010895, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010896, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010897, "dEQP-VK.image.format_reinterpret.cube.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010898, "dEQP-VK.image.format_reinterpret.cube.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010899, "dEQP-VK.image.format_reinterpret.cube.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010900, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010901, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010902, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010903, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010904, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010905, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010906, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010907, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010908, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010909, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010910, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010911, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010912, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010913, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010914, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010915, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010916, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010917, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010918, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010919, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010920, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010921, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010922, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010923, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010924, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010925, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010926, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010927, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010928, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010929, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010930, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010931, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010932, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010933, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010934, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010935, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010936, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010937, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010938, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010939, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010940, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010941, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010942, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010943, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010944, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010945, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010946, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010947, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010948, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010949, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010950, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010951, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010952, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010953, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010954, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010955, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010956, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010957, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010958, "dEQP-VK.image.format_reinterpret.cube.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010959, "dEQP-VK.image.format_reinterpret.cube.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010960, "dEQP-VK.image.format_reinterpret.cube.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010961, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010962, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010963, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010964, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010965, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010966, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010967, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010968, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010969, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010970, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010971, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010972, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010973, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010974, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010975, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010976, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010977, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010978, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010979, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010980, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010981, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010982, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010983, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010984, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010985, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010986, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010987, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010988, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010989, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010990, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010991, "dEQP-VK.image.format_reinterpret.cube.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010992, "dEQP-VK.image.format_reinterpret.cube.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010993, "dEQP-VK.image.format_reinterpret.cube.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010994, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010995, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010996, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010997, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010998, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC010999, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011000, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011001, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011002, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011003, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011004, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011005, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011006, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011007, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011008, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011009, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011010, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011011, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011012, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011013, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011014, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011015, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011016, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011017, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011018, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011019, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011020, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011021, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011022, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011023, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011024, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011025, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011026, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011027, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011028, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011029, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011030, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011031, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011032, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011033, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011034, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011035, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011036, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011037, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011038, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011039, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011040, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011041, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011042, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011043, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011044, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011045, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011046, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011047, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011048, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011049, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011050, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011051, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011052, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011053, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011054, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011055, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011056, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011057, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011058, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011059, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011060, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011061, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011062, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011063, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011064, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011065, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011066, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011067, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011068, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011069, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011070, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011071, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011072, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011073, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011074, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011075, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011076, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011077, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011078, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011079, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011080, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011081, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011082, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011083, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011084, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011085, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011086, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011087, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011088, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011089, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011090, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011091, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011092, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011093, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011094, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011095, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011096, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011097, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011098, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011099, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011100, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011101, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011102, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011103, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011104, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011105, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011106, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011107, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011108, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011109, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011110, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011111, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011112, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011113, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011114, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011115, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011116, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011117, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011118, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011119, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011120, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011121, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011122, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011123, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011124, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011125, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011126, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011127, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011128, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011129, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011130, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011131, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011132, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011133, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011134, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011135, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011136, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011137, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011138, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011139, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011140, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011141, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011142, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011143, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011144, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011145, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011146, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011147, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011148, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011149, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011150, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011151, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011152, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011153, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011154, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011155, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011156, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011157, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011158, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011159, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011160, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011161, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011162, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011163, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011164, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011165, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011166, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011167, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011168, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011169, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011170, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011171, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011172, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011173, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011174, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011175, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011176, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011177, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011178, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011179, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011180, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011181, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011182, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011183, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011184, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011185, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011186, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011187, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011188, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011189, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011190, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011191, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011192, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011193, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011194, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011195, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011196, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011197, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011198, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011199, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011200, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011201, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011202, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011203, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011204, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011205, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011206, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011207, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011208, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011209, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011210, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011211, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011212, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011213, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011214, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011215, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011216, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011217, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011218, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011219, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011220, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011221, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011222, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011223, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011224, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011225, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011226, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011227, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011228, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011229, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011230, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011231, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011232, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011233, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011234, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011235, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011236, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011237, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011238, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011239, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011240, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011241, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011242, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011243, "dEQP-VK.image.format_reinterpret.cube_array.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011244, "dEQP-VK.image.format_reinterpret.cube_array.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011245, "dEQP-VK.image.format_reinterpret.cube_array.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011246, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011247, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011248, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011249, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011250, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011251, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011252, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011253, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011254, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011255, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011256, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011257, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011258, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011259, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011260, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011261, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011262, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011263, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011264, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011265, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011266, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011267, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011268, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011269, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011270, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011271, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011272, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011273, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011274, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011275, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011276, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011277, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011278, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011279, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011280, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011281, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011282, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011283, "dEQP-VK.image.format_reinterpret.cube_array.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011284, "dEQP-VK.image.format_reinterpret.cube_array.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011285, "dEQP-VK.image.format_reinterpret.cube_array.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011286, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011287, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011288, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011289, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011290, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011291, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011292, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011293, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011294, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011295, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011296, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011297, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011298, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011299, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011300, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011301, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011302, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011303, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011304, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011305, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011306, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011307, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011308, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011309, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011310, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011311, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011312, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011313, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011314, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011315, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011316, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011317, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011318, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011319, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011320, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011321, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011322, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011323, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011324, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011325, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011326, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011327, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011328, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011329, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011330, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011331, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011332, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011333, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011334, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011335, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011336, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011337, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011338, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011339, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011340, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011341, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011342, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011343, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011344, "dEQP-VK.image.format_reinterpret.cube_array.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011345, "dEQP-VK.image.format_reinterpret.cube_array.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011346, "dEQP-VK.image.format_reinterpret.cube_array.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011347, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011348, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011349, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011350, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011351, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011352, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011353, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011354, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011355, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011356, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011357, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011358, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011359, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011360, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011361, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011362, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011363, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011364, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011365, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011366, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011367, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011368, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011369, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011370, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011371, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011372, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011373, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011374, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011375, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011376, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011377, "dEQP-VK.image.format_reinterpret.cube_array.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011378, "dEQP-VK.image.format_reinterpret.cube_array.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011379, "dEQP-VK.image.format_reinterpret.cube_array.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011380, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011381, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011382, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011383, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011384, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011385, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011386, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011387, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011388, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011389, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011390, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011391, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011392, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011393, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011394, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011395, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011396, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011397, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011398, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011399, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011400, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011401, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011402, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011403, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011404, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011405, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011406, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011407, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011408, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011409, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011410, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011411, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011412, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011413, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011414, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011415, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011416, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011417, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011418, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011419, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011420, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011421, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011422, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011423, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011424, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011425, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011426, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011427, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011428, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011429, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011430, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011431, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011432, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011433, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011434, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011435, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011436, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011437, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011438, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011439, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011440, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011441, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011442, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011443, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011444, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011445, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011446, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011447, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011448, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011449, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011450, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011451, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011452, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011453, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011454, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011455, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011456, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011457, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011458, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011459, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011460, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011461, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011462, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011463, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011464, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011465, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011466, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011467, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011468, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011469, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011470, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011471, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011472, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011473, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011474, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011475, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011476, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011477, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011478, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011479, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011480, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011481, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011482, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011483, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011484, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011485, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011486, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011487, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011488, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011489, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011490, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011491, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011492, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011493, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011494, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011495, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011496, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011497, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011498, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011499, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011500, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011501, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011502, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011503, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011504, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011505, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011506, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011507, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011508, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011509, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011510, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011511, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011512, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011513, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011514, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011515, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011516, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011517, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011518, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011519, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011520, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011521, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011522, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011523, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011524, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011525, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011526, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011527, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011528, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011529, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011530, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011531, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011532, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011533, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011534, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011535, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011536, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011537, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011538, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011539, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011540, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011541, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011542, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011543, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011544, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011545, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011546, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011547, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011548, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011549, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011550, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011551, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011552, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011553, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011554, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011555, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011556, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011557, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011558, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011559, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011560, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011561, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011562, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011563, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011564, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011565, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011566, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011567, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011568, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011569, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011570, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011571, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011572, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011573, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011574, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011575, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011576, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011577, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011578, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011579, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011580, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011581, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011582, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011583, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011584, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011585, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011586, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011587, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011588, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011589, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011590, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011591, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011592, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011593, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011594, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011595, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011596, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011597, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011598, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011599, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011600, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011601, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011602, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011603, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011604, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011605, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011606, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011607, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011608, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011609, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011610, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011611, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011612, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011613, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011614, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011615, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011616, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011617, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011618, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011619, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011620, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011621, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011622, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011623, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011624, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011625, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011626, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011627, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011628, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011629, "dEQP-VK.image.format_reinterpret.buffer.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011630, "dEQP-VK.image.format_reinterpret.buffer.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011631, "dEQP-VK.image.format_reinterpret.buffer.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011632, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011633, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011634, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011635, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011636, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011637, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011638, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011639, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011640, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011641, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011642, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011643, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011644, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011645, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011646, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011647, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011648, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011649, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011650, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011651, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011652, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011653, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011654, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011655, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011656, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011657, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011658, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011659, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011660, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011661, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011662, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011663, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011664, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011665, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011666, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011667, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011668, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011669, "dEQP-VK.image.format_reinterpret.buffer.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011670, "dEQP-VK.image.format_reinterpret.buffer.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011671, "dEQP-VK.image.format_reinterpret.buffer.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011672, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011673, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011674, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011675, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011676, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011677, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011678, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011679, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011680, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011681, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011682, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011683, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011684, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011685, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011686, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011687, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011688, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011689, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011690, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011691, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011692, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011693, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011694, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011695, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011696, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011697, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011698, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011699, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011700, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011701, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011702, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011703, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011704, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011705, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011706, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011707, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011708, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011709, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011710, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011711, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011712, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011713, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011714, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011715, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011716, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011717, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011718, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011719, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011720, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011721, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011722, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011723, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011724, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011725, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011726, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011727, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011728, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011729, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011730, "dEQP-VK.image.format_reinterpret.buffer.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011731, "dEQP-VK.image.format_reinterpret.buffer.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011732, "dEQP-VK.image.format_reinterpret.buffer.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011733, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011734, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011735, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011736, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011737, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011738, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011739, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011740, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011741, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011742, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011743, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011744, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011745, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011746, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011747, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011748, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011749, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011750, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011751, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011752, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011753, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011754, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011755, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011756, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011757, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011758, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011759, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011760, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011761, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011762, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011763, "dEQP-VK.image.format_reinterpret.buffer.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011764, "dEQP-VK.image.format_reinterpret.buffer.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0003TS, TC011765, "dEQP-VK.image.format_reinterpret.buffer.r8_snorm_r8_unorm.*");
