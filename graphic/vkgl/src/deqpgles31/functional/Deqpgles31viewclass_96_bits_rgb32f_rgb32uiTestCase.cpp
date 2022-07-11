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

#define VkglTestCase_025476_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025476_2 "wclass_96_bits.rgb32f_rgb32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025476, VkglTestCase_025476_1, VkglTestCase_025476_2);

#define VkglTestCase_025477_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025477_2 "wclass_96_bits.rgb32f_rgb32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025477, VkglTestCase_025477_1, VkglTestCase_025477_2);

#define VkglTestCase_025478_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025478_2 "ewclass_96_bits.rgb32f_rgb32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025478, VkglTestCase_025478_1, VkglTestCase_025478_2);

#define VkglTestCase_025479_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025479_2 "ass_96_bits.rgb32f_rgb32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025479, VkglTestCase_025479_1, VkglTestCase_025479_2);

#define VkglTestCase_025480_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025480_2 "wclass_96_bits.rgb32f_rgb32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025480, VkglTestCase_025480_1, VkglTestCase_025480_2);

#define VkglTestCase_025481_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025481_2 "wclass_96_bits.rgb32f_rgb32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025481, VkglTestCase_025481_1, VkglTestCase_025481_2);

#define VkglTestCase_025482_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025482_2 "ewclass_96_bits.rgb32f_rgb32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025482, VkglTestCase_025482_1, VkglTestCase_025482_2);

#define VkglTestCase_025483_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025483_2 "ass_96_bits.rgb32f_rgb32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025483, VkglTestCase_025483_1, VkglTestCase_025483_2);

#define VkglTestCase_025484_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025484_2 "ewclass_96_bits.rgb32f_rgb32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025484, VkglTestCase_025484_1, VkglTestCase_025484_2);

#define VkglTestCase_025485_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025485_2 "ewclass_96_bits.rgb32f_rgb32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025485, VkglTestCase_025485_1, VkglTestCase_025485_2);

#define VkglTestCase_025486_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025486_2 "iewclass_96_bits.rgb32f_rgb32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025486, VkglTestCase_025486_1, VkglTestCase_025486_2);

#define VkglTestCase_025487_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025487_2 "lass_96_bits.rgb32f_rgb32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025487, VkglTestCase_025487_1, VkglTestCase_025487_2);

#define VkglTestCase_025488_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025488_2 "ass_96_bits.rgb32f_rgb32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025488, VkglTestCase_025488_1, VkglTestCase_025488_2);

#define VkglTestCase_025489_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025489_2 "ass_96_bits.rgb32f_rgb32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025489, VkglTestCase_025489_1, VkglTestCase_025489_2);

#define VkglTestCase_025490_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025490_2 "lass_96_bits.rgb32f_rgb32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025490, VkglTestCase_025490_1, VkglTestCase_025490_2);

#define VkglTestCase_025491_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025491_2 "_96_bits.rgb32f_rgb32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025491, VkglTestCase_025491_1, VkglTestCase_025491_2);
