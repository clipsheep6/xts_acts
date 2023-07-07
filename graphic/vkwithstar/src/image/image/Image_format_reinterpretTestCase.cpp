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
#include "../ActsImage0005TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0005TS, TC008678, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008679, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008680, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008681, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008682, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008683, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008684, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008685, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008686, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008687, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008688, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008689, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008690, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008691, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008692, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008693, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008694, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008695, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008696, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008697, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008698, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008699, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008700, "dEQP-VK.image.format_reinterpret.1d.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008701, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008702, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008703, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008704, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008705, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008706, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008707, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008708, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008709, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008710, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008711, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008712, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008713, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008714, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008715, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008716, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008717, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008718, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008719, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008720, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008721, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008722, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008723, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008724, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008725, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008726, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008727, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008728, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008729, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008730, "dEQP-VK.image.format_reinterpret.1d.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008731, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008732, "dEQP-VK.image.format_reinterpret.1d.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008733, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008734, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008735, "dEQP-VK.image.format_reinterpret.1d.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008736, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008737, "dEQP-VK.image.format_reinterpret.1d.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008738, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008739, "dEQP-VK.image.format_reinterpret.1d.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008740, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008741, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008742, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008743, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008744, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008745, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008746, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008747, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008748, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008749, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008750, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008751, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008752, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008753, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008754, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008755, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008756, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008757, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008758, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008759, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008760, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008761, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008762, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008763, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008764, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008765, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008766, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008767, "dEQP-VK.image.format_reinterpret.1d.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008768, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008769, "dEQP-VK.image.format_reinterpret.1d.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008770, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008771, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008772, "dEQP-VK.image.format_reinterpret.1d.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008773, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008774, "dEQP-VK.image.format_reinterpret.1d.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008775, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008776, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008777, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008778, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008779, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008780, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008781, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008782, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008783, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008784, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008785, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008786, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008787, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008788, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008789, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008790, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008791, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008792, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008793, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008794, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008795, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008796, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008797, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008798, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008799, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008800, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008801, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008802, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008803, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008804, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008805, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008806, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008807, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008808, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008809, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008810, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008811, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008812, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008813, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008814, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008815, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008816, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008817, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008818, "dEQP-VK.image.format_reinterpret.1d.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008819, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008820, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008821, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008822, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008823, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008824, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008825, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008826, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008827, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008828, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008829, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008830, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008831, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008832, "dEQP-VK.image.format_reinterpret.1d.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008833, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008834, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008835, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008836, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008837, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008838, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008839, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008840, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008841, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008842, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008843, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008844, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008845, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008846, "dEQP-VK.image.format_reinterpret.1d.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008847, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008848, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008849, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008850, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008851, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008852, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008853, "dEQP-VK.image.format_reinterpret.1d.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008854, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008855, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008856, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008857, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008858, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008859, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008860, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008861, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008862, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008863, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008864, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008865, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008866, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008867, "dEQP-VK.image.format_reinterpret.1d.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008868, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008869, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008870, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008871, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008872, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008873, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008874, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008875, "dEQP-VK.image.format_reinterpret.1d.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008876, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008877, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008878, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008879, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008880, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008881, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008882, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008883, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008884, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008885, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008886, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008887, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008888, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008889, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008890, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008891, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008892, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008893, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008894, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008895, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008896, "dEQP-VK.image.format_reinterpret.1d.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008897, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008898, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008899, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008900, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008901, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008902, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008903, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008904, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008905, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008906, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008907, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008908, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008909, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008910, "dEQP-VK.image.format_reinterpret.1d.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008911, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008912, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008913, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008914, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008915, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008916, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008917, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008918, "dEQP-VK.image.format_reinterpret.1d.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008919, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008920, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008921, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008922, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008923, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008924, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008925, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008926, "dEQP-VK.image.format_reinterpret.1d.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008927, "dEQP-VK.image.format_reinterpret.1d.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008928, "dEQP-VK.image.format_reinterpret.1d.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008929, "dEQP-VK.image.format_reinterpret.1d.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008930, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008931, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008932, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008933, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008934, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008935, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008936, "dEQP-VK.image.format_reinterpret.1d.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008937, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008938, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008939, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008940, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008941, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008942, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008943, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008944, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008945, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008946, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008947, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008948, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008949, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008950, "dEQP-VK.image.format_reinterpret.1d.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008951, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008952, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008953, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008954, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008955, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008956, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008957, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008958, "dEQP-VK.image.format_reinterpret.1d.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008959, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008960, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008961, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008962, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008963, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008964, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008965, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008966, "dEQP-VK.image.format_reinterpret.1d.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008967, "dEQP-VK.image.format_reinterpret.1d.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008968, "dEQP-VK.image.format_reinterpret.1d.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008969, "dEQP-VK.image.format_reinterpret.1d.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008970, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008971, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008972, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008973, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008974, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008975, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008976, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008977, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008978, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008979, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008980, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008981, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008982, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008983, "dEQP-VK.image.format_reinterpret.1d.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008984, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008985, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008986, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008987, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008988, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008989, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008990, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008991, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008992, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008993, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008994, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008995, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008996, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008997, "dEQP-VK.image.format_reinterpret.1d.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008998, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC008999, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009000, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009001, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009002, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009003, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009004, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009005, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009006, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009007, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009008, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009009, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009010, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009011, "dEQP-VK.image.format_reinterpret.1d.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009012, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009013, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009014, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009015, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009016, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009017, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009018, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009019, "dEQP-VK.image.format_reinterpret.1d.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009020, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009021, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009022, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009023, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009024, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009025, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009026, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009027, "dEQP-VK.image.format_reinterpret.1d.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009028, "dEQP-VK.image.format_reinterpret.1d.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009029, "dEQP-VK.image.format_reinterpret.1d.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009030, "dEQP-VK.image.format_reinterpret.1d.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009031, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009032, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009033, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009034, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009035, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009036, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009037, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009038, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009039, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009040, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009041, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009042, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009043, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009044, "dEQP-VK.image.format_reinterpret.1d.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009045, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009046, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009047, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009048, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009049, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009050, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009051, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009052, "dEQP-VK.image.format_reinterpret.1d.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009053, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009054, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009055, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009056, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009057, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009058, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009059, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009060, "dEQP-VK.image.format_reinterpret.1d.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009061, "dEQP-VK.image.format_reinterpret.1d.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009062, "dEQP-VK.image.format_reinterpret.1d.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009063, "dEQP-VK.image.format_reinterpret.1d.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009064, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009065, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009066, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009067, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009068, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009069, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009070, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009071, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009072, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009073, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009074, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009075, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009076, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009077, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009078, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009079, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009080, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009081, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009082, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009083, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009084, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009085, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009086, "dEQP-VK.image.format_reinterpret.1d_array.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009087, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009088, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009089, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009090, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009091, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009092, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009093, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009094, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009095, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009096, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009097, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009098, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009099, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009100, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009101, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009102, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009103, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009104, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009105, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009106, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009107, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009108, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009109, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009110, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009111, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009112, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009113, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009114, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009115, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009116, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009117, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009118, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009119, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009120, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009121, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009122, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009123, "dEQP-VK.image.format_reinterpret.1d_array.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009124, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009125, "dEQP-VK.image.format_reinterpret.1d_array.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009126, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009127, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009128, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009129, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009130, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009131, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009132, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009133, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009134, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009135, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009136, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009137, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009138, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009139, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009140, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009141, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009142, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009143, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009144, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009145, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009146, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009147, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009148, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009149, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009150, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009151, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009152, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009153, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009154, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009155, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009156, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009157, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009158, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009159, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009160, "dEQP-VK.image.format_reinterpret.1d_array.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009161, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009162, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009163, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009164, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009165, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009166, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009167, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009168, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009169, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009170, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009171, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009172, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009173, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009174, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009175, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009176, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009177, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009178, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009179, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009180, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009181, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009182, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009183, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009184, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009185, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009186, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009187, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009188, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009189, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009190, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009191, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009192, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009193, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009194, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009195, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009196, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009197, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009198, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009199, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009200, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009201, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009202, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009203, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009204, "dEQP-VK.image.format_reinterpret.1d_array.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009205, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009206, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009207, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009208, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009209, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009210, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009211, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009212, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009213, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009214, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009215, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009216, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009217, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009218, "dEQP-VK.image.format_reinterpret.1d_array.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009219, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009220, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009221, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009222, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009223, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009224, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009225, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009226, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009227, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009228, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009229, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009230, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009231, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009232, "dEQP-VK.image.format_reinterpret.1d_array.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009233, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009234, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009235, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009236, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009237, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009238, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009239, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009240, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009241, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009242, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009243, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009244, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009245, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009246, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009247, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009248, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009249, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009250, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009251, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009252, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009253, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009254, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009255, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009256, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009257, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009258, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009259, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009260, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009261, "dEQP-VK.image.format_reinterpret.1d_array.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009262, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009263, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009264, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009265, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009266, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009267, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009268, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009269, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009270, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009271, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009272, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009273, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009274, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009275, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009276, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009277, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009278, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009279, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009280, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009281, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009282, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009283, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009284, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009285, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009286, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009287, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009288, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009289, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009290, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009291, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009292, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009293, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009294, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009295, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009296, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009297, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009298, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009299, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009300, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009301, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009302, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009303, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009304, "dEQP-VK.image.format_reinterpret.1d_array.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009305, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009306, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009307, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009308, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009309, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009310, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009311, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009312, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009313, "dEQP-VK.image.format_reinterpret.1d_array.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009314, "dEQP-VK.image.format_reinterpret.1d_array.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009315, "dEQP-VK.image.format_reinterpret.1d_array.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009316, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009317, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009318, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009319, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009320, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009321, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009322, "dEQP-VK.image.format_reinterpret.1d_array.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009323, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009324, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009325, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009326, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009327, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009328, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009329, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009330, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009331, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009332, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009333, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009334, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009335, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009336, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009337, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009338, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009339, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009340, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009341, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009342, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009343, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009344, "dEQP-VK.image.format_reinterpret.1d_array.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009345, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009346, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009347, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009348, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009349, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009350, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009351, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009352, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009353, "dEQP-VK.image.format_reinterpret.1d_array.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009354, "dEQP-VK.image.format_reinterpret.1d_array.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009355, "dEQP-VK.image.format_reinterpret.1d_array.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009356, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009357, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009358, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009359, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009360, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009361, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009362, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009363, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009364, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009365, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009366, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009367, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009368, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009369, "dEQP-VK.image.format_reinterpret.1d_array.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009370, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009371, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009372, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009373, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009374, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009375, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009376, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009377, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009378, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009379, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009380, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009381, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009382, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009383, "dEQP-VK.image.format_reinterpret.1d_array.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009384, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009385, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009386, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009387, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009388, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009389, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009390, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009391, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009392, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009393, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009394, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009395, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009396, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009397, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009398, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009399, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009400, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009401, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009402, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009403, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009404, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009405, "dEQP-VK.image.format_reinterpret.1d_array.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009406, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009407, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009408, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009409, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009410, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009411, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009412, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009413, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009414, "dEQP-VK.image.format_reinterpret.1d_array.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009415, "dEQP-VK.image.format_reinterpret.1d_array.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009416, "dEQP-VK.image.format_reinterpret.1d_array.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009417, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009418, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009419, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009420, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009421, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009422, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009423, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009424, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009425, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009426, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009427, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009428, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009429, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009430, "dEQP-VK.image.format_reinterpret.1d_array.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009431, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009432, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009433, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009434, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009435, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009436, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009437, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009438, "dEQP-VK.image.format_reinterpret.1d_array.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009439, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009440, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009441, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009442, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009443, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009444, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009445, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009446, "dEQP-VK.image.format_reinterpret.1d_array.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009447, "dEQP-VK.image.format_reinterpret.1d_array.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009448, "dEQP-VK.image.format_reinterpret.1d_array.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009449, "dEQP-VK.image.format_reinterpret.1d_array.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009450, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009451, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009452, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009453, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009454, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009455, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009456, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009457, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009458, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009459, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009460, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009461, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009462, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009463, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009464, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009465, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009466, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009467, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009468, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009469, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009470, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009471, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009472, "dEQP-VK.image.format_reinterpret.2d.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009473, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009474, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009475, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009476, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009477, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009478, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009479, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009480, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009481, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009482, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009483, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009484, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009485, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009486, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009487, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009488, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009489, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009490, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009491, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009492, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009493, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009494, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009495, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009496, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009497, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009498, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009499, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009500, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009501, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009502, "dEQP-VK.image.format_reinterpret.2d.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009503, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009504, "dEQP-VK.image.format_reinterpret.2d.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009505, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009506, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009507, "dEQP-VK.image.format_reinterpret.2d.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009508, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009509, "dEQP-VK.image.format_reinterpret.2d.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009510, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009511, "dEQP-VK.image.format_reinterpret.2d.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009512, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009513, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009514, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009515, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009516, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009517, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009518, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009519, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009520, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009521, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009522, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009523, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009524, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009525, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009526, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009527, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009528, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009529, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009530, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009531, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009532, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009533, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009534, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009535, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009536, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009537, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009538, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009539, "dEQP-VK.image.format_reinterpret.2d.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009540, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009541, "dEQP-VK.image.format_reinterpret.2d.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009542, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009543, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009544, "dEQP-VK.image.format_reinterpret.2d.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009545, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009546, "dEQP-VK.image.format_reinterpret.2d.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009547, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009548, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009549, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009550, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009551, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009552, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009553, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009554, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009555, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009556, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009557, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009558, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009559, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009560, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009561, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009562, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009563, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009564, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009565, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009566, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009567, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009568, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009569, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009570, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009571, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009572, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009573, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009574, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009575, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009576, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009577, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009578, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009579, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009580, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009581, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009582, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009583, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009584, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009585, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009586, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009587, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009588, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009589, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009590, "dEQP-VK.image.format_reinterpret.2d.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009591, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009592, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009593, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009594, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009595, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009596, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009597, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009598, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009599, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009600, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009601, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009602, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009603, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009604, "dEQP-VK.image.format_reinterpret.2d.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009605, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009606, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009607, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009608, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009609, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009610, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009611, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009612, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009613, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009614, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009615, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009616, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009617, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009618, "dEQP-VK.image.format_reinterpret.2d.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009619, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009620, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009621, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009622, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009623, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009624, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009625, "dEQP-VK.image.format_reinterpret.2d.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009626, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009627, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009628, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009629, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009630, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009631, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009632, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009633, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009634, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009635, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009636, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009637, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009638, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009639, "dEQP-VK.image.format_reinterpret.2d.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009640, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009641, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009642, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009643, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009644, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009645, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009646, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009647, "dEQP-VK.image.format_reinterpret.2d.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009648, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009649, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009650, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009651, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009652, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009653, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009654, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009655, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009656, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009657, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009658, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009659, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009660, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009661, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009662, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009663, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009664, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009665, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009666, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009667, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009668, "dEQP-VK.image.format_reinterpret.2d.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009669, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009670, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009671, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009672, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009673, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009674, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009675, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009676, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009677, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009678, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009679, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009680, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009681, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009682, "dEQP-VK.image.format_reinterpret.2d.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009683, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009684, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009685, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009686, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009687, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009688, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009689, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009690, "dEQP-VK.image.format_reinterpret.2d.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009691, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009692, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009693, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009694, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009695, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009696, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009697, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009698, "dEQP-VK.image.format_reinterpret.2d.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009699, "dEQP-VK.image.format_reinterpret.2d.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009700, "dEQP-VK.image.format_reinterpret.2d.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009701, "dEQP-VK.image.format_reinterpret.2d.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009702, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009703, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009704, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009705, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009706, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009707, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009708, "dEQP-VK.image.format_reinterpret.2d.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009709, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009710, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009711, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009712, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009713, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009714, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009715, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009716, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009717, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009718, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009719, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009720, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009721, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009722, "dEQP-VK.image.format_reinterpret.2d.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009723, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009724, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009725, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009726, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009727, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009728, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009729, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009730, "dEQP-VK.image.format_reinterpret.2d.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009731, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009732, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009733, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009734, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009735, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009736, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009737, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009738, "dEQP-VK.image.format_reinterpret.2d.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009739, "dEQP-VK.image.format_reinterpret.2d.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009740, "dEQP-VK.image.format_reinterpret.2d.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009741, "dEQP-VK.image.format_reinterpret.2d.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009742, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009743, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009744, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009745, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009746, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009747, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009748, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009749, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009750, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009751, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009752, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009753, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009754, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009755, "dEQP-VK.image.format_reinterpret.2d.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009756, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009757, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009758, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009759, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009760, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009761, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009762, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009763, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009764, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009765, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009766, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009767, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009768, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009769, "dEQP-VK.image.format_reinterpret.2d.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009770, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009771, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009772, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009773, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009774, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009775, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009776, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009777, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009778, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009779, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009780, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009781, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009782, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009783, "dEQP-VK.image.format_reinterpret.2d.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009784, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009785, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009786, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009787, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009788, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009789, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009790, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009791, "dEQP-VK.image.format_reinterpret.2d.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009792, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009793, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009794, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009795, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009796, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009797, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009798, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009799, "dEQP-VK.image.format_reinterpret.2d.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009800, "dEQP-VK.image.format_reinterpret.2d.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009801, "dEQP-VK.image.format_reinterpret.2d.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009802, "dEQP-VK.image.format_reinterpret.2d.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009803, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009804, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009805, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009806, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009807, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009808, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009809, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009810, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009811, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009812, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009813, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009814, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009815, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009816, "dEQP-VK.image.format_reinterpret.2d.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009817, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009818, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009819, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009820, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009821, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009822, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009823, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009824, "dEQP-VK.image.format_reinterpret.2d.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009825, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009826, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009827, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009828, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009829, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009830, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009831, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009832, "dEQP-VK.image.format_reinterpret.2d.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009833, "dEQP-VK.image.format_reinterpret.2d.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009834, "dEQP-VK.image.format_reinterpret.2d.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009835, "dEQP-VK.image.format_reinterpret.2d.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009836, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009837, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009838, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009839, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009840, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009841, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009842, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009843, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009844, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009845, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009846, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009847, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009848, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009849, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009850, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009851, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009852, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009853, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009854, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009855, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009856, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009857, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009858, "dEQP-VK.image.format_reinterpret.2d_array.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009859, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009860, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009861, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009862, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009863, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009864, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009865, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009866, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009867, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009868, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009869, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009870, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009871, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009872, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009873, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009874, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009875, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009876, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009877, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009878, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009879, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009880, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009881, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009882, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009883, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009884, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009885, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009886, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009887, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009888, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009889, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009890, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009891, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009892, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009893, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009894, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009895, "dEQP-VK.image.format_reinterpret.2d_array.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009896, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009897, "dEQP-VK.image.format_reinterpret.2d_array.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009898, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009899, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009900, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009901, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009902, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009903, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009904, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009905, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009906, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009907, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009908, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009909, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009910, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009911, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009912, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009913, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009914, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009915, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009916, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009917, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009918, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009919, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009920, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009921, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009922, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009923, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009924, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009925, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009926, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009927, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009928, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009929, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009930, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009931, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009932, "dEQP-VK.image.format_reinterpret.2d_array.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009933, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009934, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009935, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009936, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009937, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009938, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009939, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009940, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009941, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009942, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009943, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009944, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009945, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009946, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009947, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009948, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009949, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009950, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009951, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009952, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009953, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009954, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009955, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009956, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009957, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009958, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009959, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009960, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009961, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009962, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009963, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009964, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009965, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009966, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009967, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009968, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009969, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009970, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009971, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009972, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009973, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009974, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009975, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009976, "dEQP-VK.image.format_reinterpret.2d_array.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009977, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009978, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009979, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009980, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009981, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009982, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009983, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009984, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009985, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009986, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009987, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009988, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009989, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009990, "dEQP-VK.image.format_reinterpret.2d_array.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009991, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009992, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009993, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009994, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009995, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009996, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009997, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009998, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC009999, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010000, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010001, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010002, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010003, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010004, "dEQP-VK.image.format_reinterpret.2d_array.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010005, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010006, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010007, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010008, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010009, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010010, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010011, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010012, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010013, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010014, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010015, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010016, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010017, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010018, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010019, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010020, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010021, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010022, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010023, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010024, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010025, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010026, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010027, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010028, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010029, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010030, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010031, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010032, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010033, "dEQP-VK.image.format_reinterpret.2d_array.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010034, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010035, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010036, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010037, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010038, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010039, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010040, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010041, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010042, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010043, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010044, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010045, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010046, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010047, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010048, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010049, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010050, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010051, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010052, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010053, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010054, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010055, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010056, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010057, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010058, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010059, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010060, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010061, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010062, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010063, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010064, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010065, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010066, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010067, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010068, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010069, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010070, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010071, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010072, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010073, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010074, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010075, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010076, "dEQP-VK.image.format_reinterpret.2d_array.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010077, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010078, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010079, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010080, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010081, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010082, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010083, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010084, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010085, "dEQP-VK.image.format_reinterpret.2d_array.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010086, "dEQP-VK.image.format_reinterpret.2d_array.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010087, "dEQP-VK.image.format_reinterpret.2d_array.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010088, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010089, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010090, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010091, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010092, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010093, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010094, "dEQP-VK.image.format_reinterpret.2d_array.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010095, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010096, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010097, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010098, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010099, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010100, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010101, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010102, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010103, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010104, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010105, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010106, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010107, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010108, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010109, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010110, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010111, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010112, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010113, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010114, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010115, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010116, "dEQP-VK.image.format_reinterpret.2d_array.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010117, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010118, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010119, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010120, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010121, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010122, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010123, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010124, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010125, "dEQP-VK.image.format_reinterpret.2d_array.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010126, "dEQP-VK.image.format_reinterpret.2d_array.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010127, "dEQP-VK.image.format_reinterpret.2d_array.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010128, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010129, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010130, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010131, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010132, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010133, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010134, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010135, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010136, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010137, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010138, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010139, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010140, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010141, "dEQP-VK.image.format_reinterpret.2d_array.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010142, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010143, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010144, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010145, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010146, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010147, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010148, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010149, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010150, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010151, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010152, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010153, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010154, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010155, "dEQP-VK.image.format_reinterpret.2d_array.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010156, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010157, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010158, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010159, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010160, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010161, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010162, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010163, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010164, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010165, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010166, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010167, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010168, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010169, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010170, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010171, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010172, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010173, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010174, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010175, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010176, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010177, "dEQP-VK.image.format_reinterpret.2d_array.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010178, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010179, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010180, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010181, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010182, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010183, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010184, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010185, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010186, "dEQP-VK.image.format_reinterpret.2d_array.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010187, "dEQP-VK.image.format_reinterpret.2d_array.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010188, "dEQP-VK.image.format_reinterpret.2d_array.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010189, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010190, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010191, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010192, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010193, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010194, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010195, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010196, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010197, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010198, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010199, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010200, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010201, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010202, "dEQP-VK.image.format_reinterpret.2d_array.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010203, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010204, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010205, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010206, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010207, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010208, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010209, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010210, "dEQP-VK.image.format_reinterpret.2d_array.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010211, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010212, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010213, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010214, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010215, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010216, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010217, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010218, "dEQP-VK.image.format_reinterpret.2d_array.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010219, "dEQP-VK.image.format_reinterpret.2d_array.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010220, "dEQP-VK.image.format_reinterpret.2d_array.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010221, "dEQP-VK.image.format_reinterpret.2d_array.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010222, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010223, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010224, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010225, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010226, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010227, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010228, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010229, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010230, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010231, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010232, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010233, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010234, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010235, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010236, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010237, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010238, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010239, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010240, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010241, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010242, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010243, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010244, "dEQP-VK.image.format_reinterpret.3d.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010245, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010246, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010247, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010248, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010249, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010250, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010251, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010252, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010253, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010254, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010255, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010256, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010257, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010258, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010259, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010260, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010261, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010262, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010263, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010264, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010265, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010266, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010267, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010268, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010269, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010270, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010271, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010272, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010273, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010274, "dEQP-VK.image.format_reinterpret.3d.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010275, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010276, "dEQP-VK.image.format_reinterpret.3d.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010277, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010278, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010279, "dEQP-VK.image.format_reinterpret.3d.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010280, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010281, "dEQP-VK.image.format_reinterpret.3d.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010282, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010283, "dEQP-VK.image.format_reinterpret.3d.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010284, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010285, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010286, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010287, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010288, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010289, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010290, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010291, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010292, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010293, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010294, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010295, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010296, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010297, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010298, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010299, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010300, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010301, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010302, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010303, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010304, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010305, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010306, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010307, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010308, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010309, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010310, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010311, "dEQP-VK.image.format_reinterpret.3d.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010312, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010313, "dEQP-VK.image.format_reinterpret.3d.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010314, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010315, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010316, "dEQP-VK.image.format_reinterpret.3d.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010317, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010318, "dEQP-VK.image.format_reinterpret.3d.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010319, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010320, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010321, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010322, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010323, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010324, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010325, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010326, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010327, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010328, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010329, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010330, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010331, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010332, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010333, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010334, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010335, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010336, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010337, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010338, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010339, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010340, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010341, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010342, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010343, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010344, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010345, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010346, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010347, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010348, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010349, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010350, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010351, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010352, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010353, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010354, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010355, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010356, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010357, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010358, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010359, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010360, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010361, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010362, "dEQP-VK.image.format_reinterpret.3d.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010363, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010364, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010365, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010366, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010367, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010368, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010369, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010370, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010371, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010372, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010373, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010374, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010375, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010376, "dEQP-VK.image.format_reinterpret.3d.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010377, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010378, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010379, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010380, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010381, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010382, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010383, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010384, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010385, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010386, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010387, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010388, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010389, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010390, "dEQP-VK.image.format_reinterpret.3d.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010391, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010392, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010393, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010394, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010395, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010396, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010397, "dEQP-VK.image.format_reinterpret.3d.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010398, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010399, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010400, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010401, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010402, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010403, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010404, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010405, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010406, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010407, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010408, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010409, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010410, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010411, "dEQP-VK.image.format_reinterpret.3d.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010412, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010413, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010414, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010415, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010416, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010417, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010418, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010419, "dEQP-VK.image.format_reinterpret.3d.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010420, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010421, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010422, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010423, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010424, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010425, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010426, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010427, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010428, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010429, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010430, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010431, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010432, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010433, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010434, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010435, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010436, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010437, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010438, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010439, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010440, "dEQP-VK.image.format_reinterpret.3d.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010441, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010442, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010443, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010444, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010445, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010446, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010447, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010448, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010449, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010450, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010451, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010452, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010453, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010454, "dEQP-VK.image.format_reinterpret.3d.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010455, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010456, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010457, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010458, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010459, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010460, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010461, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010462, "dEQP-VK.image.format_reinterpret.3d.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010463, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010464, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010465, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010466, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010467, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010468, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010469, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010470, "dEQP-VK.image.format_reinterpret.3d.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010471, "dEQP-VK.image.format_reinterpret.3d.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010472, "dEQP-VK.image.format_reinterpret.3d.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010473, "dEQP-VK.image.format_reinterpret.3d.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010474, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010475, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010476, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010477, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010478, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010479, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010480, "dEQP-VK.image.format_reinterpret.3d.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010481, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010482, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010483, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010484, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010485, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010486, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010487, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010488, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010489, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010490, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010491, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010492, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010493, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010494, "dEQP-VK.image.format_reinterpret.3d.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010495, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010496, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010497, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010498, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010499, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010500, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010501, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010502, "dEQP-VK.image.format_reinterpret.3d.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010503, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010504, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010505, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010506, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010507, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010508, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010509, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010510, "dEQP-VK.image.format_reinterpret.3d.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010511, "dEQP-VK.image.format_reinterpret.3d.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010512, "dEQP-VK.image.format_reinterpret.3d.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010513, "dEQP-VK.image.format_reinterpret.3d.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010514, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010515, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010516, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010517, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010518, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010519, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010520, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010521, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010522, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010523, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010524, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010525, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010526, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010527, "dEQP-VK.image.format_reinterpret.3d.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010528, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010529, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010530, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010531, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010532, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010533, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010534, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010535, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010536, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010537, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010538, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010539, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010540, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010541, "dEQP-VK.image.format_reinterpret.3d.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010542, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010543, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010544, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010545, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010546, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010547, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010548, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010549, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010550, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010551, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010552, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010553, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010554, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010555, "dEQP-VK.image.format_reinterpret.3d.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010556, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010557, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010558, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010559, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010560, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010561, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010562, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010563, "dEQP-VK.image.format_reinterpret.3d.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010564, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010565, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010566, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010567, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010568, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010569, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010570, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010571, "dEQP-VK.image.format_reinterpret.3d.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010572, "dEQP-VK.image.format_reinterpret.3d.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010573, "dEQP-VK.image.format_reinterpret.3d.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010574, "dEQP-VK.image.format_reinterpret.3d.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010575, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010576, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010577, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010578, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010579, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010580, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010581, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010582, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010583, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010584, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010585, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010586, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010587, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010588, "dEQP-VK.image.format_reinterpret.3d.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010589, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010590, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010591, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010592, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010593, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010594, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010595, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010596, "dEQP-VK.image.format_reinterpret.3d.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010597, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010598, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010599, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010600, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010601, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010602, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010603, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010604, "dEQP-VK.image.format_reinterpret.3d.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010605, "dEQP-VK.image.format_reinterpret.3d.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010606, "dEQP-VK.image.format_reinterpret.3d.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010607, "dEQP-VK.image.format_reinterpret.3d.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010608, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010609, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010610, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010611, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010612, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010613, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010614, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010615, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010616, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010617, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010618, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010619, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010620, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010621, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010622, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010623, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010624, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010625, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010626, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010627, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010628, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010629, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010630, "dEQP-VK.image.format_reinterpret.cube.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010631, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010632, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010633, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010634, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010635, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010636, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010637, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010638, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010639, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010640, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010641, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010642, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010643, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010644, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010645, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010646, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010647, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010648, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010649, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010650, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010651, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010652, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010653, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010654, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010655, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010656, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010657, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010658, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010659, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010660, "dEQP-VK.image.format_reinterpret.cube.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010661, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010662, "dEQP-VK.image.format_reinterpret.cube.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010663, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010664, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010665, "dEQP-VK.image.format_reinterpret.cube.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010666, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010667, "dEQP-VK.image.format_reinterpret.cube.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010668, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010669, "dEQP-VK.image.format_reinterpret.cube.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010670, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010671, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010672, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010673, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010674, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010675, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010676, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010677, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010678, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010679, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010680, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010681, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010682, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010683, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010684, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010685, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010686, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010687, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010688, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010689, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010690, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010691, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010692, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010693, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010694, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010695, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010696, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010697, "dEQP-VK.image.format_reinterpret.cube.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010698, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010699, "dEQP-VK.image.format_reinterpret.cube.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010700, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010701, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010702, "dEQP-VK.image.format_reinterpret.cube.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010703, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010704, "dEQP-VK.image.format_reinterpret.cube.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010705, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010706, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010707, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010708, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010709, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010710, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010711, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010712, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010713, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010714, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010715, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010716, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010717, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010718, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010719, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010720, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010721, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010722, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010723, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010724, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010725, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010726, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010727, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010728, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010729, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010730, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010731, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010732, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010733, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010734, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010735, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010736, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010737, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010738, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010739, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010740, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010741, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010742, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010743, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010744, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010745, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010746, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010747, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010748, "dEQP-VK.image.format_reinterpret.cube.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010749, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010750, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010751, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010752, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010753, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010754, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010755, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010756, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010757, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010758, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010759, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010760, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010761, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010762, "dEQP-VK.image.format_reinterpret.cube.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010763, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010764, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010765, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010766, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010767, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010768, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010769, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010770, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010771, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010772, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010773, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010774, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010775, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010776, "dEQP-VK.image.format_reinterpret.cube.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010777, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010778, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010779, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010780, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010781, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010782, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010783, "dEQP-VK.image.format_reinterpret.cube.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010784, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010785, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010786, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010787, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010788, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010789, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010790, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010791, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010792, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010793, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010794, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010795, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010796, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010797, "dEQP-VK.image.format_reinterpret.cube.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010798, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010799, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010800, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010801, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010802, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010803, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010804, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010805, "dEQP-VK.image.format_reinterpret.cube.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010806, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010807, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010808, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010809, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010810, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010811, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010812, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010813, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010814, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010815, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010816, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010817, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010818, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010819, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010820, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010821, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010822, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010823, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010824, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010825, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010826, "dEQP-VK.image.format_reinterpret.cube.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010827, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010828, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010829, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010830, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010831, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010832, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010833, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010834, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010835, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010836, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010837, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010838, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010839, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010840, "dEQP-VK.image.format_reinterpret.cube.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010841, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010842, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010843, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010844, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010845, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010846, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010847, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010848, "dEQP-VK.image.format_reinterpret.cube.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010849, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010850, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010851, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010852, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010853, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010854, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010855, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010856, "dEQP-VK.image.format_reinterpret.cube.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010857, "dEQP-VK.image.format_reinterpret.cube.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010858, "dEQP-VK.image.format_reinterpret.cube.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010859, "dEQP-VK.image.format_reinterpret.cube.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010860, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010861, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010862, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010863, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010864, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010865, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010866, "dEQP-VK.image.format_reinterpret.cube.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010867, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010868, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010869, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010870, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010871, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010872, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010873, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010874, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010875, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010876, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010877, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010878, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010879, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010880, "dEQP-VK.image.format_reinterpret.cube.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010881, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010882, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010883, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010884, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010885, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010886, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010887, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010888, "dEQP-VK.image.format_reinterpret.cube.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010889, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010890, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010891, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010892, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010893, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010894, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010895, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010896, "dEQP-VK.image.format_reinterpret.cube.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010897, "dEQP-VK.image.format_reinterpret.cube.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010898, "dEQP-VK.image.format_reinterpret.cube.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010899, "dEQP-VK.image.format_reinterpret.cube.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010900, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010901, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010902, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010903, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010904, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010905, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010906, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010907, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010908, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010909, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010910, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010911, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010912, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010913, "dEQP-VK.image.format_reinterpret.cube.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010914, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010915, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010916, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010917, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010918, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010919, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010920, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010921, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010922, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010923, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010924, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010925, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010926, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010927, "dEQP-VK.image.format_reinterpret.cube.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010928, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010929, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010930, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010931, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010932, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010933, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010934, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010935, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010936, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010937, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010938, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010939, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010940, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010941, "dEQP-VK.image.format_reinterpret.cube.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010942, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010943, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010944, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010945, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010946, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010947, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010948, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010949, "dEQP-VK.image.format_reinterpret.cube.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010950, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010951, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010952, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010953, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010954, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010955, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010956, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010957, "dEQP-VK.image.format_reinterpret.cube.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010958, "dEQP-VK.image.format_reinterpret.cube.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010959, "dEQP-VK.image.format_reinterpret.cube.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010960, "dEQP-VK.image.format_reinterpret.cube.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010961, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010962, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010963, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010964, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010965, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010966, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010967, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010968, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010969, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010970, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010971, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010972, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010973, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010974, "dEQP-VK.image.format_reinterpret.cube.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010975, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010976, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010977, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010978, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010979, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010980, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010981, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010982, "dEQP-VK.image.format_reinterpret.cube.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010983, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010984, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010985, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010986, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010987, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010988, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010989, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010990, "dEQP-VK.image.format_reinterpret.cube.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010991, "dEQP-VK.image.format_reinterpret.cube.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010992, "dEQP-VK.image.format_reinterpret.cube.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010993, "dEQP-VK.image.format_reinterpret.cube.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010994, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010995, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010996, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010997, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010998, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC010999, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011000, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011001, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011002, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011003, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011004, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011005, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011006, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011007, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011008, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011009, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011010, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011011, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011012, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011013, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011014, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011015, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011016, "dEQP-VK.image.format_reinterpret.cube_array.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011017, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011018, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011019, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011020, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011021, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011022, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011023, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011024, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011025, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011026, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011027, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011028, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011029, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011030, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011031, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011032, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011033, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011034, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011035, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011036, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011037, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011038, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011039, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011040, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011041, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011042, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011043, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011044, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011045, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011046, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011047, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011048, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011049, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011050, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011051, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011052, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011053, "dEQP-VK.image.format_reinterpret.cube_array.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011054, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011055, "dEQP-VK.image.format_reinterpret.cube_array.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011056, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011057, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011058, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011059, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011060, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011061, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011062, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011063, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011064, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011065, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011066, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011067, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011068, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011069, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011070, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011071, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011072, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011073, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011074, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011075, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011076, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011077, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011078, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011079, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011080, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011081, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011082, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011083, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011084, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011085, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011086, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011087, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011088, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011089, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011090, "dEQP-VK.image.format_reinterpret.cube_array.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011091, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011092, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011093, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011094, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011095, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011096, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011097, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011098, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011099, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011100, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011101, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011102, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011103, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011104, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011105, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011106, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011107, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011108, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011109, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011110, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011111, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011112, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011113, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011114, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011115, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011116, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011117, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011118, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011119, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011120, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011121, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011122, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011123, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011124, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011125, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011126, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011127, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011128, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011129, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011130, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011131, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011132, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011133, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011134, "dEQP-VK.image.format_reinterpret.cube_array.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011135, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011136, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011137, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011138, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011139, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011140, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011141, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011142, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011143, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011144, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011145, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011146, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011147, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011148, "dEQP-VK.image.format_reinterpret.cube_array.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011149, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011150, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011151, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011152, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011153, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011154, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011155, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011156, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011157, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011158, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011159, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011160, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011161, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011162, "dEQP-VK.image.format_reinterpret.cube_array.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011163, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011164, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011165, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011166, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011167, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011168, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011169, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011170, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011171, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011172, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011173, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011174, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011175, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011176, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011177, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011178, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011179, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011180, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011181, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011182, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011183, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011184, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011185, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011186, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011187, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011188, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011189, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011190, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011191, "dEQP-VK.image.format_reinterpret.cube_array.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011192, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011193, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011194, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011195, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011196, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011197, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011198, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011199, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011200, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011201, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011202, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011203, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011204, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011205, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011206, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011207, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011208, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011209, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011210, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011211, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011212, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011213, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011214, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011215, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011216, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011217, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011218, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011219, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011220, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011221, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011222, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011223, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011224, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011225, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011226, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011227, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011228, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011229, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011230, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011231, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011232, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011233, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011234, "dEQP-VK.image.format_reinterpret.cube_array.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011235, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011236, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011237, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011238, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011239, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011240, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011241, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011242, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011243, "dEQP-VK.image.format_reinterpret.cube_array.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011244, "dEQP-VK.image.format_reinterpret.cube_array.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011245, "dEQP-VK.image.format_reinterpret.cube_array.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011246, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011247, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011248, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011249, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011250, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011251, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011252, "dEQP-VK.image.format_reinterpret.cube_array.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011253, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011254, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011255, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011256, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011257, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011258, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011259, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011260, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011261, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011262, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011263, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011264, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011265, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011266, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011267, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011268, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011269, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011270, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011271, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011272, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011273, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011274, "dEQP-VK.image.format_reinterpret.cube_array.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011275, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011276, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011277, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011278, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011279, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011280, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011281, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011282, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011283, "dEQP-VK.image.format_reinterpret.cube_array.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011284, "dEQP-VK.image.format_reinterpret.cube_array.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011285, "dEQP-VK.image.format_reinterpret.cube_array.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011286, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011287, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011288, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011289, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011290, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011291, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011292, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011293, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011294, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011295, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011296, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011297, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011298, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011299, "dEQP-VK.image.format_reinterpret.cube_array.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011300, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011301, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011302, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011303, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011304, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011305, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011306, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011307, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011308, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011309, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011310, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011311, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011312, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011313, "dEQP-VK.image.format_reinterpret.cube_array.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011314, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011315, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011316, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011317, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011318, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011319, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011320, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011321, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011322, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011323, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011324, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011325, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011326, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011327, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011328, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011329, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011330, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011331, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011332, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011333, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011334, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011335, "dEQP-VK.image.format_reinterpret.cube_array.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011336, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011337, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011338, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011339, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011340, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011341, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011342, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011343, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011344, "dEQP-VK.image.format_reinterpret.cube_array.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011345, "dEQP-VK.image.format_reinterpret.cube_array.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011346, "dEQP-VK.image.format_reinterpret.cube_array.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011347, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011348, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011349, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011350, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011351, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011352, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011353, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011354, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011355, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011356, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011357, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011358, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011359, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011360, "dEQP-VK.image.format_reinterpret.cube_array.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011361, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011362, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011363, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011364, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011365, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011366, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011367, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011368, "dEQP-VK.image.format_reinterpret.cube_array.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011369, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011370, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011371, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011372, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011373, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011374, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011375, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011376, "dEQP-VK.image.format_reinterpret.cube_array.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011377, "dEQP-VK.image.format_reinterpret.cube_array.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011378, "dEQP-VK.image.format_reinterpret.cube_array.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011379, "dEQP-VK.image.format_reinterpret.cube_array.r8_snorm_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011380, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_sfloat_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011381, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_sfloat_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011382, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011383, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011384, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011385, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011386, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011387, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011388, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011389, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011390, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011391, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011392, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011393, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011394, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011395, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011396, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011397, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011398, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011399, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011400, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011401, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011402, "dEQP-VK.image.format_reinterpret.buffer.r32_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011403, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_uint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011404, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_uint_r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011405, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011406, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011407, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011408, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011409, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011410, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011411, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011412, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011413, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011414, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011415, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011416, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011417, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011418, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011419, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011420, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011421, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011422, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011423, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011424, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011425, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011426, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011427, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011428, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011429, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011430, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011431, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011432, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011433, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011434, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011435, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011436, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011437, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011438, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011439, "dEQP-VK.image.format_reinterpret.buffer.r32_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011440, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_sint_r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011441, "dEQP-VK.image.format_reinterpret.buffer.r32g32b32a32_sint_r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011442, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011443, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011444, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011445, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011446, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011447, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011448, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011449, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011450, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011451, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011452, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011453, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011454, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011455, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011456, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011457, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011458, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011459, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011460, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011461, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011462, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011463, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011464, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011465, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011466, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011467, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011468, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011469, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011470, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011471, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011472, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011473, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011474, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011475, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011476, "dEQP-VK.image.format_reinterpret.buffer.r32_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011477, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011478, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011479, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011480, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011481, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011482, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011483, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011484, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011485, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011486, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011487, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011488, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011489, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011490, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011491, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011492, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011493, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011494, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011495, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011496, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011497, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011498, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011499, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011500, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011501, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011502, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011503, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011504, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011505, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011506, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011507, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011508, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011509, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011510, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011511, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011512, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011513, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011514, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011515, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011516, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011517, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011518, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011519, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011520, "dEQP-VK.image.format_reinterpret.buffer.b8g8r8a8_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011521, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011522, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011523, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011524, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011525, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011526, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011527, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011528, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011529, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011530, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011531, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011532, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011533, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011534, "dEQP-VK.image.format_reinterpret.buffer.r8g8b8a8_snorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011535, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011536, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011537, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011538, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011539, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011540, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011541, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011542, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011543, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011544, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011545, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011546, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011547, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011548, "dEQP-VK.image.format_reinterpret.buffer.b10g11r11_ufloat_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011549, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011550, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011551, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011552, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011553, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011554, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011555, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sfloat_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011556, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011557, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011558, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011559, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011560, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011561, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011562, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011563, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011564, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011565, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011566, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011567, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011568, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011569, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sfloat_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011570, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011571, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011572, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011573, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011574, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011575, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011576, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011577, "dEQP-VK.image.format_reinterpret.buffer.r16_sfloat_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011578, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011579, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011580, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011581, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011582, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011583, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011584, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011585, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011586, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011587, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011588, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011589, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011590, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011591, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_uint_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011592, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011593, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011594, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011595, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011596, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011597, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011598, "dEQP-VK.image.format_reinterpret.buffer.r32g32_uint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011599, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011600, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011601, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011602, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011603, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011604, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011605, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011606, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011607, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011608, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011609, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011610, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011611, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011612, "dEQP-VK.image.format_reinterpret.buffer.r16g16_uint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011613, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011614, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011615, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011616, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011617, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011618, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011619, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011620, "dEQP-VK.image.format_reinterpret.buffer.r16_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011621, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011622, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011623, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011624, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011625, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011626, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011627, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011628, "dEQP-VK.image.format_reinterpret.buffer.r8g8_uint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011629, "dEQP-VK.image.format_reinterpret.buffer.r8_uint_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011630, "dEQP-VK.image.format_reinterpret.buffer.r8_uint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011631, "dEQP-VK.image.format_reinterpret.buffer.r8_uint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011632, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011633, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011634, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011635, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011636, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011637, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011638, "dEQP-VK.image.format_reinterpret.buffer.r32g32_sint_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011639, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011640, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011641, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011642, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011643, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011644, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011645, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011646, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011647, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011648, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011649, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011650, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011651, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011652, "dEQP-VK.image.format_reinterpret.buffer.r16g16_sint_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011653, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011654, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011655, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011656, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011657, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011658, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011659, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011660, "dEQP-VK.image.format_reinterpret.buffer.r16_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011661, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011662, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011663, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011664, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011665, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011666, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011667, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011668, "dEQP-VK.image.format_reinterpret.buffer.r8g8_sint_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011669, "dEQP-VK.image.format_reinterpret.buffer.r8_sint_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011670, "dEQP-VK.image.format_reinterpret.buffer.r8_sint_r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011671, "dEQP-VK.image.format_reinterpret.buffer.r8_sint_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011672, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011673, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011674, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011675, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011676, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011677, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011678, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011679, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011680, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011681, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011682, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011683, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011684, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011685, "dEQP-VK.image.format_reinterpret.buffer.a2b10g10r10_unorm_pack32_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011686, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011687, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011688, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011689, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011690, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011691, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011692, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_unorm_r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011693, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011694, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011695, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011696, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011697, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011698, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011699, "dEQP-VK.image.format_reinterpret.buffer.r16g16b16a16_snorm_r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011700, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011701, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011702, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011703, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011704, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011705, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011706, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011707, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011708, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011709, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011710, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011711, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011712, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011713, "dEQP-VK.image.format_reinterpret.buffer.r16g16_unorm_r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011714, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011715, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011716, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011717, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011718, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011719, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011720, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011721, "dEQP-VK.image.format_reinterpret.buffer.r16_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011722, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011723, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011724, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011725, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011726, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011727, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011728, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011729, "dEQP-VK.image.format_reinterpret.buffer.r8g8_unorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011730, "dEQP-VK.image.format_reinterpret.buffer.r8_unorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011731, "dEQP-VK.image.format_reinterpret.buffer.r8_unorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011732, "dEQP-VK.image.format_reinterpret.buffer.r8_unorm_r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011733, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011734, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011735, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011736, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011737, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011738, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011739, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011740, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_b10g11r11_ufloat_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011741, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011742, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_a2b10g10r10_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011743, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011744, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011745, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_a2b10g10r10_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011746, "dEQP-VK.image.format_reinterpret.buffer.r16g16_snorm_r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011747, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011748, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011749, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011750, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011751, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011752, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011753, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011754, "dEQP-VK.image.format_reinterpret.buffer.r16_snorm_r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011755, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011756, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011757, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011758, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011759, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011760, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011761, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011762, "dEQP-VK.image.format_reinterpret.buffer.r8g8_snorm_r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011763, "dEQP-VK.image.format_reinterpret.buffer.r8_snorm_r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011764, "dEQP-VK.image.format_reinterpret.buffer.r8_snorm_r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0005TS, TC011765, "dEQP-VK.image.format_reinterpret.buffer.r8_snorm_r8_unorm.*");
