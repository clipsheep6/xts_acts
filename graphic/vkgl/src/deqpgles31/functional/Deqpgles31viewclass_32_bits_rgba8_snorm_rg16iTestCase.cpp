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

#define VkglTestCase_030402_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030402_2 "class_32_bits.rgba8_snorm_rg16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030402, VkglTestCase_030402_1, VkglTestCase_030402_2);

#define VkglTestCase_030403_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030403_2 "class_32_bits.rgba8_snorm_rg16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030403, VkglTestCase_030403_1, VkglTestCase_030403_2);

#define VkglTestCase_030404_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030404_2 "wclass_32_bits.rgba8_snorm_rg16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030404, VkglTestCase_030404_1, VkglTestCase_030404_2);

#define VkglTestCase_030405_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030405_2 "ss_32_bits.rgba8_snorm_rg16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030405, VkglTestCase_030405_1, VkglTestCase_030405_2);

#define VkglTestCase_030406_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030406_2 "ass_32_bits.rgba8_snorm_rg16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030406, VkglTestCase_030406_1, VkglTestCase_030406_2);

#define VkglTestCase_030407_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030407_2 "class_32_bits.rgba8_snorm_rg16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030407, VkglTestCase_030407_1, VkglTestCase_030407_2);

#define VkglTestCase_030408_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030408_2 "class_32_bits.rgba8_snorm_rg16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030408, VkglTestCase_030408_1, VkglTestCase_030408_2);

#define VkglTestCase_030409_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030409_2 "wclass_32_bits.rgba8_snorm_rg16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030409, VkglTestCase_030409_1, VkglTestCase_030409_2);

#define VkglTestCase_030410_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030410_2 "ss_32_bits.rgba8_snorm_rg16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030410, VkglTestCase_030410_1, VkglTestCase_030410_2);

#define VkglTestCase_030411_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030411_2 "ass_32_bits.rgba8_snorm_rg16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030411, VkglTestCase_030411_1, VkglTestCase_030411_2);

#define VkglTestCase_030412_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030412_2 "wclass_32_bits.rgba8_snorm_rg16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030412, VkglTestCase_030412_1, VkglTestCase_030412_2);

#define VkglTestCase_030413_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030413_2 "wclass_32_bits.rgba8_snorm_rg16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030413, VkglTestCase_030413_1, VkglTestCase_030413_2);

#define VkglTestCase_030414_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030414_2 "ewclass_32_bits.rgba8_snorm_rg16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030414, VkglTestCase_030414_1, VkglTestCase_030414_2);

#define VkglTestCase_030415_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030415_2 "ass_32_bits.rgba8_snorm_rg16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030415, VkglTestCase_030415_1, VkglTestCase_030415_2);

#define VkglTestCase_030416_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030416_2 "lass_32_bits.rgba8_snorm_rg16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030416, VkglTestCase_030416_1, VkglTestCase_030416_2);

#define VkglTestCase_030417_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030417_2 "ss_32_bits.rgba8_snorm_rg16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030417, VkglTestCase_030417_1, VkglTestCase_030417_2);

#define VkglTestCase_030418_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030418_2 "ss_32_bits.rgba8_snorm_rg16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030418, VkglTestCase_030418_1, VkglTestCase_030418_2);

#define VkglTestCase_030419_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030419_2 "ass_32_bits.rgba8_snorm_rg16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030419, VkglTestCase_030419_1, VkglTestCase_030419_2);

#define VkglTestCase_030420_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030420_2 "32_bits.rgba8_snorm_rg16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030420, VkglTestCase_030420_1, VkglTestCase_030420_2);

#define VkglTestCase_030421_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030421_2 "_32_bits.rgba8_snorm_rg16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030421, VkglTestCase_030421_1, VkglTestCase_030421_2);
