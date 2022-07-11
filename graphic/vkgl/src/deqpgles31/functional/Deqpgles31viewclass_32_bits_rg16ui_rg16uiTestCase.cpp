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

#define VkglTestCase_028113_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028113_2 "ewclass_32_bits.rg16ui_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028113, VkglTestCase_028113_1, VkglTestCase_028113_2);

#define VkglTestCase_028114_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028114_2 "ewclass_32_bits.rg16ui_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028114, VkglTestCase_028114_1, VkglTestCase_028114_2);

#define VkglTestCase_028115_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028115_2 "iewclass_32_bits.rg16ui_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028115, VkglTestCase_028115_1, VkglTestCase_028115_2);

#define VkglTestCase_028116_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028116_2 "lass_32_bits.rg16ui_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028116, VkglTestCase_028116_1, VkglTestCase_028116_2);

#define VkglTestCase_028117_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028117_2 "class_32_bits.rg16ui_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028117, VkglTestCase_028117_1, VkglTestCase_028117_2);

#define VkglTestCase_028118_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028118_2 "ewclass_32_bits.rg16ui_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028118, VkglTestCase_028118_1, VkglTestCase_028118_2);

#define VkglTestCase_028119_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028119_2 "ewclass_32_bits.rg16ui_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028119, VkglTestCase_028119_1, VkglTestCase_028119_2);

#define VkglTestCase_028120_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028120_2 "iewclass_32_bits.rg16ui_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028120, VkglTestCase_028120_1, VkglTestCase_028120_2);

#define VkglTestCase_028121_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028121_2 "lass_32_bits.rg16ui_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028121, VkglTestCase_028121_1, VkglTestCase_028121_2);

#define VkglTestCase_028122_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028122_2 "class_32_bits.rg16ui_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028122, VkglTestCase_028122_1, VkglTestCase_028122_2);

#define VkglTestCase_028123_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028123_2 "iewclass_32_bits.rg16ui_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028123, VkglTestCase_028123_1, VkglTestCase_028123_2);

#define VkglTestCase_028124_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028124_2 "iewclass_32_bits.rg16ui_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028124, VkglTestCase_028124_1, VkglTestCase_028124_2);

#define VkglTestCase_028125_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028125_2 "viewclass_32_bits.rg16ui_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028125, VkglTestCase_028125_1, VkglTestCase_028125_2);

#define VkglTestCase_028126_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028126_2 "class_32_bits.rg16ui_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028126, VkglTestCase_028126_1, VkglTestCase_028126_2);

#define VkglTestCase_028127_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028127_2 "wclass_32_bits.rg16ui_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028127, VkglTestCase_028127_1, VkglTestCase_028127_2);

#define VkglTestCase_028128_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028128_2 "lass_32_bits.rg16ui_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028128, VkglTestCase_028128_1, VkglTestCase_028128_2);

#define VkglTestCase_028129_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028129_2 "lass_32_bits.rg16ui_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028129, VkglTestCase_028129_1, VkglTestCase_028129_2);

#define VkglTestCase_028130_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028130_2 "class_32_bits.rg16ui_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028130, VkglTestCase_028130_1, VkglTestCase_028130_2);

#define VkglTestCase_028131_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028131_2 "s_32_bits.rg16ui_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028131, VkglTestCase_028131_1, VkglTestCase_028131_2);

#define VkglTestCase_028132_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028132_2 "ss_32_bits.rg16ui_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028132, VkglTestCase_028132_1, VkglTestCase_028132_2);

#define VkglTestCase_028133_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028133_2 "class_32_bits.rg16ui_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028133, VkglTestCase_028133_1, VkglTestCase_028133_2);

#define VkglTestCase_028134_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028134_2 "class_32_bits.rg16ui_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028134, VkglTestCase_028134_1, VkglTestCase_028134_2);

#define VkglTestCase_028135_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028135_2 "wclass_32_bits.rg16ui_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028135, VkglTestCase_028135_1, VkglTestCase_028135_2);

#define VkglTestCase_028136_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028136_2 "ss_32_bits.rg16ui_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028136, VkglTestCase_028136_1, VkglTestCase_028136_2);

#define VkglTestCase_028137_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028137_2 "lass_32_bits.rg16ui_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028137, VkglTestCase_028137_1, VkglTestCase_028137_2);
