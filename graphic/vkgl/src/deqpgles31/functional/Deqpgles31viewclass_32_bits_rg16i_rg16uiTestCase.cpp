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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027763_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027763_2 "ewclass_32_bits.rg16i_rg16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027763, VkglTestCase_027763_1, VkglTestCase_027763_2);

#define VkglTestCase_027764_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027764_2 "ewclass_32_bits.rg16i_rg16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027764, VkglTestCase_027764_1, VkglTestCase_027764_2);

#define VkglTestCase_027765_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027765_2 "iewclass_32_bits.rg16i_rg16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027765, VkglTestCase_027765_1, VkglTestCase_027765_2);

#define VkglTestCase_027766_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027766_2 "lass_32_bits.rg16i_rg16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027766, VkglTestCase_027766_1, VkglTestCase_027766_2);

#define VkglTestCase_027767_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027767_2 "wclass_32_bits.rg16i_rg16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027767, VkglTestCase_027767_1, VkglTestCase_027767_2);

#define VkglTestCase_027768_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027768_2 "ewclass_32_bits.rg16i_rg16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027768, VkglTestCase_027768_1, VkglTestCase_027768_2);

#define VkglTestCase_027769_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027769_2 "ewclass_32_bits.rg16i_rg16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027769, VkglTestCase_027769_1, VkglTestCase_027769_2);

#define VkglTestCase_027770_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027770_2 "iewclass_32_bits.rg16i_rg16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027770, VkglTestCase_027770_1, VkglTestCase_027770_2);

#define VkglTestCase_027771_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027771_2 "lass_32_bits.rg16i_rg16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027771, VkglTestCase_027771_1, VkglTestCase_027771_2);

#define VkglTestCase_027772_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027772_2 "wclass_32_bits.rg16i_rg16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027772, VkglTestCase_027772_1, VkglTestCase_027772_2);

#define VkglTestCase_027773_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027773_2 "iewclass_32_bits.rg16i_rg16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027773, VkglTestCase_027773_1, VkglTestCase_027773_2);

#define VkglTestCase_027774_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027774_2 "iewclass_32_bits.rg16i_rg16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027774, VkglTestCase_027774_1, VkglTestCase_027774_2);

#define VkglTestCase_027775_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027775_2 "viewclass_32_bits.rg16i_rg16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027775, VkglTestCase_027775_1, VkglTestCase_027775_2);

#define VkglTestCase_027776_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027776_2 "class_32_bits.rg16i_rg16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027776, VkglTestCase_027776_1, VkglTestCase_027776_2);

#define VkglTestCase_027777_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027777_2 "ewclass_32_bits.rg16i_rg16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027777, VkglTestCase_027777_1, VkglTestCase_027777_2);

#define VkglTestCase_027778_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027778_2 "lass_32_bits.rg16i_rg16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027778, VkglTestCase_027778_1, VkglTestCase_027778_2);

#define VkglTestCase_027779_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027779_2 "lass_32_bits.rg16i_rg16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027779, VkglTestCase_027779_1, VkglTestCase_027779_2);

#define VkglTestCase_027780_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027780_2 "class_32_bits.rg16i_rg16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027780, VkglTestCase_027780_1, VkglTestCase_027780_2);

#define VkglTestCase_027781_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027781_2 "s_32_bits.rg16i_rg16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027781, VkglTestCase_027781_1, VkglTestCase_027781_2);

#define VkglTestCase_027782_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027782_2 "ass_32_bits.rg16i_rg16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027782, VkglTestCase_027782_1, VkglTestCase_027782_2);

#define VkglTestCase_027783_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027783_2 "wclass_32_bits.rg16i_rg16ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027783, VkglTestCase_027783_1, VkglTestCase_027783_2);

#define VkglTestCase_027784_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027784_2 "wclass_32_bits.rg16i_rg16ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027784, VkglTestCase_027784_1, VkglTestCase_027784_2);

#define VkglTestCase_027785_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027785_2 "ewclass_32_bits.rg16i_rg16ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027785, VkglTestCase_027785_1, VkglTestCase_027785_2);

#define VkglTestCase_027786_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027786_2 "ass_32_bits.rg16i_rg16ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027786, VkglTestCase_027786_1, VkglTestCase_027786_2);

#define VkglTestCase_027787_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027787_2 "lass_32_bits.rg16i_rg16ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027787, VkglTestCase_027787_1, VkglTestCase_027787_2);
