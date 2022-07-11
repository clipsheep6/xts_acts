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

#define VkglTestCase_037039_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037039_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037039, VkglTestCase_037039_1, VkglTestCase_037039_2);

#define VkglTestCase_037040_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037040_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037040, VkglTestCase_037040_1, VkglTestCase_037040_2);

#define VkglTestCase_037041_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037041_2 "mixed.srgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037041, VkglTestCase_037041_1, VkglTestCase_037041_2);

#define VkglTestCase_037042_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037042_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037042, VkglTestCase_037042_1, VkglTestCase_037042_2);

#define VkglTestCase_037043_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037043_2 "ed.srgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037043, VkglTestCase_037043_1, VkglTestCase_037043_2);

#define VkglTestCase_037044_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037044_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037044, VkglTestCase_037044_1, VkglTestCase_037044_2);

#define VkglTestCase_037045_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037045_2 "ixed.srgb8_alpha8_astc_6x6_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037045, VkglTestCase_037045_1, VkglTestCase_037045_2);

#define VkglTestCase_037046_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037046_2 "mixed.srgb8_alpha8_astc_6x6_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037046, VkglTestCase_037046_1, VkglTestCase_037046_2);

#define VkglTestCase_037047_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037047_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037047, VkglTestCase_037047_1, VkglTestCase_037047_2);

#define VkglTestCase_037048_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037048_2 "ed.srgb8_alpha8_astc_6x6_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037048, VkglTestCase_037048_1, VkglTestCase_037048_2);

#define VkglTestCase_037049_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037049_2 "mixed.srgb8_alpha8_astc_6x6_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037049, VkglTestCase_037049_1, VkglTestCase_037049_2);

#define VkglTestCase_037050_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037050_2 "mixed.srgb8_alpha8_astc_6x6_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037050, VkglTestCase_037050_1, VkglTestCase_037050_2);

#define VkglTestCase_037051_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_037051_2 "_mixed.srgb8_alpha8_astc_6x6_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037051, VkglTestCase_037051_1, VkglTestCase_037051_2);

#define VkglTestCase_037052_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037052_2 "ed.srgb8_alpha8_astc_6x6_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037052, VkglTestCase_037052_1, VkglTestCase_037052_2);

#define VkglTestCase_037053_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037053_2 "xed.srgb8_alpha8_astc_6x6_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037053, VkglTestCase_037053_1, VkglTestCase_037053_2);

#define VkglTestCase_037054_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037054_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037054, VkglTestCase_037054_1, VkglTestCase_037054_2);

#define VkglTestCase_037055_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037055_2 "d.srgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037055, VkglTestCase_037055_1, VkglTestCase_037055_2);

#define VkglTestCase_037056_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037056_2 "ed.srgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037056, VkglTestCase_037056_1, VkglTestCase_037056_2);

#define VkglTestCase_037057_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_037057_2 "rgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037057, VkglTestCase_037057_1, VkglTestCase_037057_2);

#define VkglTestCase_037058_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037058_2 "srgb8_alpha8_astc_6x6_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037058, VkglTestCase_037058_1, VkglTestCase_037058_2);
