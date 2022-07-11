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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036599_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036599_2 "ts_mixed.rgba_astc_8x8_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036599, VkglTestCase_036599_1, VkglTestCase_036599_2);

#define VkglTestCase_036600_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036600_2 "ts_mixed.rgba_astc_8x8_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036600, VkglTestCase_036600_1, VkglTestCase_036600_2);

#define VkglTestCase_036601_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036601_2 "its_mixed.rgba_astc_8x8_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036601, VkglTestCase_036601_1, VkglTestCase_036601_2);

#define VkglTestCase_036602_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036602_2 "mixed.rgba_astc_8x8_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036602, VkglTestCase_036602_1, VkglTestCase_036602_2);

#define VkglTestCase_036603_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036603_2 "_mixed.rgba_astc_8x8_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036603, VkglTestCase_036603_1, VkglTestCase_036603_2);

#define VkglTestCase_036604_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036604_2 "ts_mixed.rgba_astc_8x8_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036604, VkglTestCase_036604_1, VkglTestCase_036604_2);

#define VkglTestCase_036605_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036605_2 "ts_mixed.rgba_astc_8x8_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036605, VkglTestCase_036605_1, VkglTestCase_036605_2);

#define VkglTestCase_036606_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036606_2 "its_mixed.rgba_astc_8x8_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036606, VkglTestCase_036606_1, VkglTestCase_036606_2);

#define VkglTestCase_036607_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036607_2 "mixed.rgba_astc_8x8_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036607, VkglTestCase_036607_1, VkglTestCase_036607_2);

#define VkglTestCase_036608_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036608_2 "_mixed.rgba_astc_8x8_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036608, VkglTestCase_036608_1, VkglTestCase_036608_2);

#define VkglTestCase_036609_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036609_2 "its_mixed.rgba_astc_8x8_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036609, VkglTestCase_036609_1, VkglTestCase_036609_2);

#define VkglTestCase_036610_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036610_2 "its_mixed.rgba_astc_8x8_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036610, VkglTestCase_036610_1, VkglTestCase_036610_2);

#define VkglTestCase_036611_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036611_2 "bits_mixed.rgba_astc_8x8_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036611, VkglTestCase_036611_1, VkglTestCase_036611_2);

#define VkglTestCase_036612_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036612_2 "_mixed.rgba_astc_8x8_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036612, VkglTestCase_036612_1, VkglTestCase_036612_2);

#define VkglTestCase_036613_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036613_2 "s_mixed.rgba_astc_8x8_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036613, VkglTestCase_036613_1, VkglTestCase_036613_2);

#define VkglTestCase_036614_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036614_2 "mixed.rgba_astc_8x8_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036614, VkglTestCase_036614_1, VkglTestCase_036614_2);

#define VkglTestCase_036615_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036615_2 "mixed.rgba_astc_8x8_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036615, VkglTestCase_036615_1, VkglTestCase_036615_2);

#define VkglTestCase_036616_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036616_2 "_mixed.rgba_astc_8x8_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036616, VkglTestCase_036616_1, VkglTestCase_036616_2);

#define VkglTestCase_036617_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036617_2 "ed.rgba_astc_8x8_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036617, VkglTestCase_036617_1, VkglTestCase_036617_2);

#define VkglTestCase_036618_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036618_2 "xed.rgba_astc_8x8_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036618, VkglTestCase_036618_1, VkglTestCase_036618_2);
