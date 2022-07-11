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

#define VkglTestCase_033851_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srg"
#define VkglTestCase_033851_2 "b8_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033851, VkglTestCase_033851_1, VkglTestCase_033851_2);

#define VkglTestCase_033852_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srg"
#define VkglTestCase_033852_2 "b8_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033852, VkglTestCase_033852_1, VkglTestCase_033852_2);

#define VkglTestCase_033853_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
#define VkglTestCase_033853_2 "gb8_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033853, VkglTestCase_033853_1, VkglTestCase_033853_2);

#define VkglTestCase_033854_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srgb8_"
#define VkglTestCase_033854_2 "alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033854, VkglTestCase_033854_1, VkglTestCase_033854_2);

#define VkglTestCase_033855_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srg"
#define VkglTestCase_033855_2 "b8_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033855, VkglTestCase_033855_1, VkglTestCase_033855_2);

#define VkglTestCase_033856_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srg"
#define VkglTestCase_033856_2 "b8_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033856, VkglTestCase_033856_1, VkglTestCase_033856_2);

#define VkglTestCase_033857_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
#define VkglTestCase_033857_2 "gb8_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033857, VkglTestCase_033857_1, VkglTestCase_033857_2);

#define VkglTestCase_033858_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srgb8_"
#define VkglTestCase_033858_2 "alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033858, VkglTestCase_033858_1, VkglTestCase_033858_2);

#define VkglTestCase_033859_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
#define VkglTestCase_033859_2 "gb8_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033859, VkglTestCase_033859_1, VkglTestCase_033859_2);

#define VkglTestCase_033860_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.sr"
#define VkglTestCase_033860_2 "gb8_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033860, VkglTestCase_033860_1, VkglTestCase_033860_2);

#define VkglTestCase_033861_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.s"
#define VkglTestCase_033861_2 "rgb8_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033861, VkglTestCase_033861_1, VkglTestCase_033861_2);

#define VkglTestCase_033862_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srgb8"
#define VkglTestCase_033862_2 "_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033862, VkglTestCase_033862_1, VkglTestCase_033862_2);

#define VkglTestCase_033863_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srgb8_"
#define VkglTestCase_033863_2 "alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033863, VkglTestCase_033863_1, VkglTestCase_033863_2);

#define VkglTestCase_033864_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srgb8_"
#define VkglTestCase_033864_2 "alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033864, VkglTestCase_033864_1, VkglTestCase_033864_2);

#define VkglTestCase_033865_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srgb8"
#define VkglTestCase_033865_2 "_alpha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033865, VkglTestCase_033865_1, VkglTestCase_033865_2);

#define VkglTestCase_033866_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x8_rgba.srgb8_alp"
#define VkglTestCase_033866_2 "ha8_astc_10x8_khr_srgb8_alpha8_astc_10x8_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033866, VkglTestCase_033866_1, VkglTestCase_033866_2);
