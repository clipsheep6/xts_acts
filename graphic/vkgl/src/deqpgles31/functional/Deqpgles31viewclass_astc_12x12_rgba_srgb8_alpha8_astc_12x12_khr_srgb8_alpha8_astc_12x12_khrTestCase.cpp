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

#define VkglTestCase_034043_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srg"
#define VkglTestCase_034043_2 "b8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034043, VkglTestCase_034043_1, VkglTestCase_034043_2);

#define VkglTestCase_034044_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srg"
#define VkglTestCase_034044_2 "b8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034044, VkglTestCase_034044_1, VkglTestCase_034044_2);

#define VkglTestCase_034045_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
#define VkglTestCase_034045_2 "gb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034045, VkglTestCase_034045_1, VkglTestCase_034045_2);

#define VkglTestCase_034046_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_"
#define VkglTestCase_034046_2 "alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034046, VkglTestCase_034046_1, VkglTestCase_034046_2);

#define VkglTestCase_034047_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srg"
#define VkglTestCase_034047_2 "b8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034047, VkglTestCase_034047_1, VkglTestCase_034047_2);

#define VkglTestCase_034048_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srg"
#define VkglTestCase_034048_2 "b8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034048, VkglTestCase_034048_1, VkglTestCase_034048_2);

#define VkglTestCase_034049_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
#define VkglTestCase_034049_2 "gb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034049, VkglTestCase_034049_1, VkglTestCase_034049_2);

#define VkglTestCase_034050_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_"
#define VkglTestCase_034050_2 "alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034050, VkglTestCase_034050_1, VkglTestCase_034050_2);

#define VkglTestCase_034051_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
#define VkglTestCase_034051_2 "gb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034051, VkglTestCase_034051_1, VkglTestCase_034051_2);

#define VkglTestCase_034052_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.sr"
#define VkglTestCase_034052_2 "gb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034052, VkglTestCase_034052_1, VkglTestCase_034052_2);

#define VkglTestCase_034053_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.s"
#define VkglTestCase_034053_2 "rgb8_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034053, VkglTestCase_034053_1, VkglTestCase_034053_2);

#define VkglTestCase_034054_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8"
#define VkglTestCase_034054_2 "_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034054, VkglTestCase_034054_1, VkglTestCase_034054_2);

#define VkglTestCase_034055_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_"
#define VkglTestCase_034055_2 "alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034055, VkglTestCase_034055_1, VkglTestCase_034055_2);

#define VkglTestCase_034056_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_"
#define VkglTestCase_034056_2 "alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034056, VkglTestCase_034056_1, VkglTestCase_034056_2);

#define VkglTestCase_034057_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8"
#define VkglTestCase_034057_2 "_alpha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034057, VkglTestCase_034057_1, VkglTestCase_034057_2);

#define VkglTestCase_034058_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x12_rgba.srgb8_alp"
#define VkglTestCase_034058_2 "ha8_astc_12x12_khr_srgb8_alpha8_astc_12x12_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034058, VkglTestCase_034058_1, VkglTestCase_034058_2);
