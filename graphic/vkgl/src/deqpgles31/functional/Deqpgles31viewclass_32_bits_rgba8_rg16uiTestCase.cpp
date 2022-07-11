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

#define VkglTestCase_028463_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028463_2 "ewclass_32_bits.rgba8_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028463, VkglTestCase_028463_1, VkglTestCase_028463_2);

#define VkglTestCase_028464_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028464_2 "ewclass_32_bits.rgba8_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028464, VkglTestCase_028464_1, VkglTestCase_028464_2);

#define VkglTestCase_028465_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028465_2 "iewclass_32_bits.rgba8_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028465, VkglTestCase_028465_1, VkglTestCase_028465_2);

#define VkglTestCase_028466_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028466_2 "lass_32_bits.rgba8_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028466, VkglTestCase_028466_1, VkglTestCase_028466_2);

#define VkglTestCase_028467_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028467_2 "wclass_32_bits.rgba8_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028467, VkglTestCase_028467_1, VkglTestCase_028467_2);

#define VkglTestCase_028468_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028468_2 "ewclass_32_bits.rgba8_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028468, VkglTestCase_028468_1, VkglTestCase_028468_2);

#define VkglTestCase_028469_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028469_2 "ewclass_32_bits.rgba8_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028469, VkglTestCase_028469_1, VkglTestCase_028469_2);

#define VkglTestCase_028470_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028470_2 "iewclass_32_bits.rgba8_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028470, VkglTestCase_028470_1, VkglTestCase_028470_2);

#define VkglTestCase_028471_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028471_2 "lass_32_bits.rgba8_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028471, VkglTestCase_028471_1, VkglTestCase_028471_2);

#define VkglTestCase_028472_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028472_2 "wclass_32_bits.rgba8_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028472, VkglTestCase_028472_1, VkglTestCase_028472_2);

#define VkglTestCase_028473_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028473_2 "iewclass_32_bits.rgba8_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028473, VkglTestCase_028473_1, VkglTestCase_028473_2);

#define VkglTestCase_028474_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028474_2 "iewclass_32_bits.rgba8_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028474, VkglTestCase_028474_1, VkglTestCase_028474_2);

#define VkglTestCase_028475_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028475_2 "viewclass_32_bits.rgba8_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028475, VkglTestCase_028475_1, VkglTestCase_028475_2);

#define VkglTestCase_028476_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028476_2 "class_32_bits.rgba8_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028476, VkglTestCase_028476_1, VkglTestCase_028476_2);

#define VkglTestCase_028477_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028477_2 "ewclass_32_bits.rgba8_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028477, VkglTestCase_028477_1, VkglTestCase_028477_2);

#define VkglTestCase_028478_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028478_2 "lass_32_bits.rgba8_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028478, VkglTestCase_028478_1, VkglTestCase_028478_2);

#define VkglTestCase_028479_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028479_2 "lass_32_bits.rgba8_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028479, VkglTestCase_028479_1, VkglTestCase_028479_2);

#define VkglTestCase_028480_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028480_2 "class_32_bits.rgba8_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028480, VkglTestCase_028480_1, VkglTestCase_028480_2);

#define VkglTestCase_028481_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028481_2 "s_32_bits.rgba8_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028481, VkglTestCase_028481_1, VkglTestCase_028481_2);

#define VkglTestCase_028482_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028482_2 "ass_32_bits.rgba8_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028482, VkglTestCase_028482_1, VkglTestCase_028482_2);

#define VkglTestCase_028483_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028483_2 "wclass_32_bits.rgba8_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028483, VkglTestCase_028483_1, VkglTestCase_028483_2);

#define VkglTestCase_028484_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028484_2 "wclass_32_bits.rgba8_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028484, VkglTestCase_028484_1, VkglTestCase_028484_2);

#define VkglTestCase_028485_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028485_2 "ewclass_32_bits.rgba8_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028485, VkglTestCase_028485_1, VkglTestCase_028485_2);

#define VkglTestCase_028486_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028486_2 "ass_32_bits.rgba8_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028486, VkglTestCase_028486_1, VkglTestCase_028486_2);

#define VkglTestCase_028487_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028487_2 "lass_32_bits.rgba8_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028487, VkglTestCase_028487_1, VkglTestCase_028487_2);
