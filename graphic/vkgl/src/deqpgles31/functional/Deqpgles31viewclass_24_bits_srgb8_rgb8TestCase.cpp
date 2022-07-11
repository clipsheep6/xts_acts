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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031549_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031549_2 "iewclass_24_bits.srgb8_rgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031549, VkglTestCase_031549_1, VkglTestCase_031549_2);

#define VkglTestCase_031550_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031550_2 "iewclass_24_bits.srgb8_rgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031550, VkglTestCase_031550_1, VkglTestCase_031550_2);

#define VkglTestCase_031551_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031551_2 "viewclass_24_bits.srgb8_rgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031551, VkglTestCase_031551_1, VkglTestCase_031551_2);

#define VkglTestCase_031552_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031552_2 "class_24_bits.srgb8_rgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031552, VkglTestCase_031552_1, VkglTestCase_031552_2);

#define VkglTestCase_031553_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031553_2 "ewclass_24_bits.srgb8_rgb8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031553, VkglTestCase_031553_1, VkglTestCase_031553_2);

#define VkglTestCase_031554_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031554_2 "iewclass_24_bits.srgb8_rgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031554, VkglTestCase_031554_1, VkglTestCase_031554_2);

#define VkglTestCase_031555_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031555_2 "iewclass_24_bits.srgb8_rgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031555, VkglTestCase_031555_1, VkglTestCase_031555_2);

#define VkglTestCase_031556_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031556_2 "viewclass_24_bits.srgb8_rgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031556, VkglTestCase_031556_1, VkglTestCase_031556_2);

#define VkglTestCase_031557_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031557_2 "class_24_bits.srgb8_rgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031557, VkglTestCase_031557_1, VkglTestCase_031557_2);

#define VkglTestCase_031558_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031558_2 "ewclass_24_bits.srgb8_rgb8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031558, VkglTestCase_031558_1, VkglTestCase_031558_2);

#define VkglTestCase_031559_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031559_2 "viewclass_24_bits.srgb8_rgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031559, VkglTestCase_031559_1, VkglTestCase_031559_2);

#define VkglTestCase_031560_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031560_2 "viewclass_24_bits.srgb8_rgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031560, VkglTestCase_031560_1, VkglTestCase_031560_2);

#define VkglTestCase_031561_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031561_2 ".viewclass_24_bits.srgb8_rgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031561, VkglTestCase_031561_1, VkglTestCase_031561_2);

#define VkglTestCase_031562_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031562_2 "wclass_24_bits.srgb8_rgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031562, VkglTestCase_031562_1, VkglTestCase_031562_2);

#define VkglTestCase_031563_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031563_2 "iewclass_24_bits.srgb8_rgb8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031563, VkglTestCase_031563_1, VkglTestCase_031563_2);

#define VkglTestCase_031564_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031564_2 "class_24_bits.srgb8_rgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031564, VkglTestCase_031564_1, VkglTestCase_031564_2);

#define VkglTestCase_031565_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031565_2 "class_24_bits.srgb8_rgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031565, VkglTestCase_031565_1, VkglTestCase_031565_2);

#define VkglTestCase_031566_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031566_2 "wclass_24_bits.srgb8_rgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031566, VkglTestCase_031566_1, VkglTestCase_031566_2);

#define VkglTestCase_031567_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031567_2 "ss_24_bits.srgb8_rgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031567, VkglTestCase_031567_1, VkglTestCase_031567_2);

#define VkglTestCase_031568_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031568_2 "lass_24_bits.srgb8_rgb8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031568, VkglTestCase_031568_1, VkglTestCase_031568_2);
