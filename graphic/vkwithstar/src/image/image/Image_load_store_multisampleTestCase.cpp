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
#include "../ActsImage0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsImage0001TS, TC000033, "dEQP-VK.image.load_store_multisample.2d.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000034, "dEQP-VK.image.load_store_multisample.2d.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000035, "dEQP-VK.image.load_store_multisample.2d.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000036, "dEQP-VK.image.load_store_multisample.2d.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000037, "dEQP-VK.image.load_store_multisample.2d.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000038, "dEQP-VK.image.load_store_multisample.2d.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000039, "dEQP-VK.image.load_store_multisample.2d.r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000040, "dEQP-VK.image.load_store_multisample.2d.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000041, "dEQP-VK.image.load_store_multisample.2d.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000042, "dEQP-VK.image.load_store_multisample.2d.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000043, "dEQP-VK.image.load_store_multisample.2d.r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000044, "dEQP-VK.image.load_store_multisample.2d.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000045, "dEQP-VK.image.load_store_multisample.2d.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000046, "dEQP-VK.image.load_store_multisample.2d_array.r32g32b32a32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000047, "dEQP-VK.image.load_store_multisample.2d_array.r32g32b32a32_sfloat_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000048, "dEQP-VK.image.load_store_multisample.2d_array.r16g16b16a16_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000049, "dEQP-VK.image.load_store_multisample.2d_array.r16g16b16a16_sfloat_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000050, "dEQP-VK.image.load_store_multisample.2d_array.r32_sfloat.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000051, "dEQP-VK.image.load_store_multisample.2d_array.r32_sfloat_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000052, "dEQP-VK.image.load_store_multisample.2d_array.r32g32b32a32_uint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000053, "dEQP-VK.image.load_store_multisample.2d_array.r32g32b32a32_uint_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000054, "dEQP-VK.image.load_store_multisample.2d_array.r16g16b16a16_uint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000055, "dEQP-VK.image.load_store_multisample.2d_array.r16g16b16a16_uint_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000056, "dEQP-VK.image.load_store_multisample.2d_array.r8g8b8a8_uint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000057, "dEQP-VK.image.load_store_multisample.2d_array.r8g8b8a8_uint_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000058, "dEQP-VK.image.load_store_multisample.2d_array.r32_uint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000059, "dEQP-VK.image.load_store_multisample.2d_array.r32_uint_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000060, "dEQP-VK.image.load_store_multisample.2d_array.r32g32b32a32_sint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000061, "dEQP-VK.image.load_store_multisample.2d_array.r32g32b32a32_sint_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000062, "dEQP-VK.image.load_store_multisample.2d_array.r16g16b16a16_sint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000063, "dEQP-VK.image.load_store_multisample.2d_array.r16g16b16a16_sint_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000064, "dEQP-VK.image.load_store_multisample.2d_array.r8g8b8a8_sint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000065, "dEQP-VK.image.load_store_multisample.2d_array.r8g8b8a8_sint_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000066, "dEQP-VK.image.load_store_multisample.2d_array.r32_sint.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000067, "dEQP-VK.image.load_store_multisample.2d_array.r32_sint_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000068, "dEQP-VK.image.load_store_multisample.2d_array.r8g8b8a8_unorm.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000069, "dEQP-VK.image.load_store_multisample.2d_array.r8g8b8a8_unorm_single_layer.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000070, "dEQP-VK.image.load_store_multisample.2d_array.r8g8b8a8_snorm.*");

static SHRINK_HWTEST_F(ActsImage0001TS, TC000071, "dEQP-VK.image.load_store_multisample.2d_array.r8g8b8a8_snorm_single_layer.*");
