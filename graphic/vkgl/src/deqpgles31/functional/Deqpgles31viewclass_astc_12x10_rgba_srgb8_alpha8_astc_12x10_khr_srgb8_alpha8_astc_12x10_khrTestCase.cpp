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

#define VkglTestCase_033979_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srg"
#define VkglTestCase_033979_2 "b8_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033979, VkglTestCase_033979_1, VkglTestCase_033979_2);

#define VkglTestCase_033980_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srg"
#define VkglTestCase_033980_2 "b8_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033980, VkglTestCase_033980_1, VkglTestCase_033980_2);

#define VkglTestCase_033981_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.sr"
#define VkglTestCase_033981_2 "gb8_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033981, VkglTestCase_033981_1, VkglTestCase_033981_2);

#define VkglTestCase_033982_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srgb8_"
#define VkglTestCase_033982_2 "alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033982, VkglTestCase_033982_1, VkglTestCase_033982_2);

#define VkglTestCase_033983_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srg"
#define VkglTestCase_033983_2 "b8_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033983, VkglTestCase_033983_1, VkglTestCase_033983_2);

#define VkglTestCase_033984_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srg"
#define VkglTestCase_033984_2 "b8_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033984, VkglTestCase_033984_1, VkglTestCase_033984_2);

#define VkglTestCase_033985_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.sr"
#define VkglTestCase_033985_2 "gb8_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033985, VkglTestCase_033985_1, VkglTestCase_033985_2);

#define VkglTestCase_033986_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srgb8_"
#define VkglTestCase_033986_2 "alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033986, VkglTestCase_033986_1, VkglTestCase_033986_2);

#define VkglTestCase_033987_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.sr"
#define VkglTestCase_033987_2 "gb8_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033987, VkglTestCase_033987_1, VkglTestCase_033987_2);

#define VkglTestCase_033988_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.sr"
#define VkglTestCase_033988_2 "gb8_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033988, VkglTestCase_033988_1, VkglTestCase_033988_2);

#define VkglTestCase_033989_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.s"
#define VkglTestCase_033989_2 "rgb8_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033989, VkglTestCase_033989_1, VkglTestCase_033989_2);

#define VkglTestCase_033990_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srgb8"
#define VkglTestCase_033990_2 "_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033990, VkglTestCase_033990_1, VkglTestCase_033990_2);

#define VkglTestCase_033991_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srgb8_"
#define VkglTestCase_033991_2 "alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033991, VkglTestCase_033991_1, VkglTestCase_033991_2);

#define VkglTestCase_033992_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srgb8_"
#define VkglTestCase_033992_2 "alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033992, VkglTestCase_033992_1, VkglTestCase_033992_2);

#define VkglTestCase_033993_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srgb8"
#define VkglTestCase_033993_2 "_alpha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033993, VkglTestCase_033993_1, VkglTestCase_033993_2);

#define VkglTestCase_033994_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.srgb8_alp"
#define VkglTestCase_033994_2 "ha8_astc_12x10_khr_srgb8_alpha8_astc_12x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033994, VkglTestCase_033994_1, VkglTestCase_033994_2);
