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
#include "../ActsImage0006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0006TS, TC011971, "dEQP-VK.image.extended_usage_bit.attachment_read.r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011972, "dEQP-VK.image.extended_usage_bit.attachment_read.r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011973, "dEQP-VK.image.extended_usage_bit.attachment_read.r8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011974, "dEQP-VK.image.extended_usage_bit.attachment_read.r8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011975, "dEQP-VK.image.extended_usage_bit.attachment_read.r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011976, "dEQP-VK.image.extended_usage_bit.attachment_read.r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011977, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011978, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011979, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011980, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011981, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011982, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011983, "dEQP-VK.image.extended_usage_bit.attachment_read.r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011984, "dEQP-VK.image.extended_usage_bit.attachment_read.r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011985, "dEQP-VK.image.extended_usage_bit.attachment_read.r16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011986, "dEQP-VK.image.extended_usage_bit.attachment_read.r16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011987, "dEQP-VK.image.extended_usage_bit.attachment_read.r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011988, "dEQP-VK.image.extended_usage_bit.attachment_read.r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011989, "dEQP-VK.image.extended_usage_bit.attachment_read.r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011990, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011991, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011992, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8b8a8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011993, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8b8a8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011994, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011995, "dEQP-VK.image.extended_usage_bit.attachment_read.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011996, "dEQP-VK.image.extended_usage_bit.attachment_read.a8b8g8r8_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011997, "dEQP-VK.image.extended_usage_bit.attachment_read.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011998, "dEQP-VK.image.extended_usage_bit.attachment_read.a8b8g8r8_uscaled_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC011999, "dEQP-VK.image.extended_usage_bit.attachment_read.a8b8g8r8_sscaled_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012000, "dEQP-VK.image.extended_usage_bit.attachment_read.a8b8g8r8_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012001, "dEQP-VK.image.extended_usage_bit.attachment_read.a8b8g8r8_sint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012002, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012003, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012004, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012005, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012006, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012007, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012008, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012009, "dEQP-VK.image.extended_usage_bit.attachment_read.r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012010, "dEQP-VK.image.extended_usage_bit.attachment_read.r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012011, "dEQP-VK.image.extended_usage_bit.attachment_read.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012012, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012013, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012014, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16b16a16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012015, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16b16a16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012016, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012017, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012018, "dEQP-VK.image.extended_usage_bit.attachment_read.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012019, "dEQP-VK.image.extended_usage_bit.attachment_read.r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012020, "dEQP-VK.image.extended_usage_bit.attachment_read.r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012021, "dEQP-VK.image.extended_usage_bit.attachment_read.r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012022, "dEQP-VK.image.extended_usage_bit.attachment_read.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012023, "dEQP-VK.image.extended_usage_bit.attachment_read.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012024, "dEQP-VK.image.extended_usage_bit.attachment_read.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012025, "dEQP-VK.image.extended_usage_bit.attachment_write.r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012026, "dEQP-VK.image.extended_usage_bit.attachment_write.r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012027, "dEQP-VK.image.extended_usage_bit.attachment_write.r8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012028, "dEQP-VK.image.extended_usage_bit.attachment_write.r8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012029, "dEQP-VK.image.extended_usage_bit.attachment_write.r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012030, "dEQP-VK.image.extended_usage_bit.attachment_write.r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012031, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012032, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012033, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012034, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012035, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012036, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012037, "dEQP-VK.image.extended_usage_bit.attachment_write.r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012038, "dEQP-VK.image.extended_usage_bit.attachment_write.r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012039, "dEQP-VK.image.extended_usage_bit.attachment_write.r16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012040, "dEQP-VK.image.extended_usage_bit.attachment_write.r16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012041, "dEQP-VK.image.extended_usage_bit.attachment_write.r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012042, "dEQP-VK.image.extended_usage_bit.attachment_write.r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012043, "dEQP-VK.image.extended_usage_bit.attachment_write.r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012044, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012045, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012046, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8b8a8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012047, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8b8a8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012048, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012049, "dEQP-VK.image.extended_usage_bit.attachment_write.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012050, "dEQP-VK.image.extended_usage_bit.attachment_write.a8b8g8r8_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012051, "dEQP-VK.image.extended_usage_bit.attachment_write.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012052, "dEQP-VK.image.extended_usage_bit.attachment_write.a8b8g8r8_uscaled_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012053, "dEQP-VK.image.extended_usage_bit.attachment_write.a8b8g8r8_sscaled_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012054, "dEQP-VK.image.extended_usage_bit.attachment_write.a8b8g8r8_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012055, "dEQP-VK.image.extended_usage_bit.attachment_write.a8b8g8r8_sint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012056, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012057, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012058, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012059, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012060, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012061, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012062, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012063, "dEQP-VK.image.extended_usage_bit.attachment_write.r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012064, "dEQP-VK.image.extended_usage_bit.attachment_write.r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012065, "dEQP-VK.image.extended_usage_bit.attachment_write.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012066, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012067, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012068, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16b16a16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012069, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16b16a16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012070, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012071, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012072, "dEQP-VK.image.extended_usage_bit.attachment_write.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012073, "dEQP-VK.image.extended_usage_bit.attachment_write.r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012074, "dEQP-VK.image.extended_usage_bit.attachment_write.r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012075, "dEQP-VK.image.extended_usage_bit.attachment_write.r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012076, "dEQP-VK.image.extended_usage_bit.attachment_write.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012077, "dEQP-VK.image.extended_usage_bit.attachment_write.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012078, "dEQP-VK.image.extended_usage_bit.attachment_write.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012079, "dEQP-VK.image.extended_usage_bit.texture_read.r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012080, "dEQP-VK.image.extended_usage_bit.texture_read.r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012081, "dEQP-VK.image.extended_usage_bit.texture_read.r8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012082, "dEQP-VK.image.extended_usage_bit.texture_read.r8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012083, "dEQP-VK.image.extended_usage_bit.texture_read.r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012084, "dEQP-VK.image.extended_usage_bit.texture_read.r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012085, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012086, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012087, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012088, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012089, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012090, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012091, "dEQP-VK.image.extended_usage_bit.texture_read.r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012092, "dEQP-VK.image.extended_usage_bit.texture_read.r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012093, "dEQP-VK.image.extended_usage_bit.texture_read.r16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012094, "dEQP-VK.image.extended_usage_bit.texture_read.r16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012095, "dEQP-VK.image.extended_usage_bit.texture_read.r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012096, "dEQP-VK.image.extended_usage_bit.texture_read.r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012097, "dEQP-VK.image.extended_usage_bit.texture_read.r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012098, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012099, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012100, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8b8a8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012101, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8b8a8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012102, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012103, "dEQP-VK.image.extended_usage_bit.texture_read.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012104, "dEQP-VK.image.extended_usage_bit.texture_read.a8b8g8r8_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012105, "dEQP-VK.image.extended_usage_bit.texture_read.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012106, "dEQP-VK.image.extended_usage_bit.texture_read.a8b8g8r8_uscaled_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012107, "dEQP-VK.image.extended_usage_bit.texture_read.a8b8g8r8_sscaled_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012108, "dEQP-VK.image.extended_usage_bit.texture_read.a8b8g8r8_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012109, "dEQP-VK.image.extended_usage_bit.texture_read.a8b8g8r8_sint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012110, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012111, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012112, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012113, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012114, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012115, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012116, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012117, "dEQP-VK.image.extended_usage_bit.texture_read.r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012118, "dEQP-VK.image.extended_usage_bit.texture_read.r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012119, "dEQP-VK.image.extended_usage_bit.texture_read.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012120, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012121, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012122, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16b16a16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012123, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16b16a16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012124, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012125, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012126, "dEQP-VK.image.extended_usage_bit.texture_read.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012127, "dEQP-VK.image.extended_usage_bit.texture_read.r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012128, "dEQP-VK.image.extended_usage_bit.texture_read.r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012129, "dEQP-VK.image.extended_usage_bit.texture_read.r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012130, "dEQP-VK.image.extended_usage_bit.texture_read.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012131, "dEQP-VK.image.extended_usage_bit.texture_read.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012132, "dEQP-VK.image.extended_usage_bit.texture_read.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012133, "dEQP-VK.image.extended_usage_bit.texture_write.r8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012134, "dEQP-VK.image.extended_usage_bit.texture_write.r8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012135, "dEQP-VK.image.extended_usage_bit.texture_write.r8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012136, "dEQP-VK.image.extended_usage_bit.texture_write.r8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012137, "dEQP-VK.image.extended_usage_bit.texture_write.r8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012138, "dEQP-VK.image.extended_usage_bit.texture_write.r8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012139, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012140, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012141, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012142, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012143, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012144, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012145, "dEQP-VK.image.extended_usage_bit.texture_write.r16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012146, "dEQP-VK.image.extended_usage_bit.texture_write.r16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012147, "dEQP-VK.image.extended_usage_bit.texture_write.r16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012148, "dEQP-VK.image.extended_usage_bit.texture_write.r16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012149, "dEQP-VK.image.extended_usage_bit.texture_write.r16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012150, "dEQP-VK.image.extended_usage_bit.texture_write.r16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012151, "dEQP-VK.image.extended_usage_bit.texture_write.r16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012152, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012153, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012154, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8b8a8_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012155, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8b8a8_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012156, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012157, "dEQP-VK.image.extended_usage_bit.texture_write.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012158, "dEQP-VK.image.extended_usage_bit.texture_write.a8b8g8r8_unorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012159, "dEQP-VK.image.extended_usage_bit.texture_write.a8b8g8r8_snorm_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012160, "dEQP-VK.image.extended_usage_bit.texture_write.a8b8g8r8_uscaled_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012161, "dEQP-VK.image.extended_usage_bit.texture_write.a8b8g8r8_sscaled_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012162, "dEQP-VK.image.extended_usage_bit.texture_write.a8b8g8r8_uint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012163, "dEQP-VK.image.extended_usage_bit.texture_write.a8b8g8r8_sint_pack32.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012164, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012165, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012166, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012167, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012168, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012169, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012170, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012171, "dEQP-VK.image.extended_usage_bit.texture_write.r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012172, "dEQP-VK.image.extended_usage_bit.texture_write.r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012173, "dEQP-VK.image.extended_usage_bit.texture_write.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012174, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16b16a16_unorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012175, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16b16a16_snorm.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012176, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16b16a16_uscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012177, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16b16a16_sscaled.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012178, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012179, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012180, "dEQP-VK.image.extended_usage_bit.texture_write.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012181, "dEQP-VK.image.extended_usage_bit.texture_write.r32g32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012182, "dEQP-VK.image.extended_usage_bit.texture_write.r32g32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012183, "dEQP-VK.image.extended_usage_bit.texture_write.r32g32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012184, "dEQP-VK.image.extended_usage_bit.texture_write.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012185, "dEQP-VK.image.extended_usage_bit.texture_write.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0006TS, TC012186, "dEQP-VK.image.extended_usage_bit.texture_write.r32g32b32a32_sfloat.*");
