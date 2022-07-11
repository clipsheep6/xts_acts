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

#define VkglTestCase_033675_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_"
#define VkglTestCase_033675_2 "rgba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033675, VkglTestCase_033675_1, VkglTestCase_033675_2);

#define VkglTestCase_033676_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_"
#define VkglTestCase_033676_2 "rgba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033676, VkglTestCase_033676_1, VkglTestCase_033676_2);

#define VkglTestCase_033677_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5"
#define VkglTestCase_033677_2 "_rgba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033677, VkglTestCase_033677_1, VkglTestCase_033677_2);

#define VkglTestCase_033678_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033678_2 "a.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033678, VkglTestCase_033678_1, VkglTestCase_033678_2);

#define VkglTestCase_033679_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_"
#define VkglTestCase_033679_2 "rgba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033679, VkglTestCase_033679_1, VkglTestCase_033679_2);

#define VkglTestCase_033680_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_"
#define VkglTestCase_033680_2 "rgba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033680, VkglTestCase_033680_1, VkglTestCase_033680_2);

#define VkglTestCase_033681_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5"
#define VkglTestCase_033681_2 "_rgba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033681, VkglTestCase_033681_1, VkglTestCase_033681_2);

#define VkglTestCase_033682_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033682_2 "a.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033682, VkglTestCase_033682_1, VkglTestCase_033682_2);

#define VkglTestCase_033683_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5"
#define VkglTestCase_033683_2 "_rgba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033683, VkglTestCase_033683_1, VkglTestCase_033683_2);

#define VkglTestCase_033684_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5"
#define VkglTestCase_033684_2 "_rgba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033684, VkglTestCase_033684_1, VkglTestCase_033684_2);

#define VkglTestCase_033685_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x"
#define VkglTestCase_033685_2 "5_rgba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033685, VkglTestCase_033685_1, VkglTestCase_033685_2);

#define VkglTestCase_033686_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rg"
#define VkglTestCase_033686_2 "ba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033686, VkglTestCase_033686_1, VkglTestCase_033686_2);

#define VkglTestCase_033687_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033687_2 "a.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033687, VkglTestCase_033687_1, VkglTestCase_033687_2);

#define VkglTestCase_033688_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgb"
#define VkglTestCase_033688_2 "a.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033688, VkglTestCase_033688_1, VkglTestCase_033688_2);

#define VkglTestCase_033689_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rg"
#define VkglTestCase_033689_2 "ba.rgba_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033689, VkglTestCase_033689_1, VkglTestCase_033689_2);

#define VkglTestCase_033690_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x5_rgba.r"
#define VkglTestCase_033690_2 "gba_astc_10x5_khr_rgba_astc_10x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033690, VkglTestCase_033690_1, VkglTestCase_033690_2);
