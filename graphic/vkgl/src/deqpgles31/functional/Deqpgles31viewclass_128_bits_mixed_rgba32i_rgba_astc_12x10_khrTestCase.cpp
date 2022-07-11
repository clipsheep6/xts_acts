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

#define VkglTestCase_036779_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036779_2 "s_mixed.rgba32i_rgba_astc_12x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036779, VkglTestCase_036779_1, VkglTestCase_036779_2);

#define VkglTestCase_036780_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036780_2 "s_mixed.rgba32i_rgba_astc_12x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036780, VkglTestCase_036780_1, VkglTestCase_036780_2);

#define VkglTestCase_036781_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036781_2 "ts_mixed.rgba32i_rgba_astc_12x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036781, VkglTestCase_036781_1, VkglTestCase_036781_2);

#define VkglTestCase_036782_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036782_2 "ixed.rgba32i_rgba_astc_12x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036782, VkglTestCase_036782_1, VkglTestCase_036782_2);

#define VkglTestCase_036783_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036783_2 "s_mixed.rgba32i_rgba_astc_12x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036783, VkglTestCase_036783_1, VkglTestCase_036783_2);

#define VkglTestCase_036784_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036784_2 "s_mixed.rgba32i_rgba_astc_12x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036784, VkglTestCase_036784_1, VkglTestCase_036784_2);

#define VkglTestCase_036785_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036785_2 "ts_mixed.rgba32i_rgba_astc_12x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036785, VkglTestCase_036785_1, VkglTestCase_036785_2);

#define VkglTestCase_036786_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036786_2 "ixed.rgba32i_rgba_astc_12x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036786, VkglTestCase_036786_1, VkglTestCase_036786_2);

#define VkglTestCase_036787_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036787_2 "ts_mixed.rgba32i_rgba_astc_12x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036787, VkglTestCase_036787_1, VkglTestCase_036787_2);

#define VkglTestCase_036788_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036788_2 "ts_mixed.rgba32i_rgba_astc_12x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036788, VkglTestCase_036788_1, VkglTestCase_036788_2);

#define VkglTestCase_036789_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036789_2 "its_mixed.rgba32i_rgba_astc_12x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036789, VkglTestCase_036789_1, VkglTestCase_036789_2);

#define VkglTestCase_036790_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036790_2 "mixed.rgba32i_rgba_astc_12x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036790, VkglTestCase_036790_1, VkglTestCase_036790_2);

#define VkglTestCase_036791_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036791_2 "ixed.rgba32i_rgba_astc_12x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036791, VkglTestCase_036791_1, VkglTestCase_036791_2);

#define VkglTestCase_036792_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_036792_2 "ixed.rgba32i_rgba_astc_12x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036792, VkglTestCase_036792_1, VkglTestCase_036792_2);

#define VkglTestCase_036793_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036793_2 "mixed.rgba32i_rgba_astc_12x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036793, VkglTestCase_036793_1, VkglTestCase_036793_2);

#define VkglTestCase_036794_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_036794_2 "d.rgba32i_rgba_astc_12x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036794, VkglTestCase_036794_1, VkglTestCase_036794_2);

#define VkglTestCase_036795_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036795_2 "mixed.rgba32i_rgba_astc_12x10_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036795, VkglTestCase_036795_1, VkglTestCase_036795_2);

#define VkglTestCase_036796_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036796_2 "mixed.rgba32i_rgba_astc_12x10_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036796, VkglTestCase_036796_1, VkglTestCase_036796_2);

#define VkglTestCase_036797_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036797_2 "_mixed.rgba32i_rgba_astc_12x10_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036797, VkglTestCase_036797_1, VkglTestCase_036797_2);

#define VkglTestCase_036798_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036798_2 "ed.rgba32i_rgba_astc_12x10_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036798, VkglTestCase_036798_1, VkglTestCase_036798_2);
