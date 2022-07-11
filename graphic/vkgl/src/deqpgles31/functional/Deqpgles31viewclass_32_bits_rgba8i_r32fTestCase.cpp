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
#include "../ActsDeqpgles310029TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_028698_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028698_2 "iewclass_32_bits.rgba8i_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028698, VkglTestCase_028698_1, VkglTestCase_028698_2);

#define VkglTestCase_028699_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028699_2 "iewclass_32_bits.rgba8i_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028699, VkglTestCase_028699_1, VkglTestCase_028699_2);

#define VkglTestCase_028700_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028700_2 "viewclass_32_bits.rgba8i_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028700, VkglTestCase_028700_1, VkglTestCase_028700_2);

#define VkglTestCase_028701_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028701_2 "class_32_bits.rgba8i_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028701, VkglTestCase_028701_1, VkglTestCase_028701_2);

#define VkglTestCase_028702_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028702_2 "iewclass_32_bits.rgba8i_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028702, VkglTestCase_028702_1, VkglTestCase_028702_2);

#define VkglTestCase_028703_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028703_2 "iewclass_32_bits.rgba8i_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028703, VkglTestCase_028703_1, VkglTestCase_028703_2);

#define VkglTestCase_028704_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028704_2 "viewclass_32_bits.rgba8i_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028704, VkglTestCase_028704_1, VkglTestCase_028704_2);

#define VkglTestCase_028705_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028705_2 "class_32_bits.rgba8i_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028705, VkglTestCase_028705_1, VkglTestCase_028705_2);

#define VkglTestCase_028706_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028706_2 "viewclass_32_bits.rgba8i_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028706, VkglTestCase_028706_1, VkglTestCase_028706_2);

#define VkglTestCase_028707_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028707_2 "viewclass_32_bits.rgba8i_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028707, VkglTestCase_028707_1, VkglTestCase_028707_2);

#define VkglTestCase_028708_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_028708_2 ".viewclass_32_bits.rgba8i_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028708, VkglTestCase_028708_1, VkglTestCase_028708_2);

#define VkglTestCase_028709_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028709_2 "wclass_32_bits.rgba8i_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028709, VkglTestCase_028709_1, VkglTestCase_028709_2);

#define VkglTestCase_028710_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028710_2 "class_32_bits.rgba8i_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028710, VkglTestCase_028710_1, VkglTestCase_028710_2);

#define VkglTestCase_028711_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028711_2 "class_32_bits.rgba8i_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028711, VkglTestCase_028711_1, VkglTestCase_028711_2);

#define VkglTestCase_028712_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028712_2 "wclass_32_bits.rgba8i_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028712, VkglTestCase_028712_1, VkglTestCase_028712_2);

#define VkglTestCase_028713_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028713_2 "ss_32_bits.rgba8i_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028713, VkglTestCase_028713_1, VkglTestCase_028713_2);

#define VkglTestCase_028714_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028714_2 "wclass_32_bits.rgba8i_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028714, VkglTestCase_028714_1, VkglTestCase_028714_2);

#define VkglTestCase_028715_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028715_2 "wclass_32_bits.rgba8i_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028715, VkglTestCase_028715_1, VkglTestCase_028715_2);

#define VkglTestCase_028716_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028716_2 "ewclass_32_bits.rgba8i_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028716, VkglTestCase_028716_1, VkglTestCase_028716_2);

#define VkglTestCase_028717_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028717_2 "ass_32_bits.rgba8i_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028717, VkglTestCase_028717_1, VkglTestCase_028717_2);
