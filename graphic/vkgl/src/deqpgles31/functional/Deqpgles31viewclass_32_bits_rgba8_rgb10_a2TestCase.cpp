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

#define VkglTestCase_028608_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028608_2 "wclass_32_bits.rgba8_rgb10_a2.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028608, VkglTestCase_028608_1, VkglTestCase_028608_2);

#define VkglTestCase_028609_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028609_2 "wclass_32_bits.rgba8_rgb10_a2.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028609, VkglTestCase_028609_1, VkglTestCase_028609_2);

#define VkglTestCase_028610_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028610_2 "ewclass_32_bits.rgba8_rgb10_a2.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028610, VkglTestCase_028610_1, VkglTestCase_028610_2);

#define VkglTestCase_028611_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028611_2 "ass_32_bits.rgba8_rgb10_a2.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028611, VkglTestCase_028611_1, VkglTestCase_028611_2);

#define VkglTestCase_028612_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028612_2 "class_32_bits.rgba8_rgb10_a2.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028612, VkglTestCase_028612_1, VkglTestCase_028612_2);

#define VkglTestCase_028613_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028613_2 "wclass_32_bits.rgba8_rgb10_a2.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028613, VkglTestCase_028613_1, VkglTestCase_028613_2);

#define VkglTestCase_028614_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028614_2 "wclass_32_bits.rgba8_rgb10_a2.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028614, VkglTestCase_028614_1, VkglTestCase_028614_2);

#define VkglTestCase_028615_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028615_2 "ewclass_32_bits.rgba8_rgb10_a2.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028615, VkglTestCase_028615_1, VkglTestCase_028615_2);

#define VkglTestCase_028616_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028616_2 "ass_32_bits.rgba8_rgb10_a2.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028616, VkglTestCase_028616_1, VkglTestCase_028616_2);

#define VkglTestCase_028617_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028617_2 "class_32_bits.rgba8_rgb10_a2.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028617, VkglTestCase_028617_1, VkglTestCase_028617_2);

#define VkglTestCase_028618_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028618_2 "ewclass_32_bits.rgba8_rgb10_a2.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028618, VkglTestCase_028618_1, VkglTestCase_028618_2);

#define VkglTestCase_028619_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028619_2 "ewclass_32_bits.rgba8_rgb10_a2.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028619, VkglTestCase_028619_1, VkglTestCase_028619_2);

#define VkglTestCase_028620_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028620_2 "iewclass_32_bits.rgba8_rgb10_a2.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028620, VkglTestCase_028620_1, VkglTestCase_028620_2);

#define VkglTestCase_028621_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028621_2 "lass_32_bits.rgba8_rgb10_a2.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028621, VkglTestCase_028621_1, VkglTestCase_028621_2);

#define VkglTestCase_028622_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028622_2 "wclass_32_bits.rgba8_rgb10_a2.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028622, VkglTestCase_028622_1, VkglTestCase_028622_2);

#define VkglTestCase_028623_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028623_2 "ass_32_bits.rgba8_rgb10_a2.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028623, VkglTestCase_028623_1, VkglTestCase_028623_2);

#define VkglTestCase_028624_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028624_2 "ass_32_bits.rgba8_rgb10_a2.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028624, VkglTestCase_028624_1, VkglTestCase_028624_2);

#define VkglTestCase_028625_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028625_2 "lass_32_bits.rgba8_rgb10_a2.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028625, VkglTestCase_028625_1, VkglTestCase_028625_2);

#define VkglTestCase_028626_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028626_2 "_32_bits.rgba8_rgb10_a2.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028626, VkglTestCase_028626_1, VkglTestCase_028626_2);

#define VkglTestCase_028627_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028627_2 "ss_32_bits.rgba8_rgb10_a2.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028627, VkglTestCase_028627_1, VkglTestCase_028627_2);

#define VkglTestCase_028628_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028628_2 "class_32_bits.rgba8_rgb10_a2.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028628, VkglTestCase_028628_1, VkglTestCase_028628_2);

#define VkglTestCase_028629_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028629_2 "class_32_bits.rgba8_rgb10_a2.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028629, VkglTestCase_028629_1, VkglTestCase_028629_2);

#define VkglTestCase_028630_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028630_2 "wclass_32_bits.rgba8_rgb10_a2.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028630, VkglTestCase_028630_1, VkglTestCase_028630_2);

#define VkglTestCase_028631_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028631_2 "ss_32_bits.rgba8_rgb10_a2.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028631, VkglTestCase_028631_1, VkglTestCase_028631_2);

#define VkglTestCase_028632_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028632_2 "ass_32_bits.rgba8_rgb10_a2.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028632, VkglTestCase_028632_1, VkglTestCase_028632_2);
