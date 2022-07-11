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

#define VkglTestCase_026520_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026520_2 "iewclass_32_bits.r32f_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026520, VkglTestCase_026520_1, VkglTestCase_026520_2);

#define VkglTestCase_026521_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026521_2 "iewclass_32_bits.r32f_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026521, VkglTestCase_026521_1, VkglTestCase_026521_2);

#define VkglTestCase_026522_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026522_2 "viewclass_32_bits.r32f_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026522, VkglTestCase_026522_1, VkglTestCase_026522_2);

#define VkglTestCase_026523_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026523_2 "class_32_bits.r32f_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026523, VkglTestCase_026523_1, VkglTestCase_026523_2);

#define VkglTestCase_026524_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026524_2 "ewclass_32_bits.r32f_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026524, VkglTestCase_026524_1, VkglTestCase_026524_2);

#define VkglTestCase_026525_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026525_2 "iewclass_32_bits.r32f_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026525, VkglTestCase_026525_1, VkglTestCase_026525_2);

#define VkglTestCase_026526_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026526_2 "iewclass_32_bits.r32f_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026526, VkglTestCase_026526_1, VkglTestCase_026526_2);

#define VkglTestCase_026527_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026527_2 "viewclass_32_bits.r32f_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026527, VkglTestCase_026527_1, VkglTestCase_026527_2);

#define VkglTestCase_026528_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026528_2 "class_32_bits.r32f_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026528, VkglTestCase_026528_1, VkglTestCase_026528_2);

#define VkglTestCase_026529_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026529_2 "ewclass_32_bits.r32f_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026529, VkglTestCase_026529_1, VkglTestCase_026529_2);

#define VkglTestCase_026530_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026530_2 "viewclass_32_bits.r32f_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026530, VkglTestCase_026530_1, VkglTestCase_026530_2);

#define VkglTestCase_026531_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026531_2 "viewclass_32_bits.r32f_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026531, VkglTestCase_026531_1, VkglTestCase_026531_2);

#define VkglTestCase_026532_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026532_2 ".viewclass_32_bits.r32f_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026532, VkglTestCase_026532_1, VkglTestCase_026532_2);

#define VkglTestCase_026533_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026533_2 "wclass_32_bits.r32f_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026533, VkglTestCase_026533_1, VkglTestCase_026533_2);

#define VkglTestCase_026534_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026534_2 "iewclass_32_bits.r32f_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026534, VkglTestCase_026534_1, VkglTestCase_026534_2);

#define VkglTestCase_026535_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026535_2 "class_32_bits.r32f_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026535, VkglTestCase_026535_1, VkglTestCase_026535_2);

#define VkglTestCase_026536_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026536_2 "class_32_bits.r32f_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026536, VkglTestCase_026536_1, VkglTestCase_026536_2);

#define VkglTestCase_026537_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026537_2 "wclass_32_bits.r32f_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026537, VkglTestCase_026537_1, VkglTestCase_026537_2);

#define VkglTestCase_026538_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026538_2 "ss_32_bits.r32f_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026538, VkglTestCase_026538_1, VkglTestCase_026538_2);

#define VkglTestCase_026539_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026539_2 "lass_32_bits.r32f_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026539, VkglTestCase_026539_1, VkglTestCase_026539_2);
