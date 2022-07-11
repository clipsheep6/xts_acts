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

#define VkglTestCase_030518_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030518_2 "ss_32_bits.rgba8_snorm_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030518, VkglTestCase_030518_1, VkglTestCase_030518_2);

#define VkglTestCase_030519_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030519_2 "ss_32_bits.rgba8_snorm_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030519, VkglTestCase_030519_1, VkglTestCase_030519_2);

#define VkglTestCase_030520_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030520_2 "ass_32_bits.rgba8_snorm_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030520, VkglTestCase_030520_1, VkglTestCase_030520_2);

#define VkglTestCase_030521_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030521_2 "32_bits.rgba8_snorm_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030521, VkglTestCase_030521_1, VkglTestCase_030521_2);

#define VkglTestCase_030522_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030522_2 "s_32_bits.rgba8_snorm_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030522, VkglTestCase_030522_1, VkglTestCase_030522_2);

#define VkglTestCase_030523_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030523_2 "ss_32_bits.rgba8_snorm_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030523, VkglTestCase_030523_1, VkglTestCase_030523_2);

#define VkglTestCase_030524_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030524_2 "ss_32_bits.rgba8_snorm_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030524, VkglTestCase_030524_1, VkglTestCase_030524_2);

#define VkglTestCase_030525_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030525_2 "ass_32_bits.rgba8_snorm_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030525, VkglTestCase_030525_1, VkglTestCase_030525_2);

#define VkglTestCase_030526_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030526_2 "32_bits.rgba8_snorm_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030526, VkglTestCase_030526_1, VkglTestCase_030526_2);

#define VkglTestCase_030527_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030527_2 "s_32_bits.rgba8_snorm_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030527, VkglTestCase_030527_1, VkglTestCase_030527_2);

#define VkglTestCase_030528_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030528_2 "ass_32_bits.rgba8_snorm_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030528, VkglTestCase_030528_1, VkglTestCase_030528_2);

#define VkglTestCase_030529_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030529_2 "ass_32_bits.rgba8_snorm_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030529, VkglTestCase_030529_1, VkglTestCase_030529_2);

#define VkglTestCase_030530_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030530_2 "lass_32_bits.rgba8_snorm_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030530, VkglTestCase_030530_1, VkglTestCase_030530_2);

#define VkglTestCase_030531_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030531_2 "_32_bits.rgba8_snorm_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030531, VkglTestCase_030531_1, VkglTestCase_030531_2);

#define VkglTestCase_030532_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030532_2 "ss_32_bits.rgba8_snorm_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030532, VkglTestCase_030532_1, VkglTestCase_030532_2);

#define VkglTestCase_030533_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030533_2 "32_bits.rgba8_snorm_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030533, VkglTestCase_030533_1, VkglTestCase_030533_2);

#define VkglTestCase_030534_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030534_2 "32_bits.rgba8_snorm_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030534, VkglTestCase_030534_1, VkglTestCase_030534_2);

#define VkglTestCase_030535_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030535_2 "_32_bits.rgba8_snorm_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030535, VkglTestCase_030535_1, VkglTestCase_030535_2);

#define VkglTestCase_030536_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32_"
#define VkglTestCase_030536_2 "bits.rgba8_snorm_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030536, VkglTestCase_030536_1, VkglTestCase_030536_2);

#define VkglTestCase_030537_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_3"
#define VkglTestCase_030537_2 "2_bits.rgba8_snorm_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030537, VkglTestCase_030537_1, VkglTestCase_030537_2);
