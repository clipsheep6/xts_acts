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

#define VkglTestCase_036759_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036759_2 "s_mixed.rgba_astc_10x10_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036759, VkglTestCase_036759_1, VkglTestCase_036759_2);

#define VkglTestCase_036760_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036760_2 "s_mixed.rgba_astc_10x10_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036760, VkglTestCase_036760_1, VkglTestCase_036760_2);

#define VkglTestCase_036761_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036761_2 "ts_mixed.rgba_astc_10x10_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036761, VkglTestCase_036761_1, VkglTestCase_036761_2);

#define VkglTestCase_036762_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036762_2 "ixed.rgba_astc_10x10_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036762, VkglTestCase_036762_1, VkglTestCase_036762_2);

#define VkglTestCase_036763_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036763_2 "mixed.rgba_astc_10x10_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036763, VkglTestCase_036763_1, VkglTestCase_036763_2);

#define VkglTestCase_036764_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036764_2 "s_mixed.rgba_astc_10x10_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036764, VkglTestCase_036764_1, VkglTestCase_036764_2);

#define VkglTestCase_036765_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036765_2 "s_mixed.rgba_astc_10x10_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036765, VkglTestCase_036765_1, VkglTestCase_036765_2);

#define VkglTestCase_036766_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036766_2 "ts_mixed.rgba_astc_10x10_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036766, VkglTestCase_036766_1, VkglTestCase_036766_2);

#define VkglTestCase_036767_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036767_2 "ixed.rgba_astc_10x10_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036767, VkglTestCase_036767_1, VkglTestCase_036767_2);

#define VkglTestCase_036768_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036768_2 "mixed.rgba_astc_10x10_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036768, VkglTestCase_036768_1, VkglTestCase_036768_2);

#define VkglTestCase_036769_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036769_2 "ts_mixed.rgba_astc_10x10_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036769, VkglTestCase_036769_1, VkglTestCase_036769_2);

#define VkglTestCase_036770_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036770_2 "ts_mixed.rgba_astc_10x10_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036770, VkglTestCase_036770_1, VkglTestCase_036770_2);

#define VkglTestCase_036771_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036771_2 "its_mixed.rgba_astc_10x10_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036771, VkglTestCase_036771_1, VkglTestCase_036771_2);

#define VkglTestCase_036772_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036772_2 "mixed.rgba_astc_10x10_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036772, VkglTestCase_036772_1, VkglTestCase_036772_2);

#define VkglTestCase_036773_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036773_2 "_mixed.rgba_astc_10x10_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036773, VkglTestCase_036773_1, VkglTestCase_036773_2);

#define VkglTestCase_036774_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036774_2 "ixed.rgba_astc_10x10_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036774, VkglTestCase_036774_1, VkglTestCase_036774_2);

#define VkglTestCase_036775_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036775_2 "ixed.rgba_astc_10x10_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036775, VkglTestCase_036775_1, VkglTestCase_036775_2);

#define VkglTestCase_036776_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036776_2 "mixed.rgba_astc_10x10_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036776, VkglTestCase_036776_1, VkglTestCase_036776_2);

#define VkglTestCase_036777_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036777_2 "d.rgba_astc_10x10_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036777, VkglTestCase_036777_1, VkglTestCase_036777_2);

#define VkglTestCase_036778_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036778_2 "ed.rgba_astc_10x10_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036778, VkglTestCase_036778_1, VkglTestCase_036778_2);
