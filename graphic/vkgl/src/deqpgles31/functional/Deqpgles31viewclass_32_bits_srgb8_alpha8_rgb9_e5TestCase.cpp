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

#define VkglTestCase_030940_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030940_2 "ass_32_bits.srgb8_alpha8_rgb9_e5.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030940, VkglTestCase_030940_1, VkglTestCase_030940_2);

#define VkglTestCase_030941_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030941_2 "ass_32_bits.srgb8_alpha8_rgb9_e5.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030941, VkglTestCase_030941_1, VkglTestCase_030941_2);

#define VkglTestCase_030942_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030942_2 "lass_32_bits.srgb8_alpha8_rgb9_e5.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030942, VkglTestCase_030942_1, VkglTestCase_030942_2);

#define VkglTestCase_030943_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030943_2 "_32_bits.srgb8_alpha8_rgb9_e5.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030943, VkglTestCase_030943_1, VkglTestCase_030943_2);

#define VkglTestCase_030944_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030944_2 "ass_32_bits.srgb8_alpha8_rgb9_e5.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030944, VkglTestCase_030944_1, VkglTestCase_030944_2);

#define VkglTestCase_030945_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030945_2 "ass_32_bits.srgb8_alpha8_rgb9_e5.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030945, VkglTestCase_030945_1, VkglTestCase_030945_2);

#define VkglTestCase_030946_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030946_2 "lass_32_bits.srgb8_alpha8_rgb9_e5.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030946, VkglTestCase_030946_1, VkglTestCase_030946_2);

#define VkglTestCase_030947_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030947_2 "_32_bits.srgb8_alpha8_rgb9_e5.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030947, VkglTestCase_030947_1, VkglTestCase_030947_2);

#define VkglTestCase_030948_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030948_2 "lass_32_bits.srgb8_alpha8_rgb9_e5.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030948, VkglTestCase_030948_1, VkglTestCase_030948_2);

#define VkglTestCase_030949_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030949_2 "lass_32_bits.srgb8_alpha8_rgb9_e5.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030949, VkglTestCase_030949_1, VkglTestCase_030949_2);

#define VkglTestCase_030950_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030950_2 "class_32_bits.srgb8_alpha8_rgb9_e5.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030950, VkglTestCase_030950_1, VkglTestCase_030950_2);

#define VkglTestCase_030951_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030951_2 "s_32_bits.srgb8_alpha8_rgb9_e5.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030951, VkglTestCase_030951_1, VkglTestCase_030951_2);

#define VkglTestCase_030952_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030952_2 "_32_bits.srgb8_alpha8_rgb9_e5.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030952, VkglTestCase_030952_1, VkglTestCase_030952_2);

#define VkglTestCase_030953_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030953_2 "_32_bits.srgb8_alpha8_rgb9_e5.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030953, VkglTestCase_030953_1, VkglTestCase_030953_2);

#define VkglTestCase_030954_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_030954_2 "s_32_bits.srgb8_alpha8_rgb9_e5.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030954, VkglTestCase_030954_1, VkglTestCase_030954_2);

#define VkglTestCase_030955_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_32"
#define VkglTestCase_030955_2 "_bits.srgb8_alpha8_rgb9_e5.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030955, VkglTestCase_030955_1, VkglTestCase_030955_2);

#define VkglTestCase_030956_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030956_2 "ss_32_bits.srgb8_alpha8_rgb9_e5.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030956, VkglTestCase_030956_1, VkglTestCase_030956_2);

#define VkglTestCase_030957_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030957_2 "ss_32_bits.srgb8_alpha8_rgb9_e5.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030957, VkglTestCase_030957_1, VkglTestCase_030957_2);

#define VkglTestCase_030958_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030958_2 "ass_32_bits.srgb8_alpha8_rgb9_e5.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030958, VkglTestCase_030958_1, VkglTestCase_030958_2);

#define VkglTestCase_030959_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030959_2 "32_bits.srgb8_alpha8_rgb9_e5.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030959, VkglTestCase_030959_1, VkglTestCase_030959_2);
