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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037239_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037239_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037239, VkglTestCase_037239_1, VkglTestCase_037239_2);

#define VkglTestCase_037240_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037240_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037240, VkglTestCase_037240_1, VkglTestCase_037240_2);

#define VkglTestCase_037241_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037241_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037241, VkglTestCase_037241_1, VkglTestCase_037241_2);

#define VkglTestCase_037242_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037242_2 ".srgb8_alpha8_astc_10x6_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037242, VkglTestCase_037242_1, VkglTestCase_037242_2);

#define VkglTestCase_037243_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037243_2 "ed.srgb8_alpha8_astc_10x6_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037243, VkglTestCase_037243_1, VkglTestCase_037243_2);

#define VkglTestCase_037244_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037244_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037244, VkglTestCase_037244_1, VkglTestCase_037244_2);

#define VkglTestCase_037245_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037245_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037245, VkglTestCase_037245_1, VkglTestCase_037245_2);

#define VkglTestCase_037246_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037246_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037246, VkglTestCase_037246_1, VkglTestCase_037246_2);

#define VkglTestCase_037247_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037247_2 ".srgb8_alpha8_astc_10x6_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037247, VkglTestCase_037247_1, VkglTestCase_037247_2);

#define VkglTestCase_037248_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037248_2 "ed.srgb8_alpha8_astc_10x6_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037248, VkglTestCase_037248_1, VkglTestCase_037248_2);

#define VkglTestCase_037249_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037249_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037249, VkglTestCase_037249_1, VkglTestCase_037249_2);

#define VkglTestCase_037250_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037250_2 "ixed.srgb8_alpha8_astc_10x6_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037250, VkglTestCase_037250_1, VkglTestCase_037250_2);

#define VkglTestCase_037251_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037251_2 "mixed.srgb8_alpha8_astc_10x6_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037251, VkglTestCase_037251_1, VkglTestCase_037251_2);

#define VkglTestCase_037252_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037252_2 "d.srgb8_alpha8_astc_10x6_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037252, VkglTestCase_037252_1, VkglTestCase_037252_2);

#define VkglTestCase_037253_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037253_2 "xed.srgb8_alpha8_astc_10x6_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037253, VkglTestCase_037253_1, VkglTestCase_037253_2);

#define VkglTestCase_037254_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037254_2 ".srgb8_alpha8_astc_10x6_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037254, VkglTestCase_037254_1, VkglTestCase_037254_2);

#define VkglTestCase_037255_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037255_2 ".srgb8_alpha8_astc_10x6_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037255, VkglTestCase_037255_1, VkglTestCase_037255_2);

#define VkglTestCase_037256_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037256_2 "d.srgb8_alpha8_astc_10x6_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037256, VkglTestCase_037256_1, VkglTestCase_037256_2);

#define VkglTestCase_037257_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_037257_2 "gb8_alpha8_astc_10x6_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037257, VkglTestCase_037257_1, VkglTestCase_037257_2);

#define VkglTestCase_037258_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037258_2 "srgb8_alpha8_astc_10x6_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037258, VkglTestCase_037258_1, VkglTestCase_037258_2);
