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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034683_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034683_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034683, VkglTestCase_034683_1, VkglTestCase_034683_2);

#define VkglTestCase_034684_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034684_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034684, VkglTestCase_034684_1, VkglTestCase_034684_2);

#define VkglTestCase_034685_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034685_2 "mixed.srgb8_alpha8_astc_6x5_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034685, VkglTestCase_034685_1, VkglTestCase_034685_2);

#define VkglTestCase_034686_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034686_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034686, VkglTestCase_034686_1, VkglTestCase_034686_2);

#define VkglTestCase_034687_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034687_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034687, VkglTestCase_034687_1, VkglTestCase_034687_2);

#define VkglTestCase_034688_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_034688_2 "ixed.srgb8_alpha8_astc_6x5_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034688, VkglTestCase_034688_1, VkglTestCase_034688_2);

#define VkglTestCase_034689_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034689_2 "mixed.srgb8_alpha8_astc_6x5_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034689, VkglTestCase_034689_1, VkglTestCase_034689_2);

#define VkglTestCase_034690_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034690_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034690, VkglTestCase_034690_1, VkglTestCase_034690_2);

#define VkglTestCase_034691_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034691_2 "mixed.srgb8_alpha8_astc_6x5_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034691, VkglTestCase_034691_1, VkglTestCase_034691_2);

#define VkglTestCase_034692_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034692_2 "mixed.srgb8_alpha8_astc_6x5_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034692, VkglTestCase_034692_1, VkglTestCase_034692_2);

#define VkglTestCase_034693_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034693_2 "_mixed.srgb8_alpha8_astc_6x5_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034693, VkglTestCase_034693_1, VkglTestCase_034693_2);

#define VkglTestCase_034694_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034694_2 "ed.srgb8_alpha8_astc_6x5_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034694, VkglTestCase_034694_1, VkglTestCase_034694_2);

#define VkglTestCase_034695_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034695_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034695, VkglTestCase_034695_1, VkglTestCase_034695_2);

#define VkglTestCase_034696_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_034696_2 "d.srgb8_alpha8_astc_6x5_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034696, VkglTestCase_034696_1, VkglTestCase_034696_2);

#define VkglTestCase_034697_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034697_2 "ed.srgb8_alpha8_astc_6x5_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034697, VkglTestCase_034697_1, VkglTestCase_034697_2);

#define VkglTestCase_034698_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed.s"
#define VkglTestCase_034698_2 "rgb8_alpha8_astc_6x5_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034698, VkglTestCase_034698_1, VkglTestCase_034698_2);
