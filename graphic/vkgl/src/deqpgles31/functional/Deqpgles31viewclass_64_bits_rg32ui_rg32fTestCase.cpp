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

#define VkglTestCase_025824_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025824_2 "ewclass_64_bits.rg32ui_rg32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025824, VkglTestCase_025824_1, VkglTestCase_025824_2);

#define VkglTestCase_025825_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025825_2 "ewclass_64_bits.rg32ui_rg32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025825, VkglTestCase_025825_1, VkglTestCase_025825_2);

#define VkglTestCase_025826_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025826_2 "iewclass_64_bits.rg32ui_rg32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025826, VkglTestCase_025826_1, VkglTestCase_025826_2);

#define VkglTestCase_025827_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025827_2 "lass_64_bits.rg32ui_rg32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025827, VkglTestCase_025827_1, VkglTestCase_025827_2);

#define VkglTestCase_025828_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025828_2 "ewclass_64_bits.rg32ui_rg32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025828, VkglTestCase_025828_1, VkglTestCase_025828_2);

#define VkglTestCase_025829_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025829_2 "ewclass_64_bits.rg32ui_rg32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025829, VkglTestCase_025829_1, VkglTestCase_025829_2);

#define VkglTestCase_025830_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025830_2 "iewclass_64_bits.rg32ui_rg32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025830, VkglTestCase_025830_1, VkglTestCase_025830_2);

#define VkglTestCase_025831_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025831_2 "lass_64_bits.rg32ui_rg32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025831, VkglTestCase_025831_1, VkglTestCase_025831_2);

#define VkglTestCase_025832_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025832_2 "iewclass_64_bits.rg32ui_rg32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025832, VkglTestCase_025832_1, VkglTestCase_025832_2);

#define VkglTestCase_025833_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025833_2 "iewclass_64_bits.rg32ui_rg32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025833, VkglTestCase_025833_1, VkglTestCase_025833_2);

#define VkglTestCase_025834_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025834_2 "viewclass_64_bits.rg32ui_rg32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025834, VkglTestCase_025834_1, VkglTestCase_025834_2);

#define VkglTestCase_025835_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025835_2 "class_64_bits.rg32ui_rg32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025835, VkglTestCase_025835_1, VkglTestCase_025835_2);

#define VkglTestCase_025836_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025836_2 "lass_64_bits.rg32ui_rg32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025836, VkglTestCase_025836_1, VkglTestCase_025836_2);

#define VkglTestCase_025837_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025837_2 "lass_64_bits.rg32ui_rg32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025837, VkglTestCase_025837_1, VkglTestCase_025837_2);

#define VkglTestCase_025838_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025838_2 "class_64_bits.rg32ui_rg32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025838, VkglTestCase_025838_1, VkglTestCase_025838_2);

#define VkglTestCase_025839_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025839_2 "s_64_bits.rg32ui_rg32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025839, VkglTestCase_025839_1, VkglTestCase_025839_2);

#define VkglTestCase_025840_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025840_2 "wclass_64_bits.rg32ui_rg32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025840, VkglTestCase_025840_1, VkglTestCase_025840_2);

#define VkglTestCase_025841_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025841_2 "wclass_64_bits.rg32ui_rg32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025841, VkglTestCase_025841_1, VkglTestCase_025841_2);

#define VkglTestCase_025842_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025842_2 "ewclass_64_bits.rg32ui_rg32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025842, VkglTestCase_025842_1, VkglTestCase_025842_2);

#define VkglTestCase_025843_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025843_2 "ass_64_bits.rg32ui_rg32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025843, VkglTestCase_025843_1, VkglTestCase_025843_2);
