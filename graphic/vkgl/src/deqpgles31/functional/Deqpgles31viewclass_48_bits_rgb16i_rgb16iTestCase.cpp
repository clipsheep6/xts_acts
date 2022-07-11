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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026404_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026404_2 "ewclass_48_bits.rgb16i_rgb16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026404, VkglTestCase_026404_1, VkglTestCase_026404_2);

#define VkglTestCase_026405_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026405_2 "ewclass_48_bits.rgb16i_rgb16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026405, VkglTestCase_026405_1, VkglTestCase_026405_2);

#define VkglTestCase_026406_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026406_2 "iewclass_48_bits.rgb16i_rgb16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026406, VkglTestCase_026406_1, VkglTestCase_026406_2);

#define VkglTestCase_026407_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026407_2 "lass_48_bits.rgb16i_rgb16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026407, VkglTestCase_026407_1, VkglTestCase_026407_2);

#define VkglTestCase_026408_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026408_2 "ewclass_48_bits.rgb16i_rgb16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026408, VkglTestCase_026408_1, VkglTestCase_026408_2);

#define VkglTestCase_026409_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026409_2 "ewclass_48_bits.rgb16i_rgb16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026409, VkglTestCase_026409_1, VkglTestCase_026409_2);

#define VkglTestCase_026410_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026410_2 "iewclass_48_bits.rgb16i_rgb16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026410, VkglTestCase_026410_1, VkglTestCase_026410_2);

#define VkglTestCase_026411_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026411_2 "lass_48_bits.rgb16i_rgb16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026411, VkglTestCase_026411_1, VkglTestCase_026411_2);

#define VkglTestCase_026412_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026412_2 "iewclass_48_bits.rgb16i_rgb16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026412, VkglTestCase_026412_1, VkglTestCase_026412_2);

#define VkglTestCase_026413_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026413_2 "iewclass_48_bits.rgb16i_rgb16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026413, VkglTestCase_026413_1, VkglTestCase_026413_2);

#define VkglTestCase_026414_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026414_2 "viewclass_48_bits.rgb16i_rgb16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026414, VkglTestCase_026414_1, VkglTestCase_026414_2);

#define VkglTestCase_026415_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026415_2 "class_48_bits.rgb16i_rgb16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026415, VkglTestCase_026415_1, VkglTestCase_026415_2);

#define VkglTestCase_026416_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026416_2 "lass_48_bits.rgb16i_rgb16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026416, VkglTestCase_026416_1, VkglTestCase_026416_2);

#define VkglTestCase_026417_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026417_2 "lass_48_bits.rgb16i_rgb16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026417, VkglTestCase_026417_1, VkglTestCase_026417_2);

#define VkglTestCase_026418_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026418_2 "class_48_bits.rgb16i_rgb16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026418, VkglTestCase_026418_1, VkglTestCase_026418_2);

#define VkglTestCase_026419_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026419_2 "s_48_bits.rgb16i_rgb16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026419, VkglTestCase_026419_1, VkglTestCase_026419_2);
