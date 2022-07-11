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

#define VkglTestCase_028328_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028328_2 "wclass_32_bits.rg16ui_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028328, VkglTestCase_028328_1, VkglTestCase_028328_2);

#define VkglTestCase_028329_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028329_2 "wclass_32_bits.rg16ui_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028329, VkglTestCase_028329_1, VkglTestCase_028329_2);

#define VkglTestCase_028330_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028330_2 "ewclass_32_bits.rg16ui_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028330, VkglTestCase_028330_1, VkglTestCase_028330_2);

#define VkglTestCase_028331_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028331_2 "ass_32_bits.rg16ui_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028331, VkglTestCase_028331_1, VkglTestCase_028331_2);

#define VkglTestCase_028332_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028332_2 "wclass_32_bits.rg16ui_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028332, VkglTestCase_028332_1, VkglTestCase_028332_2);

#define VkglTestCase_028333_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028333_2 "wclass_32_bits.rg16ui_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028333, VkglTestCase_028333_1, VkglTestCase_028333_2);

#define VkglTestCase_028334_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028334_2 "ewclass_32_bits.rg16ui_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028334, VkglTestCase_028334_1, VkglTestCase_028334_2);

#define VkglTestCase_028335_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028335_2 "ass_32_bits.rg16ui_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028335, VkglTestCase_028335_1, VkglTestCase_028335_2);

#define VkglTestCase_028336_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028336_2 "ewclass_32_bits.rg16ui_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028336, VkglTestCase_028336_1, VkglTestCase_028336_2);

#define VkglTestCase_028337_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028337_2 "ewclass_32_bits.rg16ui_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028337, VkglTestCase_028337_1, VkglTestCase_028337_2);

#define VkglTestCase_028338_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028338_2 "iewclass_32_bits.rg16ui_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028338, VkglTestCase_028338_1, VkglTestCase_028338_2);

#define VkglTestCase_028339_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028339_2 "lass_32_bits.rg16ui_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028339, VkglTestCase_028339_1, VkglTestCase_028339_2);

#define VkglTestCase_028340_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028340_2 "ass_32_bits.rg16ui_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028340, VkglTestCase_028340_1, VkglTestCase_028340_2);

#define VkglTestCase_028341_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028341_2 "ass_32_bits.rg16ui_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028341, VkglTestCase_028341_1, VkglTestCase_028341_2);

#define VkglTestCase_028342_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028342_2 "lass_32_bits.rg16ui_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028342, VkglTestCase_028342_1, VkglTestCase_028342_2);

#define VkglTestCase_028343_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028343_2 "_32_bits.rg16ui_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028343, VkglTestCase_028343_1, VkglTestCase_028343_2);

#define VkglTestCase_028344_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028344_2 "class_32_bits.rg16ui_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028344, VkglTestCase_028344_1, VkglTestCase_028344_2);

#define VkglTestCase_028345_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028345_2 "class_32_bits.rg16ui_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028345, VkglTestCase_028345_1, VkglTestCase_028345_2);

#define VkglTestCase_028346_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028346_2 "wclass_32_bits.rg16ui_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028346, VkglTestCase_028346_1, VkglTestCase_028346_2);

#define VkglTestCase_028347_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028347_2 "ss_32_bits.rg16ui_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028347, VkglTestCase_028347_1, VkglTestCase_028347_2);
