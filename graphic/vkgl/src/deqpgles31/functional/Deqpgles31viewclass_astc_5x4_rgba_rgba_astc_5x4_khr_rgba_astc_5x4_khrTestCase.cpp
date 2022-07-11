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

#define VkglTestCase_033227_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4"
#define VkglTestCase_033227_2 "_rgba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033227, VkglTestCase_033227_1, VkglTestCase_033227_2);

#define VkglTestCase_033228_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4"
#define VkglTestCase_033228_2 "_rgba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033228, VkglTestCase_033228_1, VkglTestCase_033228_2);

#define VkglTestCase_033229_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x"
#define VkglTestCase_033229_2 "4_rgba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033229, VkglTestCase_033229_1, VkglTestCase_033229_2);

#define VkglTestCase_033230_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033230_2 "ba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033230, VkglTestCase_033230_1, VkglTestCase_033230_2);

#define VkglTestCase_033231_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4"
#define VkglTestCase_033231_2 "_rgba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033231, VkglTestCase_033231_1, VkglTestCase_033231_2);

#define VkglTestCase_033232_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4"
#define VkglTestCase_033232_2 "_rgba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033232, VkglTestCase_033232_1, VkglTestCase_033232_2);

#define VkglTestCase_033233_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x"
#define VkglTestCase_033233_2 "4_rgba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033233, VkglTestCase_033233_1, VkglTestCase_033233_2);

#define VkglTestCase_033234_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033234_2 "ba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033234, VkglTestCase_033234_1, VkglTestCase_033234_2);

#define VkglTestCase_033235_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x"
#define VkglTestCase_033235_2 "4_rgba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033235, VkglTestCase_033235_1, VkglTestCase_033235_2);

#define VkglTestCase_033236_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x"
#define VkglTestCase_033236_2 "4_rgba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033236, VkglTestCase_033236_1, VkglTestCase_033236_2);

#define VkglTestCase_033237_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5"
#define VkglTestCase_033237_2 "x4_rgba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033237, VkglTestCase_033237_1, VkglTestCase_033237_2);

#define VkglTestCase_033238_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_r"
#define VkglTestCase_033238_2 "gba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033238, VkglTestCase_033238_1, VkglTestCase_033238_2);

#define VkglTestCase_033239_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033239_2 "ba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033239, VkglTestCase_033239_1, VkglTestCase_033239_2);

#define VkglTestCase_033240_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rg"
#define VkglTestCase_033240_2 "ba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033240, VkglTestCase_033240_1, VkglTestCase_033240_2);

#define VkglTestCase_033241_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_r"
#define VkglTestCase_033241_2 "gba.rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033241, VkglTestCase_033241_1, VkglTestCase_033241_2);

#define VkglTestCase_033242_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_5x4_rgba."
#define VkglTestCase_033242_2 "rgba_astc_5x4_khr_rgba_astc_5x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033242, VkglTestCase_033242_1, VkglTestCase_033242_2);
