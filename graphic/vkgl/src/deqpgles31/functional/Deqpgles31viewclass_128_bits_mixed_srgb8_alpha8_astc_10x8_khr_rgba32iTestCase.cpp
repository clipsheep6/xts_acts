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

#define VkglTestCase_037279_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037279_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037279, VkglTestCase_037279_1, VkglTestCase_037279_2);

#define VkglTestCase_037280_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037280_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037280, VkglTestCase_037280_1, VkglTestCase_037280_2);

#define VkglTestCase_037281_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037281_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037281, VkglTestCase_037281_1, VkglTestCase_037281_2);

#define VkglTestCase_037282_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037282_2 ".srgb8_alpha8_astc_10x8_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037282, VkglTestCase_037282_1, VkglTestCase_037282_2);

#define VkglTestCase_037283_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037283_2 "ed.srgb8_alpha8_astc_10x8_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037283, VkglTestCase_037283_1, VkglTestCase_037283_2);

#define VkglTestCase_037284_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037284_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037284, VkglTestCase_037284_1, VkglTestCase_037284_2);

#define VkglTestCase_037285_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037285_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037285, VkglTestCase_037285_1, VkglTestCase_037285_2);

#define VkglTestCase_037286_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037286_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037286, VkglTestCase_037286_1, VkglTestCase_037286_2);

#define VkglTestCase_037287_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037287_2 ".srgb8_alpha8_astc_10x8_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037287, VkglTestCase_037287_1, VkglTestCase_037287_2);

#define VkglTestCase_037288_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037288_2 "ed.srgb8_alpha8_astc_10x8_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037288, VkglTestCase_037288_1, VkglTestCase_037288_2);

#define VkglTestCase_037289_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037289_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037289, VkglTestCase_037289_1, VkglTestCase_037289_2);

#define VkglTestCase_037290_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037290_2 "ixed.srgb8_alpha8_astc_10x8_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037290, VkglTestCase_037290_1, VkglTestCase_037290_2);

#define VkglTestCase_037291_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037291_2 "mixed.srgb8_alpha8_astc_10x8_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037291, VkglTestCase_037291_1, VkglTestCase_037291_2);

#define VkglTestCase_037292_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037292_2 "d.srgb8_alpha8_astc_10x8_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037292, VkglTestCase_037292_1, VkglTestCase_037292_2);

#define VkglTestCase_037293_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037293_2 "xed.srgb8_alpha8_astc_10x8_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037293, VkglTestCase_037293_1, VkglTestCase_037293_2);

#define VkglTestCase_037294_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037294_2 ".srgb8_alpha8_astc_10x8_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037294, VkglTestCase_037294_1, VkglTestCase_037294_2);

#define VkglTestCase_037295_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_037295_2 ".srgb8_alpha8_astc_10x8_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037295, VkglTestCase_037295_1, VkglTestCase_037295_2);

#define VkglTestCase_037296_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037296_2 "d.srgb8_alpha8_astc_10x8_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037296, VkglTestCase_037296_1, VkglTestCase_037296_2);

#define VkglTestCase_037297_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_037297_2 "gb8_alpha8_astc_10x8_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037297, VkglTestCase_037297_1, VkglTestCase_037297_2);

#define VkglTestCase_037298_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037298_2 "srgb8_alpha8_astc_10x8_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037298, VkglTestCase_037298_1, VkglTestCase_037298_2);
