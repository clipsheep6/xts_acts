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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027396_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027396_2 "ewclass_32_bits.r32ui_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027396, VkglTestCase_027396_1, VkglTestCase_027396_2);

#define VkglTestCase_027397_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027397_2 "ewclass_32_bits.r32ui_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027397, VkglTestCase_027397_1, VkglTestCase_027397_2);

#define VkglTestCase_027398_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027398_2 "iewclass_32_bits.r32ui_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027398, VkglTestCase_027398_1, VkglTestCase_027398_2);

#define VkglTestCase_027399_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027399_2 "lass_32_bits.r32ui_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027399, VkglTestCase_027399_1, VkglTestCase_027399_2);

#define VkglTestCase_027400_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027400_2 "ewclass_32_bits.r32ui_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027400, VkglTestCase_027400_1, VkglTestCase_027400_2);

#define VkglTestCase_027401_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027401_2 "ewclass_32_bits.r32ui_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027401, VkglTestCase_027401_1, VkglTestCase_027401_2);

#define VkglTestCase_027402_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027402_2 "iewclass_32_bits.r32ui_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027402, VkglTestCase_027402_1, VkglTestCase_027402_2);

#define VkglTestCase_027403_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027403_2 "lass_32_bits.r32ui_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027403, VkglTestCase_027403_1, VkglTestCase_027403_2);

#define VkglTestCase_027404_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027404_2 "iewclass_32_bits.r32ui_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027404, VkglTestCase_027404_1, VkglTestCase_027404_2);

#define VkglTestCase_027405_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027405_2 "iewclass_32_bits.r32ui_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027405, VkglTestCase_027405_1, VkglTestCase_027405_2);

#define VkglTestCase_027406_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027406_2 "viewclass_32_bits.r32ui_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027406, VkglTestCase_027406_1, VkglTestCase_027406_2);

#define VkglTestCase_027407_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027407_2 "class_32_bits.r32ui_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027407, VkglTestCase_027407_1, VkglTestCase_027407_2);

#define VkglTestCase_027408_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027408_2 "lass_32_bits.r32ui_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027408, VkglTestCase_027408_1, VkglTestCase_027408_2);

#define VkglTestCase_027409_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027409_2 "lass_32_bits.r32ui_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027409, VkglTestCase_027409_1, VkglTestCase_027409_2);

#define VkglTestCase_027410_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027410_2 "class_32_bits.r32ui_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027410, VkglTestCase_027410_1, VkglTestCase_027410_2);

#define VkglTestCase_027411_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027411_2 "s_32_bits.r32ui_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027411, VkglTestCase_027411_1, VkglTestCase_027411_2);

#define VkglTestCase_027412_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027412_2 "class_32_bits.r32ui_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027412, VkglTestCase_027412_1, VkglTestCase_027412_2);

#define VkglTestCase_027413_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027413_2 "class_32_bits.r32ui_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027413, VkglTestCase_027413_1, VkglTestCase_027413_2);

#define VkglTestCase_027414_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027414_2 "wclass_32_bits.r32ui_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027414, VkglTestCase_027414_1, VkglTestCase_027414_2);

#define VkglTestCase_027415_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027415_2 "ss_32_bits.r32ui_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027415, VkglTestCase_027415_1, VkglTestCase_027415_2);
