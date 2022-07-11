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

#define VkglTestCase_033483_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5"
#define VkglTestCase_033483_2 "_rgba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033483, VkglTestCase_033483_1, VkglTestCase_033483_2);

#define VkglTestCase_033484_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5"
#define VkglTestCase_033484_2 "_rgba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033484, VkglTestCase_033484_1, VkglTestCase_033484_2);

#define VkglTestCase_033485_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033485_2 "5_rgba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033485, VkglTestCase_033485_1, VkglTestCase_033485_2);

#define VkglTestCase_033486_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033486_2 "ba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033486, VkglTestCase_033486_1, VkglTestCase_033486_2);

#define VkglTestCase_033487_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5"
#define VkglTestCase_033487_2 "_rgba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033487, VkglTestCase_033487_1, VkglTestCase_033487_2);

#define VkglTestCase_033488_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5"
#define VkglTestCase_033488_2 "_rgba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033488, VkglTestCase_033488_1, VkglTestCase_033488_2);

#define VkglTestCase_033489_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033489_2 "5_rgba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033489, VkglTestCase_033489_1, VkglTestCase_033489_2);

#define VkglTestCase_033490_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033490_2 "ba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033490, VkglTestCase_033490_1, VkglTestCase_033490_2);

#define VkglTestCase_033491_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033491_2 "5_rgba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033491, VkglTestCase_033491_1, VkglTestCase_033491_2);

#define VkglTestCase_033492_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x"
#define VkglTestCase_033492_2 "5_rgba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033492, VkglTestCase_033492_1, VkglTestCase_033492_2);

#define VkglTestCase_033493_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8"
#define VkglTestCase_033493_2 "x5_rgba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033493, VkglTestCase_033493_1, VkglTestCase_033493_2);

#define VkglTestCase_033494_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_r"
#define VkglTestCase_033494_2 "gba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033494, VkglTestCase_033494_1, VkglTestCase_033494_2);

#define VkglTestCase_033495_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033495_2 "ba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033495, VkglTestCase_033495_1, VkglTestCase_033495_2);

#define VkglTestCase_033496_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rg"
#define VkglTestCase_033496_2 "ba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033496, VkglTestCase_033496_1, VkglTestCase_033496_2);

#define VkglTestCase_033497_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_r"
#define VkglTestCase_033497_2 "gba.rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033497, VkglTestCase_033497_1, VkglTestCase_033497_2);

#define VkglTestCase_033498_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_8x5_rgba."
#define VkglTestCase_033498_2 "rgba_astc_8x5_khr_rgba_astc_8x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033498, VkglTestCase_033498_1, VkglTestCase_033498_2);
