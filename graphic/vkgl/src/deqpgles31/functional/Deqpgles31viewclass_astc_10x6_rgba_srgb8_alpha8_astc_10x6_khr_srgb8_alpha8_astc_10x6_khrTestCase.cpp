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

#define VkglTestCase_033787_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srg"
#define VkglTestCase_033787_2 "b8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033787, VkglTestCase_033787_1, VkglTestCase_033787_2);

#define VkglTestCase_033788_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srg"
#define VkglTestCase_033788_2 "b8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033788, VkglTestCase_033788_1, VkglTestCase_033788_2);

#define VkglTestCase_033789_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
#define VkglTestCase_033789_2 "gb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033789, VkglTestCase_033789_1, VkglTestCase_033789_2);

#define VkglTestCase_033790_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_"
#define VkglTestCase_033790_2 "alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033790, VkglTestCase_033790_1, VkglTestCase_033790_2);

#define VkglTestCase_033791_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srg"
#define VkglTestCase_033791_2 "b8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033791, VkglTestCase_033791_1, VkglTestCase_033791_2);

#define VkglTestCase_033792_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srg"
#define VkglTestCase_033792_2 "b8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033792, VkglTestCase_033792_1, VkglTestCase_033792_2);

#define VkglTestCase_033793_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
#define VkglTestCase_033793_2 "gb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033793, VkglTestCase_033793_1, VkglTestCase_033793_2);

#define VkglTestCase_033794_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_"
#define VkglTestCase_033794_2 "alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033794, VkglTestCase_033794_1, VkglTestCase_033794_2);

#define VkglTestCase_033795_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
#define VkglTestCase_033795_2 "gb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033795, VkglTestCase_033795_1, VkglTestCase_033795_2);

#define VkglTestCase_033796_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.sr"
#define VkglTestCase_033796_2 "gb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033796, VkglTestCase_033796_1, VkglTestCase_033796_2);

#define VkglTestCase_033797_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.s"
#define VkglTestCase_033797_2 "rgb8_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033797, VkglTestCase_033797_1, VkglTestCase_033797_2);

#define VkglTestCase_033798_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8"
#define VkglTestCase_033798_2 "_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033798, VkglTestCase_033798_1, VkglTestCase_033798_2);

#define VkglTestCase_033799_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_"
#define VkglTestCase_033799_2 "alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033799, VkglTestCase_033799_1, VkglTestCase_033799_2);

#define VkglTestCase_033800_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_"
#define VkglTestCase_033800_2 "alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033800, VkglTestCase_033800_1, VkglTestCase_033800_2);

#define VkglTestCase_033801_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8"
#define VkglTestCase_033801_2 "_alpha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033801, VkglTestCase_033801_1, VkglTestCase_033801_2);

#define VkglTestCase_033802_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.srgb8_alp"
#define VkglTestCase_033802_2 "ha8_astc_10x6_khr_srgb8_alpha8_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033802, VkglTestCase_033802_1, VkglTestCase_033802_2);
