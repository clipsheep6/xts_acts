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

#define VkglTestCase_025894_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025894_2 "wclass_64_bits.rg32ui_rgba16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025894, VkglTestCase_025894_1, VkglTestCase_025894_2);

#define VkglTestCase_025895_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025895_2 "wclass_64_bits.rg32ui_rgba16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025895, VkglTestCase_025895_1, VkglTestCase_025895_2);

#define VkglTestCase_025896_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025896_2 "ewclass_64_bits.rg32ui_rgba16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025896, VkglTestCase_025896_1, VkglTestCase_025896_2);

#define VkglTestCase_025897_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025897_2 "ass_64_bits.rg32ui_rgba16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025897, VkglTestCase_025897_1, VkglTestCase_025897_2);

#define VkglTestCase_025898_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025898_2 "wclass_64_bits.rg32ui_rgba16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025898, VkglTestCase_025898_1, VkglTestCase_025898_2);

#define VkglTestCase_025899_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025899_2 "wclass_64_bits.rg32ui_rgba16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025899, VkglTestCase_025899_1, VkglTestCase_025899_2);

#define VkglTestCase_025900_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025900_2 "ewclass_64_bits.rg32ui_rgba16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025900, VkglTestCase_025900_1, VkglTestCase_025900_2);

#define VkglTestCase_025901_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025901_2 "ass_64_bits.rg32ui_rgba16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025901, VkglTestCase_025901_1, VkglTestCase_025901_2);

#define VkglTestCase_025902_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025902_2 "ewclass_64_bits.rg32ui_rgba16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025902, VkglTestCase_025902_1, VkglTestCase_025902_2);

#define VkglTestCase_025903_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025903_2 "ewclass_64_bits.rg32ui_rgba16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025903, VkglTestCase_025903_1, VkglTestCase_025903_2);

#define VkglTestCase_025904_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025904_2 "iewclass_64_bits.rg32ui_rgba16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025904, VkglTestCase_025904_1, VkglTestCase_025904_2);

#define VkglTestCase_025905_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025905_2 "lass_64_bits.rg32ui_rgba16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025905, VkglTestCase_025905_1, VkglTestCase_025905_2);

#define VkglTestCase_025906_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025906_2 "ass_64_bits.rg32ui_rgba16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025906, VkglTestCase_025906_1, VkglTestCase_025906_2);

#define VkglTestCase_025907_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025907_2 "ass_64_bits.rg32ui_rgba16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025907, VkglTestCase_025907_1, VkglTestCase_025907_2);

#define VkglTestCase_025908_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025908_2 "lass_64_bits.rg32ui_rgba16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025908, VkglTestCase_025908_1, VkglTestCase_025908_2);

#define VkglTestCase_025909_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025909_2 "_64_bits.rg32ui_rgba16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025909, VkglTestCase_025909_1, VkglTestCase_025909_2);

#define VkglTestCase_025910_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025910_2 "class_64_bits.rg32ui_rgba16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025910, VkglTestCase_025910_1, VkglTestCase_025910_2);

#define VkglTestCase_025911_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025911_2 "class_64_bits.rg32ui_rgba16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025911, VkglTestCase_025911_1, VkglTestCase_025911_2);

#define VkglTestCase_025912_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025912_2 "wclass_64_bits.rg32ui_rgba16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025912, VkglTestCase_025912_1, VkglTestCase_025912_2);

#define VkglTestCase_025913_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025913_2 "ss_64_bits.rg32ui_rgba16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025913, VkglTestCase_025913_1, VkglTestCase_025913_2);
