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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026881_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026881_2 "iewclass_32_bits.r32i_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026881, VkglTestCase_026881_1, VkglTestCase_026881_2);

#define VkglTestCase_026882_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026882_2 "iewclass_32_bits.r32i_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026882, VkglTestCase_026882_1, VkglTestCase_026882_2);

#define VkglTestCase_026883_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026883_2 "viewclass_32_bits.r32i_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026883, VkglTestCase_026883_1, VkglTestCase_026883_2);

#define VkglTestCase_026884_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026884_2 "class_32_bits.r32i_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026884, VkglTestCase_026884_1, VkglTestCase_026884_2);

#define VkglTestCase_026885_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026885_2 "wclass_32_bits.r32i_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026885, VkglTestCase_026885_1, VkglTestCase_026885_2);

#define VkglTestCase_026886_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026886_2 "iewclass_32_bits.r32i_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026886, VkglTestCase_026886_1, VkglTestCase_026886_2);

#define VkglTestCase_026887_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026887_2 "iewclass_32_bits.r32i_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026887, VkglTestCase_026887_1, VkglTestCase_026887_2);

#define VkglTestCase_026888_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026888_2 "viewclass_32_bits.r32i_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026888, VkglTestCase_026888_1, VkglTestCase_026888_2);

#define VkglTestCase_026889_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026889_2 "class_32_bits.r32i_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026889, VkglTestCase_026889_1, VkglTestCase_026889_2);

#define VkglTestCase_026890_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026890_2 "wclass_32_bits.r32i_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026890, VkglTestCase_026890_1, VkglTestCase_026890_2);

#define VkglTestCase_026891_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026891_2 "viewclass_32_bits.r32i_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026891, VkglTestCase_026891_1, VkglTestCase_026891_2);

#define VkglTestCase_026892_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026892_2 "viewclass_32_bits.r32i_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026892, VkglTestCase_026892_1, VkglTestCase_026892_2);

#define VkglTestCase_026893_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026893_2 ".viewclass_32_bits.r32i_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026893, VkglTestCase_026893_1, VkglTestCase_026893_2);

#define VkglTestCase_026894_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026894_2 "wclass_32_bits.r32i_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026894, VkglTestCase_026894_1, VkglTestCase_026894_2);

#define VkglTestCase_026895_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026895_2 "ewclass_32_bits.r32i_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026895, VkglTestCase_026895_1, VkglTestCase_026895_2);

#define VkglTestCase_026896_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026896_2 "class_32_bits.r32i_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026896, VkglTestCase_026896_1, VkglTestCase_026896_2);

#define VkglTestCase_026897_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026897_2 "class_32_bits.r32i_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026897, VkglTestCase_026897_1, VkglTestCase_026897_2);

#define VkglTestCase_026898_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026898_2 "wclass_32_bits.r32i_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026898, VkglTestCase_026898_1, VkglTestCase_026898_2);

#define VkglTestCase_026899_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026899_2 "ss_32_bits.r32i_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026899, VkglTestCase_026899_1, VkglTestCase_026899_2);

#define VkglTestCase_026900_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026900_2 "ass_32_bits.r32i_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026900, VkglTestCase_026900_1, VkglTestCase_026900_2);

#define VkglTestCase_026901_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026901_2 "wclass_32_bits.r32i_rgba8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026901, VkglTestCase_026901_1, VkglTestCase_026901_2);

#define VkglTestCase_026902_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026902_2 "wclass_32_bits.r32i_rgba8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026902, VkglTestCase_026902_1, VkglTestCase_026902_2);

#define VkglTestCase_026903_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026903_2 "ewclass_32_bits.r32i_rgba8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026903, VkglTestCase_026903_1, VkglTestCase_026903_2);

#define VkglTestCase_026904_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026904_2 "ass_32_bits.r32i_rgba8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026904, VkglTestCase_026904_1, VkglTestCase_026904_2);

#define VkglTestCase_026905_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026905_2 "class_32_bits.r32i_rgba8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026905, VkglTestCase_026905_1, VkglTestCase_026905_2);
