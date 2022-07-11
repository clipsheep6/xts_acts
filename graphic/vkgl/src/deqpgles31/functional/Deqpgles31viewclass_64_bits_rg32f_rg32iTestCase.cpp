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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025604_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025604_2 "iewclass_64_bits.rg32f_rg32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025604, VkglTestCase_025604_1, VkglTestCase_025604_2);

#define VkglTestCase_025605_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025605_2 "iewclass_64_bits.rg32f_rg32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025605, VkglTestCase_025605_1, VkglTestCase_025605_2);

#define VkglTestCase_025606_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025606_2 "viewclass_64_bits.rg32f_rg32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025606, VkglTestCase_025606_1, VkglTestCase_025606_2);

#define VkglTestCase_025607_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025607_2 "class_64_bits.rg32f_rg32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025607, VkglTestCase_025607_1, VkglTestCase_025607_2);

#define VkglTestCase_025608_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025608_2 "wclass_64_bits.rg32f_rg32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025608, VkglTestCase_025608_1, VkglTestCase_025608_2);

#define VkglTestCase_025609_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025609_2 "iewclass_64_bits.rg32f_rg32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025609, VkglTestCase_025609_1, VkglTestCase_025609_2);

#define VkglTestCase_025610_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025610_2 "iewclass_64_bits.rg32f_rg32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025610, VkglTestCase_025610_1, VkglTestCase_025610_2);

#define VkglTestCase_025611_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025611_2 "viewclass_64_bits.rg32f_rg32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025611, VkglTestCase_025611_1, VkglTestCase_025611_2);

#define VkglTestCase_025612_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025612_2 "class_64_bits.rg32f_rg32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025612, VkglTestCase_025612_1, VkglTestCase_025612_2);

#define VkglTestCase_025613_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025613_2 "wclass_64_bits.rg32f_rg32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025613, VkglTestCase_025613_1, VkglTestCase_025613_2);

#define VkglTestCase_025614_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025614_2 "viewclass_64_bits.rg32f_rg32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025614, VkglTestCase_025614_1, VkglTestCase_025614_2);

#define VkglTestCase_025615_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025615_2 "viewclass_64_bits.rg32f_rg32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025615, VkglTestCase_025615_1, VkglTestCase_025615_2);

#define VkglTestCase_025616_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_025616_2 ".viewclass_64_bits.rg32f_rg32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025616, VkglTestCase_025616_1, VkglTestCase_025616_2);

#define VkglTestCase_025617_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025617_2 "wclass_64_bits.rg32f_rg32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025617, VkglTestCase_025617_1, VkglTestCase_025617_2);

#define VkglTestCase_025618_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025618_2 "ewclass_64_bits.rg32f_rg32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025618, VkglTestCase_025618_1, VkglTestCase_025618_2);

#define VkglTestCase_025619_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025619_2 "class_64_bits.rg32f_rg32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025619, VkglTestCase_025619_1, VkglTestCase_025619_2);

#define VkglTestCase_025620_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025620_2 "class_64_bits.rg32f_rg32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025620, VkglTestCase_025620_1, VkglTestCase_025620_2);

#define VkglTestCase_025621_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025621_2 "wclass_64_bits.rg32f_rg32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025621, VkglTestCase_025621_1, VkglTestCase_025621_2);

#define VkglTestCase_025622_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025622_2 "ss_64_bits.rg32f_rg32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025622, VkglTestCase_025622_1, VkglTestCase_025622_2);

#define VkglTestCase_025623_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025623_2 "ass_64_bits.rg32f_rg32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025623, VkglTestCase_025623_1, VkglTestCase_025623_2);
