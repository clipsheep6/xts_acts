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

#define VkglTestCase_028233_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028233_2 "class_32_bits.rg16ui_rgb10_a2ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028233, VkglTestCase_028233_1, VkglTestCase_028233_2);

#define VkglTestCase_028234_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028234_2 "class_32_bits.rg16ui_rgb10_a2ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028234, VkglTestCase_028234_1, VkglTestCase_028234_2);

#define VkglTestCase_028235_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028235_2 "wclass_32_bits.rg16ui_rgb10_a2ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028235, VkglTestCase_028235_1, VkglTestCase_028235_2);

#define VkglTestCase_028236_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028236_2 "ss_32_bits.rg16ui_rgb10_a2ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028236, VkglTestCase_028236_1, VkglTestCase_028236_2);

#define VkglTestCase_028237_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028237_2 "ass_32_bits.rg16ui_rgb10_a2ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028237, VkglTestCase_028237_1, VkglTestCase_028237_2);

#define VkglTestCase_028238_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028238_2 "class_32_bits.rg16ui_rgb10_a2ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028238, VkglTestCase_028238_1, VkglTestCase_028238_2);

#define VkglTestCase_028239_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028239_2 "class_32_bits.rg16ui_rgb10_a2ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028239, VkglTestCase_028239_1, VkglTestCase_028239_2);

#define VkglTestCase_028240_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028240_2 "wclass_32_bits.rg16ui_rgb10_a2ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028240, VkglTestCase_028240_1, VkglTestCase_028240_2);

#define VkglTestCase_028241_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028241_2 "ss_32_bits.rg16ui_rgb10_a2ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028241, VkglTestCase_028241_1, VkglTestCase_028241_2);

#define VkglTestCase_028242_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028242_2 "ass_32_bits.rg16ui_rgb10_a2ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028242, VkglTestCase_028242_1, VkglTestCase_028242_2);

#define VkglTestCase_028243_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028243_2 "wclass_32_bits.rg16ui_rgb10_a2ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028243, VkglTestCase_028243_1, VkglTestCase_028243_2);

#define VkglTestCase_028244_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028244_2 "wclass_32_bits.rg16ui_rgb10_a2ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028244, VkglTestCase_028244_1, VkglTestCase_028244_2);

#define VkglTestCase_028245_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028245_2 "ewclass_32_bits.rg16ui_rgb10_a2ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028245, VkglTestCase_028245_1, VkglTestCase_028245_2);

#define VkglTestCase_028246_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028246_2 "ass_32_bits.rg16ui_rgb10_a2ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028246, VkglTestCase_028246_1, VkglTestCase_028246_2);

#define VkglTestCase_028247_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028247_2 "lass_32_bits.rg16ui_rgb10_a2ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028247, VkglTestCase_028247_1, VkglTestCase_028247_2);

#define VkglTestCase_028248_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028248_2 "ss_32_bits.rg16ui_rgb10_a2ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028248, VkglTestCase_028248_1, VkglTestCase_028248_2);

#define VkglTestCase_028249_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028249_2 "ss_32_bits.rg16ui_rgb10_a2ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028249, VkglTestCase_028249_1, VkglTestCase_028249_2);

#define VkglTestCase_028250_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028250_2 "ass_32_bits.rg16ui_rgb10_a2ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028250, VkglTestCase_028250_1, VkglTestCase_028250_2);

#define VkglTestCase_028251_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_028251_2 "32_bits.rg16ui_rgb10_a2ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028251, VkglTestCase_028251_1, VkglTestCase_028251_2);

#define VkglTestCase_028252_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028252_2 "_32_bits.rg16ui_rgb10_a2ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028252, VkglTestCase_028252_1, VkglTestCase_028252_2);

#define VkglTestCase_028253_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028253_2 "ass_32_bits.rg16ui_rgb10_a2ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028253, VkglTestCase_028253_1, VkglTestCase_028253_2);

#define VkglTestCase_028254_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028254_2 "ass_32_bits.rg16ui_rgb10_a2ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028254, VkglTestCase_028254_1, VkglTestCase_028254_2);

#define VkglTestCase_028255_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028255_2 "lass_32_bits.rg16ui_rgb10_a2ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028255, VkglTestCase_028255_1, VkglTestCase_028255_2);

#define VkglTestCase_028256_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_028256_2 "_32_bits.rg16ui_rgb10_a2ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028256, VkglTestCase_028256_1, VkglTestCase_028256_2);

#define VkglTestCase_028257_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_028257_2 "ss_32_bits.rg16ui_rgb10_a2ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028257, VkglTestCase_028257_1, VkglTestCase_028257_2);
