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

#define VkglTestCase_025540_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025540_2 "wclass_96_bits.rgb32ui_rgb32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025540, VkglTestCase_025540_1, VkglTestCase_025540_2);

#define VkglTestCase_025541_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025541_2 "wclass_96_bits.rgb32ui_rgb32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025541, VkglTestCase_025541_1, VkglTestCase_025541_2);

#define VkglTestCase_025542_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025542_2 "ewclass_96_bits.rgb32ui_rgb32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025542, VkglTestCase_025542_1, VkglTestCase_025542_2);

#define VkglTestCase_025543_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025543_2 "ass_96_bits.rgb32ui_rgb32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025543, VkglTestCase_025543_1, VkglTestCase_025543_2);

#define VkglTestCase_025544_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025544_2 "wclass_96_bits.rgb32ui_rgb32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025544, VkglTestCase_025544_1, VkglTestCase_025544_2);

#define VkglTestCase_025545_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025545_2 "wclass_96_bits.rgb32ui_rgb32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025545, VkglTestCase_025545_1, VkglTestCase_025545_2);

#define VkglTestCase_025546_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025546_2 "ewclass_96_bits.rgb32ui_rgb32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025546, VkglTestCase_025546_1, VkglTestCase_025546_2);

#define VkglTestCase_025547_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025547_2 "ass_96_bits.rgb32ui_rgb32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025547, VkglTestCase_025547_1, VkglTestCase_025547_2);

#define VkglTestCase_025548_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025548_2 "ewclass_96_bits.rgb32ui_rgb32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025548, VkglTestCase_025548_1, VkglTestCase_025548_2);

#define VkglTestCase_025549_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025549_2 "ewclass_96_bits.rgb32ui_rgb32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025549, VkglTestCase_025549_1, VkglTestCase_025549_2);

#define VkglTestCase_025550_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025550_2 "iewclass_96_bits.rgb32ui_rgb32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025550, VkglTestCase_025550_1, VkglTestCase_025550_2);

#define VkglTestCase_025551_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025551_2 "lass_96_bits.rgb32ui_rgb32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025551, VkglTestCase_025551_1, VkglTestCase_025551_2);

#define VkglTestCase_025552_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025552_2 "ass_96_bits.rgb32ui_rgb32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025552, VkglTestCase_025552_1, VkglTestCase_025552_2);

#define VkglTestCase_025553_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025553_2 "ass_96_bits.rgb32ui_rgb32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025553, VkglTestCase_025553_1, VkglTestCase_025553_2);

#define VkglTestCase_025554_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025554_2 "lass_96_bits.rgb32ui_rgb32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025554, VkglTestCase_025554_1, VkglTestCase_025554_2);

#define VkglTestCase_025555_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025555_2 "_96_bits.rgb32ui_rgb32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025555, VkglTestCase_025555_1, VkglTestCase_025555_2);
