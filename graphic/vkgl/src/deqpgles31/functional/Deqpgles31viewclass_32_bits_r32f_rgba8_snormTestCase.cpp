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

#define VkglTestCase_026680_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026680_2 "class_32_bits.r32f_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026680, VkglTestCase_026680_1, VkglTestCase_026680_2);

#define VkglTestCase_026681_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026681_2 "class_32_bits.r32f_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026681, VkglTestCase_026681_1, VkglTestCase_026681_2);

#define VkglTestCase_026682_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026682_2 "wclass_32_bits.r32f_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026682, VkglTestCase_026682_1, VkglTestCase_026682_2);

#define VkglTestCase_026683_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026683_2 "ss_32_bits.r32f_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026683, VkglTestCase_026683_1, VkglTestCase_026683_2);

#define VkglTestCase_026684_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026684_2 "class_32_bits.r32f_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026684, VkglTestCase_026684_1, VkglTestCase_026684_2);

#define VkglTestCase_026685_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026685_2 "class_32_bits.r32f_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026685, VkglTestCase_026685_1, VkglTestCase_026685_2);

#define VkglTestCase_026686_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026686_2 "wclass_32_bits.r32f_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026686, VkglTestCase_026686_1, VkglTestCase_026686_2);

#define VkglTestCase_026687_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026687_2 "ss_32_bits.r32f_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026687, VkglTestCase_026687_1, VkglTestCase_026687_2);

#define VkglTestCase_026688_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026688_2 "wclass_32_bits.r32f_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026688, VkglTestCase_026688_1, VkglTestCase_026688_2);

#define VkglTestCase_026689_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026689_2 "wclass_32_bits.r32f_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026689, VkglTestCase_026689_1, VkglTestCase_026689_2);

#define VkglTestCase_026690_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026690_2 "ewclass_32_bits.r32f_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026690, VkglTestCase_026690_1, VkglTestCase_026690_2);

#define VkglTestCase_026691_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026691_2 "ass_32_bits.r32f_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026691, VkglTestCase_026691_1, VkglTestCase_026691_2);

#define VkglTestCase_026692_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026692_2 "ss_32_bits.r32f_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026692, VkglTestCase_026692_1, VkglTestCase_026692_2);

#define VkglTestCase_026693_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026693_2 "ss_32_bits.r32f_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026693, VkglTestCase_026693_1, VkglTestCase_026693_2);

#define VkglTestCase_026694_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026694_2 "ass_32_bits.r32f_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026694, VkglTestCase_026694_1, VkglTestCase_026694_2);

#define VkglTestCase_026695_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_026695_2 "32_bits.r32f_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026695, VkglTestCase_026695_1, VkglTestCase_026695_2);
