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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033371_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgb"
#define VkglTestCase_033371_2 "a.rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033371, VkglTestCase_033371_1, VkglTestCase_033371_2);

#define VkglTestCase_033372_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgb"
#define VkglTestCase_033372_2 "a.rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033372, VkglTestCase_033372_1, VkglTestCase_033372_2);

#define VkglTestCase_033373_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033373_2 "ba.rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033373, VkglTestCase_033373_1, VkglTestCase_033373_2);

#define VkglTestCase_033374_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.r"
#define VkglTestCase_033374_2 "gba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033374, VkglTestCase_033374_1, VkglTestCase_033374_2);

#define VkglTestCase_033375_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgb"
#define VkglTestCase_033375_2 "a.rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033375, VkglTestCase_033375_1, VkglTestCase_033375_2);

#define VkglTestCase_033376_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgb"
#define VkglTestCase_033376_2 "a.rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033376, VkglTestCase_033376_1, VkglTestCase_033376_2);

#define VkglTestCase_033377_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033377_2 "ba.rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033377, VkglTestCase_033377_1, VkglTestCase_033377_2);

#define VkglTestCase_033378_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.r"
#define VkglTestCase_033378_2 "gba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033378, VkglTestCase_033378_1, VkglTestCase_033378_2);

#define VkglTestCase_033379_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033379_2 "ba.rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033379, VkglTestCase_033379_1, VkglTestCase_033379_2);

#define VkglTestCase_033380_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rg"
#define VkglTestCase_033380_2 "ba.rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033380, VkglTestCase_033380_1, VkglTestCase_033380_2);

#define VkglTestCase_033381_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_r"
#define VkglTestCase_033381_2 "gba.rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033381, VkglTestCase_033381_1, VkglTestCase_033381_2);

#define VkglTestCase_033382_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba."
#define VkglTestCase_033382_2 "rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033382, VkglTestCase_033382_1, VkglTestCase_033382_2);

#define VkglTestCase_033383_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.r"
#define VkglTestCase_033383_2 "gba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033383, VkglTestCase_033383_1, VkglTestCase_033383_2);

#define VkglTestCase_033384_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.r"
#define VkglTestCase_033384_2 "gba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033384, VkglTestCase_033384_1, VkglTestCase_033384_2);

#define VkglTestCase_033385_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba."
#define VkglTestCase_033385_2 "rgba_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033385, VkglTestCase_033385_1, VkglTestCase_033385_2);

#define VkglTestCase_033386_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x5_rgba.rgba"
#define VkglTestCase_033386_2 "_astc_6x5_khr_srgb8_alpha8_astc_6x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033386, VkglTestCase_033386_1, VkglTestCase_033386_2);
