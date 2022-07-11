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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030310_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030310_2 "class_32_bits.rgb10_a2_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030310, VkglTestCase_030310_1, VkglTestCase_030310_2);

#define VkglTestCase_030311_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030311_2 "class_32_bits.rgb10_a2_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030311, VkglTestCase_030311_1, VkglTestCase_030311_2);

#define VkglTestCase_030312_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030312_2 "wclass_32_bits.rgb10_a2_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030312, VkglTestCase_030312_1, VkglTestCase_030312_2);

#define VkglTestCase_030313_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030313_2 "ss_32_bits.rgb10_a2_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030313, VkglTestCase_030313_1, VkglTestCase_030313_2);

#define VkglTestCase_030314_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030314_2 "class_32_bits.rgb10_a2_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030314, VkglTestCase_030314_1, VkglTestCase_030314_2);

#define VkglTestCase_030315_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030315_2 "class_32_bits.rgb10_a2_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030315, VkglTestCase_030315_1, VkglTestCase_030315_2);

#define VkglTestCase_030316_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030316_2 "wclass_32_bits.rgb10_a2_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030316, VkglTestCase_030316_1, VkglTestCase_030316_2);

#define VkglTestCase_030317_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030317_2 "ss_32_bits.rgb10_a2_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030317, VkglTestCase_030317_1, VkglTestCase_030317_2);

#define VkglTestCase_030318_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030318_2 "wclass_32_bits.rgb10_a2_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030318, VkglTestCase_030318_1, VkglTestCase_030318_2);

#define VkglTestCase_030319_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030319_2 "wclass_32_bits.rgb10_a2_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030319, VkglTestCase_030319_1, VkglTestCase_030319_2);

#define VkglTestCase_030320_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030320_2 "ewclass_32_bits.rgb10_a2_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030320, VkglTestCase_030320_1, VkglTestCase_030320_2);

#define VkglTestCase_030321_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030321_2 "ass_32_bits.rgb10_a2_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030321, VkglTestCase_030321_1, VkglTestCase_030321_2);

#define VkglTestCase_030322_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030322_2 "ss_32_bits.rgb10_a2_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030322, VkglTestCase_030322_1, VkglTestCase_030322_2);

#define VkglTestCase_030323_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030323_2 "ss_32_bits.rgb10_a2_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030323, VkglTestCase_030323_1, VkglTestCase_030323_2);

#define VkglTestCase_030324_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030324_2 "ass_32_bits.rgb10_a2_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030324, VkglTestCase_030324_1, VkglTestCase_030324_2);

#define VkglTestCase_030325_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030325_2 "32_bits.rgb10_a2_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030325, VkglTestCase_030325_1, VkglTestCase_030325_2);

#define VkglTestCase_030326_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030326_2 "lass_32_bits.rgb10_a2_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030326, VkglTestCase_030326_1, VkglTestCase_030326_2);

#define VkglTestCase_030327_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030327_2 "lass_32_bits.rgb10_a2_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030327, VkglTestCase_030327_1, VkglTestCase_030327_2);

#define VkglTestCase_030328_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030328_2 "class_32_bits.rgb10_a2_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030328, VkglTestCase_030328_1, VkglTestCase_030328_2);

#define VkglTestCase_030329_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030329_2 "s_32_bits.rgb10_a2_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030329, VkglTestCase_030329_1, VkglTestCase_030329_2);
