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

#define VkglTestCase_033419_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6"
#define VkglTestCase_033419_2 "_rgba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033419, VkglTestCase_033419_1, VkglTestCase_033419_2);

#define VkglTestCase_033420_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6"
#define VkglTestCase_033420_2 "_rgba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033420, VkglTestCase_033420_1, VkglTestCase_033420_2);

#define VkglTestCase_033421_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x"
#define VkglTestCase_033421_2 "6_rgba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033421, VkglTestCase_033421_1, VkglTestCase_033421_2);

#define VkglTestCase_033422_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033422_2 "ba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033422, VkglTestCase_033422_1, VkglTestCase_033422_2);

#define VkglTestCase_033423_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6"
#define VkglTestCase_033423_2 "_rgba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033423, VkglTestCase_033423_1, VkglTestCase_033423_2);

#define VkglTestCase_033424_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6"
#define VkglTestCase_033424_2 "_rgba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033424, VkglTestCase_033424_1, VkglTestCase_033424_2);

#define VkglTestCase_033425_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x"
#define VkglTestCase_033425_2 "6_rgba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033425, VkglTestCase_033425_1, VkglTestCase_033425_2);

#define VkglTestCase_033426_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033426_2 "ba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033426, VkglTestCase_033426_1, VkglTestCase_033426_2);

#define VkglTestCase_033427_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x"
#define VkglTestCase_033427_2 "6_rgba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033427, VkglTestCase_033427_1, VkglTestCase_033427_2);

#define VkglTestCase_033428_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x"
#define VkglTestCase_033428_2 "6_rgba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033428, VkglTestCase_033428_1, VkglTestCase_033428_2);

#define VkglTestCase_033429_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6"
#define VkglTestCase_033429_2 "x6_rgba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033429, VkglTestCase_033429_1, VkglTestCase_033429_2);

#define VkglTestCase_033430_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_r"
#define VkglTestCase_033430_2 "gba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033430, VkglTestCase_033430_1, VkglTestCase_033430_2);

#define VkglTestCase_033431_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033431_2 "ba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033431, VkglTestCase_033431_1, VkglTestCase_033431_2);

#define VkglTestCase_033432_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rg"
#define VkglTestCase_033432_2 "ba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033432, VkglTestCase_033432_1, VkglTestCase_033432_2);

#define VkglTestCase_033433_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_r"
#define VkglTestCase_033433_2 "gba.rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033433, VkglTestCase_033433_1, VkglTestCase_033433_2);

#define VkglTestCase_033434_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_6x6_rgba."
#define VkglTestCase_033434_2 "rgba_astc_6x6_khr_rgba_astc_6x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033434, VkglTestCase_033434_1, VkglTestCase_033434_2);
