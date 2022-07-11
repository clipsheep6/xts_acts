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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035719_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035719_2 "xed.srgb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035719, VkglTestCase_035719_1, VkglTestCase_035719_2);

#define VkglTestCase_035720_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035720_2 "xed.srgb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035720, VkglTestCase_035720_1, VkglTestCase_035720_2);

#define VkglTestCase_035721_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035721_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035721, VkglTestCase_035721_1, VkglTestCase_035721_2);

#define VkglTestCase_035722_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035722_2 ".srgb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035722, VkglTestCase_035722_1, VkglTestCase_035722_2);

#define VkglTestCase_035723_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035723_2 "ed.srgb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035723, VkglTestCase_035723_1, VkglTestCase_035723_2);

#define VkglTestCase_035724_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035724_2 "xed.srgb8_alpha8_astc_5x4_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035724, VkglTestCase_035724_1, VkglTestCase_035724_2);

#define VkglTestCase_035725_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035725_2 "xed.srgb8_alpha8_astc_5x4_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035725, VkglTestCase_035725_1, VkglTestCase_035725_2);

#define VkglTestCase_035726_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035726_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035726, VkglTestCase_035726_1, VkglTestCase_035726_2);

#define VkglTestCase_035727_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035727_2 ".srgb8_alpha8_astc_5x4_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035727, VkglTestCase_035727_1, VkglTestCase_035727_2);

#define VkglTestCase_035728_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035728_2 "ed.srgb8_alpha8_astc_5x4_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035728, VkglTestCase_035728_1, VkglTestCase_035728_2);

#define VkglTestCase_035729_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035729_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035729, VkglTestCase_035729_1, VkglTestCase_035729_2);

#define VkglTestCase_035730_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035730_2 "ixed.srgb8_alpha8_astc_5x4_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035730, VkglTestCase_035730_1, VkglTestCase_035730_2);

#define VkglTestCase_035731_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035731_2 "mixed.srgb8_alpha8_astc_5x4_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035731, VkglTestCase_035731_1, VkglTestCase_035731_2);

#define VkglTestCase_035732_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035732_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035732, VkglTestCase_035732_1, VkglTestCase_035732_2);

#define VkglTestCase_035733_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035733_2 "xed.srgb8_alpha8_astc_5x4_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035733, VkglTestCase_035733_1, VkglTestCase_035733_2);

#define VkglTestCase_035734_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035734_2 ".srgb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035734, VkglTestCase_035734_1, VkglTestCase_035734_2);

#define VkglTestCase_035735_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035735_2 ".srgb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035735, VkglTestCase_035735_1, VkglTestCase_035735_2);

#define VkglTestCase_035736_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035736_2 "d.srgb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035736, VkglTestCase_035736_1, VkglTestCase_035736_2);

#define VkglTestCase_035737_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.sr"
#define VkglTestCase_035737_2 "gb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035737, VkglTestCase_035737_1, VkglTestCase_035737_2);

#define VkglTestCase_035738_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_035738_2 "srgb8_alpha8_astc_5x4_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035738, VkglTestCase_035738_1, VkglTestCase_035738_2);
