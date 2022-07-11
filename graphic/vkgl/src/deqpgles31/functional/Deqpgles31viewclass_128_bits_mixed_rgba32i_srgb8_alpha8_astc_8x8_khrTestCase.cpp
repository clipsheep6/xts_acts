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

#define VkglTestCase_037139_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037139_2 "ixed.rgba32i_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037139, VkglTestCase_037139_1, VkglTestCase_037139_2);

#define VkglTestCase_037140_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037140_2 "ixed.rgba32i_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037140, VkglTestCase_037140_1, VkglTestCase_037140_2);

#define VkglTestCase_037141_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037141_2 "mixed.rgba32i_srgb8_alpha8_astc_8x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037141, VkglTestCase_037141_1, VkglTestCase_037141_2);

#define VkglTestCase_037142_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037142_2 "d.rgba32i_srgb8_alpha8_astc_8x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037142, VkglTestCase_037142_1, VkglTestCase_037142_2);

#define VkglTestCase_037143_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037143_2 "ixed.rgba32i_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037143, VkglTestCase_037143_1, VkglTestCase_037143_2);

#define VkglTestCase_037144_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_037144_2 "ixed.rgba32i_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037144, VkglTestCase_037144_1, VkglTestCase_037144_2);

#define VkglTestCase_037145_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037145_2 "mixed.rgba32i_srgb8_alpha8_astc_8x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037145, VkglTestCase_037145_1, VkglTestCase_037145_2);

#define VkglTestCase_037146_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037146_2 "d.rgba32i_srgb8_alpha8_astc_8x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037146, VkglTestCase_037146_1, VkglTestCase_037146_2);

#define VkglTestCase_037147_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037147_2 "mixed.rgba32i_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037147, VkglTestCase_037147_1, VkglTestCase_037147_2);

#define VkglTestCase_037148_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_037148_2 "mixed.rgba32i_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037148, VkglTestCase_037148_1, VkglTestCase_037148_2);

#define VkglTestCase_037149_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_037149_2 "_mixed.rgba32i_srgb8_alpha8_astc_8x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037149, VkglTestCase_037149_1, VkglTestCase_037149_2);

#define VkglTestCase_037150_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037150_2 "ed.rgba32i_srgb8_alpha8_astc_8x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037150, VkglTestCase_037150_1, VkglTestCase_037150_2);

#define VkglTestCase_037151_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037151_2 "d.rgba32i_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037151, VkglTestCase_037151_1, VkglTestCase_037151_2);

#define VkglTestCase_037152_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_037152_2 "d.rgba32i_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037152, VkglTestCase_037152_1, VkglTestCase_037152_2);

#define VkglTestCase_037153_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037153_2 "ed.rgba32i_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037153, VkglTestCase_037153_1, VkglTestCase_037153_2);

#define VkglTestCase_037154_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.r"
#define VkglTestCase_037154_2 "gba32i_srgb8_alpha8_astc_8x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037154, VkglTestCase_037154_1, VkglTestCase_037154_2);

#define VkglTestCase_037155_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037155_2 "ed.rgba32i_srgb8_alpha8_astc_8x8_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037155, VkglTestCase_037155_1, VkglTestCase_037155_2);

#define VkglTestCase_037156_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_037156_2 "ed.rgba32i_srgb8_alpha8_astc_8x8_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037156, VkglTestCase_037156_1, VkglTestCase_037156_2);

#define VkglTestCase_037157_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_037157_2 "xed.rgba32i_srgb8_alpha8_astc_8x8_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037157, VkglTestCase_037157_1, VkglTestCase_037157_2);

#define VkglTestCase_037158_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed."
#define VkglTestCase_037158_2 "rgba32i_srgb8_alpha8_astc_8x8_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037158, VkglTestCase_037158_1, VkglTestCase_037158_2);
