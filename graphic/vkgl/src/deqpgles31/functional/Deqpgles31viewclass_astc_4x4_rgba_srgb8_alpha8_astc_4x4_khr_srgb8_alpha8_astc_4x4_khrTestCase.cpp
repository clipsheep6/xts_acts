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

#define VkglTestCase_033211_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.sr"
#define VkglTestCase_033211_2 "gb8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033211, VkglTestCase_033211_1, VkglTestCase_033211_2);

#define VkglTestCase_033212_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.sr"
#define VkglTestCase_033212_2 "gb8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033212, VkglTestCase_033212_1, VkglTestCase_033212_2);

#define VkglTestCase_033213_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.s"
#define VkglTestCase_033213_2 "rgb8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033213, VkglTestCase_033213_1, VkglTestCase_033213_2);

#define VkglTestCase_033214_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.srgb8"
#define VkglTestCase_033214_2 "_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033214, VkglTestCase_033214_1, VkglTestCase_033214_2);

#define VkglTestCase_033215_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.sr"
#define VkglTestCase_033215_2 "gb8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033215, VkglTestCase_033215_1, VkglTestCase_033215_2);

#define VkglTestCase_033216_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.sr"
#define VkglTestCase_033216_2 "gb8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033216, VkglTestCase_033216_1, VkglTestCase_033216_2);

#define VkglTestCase_033217_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.s"
#define VkglTestCase_033217_2 "rgb8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033217, VkglTestCase_033217_1, VkglTestCase_033217_2);

#define VkglTestCase_033218_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.srgb8"
#define VkglTestCase_033218_2 "_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033218, VkglTestCase_033218_1, VkglTestCase_033218_2);

#define VkglTestCase_033219_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.s"
#define VkglTestCase_033219_2 "rgb8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033219, VkglTestCase_033219_1, VkglTestCase_033219_2);

#define VkglTestCase_033220_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.s"
#define VkglTestCase_033220_2 "rgb8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033220, VkglTestCase_033220_1, VkglTestCase_033220_2);

#define VkglTestCase_033221_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba."
#define VkglTestCase_033221_2 "srgb8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033221, VkglTestCase_033221_1, VkglTestCase_033221_2);

#define VkglTestCase_033222_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.srgb"
#define VkglTestCase_033222_2 "8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033222, VkglTestCase_033222_1, VkglTestCase_033222_2);

#define VkglTestCase_033223_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.srgb8"
#define VkglTestCase_033223_2 "_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033223, VkglTestCase_033223_1, VkglTestCase_033223_2);

#define VkglTestCase_033224_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.srgb8"
#define VkglTestCase_033224_2 "_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033224, VkglTestCase_033224_1, VkglTestCase_033224_2);

#define VkglTestCase_033225_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.srgb"
#define VkglTestCase_033225_2 "8_alpha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033225, VkglTestCase_033225_1, VkglTestCase_033225_2);

#define VkglTestCase_033226_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_4x4_rgba.srgb8_al"
#define VkglTestCase_033226_2 "pha8_astc_4x4_khr_srgb8_alpha8_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033226, VkglTestCase_033226_1, VkglTestCase_033226_2);
