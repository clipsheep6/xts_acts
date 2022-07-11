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

#define VkglTestCase_026600_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026600_2 "iewclass_32_bits.r32f_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026600, VkglTestCase_026600_1, VkglTestCase_026600_2);

#define VkglTestCase_026601_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026601_2 "iewclass_32_bits.r32f_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026601, VkglTestCase_026601_1, VkglTestCase_026601_2);

#define VkglTestCase_026602_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026602_2 "viewclass_32_bits.r32f_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026602, VkglTestCase_026602_1, VkglTestCase_026602_2);

#define VkglTestCase_026603_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026603_2 "class_32_bits.r32f_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026603, VkglTestCase_026603_1, VkglTestCase_026603_2);

#define VkglTestCase_026604_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026604_2 "wclass_32_bits.r32f_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026604, VkglTestCase_026604_1, VkglTestCase_026604_2);

#define VkglTestCase_026605_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026605_2 "iewclass_32_bits.r32f_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026605, VkglTestCase_026605_1, VkglTestCase_026605_2);

#define VkglTestCase_026606_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026606_2 "iewclass_32_bits.r32f_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026606, VkglTestCase_026606_1, VkglTestCase_026606_2);

#define VkglTestCase_026607_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026607_2 "viewclass_32_bits.r32f_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026607, VkglTestCase_026607_1, VkglTestCase_026607_2);

#define VkglTestCase_026608_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026608_2 "class_32_bits.r32f_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026608, VkglTestCase_026608_1, VkglTestCase_026608_2);

#define VkglTestCase_026609_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026609_2 "wclass_32_bits.r32f_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026609, VkglTestCase_026609_1, VkglTestCase_026609_2);

#define VkglTestCase_026610_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026610_2 "viewclass_32_bits.r32f_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026610, VkglTestCase_026610_1, VkglTestCase_026610_2);

#define VkglTestCase_026611_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026611_2 "viewclass_32_bits.r32f_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026611, VkglTestCase_026611_1, VkglTestCase_026611_2);

#define VkglTestCase_026612_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026612_2 ".viewclass_32_bits.r32f_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026612, VkglTestCase_026612_1, VkglTestCase_026612_2);

#define VkglTestCase_026613_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026613_2 "wclass_32_bits.r32f_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026613, VkglTestCase_026613_1, VkglTestCase_026613_2);

#define VkglTestCase_026614_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026614_2 "ewclass_32_bits.r32f_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026614, VkglTestCase_026614_1, VkglTestCase_026614_2);

#define VkglTestCase_026615_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026615_2 "class_32_bits.r32f_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026615, VkglTestCase_026615_1, VkglTestCase_026615_2);

#define VkglTestCase_026616_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026616_2 "class_32_bits.r32f_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026616, VkglTestCase_026616_1, VkglTestCase_026616_2);

#define VkglTestCase_026617_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026617_2 "wclass_32_bits.r32f_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026617, VkglTestCase_026617_1, VkglTestCase_026617_2);

#define VkglTestCase_026618_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026618_2 "ss_32_bits.r32f_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026618, VkglTestCase_026618_1, VkglTestCase_026618_2);

#define VkglTestCase_026619_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026619_2 "ass_32_bits.r32f_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026619, VkglTestCase_026619_1, VkglTestCase_026619_2);
