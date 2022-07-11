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

#define VkglTestCase_028768_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028768_2 "ewclass_32_bits.rgba8i_rg16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028768, VkglTestCase_028768_1, VkglTestCase_028768_2);

#define VkglTestCase_028769_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028769_2 "ewclass_32_bits.rgba8i_rg16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028769, VkglTestCase_028769_1, VkglTestCase_028769_2);

#define VkglTestCase_028770_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028770_2 "iewclass_32_bits.rgba8i_rg16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028770, VkglTestCase_028770_1, VkglTestCase_028770_2);

#define VkglTestCase_028771_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028771_2 "lass_32_bits.rgba8i_rg16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028771, VkglTestCase_028771_1, VkglTestCase_028771_2);

#define VkglTestCase_028772_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028772_2 "ewclass_32_bits.rgba8i_rg16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028772, VkglTestCase_028772_1, VkglTestCase_028772_2);

#define VkglTestCase_028773_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028773_2 "ewclass_32_bits.rgba8i_rg16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028773, VkglTestCase_028773_1, VkglTestCase_028773_2);

#define VkglTestCase_028774_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028774_2 "iewclass_32_bits.rgba8i_rg16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028774, VkglTestCase_028774_1, VkglTestCase_028774_2);

#define VkglTestCase_028775_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028775_2 "lass_32_bits.rgba8i_rg16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028775, VkglTestCase_028775_1, VkglTestCase_028775_2);

#define VkglTestCase_028776_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028776_2 "iewclass_32_bits.rgba8i_rg16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028776, VkglTestCase_028776_1, VkglTestCase_028776_2);

#define VkglTestCase_028777_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_028777_2 "iewclass_32_bits.rgba8i_rg16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028777, VkglTestCase_028777_1, VkglTestCase_028777_2);

#define VkglTestCase_028778_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_028778_2 "viewclass_32_bits.rgba8i_rg16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028778, VkglTestCase_028778_1, VkglTestCase_028778_2);

#define VkglTestCase_028779_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028779_2 "class_32_bits.rgba8i_rg16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028779, VkglTestCase_028779_1, VkglTestCase_028779_2);

#define VkglTestCase_028780_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028780_2 "lass_32_bits.rgba8i_rg16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028780, VkglTestCase_028780_1, VkglTestCase_028780_2);

#define VkglTestCase_028781_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_028781_2 "lass_32_bits.rgba8i_rg16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028781, VkglTestCase_028781_1, VkglTestCase_028781_2);

#define VkglTestCase_028782_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_028782_2 "class_32_bits.rgba8i_rg16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028782, VkglTestCase_028782_1, VkglTestCase_028782_2);

#define VkglTestCase_028783_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_028783_2 "s_32_bits.rgba8i_rg16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028783, VkglTestCase_028783_1, VkglTestCase_028783_2);

#define VkglTestCase_028784_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028784_2 "wclass_32_bits.rgba8i_rg16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028784, VkglTestCase_028784_1, VkglTestCase_028784_2);

#define VkglTestCase_028785_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_028785_2 "wclass_32_bits.rgba8i_rg16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028785, VkglTestCase_028785_1, VkglTestCase_028785_2);

#define VkglTestCase_028786_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_028786_2 "ewclass_32_bits.rgba8i_rg16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028786, VkglTestCase_028786_1, VkglTestCase_028786_2);

#define VkglTestCase_028787_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_028787_2 "ass_32_bits.rgba8i_rg16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310029TestSuite, TestCase_028787, VkglTestCase_028787_1, VkglTestCase_028787_2);
