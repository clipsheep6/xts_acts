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

#define VkglTestCase_025704_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025704_2 "iewclass_64_bits.rg32i_rg32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025704, VkglTestCase_025704_1, VkglTestCase_025704_2);

#define VkglTestCase_025705_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025705_2 "iewclass_64_bits.rg32i_rg32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025705, VkglTestCase_025705_1, VkglTestCase_025705_2);

#define VkglTestCase_025706_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025706_2 "viewclass_64_bits.rg32i_rg32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025706, VkglTestCase_025706_1, VkglTestCase_025706_2);

#define VkglTestCase_025707_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025707_2 "class_64_bits.rg32i_rg32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025707, VkglTestCase_025707_1, VkglTestCase_025707_2);

#define VkglTestCase_025708_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025708_2 "wclass_64_bits.rg32i_rg32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025708, VkglTestCase_025708_1, VkglTestCase_025708_2);

#define VkglTestCase_025709_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025709_2 "iewclass_64_bits.rg32i_rg32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025709, VkglTestCase_025709_1, VkglTestCase_025709_2);

#define VkglTestCase_025710_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025710_2 "iewclass_64_bits.rg32i_rg32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025710, VkglTestCase_025710_1, VkglTestCase_025710_2);

#define VkglTestCase_025711_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025711_2 "viewclass_64_bits.rg32i_rg32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025711, VkglTestCase_025711_1, VkglTestCase_025711_2);

#define VkglTestCase_025712_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025712_2 "class_64_bits.rg32i_rg32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025712, VkglTestCase_025712_1, VkglTestCase_025712_2);

#define VkglTestCase_025713_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025713_2 "wclass_64_bits.rg32i_rg32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025713, VkglTestCase_025713_1, VkglTestCase_025713_2);

#define VkglTestCase_025714_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025714_2 "viewclass_64_bits.rg32i_rg32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025714, VkglTestCase_025714_1, VkglTestCase_025714_2);

#define VkglTestCase_025715_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025715_2 "viewclass_64_bits.rg32i_rg32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025715, VkglTestCase_025715_1, VkglTestCase_025715_2);

#define VkglTestCase_025716_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_025716_2 ".viewclass_64_bits.rg32i_rg32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025716, VkglTestCase_025716_1, VkglTestCase_025716_2);

#define VkglTestCase_025717_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025717_2 "wclass_64_bits.rg32i_rg32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025717, VkglTestCase_025717_1, VkglTestCase_025717_2);

#define VkglTestCase_025718_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025718_2 "ewclass_64_bits.rg32i_rg32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025718, VkglTestCase_025718_1, VkglTestCase_025718_2);

#define VkglTestCase_025719_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025719_2 "class_64_bits.rg32i_rg32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025719, VkglTestCase_025719_1, VkglTestCase_025719_2);

#define VkglTestCase_025720_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025720_2 "class_64_bits.rg32i_rg32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025720, VkglTestCase_025720_1, VkglTestCase_025720_2);

#define VkglTestCase_025721_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025721_2 "wclass_64_bits.rg32i_rg32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025721, VkglTestCase_025721_1, VkglTestCase_025721_2);

#define VkglTestCase_025722_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025722_2 "ss_64_bits.rg32i_rg32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025722, VkglTestCase_025722_1, VkglTestCase_025722_2);

#define VkglTestCase_025723_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025723_2 "ass_64_bits.rg32i_rg32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025723, VkglTestCase_025723_1, VkglTestCase_025723_2);

#define VkglTestCase_025724_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025724_2 "wclass_64_bits.rg32i_rg32i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025724, VkglTestCase_025724_1, VkglTestCase_025724_2);

#define VkglTestCase_025725_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025725_2 "wclass_64_bits.rg32i_rg32i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025725, VkglTestCase_025725_1, VkglTestCase_025725_2);

#define VkglTestCase_025726_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025726_2 "ewclass_64_bits.rg32i_rg32i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025726, VkglTestCase_025726_1, VkglTestCase_025726_2);

#define VkglTestCase_025727_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025727_2 "ass_64_bits.rg32i_rg32i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025727, VkglTestCase_025727_1, VkglTestCase_025727_2);

#define VkglTestCase_025728_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025728_2 "class_64_bits.rg32i_rg32i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025728, VkglTestCase_025728_1, VkglTestCase_025728_2);
