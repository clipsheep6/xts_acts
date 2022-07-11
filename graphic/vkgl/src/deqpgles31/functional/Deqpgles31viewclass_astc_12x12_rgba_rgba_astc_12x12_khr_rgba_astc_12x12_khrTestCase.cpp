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

#define VkglTestCase_033995_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_"
#define VkglTestCase_033995_2 "rgba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033995, VkglTestCase_033995_1, VkglTestCase_033995_2);

#define VkglTestCase_033996_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_"
#define VkglTestCase_033996_2 "rgba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033996, VkglTestCase_033996_1, VkglTestCase_033996_2);

#define VkglTestCase_033997_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12"
#define VkglTestCase_033997_2 "_rgba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033997, VkglTestCase_033997_1, VkglTestCase_033997_2);

#define VkglTestCase_033998_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_033998_2 "a.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033998, VkglTestCase_033998_1, VkglTestCase_033998_2);

#define VkglTestCase_033999_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_"
#define VkglTestCase_033999_2 "rgba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033999, VkglTestCase_033999_1, VkglTestCase_033999_2);

#define VkglTestCase_034000_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_"
#define VkglTestCase_034000_2 "rgba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034000, VkglTestCase_034000_1, VkglTestCase_034000_2);

#define VkglTestCase_034001_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12"
#define VkglTestCase_034001_2 "_rgba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034001, VkglTestCase_034001_1, VkglTestCase_034001_2);

#define VkglTestCase_034002_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034002_2 "a.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034002, VkglTestCase_034002_1, VkglTestCase_034002_2);

#define VkglTestCase_034003_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12"
#define VkglTestCase_034003_2 "_rgba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034003, VkglTestCase_034003_1, VkglTestCase_034003_2);

#define VkglTestCase_034004_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12"
#define VkglTestCase_034004_2 "_rgba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034004, VkglTestCase_034004_1, VkglTestCase_034004_2);

#define VkglTestCase_034005_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x1"
#define VkglTestCase_034005_2 "2_rgba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034005, VkglTestCase_034005_1, VkglTestCase_034005_2);

#define VkglTestCase_034006_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rg"
#define VkglTestCase_034006_2 "ba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034006, VkglTestCase_034006_1, VkglTestCase_034006_2);

#define VkglTestCase_034007_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034007_2 "a.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034007, VkglTestCase_034007_1, VkglTestCase_034007_2);

#define VkglTestCase_034008_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgb"
#define VkglTestCase_034008_2 "a.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034008, VkglTestCase_034008_1, VkglTestCase_034008_2);

#define VkglTestCase_034009_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rg"
#define VkglTestCase_034009_2 "ba.rgba_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034009, VkglTestCase_034009_1, VkglTestCase_034009_2);

#define VkglTestCase_034010_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.r"
#define VkglTestCase_034010_2 "gba_astc_12x12_khr_rgba_astc_12x12_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_034010, VkglTestCase_034010_1, VkglTestCase_034010_2);
